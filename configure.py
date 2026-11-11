#!/usr/bin/env python3

###
# Generates build files for the project.
# This file also includes the project configuration,
# such as compiler flags and the object matching status.
#
# Usage:
#   python3 configure.py
#   ninja
#
# Append --help to see available options.
###

import argparse
import sys
from pathlib import Path
from typing import Any, Dict, List

from tools.project import (
    Object,
    ProgressCategory,
    ProjectConfig,
    calculate_progress,
    generate_build,
    is_windows,
)

# Game versions
DEFAULT_VERSION = 0
VERSIONS = [
    "GPAE01",  # 0
]

parser = argparse.ArgumentParser()
parser.add_argument(
    "mode",
    choices=["configure", "progress"],
    default="configure",
    help="script mode (default: configure)",
    nargs="?",
)
parser.add_argument(
    "-v",
    "--version",
    choices=VERSIONS,
    type=str.upper,
    default=VERSIONS[DEFAULT_VERSION],
    help="version to build",
)
parser.add_argument(
    "--build-dir",
    metavar="DIR",
    type=Path,
    default=Path("build"),
    help="base build directory (default: build)",
)
parser.add_argument(
    "--binutils",
    metavar="BINARY",
    type=Path,
    help="path to binutils (optional)",
)
parser.add_argument(
    "--compilers",
    metavar="DIR",
    type=Path,
    help="path to compilers (optional)",
)
parser.add_argument(
    "--map",
    action="store_true",
    help="generate map file(s)",
)
parser.add_argument(
    "--debug",
    action="store_true",
    help="build with debug info (non-matching)",
)
if not is_windows():
    parser.add_argument(
        "--wrapper",
        metavar="BINARY",
        type=Path,
        help="path to wibo or wine (optional)",
    )
parser.add_argument(
    "--dtk",
    metavar="BINARY | DIR",
    type=Path,
    help="path to decomp-toolkit binary or source (optional)",
)
parser.add_argument(
    "--objdiff",
    metavar="BINARY | DIR",
    type=Path,
    help="path to objdiff-cli binary or source (optional)",
)
parser.add_argument(
    "--sjiswrap",
    metavar="EXE",
    type=Path,
    help="path to sjiswrap.exe (optional)",
)
parser.add_argument(
    "--ninja",
    metavar="BINARY",
    type=Path,
    help="path to ninja binary (optional)",
)
parser.add_argument(
    "--verbose",
    action="store_true",
    help="print verbose output",
)
parser.add_argument(
    "--non-matching",
    dest="non_matching",
    action="store_true",
    help="builds equivalent (but non-matching) or modded objects",
)
parser.add_argument(
    "--warn",
    dest="warn",
    type=str,
    choices=["all", "off", "error"],
    help="how to handle warnings",
)
parser.add_argument(
    "--no-progress",
    dest="progress",
    action="store_false",
    help="disable progress calculation",
)
args = parser.parse_args()

config = ProjectConfig()
config.version = str(args.version)
version_num = VERSIONS.index(config.version)

# Apply arguments
config.build_dir = args.build_dir
config.dtk_path = args.dtk
config.objdiff_path = args.objdiff
config.binutils_path = args.binutils
config.compilers_path = args.compilers
config.generate_map = args.map
config.non_matching = args.non_matching
config.sjiswrap_path = args.sjiswrap
config.ninja_path = args.ninja
config.progress = args.progress
if not is_windows():
    config.wrapper = args.wrapper
# Don't build asm unless we're --non-matching
if not config.non_matching:
    config.asm_dir = None

# Tool versions
config.binutils_tag = "2.42-2"
config.compilers_tag = "20251118"
config.dtk_tag = "v1.8.3"
config.objdiff_tag = "v3.6.1"
config.sjiswrap_tag = "v1.2.2"
config.wibo_tag = "1.0.3"

# Project
config.config_path = Path("config") / config.version / "config.yml"
config.check_sha_path = Path("config") / config.version / "build.sha1"
config.asflags = [
    "-mgekko",
    "--strip-local-absolute",
    "-I include",
    f"-I build/{config.version}/include",
    f"--defsym BUILD_VERSION={version_num}",
]
config.ldflags = [
    "-fp hardware",
    "-nodefaults",
]
if args.debug:
    config.ldflags.append("-g")  # Or -gdwarf-2 for Wii linkers
if args.map:
    config.ldflags.append("-mapunused")
    # config.ldflags.append("-listclosure") # For Wii linkers

# Use for any additional files that should cause a re-configure when modified
config.reconfig_deps = []

