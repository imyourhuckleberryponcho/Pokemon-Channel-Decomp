/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

extern void *gx;
s32 __cvt_fp2unsigned(f32);
extern f32 lbl_80351D38;
extern f32 lbl_80351D40;
extern f32 lbl_80351D58;
extern f32 lbl_80351D6C;

void fn_800E1CC0(s32 arg0, s32 arg1, s32 arg2);
void fn_800E1D1C(s32 arg0);
void fn_800E1D68(s32 arg0);
void fn_800E1DA4(void);
void GXSetDispCopySrc(u16 arg0, s32 arg1, u16 arg2, u16 arg3);
void GXSetTexCopySrc(u16 arg0, s32 arg1, u16 arg2, u16 arg3);
void GXSetDispCopyDst(s32 arg0);
void GXSetTexCopyDst(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_800E2078(s32 arg0);
void GXSetCopyClamp(s32 arg0);
u32 GXSetDispCopyYScale(f32 farg0);
void GXSetCopyClear(void *arg0, s32 arg1);
void GXSetCopyFilter(u8 arg0, void *arg1, u8 arg2, void *arg3);
void GXSetDispCopyGamma(s32 arg0);
void GXCopyDisp(u32 arg0, u8 arg1);
void GXCopyTex(u32 arg0, u8 arg1);
void GXClearBoundingBox(void);
void GXInitLightAttn(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5);
void GXInitLightSpot();
void GXInitLightDistAttn(void *arg0, s32 arg1, f32 farg0, f32 farg1);
void fn_800E2A08(void *arg0, f32 farg0, f32 farg1, f32 farg2);
void fn_800E2A18(void *arg0, f32 farg0, f32 farg1, f32 farg2);
void GXInitLightColor(void *arg0, s32 *arg1);
f32 GXLoadLightObjImm(void *arg0, s32 arg1, s32 arg3);
void GXSetChanAmbColor(s32 arg0, void *arg1);
void GXSetChanMatColor(s32 arg0, void *arg1);
void fn_800E2CA4(u8 arg0);
void GXSetChanCtrl(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void GXGetTexBufferSize();
void __GetImageTileCount();
void GXInitTexObj();
void GXInitTexObjCI(void *arg0, s32 arg_sp8);

void fn_800E1CC0(s32 arg0, s32 arg1, s32 arg2) { } /* draft: stub */

void fn_800E1D1C(s32 arg0) {
    s32 var_r3;

    var_r3 = arg0;
    switch (var_r3) {                               /* irregular */
    case 1:
        var_r3 = 2;
        break;
    case 2:
        var_r3 = 1;
        break;
    }
    M2C_FIELD(gx, s32 *, 0x204) = (s32) ((M2C_FIELD(gx, s32 *, 0x204) & 0xFFFF3FFF) | (var_r3 << 0xE));
    M2C_FIELD(gx, s32 *, 0x4F4) = (s32) (M2C_FIELD(gx, s32 *, 0x4F4) | 4);
}

void fn_800E1D68(s32 arg0) {
    M2C_FIELD(gx, s32 *, 0x204) = (s32) ((M2C_FIELD(gx, s32 *, 0x204) & 0xFFF7FFFF) | ((arg0 << 0x13) & 0x07F80000));
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = 0xFE080000;
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = (s32) M2C_FIELD(gx, s32 *, 0x204);
}

void fn_800E1DA4(void) {
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = (s32) M2C_FIELD(gx, s32 *, 0x204);
    M2C_FIELD(gx, s16 *, 2) = 0;
}

void GXSetDispCopySrc(u16 arg0, s32 arg1, u16 arg2, u16 arg3) {
    M2C_FIELD(gx, s32 *, 0x1E4) = 0;
    M2C_FIELD(gx, s32 *, 0x1E0) = 0;
    M2C_FIELD(gx, s32 *, 0x1E0) = (s32) ((M2C_FIELD(gx, s32 *, 0x1E0) & 0xFFFFFC00) | arg0);
    M2C_FIELD(gx, s32 *, 0x1E0) = (s32) ((M2C_FIELD(gx, s32 *, 0x1E0) & 0xFFF003FF) | ((arg1 << 0xA) & 0x03FFFC00));
    M2C_FIELD(gx, s32 *, 0x1E0) = (s32) ((M2C_FIELD(gx, s32 *, 0x1E0) & 0xFFFFFF) | 0x49000000);
    M2C_FIELD(gx, s32 *, 0x1E4) = (s32) ((M2C_FIELD(gx, s32 *, 0x1E4) & 0xFFF003FF) | ((arg3 - 1) << 0xA));
    M2C_FIELD(gx, s32 *, 0x1E4) = (s32) ((M2C_FIELD(gx, s32 *, 0x1E4) & 0xFFFFFC00) | (arg2 - 1));
    M2C_FIELD(gx, s32 *, 0x1E4) = (s32) ((M2C_FIELD(gx, s32 *, 0x1E4) & 0xFFFFFF) | 0x4A000000);
}

void GXSetTexCopySrc(u16 arg0, s32 arg1, u16 arg2, u16 arg3) {
    M2C_FIELD(gx, s32 *, 0x1F4) = 0;
    M2C_FIELD(gx, s32 *, 0x1F0) = 0;
    M2C_FIELD(gx, s32 *, 0x1F0) = (s32) ((M2C_FIELD(gx, s32 *, 0x1F0) & 0xFFFFFC00) | arg0);
    M2C_FIELD(gx, s32 *, 0x1F0) = (s32) ((M2C_FIELD(gx, s32 *, 0x1F0) & 0xFFF003FF) | ((arg1 << 0xA) & 0x03FFFC00));
    M2C_FIELD(gx, s32 *, 0x1F0) = (s32) ((M2C_FIELD(gx, s32 *, 0x1F0) & 0xFFFFFF) | 0x49000000);
    M2C_FIELD(gx, s32 *, 0x1F4) = (s32) ((M2C_FIELD(gx, s32 *, 0x1F4) & 0xFFF003FF) | ((arg3 - 1) << 0xA));
    M2C_FIELD(gx, s32 *, 0x1F4) = (s32) ((M2C_FIELD(gx, s32 *, 0x1F4) & 0xFFFFFC00) | (arg2 - 1));
    M2C_FIELD(gx, s32 *, 0x1F4) = (s32) ((M2C_FIELD(gx, s32 *, 0x1F4) & 0xFFFFFF) | 0x4A000000);
}

void GXSetDispCopyDst(s32 arg0) {
    M2C_FIELD(gx, s32 *, 0x1E8) = 0;
    M2C_FIELD(gx, s32 *, 0x1E8) = (s32) ((M2C_FIELD(gx, s32 *, 0x1E8) & 0xFFFFFC00) | ((s32) ((arg0 * 2) & 0xFFFE) >> 5));
    M2C_FIELD(gx, s32 *, 0x1E8) = (s32) ((M2C_FIELD(gx, s32 *, 0x1E8) & 0xFFFFFF) | 0x4D000000);
}

void GXSetTexCopyDst(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp20;
    M2C_UNK sp1C;
    s32 sp18;
    u8 var_r31;

    var_r31 = arg2 & 0xF;
    M2C_FIELD(gx, u8 *, 0x200) = 0U;
    if (arg2 == 0x13) {
        var_r31 = 0xB;
    }
    if (arg2 != 0x26) {
        if ((arg2 < 0x26) && (arg2 < 4)) {
            if (arg2 < 0) {
                goto block_8;
            }
            goto block_7;
        }
block_8:
        M2C_FIELD(gx, s32 *, 0x1FC) = (s32) ((M2C_FIELD(gx, s32 *, 0x1FC) & 0xFFFE7FFF) | 0x10000);
    } else {
block_7:
        M2C_FIELD(gx, s32 *, 0x1FC) = (s32) ((M2C_FIELD(gx, s32 *, 0x1FC) & 0xFFFE7FFF) | 0x10000 | 0x8000);
    }
    M2C_FIELD(gx, u8 *, 0x200) = (u8) (((arg2 & 0x10) - 0x10) == 0);
    M2C_FIELD(gx, s32 *, 0x1FC) = (s32) ((M2C_FIELD(gx, s32 *, 0x1FC) & 0xFFFFFFF7 & ~8) | (var_r31 & 8));
    M2C_FIELD(gx, s32 *, 0x1F8) = (s32) ((M2C_FIELD(gx, s32 *, 0x1F8) & 0xFFFFFF) | 0x4D000000);
    __GetImageTileCount(arg2, arg0, arg1, &sp20, &sp1C, &sp18);
    M2C_FIELD(gx, s32 *, 0x1F8) = 0;
    M2C_FIELD(gx, s32 *, 0x1F8) = (s32) ((M2C_FIELD(gx, s32 *, 0x1F8) & 0xFFFFFC00) | (sp20 * sp18));
    M2C_FIELD(gx, s32 *, 0x1FC) = (s32) ((M2C_FIELD(gx, s32 *, 0x1FC) & 0xFFFFFDFF) | ((arg3 << 9) & 0x1FE00));
    M2C_FIELD(gx, s32 *, 0x1FC) = (s32) ((M2C_FIELD(gx, s32 *, 0x1FC) & 0xFFFFFF8F) | ((var_r31 & 7) * 0x10));
}

void fn_800E2078(s32 arg0) {
    M2C_FIELD(gx, s32 *, 0x1EC) = (s32) ((M2C_FIELD(gx, s32 *, 0x1EC) & 0xFFFFCFFF) | (arg0 << 0xC));
    M2C_FIELD(gx, s32 *, 0x1FC) = (s32) (M2C_FIELD(gx, s32 *, 0x1FC) & 0xFFFFCFFF);
}

void GXSetCopyClamp(s32 arg0) {
    s32 temp_r5;
    u8 temp_r4;

    temp_r4 = ((arg0 & 1) - 1) == 0;
    M2C_FIELD(gx, s32 *, 0x1EC) = (s32) ((M2C_FIELD(gx, s32 *, 0x1EC) & 0xFFFFFFFE) | temp_r4);
    temp_r5 = ((u32) CLZ((arg0 & 2) - 2) >> 4U) & 0x1FE;
    M2C_FIELD(gx, s32 *, 0x1EC) = (s32) ((M2C_FIELD(gx, s32 *, 0x1EC) & 0xFFFFFFFD) | temp_r5);
    M2C_FIELD(gx, s32 *, 0x1FC) = (s32) ((M2C_FIELD(gx, s32 *, 0x1FC) & 0xFFFFFFFE) | temp_r4);
    M2C_FIELD(gx, s32 *, 0x1FC) = (s32) ((M2C_FIELD(gx, s32 *, 0x1FC) & 0xFFFFFFFD) | temp_r5);
}

u32 GXSetDispCopyYScale(f32 farg0) {
    u32 temp_r0;
    u32 temp_r6;
    u32 var_r3;
    u32 var_r5;

    temp_r6 = __cvt_fp2unsigned(lbl_80351D38 / farg0) & 0x1FF;
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = (s32) (temp_r6 | 0x4E000000);
    M2C_FIELD(gx, s16 *, 2) = 0;
    var_r5 = temp_r6;
    M2C_FIELD(gx, s32 *, 0x1EC) = (s32) ((M2C_FIELD(gx, s32 *, 0x1EC) & 0xFFFFFBFF) | (((temp_r6 != 0x100) << 0xA) & 0x3FC00));
    temp_r0 = M2C_FIELD(gx, u32 *, 0x1E4);
    var_r3 = ((u32) ((temp_r0 >> 2U) & 0x3FF00) / temp_r6) + 1;
    if ((temp_r6 > 0x80U) && (temp_r6 < 0x100U)) {
loop_4:
        if (!(var_r5 & 1)) {
            var_r5 = var_r5 >> 1U;
            goto loop_4;
        }
        if (((((temp_r0 >> 0xAU) & 0x3FF) + 1) % var_r5) == 0) {
            var_r3 += 1;
        }
    }
    if (var_r3 > 0x400U) {
        var_r3 = 0x400U;
    }
    return var_r3;
}

void GXSetCopyClear(void *arg0, s32 arg1) {
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = (s32) (((((M2C_FIELD(arg0, u8 *, 3) << 8) & ~0xFF) | (M2C_FIELD(arg0, u8 *, 0) & 0xFF)) & 0xFFFFFF) | 0x4F000000);
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = (s32) (((((M2C_FIELD(arg0, u8 *, 1) << 8) & ~0xFF) | (M2C_FIELD(arg0, u8 *, 2) & 0xFF)) & 0xFFFFFF) | 0x50000000);
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = (s32) ((arg1 & 0xFFFFFF) | 0x51000000);
    M2C_FIELD(gx, s16 *, 2) = 0;
}

void GXSetCopyFilter(u8 arg0, void *arg1, u8 arg2, void *arg3) {
    s32 var_r10;
    s32 var_r6;
    s32 var_r7;
    s32 var_r7_2;
    s32 var_r8;
    u8 var_r9;

    if (arg0 != 0) {
        var_r7 = ((((M2C_FIELD(arg1, u8 *, 0xB) << 0x14) & ~0xFFFFF) | ((((M2C_FIELD(arg1, u8 *, 0xA) << 0x10) & ~0xFFFF) | ((((M2C_FIELD(arg1, u8 *, 9) << 0xC) & ~0xFFF) | ((((M2C_FIELD(arg1, u8 *, 8) << 8) & ~0xFF) | ((((M2C_FIELD(arg1, u8 *, 7) * 0x10) & ~0xF) | (M2C_FIELD(arg1, u8 *, 6) & 0xF)) & 0xFF)) & 0xFFF)) & 0xFFFF)) & 0xFFFFF)) & 0xFFFFFF) | 0x02000000;
        var_r8 = ((((M2C_FIELD(arg1, u8 *, 5) << 0x14) & ~0xFFFFF) | ((((M2C_FIELD(arg1, u8 *, 4) << 0x10) & ~0xFFFF) | ((((M2C_FIELD(arg1, u8 *, 3) << 0xC) & ~0xFFF) | ((((M2C_FIELD(arg1, u8 *, 2) << 8) & ~0xFF) | ((((M2C_FIELD(arg1, u8 *, 1) * 0x10) & ~0xF) | (M2C_FIELD(arg1, u8 *, 0) & 0xF)) & 0xFF)) & 0xFFF)) & 0xFFFF)) & 0xFFFFF)) & 0xFFFFFF) | 0x01000000;
        var_r9 = ((((M2C_FIELD(arg1, u8 *, 0x11) << 0x14) & ~0xFFFFF) | ((((M2C_FIELD(arg1, u8 *, 0x10) << 0x10) & ~0xFFFF) | ((((M2C_FIELD(arg1, u8 *, 0xF) << 0xC) & ~0xFFF) | ((((M2C_FIELD(arg1, u8 *, 0xE) << 8) & ~0xFF) | ((((M2C_FIELD(arg1, u8 *, 0xD) * 0x10) & ~0xF) | (M2C_FIELD(arg1, u8 *, 0xC) & 0xF)) & 0xFF)) & 0xFFF)) & 0xFFFF)) & 0xFFFFF)) & 0xFFFFFF) | 0x03000000;
        var_r10 = ((((M2C_FIELD(arg1, u8 *, 0x17) << 0x14) & ~0xFFFFF) | ((((M2C_FIELD(arg1, u8 *, 0x16) << 0x10) & ~0xFFFF) | ((((M2C_FIELD(arg1, u8 *, 0x15) << 0xC) & ~0xFFF) | ((((M2C_FIELD(arg1, u8 *, 0x14) << 8) & ~0xFF) | ((((M2C_FIELD(arg1, u8 *, 0x13) * 0x10) & ~0xF) | (M2C_FIELD(arg1, u8 *, 0x12) & 0xF)) & 0xFF)) & 0xFFF)) & 0xFFFF)) & 0xFFFFF)) & 0xFFFFFF) | 0x04000000;
    } else {
        var_r8 = 0x01666666;
        var_r7 = 0x02666666;
        var_r9 = 0x03666666;
        var_r10 = 0x04666666;
    }
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = var_r8;
    *(s8 *)0xCC008000 = var_r7;
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = var_r9;
    *(s8 *)0xCC008000 = var_r10;
    if (arg2 != 0) {
        var_r6 = ((((((M2C_FIELD(arg3, u8 *, 0) | 0x53000000) & 0xFFFFF03F) | (M2C_FIELD(arg3, u8 *, 1) << 6)) & 0xFFFC0FFF) | (M2C_FIELD(arg3, u8 *, 2) << 0xC)) & 0xFF03FFFF) | (M2C_FIELD(arg3, u8 *, 3) << 0x12);
        var_r7_2 = ((((M2C_FIELD(arg3, u8 *, 4) | 0x54000000) & 0xFFFFF03F) | (M2C_FIELD(arg3, u8 *, 5) << 6)) & 0xFFFC0FFF) | (M2C_FIELD(arg3, u8 *, 6) << 0xC);
    } else {
        var_r6 = 0x53595000;
        var_r7_2 = 0x54000015;
    }
    /* draft: did not compile: *(void *)0xCC008000 = 0x61; */
    /* draft: did not compile: *(void *)0xCC008000 = var_r6; */
    /* draft: did not compile: *(void *)0xCC008000 = 0x61; */
    /* draft: did not compile: *(void *)0xCC008000 = var_r7_2; */
    M2C_FIELD(gx, s16 *, 2) = 0;
}

void GXSetDispCopyGamma(s32 arg0) {
    M2C_FIELD(gx, s32 *, 0x1EC) = (s32) ((M2C_FIELD(gx, s32 *, 0x1EC) & 0xFFFFFE7F) | (arg0 << 7));
}

void GXCopyDisp(u32 arg0, u8 arg1) { } /* draft: stub */

void GXCopyTex(u32 arg0, u8 arg1) { } /* draft: stub */

void GXClearBoundingBox(void) {
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = 0x550003FF;
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = 0x560003FF;
    M2C_FIELD(gx, s16 *, 2) = 0;
}

void GXInitLightAttn(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5) {
    M2C_FIELD(arg0, f32 *, 0x10) = farg0;
    M2C_FIELD(arg0, f32 *, 0x14) = farg1;
    M2C_FIELD(arg0, f32 *, 0x18) = farg2;
    M2C_FIELD(arg0, f32 *, 0x1C) = farg3;
    M2C_FIELD(arg0, f32 *, 0x20) = farg4;
    M2C_FIELD(arg0, f32 *, 0x24) = farg5;
}

void GXInitLightSpot() { } /* draft: stub */

void GXInitLightDistAttn(void *arg0, s32 arg1, f32 farg0, f32 farg1) {
    f32 temp_f1;
    f32 temp_f4;
    f32 var_f4;
    f32 var_f3;
    s32 var_r4;

    var_r4 = arg1;
    if (farg0 < lbl_80351D40) {
        var_r4 = 0;
    }
    if ((farg1 <= lbl_80351D40) || (M2C_ERROR(/* unknown instruction: cror eq, gt, eq */), ((farg1 == lbl_80351D58) != 0))) {
        var_r4 = 0;
    }
    switch (var_r4) {                               /* irregular */
    case 1:
        var_f4 = lbl_80351D40;
        var_f3 = (lbl_80351D58 - farg1) / (farg1 * farg0);
        break;
    case 2:
        temp_f4 = farg1 * farg0;
        temp_f1 = lbl_80351D6C * (lbl_80351D58 - farg1);
        var_f3 = temp_f1 / temp_f4;
        var_f4 = temp_f1 / (farg0 * temp_f4);
        break;
    case 3:
        var_f3 = lbl_80351D40;
        var_f4 = (lbl_80351D58 - farg1) / (farg0 * (farg1 * farg0));
        break;
    default:
    case 0:
        var_f3 = lbl_80351D40;
        var_f4 = var_f3;
        break;
    }
    M2C_FIELD(arg0, f32 *, 0x1C) = lbl_80351D58;
    M2C_FIELD(arg0, f32 *, 0x20) = var_f3;
    M2C_FIELD(arg0, f32 *, 0x24) = var_f4;
}

void fn_800E2A08(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x28) = farg0;
    M2C_FIELD(arg0, f32 *, 0x2C) = farg1;
    M2C_FIELD(arg0, f32 *, 0x30) = farg2;
}

void fn_800E2A18(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) -farg0;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) -farg1;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) -farg2;
}

