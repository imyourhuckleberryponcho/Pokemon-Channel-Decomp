/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

s32 VerifyID();
s32 OSDisableInterrupts();
M2C_UNK OSRestoreInterrupts(s32);
s32 __CARDGetControlBlock();
s32 __CARDPutControlBlock(void *, s32);
M2C_UNK fn_800D8A2C(s32);
extern M2C_UNK fn_800D77B0;
extern M2C_UNK lbl_802A79C0;
extern u16 lbl_80350000;
s32 EXIProbeEx(s32);
s32 fn_800B05EC(s32);
s32 EXIGetID(s32, M2C_UNK, u32 *);
extern M2C_UNK lbl_8031C9E0;
M2C_UNK DCInvalidateRange(s32, M2C_UNK);
M2C_UNK EXIUnlock(s32);
s32 __OSLockSramEx();
M2C_UNK __OSUnlockSramEx();
M2C_UNK EXISetExiCallback(s32, M2C_UNK *);
s32 EXIProbe(s32);
s32 __CARDEnableInterrupt(s32, M2C_UNK);
s32 fn_800D7BC0(s32, u8 *);
s32 __CARDClearStatus(s32, s32 *, s32);
s32 __CARDUnlock();
extern M2C_UNK __CARDExiHandler;
extern M2C_UNK lbl_802A79E0;
s32 EXILock(s32, M2C_UNK, M2C_UNK *);
extern M2C_UNK __CARDUnlockedHandler;
s32 EXIAttach(s32, M2C_UNK *);
M2C_UNK OSCancelAlarm();
extern M2C_UNK fn_800D77AC;
extern M2C_UNK __CARDExtHandler;
M2C_UNK EXIDetach(s32);
u64 OSGetTime();
void *__OSLockSram(M2C_UNK);
M2C_UNK __OSUnlockSram(M2C_UNK);
M2C_UNK DCStoreRange(void *, M2C_UNK, void *);
M2C_UNK __CARDCheckSum(void *, M2C_UNK, void *, void *, void *);
u64 __shr2i(s32, s32, M2C_UNK, s32, s16, s8);
s32 fn_800D86CC();
s32 memcmp();
extern M2C_UNK lbl_8031CC00;

s32 VerifyDir(void *arg0, s32 *arg1);
s32 VerifyFAT(void *arg0, s32 *arg1);
s32 __CARDVerify(s32 arg0);
s32 CARDCheckExAsync(s32 arg0, s32 *arg1, M2C_UNK (*arg2)(s32, M2C_UNK));
void CARDCheckAsync(s32 arg1);
void fn_800DB5B0(s32 arg0);
s32 IsCard(u32 arg0);
s32 CARDProbeEx(s32 arg0, s32 *arg1, s32 *arg2);
s32 fn_800DB84C(s32 arg0);
void __CARDMountCallback(s32 arg0, s32 arg1);
s32 CARDMountAsync(s32 arg0, s32 arg1, s32 arg2, M2C_UNK *arg3);
void fn_800DBF34(s32 arg0);
void DoUnmount(s32 arg0, s32 arg1);
s32 CARDUnmount(s32 arg0);
void FormatCallback(s32 arg0, s32 arg1);
s32 __CARDFormatRegionAsync(s32 arg0, s16 arg1, M2C_UNK *arg2);
void CARDFormatAsync(s32 arg0, s32 arg1);
void fn_800DC8A8(s32 arg0);
s32 __CARDCompareFileName(s32 arg0, u8 *arg1);
s32 fn_800DC964(void *arg0, u8 *arg1);
s32 fn_800DC9FC(void *arg0);

