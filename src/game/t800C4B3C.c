/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

s32 OSDisableInterrupts();
M2C_UNK OSRestoreInterrupts(s32);
M2C_UNK DBPrintf();
s32 PPCMfl2cr();
M2C_UNK PPCMtl2cr(s32);
M2C_UNK PPCHalt();
s32 PPCMfhid2();
M2C_UNK PPCMthid2(s32);
M2C_UNK DCEnable();
s32 PPCMfhid0();
s32 PPCMfmsr();
M2C_UNK PPCMtmsr(s32);
void *__cvt_fp2unsigned(f64);
extern M2C_UNK lbl_802A5B28;
M2C_UNK vprintf();
s32 PPCMffpscr();
M2C_UNK PPCMtfpscr(s32, M2C_UNK);
extern M2C_UNK __OSErrorTable;
extern s32 lbl_8034FF40;
extern s32 sp;

void ICInvalidateRange(s32 arg0, u32 arg1);
s32 ICFlashInvalidate(void);
s32 ICEnable(void);
void __LCEnable(void);
void LCEnable(void);
void LCDisable(void);
void fn_800C4CC0(s32 arg0, s32 arg1, u32 arg2);
void LCStoreBlocks(s32 arg0, s32 arg1, u32 arg2);
u32 fn_800C4D08(s32 arg0, s32 arg1, s32 arg2);
u32 fn_800C4DB4(s32 arg0, s32 arg1, s32 arg2);
void fn_800C4E60();
void L2GlobalInvalidate(void);
void DMAErrorHandler(s32 arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7);
void __OSCacheInit(void);
static f64 __OSLoadFPUContext(void *arg1, f64 farg0);
static s32 __OSSaveFPUContext(void *arg2, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7, f64 farg8, f64 farg9, f64 farg10, f64 farg11, f64 farg12);
void OSSaveFPUContext(s32 arg0);
void OSSetCurrentContext(s32 arg0);
s32 fn_800C5410(void);
s32 OSSaveContext(void *arg0);
s32 OSLoadContext(void *arg0);
void *fn_800C5574(void);
void OSClearContext(void *arg0);
void OSInitContext(void *arg0, s32 arg1, s32 arg2);
void OSDumpContext(void *arg0);
static s32 OSSwitchFPUContext(void *arg1);
void __OSContextInit(void);
void OSFillFPUContext(void *arg0, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7, f64 farg8, f64 farg9, f64 farg10, f64 farg11, f64 farg12);
void OSReport(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7, M2C_UNK arg_sp8);
void fn_800C5B7C(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7, M2C_UNK arg_sp8);
u32 OSSetErrorHandler(u16 arg0, u32 arg1);
void __OSUnhandledException();

void ICInvalidateRange(s32 arg0, u32 arg1) {
    s32 var_r3;
    u32 var_ctr;

    var_r3 = arg0;
    if (arg1 > 0U) {
        var_ctr = (u32) (arg1 + (var_r3 & 0x1F) + 0x1F) >> 5U;
        do {
            M2C_ICACHE_INVALIDATE(var_r3);
            var_r3 += 0x20;
            var_ctr -= 1;
        } while (var_ctr != 0);
        M2C_SYNC();
        M2C_SYNC();
    }
}

s32 ICFlashInvalidate(void) {
    M2C_ERROR(/* unknown instruction: mtspr HID0, $r3 */);
    return M2C_ERROR(/* unknown instruction: mfspr $r3, HID0 */) | 0x800;
}

s32 ICEnable(void) {
    M2C_SYNC();
    M2C_ERROR(/* unknown instruction: mtspr HID0, $r3 */);
    return M2C_ERROR(/* unknown instruction: mfspr $r3, HID0 */) | 0x8000;
}

void __LCEnable(void) {
    s32 var_ctr;
    u16 var_ctr_2;
    s32 var_r3;
    s32 var_r3_2;

    M2C_ERROR(/* unknown instruction: mfmsr $r5 */);
    M2C_ERROR(/* unknown instruction: mtmsr $r5 */);
    var_r3 = 0x80000000;
    var_ctr = 0x400;
    do {
        M2C_PREFETCH(var_r3);
        M2C_DCACHE_CLEAN(var_r3);
        var_r3 += 0x20;
        var_ctr -= 1;
    } while (var_ctr != 0);
    M2C_ERROR(/* unknown instruction: mfspr $r4, HID2 */);
    M2C_ERROR(/* unknown instruction: mtspr HID2, $r4 */);
    M2C_ERROR(/* unknown instruction: mtdbatl 0x3, $r3 */);
    M2C_ERROR(/* unknown instruction: mtdbatu 0x3, $r3 */);
    M2C_SYNC();
    var_r3_2 = 0xE0000000;
    var_ctr_2 = 0x200;
    do {
        M2C_DCACHE_BLOCK_SETZERO_LOCKED(var_r3_2);
        var_r3_2 += 0x20;
        var_ctr_2 -= 1;
    } while (var_ctr_2 != 0);
}

