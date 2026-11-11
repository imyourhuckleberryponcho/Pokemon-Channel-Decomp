/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

u16 fn_800BD304(void *, s32);
M2C_UNK fn_800BF308(u16 *, u16, u16);
extern M2C_UNK lbl_802CFCA8;
u16 fn_800BD6B4(void *, u16, u16 *);
u16 fn_800BD360(void *);
u16 fn_800BF4B4(void *);
u16 fn_800C0C80(void *, u16);
s32 fn_800C1048(void *, u16);
u16 fn_800C10A0(M2C_UNK, u16, s32, M2C_UNK, u16, u16);
u16 fn_800C11F4(s32, u16, s32, void *, u16, M2C_UNK, u16);
M2C_UNK fn_800C1C84(void *, M2C_UNK, M2C_UNK);
M2C_UNK fn_800C1D74();
M2C_UNK OSGetTime();
M2C_UNK OSTicksToCalendarTime(s32 *);
extern M2C_UNK ZeroPS_80350858;
extern void *BootInfo_80350840;
u32 OSGetArenaHi();
u32 OSGetArenaLo();
s32 OSGetResetCode();
extern u32 __OSSavedRegionEnd;
extern u32 __OSSavedRegionStart;

u16 fn_800C28E4(void *arg0, s32 arg1, s32 arg2, u32 arg3, void *arg4);
u16 fn_800C2B74(void *arg0, u16 *arg1, u16 *arg2, u16 *arg3, u32 *arg4, s16 *arg5);
u16 fn_800C2D7C(void *arg0, u16 arg1);
u16 fn_800C2EBC(void *arg0, s32 arg1, u16 arg2, u16 arg3, u16 arg4, void *arg5, u16 arg6);
s32 fn_800C33AC(void *arg0, u32 arg1);
s32 fn_800C3430(void *arg0);
s32 fn_800C349C(void);
s32 PPCMfmsr(void);
s32 PPCMtmsr(void);
s32 PPCMfhid0(void);
void fn_800C34CC(void);
s32 PPCMfl2cr(void);
void PPCMtl2cr(void);
s32 PPCMtdec(void);
void fn_800C34EC(void);
void PPCHalt(void);
void PPCMtmmcr0(void);
void PPCMtmmcr1(void);
void PPCMtpmc1(void);
void PPCMtpmc2(void);
void PPCMtpmc3(void);
void PPCMtpmc4(void);
s32 PPCMffpscr(void);
void PPCMtfpscr(s32 arg0);
s32 PPCMfhid2(void);
void PPCMthid2(void);
void PPCMtwpar(void);
void PPCDisableSpeculation(void);
void PPCSetFpNonIEEEMode(void);
M2C_UNK *__OSFPRInit(void);
u32 OSGetConsoleType(void);
void ClearArena_800C3718(void);

u16 fn_800C28E4(void *arg0, s32 arg1, s32 arg2, u32 arg3, void *arg4) {
    s32 sp30;
    u16 sp2E;
    u16 sp2C;
    u16 sp2A;
    u16 sp28;
    M2C_UNK sp20;
    void *sp1C;
    void *sp18;
    u8 sp14;
    s32 spC;
    s32 var_r27;
    u16 temp_r25;
    s8 temp_r3;
    u16 temp_r3_2;
    u16 temp_r3_3;
    u16 temp_r3_4;
    u16 var_r0;
    u16 var_r26;
    u16 var_r30;

    spC = arg1;
    sp14 = arg3;
    sp18 = arg4;
    sp1C = &lbl_802CFCA8 + (*M2C_FIELD(arg0, u16 **, 4) * 0x25E48);
    var_r27 = spC;
    if (sp14 != 0U) {
        return 0xA021U;
    }
    if ((u16 *) M2C_FIELD(arg0, u16 **, 4) == NULL) {
        return 0xA008U;
    }
    if ((u16) M2C_FIELD(M2C_FIELD(arg0, u16 **, 4), u16 *, 4) == 1) {
        var_r0 = 5;
    } else {
        var_r0 = 3;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 0) >= var_r0) {
        return 0xA008U;
    }
    temp_r3_3 = fn_800C33AC(arg0, arg2);
    var_r30 = temp_r3_3;
    if (temp_r3_3 != 0) {
        return var_r30;
    }
    if ((M2C_FIELD(arg0, u16 *, 0x2C) & 1) || (M2C_FIELD(arg0, u8 *, 0x13) & 1)) {
        return 0xA027U;
    }
    sp30 = arg2;
    temp_r25 = fn_800BD304(arg0, sp30);
    var_r26 = 0;
