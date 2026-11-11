/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

s32 __EXIProbe();
extern M2C_UNK lbl_802CF930;
s32 OSDisableInterrupts();
M2C_UNK OSRestoreInterrupts(s32);
M2C_UNK __OSUnmaskInterrupts(u32);
M2C_UNK EXIClearInterrupts(s32, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK __OSMaskInterrupts(u32);
M2C_UNK OSClearContext(M2C_UNK *);
M2C_UNK OSSetCurrentContext(M2C_UNK *);
s32 OSGetConsoleType();
extern M2C_UNK lbl_803507B0;
M2C_UNK SetExiInterruptMask(s32, void *);
M2C_UNK memmove();
s32 EXIImm(s32, u32 *, M2C_UNK, M2C_UNK, M2C_UNK);
s32 EXISync(s32);
M2C_UNK OSCreateAlarm(void *, s32);
M2C_UNK fn_800C8760(void *, M2C_UNK);
extern M2C_UNK lbl_802CF9F0;
extern M2C_UNK lbl_802CFA08;
extern M2C_UNK lbl_803507E0;
extern s16 lbl_803507F8;
extern M2C_UNK lbl_803507B8;
extern M2C_UNK lbl_803507C0;
extern M2C_UNK lbl_803507C8;
M2C_UNK fn_800B1A64(M2C_UNK *, M2C_UNK, s32, s32);
M2C_UNK fn_800B21F4();
M2C_UNK fn_800B2894();
M2C_UNK fn_800B2AC4();
M2C_UNK fn_800B2CF4(s32, M2C_UNK);
extern M2C_UNK fn_800B2F6C;
extern M2C_UNK lbl_801DA7A0;
extern M2C_UNK lbl_803507D8;
extern M2C_UNK lbl_803507E4;
extern M2C_UNK lbl_803507F4;
extern M2C_UNK lbl_803507FC;
extern M2C_UNK lbl_802CFA58;
extern M2C_UNK lbl_802CFAFC;
M2C_UNK fn_800B1898();
u16 fn_800B4778(s32, u16);
u16 fn_800B4E20(s32, u16);
u16 fn_800B19AC();
M2C_UNK fn_800B400C();
u16 fn_800B5E8C(s32, u16);
extern M2C_UNK lbl_803507EC;
M2C_UNK fn_800B1FF8();
extern M2C_UNK lbl_802CFA7C;
M2C_UNK fn_800B5A64(void *, M2C_UNK);
M2C_UNK fn_800B2FD4(void *, M2C_UNK);

s32 EXIProbeEx(s32 arg0);
s32 EXIAttach(s32 arg0, s32 arg1);
s32 EXIDetach(s32 arg0);
s32 fn_800AFB80(s32 arg0, u32 arg1, s32 arg2);
s32 EXISelect(s32 arg0, u32 arg1, s32 arg2);
s32 EXIDeselect(s32 arg0);
void EXIIntrruptHandler(s16 arg0, M2C_UNK *arg1);
void TCIntrruptHandler(s16 arg0, M2C_UNK *arg1);
void EXTIntrruptHandler(s16 arg0, M2C_UNK *arg1);
void EXIInit(void);
s32 EXILock(s32 arg0, u32 arg1, u32 arg2);
s32 EXIUnlock(s32 arg0);
s32 fn_800B05EC(s32 arg0);
void UnlockedHandler(void);
s32 EXIGetID(s32 arg0, u32 arg1, u32 *arg2);
s32 fn_800B09DC(void);
u16 fn_800B0A60(s32 arg0, s32 arg1);
u16 fn_800B0B14(void);
u16 fn_800B0B1C(u16 arg0);
u16 fn_800B0B58(void);
s32 fn_800B1090(u16 *arg0);
s32 fn_800B1110(u8 *arg0);
u16 fn_800B11A4(s32 arg0, s32 arg1, s32 arg2, void *arg4);
u16 fn_800B12C8(s32 arg0, u32 arg1, s32 arg2, void *arg4);
u16 fn_800B1460(void);
u16 fn_800B15DC(u8 arg0, s32 arg1);
u16 fn_800B169C(void);
u16 fn_800B17B0(void);

s32 EXIProbeEx(s32 arg0) {
    M2C_UNK spC;
    s32 temp_r4;
    s32 var_r3;

    temp_r4 = arg0 << 6;
    var_r3 = __EXIProbe(arg0, temp_r4);
    if ((var_r3 != 0) && ((s32) M2C_FIELD((&lbl_802CF930 + temp_r4), s32 *, 0x20) == 0)) {
        if (0 /* draft: did not compile */) {
            var_r3 = 1;
        } else {
            var_r3 = 0;
        }
    }
    if (var_r3 != 0) {
        return 1;
    }
    if (0 /* draft: did not compile */) {
        return 0;
    }
    return -1;
}

s32 EXIAttach(s32 arg0, s32 arg1) {
    M2C_UNK sp1C;
    s32 temp_r31;
    s32 temp_r4;
    s32 var_r31;
    void *temp_r30;
    s32 temp_r29;

    temp_r4 = arg0 << 6;
    temp_r30 = &lbl_802CF930 + temp_r4;
    if ((__EXIProbe(arg0, temp_r4) != 0) && ((s32) M2C_FIELD(temp_r30, s32 *, 0x20) == 0)) {
        /* draft: did not compile: EXIGetID(arg0, 0, &sp1C); */
    }
    temp_r29 = OSDisableInterrupts();
    if ((s32) M2C_FIELD(temp_r30, s32 *, 0x20) == 0) {
        OSRestoreInterrupts(temp_r29);
        return 0;
    }
    temp_r31 = OSDisableInterrupts();
    if ((M2C_FIELD(temp_r30, s32 *, 0xC) & 8) || (__EXIProbe((long)(arg0), (long)(0)) == 0)) {
        OSRestoreInterrupts(temp_r31);
        var_r31 = 0;
    } else {
        EXIClearInterrupts(arg0, 1, 0, 0);
        __OSUnmaskInterrupts(0x100000U >> (arg0 * 3));
        M2C_FIELD(temp_r30, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r30, s32 *, 0xC) | 8);
        M2C_FIELD(temp_r30, s32 *, 8) = arg1;
        OSRestoreInterrupts(temp_r31);
        var_r31 = 1;
    }
    OSRestoreInterrupts(temp_r29);
    return var_r31;
}