void LCEnable(void) {
    s32 temp_r31;

    temp_r31 = OSDisableInterrupts();
    __LCEnable();
    OSRestoreInterrupts(temp_r31);
}

void LCDisable(void) {
    u16 var_ctr;
    s32 var_r3;

    var_r3 = 0xE0000000;
    var_ctr = 0x200;
    do {
        M2C_DCACHE_INVALIDATE(var_r3);
        var_r3 += 0x20;
        var_ctr -= 1;
    } while (var_ctr != 0);
    M2C_ERROR(/* unknown instruction: mfspr $r4, HID2 */);
    M2C_ERROR(/* unknown instruction: mtspr HID2, $r4 */);
}

void fn_800C4CC0(s32 arg0, s32 arg1, u32 arg2) {
    M2C_ERROR(/* unknown instruction: mtspr DMA_U, $r6 */);
    M2C_ERROR(/* unknown instruction: mtspr DMA_L, $r6 */);
}

void LCStoreBlocks(s32 arg0, s32 arg1, u32 arg2) {
    M2C_ERROR(/* unknown instruction: mtspr DMA_U, $r6 */);
    M2C_ERROR(/* unknown instruction: mtspr DMA_L, $r6 */);
}

u32 fn_800C4D08(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r28;
    s32 var_r29;
    u32 temp_r3;
    u32 var_r31;

    var_r28 = arg0;
    var_r29 = arg1;
    temp_r3 = (u32) (arg2 + 0x1F) >> 5U;
    var_r31 = temp_r3;
loop_6:
    if (var_r31 != 0) {
        if (var_r31 < 0x80U) {
            fn_800C4CC0(var_r28, var_r29, var_r31);
            var_r31 = 0;
        } else {
            fn_800C4CC0(var_r28, var_r29, 0U);
            var_r31 -= 0x80;
            var_r28 += 0x1000;
            var_r29 += 0x1000;
        }
        goto loop_6;
    }
    return (u32) (temp_r3 + 0x7F) >> 7U;
}

u32 fn_800C4DB4(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r28;
    s32 var_r29;
    u32 temp_r3;
    u32 var_r31;

    var_r28 = arg0;
    var_r29 = arg1;
    temp_r3 = (u32) (arg2 + 0x1F) >> 5U;
    var_r31 = temp_r3;
loop_6:
    if (var_r31 != 0) {
        if (var_r31 < 0x80U) {
            LCStoreBlocks(var_r28, var_r29, var_r31);
            var_r31 = 0;
        } else {
            LCStoreBlocks(var_r28, var_r29, 0U);
            var_r31 -= 0x80;
            var_r28 += 0x1000;
            var_r29 += 0x1000;
        }
        goto loop_6;
    }
    return (u32) (temp_r3 + 0x7F) >> 7U;
}

void fn_800C4E60() { } /* draft: stub */

void L2GlobalInvalidate(void) {
    M2C_SYNC();
    PPCMtl2cr(PPCMfl2cr() & 0x7FFFFFFF);
    M2C_SYNC();
    PPCMtl2cr(PPCMfl2cr() | 0x200000);
    do {

    } while ((u32) (PPCMfl2cr() & 1) != 0);
    PPCMtl2cr(PPCMfl2cr() & 0xFFDFFFFF);
loop_7:
    if ((u32) (PPCMfl2cr() & 1) != 0) {
        /* draft: did not compile: DBPrintf(&@69_802A58F8); */
        goto loop_7;
    }
}

void DMAErrorHandler(s32 arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7) { } /* draft: stub */