s32 VerifyDir(void *arg0, s32 *arg1) {
    s32 sp18;
    s32 sp1C;
    u16 *sp14;
    s32 temp_r0;
    s32 var_ctr;
    s32 var_ctr_2;
    s32 var_r0;
    s32 var_r30;
    s32 var_r31;
    s32 var_r4;
    s32 var_r6;
    u16 **temp_r6_2;
    u16 **var_r7;
    u16 **var_r8;
    u16 *temp_r4;
    u16 *temp_r6;
    u16 *var_r5;
    u16 temp_r9;
    u16 temp_r9_2;
    u16 temp_r9_3;
    u16 temp_r9_4;
    u16 temp_r9_5;
    u16 temp_r9_6;
    u16 temp_r9_7;
    u16 temp_r9_8;
    u16 temp_r9_9;
    u16 var_r10;
    u16 var_r11;

    /* draft: did not compile: var_r7 = &sp1C[0]; */
    var_r8 = &sp14;
    var_r31 = 0;
    var_r30 = 0;
    var_r4 = 0;
    do {
        /* draft: did not compile: *var_r7 = M2C_FIELD(arg0, s32 *, 0x80) + ((var_r4 + 1) << 0xD); */
        var_r6 = 0x1FFC / 2;
        var_r11 = 0;
        *var_r8 = *var_r7 + 0x1FC0;
        var_r10 = 0;
        var_r5 = *var_r7;
        if (var_r6 > 0) {
            temp_r0 = 0x1FFC / 16;
            var_ctr = temp_r0;
            if (temp_r0 != 0) {
                do {
                    temp_r9 = M2C_FIELD(var_r5, u16 *, 0);
                    temp_r9_2 = M2C_FIELD(var_r5, u16 *, 2);
                    temp_r9_3 = M2C_FIELD(var_r5, u16 *, 4);
                    temp_r9_4 = M2C_FIELD(var_r5, u16 *, 6);
                    temp_r9_5 = M2C_FIELD(var_r5, u16 *, 8);
                    temp_r9_6 = M2C_FIELD(var_r5, u16 *, 0xA);
                    temp_r9_7 = M2C_FIELD(var_r5, u16 *, 0xC);
                    temp_r9_8 = M2C_FIELD(var_r5, u16 *, 0xE);
                    var_r10 += temp_r9 + temp_r9_2 + temp_r9_3 + temp_r9_4 + temp_r9_5 + temp_r9_6 + temp_r9_7 + temp_r9_8;
                    var_r11 = var_r11 + ~(temp_r9 | temp_r9) + ~(temp_r9_2 | temp_r9_2) + ~(temp_r9_3 | temp_r9_3) + ~(temp_r9_4 | temp_r9_4) + ~(temp_r9_5 | temp_r9_5) + ~(temp_r9_6 | temp_r9_6) + ~(temp_r9_7 | temp_r9_7) + ~(temp_r9_8 | temp_r9_8);
                    var_r5 += 0x10;
                    var_ctr -= 1;
                } while (var_ctr != 0);
                var_r6 &= 7;
                if (var_r6 != 0) {
                    goto block_5;
                }
            } else {
block_5:
                var_ctr_2 = var_r6;
                do {
                    temp_r9_9 = *var_r5;
                    var_r5 += 2;
                    var_r10 += temp_r9_9;
                    var_r11 += ~(temp_r9_9 | temp_r9_9);
                    var_ctr_2 -= 1;
                } while (var_ctr_2 != 0);
            }
        }
        if (var_r10 == -1U) {
            var_r10 = 0;
        }
        if (var_r11 == -1U) {
            var_r11 = 0;
        }
        temp_r6 = *var_r8;
        if ((var_r10 != (u16) M2C_FIELD(temp_r6, u16 *, 0x3C)) || (var_r11 != (u16) M2C_FIELD(temp_r6, u16 *, 0x3E))) {
            M2C_FIELD(arg0, u16 **, 0x84) = NULL;
            var_r30 = var_r4;
            var_r31 += 1;
        }
        var_r4 += 1;
        var_r7 += 4;
        var_r8 += 4;
    } while (var_r4 < 2);
    if (var_r31 == 0) {
        temp_r4 = M2C_FIELD(arg0, u16 **, 0x84);
        if (temp_r4 == NULL) {
            if ((M2C_FIELD(sp14, s16 *, 0x3A) - M2C_FIELD(sp18, s16 *, 0x3A)) < 0) {
                var_r30 = 0;
            } else {
                var_r30 = 1;
            }
            /* draft: did not compile: temp_r6_2 = &(&sp1C[0])[var_r30]; */
            M2C_FIELD(arg0, u16 **, 0x84) = (u16 *) *temp_r6_2;
            /* draft: did not compile: memcpy(*temp_r6_2, (&sp1C[0])[var_r30 ^ 1], 0x2000, temp_r6_2); */
        } else {
            if (0 /* draft: did not compile */) {
                var_r0 = 0;
            } else {
                var_r0 = 1;
            }
            var_r30 = var_r0;
        }
    }
    if (arg1 != NULL) {
        *arg1 = var_r30;
    }
    return var_r31;
}