s32 EXIDetach(s32 arg0) {
    s32 temp_r4;
    void *temp_r31;
    s8 temp_r30;

    temp_r4 = arg0 << 6;
    temp_r31 = &lbl_802CF930 + temp_r4;
    temp_r30 = OSDisableInterrupts(&lbl_802CF930, temp_r4);
    if (!(M2C_FIELD(temp_r31, s32 *, 0xC) & 8)) {
        OSRestoreInterrupts(temp_r30);
        return 1;
    }
    if ((M2C_FIELD(temp_r31, s32 *, 0xC) & 0x10) && ((u32) M2C_FIELD(temp_r31, u32 *, 0x18) == 0U)) {
        OSRestoreInterrupts(temp_r30);
        return 0;
    }
    M2C_FIELD(temp_r31, s32 *, 0xC) = (s32) (M2C_FIELD((s32)temp_r31, s32 *, 0xC) & 0xFFFFFFF7);
    __OSMaskInterrupts(0x500000U >> (arg0 * 3));
    OSRestoreInterrupts(temp_r30);
    return 1;
}

#pragma push
#pragma optimize_for_size on
s32 fn_800AFB80(s32 arg0, u32 arg1, s32 arg2) {
    M2C_UNK sp18;
    s32 temp_r0;
    s8 temp_r30;
    s32 temp_r4;
    s32 var_r3;
    void *temp_r31;

    temp_r4 = arg0 << 6;
    temp_r31 = &lbl_802CF930 + temp_r4;
    temp_r30 = OSDisableInterrupts(&lbl_802CF930, temp_r4);
    if (!(M2C_FIELD(temp_r31, s32 *, 0xC) & 4)) {
        if (arg0 != 2) {
            if ((arg1 == 0U) && !(M2C_FIELD(temp_r31, s32 *, 0xC) & 8)) {
                var_r3 = __EXIProbe((long)(arg0), (long)(0));
                if ((var_r3 != 0) && ((s32) M2C_FIELD(temp_r31, s32 *, 0x20) == 0)) {
                    if (0 /* draft: did not compile */) {
                        var_r3 = 1;
                    } else {
                        var_r3 = 0;
                    }
                }
                if (var_r3 != 0) {
                    goto block_10;
                }
                goto block_12;
            }
block_10:
            if (!(M2C_FIELD(temp_r31, s32 *, 0xC) & 0x10) || ((u32) M2C_FIELD(temp_r31, u32 *, 0x18) != arg1)) {
                goto block_12;
            }
            goto block_13;
        }
block_13:
        M2C_FIELD(temp_r31, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r31, s32 *, 0xC) | 4);
        temp_r0 = arg0 * 0x14;
        /* draft: did not compile: *(0xCC006800 + temp_r0) = (s32) ((*(0xCC006800 + temp_r0) & 0x405) | (arg2 * 0x10)); */
        if (M2C_FIELD(temp_r31, s32 *, 0xC) & 8) {
            switch (arg0 - 1) {                         /* irregular */
            case -1:
                __OSMaskInterrupts(0x100000);
                break;
            case 0:
                __OSMaskInterrupts(0x20000);
                break;
            }
        }
        OSRestoreInterrupts(temp_r30);
        return 1;
    }
block_12:
    OSRestoreInterrupts(temp_r30);
    return 0;
}
#pragma pop

s32 EXISelect(s32 arg0, u32 arg1, s32 arg2) {
    void *temp_r31;
    s32 temp_r30;
    s32 temp_r4;
    s32 temp_r0;

    temp_r4 = arg0 << 6;
    temp_r31 = &lbl_802CF930 + temp_r4;
    temp_r30 = OSDisableInterrupts(&lbl_802CF930, temp_r4);
    if ((M2C_FIELD(temp_r31, s32 *, 0xC) & 4) || ((arg0 != 2) && (((arg1 == 0) && !(M2C_FIELD(temp_r31, s32 *, 0xC) & 8) && (__EXIProbe(arg0) == 0)) || !(M2C_FIELD(temp_r31, s32 *, 0xC) & 0x10) || ((u32) M2C_FIELD(temp_r31, u32 *, 0x18) != arg1)))) {
        OSRestoreInterrupts(temp_r30);
        return 0;
    }
    M2C_FIELD(temp_r31, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r31, s32 *, 0xC) | 4);
    temp_r0 = arg0 * 0x14;
    /* draft: did not compile: *(0xCC006800 + temp_r0) = (s32) ((*(0xCC006800 + temp_r0) & 0x405) | (((1 << arg1) << 7) | (arg2 * 0x10))); */
    if (M2C_FIELD(temp_r31, s32 *, 0xC) & 8) {
        switch (arg0) {                             /* irregular */
        case 0:
            __OSMaskInterrupts(0x100000);
            break;
        case 1:
            __OSMaskInterrupts(0x20000);
            break;
        }
    }
    OSRestoreInterrupts(temp_r30);
    return 1;
}