loop_30:
    if (var_r26 >= temp_r25) {
        return var_r30;
    }
    /* draft: did not compile: temp_r3_2 = fn_800C2B74(arg0, &sp2E, &sp2C, &sp2A, &sp30, &sp28); */
    if (temp_r3_2 != 0) {
        return temp_r3_2;
    }
    M2C_FIELD(&sp20, s16 *, 0) = 0x2000;
    M2C_FIELD(&sp20, s32 *, 4) = 0;
    M2C_FIELD(&sp20, s16 *, 2) = 0;
    temp_r3_4 = fn_800C2EBC(arg0, var_r27, sp2E, sp2C, sp2A, &sp20, sp28);
    var_r30 = temp_r3_4;
    if ((temp_r3_4 != 0) && ((u16) M2C_FIELD(arg0, u16 *, 0x30) != 0)) {
        fn_800BF308(M2C_FIELD(arg0, u16 **, 4), M2C_FIELD(arg0, u16 *, 0x22), M2C_FIELD(arg0, u16 *, 0x30));
        M2C_FIELD(arg0, u16 *, 0x30) = 0U;
    }
    M2C_FIELD(sp18, s32 *, 4) = (s32) (M2C_FIELD(sp18, s32 *, 4) + M2C_FIELD(&sp20, s32 *, 4));
    var_r27 += M2C_FIELD(&sp20, s32 *, 4);
    sp30 -= M2C_FIELD(&sp20, s32 *, 4);
    temp_r3 = fn_800C2D7C(arg0, sp2A);
    if ((temp_r3 != 0) && ((u16) M2C_FIELD(arg0, u16 *, 0x30) != 0)) {
        fn_800BF308(M2C_FIELD(arg0, u16 **, 4), M2C_FIELD(arg0, u16 *, 0x22), M2C_FIELD(arg0, u16 *, 0x30));
        M2C_FIELD(arg0, u16 *, 0x30) = 0U;
    }
    M2C_FIELD(arg0, u32 *, 0x28) = (u32) (M2C_FIELD(arg0, u32 *, 0x28) + M2C_FIELD(&sp20, s32 *, 4));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x24) < (u32) M2C_FIELD(arg0, u32 *, 0x28)) {
        M2C_FIELD(arg0, u32 *, 0x24) = (u32) M2C_FIELD(arg0, u32 *, 0x28);
    }
    if (var_r30 != 0) {
        return var_r30;
    }
    if (temp_r3 != 0) {
        return temp_r3;
    }
    var_r26 += 1;
    goto loop_30;
}

u16 fn_800C2B74(void *arg0, u16 *arg1, u16 *arg2, u16 *arg3, u32 *arg4, s16 *arg5) {
    void *sp20;
    s16 *sp1C;
    u16 temp_r0;
    u16 temp_r0_2;
    s16 temp_r3;
    s16 temp_r3_2;
    s8 var_r29;
    u32 temp_r28;

    sp1C = arg5;
    var_r29 = 0;
    temp_r28 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x1C);
    temp_r28 *= M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0xF6);
    sp20 = &lbl_802CFCA8 + (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0) * 0x25E48);
    M2C_FIELD(arg0, u16 *, 0x30) = 0U;
    *arg2 = M2C_FIELD(arg0, u32 *, 0x28) % temp_r28;
    *arg3 = temp_r28 - *arg2;
    if ((u32) *arg4 < (u16) *arg3) {
        *arg3 = (u16) *arg4;
    }
    *arg1 = M2C_FIELD(arg0, u16 *, 0x2E);
    switch ((u16) *arg1) {                          /* irregular */
    case 1:
        return 0xA029U;
    case -1:
        temp_r3 = fn_800BD6B4(M2C_FIELD(arg0, void **, 4), M2C_FIELD(arg0, u16 *, 0x22), arg1);
        var_r29 = temp_r3;
        if (temp_r3 != 0) {
            return var_r29;
        }
        temp_r0 = *arg1;
        M2C_FIELD(arg0, u16 *, 0x30) = temp_r0;
        M2C_FIELD(arg0, u16 *, 0x2E) = temp_r0;
block_17:
        if ((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x1E) % M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0xF6)) != 0) {
            return 0xA02DU;
        }
        *sp1C = ((u32) M2C_FIELD(arg0, u32 *, 0x28) / temp_r28) % (u16) ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x1E) / (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0xF6));
        return var_r29;
    case 0:
        if ((u16) M2C_FIELD(arg0, u16 *, 0x22) == 0) {
            temp_r3_2 = fn_800BD6B4(M2C_FIELD(arg0, void **, 4), 0U, arg1);
            var_r29 = temp_r3_2;
            if (temp_r3_2 != 0) {
                return var_r29;
            }
            temp_r0_2 = *arg1;
            M2C_FIELD(arg0, u16 *, 0x30) = temp_r0_2;
            M2C_FIELD(arg0, u16 *, 0x2E) = temp_r0_2;
            M2C_FIELD(arg0, u16 *, 0x22) = temp_r0_2;
            goto block_17;
        }
        return 0xA02DU;
    default:
        if (((s32) *arg1 > (s32) (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0xBC) - 1)) || ((u16) *arg1 >= -9U)) {
            return 0xA029U;
        }
        goto block_17;
    }
}