s32 VerifyFAT(void *arg0, s32 *arg1) {
    s32 sp14;
    void *sp10;
    s32 temp_r0;
    s32 var_ctr;
    s32 var_ctr_2;
    s32 var_r0;
    s32 var_r30;
    s32 var_r31;
    s32 var_r5;
    s32 var_r8;
    u16 *var_r6;
    u16 *var_r6_2;
    u16 temp_r9;
    u16 temp_r9_2;
    u16 temp_r9_3;
    u16 temp_r9_4;
    u16 temp_r9_5;
    u16 temp_r9_6;
    u16 temp_r9_7;
    u16 temp_r9_8;
    u16 temp_r9_9;
    u16 var_r10;
    u16 var_r10_2;
    u16 var_r11;
    u16 var_r9;
    void **temp_r6;
    void **var_r4;
    void *temp_r4;
    void *temp_r7;

    var_r5 = 0;
    var_r31 = 0;
    var_r30 = 0;
    var_r4 = &sp10;
    do {
        /* draft: did not compile: temp_r7 = M2C_FIELD(arg0, s32 *, 0x80) + ((var_r5 + 3) << 0xD); */
        var_r8 = 0x1FFC / 2;
        *var_r4 = temp_r7;
        /* draft: did not compile: var_r6 = temp_r7 + 4; */
        var_r11 = 0;
        var_r10 = 0;
        if (var_r8 > 0) {
            temp_r0 = 0x1FFC / 16;
            var_ctr = temp_r0;
            if (temp_r0 != 0) {
                do {
                    temp_r9 = M2C_FIELD(var_r6, u16 *, 0);
                    temp_r9_2 = M2C_FIELD(var_r6, u16 *, 2);
                    temp_r9_3 = M2C_FIELD(var_r6, u16 *, 4);
                    temp_r9_4 = M2C_FIELD(var_r6, u16 *, 6);
                    temp_r9_5 = M2C_FIELD(var_r6, u16 *, 8);
                    temp_r9_6 = M2C_FIELD(var_r6, u16 *, 0xA);
                    temp_r9_7 = M2C_FIELD(var_r6, u16 *, 0xC);
                    temp_r9_8 = M2C_FIELD(var_r6, u16 *, 0xE);
                    var_r10 += temp_r9 + temp_r9_2 + temp_r9_3 + temp_r9_4 + temp_r9_5 + temp_r9_6 + temp_r9_7 + temp_r9_8;
                    var_r11 = var_r11 + ~(temp_r9 | temp_r9) + ~(temp_r9_2 | temp_r9_2) + ~(temp_r9_3 | temp_r9_3) + ~(temp_r9_4 | temp_r9_4) + ~(temp_r9_5 | temp_r9_5) + ~(temp_r9_6 | temp_r9_6) + ~(temp_r9_7 | temp_r9_7) + ~(temp_r9_8 | temp_r9_8);
                    var_r6 += 0x10;
                    var_ctr -= 1;
                } while (var_ctr != 0);
                var_r8 &= 7;
                if (var_r8 != 0) {
                    goto block_5;
                }
            } else {
block_5:
                var_ctr_2 = var_r8;
                do {
                    temp_r9_9 = *var_r6;
                    var_r6 += 2;
                    var_r10 += temp_r9_9;
                    var_r11 += ~(temp_r9_9 | temp_r9_9);
                    var_ctr_2 -= 1;
                } while (var_ctr_2 != 0);
            }
        }
        if (var_r10 == -1U) {
            var_r10 = 0;
        }
        if (var_r11 == -1U) {
            var_r11 = 0;
        }
        if (((u16) M2C_FIELD(temp_r7, u16 *, 0) != var_r10) || ((u16) M2C_FIELD(temp_r7, u16 *, 2) != var_r11)) {
            M2C_FIELD(arg0, void **, 0x88) = NULL;
            var_r30 = var_r5;
            var_r31 += 1;
        } else {
            /* draft: did not compile: var_r6_2 = temp_r7 + 0xA; */
            var_r10_2 = 0;
            var_r9 = 5;
loop_18:
            if (var_r9 < (u16) M2C_FIELD(arg0, u16 *, 0x10)) {
                if ((u16) *var_r6_2 == 0) {
                    var_r10_2 += 1;
                }
                var_r6_2 += 2;
                var_r9 += 1;
                goto loop_18;
            }
            if (var_r10_2 != (u16) M2C_FIELD(temp_r7, u16 *, 6)) {
                M2C_FIELD(arg0, void **, 0x88) = NULL;
                var_r30 = var_r5;
                var_r31 += 1;
            }
        }
        var_r5 += 1;
        var_r4 += 4;
    } while (var_r5 < 2);
    if (var_r31 == 0) {
        temp_r4 = M2C_FIELD(arg0, void **, 0x88);
        if (temp_r4 == NULL) {
            if ((M2C_FIELD(sp10, s16 *, 4) - M2C_FIELD(sp14, s16 *, 4)) < 0) {
                var_r30 = 0;
            } else {
                var_r30 = 1;
            }
            temp_r6 = &(&sp10)[var_r30];
            M2C_FIELD(arg0, void **, 0x88) = (void *) *temp_r6;
            memcpy((void *)(*temp_r6), (const void *)((&sp10)[var_r30 ^ 1]), (unsigned long)(0x2000));
        } else {
            if (temp_r4 == sp10) {
                var_r0 = 0;
            } else {
                var_r0 = 1;
            }
            var_r30 = var_r0;
        }
    }
    if (arg1 != NULL) {
        *arg1 = var_r30;
    }
    return var_r31;
}