s32 EXIDeselect(s32 arg0) {
    s32 temp_r0;
    s8 temp_r28;
    s32 temp_r4;
    void *temp_r30;
    s32 temp_r29;

    temp_r4 = arg0 << 6;
    temp_r30 = &lbl_802CF930 + temp_r4;
    temp_r28 = OSDisableInterrupts(&lbl_802CF930, temp_r4);
    if (!(M2C_FIELD((s32)temp_r30, s32 *, 0xC) & 4)) {
        OSRestoreInterrupts(temp_r28);
        return 0;
    }
    M2C_FIELD(temp_r30, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r30, s32 *, 0xC) & 0xFFFFFFFB);
    temp_r0 = arg0 * 0x14;
    /* draft: did not compile: temp_r29 = *(0xCC006800 + temp_r0); */
    /* draft: did not compile: *(0xCC006800 + temp_r0) = (s32) (temp_r29 & 0x405); */
    if (M2C_FIELD(temp_r30, s32 *, 0xC) & 8) {
        switch (arg0) {                             /* irregular */
        case 0:
            __OSUnmaskInterrupts(0x100000);
            break;
        case 1:
            __OSUnmaskInterrupts(0x20000);
            break;
        }
    }
    OSRestoreInterrupts(temp_r28);
    if ((arg0 != 2) && (temp_r29 & 0x80)) {
        if (__EXIProbe(arg0) != 0) {
            return 1;
        }
        return 0;
    }
    return 1;
}

void EXIIntrruptHandler(s16 arg0, M2C_UNK *arg1) {
    M2C_UNK sp18;
    M2C_UNK (*temp_r0_2)(u32, M2C_UNK *);
    s32 temp_r0;
    u32 temp_r30;

    temp_r30 = (arg0 - 9) / 3;
    temp_r0 = temp_r30 * 0x14;
    /* draft: did not compile: *(0xCC006800 + temp_r0) = (s32) ((*(0xCC006800 + temp_r0) & 0x7F5) | 2); */
    /* draft: did not compile: temp_r0_2 = *(&lbl_802CF930 + (temp_r30 << 6)); */
    if (temp_r0_2 != NULL) {
        OSClearContext(&sp18);
        OSSetCurrentContext(&sp18);
        temp_r0_2(temp_r30, arg1);
        OSClearContext(&sp18);
        OSSetCurrentContext(arg1);
    }
}

void TCIntrruptHandler(s16 arg0, M2C_UNK *arg1) {
    M2C_UNK sp20;
    M2C_UNK (*temp_r0)(u32, M2C_UNK *);
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r7;
    s32 temp_r7_2;
    s32 var_ctr_2;
    s32 var_r4;
    s8 *var_r5;
    u32 temp_r0_2;
    u32 temp_r30;
    u32 var_ctr;
    void *temp_r31;

    __OSMaskInterrupts((unsigned long)(0x80000000U >> arg0));
    temp_r30 = (arg0 - 0xA) / 3;
    temp_r4 = temp_r30 << 6;
    temp_r31 = &lbl_802CF930 + temp_r4;
    temp_r7 = temp_r30 * 0x14;
    /* draft: did not compile: *(0xCC006800 + temp_r7) = (s32) ((*(0xCC006800 + temp_r7) & 0x7F5) | 8); */
    temp_r0 = M2C_FIELD(temp_r31, M2C_UNK (**)(u32, M2C_UNK *), 4);
    if (temp_r0 != NULL) {
        var_r4 = 0;
        M2C_FIELD(temp_r31, M2C_UNK (**)(u32, M2C_UNK *), 4) = NULL;
        if (M2C_FIELD(temp_r31, s32 *, 0xC) & 3) {
            if (M2C_FIELD(temp_r31, s32 *, 0xC) & 2) {
                temp_r3 = M2C_FIELD(temp_r31, s32 *, 0x10);
                if (temp_r3 != 0) {
                    var_r5 = M2C_FIELD(temp_r31, s8 **, 0x14);
                    temp_r0_2 = M2C_FIELD((temp_r7 + 0xCC006800), u32 *, 0x10);
                    if (temp_r3 > 0) {
                        temp_r7_2 = temp_r3 - 8;
                        if (temp_r3 > 8) {
                            var_ctr = (u32) (temp_r7_2 + 7) >> 3U;
                            if (temp_r7_2 > 0) {
                                do {
                                    M2C_FIELD(var_r5, s8 *, 0) = (s8) (temp_r0_2 >> ((3 - var_r4) * 8));
                                    M2C_FIELD(var_r5, s8 *, 1) = (s8) (temp_r0_2 >> ((3 - (var_r4 + 1)) * 8));
                                    M2C_FIELD(var_r5, s8 *, 2) = (s8) (temp_r0_2 >> ((3 - (var_r4 + 2)) * 8));
                                    M2C_FIELD(var_r5, s8 *, 3) = (s8) (temp_r0_2 >> (var_r4 * -8));
                                    M2C_FIELD(var_r5, s8 *, 4) = (s8) (temp_r0_2 >> ((3 - (var_r4 + 4)) * 8));
                                    M2C_FIELD(var_r5, s8 *, 5) = (s8) (temp_r0_2 >> ((3 - (var_r4 + 5)) * 8));
                                    M2C_FIELD(var_r5, s8 *, 6) = (s8) (temp_r0_2 >> ((3 - (var_r4 + 6)) * 8));
                                    M2C_FIELD(var_r5, s8 *, 7) = (s8) (temp_r0_2 >> ((3 - (var_r4 + 7)) * 8));
                                    var_r5 += 8;
                                    var_r4 += 8;
                                    var_ctr -= 1;
                                } while (var_ctr != 0);
                            }
                        }
                        var_ctr_2 = temp_r3 - var_r4;
                        if (var_r4 < temp_r3) {
                            do {
                                *var_r5 = (s8) (temp_r0_2 >> ((3 - var_r4) * 8));
                                var_r5 += 1;
                                var_r4 += 1;
                                var_ctr_2 -= 1;
                            } while (var_ctr_2 != 0);
                        }
                    }
                }
            }
            M2C_FIELD(temp_r31, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r31, s32 *, 0xC) & 0xFFFFFFFC);
        }
        OSClearContext(&sp20);
        OSSetCurrentContext(&sp20);
        temp_r0(temp_r30, arg1);
        OSClearContext(&sp20);
        OSSetCurrentContext(arg1);
    }
}