#pragma push
#pragma peephole off
void __OSCacheInit(void) {
    s32 temp_r30;

    if (0 /* draft: did not compile */) {
        ICEnable();
        /* draft: did not compile: DBPrintf(&@69_802A58F8 + 0x1AC); */
    }
    if ((u32) (PPCMfhid0() & 0x4000) == 0) {
        DCEnable();
        /* draft: did not compile: DBPrintf(&@69_802A58F8 + 0x1C8); */
    }
    if ((u32) (PPCMfl2cr() & 0x80000000) == 0) {
        temp_r30 = PPCMfmsr();
        M2C_SYNC();
        M2C_SYNC();
        M2C_SYNC();
        PPCMtl2cr(PPCMfl2cr() & 0x7FFFFFFF);
        M2C_SYNC();
        PPCMtmsr(temp_r30);
        PPCMtmsr(0x30);
        L2GlobalInvalidate();
        PPCMtl2cr((PPCMfl2cr() | 0x80000000) & 0xFFDFFFFF);
        /* draft: did not compile: DBPrintf(&@69_802A58F8 + 0x1E4); */
    }
    /* draft: did not compile: OSSetErrorHandler(1, DMAErrorHandler); */
    /* draft: did not compile: DBPrintf(&@69_802A58F8 + 0x1FC); */
}
#pragma pop

static f64 __OSLoadFPUContext(void *arg1, f64 farg0) {
    f64 var_f1;

    var_f1 = farg0;
    if (M2C_FIELD(arg1, u16 *, 0x1A2) & 1) {
        M2C_ERROR(/* unknown instruction: mtfsf 0xff, $f0 */);
        if (((u32) M2C_ERROR(/* unknown instruction: mfspr $r5, HID2 */) >> 0x1DU) & 1) {

        }
        var_f1 = M2C_FIELD(arg1, f64 *, 0x98);
    }
    return var_f1;
}

static s32 __OSSaveFPUContext(void *arg2, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7, f64 farg8, f64 farg9, f64 farg10, f64 farg11, f64 farg12) {
    s32 saved_reg_f31;
    s32 saved_reg_f30;
    s32 saved_reg_f29;
    s32 saved_reg_f28;
    s32 saved_reg_f27;
    s32 saved_reg_f26;
    s32 saved_reg_f25;
    s32 saved_reg_f24;
    s32 saved_reg_f23;
    s32 saved_reg_f22;
    s32 saved_reg_f21;
    s32 saved_reg_f20;
    s32 saved_reg_f19;
    s32 saved_reg_f18;
    s32 saved_reg_f17;
    s32 saved_reg_f16;
    s32 saved_reg_f15;
    s32 saved_reg_f14;
    s32 temp_r3;

    M2C_FIELD(arg2, u16 *, 0x1A2) = (u16) (M2C_FIELD(arg2, u16 *, 0x1A2) | 1);
    M2C_FIELD(arg2, f64 *, 0x90) = (f64) M2C_ERROR(/* Read from unset register $f0 */);
    M2C_FIELD(arg2, f64 *, 0x98) = farg0;
    M2C_FIELD(arg2, f64 *, 0xA0) = farg1;
    M2C_FIELD(arg2, f64 *, 0xA8) = farg2;
    M2C_FIELD(arg2, f64 *, 0xB0) = farg3;
    M2C_FIELD(arg2, f64 *, 0xB8) = farg4;
    M2C_FIELD(arg2, f64 *, 0xC0) = farg5;
    M2C_FIELD(arg2, f64 *, 0xC8) = farg6;
    M2C_FIELD(arg2, f64 *, 0xD0) = farg7;
    M2C_FIELD(arg2, f64 *, 0xD8) = farg8;
    M2C_FIELD(arg2, f64 *, 0xE0) = farg9;
    M2C_FIELD(arg2, f64 *, 0xE8) = farg10;
    M2C_FIELD(arg2, f64 *, 0xF0) = farg11;
    M2C_FIELD(arg2, f64 *, 0xF8) = farg12;
    M2C_FIELD(arg2, f64 *, 0x100) = (f64) saved_reg_f14;
    M2C_FIELD(arg2, f64 *, 0x108) = (f64) saved_reg_f15;
    M2C_FIELD(arg2, f64 *, 0x110) = (f64) saved_reg_f16;
    M2C_FIELD(arg2, f64 *, 0x118) = (f64) saved_reg_f17;
    M2C_FIELD(arg2, f64 *, 0x120) = (f64) saved_reg_f18;
    M2C_FIELD(arg2, f64 *, 0x128) = (f64) saved_reg_f19;
    M2C_FIELD(arg2, f64 *, 0x130) = (f64) saved_reg_f20;
    M2C_FIELD(arg2, f64 *, 0x138) = (f64) saved_reg_f21;
    M2C_FIELD(arg2, f64 *, 0x140) = (f64) saved_reg_f22;
    M2C_FIELD(arg2, f64 *, 0x148) = (f64) saved_reg_f23;
    M2C_FIELD(arg2, f64 *, 0x150) = (f64) saved_reg_f24;
    M2C_FIELD(arg2, f64 *, 0x158) = (f64) saved_reg_f25;
    M2C_FIELD(arg2, f64 *, 0x160) = (f64) saved_reg_f26;
    M2C_FIELD(arg2, f64 *, 0x168) = (f64) saved_reg_f27;
    M2C_FIELD(arg2, f64 *, 0x170) = (f64) saved_reg_f28;
    M2C_FIELD(arg2, f64 *, 0x178) = (f64) saved_reg_f29;
    M2C_FIELD(arg2, f64 *, 0x180) = (f64) saved_reg_f30;
    M2C_FIELD(arg2, f64 *, 0x188) = (f64) saved_reg_f31;
    M2C_FIELD(arg2, f64 *, 0x190) = (f64) M2C_ERROR(/* unknown instruction: mffs $f0 */);
    temp_r3 = ((u32) M2C_ERROR(/* unknown instruction: mfspr $r3, HID2 */) >> 0x1DU) & 1;
    if (temp_r3 != 0) {

    }
    return temp_r3;
}