s32 __CARDVerify(s32 arg0) {
    s32 temp_r0;
    s32 temp_r31;
    s32 temp_r3;

    temp_r3 = VerifyID();
    if (temp_r3 < 0) {
        return temp_r3;
    }
    /* draft: did not compile: temp_r31 = VerifyDir(arg0, 0); */
    /* draft: did not compile: temp_r0 = temp_r31 + VerifyFAT(arg0, 0); */
    switch (temp_r0) {                              /* irregular */
    case 1:
        return -6;
    case 0:
        return 0;
    default:
        return -6;
    }
}

s32 CARDCheckExAsync(s32 arg0, s32 *arg1, M2C_UNK (*arg2)(s32, M2C_UNK)) { return 0; } /* draft: stub */

void CARDCheckAsync(s32 arg1) {
    M2C_UNK sp10;

    /* draft: did not compile: CARDCheckExAsync(&sp10, arg1); */
}

void fn_800DB5B0(s32 arg0) {
    M2C_UNK spC;

    if (0 /* draft: did not compile */) {
        if (&spC == NULL) {
            return;
        }
        fn_800D8A2C(arg0);
    }
}

#pragma push
#pragma optimize_for_size on
s32 IsCard(u32 arg0) {
    s32 temp_r3;
    s32 temp_r5;

    if ((arg0 & 0xFFFF0000) && (((u32) (arg0 + 0x80000000) != 4U) || ((u16) lbl_80350000 == -1U))) {
        return 0;
    }
    if (arg0 & 3) {
        return 0;
    }
    temp_r5 = arg0 & 0xFC;
    if (temp_r5 != 0x20) {
        if (temp_r5 < 0x20) {
            if (temp_r5 != 8) {
                if (temp_r5 < 8) {
                    if (temp_r5 != 4) {
                        /* Duplicate return node #17. Try simplifying control flow for better match */
                        return 0;
                    }
                    goto block_18;
                }
                if (temp_r5 != 0x10) {
                    /* Duplicate return node #17. Try simplifying control flow for better match */
                    return 0;
                }
                goto block_18;
            }
            goto block_18;
        }
        if ((temp_r5 != 0x80) && ((temp_r5 >= 0x80) || (temp_r5 != 0x40))) {
            return 0;
        }
        goto block_18;
    }
block_18:
    temp_r3 = *(&lbl_802A79C0 + ((arg0 >> 9U) & 0x1C));
    if (temp_r3 == 0) {
        return 0;
    }
    if ((u32) ((u32) ((temp_r5 << 0x11) & 0x1FFE0000) / (u32) temp_r3) < 8U) {
        return 0;
    }
    return 1;
}
#pragma pop