void EXTIntrruptHandler(s16 arg0, M2C_UNK *arg1) {
    M2C_UNK sp10;
    M2C_UNK (*temp_r28)(u32, M2C_UNK *);
    u32 temp_r30;
    void *temp_r29;

    temp_r30 = (arg0 - 0xB) / 3;
    __OSMaskInterrupts(0x500000U >> (temp_r30 * 3));
    temp_r29 = &lbl_802CF930 + (temp_r30 << 6);
    temp_r28 = M2C_FIELD(temp_r29, M2C_UNK (**)(u32, M2C_UNK *), 8);
    M2C_FIELD(temp_r29, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r29, s32 *, 0xC) & 0xFFFFFFF7);
    if (temp_r28 != NULL) {
        OSClearContext(&sp10);
        OSSetCurrentContext(&sp10);
        M2C_FIELD(temp_r29, M2C_UNK (**)(u32, M2C_UNK *), 8) = NULL;
        temp_r28(temp_r30, arg1);
        OSClearContext(&sp10);
        OSSetCurrentContext(arg1);
    }
}

void EXIInit(void) {
    do {
loop_1:
        if ((u32) (M2C_FIELD((void *)0xCC006800, s32 *, 0xC) & 1) == 1) {
            goto loop_1;
        }
        if ((M2C_FIELD((void *)0xCC006800, s32 *, 0x20) & 1) == 1) {
            goto loop_1;
        }
    } while ((u32) (M2C_FIELD((void *)0xCC006800, s32 *, 0x34) & 1) == 1);
    __OSMaskInterrupts(0x7F8000);
    M2C_FIELD((s32 *)0xCC006800, s32 *, 0) = 0;
    *(s32 *)0xCC006814 = 0;
    M2C_FIELD((s32 *)0xCC006800, s32 *, 0) = 0x2000;
    __OSSetInterruptHandler(9, EXIIntrruptHandler);
    __OSSetInterruptHandler(0xA, TCIntrruptHandler);
    __OSSetInterruptHandler(0xB, EXTIntrruptHandler);
    *(s32 *)0xCC006828 = 0;
    __OSSetInterruptHandler(0xC, EXIIntrruptHandler);
    __OSSetInterruptHandler(0xD, TCIntrruptHandler);
    __OSSetInterruptHandler(0xE, EXTIntrruptHandler);
    __OSSetInterruptHandler(0xF, EXIIntrruptHandler);
    __OSSetInterruptHandler(0x10, TCIntrruptHandler);
    if (OSGetConsoleType() & 0x10000000) {
        M2C_FIELD(&lbl_802CF930, s32 *, 0x60) = 0;
        *(s32 *)0x800030C4 = 0;
        M2C_FIELD(&lbl_802CF930, s32 *, 0x20) = 0;
        __EXIProbe(1);
        *(s32 *)0x800030C0 = 0;
        __EXIProbe(0, 0x80000000);
    }
    /* draft: did not compile: EXIGetID(0, 2, &lbl_803507B0); */
}

s32 EXILock(s32 arg0, u32 arg1, u32 arg2) { return 0; } /* draft: stub */

s32 EXIUnlock(s32 arg0) {
    M2C_UNK (*temp_r29)(s32, M2C_UNK);
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r4;
    void *temp_r31;
    s8 temp_r30;

    temp_r4 = arg0 << 6;
    temp_r31 = &lbl_802CF930 + temp_r4;
    temp_r30 = OSDisableInterrupts(&lbl_802CF930, temp_r4);
    if (!(M2C_FIELD(temp_r31, s32 *, 0xC) & 0x10)) {
        OSRestoreInterrupts(temp_r30);
        return 0;
    }
    M2C_FIELD(temp_r31, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r31, s32 *, 0xC) & 0xFFFFFFEF);
    SetExiInterruptMask(arg0, temp_r31);
    temp_r3 = M2C_FIELD(temp_r31, s32 *, 0x24);
    if (temp_r3 > 0) {
        temp_r0 = temp_r3 - 1;
        M2C_FIELD(temp_r31, s32 *, 0x24) = temp_r0;
        temp_r29 = M2C_FIELD(temp_r31, M2C_UNK (**)(s32, M2C_UNK), 0x2C);
        if (temp_r0 > 0) {
            /* draft: did not compile: memmove(temp_r31 + 0x28, temp_r31 + 0x30, M2C_FIELD(temp_r31, s32 *, 0x24) * 8); */
        }
        temp_r29(arg0, 0);
    }
    OSRestoreInterrupts(temp_r30);
    return 1;
}