void GXInitLightColor(void *arg0, s32 *arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) *arg1;
}

f32 GXLoadLightObjImm(void *arg0, s32 arg1, s32 arg3) {
    s32 temp_r6;

    *(s8 *)0xCC008000 = (s32) (((((0x1F - CLZ(arg1)) * 0x10) & 0x70) + 0x600) | 0xF0000);
    *(s8 *)0xCC008000 = 0x10;
    temp_r6 = arg3 ^ arg3;
    /* draft: did not compile: *(0xCC010000 - 0x8000) = temp_r6; */
    /* draft: did not compile: *(0xCC010000 - 0x8000) = temp_r6; */
    /* draft: did not compile: *(0xCC010000 - 0x8000) = temp_r6; */
    /* draft: did not compile: *(0xCC010000 - 0x8000) = (s32) M2C_FIELD(arg0, s32 *, 0xC); */
    M2C_FIELD(gx, s16 *, 2) = 1;
    return M2C_ERROR(/* psq_l unimplemented */);
}

void GXSetChanAmbColor(s32 arg0, void *arg1) { } /* draft: stub */

void GXSetChanMatColor(s32 arg0, void *arg1) { } /* draft: stub */

void fn_800E2CA4(u8 arg0) {
    M2C_FIELD(gx, s32 *, 0x204) = (s32) ((M2C_FIELD(gx, s32 *, 0x204) & 0xFFFFFF8F) | ((arg0 * 0x10) & 0xFF0));
    *(s8 *)0xCC008000 = 0x10;
    *(s8 *)0xCC008000 = 0x1009;
    M2C_FIELD(gx, s32 *, 0x4F4) = (s32) (M2C_FIELD(gx, s32 *, 0x4F4) | 4);
    *(s8 *)0xCC008000 = (s32) arg0;
}