s32 CARDProbeEx(s32 arg0, s32 *arg1, s32 *arg2) {
    void *temp_r30;
    u8 temp_r29;
    s32 temp_r3;
    s32 temp_r4;
    s8 var_r30;
    u32 sp14;

    if ((arg0 < 0) || (arg0 >= 2)) {
        return -0x80;
    }
    if (*(u8 *)0x800030E3 & 0x80) {
        return -3;
    }
    temp_r4 = arg0 * 0x110;
    temp_r30 = &lbl_8031C9E0 + temp_r4;
    temp_r29 = OSDisableInterrupts(&lbl_8031C9E0, temp_r4);
    temp_r3 = EXIProbeEx(arg0);
    if (temp_r3 == -1) {
        var_r30 = -3;
    } else if (temp_r3 == 0) {
        var_r30 = -1;
    } else if ((s32) M2C_FIELD(temp_r30, s32 *, 0) != 0) {
        if ((s32) M2C_FIELD(temp_r30, s32 *, 0x24) < 1) {
            var_r30 = -1;
        } else {
            if (arg1 != NULL) {
                *arg1 = (s32) M2C_FIELD(temp_r30, u16 *, 8);
            }
            if (arg2 != NULL) {
                *arg2 = M2C_FIELD(temp_r30, s32 *, 0xC);
            }
            var_r30 = 0;
        }
    } else if (fn_800B05EC(arg0) & 8) {
        var_r30 = -2;
    } else if (EXIGetID(arg0, 0, &sp14) == 0) {
        var_r30 = -1;
    } else if (IsCard(sp14) != 0) {
        if (arg1 != NULL) {
            *arg1 = sp14 & 0xFC;
        }
        if (arg2 != NULL) {
            *arg2 = *(&lbl_802A79C0 + ((sp14 >> 9U) & 0x1C));
        }
        var_r30 = 0;
    } else {
        var_r30 = -2;
    }
    OSRestoreInterrupts(temp_r29);
    return var_r30;
}

s32 fn_800DB84C(s32 arg0) { return 0; } /* draft: stub */