s32 fn_800B05EC(s32 arg0) {
    return M2C_FIELD((&lbl_802CF930 + (arg0 << 6)), s32 *, 0xC);
}

void UnlockedHandler(void) {
    M2C_UNK sp10;

    /* draft: did not compile: EXIGetID(0, &sp10); */
}

s32 EXIGetID(s32 arg0, u32 arg1, u32 *arg2) {
    s32 saved_reg_r29;
    u32 sp1C;
    M2C_UNK (*temp_r24)(s32, M2C_UNK);
    M2C_UNK (*var_r5)();
    s32 temp_r0;
    s8 temp_r0_2;
    s32 temp_r23;
    s32 temp_r23_2;
    s32 temp_r28;
    s32 temp_r28_2;
    s32 temp_r30;
    s32 temp_r30_2;
    s32 temp_r30_3;
    s32 temp_r30_4;
    s32 temp_r30_5;
    s32 temp_r3;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r29;
    s32 var_r30;
    void *temp_r31;

    var_r29 = saved_reg_r29;
    temp_r31 = &lbl_802CF930 + (arg0 << 6);
    if ((arg0 == 0) && (arg1 == 2U) && ((u32) lbl_803507B0 != 0U)) {
        *arg2 = lbl_803507B0;
        return 1;
    }
    if ((arg0 < 2) && (arg1 == 0U)) {
        if (__EXIProbe(arg0) == 0) {
            return 0;
        }
        temp_r0 = arg0 * 4;
        if (0 /* draft: did not compile */) {
            *arg2 = M2C_FIELD(temp_r31, u32 *, 0x1C);
            return M2C_FIELD(temp_r31, s32 *, 0x20);
        }
        temp_r28 = OSDisableInterrupts();
        if ((M2C_FIELD(temp_r31, s32 *, 0xC) & 8) || (__EXIProbe(arg0) == 0)) {
            OSRestoreInterrupts(temp_r28);
            var_r0 = 0;
        } else {
            EXIClearInterrupts(arg0, 1, 0, 0);
            M2C_FIELD(temp_r31, s32 *, 8) = 0;
            __OSUnmaskInterrupts(0x100000U >> (arg0 * 3));
            M2C_FIELD(temp_r31, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r31, s32 *, 0xC) | 8);
            OSRestoreInterrupts(temp_r28);
            var_r0 = 1;
        }
        if (var_r0 == 0) {
            return 0;
        }
        /* draft: did not compile: var_r29 = *(0x800030C0 + temp_r0); */
        goto block_17;
    }
block_17:
    temp_r28_2 = OSDisableInterrupts();
    var_r0_2 = 0;
    if ((arg0 < 2) && (arg1 == 0U)) {
        var_r0_2 = 1;
    }
    if (var_r0_2 != 0) {
        /* draft: did not compile: var_r5 = UnlockedHandler; */
    } else {
        var_r5 = NULL;
    }
    /* draft: did not compile: var_r30 = EXILock(arg0, arg1, var_r5) == 0; */
    if (var_r30 == 0) {
        var_r30 = EXISelect(arg0, arg1, 0) == 0;
        if (var_r30 == 0) {
            sp1C = 0U;
            temp_r30 = var_r30 | (EXIImm(arg0, &sp1C, 2, 1, 0) == 0);
            temp_r30_2 = temp_r30 | (EXISync(arg0) == 0);
            temp_r30_3 = temp_r30_2 | (EXIImm(arg0, arg2, 4, 0, 0) == 0);
            temp_r30_4 = temp_r30_3 | (EXISync(arg0) == 0);
            var_r30 = temp_r30_4 | (EXIDeselect(arg0) == 0);
        }
        temp_r23 = OSDisableInterrupts();
        if (!(M2C_FIELD(temp_r31, s32 *, 0xC) & 0x10)) {
            OSRestoreInterrupts(temp_r23);
        } else {
            M2C_FIELD(temp_r31, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r31, s32 *, 0xC) & 0xFFFFFFEF);
            SetExiInterruptMask(arg0, temp_r31);
            temp_r3 = M2C_FIELD(temp_r31, s32 *, 0x24);
            if (temp_r3 > 0) {
                temp_r24 = M2C_FIELD(temp_r31, M2C_UNK (**)(s32, M2C_UNK), 0x2C);
                temp_r0_2 = temp_r3 - 1;
                M2C_FIELD(temp_r31, s32 *, 0x24) = temp_r0_2;
                if (temp_r0_2 > 0) {
                    /* draft: did not compile: memmove(temp_r31 + 0x28, temp_r31 + 0x30, M2C_FIELD(temp_r31, s32 *, 0x24) * 8); */
                }
                temp_r24(arg0, 0);
            }
            OSRestoreInterrupts(temp_r23);
        }
    }
    OSRestoreInterrupts(temp_r28_2);
    if ((arg0 < 2) && (arg1 == 0U)) {
        temp_r23_2 = OSDisableInterrupts();
        if (!(M2C_FIELD(temp_r31, s32 *, 0xC) & 8)) {
            OSRestoreInterrupts(temp_r23_2);
        } else if ((M2C_FIELD(temp_r31, s32 *, 0xC) & 0x10) && ((u32) M2C_FIELD(temp_r31, u32 *, 0x18) == 0U)) {
            OSRestoreInterrupts(temp_r23_2);
        } else {
            M2C_FIELD(temp_r31, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r31, s32 *, 0xC) & 0xFFFFFFF7);
            __OSMaskInterrupts(0x500000U >> (arg0 * 3));
            OSRestoreInterrupts(temp_r23_2);
        }
        OSDisableInterrupts();
        /* draft: did not compile: temp_r30_5 = var_r30 | (var_r29 != *(0x800030C0 + (arg0 * 4))); */
        if (temp_r30_5 == 0) {
            M2C_FIELD(temp_r31, u32 *, 0x1C) = (u32) *arg2;
            M2C_FIELD(temp_r31, s32 *, 0x20) = var_r29;
        }
        OSRestoreInterrupts((long)(0));
        if (temp_r30_5 != 0) {
            return 0;
        }
        return M2C_FIELD(temp_r31, s32 *, 0x20);
    }
    if (var_r30 != 0) {
        return 0;
    }
    return 1;
}