u16 fn_800C2D7C(void *arg0, u16 arg1) {
    u32 var_r30;
    s32 temp_r3;
    u16 temp_r3_2;
    u16 temp_r3_3;
    u16 var_r28;
    u16 var_r29;
    u16 spC;
    s8 temp_r27;
    void *temp_r25;

    spC = arg1;
    var_r30 = 0;
    var_r29 = 0;
    var_r28 = 1;
    temp_r25 = M2C_FIELD(arg0, void **, 4);
    if ((u32) ((u32) (M2C_FIELD(arg0, u32 *, 0x28) + spC) / (temp_r27 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x1E) * M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x1C))) == (u32) ((u32) M2C_FIELD(arg0, u32 *, 0x28) / temp_r27)) {
        return 0U;
    }
loop_15:
    if (1 == 0) {
        goto block_16;
    }
    temp_r3 = fn_800C0C80(M2C_FIELD(arg0, void **, 4), M2C_FIELD(arg0, u16 *, 0x2E));
    var_r29 = temp_r3;
    if ((temp_r3 == -9U) || (var_r29 == -3U) || (var_r29 == -2U)) {
        if ((var_r28 == 1) && ((u16) M2C_FIELD(temp_r25, u16 *, 0xF0) == 2)) {
            temp_r3_2 = fn_800BD360(M2C_FIELD(arg0, void **, 4));
            var_r30 = temp_r3_2;
            if (temp_r3_2 != 0) {
                return var_r30;
            }
            var_r28 = 0;
            goto loop_15;
        }
        var_r29 = 1;
        var_r30 = 0xA029;
        goto block_16;
    }
    if (var_r28 == 0) {
        temp_r3_3 = fn_800BF4B4(M2C_FIELD(arg0, void **, 4));
        var_r30 = temp_r3_3;
        if (temp_r3_3 != 0) {
            return var_r30;
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 0xB8) = 1;
        goto block_16;
    }
block_16:
    M2C_FIELD(arg0, u16 *, 0x2E) = var_r29;
    return var_r30;
}

u16 fn_800C2EBC(void *arg0, s32 arg1, u16 arg2, u16 arg3, u16 arg4, void *arg5, u16 arg6) { return 0; } /* draft: stub */

s32 fn_800C33AC(void *arg0, u32 arg1) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x28) > (u32) M2C_FIELD(arg0, u32 *, 0x24)) {
        return 0xA00C;
    }
    if ((u16) M2C_FIELD(M2C_FIELD((s32)arg0, void **, 4), u16 *, 0x2A) != 0) {
        if ((u16) M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x2A) < (u32) (arg1 / (u16) M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x1C))) {
            return 0xA00C;
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return 0;
    }
    if ((u32) M2C_FIELD(M2C_FIELD(arg0, void **, 4), u32 *, 0x34) < (u32) (arg1 / (u16) M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x1C))) {
        return 0xA00C;
    }
    return 0;
}

s32 fn_800C3430(void *arg0) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 spC;

    OSGetTime();
    OSTicksToCalendarTime(&spC);
    M2C_FIELD(arg0, s16 *, 0) = (s16) sp20;
    M2C_FIELD(arg0, s8 *, 2) = (s8) (sp1C + 1);
    M2C_FIELD(arg0, s8 *, 3) = (s8) sp18;
    M2C_FIELD(arg0, s8 *, 4) = (s8) sp14;
    M2C_FIELD(arg0, s8 *, 5) = (s8) sp10;
    M2C_FIELD(arg0, s8 *, 6) = (s8) spC;
    return 0;
}