#pragma push
#pragma peephole off
void __CARDMountCallback(s32 arg0, s32 arg1) {
    M2C_UNK (*temp_r30)(s32, s32);
    void *temp_r31;
    int var_r29;
    s32 temp_r0;

    var_r29 = arg1;
    temp_r31 = &lbl_8031C9E0 + (arg0 * 0x110);
    switch (var_r29) {                              /* irregular */
    case 0:
        temp_r0 = M2C_FIELD(temp_r31, s32 *, 0x24) + 1;
        M2C_FIELD(temp_r31, s32 *, 0x24) = temp_r0;
        if (temp_r0 < 7) {
            var_r29 = fn_800DB84C(arg0);
            if (var_r29 >= 0) {
                return;
            }
            goto block_16;
        }
        /* draft: did not compile: var_r29 = __CARDVerify(temp_r31); */
    default:
block_16:
        temp_r30 = M2C_FIELD(temp_r31, M2C_UNK (**)(s32, s32), 0xD0);
        temp_r30(arg0, var_r29);
        M2C_FIELD(temp_r31, M2C_UNK (**)(s32, s32), 0xD0) = NULL;
        __CARDPutControlBlock(temp_r31, var_r29);
        return;
    case 1:
        M2C_FIELD(temp_r31, void (**)(s32, s32), 0xDC) = __CARDMountCallback;
        if (EXILock(arg0, 0, &__CARDUnlockedHandler) != 0) {
            M2C_FIELD(temp_r31, void (**)(s32, s32), 0xDC) = NULL;
            var_r29 = fn_800DB84C(arg0);
            if (var_r29 >= 0) {
                return;
            }
            goto block_16;
        }
        break;
    case -3:
    case -5:
        DoUnmount(arg0, var_r29);
        goto block_16;
    }
}
#pragma pop

s32 CARDMountAsync(s32 arg0, s32 arg1, s32 arg2, M2C_UNK *arg3) {
    M2C_UNK *var_r0;
    s32 temp_r28;
    s32 temp_r4;
    void *temp_r31;

    if ((arg0 < 0) || (arg0 >= 2)) {
        return -0x80;
    }
    if (*(u8 *)0x800030E3 & 0x80) {
        return -3;
    }
    temp_r4 = arg0 * 0x110;
    temp_r31 = &lbl_8031C9E0 + temp_r4;
    temp_r28 = OSDisableInterrupts(&lbl_8031C9E0, temp_r4);
    if ((s32) M2C_FIELD(temp_r31, s32 *, 4) == -1) {
        OSRestoreInterrupts(temp_r28);
        return -1;
    }
    if (((s32) M2C_FIELD(temp_r31, s32 *, 0) == 0) && (fn_800B05EC(arg0) & 8)) {
        OSRestoreInterrupts(temp_r28);
        return -2;
    }
    M2C_FIELD(temp_r31, s32 *, 4) = -1;
    M2C_FIELD(temp_r31, s32 *, 0x80) = arg1;
    M2C_FIELD(temp_r31, s32 *, 0xC4) = arg2;
    if (arg3 != NULL) {
        var_r0 = arg3;
    } else {
        var_r0 = &fn_800D77AC;
    }
    M2C_FIELD(temp_r31, M2C_UNK **, 0xD0) = var_r0;
    M2C_FIELD(temp_r31, s32 *, 0xCC) = 0;
    if (((s32) M2C_FIELD(temp_r31, s32 *, 0) == 0) && (EXIAttach(arg0, &__CARDExtHandler) == 0)) {
        M2C_FIELD(temp_r31, s32 *, 4) = -3;
        OSRestoreInterrupts(temp_r28);
        return -3;
    }
    M2C_FIELD(temp_r31, s32 *, 0x24) = 0;
    M2C_FIELD(temp_r31, s32 *, 0) = 1;
    EXISetExiCallback(arg0, 0);
    /* draft: did not compile: OSCancelAlarm(temp_r31 + 0xE0); */
    M2C_FIELD(temp_r31, s32 *, 0x84) = 0;
    M2C_FIELD(temp_r31, s32 *, 0x88) = 0;
    OSRestoreInterrupts(temp_r28);
    /* draft: did not compile: M2C_FIELD(temp_r31, M2C_UNK (**)(), 0xDC) = __CARDMountCallback; */
    if (EXILock(arg0, 0, &__CARDUnlockedHandler) == 0) {
        return 0;
    }
    M2C_FIELD(temp_r31, M2C_UNK (**)(), 0xDC) = NULL;
    return fn_800DB84C(arg0);
}