void OSSaveFPUContext(s32 arg0) {
    /* draft: did not compile: __OSSaveFPUContext(arg0); */
}

void OSSetCurrentContext(s32 arg0) {
    *(s32 *)0x800000D4 = arg0;
    *(s32 *)0x800000C0 = arg0 & 0x3FFFFFFF;
    if ((s32) *(s32 *)0x800000D8 == arg0) {
        M2C_FIELD(arg0, s32 *, 0x19C) = (s32) (M2C_FIELD(arg0, s32 *, 0x19C) | 0x2000);
        M2C_ERROR(/* unknown instruction: mfmsr $r6 */);
        M2C_ERROR(/* unknown instruction: mtmsr $r6 */);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x19C) = (s32) (M2C_FIELD(arg0, s32 *, 0x19C) & 0xFFFFDFFF);
    M2C_ERROR(/* unknown instruction: mfmsr $r6 */);
    M2C_ERROR(/* unknown instruction: mtmsr $r6 */);
    M2C_SYNC();
}

s32 fn_800C5410(void) {
    return *(s32 *)0x800000D4;
}

s32 OSSaveContext(void *arg0) {
    u8 saved_reg_r2;
    s32 saved_reg_lr;
    M2C_FIELD(arg0, s32 *, 0x1A8) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r0, GQR1 */);
    M2C_FIELD(arg0, s32 *, 0x1AC) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r0, GQR2 */);
    M2C_FIELD(arg0, s32 *, 0x1B0) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r0, GQR3 */);
    M2C_FIELD(arg0, s32 *, 0x1B4) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r0, GQR4 */);
    M2C_FIELD(arg0, s32 *, 0x1B8) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r0, GQR5 */);
    M2C_FIELD(arg0, s32 *, 0x1BC) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r0, GQR6 */);
    M2C_FIELD(arg0, s32 *, 0x1C0) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r0, GQR7 */);
    M2C_FIELD(arg0, s32 *, 0x80) = (s32) M2C_ERROR(/* unknown instruction: mfcr $r0 */);
    M2C_FIELD(arg0, s32 *, 0x84) = (s32) saved_reg_lr;
    M2C_FIELD(arg0, s32 *, 0x198) = (s32) saved_reg_lr;
    M2C_FIELD(arg0, s32 *, 0x19C) = (s32) M2C_ERROR(/* unknown instruction: mfmsr $r0 */);
    M2C_FIELD(arg0, s32 *, 0x88) = (s32) M2C_ERROR(/* Read from unset register $ctr */);
    M2C_FIELD(arg0, void **, 4) = (void *) sp;
    M2C_FIELD(arg0, s32 *, 0x8C) = (s32) M2C_ERROR(/* unknown instruction: mfxer $r0 */);
    M2C_FIELD(arg0, s32 *, 8) = (s32) saved_reg_r2;
    M2C_FIELD(arg0, s32 *, 0xC) = 1;
    return 0;
}