s32 fn_800B09DC(void) {
    s32 temp_r4;
    s32 var_r31;

    EXIInit();
    lbl_803507F8 = 0;
    var_r31 = 0;
loop_2:
    if (var_r31 < 2) {
        fn_800C8760(&lbl_802CF9F0 + (var_r31 * 0xC), 0);
        temp_r4 = var_r31 * 0x28;
        OSCreateAlarm(&lbl_802CFA08 + temp_r4, temp_r4);
        *(&lbl_803507E0 + (var_r31 * 2)) = 0;
        var_r31 += 1;
        goto loop_2;
    }
    return 0;
}

u16 fn_800B0A60(s32 arg0, s32 arg1) {
    s32 spC;
    s32 sp8;
    s32 temp_r3;

    sp8 = arg0;
    spC = arg1;
    *(&lbl_803507C0 + (lbl_803507F8 * 4)) = sp8;
    *(&lbl_803507B8 + (lbl_803507F8 * 4)) = arg1;
    *(&lbl_803507C8 + (lbl_803507F8 * 4)) = 0;
    *(&lbl_803507E0 + (lbl_803507F8 * 2)) = 0;
    do {
        temp_r3 = EXIProbeEx(lbl_803507F8);
    } while (temp_r3 == 0);
    if (temp_r3 == 1) {
        fn_800B0B58();
        return *(&lbl_803507E0 + (lbl_803507F8 * 2));
    }
    return 0x90U;
}

u16 fn_800B0B14(void) {
    return lbl_803507F8;
}

u16 fn_800B0B1C(u16 arg0) {
    if ((u16) lbl_803507F8 != arg0) {
        lbl_803507F8 = arg0;
    }
    *(&lbl_803507E0 + (lbl_803507F8 * 2)) = 0;
    return *(&lbl_803507E0 + (lbl_803507F8 * 2));
}