void GXSetChanCtrl(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 temp_r6;
    u8 var_r8;

    var_r8 = arg5;
    if (arg6 == 0U) {
        var_r8 = 0;
    }
    temp_r6 = ((((((((((((((arg1 * 2) & 0x1FE) | arg3) & 0xFFFFFFBF) | (arg2 << 6)) & 0xFFFFFE7F) | (var_r8 << 7)) & 0xFFFFFDFF) | ((arg6 != 2) << 9)) & 0xFFFFFBFF) | ((arg6 != 0) << 0xA)) & 0xFFFFFFC3 & ~0x3C) | ((arg4 << 2) & 0x3C)) & 0xFFFF87FF & ~0x7800) | ((arg4 << 7) & 0x7800);
    *(s8 *)0xCC008000 = 0x10;
    *(s8 *)0xCC008000 = temp_r6;
    *(s8 *)0xCC008000 = (s32) ((arg0 & 3) + 0x100E);
    if (arg0 == 4) {
        *(s8 *)0xCC008000 = 0x10;
        *(s8 *)0xCC008000 = 0x1010;
        *(s8 *)0xCC008000 = temp_r6;
    } else if (arg0 == 5) {
        *(s8 *)0xCC008000 = 0x10;
        *(s8 *)0xCC008000 = 0x1011;
        *(s8 *)0xCC008000 = temp_r6;
    }
    M2C_FIELD(gx, s16 *, 2) = 1;
}

void GXGetTexBufferSize() { } /* draft: stub */

void __GetImageTileCount() { } /* draft: stub */

void GXInitTexObj() { } /* draft: stub */

#pragma push
#pragma dont_inline on
void GXInitTexObjCI(void *arg0, s32 arg_sp8) {
    GXInitTexObj();
    M2C_FIELD(arg0, u8 *, 0x1F) = (u8) (M2C_FIELD(arg0, u8 *, 0x1F) & 0xFFFFFFFD);
    M2C_FIELD(arg0, s32 *, 0x18) = arg_sp8;
}
#pragma pop