s32 OSLoadContext(void *arg0) {
    M2C_UNK *temp_r6;
    u16 temp_r4;

    temp_r6 = M2C_FIELD(arg0, M2C_UNK **, 0x198);
    if (0 /* draft: did not compile */) {
        /* draft: did not compile: M2C_FIELD(arg0, M2C_UNK **, 0x198) = &OSDisableInterrupts; */
    }
    temp_r4 = M2C_FIELD(arg0, u16 *, 0x1A2);
    if (temp_r4 & 2) {
        M2C_FIELD(arg0, u16 *, 0x1A2) = (u16) (temp_r4 & 0xFFFFFFFD);
    }
    M2C_ERROR(/* unknown instruction: mtspr GQR1, $r4 */);
    M2C_ERROR(/* unknown instruction: mtspr GQR2, $r4 */);
    M2C_ERROR(/* unknown instruction: mtspr GQR3, $r4 */);
    M2C_ERROR(/* unknown instruction: mtspr GQR4, $r4 */);
    M2C_ERROR(/* unknown instruction: mtspr GQR5, $r4 */);
    M2C_ERROR(/* unknown instruction: mtspr GQR6, $r4 */);
    M2C_ERROR(/* unknown instruction: mtspr GQR7, $r4 */);
    M2C_ERROR(/* unknown instruction: mtcrf 0xff, $r4 */);
    M2C_ERROR(/* unknown instruction: mtxer $r4 */);
    M2C_ERROR(/* unknown instruction: mfmsr $r4 */);
    M2C_ERROR(/* unknown instruction: mtmsr $r4 */);
    M2C_ERROR(/* unknown instruction: mtsrr0 $r4 */);
    M2C_ERROR(/* unknown instruction: mtsrr1 $r4 */);
    M2C_ERROR(/* unknown instruction: rfi */);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0xC);
    return temp_r4;}

void *fn_800C5574(void) {
    return;
}

void OSClearContext(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x1A0) = 0;
    M2C_FIELD(arg0, s16 *, 0x1A2) = 0;
    if (0 /* draft: did not compile */) {
        *(u32 *)0x800000D8 = 0U;
    }
}

void OSInitContext(void *arg0, s32 arg1, s32 arg2) {
    s32 saved_reg_r13;
    s32 saved_reg_r2;
    M2C_FIELD(arg0, s32 *, 0x198) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    M2C_FIELD(arg0, s32 *, 0x19C) = 0x9032;
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    M2C_FIELD(arg0, s32 *, 8) = (s32) saved_reg_r2;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) saved_reg_r13;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    M2C_FIELD(arg0, s32 *, 0x7C) = 0;
    M2C_FIELD(arg0, s32 *, 0x1A4) = 0;
    M2C_FIELD(arg0, s32 *, 0x1A8) = 0;
    M2C_FIELD(arg0, s32 *, 0x1AC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1B0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1B4) = 0;
    M2C_FIELD(arg0, s32 *, 0x1B8) = 0;
    M2C_FIELD(arg0, s32 *, 0x1BC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C0) = 0;
    OSClearContext((void *)(0));
}

void OSDumpContext(void *arg0) { } /* draft: stub */

static s32 OSSwitchFPUContext(void *arg1) {
    void *temp_r5;
    void *var_r4;

    var_r4 = arg1;
    M2C_ERROR(/* unknown instruction: mfmsr $r5 */);
    M2C_ERROR(/* unknown instruction: mtmsr $r5 */);
    M2C_SYNC();
    M2C_ERROR(/* unknown instruction: mtsrr1 $r5 */);
    temp_r5 = *(void **)0x800000D8;
    *(void **)0x800000D8 = var_r4;
    if (temp_r5 != var_r4) {
        if (temp_r5 != NULL) {
            __OSSaveFPUContext((void *)(0), (double)(0), (double)(0), (double)(0), (double)(0), (double)(0), (double)(0), (double)(0), (double)(0), (double)(0), (double)(0), (double)(0), (double)(0), (double)(0));
        }
        var_r4 = (void *) (u32) __OSLoadFPUContext((void *)(0), (double)(0));
    }
    M2C_ERROR(/* unknown instruction: mtcrf 0xff, $r3 */);
    M2C_ERROR(/* unknown instruction: mtsrr0 $r3 */);
    M2C_ERROR(/* unknown instruction: mtxer $r3 */);
    M2C_FIELD(var_r4, u16 *, 0x1A2) = (u16) (M2C_FIELD(var_r4, u16 *, 0x1A2) & 0xFFFFFFFD);
    M2C_ERROR(/* unknown instruction: rfi */);
    return M2C_FIELD(var_r4, s32 *, 0xC);
}