# Optional numeric ID for decomp.me preset
# Can be overridden in libraries or objects
config.scratch_preset_id = None

# Base flags, common to most GC/Wii games.
# Generally leave untouched, with overrides added below.
cflags_base = [
    "-nodefaults",
    "-proc gekko",
    "-align powerpc",
    "-enum int",
    "-fp hardware",
    "-Cpp_exceptions off",
    "-O4,p",
    "-inline auto",
    '-pragma "cats off"',
    '-pragma "warn_notinlined off"',
    "-maxerrors 1",
    "-nosyspath",
    "-RTTI off",
    "-fp_contract on",
    "-str reuse",
    "-multibyte",  # For Wii compilers, replace with `-enc SJIS`
    "-i include",
    f"-i build/{config.version}/include",
    f"-DBUILD_VERSION={version_num}",
    f"-DVERSION_{config.version}",
]

# Debug flags
if args.debug:
    # Or -sym dwarf-2 for Wii compilers
    cflags_base.extend(["-sym on", "-DDEBUG=1"])
else:
    cflags_base.append("-DNDEBUG=1")

# Warning flags
if args.warn == "all":
    cflags_base.append("-W all")
elif args.warn == "off":
    cflags_base.append("-W off")
elif args.warn == "error":
    cflags_base.append("-W error")

# Metrowerks library flags
cflags_runtime = [
    *cflags_base,
    "-use_lmw_stmw on",
    "-str reuse,pool,readonly",
    "-gccinc",
    "-common off",
    "-inline auto",
]

# REL flags
cflags_rel = [
    *cflags_base,
    "-sdata 0",
    "-sdata2 0",
]

config.linker_version = "GC/1.3.2"


# Helper function for Dolphin libraries
def DolphinLib(lib_name: str, objects: List[Object]) -> Dict[str, Any]:
    return {
        "lib": lib_name,
        "mw_version": "GC/1.2.5n",
        "cflags": cflags_base,
        "progress_category": "sdk",
        "objects": objects,
    }


# Helper function for REL script objects
def Rel(lib_name: str, objects: List[Object]) -> Dict[str, Any]:
    return {
        "lib": lib_name,
        "mw_version": "GC/1.3.2",
        "cflags": cflags_rel,
        "progress_category": "game",
        "objects": objects,
    }


Matching = True                   # Object matches and should be linked
NonMatching = False               # Object does not match and should not be linked
Equivalent = config.non_matching  # Object should be linked when configured with --non-matching


# Object is only matching for specific versions
def MatchingFor(*versions):
    return config.version in versions


config.warn_missing_config = True
config.warn_missing_source = False
# config/<VER>/units.json lists the chunks .text was split into; config/<VER>/settings.json holds the
# compiler version that scored best on the first drafts.
import json as _json