s32 fn_800C349C(void) {
    return 0x67CD;
}

s32 PPCMfmsr(void) {
    return M2C_ERROR(/* unknown instruction: mfmsr $r3 */);
}

s32 PPCMtmsr(void) {
    return M2C_ERROR(/* unknown instruction: mtmsr $r3 */);
}

s32 PPCMfhid0(void) {
    return M2C_ERROR(/* unknown instruction: mfspr $r3, HID0 */);
}

void fn_800C34CC(void) {
    M2C_ERROR(/* unknown instruction: mtspr HID0, $r3 */);
}

s32 PPCMfl2cr(void) {
    return M2C_ERROR(/* unknown instruction: mfspr $r3, L2CR */);
}

void PPCMtl2cr(void) {
    M2C_ERROR(/* unknown instruction: mtspr L2CR, $r3 */);
}

s32 PPCMtdec(void) {
    return M2C_ERROR(/* unknown instruction: mtdec $r3 */);
}

void fn_800C34EC(void) {
    M2C_ERROR(/* unknown instruction: sc */);
}

void PPCHalt(void) {
    M2C_SYNC();
loop_1:
    goto loop_1;
}

void PPCMtmmcr0(void) {
    M2C_ERROR(/* unknown instruction: mtspr MMCR0, $r3 */);
}

void PPCMtmmcr1(void) {
    M2C_ERROR(/* unknown instruction: mtspr MMCR1, $r3 */);
}

void PPCMtpmc1(void) {
    M2C_ERROR(/* unknown instruction: mtspr PMC1, $r3 */);
}

void PPCMtpmc2(void) {
    M2C_ERROR(/* unknown instruction: mtspr PMC2, $r3 */);
}

void PPCMtpmc3(void) {
    M2C_ERROR(/* unknown instruction: mtspr PMC3, $r3 */);
}

void PPCMtpmc4(void) {
    M2C_ERROR(/* unknown instruction: mtspr PMC4, $r3 */);
}

s32 PPCMffpscr(void) {
    u8 unkspC;
    f64 sp8;

    sp8 = M2C_ERROR(/* unknown instruction: mffs $f31 */);
    return unkspC;
}

void PPCMtfpscr(s32 arg0) {
    s32 sp14;
    s32 sp10;

    sp10 = 0;
    sp14 = arg0;
    M2C_ERROR(/* unknown instruction: mtfsf 0xff, $f31 */);
}

s32 PPCMfhid2(void) {
    return M2C_ERROR(/* unknown instruction: mfspr $r3, HID2 */);
}

void PPCMthid2(void) {
    M2C_ERROR(/* unknown instruction: mtspr HID2, $r3 */);
}

void PPCMtwpar(void) {
    M2C_ERROR(/* unknown instruction: mtspr WPAR, $r3 */);
}

#pragma push
#pragma dont_inline on
void PPCDisableSpeculation(void) {
    fn_800C34CC();
}
#pragma pop

void PPCSetFpNonIEEEMode(void) {
    M2C_ERROR(/* unknown instruction: mtfsb1 cr7gt */);
}