void __OSContextInit(void) {
    __OSSetExceptionHandler(7, OSSwitchFPUContext);
    *(s32 *)0x800000D8 = 0;
    /* draft: did not compile: DBPrintf(&@74_802A5CDC, 0x80000000); */
}

void OSFillFPUContext(void *arg0, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7, f64 farg8, f64 farg9, f64 farg10, f64 farg11, f64 farg12) {
    s32 saved_reg_f31;
    s32 saved_reg_f30;
    s32 saved_reg_f29;
    s32 saved_reg_f28;
    s32 saved_reg_f27;
    s32 saved_reg_f26;
    s32 saved_reg_f25;
    s32 saved_reg_f24;
    s32 saved_reg_f23;
    s32 saved_reg_f22;
    s32 saved_reg_f21;
    s32 saved_reg_f20;
    s32 saved_reg_f19;
    s32 saved_reg_f18;
    s32 saved_reg_f17;
    s32 saved_reg_f16;
    s32 saved_reg_f15;
    s32 saved_reg_f14;
    M2C_ERROR(/* unknown instruction: mfmsr $r5 */);
    M2C_ERROR(/* unknown instruction: mtmsr $r5 */);
    M2C_SYNC();
    M2C_FIELD(arg0, f64 *, 0x90) = (f64) M2C_ERROR(/* Read from unset register $f0 */);
    M2C_FIELD(arg0, f64 *, 0x98) = farg0;
    M2C_FIELD(arg0, f64 *, 0xA0) = farg1;
    M2C_FIELD(arg0, f64 *, 0xA8) = farg2;
    M2C_FIELD(arg0, f64 *, 0xB0) = farg3;
    M2C_FIELD(arg0, f64 *, 0xB8) = farg4;
    M2C_FIELD(arg0, f64 *, 0xC0) = farg5;
    M2C_FIELD(arg0, f64 *, 0xC8) = farg6;
    M2C_FIELD(arg0, f64 *, 0xD0) = farg7;
    M2C_FIELD(arg0, f64 *, 0xD8) = farg8;
    M2C_FIELD(arg0, f64 *, 0xE0) = farg9;
    M2C_FIELD(arg0, f64 *, 0xE8) = farg10;
    M2C_FIELD(arg0, f64 *, 0xF0) = farg11;
    M2C_FIELD(arg0, f64 *, 0xF8) = farg12;
    M2C_FIELD(arg0, f64 *, 0x100) = (f64) saved_reg_f14;
    M2C_FIELD(arg0, f64 *, 0x108) = (f64) saved_reg_f15;
    M2C_FIELD(arg0, f64 *, 0x110) = (f64) saved_reg_f16;
    M2C_FIELD(arg0, f64 *, 0x118) = (f64) saved_reg_f17;
    M2C_FIELD(arg0, f64 *, 0x120) = (f64) saved_reg_f18;
    M2C_FIELD(arg0, f64 *, 0x128) = (f64) saved_reg_f19;
    M2C_FIELD(arg0, f64 *, 0x130) = (f64) saved_reg_f20;
    M2C_FIELD(arg0, f64 *, 0x138) = (f64) saved_reg_f21;
    M2C_FIELD(arg0, f64 *, 0x140) = (f64) saved_reg_f22;
    M2C_FIELD(arg0, f64 *, 0x148) = (f64) saved_reg_f23;
    M2C_FIELD(arg0, f64 *, 0x150) = (f64) saved_reg_f24;
    M2C_FIELD(arg0, f64 *, 0x158) = (f64) saved_reg_f25;
    M2C_FIELD(arg0, f64 *, 0x160) = (f64) saved_reg_f26;
    M2C_FIELD(arg0, f64 *, 0x168) = (f64) saved_reg_f27;
    M2C_FIELD(arg0, f64 *, 0x170) = (f64) saved_reg_f28;
    M2C_FIELD(arg0, f64 *, 0x178) = (f64) saved_reg_f29;
    M2C_FIELD(arg0, f64 *, 0x180) = (f64) saved_reg_f30;
    M2C_FIELD(arg0, f64 *, 0x188) = (f64) saved_reg_f31;
    M2C_FIELD(arg0, f64 *, 0x190) = (f64) M2C_ERROR(/* unknown instruction: mffs $f0 */);
    if (((u32) M2C_ERROR(/* unknown instruction: mfspr $r5, HID2 */) >> 0x1DU) & 1) {

    }
}