_units_path = Path("config") / config.version / "units.json"
_settings_path = Path("config") / config.version / "settings.json"
_units = _json.loads(_units_path.read_text()) if _units_path.exists() else []
# ---- units (generated from units.json) ----
_objects = [
    Object(NonMatching, "game/t80005840.c"),
    Object(NonMatching, "game/t800069B8.c"),
    Object(NonMatching, "game/t800089A0.c"),
    Object(NonMatching, "game/t8000A424.c"),
    Object(NonMatching, "game/t8000BD08.c"),
    Object(NonMatching, "game/t8000DB6C.c"),
    Object(NonMatching, "game/t8000FB58.c"),
    Object(NonMatching, "game/t80011184.c"),
    Object(NonMatching, "game/t80013144.c"),
    Object(NonMatching, "game/t80014C98.c"),
    Object(NonMatching, "game/t8001573C.c"),
    Object(NonMatching, "game/t80016CB8.c"),
    Object(NonMatching, "game/t80017D3C.c"),
    Object(NonMatching, "game/t80019B9C.c"),
    Object(NonMatching, "game/t8001A884.c"),
    Object(NonMatching, "game/t8001C18C.c"),
    Object(NonMatching, "game/t8001D700.c"),
    Object(NonMatching, "game/t8001E644.c"),
    Object(NonMatching, "game/t80020580.c"),
    Object(NonMatching, "game/t80022280.c"),
    Object(NonMatching, "game/t8002420C.c"),
    Object(NonMatching, "game/t80026108.c"),
    Object(NonMatching, "game/t800280F8.c"),
    Object(NonMatching, "game/t8002A080.c"),
    Object(NonMatching, "game/t8002BEC0.c"),
    Object(NonMatching, "game/t8002DA1C.c"),
    Object(NonMatching, "game/t8002FA14.c"),
    Object(NonMatching, "game/t800319F0.c"),
    Object(NonMatching, "game/t800339E0.c"),
    Object(NonMatching, "game/t8003472C.c"),
    Object(NonMatching, "game/t800359C4.c"),
    Object(NonMatching, "game/t800379C4.c"),
    Object(NonMatching, "game/t800387CC.c"),
    Object(NonMatching, "game/t8003A72C.c"),
    Object(NonMatching, "game/t8003C5E8.c"),
    Object(NonMatching, "game/t8003E4D0.c"),
    Object(NonMatching, "game/t800402C8.c"),
    Object(NonMatching, "game/t80042208.c"),
    Object(NonMatching, "game/t800441A0.c"),
    Object(NonMatching, "game/t80045990.c"),
    Object(NonMatching, "game/t8004658C.c"),
    Object(NonMatching, "game/t80047924.c"),
    Object(NonMatching, "game/t800488E4.c"),
    Object(NonMatching, "game/t8004A850.c"),
    Object(NonMatching, "game/t8004C540.c"),
    Object(NonMatching, "game/t8004E2B8.c"),
    Object(NonMatching, "game/t80050094.c"),
    Object(NonMatching, "game/t80051F00.c"),
    Object(NonMatching, "game/t80053D10.c"),
    Object(NonMatching, "game/t80055D08.c"),
    Object(NonMatching, "game/t80057B24.c"),
    Object(NonMatching, "game/t80059918.c"),
    Object(NonMatching, "game/t8005B82C.c"),
    Object(NonMatching, "game/t8005D810.c"),
    Object(NonMatching, "game/t8005E21C.c"),
    Object(NonMatching, "game/t8005F118.c"),
    Object(NonMatching, "game/t80060108.c"),
    Object(NonMatching, "game/t80061918.c"),
    Object(NonMatching, "game/t80062578.c"),
    Object(NonMatching, "game/t80062BA8.c"),
    Object(NonMatching, "game/t80063040.c"),
    Object(NonMatching, "game/t80063ED0.c"),
    Object(NonMatching, "game/t80065D98.c"),
    Object(NonMatching, "game/t80067A9C.c"),
    Object(NonMatching, "game/t8006988C.c"),
    Object(NonMatching, "game/t8006B72C.c"),
    Object(NonMatching, "game/t8006CBDC.c"),
    Object(NonMatching, "game/t8006EB64.c"),
    Object(NonMatching, "game/t800704AC.c"),
    Object(NonMatching, "game/t80071748.c"),
    Object(NonMatching, "game/t80072E30.c"),
    Object(NonMatching, "game/t800747B0.c"),
    Object(NonMatching, "game/t80075B78.c"),
    Object(NonMatching, "game/t80076D4C.c"),
    Object(NonMatching, "game/t80078CB8.c"),
    Object(NonMatching, "game/t8007A934.c"),
    Object(NonMatching, "game/t8007B7A4.c"),
    Object(NonMatching, "game/t8007C4EC.c"),
    Object(NonMatching, "game/t8007E31C.c"),
    Object(NonMatching, "game/t8007FA38.c"),
    Object(NonMatching, "game/t800815F0.c"),
    Object(NonMatching, "game/t80082FAC.c"),
    Object(NonMatching, "game/t80084608.c"),
    Object(NonMatching, "game/t800865F8.c"),
    Object(NonMatching, "game/t80087BC8.c"),
    Object(NonMatching, "game/t800887D8.c"),
    Object(NonMatching, "game/t80089454.c"),
    Object(NonMatching, "game/t8008A128.c"),
    Object(NonMatching, "game/t8008AD1C.c"),
    Object(NonMatching, "game/t8008B6C0.c"),
    Object(NonMatching, "game/t8008C41C.c"),
    Object(NonMatching, "game/t8008D514.c"),
    Object(NonMatching, "game/t8008E0A8.c"),
    Object(NonMatching, "game/t8008ECE0.c"),
    Object(NonMatching, "game/t8008F848.c"),
    Object(NonMatching, "game/t80090630.c"),
    Object(NonMatching, "game/t800915CC.c"),
    Object(NonMatching, "game/t800921A4.c"),
    Object(NonMatching, "game/t80093360.c"),
    Object(NonMatching, "game/t8009403C.c"),
    Object(NonMatching, "game/t80094E28.c"),
    Object(NonMatching, "game/t80095CF0.c"),
    Object(NonMatching, "game/t80096FDC.c"),
    Object(NonMatching, "game/t80098234.c"),
    Object(NonMatching, "game/t800998FC.c"),
    Object(NonMatching, "game/t8009AA38.c"),
    Object(NonMatching, "game/t8009C9A4.c"),
    Object(NonMatching, "game/t8009D6F8.c"),
    Object(NonMatching, "game/t8009EE18.c"),
    Object(NonMatching, "game/t800A0D48.c"),
    Object(NonMatching, "game/t800A2D28.c"),
    Object(NonMatching, "game/t800A4CEC.c"),
    Object(NonMatching, "game/t800A67E4.c"),
    Object(NonMatching, "game/t800A8608.c"),
    Object(NonMatching, "game/t800A958C.c"),
    Object(NonMatching, "game/t800AAE38.c"),
    Object(NonMatching, "game/t800ABBE4.c"),
    Object(NonMatching, "game/t800AD97C.c"),
    Object(NonMatching, "game/t800AF904.c"),
    Object(NonMatching, "game/t800B1898.c"),
    Object(NonMatching, "game/t800B33A4.c"),
    Object(NonMatching, "game/t800B4E20.c"),
    Object(NonMatching, "game/t800B6DA0.c"),
    Object(NonMatching, "game/t800B8D3C.c"),
    Object(NonMatching, "game/t800BACB0.c"),
    Object(NonMatching, "game/t800BCC1C.c"),
    Object(NonMatching, "game/t800BEAE0.c"),
    Object(NonMatching, "game/t800C09F8.c"),
    Object(NonMatching, "game/t800C28E4.c"),
    Object(NonMatching, "game/t800C3840.c"),
    Object(NonMatching, "game/t800C4B3C.c"),
    Object(NonMatching, "game/t800C61A8.c"),
    Object(NonMatching, "game/t800C772C.c"),
    Object(NonMatching, "game/t800C8B6C.c"),
    Object(NonMatching, "game/t800CAB64.c"),
    Object(NonMatching, "game/t800CC164.c"),
    Object(NonMatching, "game/t800CD4D8.c"),
    Object(NonMatching, "game/t800CE964.c"),
    Object(NonMatching, "game/t800D0734.c"),
    Object(NonMatching, "game/t800D1FE8.c"),
    Object(NonMatching, "game/t800D3F8C.c"),
    Object(NonMatching, "game/t800D51A0.c"),
    Object(NonMatching, "game/t800D6F28.c"),
    Object(NonMatching, "game/t800D8C80.c"),
    Object(NonMatching, "game/t800DAAA8.c"),
    Object(NonMatching, "game/t800DCA2C.c"),
    Object(NonMatching, "game/t800DE8CC.c"),
    Object(NonMatching, "game/t800E083C.c"),
    Object(NonMatching, "game/t800E1CC0.c"),
    Object(NonMatching, "game/t800E3294.c"),
    Object(NonMatching, "game/t800E4748.c"),
    Object(NonMatching, "game/t800E58B4.c"),
    Object(NonMatching, "game/t800E7514.c"),
    Object(NonMatching, "game/t800E94D8.c"),
    Object(NonMatching, "game/t800EA5F8.c"),
    Object(NonMatching, "game/t800EC434.c"),
    Object(NonMatching, "game/t800EE298.c"),
    Object(NonMatching, "game/t800EF7E4.c"),
    Object(NonMatching, "game/t800F1768.c"),
    Object(NonMatching, "game/t800F3550.c"),
    Object(NonMatching, "game/t800F4448.c"),
    Object(NonMatching, "game/t800F6400.c"),
    Object(NonMatching, "game/t800F8300.c"),
    Object(NonMatching, "game/t800F9F94.c"),
    Object(NonMatching, "game/t800FBF24.c"),
    Object(NonMatching, "game/t800FDB60.c"),
    Object(NonMatching, "game/t800FFA90.c"),
    Object(NonMatching, "game/t801014F8.c"),
    Object(NonMatching, "game/t801034BC.c"),
    Object(NonMatching, "game/t80105498.c"),
    Object(NonMatching, "game/t8010748C.c"),
    Object(NonMatching, "game/t80108C34.c"),
    Object(NonMatching, "game/t80109968.c"),
    Object(NonMatching, "game/t8010B874.c"),
    Object(NonMatching, "game/t8010D810.c"),
    Object(NonMatching, "game/t8010F7FC.c"),
    Object(NonMatching, "game/t8011083C.c"),
    Object(NonMatching, "game/t801126D0.c"),
    Object(NonMatching, "game/t80113C28.c"),
    Object(NonMatching, "game/t80115A3C.c"),
    Object(NonMatching, "game/t801173E0.c"),
    Object(NonMatching, "game/t80119368.c"),
    Object(NonMatching, "game/t8011B1D4.c"),
    Object(NonMatching, "game/t8011D124.c"),
    Object(NonMatching, "game/t8011F058.c"),
    Object(NonMatching, "game/t80120F18.c"),
    Object(NonMatching, "game/t80122ED8.c"),
    Object(NonMatching, "game/t80124EC8.c"),
    Object(NonMatching, "game/t80126C18.c"),
    Object(NonMatching, "game/t80127904.c"),
    Object(NonMatching, "game/t80129ABC.c"),
    Object(NonMatching, "game/t8012B53C.c"),
    Object(NonMatching, "game/t8012D520.c"),
    Object(NonMatching, "game/t8012E5EC.c"),
    Object(NonMatching, "game/t8012F40C.c"),
    Object(NonMatching, "game/t80131310.c"),
    Object(NonMatching, "game/t80132A20.c"),
    Object(NonMatching, "game/t801346DC.c"),
    Object(NonMatching, "game/t8013665C.c"),
    Object(NonMatching, "game/t80137FC8.c"),
    Object(NonMatching, "game/t80139DA8.c"),
    Object(NonMatching, "game/t8013A7FC.c"),
    Object(NonMatching, "game/t8013BEC4.c"),
    Object(NonMatching, "game/t8013DE4C.c"),
    Object(NonMatching, "game/t8013F170.c"),
    Object(NonMatching, "game/t8014068C.c"),
    Object(NonMatching, "game/t80142468.c"),
    Object(NonMatching, "game/t80144390.c"),
    Object(NonMatching, "game/t80149074.c"),
    Object(NonMatching, "game/t8014AB7C.c"),
    Object(NonMatching, "game/t8014AC8C.c"),
    Object(NonMatching, "game/t8014B048.c"),
    Object(NonMatching, "game/t8014B7C8.c"),
    Object(NonMatching, "game/t8014D7BC.c"),
    Object(NonMatching, "game/t8014F768.c"),
    Object(NonMatching, "game/t8015126C.c"),
    Object(NonMatching, "game/t801531EC.c"),
    Object(NonMatching, "game/t80155140.c"),
    Object(NonMatching, "game/t801570B4.c"),
    Object(NonMatching, "game/t801583F8.c"),
    Object(NonMatching, "game/t8015A100.c"),
    Object(NonMatching, "game/t8015BE08.c"),
    Object(NonMatching, "game/t8015D654.c"),
    Object(NonMatching, "game/t8015E920.c"),
]
# ---- end units ----
_settings = _json.loads(_settings_path.read_text()) if _settings_path.exists() else {}
config.libs = []
if _objects:
    config.libs.append(
        {
            "lib": "game",
            "mw_version": _settings.get("mw_version", config.linker_version),
            "cflags": [*cflags_base, *_settings.get("extra_cflags", [])],
            "progress_category": "game",
            "objects": _objects,
        }
    )