#pragma push
#pragma peephole off
M2C_UNK *__OSFPRInit(void) {
    s32 var_r3;

    M2C_ERROR(/* unknown instruction: mfmsr $r3 */);
    M2C_ERROR(/* unknown instruction: mtmsr $r3 */);
    var_r3 = ((u32) M2C_ERROR(/* unknown instruction: mfspr $r3, HID2 */) >> 0x1DU) & 1;
    if (var_r3 != 0) {
        var_r3 = (s32) &ZeroPS_80350858;
        M2C_ERROR(/* unknown instruction: ps_mr $f1, $f0 */);
        M2C_ERROR(/* unknown instruction: ps_mr $f2, $f0 */);
        M2C_ERROR(/* unknown instruction: ps_mr $f3, $f0 */);
        M2C_ERROR(/* unknown instruction: ps_mr $f4, $f0 */);
        M2C_ERROR(/* unknown instruction: ps_mr $f5, $f0 */);
        M2C_ERROR(/* unknown instruction: ps_mr $f6, $f0 */);
        M2C_ERROR(/* unknown instruction: ps_mr $f7, $f0 */);
        M2C_ERROR(/* unknown instruction: ps_mr $f8, $f0 */);
        M2C_ERROR(/* unknown instruction: ps_mr $f9, $f0 */);
        M2C_ERROR(/* unknown instruction: ps_mr $f10, $f0 */);
        M2C_ERROR(/* unknown instruction: ps_mr $f11, $f0 */);
        M2C_ERROR(/* unknown instruction: ps_mr $f12, $f0 */);
        M2C_ERROR(/* unknown instruction: ps_mr $f13, $f0 */);
        M2C_ERROR(/* unknown instruction: ps_mr $f14, $f0 */);
        M2C_ERROR(/* unknown instruction: ps_mr $f15, $f0 */);
        M2C_ERROR(/* unknown instruction: ps_mr $f16, $f0 */);
        M2C_ERROR(/* unknown instruction: ps_mr $f17, $f0 */);
        M2C_ERROR(/* unknown instruction: ps_mr $f18, $f0 */);
        M2C_ERROR(/* unknown instruction: ps_mr $f19, $f0 */);
        M2C_ERROR(/* unknown instruction: ps_mr $f20, $f0 */);
        M2C_ERROR(/* unknown instruction: ps_mr $f21, $f0 */);
        M2C_ERROR(/* unknown instruction: ps_mr $f22, $f0 */);
        M2C_ERROR(/* unknown instruction: ps_mr $f23, $f0 */);
        M2C_ERROR(/* unknown instruction: ps_mr $f24, $f0 */);
        M2C_ERROR(/* unknown instruction: ps_mr $f25, $f0 */);
        M2C_ERROR(/* unknown instruction: ps_mr $f26, $f0 */);
        M2C_ERROR(/* unknown instruction: ps_mr $f27, $f0 */);
        M2C_ERROR(/* unknown instruction: ps_mr $f28, $f0 */);
        M2C_ERROR(/* unknown instruction: ps_mr $f29, $f0 */);
        M2C_ERROR(/* unknown instruction: ps_mr $f30, $f0 */);
        M2C_ERROR(/* unknown instruction: ps_mr $f31, $f0 */);
    }
    M2C_ERROR(/* unknown instruction: mtfsf 0xff, $f0 */);
    return (M2C_UNK *) var_r3;
}
#pragma pop

u32 OSGetConsoleType(void) {
    u32 var_r3;

    if (((void *) BootInfo_80350840 == NULL) || (var_r3 = M2C_FIELD(BootInfo_80350840, u32 *, 0x2C), ((var_r3 == 0U) != 0))) {
        var_r3 = 0x10000002U;
    }
    return var_r3;
}

void ClearArena_800C3718(void) {
    s32 temp_r31_2;
    s32 temp_r31_4;
    s32 temp_r31_6;
    s32 temp_r31_7;
    u32 temp_r31;
    u32 temp_r31_3;
    u32 temp_r31_5;
    u32 temp_r31_8;
    u32 temp_r3;

    if ((u32) (OSGetResetCode() + 0x80000000) != 0U) {
        __OSSavedRegionStart = 0U;
        __OSSavedRegionEnd = 0U;
        temp_r31 = OSGetArenaHi();
        temp_r31_2 = temp_r31 - OSGetArenaLo();
        OSGetArenaLo();
        memset((void *)(0U), (int)(temp_r31_2), (unsigned long)(0));
        return;
    }
    temp_r3 = *(u32 *)0x812FDFF0;
    __OSSavedRegionEnd = *(u32 *)0x812FDFEC;
    __OSSavedRegionStart = temp_r3;
    if (temp_r3 == 0U) {
        temp_r31_3 = OSGetArenaHi();
        temp_r31_4 = temp_r31_3 - OSGetArenaLo();
        OSGetArenaLo();
        memset((void *)(0U), (int)(temp_r31_4), (unsigned long)(0));
        return;
    }
    if (OSGetArenaLo() < (u32) __OSSavedRegionStart) {
        if (OSGetArenaHi() <= (u32) __OSSavedRegionStart) {
            temp_r31_5 = OSGetArenaHi();
            temp_r31_6 = temp_r31_5 - OSGetArenaLo();
            OSGetArenaLo();
            memset((void *)(0U), (int)(temp_r31_6), (unsigned long)(0));
            return;
        }
        temp_r31_7 = __OSSavedRegionStart - OSGetArenaLo();
        OSGetArenaLo();
        memset((void *)(0U), (int)(temp_r31_7), (unsigned long)(0));
        temp_r31_8 = __OSSavedRegionEnd;
        if (OSGetArenaHi() > temp_r31_8) {
            /* draft: did not compile: memset(temp_r31_8, 0, OSGetArenaHi() - temp_r31_8); */
        }
    }
}