u16 fn_800B0B58(void) {
    u8 sp8;
    s32 temp_r0;
    s32 temp_r5;
    s32 temp_r5_2;
    s8 temp_r6;
    s32 temp_r6_2;
    s32 temp_r8;
    u32 temp_r0_2;
    u8 temp_r28;
    u8 temp_r29;
    u8 temp_r29_2;

    *(&lbl_803507F4 + (lbl_803507F8 * 2)) = 0;
    if (0 /* draft: did not compile */) {
        temp_r0 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r0) = *(&lbl_803507E0 + temp_r0) | 0x90;
        return *(&lbl_803507E0 + (lbl_803507F8 * 2));
    }
    temp_r6 = lbl_803507F8 * 4;
    *(&lbl_803507D8 + temp_r6) = 0;
    temp_r5 = lbl_803507F8 * 4;
    *(&lbl_803507C8 + temp_r5) = 0;
    *(&lbl_803507FC + (lbl_803507F8 * 4)) = 0;
    *(&lbl_803507E0 + (lbl_803507F8 * 2)) = 0;
    fn_800B1A64(&lbl_803507E0, 0, temp_r5, temp_r6);
    if ((u16) *(&lbl_803507E0 + (lbl_803507F8 * 2)) != 0) {
        *(&lbl_803507FC + (lbl_803507F8 * 4)) = 1;
        fn_800B1A64((long *)(&lbl_803507FC), (long)(1), (long)(0), (long)(0));
        if ((u16) *(&lbl_803507E0 + (lbl_803507F8 * 2)) != 0) {
            return *(&lbl_803507E0 + (lbl_803507F8 * 2));
        }
    }
    fn_800B21F4();
    if ((u16) *(&lbl_803507E0 + (lbl_803507F8 * 2)) != 0) {
        return *(&lbl_803507E0 + (lbl_803507F8 * 2));
    }
    fn_800B2894();
    if ((u16) *(&lbl_803507E0 + (lbl_803507F8 * 2)) != 0) {
        return *(&lbl_803507E0 + (lbl_803507F8 * 2));
    }
    fn_800B2AC4();
    if ((u16) *(&lbl_803507E0 + (lbl_803507F8 * 2)) != 0) {
        return *(&lbl_803507E0 + (lbl_803507F8 * 2));
    }
    *(&lbl_803507E4 + (lbl_803507F8 * 4)) = 0x200;
    fn_800B2CF4(*(&lbl_803507E4 + (lbl_803507F8 * 4)), 0x200);
    if ((u16) *(&lbl_803507E0 + (lbl_803507F8 * 2)) != 0) {
        return *(&lbl_803507E0 + (lbl_803507F8 * 2));
    }
    temp_r29 = M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 0x12)), u8 *, 0x6B);
    temp_r29_2 = temp_r29 & 7;
    if (temp_r29_2 > 3U) {
        *(&lbl_803507F4 + (lbl_803507F8 * 2)) = 0;
    } else {
        temp_r28 = *(&lbl_801DA7A0 + ((((temp_r29 >> 3U) & 0xF) * 4) & 0x3FC) + temp_r29_2);
        if ((u16) temp_r28 == 0xFF) {
            *(&lbl_803507F4 + (lbl_803507F8 * 2)) = 0;
        } else {
            *(&lbl_803507F4 + (lbl_803507F8 * 2)) = (s16) temp_r28;
        }
    }
    fn_800B1460();
    if ((u16) *(&lbl_803507E0 + (lbl_803507F8 * 2)) != 0) {
        return *(&lbl_803507E0 + (lbl_803507F8 * 2));
    }
    *(&lbl_803507C8 + ((lbl_803507F8 * 4) + 2)) = ((M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 6)), u8 *, 0x92) << 8) & 0xFFFF00) + M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 6)), u8 *, 0x93);
    temp_r8 = lbl_803507F8 * 4;
    *(&lbl_803507C8 + temp_r8) = *(&lbl_803507C8 + temp_r8) * (4 << ((((u8) M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 0x12)), u8 *, 0x72) >> 7U) & 1 & ~6) | ((M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 0x12)), u8 *, 0x71) << 1) & 6)));
    *(&lbl_803507C8 + (lbl_803507F8 * 4)) = ((M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 6)), u8 *, 0x90) << 8) & 0xFFFF00) + M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 6)), u8 *, 0x91);
    if (M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 0x12)), u8 *, 0x6D) & 0xF) {
        *(&lbl_803507C8 + (lbl_803507F8 * 4)) = *(&lbl_803507C8 + (lbl_803507F8 * 4)) << ((((u8) M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 0x12)), u8 *, 0x75) >> 6U) & 3 & ~0xC) | ((M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 0x12)), u8 *, 0x74) << 2) & 0xC));
    }
    temp_r6_2 = lbl_803507F8 * 4;
    *(&lbl_803507C8 + temp_r6_2) = (u32) *(&lbl_803507C8 + temp_r6_2) / (u32) *(&lbl_803507E4 + (lbl_803507F8 * 4));
    sp8 = (((u8) M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 0x12)), u8 *, 0x70) >> 6U) & 3) + ((M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 0x12)), u8 *, 0x6F) * 4) + ((M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 0x12)), u8 *, 0x6E) << 0xA) & 0xC00) + 1);
    sp8 *= 4 << ((((u8) M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 0x12)), u8 *, 0x72) >> 7U) & 1 & ~6) | ((M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 0x12)), u8 *, 0x71) << 1) & 6));
    sp8 <<= (((u8) M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 0x12)), u8 *, 0x75) >> 6U) & 3 & ~0xC) | ((M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 0x12)), u8 *, 0x74) << 2) & 0xC);
    temp_r0_2 = sp8 / (u32) *(&lbl_803507E4 + (lbl_803507F8 * 4));
    sp8 = temp_r0_2;
    temp_r5_2 = lbl_803507F8 * 4;
    *(&lbl_803507C8 + temp_r5_2) = *(&lbl_803507C8 + temp_r5_2) + temp_r0_2;
    return *(&lbl_803507E0 + (lbl_803507F8 * 2));
}

s32 fn_800B1090(u16 *arg0) {
    s32 temp_r3;

    *arg0 = 0x831F;
    do {
        temp_r3 = EXIProbeEx(lbl_803507F8);
    } while (temp_r3 == 0);
    if (temp_r3 != 1) {
        *arg0 |= 0x420;
    }
    if ((s32) *(&lbl_803507FC + (lbl_803507F8 * 4)) != 0) {
        *arg0 |= 0x80;
    }
    return 0;
}

s32 fn_800B1110(u8 *arg0) {
    s32 var_r31;
    s32 var_r31_2;
    u8 *var_r30;

    var_r30 = arg0;
    var_r31 = 0;
loop_2:
    if (var_r31 < 0x10) {
        *var_r30 = *(&lbl_802CFAFC + (lbl_803507F8 * 0x10) + (0xF - var_r31));
        var_r30 += 1;
        var_r31 += 1;
        goto loop_2;
    }
    var_r31_2 = 0;
loop_5:
    if (var_r31_2 < 0x10) {
        *var_r30 = *(&lbl_802CFA58 + (lbl_803507F8 * 0x12) + (0xF - var_r31_2));
        var_r30 += 1;
        var_r31_2 += 1;
        goto loop_5;
    }
    return 0;
}