void fn_800DBF34(s32 arg0) {
    if (0 /* draft: did not compile */) {
        return;
    }
    fn_800D8A2C(arg0);
}

void DoUnmount(s32 arg0, s32 arg1) {
    s32 temp_r5;
    void *temp_r31;
    s32 temp_r30;

    temp_r5 = arg0 * 0x110;
    temp_r31 = &lbl_8031C9E0 + temp_r5;
    temp_r30 = OSDisableInterrupts(&lbl_8031C9E0, temp_r5);
    if ((s32) M2C_FIELD(temp_r31, s32 *, 0) != 0) {
        EXISetExiCallback(arg0, 0);
        EXIDetach(arg0);
        /* draft: did not compile: OSCancelAlarm(temp_r31 + 0xE0); */
        M2C_FIELD(temp_r31, s32 *, 0) = 0;
        M2C_FIELD(temp_r31, s32 *, 4) = arg1;
        M2C_FIELD(temp_r31, s32 *, 0x24) = 0;
    }
    OSRestoreInterrupts(temp_r30);
}

s32 CARDUnmount(s32 arg0) {
    M2C_UNK spC;
    s32 temp_r31;
    s32 temp_r3;
    s32 temp_r4;
    void *temp_r30;

    temp_r3 = __CARDGetControlBlock(&spC);
    if (temp_r3 < 0) {
        return temp_r3;
    }
    temp_r4 = arg0 * 0x110;
    temp_r30 = &lbl_8031C9E0 + temp_r4;
    temp_r31 = OSDisableInterrupts(&lbl_8031C9E0, temp_r4);
    if ((s32) M2C_FIELD(temp_r30, s32 *, 0) != 0) {
        EXISetExiCallback(arg0, 0);
        EXIDetach(arg0);
        /* draft: did not compile: OSCancelAlarm(temp_r30 + 0xE0); */
        M2C_FIELD(temp_r30, s32 *, 0) = 0;
        M2C_FIELD(temp_r30, s32 *, 4) = -3;
        M2C_FIELD(temp_r30, s32 *, 0x24) = 0;
    }
    OSRestoreInterrupts(temp_r31);
    return 0;
}

void FormatCallback(s32 arg0, s32 arg1) { } /* draft: stub */

s32 __CARDFormatRegionAsync(s32 arg0, s16 arg1, M2C_UNK *arg2) { return 0; } /* draft: stub */

void CARDFormatAsync(s32 arg0, s32 arg1) {
    /* draft: did not compile: __CARDFormatRegionAsync(arg0, fn_800D86CC(), arg1); */
}

void fn_800DC8A8(s32 arg0) {
    if (__CARDFormatRegionAsync(arg0, fn_800D86CC(), &fn_800D77B0) < 0) {
        return;
    }
    fn_800D8A2C(arg0);
}

s32 __CARDCompareFileName(s32 arg0, u8 *arg1) {
    s32 var_r7;
    u8 *var_r4;
    u8 *var_r5;
    u8 temp_r0;
    u8 temp_r6;

    var_r4 = arg1;
    /* draft: did not compile: var_r5 = arg0 + 8; */
    var_r7 = 0x20;
loop_5:
    var_r7 -= 1;
    if (var_r7 < 0) {
        if ((s8) *var_r4 == 0) {
            return 1;
        }
        return 0;
    }
    temp_r0 = *var_r5;
    var_r5 += 1;
    temp_r6 = *var_r4;
    var_r4 += 1;
    if ((s8) temp_r0 != (s8) temp_r6) {
        return 0;
    }
    if ((s8) temp_r6 == 0) {
        return 1;
    }
    goto loop_5;
}

s32 fn_800DC964(void *arg0, u8 *arg1) { return 0; } /* draft: stub */

s32 fn_800DC9FC(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0) == 0xFF) {
        return -4;
    }
    if (M2C_FIELD(arg0, u8 *, 0x34) & 4) {
        return 0;
    }
    return -0xA;
}