void OSReport(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7, M2C_UNK arg_sp8) {
    s32 *sp74;
    M2C_UNK *sp70;
    s32 sp6C;
    f64 sp60;
    f64 sp58;
    f64 sp50;
    f64 sp48;
    f64 sp40;
    f64 sp38;
    f64 sp30;
    f64 sp28;
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;

    if (M2C_ERROR(/* Read from unset register $cr0_eq */)) {
        sp28 = farg0;
        sp30 = farg1;
        sp38 = farg2;
        sp40 = farg3;
        sp48 = farg4;
        sp50 = farg5;
        sp58 = farg6;
        sp60 = farg7;
    }
    sp8 = arg0;
    spC = arg1;
    sp10 = arg2;
    sp14 = arg3;
    sp18 = arg4;
    sp1C = arg5;
    sp20 = arg6;
    sp24 = arg7;
    sp6C = 0x01000000;
    sp70 = &arg_sp8;
    sp74 = &sp8;
    vprintf(&sp6C);
}

#pragma push
#pragma dont_inline on
void fn_800C5B7C(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7, M2C_UNK arg_sp8) {
    void **sp7C;
    M2C_UNK *sp78;
    s32 sp74;
    f64 sp60;
    f64 sp58;
    f64 sp50;
    f64 sp48;
    f64 sp40;
    f64 sp38;
    f64 sp30;
    f64 sp28;
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    void *spC;
    void *sp8;
    s32 temp_cr0_lt;
    u32 var_r30;
    void *var_r29;

    if (M2C_ERROR(/* Read from unset register $cr0_eq */)) {
        sp28 = farg0;
        sp30 = farg1;
        sp38 = farg2;
        sp40 = farg3;
        sp48 = farg4;
        sp50 = farg5;
        sp58 = farg6;
        sp60 = farg7;
    }
    sp8 = arg0;
    spC = arg1;
    sp10 = arg2;
    sp14 = arg3;
    sp18 = arg4;
    sp1C = arg5;
    sp20 = arg6;
    sp24 = arg7;
    /* draft: did not compile: OSDisableInterrupts(&@13_802A5D00); */
    sp74 = 0x03000000;
    sp78 = &arg_sp8;
    sp7C = &sp8;
    vprintf(arg2, &sp74);
    /* draft: did not compile: OSReport(&@13_802A5D00, arg0, arg1); */
    /* draft: did not compile: OSReport(&@13_802A5D00 + 0x18); */
    var_r30 = 0U;
    var_r29 = fn_800C5574();
loop_4:
    if (0 /* draft: did not compile */) {
        temp_cr0_lt = var_r30 < 0x10U;
        var_r30 += 1;
        if (temp_cr0_lt != 0) {
            /* draft: did not compile: OSReport(&@13_802A5D00 + 0x40, var_r29, M2C_FIELD(var_r29, void **, 0), M2C_FIELD(var_r29, s32 *, 4)); */
            var_r29 = M2C_FIELD(var_r29, void **, 0);
            goto loop_4;
        }
    }
    PPCHalt();
}
#pragma pop