u16 fn_800B11A4(s32 arg0, s32 arg1, s32 arg2, void *arg4) {
    void *sp18;
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 var_r31;
    u32 var_r30;

    sp8 = arg0;
    spC = arg1;
    sp10 = arg2;
    sp18 = arg4;
    *(&lbl_803507E0 + (lbl_803507F8 * 2)) = 0;
    var_r31 = sp8;
    if ((fn_800B15DC((unsigned char)(0x12), (long)(arg2 * *(&lbl_803507E4 + (lbl_803507F8 * 4)))) == 0) && (fn_800B169C() == 0)) {
        var_r30 = 0U;
loop_5:
        if (var_r30 < (u32) (spC - 1)) {
            if (fn_800B4778(var_r31, (u16) *(&lbl_803507E4 + (lbl_803507F8 * 4))) == 0) {
                var_r31 += *(&lbl_803507E4 + (lbl_803507F8 * 4));
                var_r30 += 1;
                goto loop_5;
            }
        }
        if (fn_800B4E20(var_r31, (u16) *(&lbl_803507E4 + (lbl_803507F8 * 4))) == 0) {
            fn_800B1898();
        }
    }
    M2C_FIELD(sp18, u16 *, 2) = (u16) *(&lbl_803507E0 + (lbl_803507F8 * 2));
    return *(&lbl_803507E0 + (lbl_803507F8 * 2));
}

u16 fn_800B12C8(s32 arg0, u32 arg1, s32 arg2, void *arg4) {
    s32 saved_reg_r31;
    u8 sp1C;
    s32 sp10;
    u32 spC;
    s32 sp8;
    u32 var_r31;

    var_r31 = saved_reg_r31;
    sp8 = arg0;
    spC = arg1;
    sp10 = arg2;
    *(&lbl_803507E0 + (lbl_803507F8 * 2)) = 0;
    if ((s32) *(&lbl_803507FC + (lbl_803507F8 * 4)) != 0) {
        return 0x400U;
    }
    sp1C = sp8;
    if ((fn_800B15DC((unsigned char)(0x19), (long)(sp10 * *(&lbl_803507E4 + (lbl_803507F8 * 4)))) == 0) && (fn_800B169C() == 0)) {
        var_r31 = 0;
loop_8:
        if (var_r31 < spC) {
            if ((fn_800B5E8C(sp1C, (u16) *(&lbl_803507E4 + (lbl_803507F8 * 4))) == 0) && (fn_800B19AC() == 0)) {
                sp1C += *(&lbl_803507E4 + (lbl_803507F8 * 4));
                var_r31 += 1;
                goto loop_8;
            }
        }
    }
    *(&lbl_803507EC + (lbl_803507F8 * 4)) = 0;
    fn_800B400C();
    if (((u16) *(&lbl_803507E0 + (lbl_803507F8 * 2)) == 0) && (fn_800B15DC(0xD, *(&lbl_803507EC + (lbl_803507F8 * 4))) == 0)) {
        fn_800B17B0();
    }
    M2C_FIELD(arg4, u16 *, 2) = (u16) *(&lbl_803507E0 + (lbl_803507F8 * 2));
    M2C_FIELD(arg4, s32 *, 4) = (s32) (var_r31 * *(&lbl_803507E4 + (lbl_803507F8 * 4)));
    return *(&lbl_803507E0 + (lbl_803507F8 * 2));
}

u16 fn_800B1460(void) { return 0; } /* draft: stub */

u16 fn_800B15DC(u8 arg0, s32 arg1) {
    s32 unkspF;
    s32 unkspE;
    s32 unkspD;
    s32 spC;
    u8 sp8;

    sp8 = arg0;
    spC = arg1;
    M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 5)), u8 *, 0x12C) = sp8;
    M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 5)), u8 *, 0x12D) = (u8) spC;
    M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 5)), u8 *, 0x12E) = unkspD;
    M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 5)), u8 *, 0x12F) = unkspE;
    M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 5)), u8 *, 0x130) = unkspF;
    fn_800B5A64(&lbl_802CF9F0 + (lbl_803507F8 * 5) + 0x12C, 5);
    return *(&lbl_803507E0 + (lbl_803507F8 * 2));
}

u16 fn_800B169C(void) {
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;

    fn_800B2FD4(&lbl_802CF9F0 + (lbl_803507F8 << 7) + 0x138, 1);
    if (M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) & 0x40) {
        temp_r4 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4) = *(&lbl_803507E0 + temp_r4) | 0x1000;
    }
    if (M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) & 0x20) {
        temp_r4_2 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_2) = *(&lbl_803507E0 + temp_r4_2) | 0x100;
    }
    if (M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) & 8) {
        temp_r4_3 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_3) = *(&lbl_803507E0 + temp_r4_3) | 2;
    }
    if (M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) & 4) {
        temp_r4_4 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_4) = *(&lbl_803507E0 + temp_r4_4) | 1;
    }
    return *(&lbl_803507E0 + (lbl_803507F8 * 2));
}

u16 fn_800B17B0(void) {
    s32 temp_r4;
    s32 temp_r6;

    fn_800B2FD4(&lbl_802CF9F0 + (lbl_803507F8 << 7) + 0x138, 2);
    if ((M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) & 0x7C) || (M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x139) & 0x9E)) {
        temp_r4 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4) = *(&lbl_803507E0 + temp_r4) | 8;
        *(&lbl_803507D8 + (lbl_803507F8 * 4)) = M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) << 8;
        temp_r6 = 4;
        temp_r6 *= lbl_803507F8;
        *(&lbl_803507D8 + temp_r6) = *(&lbl_803507D8 + temp_r6) + M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x139);
    }
    return *(&lbl_803507E0 + (lbl_803507F8 * 2));
}