# Optional callback to adjust link order. This can be used to add, remove, or reorder objects.
# This is called once per module, with the module ID and the current link order.
#
# For example, this adds "dummy.c" to the end of the DOL link order if configured with --non-matching.
# "dummy.c" *must* be configured as a Matching (or Equivalent) object in order to be linked.
def link_order_callback(module_id: int, objects: List[str]) -> List[str]:
    # Don't modify the link order for matching builds
    if not config.non_matching:
        return objects
    if module_id == 0:  # DOL
        return objects + ["dummy.c"]
    return objects


# Uncomment to enable the link order callback.
# config.link_order_callback = link_order_callback


# Optional extra categories for progress tracking
# Adjust as desired for your project
config.progress_categories = [
    ProgressCategory("game", "Game Code"),
    ProgressCategory("sdk", "SDK Code"),
]
config.progress_each_module = args.verbose
# Optional extra arguments to `objdiff-cli report generate`
config.progress_report_args = [
    # Marks relocations as mismatching if the target value is different
    # Default is "functionRelocDiffs=none", which is most lenient
    # "--config functionRelocDiffs=data_value",
]

if args.mode == "configure":
    # Write build.ninja and objdiff.json
    generate_build(config)
elif args.mode == "progress":
    # Print progress information
    calculate_progress(config)
else:
    sys.exit("Unknown mode: " + args.mode)