u32 OSSetErrorHandler(u16 arg0, u32 arg1) {
    s32 temp_r29;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_ctr;
    s32 var_r31;
    s32 var_r3;
    u16 temp_r5;
    u32 *temp_r4;
    u32 temp_r30;
    void *var_r5;
    void *var_r6;
    void *var_r6_2;

    /* draft: did not compile: temp_r4 = &__OSErrorTable + ((arg0 * 4) & 0x3FFFC); */
    temp_r30 = *temp_r4;
    temp_r29 = OSDisableInterrupts();
    *temp_r4 = arg1;
    if (arg0 == 0x10) {
        temp_r3 = PPCMfmsr();
        PPCMtmsr(temp_r3 | 0x2000);
        temp_r3_2 = PPCMffpscr();
        if (arg1 != 0U) {
            var_r6 = *(void **)0x800000DC;
loop_8:
            if (var_r6 != NULL) {
                M2C_FIELD(var_r6, s32 *, 0x19C) = (s32) (M2C_FIELD(var_r6, s32 *, 0x19C) | 0x900);
                temp_r5 = M2C_FIELD(var_r6, u16 *, 0x1A2);
                if (!(temp_r5 & 1)) {
                    M2C_FIELD(var_r6, u16 *, 0x1A2) = (u16) (temp_r5 | 1);
                    var_ctr = 4;
                    var_r5 = var_r6;
                    do {
                        M2C_FIELD(var_r5, s32 *, 0x94) = -1;
                        M2C_FIELD(var_r5, s32 *, 0x90) = -1;
                        M2C_FIELD(var_r5, s32 *, 0x1CC) = -1;
                        M2C_FIELD(var_r5, s32 *, 0x1C8) = -1;
                        M2C_FIELD(var_r5, s32 *, 0x9C) = -1;
                        M2C_FIELD(var_r5, s32 *, 0x98) = -1;
                        M2C_FIELD(var_r5, s32 *, 0x1D4) = -1;
                        M2C_FIELD(var_r5, s32 *, 0x1D0) = -1;
                        M2C_FIELD(var_r5, s32 *, 0xA4) = -1;
                        M2C_FIELD(var_r5, s32 *, 0xA0) = -1;
                        M2C_FIELD(var_r5, s32 *, 0x1DC) = -1;
                        M2C_FIELD(var_r5, s32 *, 0x1D8) = -1;
                        M2C_FIELD(var_r5, s32 *, 0xAC) = -1;
                        M2C_FIELD(var_r5, s32 *, 0xA8) = -1;
                        M2C_FIELD(var_r5, s32 *, 0x1E4) = -1;
                        M2C_FIELD(var_r5, s32 *, 0x1E0) = -1;
                        M2C_FIELD(var_r5, s32 *, 0xB4) = -1;
                        M2C_FIELD(var_r5, s32 *, 0xB0) = -1;
                        M2C_FIELD(var_r5, s32 *, 0x1EC) = -1;
                        M2C_FIELD(var_r5, s32 *, 0x1E8) = -1;
                        M2C_FIELD(var_r5, s32 *, 0xBC) = -1;
                        M2C_FIELD(var_r5, s32 *, 0xB8) = -1;
                        M2C_FIELD(var_r5, s32 *, 0x1F4) = -1;
                        M2C_FIELD(var_r5, s32 *, 0x1F0) = -1;
                        M2C_FIELD(var_r5, s32 *, 0xC4) = -1;
                        M2C_FIELD(var_r5, s32 *, 0xC0) = -1;
                        M2C_FIELD(var_r5, s32 *, 0x1FC) = -1;
                        M2C_FIELD(var_r5, s32 *, 0x1F8) = -1;
                        M2C_FIELD(var_r5, s32 *, 0xCC) = -1;
                        M2C_FIELD(var_r5, s32 *, 0xC8) = -1;
                        M2C_FIELD(var_r5, s32 *, 0x204) = -1;
                        M2C_FIELD(var_r5, s32 *, 0x200) = -1;
                        /* draft: did not compile: var_r5 += 0x40; */
                        var_ctr -= 1;
                    } while (var_ctr != 0);
                    M2C_FIELD(var_r6, s32 *, 0x194) = 4;
                }
                M2C_FIELD(var_r6, s32 *, 0x194) = (s32) (M2C_FIELD(var_r6, s32 *, 0x194) | (lbl_8034FF40 & 0xF8));
                M2C_FIELD(var_r6, s32 *, 0x194) = (s32) (M2C_FIELD(var_r6, s32 *, 0x194) & 0x6005F8FF);
                var_r6 = M2C_FIELD(var_r6, void **, 0x2FC);
                goto loop_8;
            }
            var_r31 = temp_r3 | 0x900;
            var_r3 = temp_r3_2 | (lbl_8034FF40 & 0xF8);
        } else {
            /* draft: did not compile: var_r6_2 = *(void *)0x800000DC; */
loop_12:
            if (var_r6_2 != NULL) {
                M2C_FIELD(var_r6_2, s32 *, 0x19C) = (s32) (M2C_FIELD(var_r6_2, s32 *, 0x19C) & ~0x900);
                M2C_FIELD(var_r6_2, s32 *, 0x194) = (s32) (M2C_FIELD(var_r6_2, s32 *, 0x194) & 0xFFFFFF07);
                M2C_FIELD(var_r6_2, s32 *, 0x194) = (s32) (M2C_FIELD(var_r6_2, s32 *, 0x194) & 0x6005F8FF);
                var_r6_2 = M2C_FIELD(var_r6_2, void **, 0x2FC);
                goto loop_12;
            }
            var_r3 = temp_r3_2 & 0xFFFFFF07;
            var_r31 = temp_r3 & ~0x900;
        }
        PPCMtfpscr(var_r3 & 0x6005F8FF, 0x60060000);
        PPCMtmsr(var_r31);
    }
    OSRestoreInterrupts(temp_r29);
    return temp_r30;
}

void __OSUnhandledException() { } /* draft: stub */
