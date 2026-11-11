/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK OSClearContext(M2C_UNK *, u16);
M2C_UNK OSSetCurrentContext(M2C_UNK *);
u32 fn_800D6D58();
u32 fn_800D6D68();
s32 fn_800D6D78();
M2C_UNK fn_800D6D90();
extern s32 lbl_80350B10;
extern void *lbl_80350B14;
extern void *lbl_80350B1C;
extern void *lbl_80350B20;
extern void *lbl_80350B24;
M2C_UNK fn_800D6ED8(M2C_UNK *, void *);
extern M2C_UNK lbl_802A76B8;
M2C_UNK OSWakeupThread(void *, s32);
extern M2C_UNK lbl_8031C9E0;
M2C_UNK EXISetExiCallback(s32, M2C_UNK);
M2C_UNK OSCancelAlarm();
s32 EXILock();
M2C_UNK EXIUnlock(s32);
s32 EXIDeselect(s32, s32);
s32 EXIProbe(s32);
s32 EXIImm(s32, s32 *, M2C_UNK, M2C_UNK, M2C_UNK);
s32 EXISelect(M2C_UNK, M2C_UNK);
s32 EXISync(s32);
s32 EXIImmEx();
s32 OSDisableInterrupts();
M2C_UNK OSRestoreInterrupts(s32);
M2C_UNK OSCreateAlarm(void *);
M2C_UNK OSInitAlarm();
M2C_UNK OSInitThreadQueue(void *);
M2C_UNK OSRegisterResetFunction(M2C_UNK *);
M2C_UNK OSRegisterVersion(s32);
s16 fn_800C6344();
M2C_UNK DSPInit();
extern M2C_UNK lbl_802A7840;
extern s32 lbl_8034FFF0;
extern s16 lbl_80350B28;
void *fn_800DA00C(void *);
void *fn_800DA410(void *);
M2C_UNK OSSleepThread();
s32 CARDUnmount(M2C_UNK);

void __DSPHandler(M2C_UNK *arg1);
void __DSP_exec_task(void *arg0, void *arg1);
void __DSP_boot_task(void *arg0);
void __DSP_insert_task(void *arg0);
void __DSP_remove_task(void *arg0);
void fn_800D77AC(void);
void fn_800D77B0(s32 arg0);
void __CARDExtHandler(s32 arg0);
void __CARDExiHandler(s32 arg0);
void __CARDTxHandler(s32 arg0);
void __CARDUnlockedHandler(s32 arg0);
s32 __CARDEnableInterrupt(s32 arg0, s32 arg1);
s32 fn_800D7BC0(s32 arg0, s32 *arg1);
s32 __CARDClearStatus(s32 arg0);
void TimeoutHandler(u32 arg0);
s32 fn_800D7E00(s32 arg0);
void UnlockedCallback(s32 arg0, s32 arg1);
s32 fn_800D813C(s32 arg0, u32 arg1, u32 arg2);
s32 __CARDReadSegment(s32 arg0);
s32 fn_800D8424(s32 arg0, s32 arg1);
s32 fn_800D8540(s32 arg0, u32 arg1);
void CARDInit(void);
u16 fn_800D86CC(void);
void __CARDSetDiskID(void *arg0);
s32 __CARDGetControlBlock(s32 arg0, void **arg1);
s32 __CARDPutControlBlock(void *arg0, s32 arg1);
s32 CARDGetResultCode(s32 arg0);
s32 CARDFreeBlocks(s32 *arg1, s32 *arg2);
s32 fn_800D89A8(s32 *arg1);
s32 fn_800D8A2C(s32 arg0);
s32 OnReset_800D8AC4(s32 arg0);
s32 fn_800D8B14(u32 arg0);

void __DSPHandler(M2C_UNK *arg1) {
    M2C_UNK sp10;
    M2C_UNK (*temp_r12)();
    M2C_UNK (*temp_r12_2)();
    M2C_UNK (*temp_r12_3)();
    M2C_UNK (*temp_r12_4)();
    M2C_UNK (*temp_r12_5)(void *);
    M2C_UNK (*temp_r12_6)(void *);
    M2C_UNK (*temp_r12_7)(void *);
    M2C_UNK (*temp_r12_8)(void *);
    M2C_UNK (*temp_r12_9)(void *);
    s32 var_r3;
    u16 temp_r5;

    temp_r5 = M2C_FIELD((void *)0xCC005000, u16 *, 0xA);
    M2C_FIELD((void *)0xCC005000, u16 *, 0xA) = (u16) ((temp_r5 & ~0x28) | 0x80);
    OSClearContext(&sp10, temp_r5);
    OSSetCurrentContext(&sp10);
    do {

    } while (fn_800D6D68() == 0U);
    var_r3 = fn_800D6D78();
    if ((M2C_FIELD(lbl_80350B24, s32 *, 8) & 2) && ((u32) (var_r3 + 0x232F0000) == 2U)) {
        var_r3 = 0xDCD10003;
    }
    switch (var_r3) {                               /* irregular */
    case 0xDCD10000:
        M2C_FIELD(lbl_80350B24, s32 *, 0) = 1;
        temp_r12 = M2C_FIELD(lbl_80350B24, M2C_UNK (**)(), 0x28);
        if (temp_r12 != NULL) {
            temp_r12();
        }
        break;
    case 0xDCD10001:
        M2C_FIELD(lbl_80350B24, s32 *, 0) = 1;
        temp_r12_2 = M2C_FIELD(lbl_80350B24, M2C_UNK (**)(), 0x2C);
        if (temp_r12_2 != NULL) {
            temp_r12_2();
        }
        break;
    case 0xDCD10002:
        if ((s32) lbl_80350B10 != 0) {
            if ((void *) lbl_80350B24 == (void *) lbl_80350B14) {
                fn_800D6D90(0xCDD10003);
                do {

                } while (fn_800D6D58() != 0U);
                lbl_80350B14 = NULL;
                lbl_80350B10 = 0;
                temp_r12_3 = M2C_FIELD(lbl_80350B24, M2C_UNK (**)(), 0x2C);
                if (temp_r12_3 != NULL) {
                    temp_r12_3();
                }
            } else {
                fn_800D6D90(0xCDD10001);
                do {

                } while (fn_800D6D58() != 0U);
                __DSP_exec_task(lbl_80350B24, lbl_80350B14);
                M2C_FIELD(lbl_80350B24, s32 *, 0) = 2;
                lbl_80350B24 = lbl_80350B14;
                lbl_80350B10 = 0;
                lbl_80350B14 = NULL;
            }
        } else if ((void *) M2C_FIELD(lbl_80350B24, void **, 0x38) == NULL) {
            if ((void *) lbl_80350B24 == (void *) lbl_80350B20) {
                fn_800D6D90(0xCDD10003);
                do {

                } while (fn_800D6D58() != 0U);
                temp_r12_4 = M2C_FIELD(lbl_80350B24, M2C_UNK (**)(), 0x2C);
                if (temp_r12_4 != NULL) {
                    temp_r12_4();
                }
            } else {
                fn_800D6D90(0xCDD10001);
                do {

                } while (fn_800D6D58() != 0U);
                __DSP_exec_task(lbl_80350B24, lbl_80350B20);
                M2C_FIELD(lbl_80350B24, s32 *, 0) = 2;
                lbl_80350B24 = lbl_80350B20;
            }
        } else {
            fn_800D6D90(0xCDD10001);
            do {

            } while (fn_800D6D58() != 0U);
            __DSP_exec_task(lbl_80350B24, M2C_FIELD(lbl_80350B24, void **, 0x38));
            M2C_FIELD(lbl_80350B24, s32 *, 0) = 2;
            lbl_80350B24 = M2C_FIELD(lbl_80350B24, void **, 0x38);
        }
        break;
    case 0xDCD10003:
        if ((s32) lbl_80350B10 != 0) {
            temp_r12_5 = M2C_FIELD(lbl_80350B24, M2C_UNK (**)(void *), 0x30);
            if (temp_r12_5 != NULL) {
                temp_r12_5(lbl_80350B24);
            }
            fn_800D6D90(0xCDD10001);
            do {

            } while (fn_800D6D58() != 0U);
            __DSP_exec_task(NULL, lbl_80350B14);
            __DSP_remove_task(lbl_80350B24);
            lbl_80350B24 = lbl_80350B14;
            lbl_80350B10 = 0;
            lbl_80350B14 = NULL;
        } else if ((void *) M2C_FIELD(lbl_80350B24, void **, 0x38) == NULL) {
            if ((void *) lbl_80350B24 == (void *) lbl_80350B20) {
                temp_r12_6 = M2C_FIELD(lbl_80350B24, M2C_UNK (**)(void *), 0x30);
                if (temp_r12_6 != NULL) {
                    temp_r12_6(lbl_80350B24);
                }
                fn_800D6D90(0xCDD10002);
                do {

                } while (fn_800D6D58() != 0U);
                M2C_FIELD(lbl_80350B24, s32 *, 0) = 3;
                __DSP_remove_task(lbl_80350B24);
            } else {
                temp_r12_7 = M2C_FIELD(lbl_80350B24, M2C_UNK (**)(void *), 0x30);
                if (temp_r12_7 != NULL) {
                    temp_r12_7(lbl_80350B24);
                }
                fn_800D6D90(0xCDD10001);
                do {

                } while (fn_800D6D58() != 0U);
                M2C_FIELD(lbl_80350B24, s32 *, 0) = 3;
                __DSP_exec_task(NULL, lbl_80350B20);
                lbl_80350B24 = lbl_80350B20;
                __DSP_remove_task(lbl_80350B1C);
            }
        } else {
            temp_r12_8 = M2C_FIELD(lbl_80350B24, M2C_UNK (**)(void *), 0x30);
            if (temp_r12_8 != NULL) {
                temp_r12_8(lbl_80350B24);
            }
            fn_800D6D90(0xCDD10001);
            do {

            } while (fn_800D6D58() != 0U);
            M2C_FIELD(lbl_80350B24, s32 *, 0) = 3;
            __DSP_exec_task(NULL, M2C_FIELD(lbl_80350B24, void **, 0x38));
            lbl_80350B24 = M2C_FIELD(lbl_80350B24, void **, 0x38);
            __DSP_remove_task(M2C_FIELD(lbl_80350B24, void **, 0x3C));
        }
        break;
    case 0xDCD10004:
        temp_r12_9 = M2C_FIELD(lbl_80350B24, M2C_UNK (**)(void *), 0x34);
        if (temp_r12_9 != NULL) {
            temp_r12_9(lbl_80350B24);
        }
        break;
    }
    OSClearContext((long *)(&sp10), (unsigned short)(0));
    OSSetCurrentContext(arg1);
}

void __DSP_exec_task(void *arg0, void *arg1) {
    if (arg0 != NULL) {
        fn_800D6D90(M2C_FIELD(arg0, s32 *, 0x18));
        do {

        } while (fn_800D6D58() != 0U);
        fn_800D6D90(M2C_FIELD(arg0, s32 *, 0x1C));
        do {

        } while (fn_800D6D58() != 0U);
        fn_800D6D90(M2C_FIELD(arg0, s32 *, 0x20));
        do {

        } while (fn_800D6D58() != 0U);
    } else {
        fn_800D6D90(0);
        do {

        } while (fn_800D6D58() != 0U);
        fn_800D6D90(0);
        do {

        } while (fn_800D6D58() != 0U);
        fn_800D6D90(0);
        do {

        } while (fn_800D6D58() != 0U);
    }
    fn_800D6D90(M2C_FIELD(arg1, s32 *, 0xC));
    do {

    } while (fn_800D6D58() != 0U);
    fn_800D6D90(M2C_FIELD(arg1, s32 *, 0x10));
    do {

    } while (fn_800D6D58() != 0U);
    fn_800D6D90(M2C_FIELD(arg1, s32 *, 0x14));
    do {

    } while (fn_800D6D58() != 0U);
    if ((u32) M2C_FIELD(arg1, u32 *, 0) == 0U) {
        fn_800D6D90((s32) M2C_FIELD(arg1, u16 *, 0x24));
        do {

        } while (fn_800D6D58() != 0U);
        fn_800D6D90(0);
        do {

        } while (fn_800D6D58() != 0U);
        fn_800D6D90(0);
        do {

        } while (fn_800D6D58() != 0U);
        fn_800D6D90(0);
        do {

        } while (fn_800D6D58() != 0U);
        return;
    }
    fn_800D6D90((s32) M2C_FIELD(arg1, u16 *, 0x26));
    do {

    } while (fn_800D6D58() != 0U);
    fn_800D6D90(M2C_FIELD(arg1, s32 *, 0x18));
    do {

    } while (fn_800D6D58() != 0U);
    fn_800D6D90(M2C_FIELD(arg1, s32 *, 0x1C));
    do {

    } while (fn_800D6D58() != 0U);
    fn_800D6D90(M2C_FIELD(arg1, s32 *, 0x20));
    do {

    } while (fn_800D6D58() != 0U);
}

void __DSP_boot_task(void *arg0) {
    s32 spC;

    do {

    } while (fn_800D6D68() == 0U);
    spC = fn_800D6D78();
    fn_800D6D90((void *)0x80F3A001);
    do {

    } while (fn_800D6D58() != 0U);
    fn_800D6D90(M2C_FIELD(arg0, void **, 0xC));
    do {

    } while (fn_800D6D58() != 0U);
    fn_800D6D90((void *)0x80F3C002);
    do {

    } while (fn_800D6D58() != 0U);
    fn_800D6D90((void *) (u16) M2C_FIELD(arg0, s32 *, 0x14));
    do {

    } while (fn_800D6D58() != 0U);
    fn_800D6D90((void *)0x80F3A002);
    do {

    } while (fn_800D6D58() != 0U);
    fn_800D6D90(M2C_FIELD(arg0, void **, 0x10));
    do {

    } while (fn_800D6D58() != 0U);
    fn_800D6D90((void *)0x80F3B002);
    do {

    } while (fn_800D6D58() != 0U);
    fn_800D6D90(NULL);
    do {

    } while (fn_800D6D58() != 0U);
    fn_800D6D90((void *)0x80F3D001);
    do {

    } while (fn_800D6D58() != 0U);
    fn_800D6D90((void *) M2C_FIELD(arg0, u16 *, 0x24));
    do {

    } while (fn_800D6D58() != 0U);
    fn_800D6ED8(&lbl_802A76B8 + 0x20, M2C_FIELD(arg0, void **, 0xC));
    fn_800D6ED8(&lbl_802A76B8, arg0);
    fn_800D6ED8(&lbl_802A76B8 + 0x50, (void *) M2C_FIELD(arg0, s32 *, 0x14));
    fn_800D6ED8(&lbl_802A76B8 + 0x80, M2C_FIELD(arg0, void **, 0x10));
    fn_800D6ED8(&lbl_802A76B8 + 0xB0, M2C_FIELD(arg0, void **, 0x1C));
    fn_800D6ED8(&lbl_802A76B8 + 0xE0, (void *) M2C_FIELD(arg0, u16 *, 0x24));
}

void __DSP_insert_task(void *arg0) {
    void *temp_r4;
    void *var_r5;

    if ((void *) lbl_80350B20 == NULL) {
        lbl_80350B24 = arg0;
        lbl_80350B1C = arg0;
        lbl_80350B20 = arg0;
        M2C_FIELD(arg0, void **, 0x3C) = NULL;
        M2C_FIELD(arg0, void **, 0x38) = NULL;
        return;
    }
    var_r5 = lbl_80350B20;
loop_8:
    if (var_r5 != NULL) {
        if ((u32) M2C_FIELD(arg0, u32 *, 4) < (u32) M2C_FIELD(var_r5, u32 *, 4)) {
            M2C_FIELD(arg0, void **, 0x3C) = (void *) M2C_FIELD(var_r5, void **, 0x3C);
            M2C_FIELD(var_r5, void **, 0x3C) = arg0;
            M2C_FIELD(arg0, void **, 0x38) = var_r5;
            temp_r4 = M2C_FIELD(arg0, void **, 0x3C);
            if (temp_r4 == NULL) {
                lbl_80350B20 = arg0;
            } else {
                M2C_FIELD(temp_r4, void **, 0x38) = arg0;
            }
        } else {
            var_r5 = M2C_FIELD(var_r5, void **, 0x38);
            goto loop_8;
        }
    }
    if (var_r5 == NULL) {
        M2C_FIELD(lbl_80350B1C, void **, 0x38) = arg0;
        M2C_FIELD(arg0, void **, 0x38) = NULL;
        M2C_FIELD(arg0, void **, 0x3C) = (void *) lbl_80350B1C;
        lbl_80350B1C = arg0;
    }
}

void __DSP_remove_task(void *arg0) {
    void *temp_r0;

    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 3;
    if ((void *) lbl_80350B20 == arg0) {
        temp_r0 = M2C_FIELD(arg0, void **, 0x38);
        if (temp_r0 != NULL) {
            lbl_80350B20 = temp_r0;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), void **, 0x3C) = NULL;
            return;
        }
        lbl_80350B24 = NULL;
        lbl_80350B1C = NULL;
        lbl_80350B20 = NULL;
        return;
    }
    if ((void *) lbl_80350B1C == arg0) {
        lbl_80350B1C = M2C_FIELD(arg0, void **, 0x3C);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), void **, 0x38) = NULL;
        lbl_80350B24 = lbl_80350B20;
        return;
    }
    lbl_80350B24 = M2C_FIELD(arg0, void **, 0x38);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), void **, 0x38) = (void *) M2C_FIELD(arg0, void **, 0x38);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), void **, 0x3C) = (void *) M2C_FIELD(arg0, void **, 0x3C);
}

void fn_800D77AC(void) {

}

void fn_800D77B0(s32 arg0) {
    s32 temp_r4;

    temp_r4 = arg0 * 0x110;
    OSWakeupThread(&lbl_8031C9E0 + temp_r4 + 0x8C, temp_r4);
}

#pragma push
#pragma peephole off
void __CARDExtHandler(s32 arg0) {
    M2C_UNK (*temp_r0)(s32, M2C_UNK);
    M2C_UNK (*temp_r12)(s32, M2C_UNK);
    void *temp_r30;

    temp_r30 = &lbl_8031C9E0 + (arg0 * 0x110);
    if ((s32) M2C_FIELD(temp_r30, s32 *, 0) != 0) {
        EXISetExiCallback(arg0, 0);
        M2C_FIELD(temp_r30, s32 *, 0) = 0;
        /* draft: did not compile: OSCancelAlarm(temp_r30 + 0xE0); */
        temp_r0 = M2C_FIELD(temp_r30, M2C_UNK (**)(s32, M2C_UNK), 0xCC);
        if (temp_r0 != NULL) {
            temp_r0(arg0, -3);
            M2C_FIELD(temp_r30, M2C_UNK (**)(s32, M2C_UNK), 0xCC) = NULL;
        }
        if ((s32) M2C_FIELD(temp_r30, s32 *, 4) != -1) {
            M2C_FIELD(temp_r30, s32 *, 4) = -3;
        }
        temp_r12 = M2C_FIELD(temp_r30, M2C_UNK (**)(s32, M2C_UNK), 0xC4);
        if ((temp_r12 != NULL) && ((s32) (u16)M2C_FIELD(temp_r30, s32 *, 0x24) >= 7)) {
            M2C_FIELD(temp_r30, M2C_UNK (**)(s32, M2C_UNK), 0xC4) = NULL;
            temp_r12(arg0, -3);
        }
    }
}
#pragma pop

void __CARDExiHandler(s32 arg0) {
    u8 sp10;
    M2C_UNK (*temp_r0_2)(s32, s32);
    s32 temp_r0;
    s32 temp_r4;
    s32 var_r0;
    s32 var_r29;
    void *temp_r30;

    temp_r4 = arg0 * 0x110;
    temp_r30 = &lbl_8031C9E0 + temp_r4;
    /* draft: did not compile: OSCancelAlarm(temp_r30 + 0xE0, temp_r4); */
    if ((s32) M2C_FIELD(temp_r30, s32 *, 0) != 0) {
        u8 cmpv = EXILock(arg0, 0, 0);
        if (cmpv == 0) {
            var_r29 = -0x80;
            goto block_13;
        }
        /* draft: did not compile: var_r29 = fn_800D7BC0(arg0, &sp10); */
        if (var_r29 >= 0) {
            var_r29 = __CARDClearStatus(arg0);
            if (var_r29 >= 0) {
                if (sp10 & 0x18) {
                    var_r0 = -5;
                } else {
                    var_r0 = 0;
                }
                var_r29 = var_r0;
                if (var_r29 == -5) {
                    temp_r0 = M2C_FIELD(temp_r30, s32 *, 0xA8) - 1;
                    M2C_FIELD(temp_r30, s32 *, 0xA8) = temp_r0;
                    if (temp_r0 > 0) {
                        var_r29 = fn_800D7E00(arg0);
                        if (var_r29 >= 0) {
                            return;
                        }
                        goto block_13;
                    }
                }
                goto block_12;
            }
        }
block_12:
        EXIUnlock(arg0);
block_13:
        temp_r0_2 = M2C_FIELD(temp_r30, M2C_UNK (**)(s32, s32), 0xCC);
        if (temp_r0_2 != NULL) {
            M2C_FIELD(temp_r30, M2C_UNK (**)(s32, s32), 0xCC) = NULL;
            temp_r0_2(arg0, var_r29);
        }
    }
}

void __CARDTxHandler(s32 arg0) {
    M2C_UNK (*temp_r0)(s32, M2C_UNK);
    M2C_UNK var_r4;
    s32 temp_r31;
    u8 temp_r4;
    s32 var_r30;
    void *temp_r29;

    temp_r4 = arg0 * 0x110;
    temp_r29 = &lbl_8031C9E0 + temp_r4;
    temp_r31 = EXIDeselect(arg0, temp_r4) == 0;
    EXIUnlock(arg0);
    temp_r0 = M2C_FIELD(temp_r29, M2C_UNK (**)(s32, M2C_UNK), 0xC8);
    if (temp_r0 != NULL) {
        var_r30 = 0;
        M2C_FIELD(temp_r29, M2C_UNK (**)(s32, M2C_UNK), 0xC8) = NULL;
        if ((temp_r31 == 0) && (EXIProbe(arg0) != 0)) {
            var_r30 = 1;
        }
        if (var_r30 != 0) {
            var_r4 = 0;
        } else {
            var_r4 = -3;
        }
        temp_r0(arg0, var_r4);
    }
}

void __CARDUnlockedHandler(s32 arg0) {
    M2C_UNK (*temp_r0)(s32, M2C_UNK);
    M2C_UNK var_r4;
    void *temp_r3;

    temp_r3 = &lbl_8031C9E0 + (arg0 * 0x110);
    temp_r0 = M2C_FIELD((s32)temp_r3, M2C_UNK (**)(s32, M2C_UNK), 0xDC);
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r3, M2C_UNK (**)(s32, M2C_UNK), 0xDC) = NULL;
        if (EXIProbe(arg0) != 0) {
            var_r4 = 1;
        } else {
            var_r4 = -3;
        }
        temp_r0(arg0, var_r4);
    }
}

s32 __CARDEnableInterrupt(s32 arg0, s32 arg1) {
    s32 sp10;
    s32 temp_r31;
    s32 temp_r31_2;
    s32 var_r0;

    switch ((u16)EXISelect(0, 4)) {

    case 0:
            return -3;

        break;

    }
    if (arg1 != 0) {
        var_r0 = 0x81010000;
    } else {
        var_r0 = 0x81000000;
    }
    sp10 = var_r0;
    temp_r31 = EXIImm(arg0, &sp10, 2, 1, 0) == 0;
    temp_r31_2 = temp_r31 | (EXISync(arg0) == 0);
    if ((temp_r31_2 | (EXIDeselect((long)(arg0), (long)(0)) == 0)) != 0) {
        return -3;
    }
    return 0;
}

s32 fn_800D7BC0(s32 arg0, s32 *arg1) {
    s32 sp10;
    s32 temp_r31;
    s32 temp_r31_2;
    s32 temp_r31_3;
    s32 temp_r31_4;

    if (EXISelect(0, 4) == 0) {
        return -3;
    }
    sp10 = 0x83000000;
    temp_r31 = EXIImm(arg0, &sp10, 2, 1, 0) == 0;
    temp_r31_2 = temp_r31 | (EXISync(arg0) == 0);
    temp_r31_3 = temp_r31_2 | (EXIImm(arg0, arg1, 1, 0, 0) == 0);
    temp_r31_4 = temp_r31_3 | (EXISync(arg0) == 0);
    if ((temp_r31_4 | (EXIDeselect((long)(arg0), (long)(0)) == 0)) != 0) {
        return -3;
    }
    return 0;
}

s32 __CARDClearStatus(s32 arg0) {
    s32 spC;
    s32 temp_r31;
    s32 temp_r31_2;

    if (EXISelect(0, 4) == 0) {
        return -3;
    }
    spC = 0x89000000;
    temp_r31 = EXIImm(arg0, &spC, 1, 1, 0) == 0;
    temp_r31_2 = temp_r31 | (EXISync(arg0) == 0);
    if ((temp_r31_2 | (EXIDeselect((long)(arg0), (long)(0)) == 0)) != 0) {
        return -3;
    }
    return 0;
}

void TimeoutHandler(u32 arg0) {
    M2C_UNK (*temp_r0)(M2C_UNK, M2C_UNK);
    M2C_UNK *var_r30;
    M2C_UNK var_r31;

    var_r31 = 0;
    var_r30 = &lbl_8031C9E0;
    if (0 /* draft: did not compile */) {
        var_r30 = &lbl_8031C9E0 + 0x110;
        var_r31 = 1;
        if (0 /* draft: did not compile */) {
            var_r31 = 2;
        }
    }
    if ((s32) M2C_FIELD(var_r30, s32 *, 0) != 0) {
        EXISetExiCallback(var_r31, 0);
        temp_r0 = M2C_FIELD(var_r30, M2C_UNK (**)(M2C_UNK, M2C_UNK), 0xCC);
        if (temp_r0 != NULL) {
            M2C_FIELD(var_r30, M2C_UNK (**)(M2C_UNK, M2C_UNK), 0xCC) = NULL;
            temp_r0(var_r31, -5);
        }
    }
}

s32 fn_800D7E00(s32 arg0) { return 0; } /* draft: stub */

#pragma push
#pragma dont_inline on
void UnlockedCallback(s32 arg0, s32 arg1) {
    M2C_UNK (*temp_r0_2)(s32);
    M2C_UNK (*temp_r12)(s32);
    s32 var_r4;
    u8 temp_r0;
    void *temp_r30;

    var_r4 = arg1;
    temp_r30 = &lbl_8031C9E0 + (arg0 * 0x110);
    if (var_r4 >= 0) {
        M2C_FIELD(temp_r30, void (**)(s32, s32), 0xDC) = UnlockedCallback;
        if (EXILock(arg0, 0, (u16)__CARDUnlockedHandler) == 0) {
            var_r4 = 0;
        } else {
            M2C_FIELD(temp_r30, void (**)(s32, s32), 0xDC) = NULL;
            var_r4 = fn_800D7E00(arg0);
        }
    }
    if ((var_r4 < 0) && (temp_r0 = M2C_FIELD(temp_r30, u8 *, 0x94), (((s32) temp_r0 == 0xF3) == 0))) {
        if ((s32) temp_r0 < 0xF3) {
            if ((s32) temp_r0 != 0x52) {
                if ((s32) temp_r0 >= 0x52) {
                    if ((s32) temp_r0 < 0xF1) {
                        return;
                    }
                    goto block_15;
                }
            } else {
                temp_r0_2 = M2C_FIELD(temp_r30, M2C_UNK (**)(s32), 0xC8);
                if (temp_r0_2 != NULL) {
                    M2C_FIELD(temp_r30, M2C_UNK (**)(s32), 0xC8) = NULL;
                    temp_r0_2(arg0);
                }
            }
        } else if (temp_r0 < 0xF5) {
block_15:
            temp_r12 = M2C_FIELD(temp_r30, M2C_UNK (**)(s32), 0xCC);
            if (temp_r12 != NULL) {
                M2C_FIELD(temp_r30, M2C_UNK (**)(s32), 0xCC) = NULL;
                temp_r12(arg0);
            }
        }
    }
}
#pragma pop

s32 fn_800D813C(s32 arg0, u32 arg1, u32 arg2) { return 0; } /* draft: stub */

s32 __CARDReadSegment(s32 arg0) { return 0; } /* draft: stub */

s32 fn_800D8424(s32 arg0, s32 arg1) { return 0; } /* draft: stub */

#pragma push
#pragma dont_inline on
s32 fn_800D8540(s32 arg0, u32 arg1) {
    s8 var_r30;
    void *temp_r31;

    M2C_FIELD(temp_r31, s8 *, 0x95) = (s8) ((arg1 >> 0x11U) & 0x7F);
    temp_r31 = &lbl_8031C9E0 + (arg0 * 0x110);
    M2C_FIELD(temp_r31, u8 *, 0x96) = (u8) (arg1 >> 9U);
    M2C_FIELD(temp_r31, s8 *, 0x94) = 0xF1;
    M2C_FIELD(temp_r31, s32 *, 0xA0) = 3;
    M2C_FIELD(temp_r31, s32 *, 0xA4) = -1;
    M2C_FIELD(temp_r31, s32 *, 0xA8) = 3;
    var_r30 = fn_800D813C(arg0, 0, 3);
    if (var_r30 == -1) {
        var_r30 = 0;
    } else if (var_r30 >= 0) {
        if (0 /* draft: did not compile */) {
            M2C_FIELD(temp_r31, s32 *, 0xCC) = 0;
            var_r30 = -3;
        } else {
            var_r30 = 0;
        }
        EXIDeselect((long)(arg0), (long)(0));
        EXIUnlock(arg0);
    }
    return var_r30;
}
#pragma pop

void CARDInit(void) {
    M2C_UNK *var_r30;
    s32 var_r29;

    var_r30 = &lbl_8031C9E0;
    if (((u32) M2C_FIELD(&lbl_8031C9E0, u32 *, 0x10C) == 0U) || ((u32) M2C_FIELD(&lbl_8031C9E0, u32 *, 0x21C) == 0U)) {
        lbl_80350B28 = fn_800C6344();
        OSRegisterVersion(lbl_8034FFF0);
        DSPInit();
        OSInitAlarm();
        var_r29 = 0;
        do {
            M2C_FIELD(var_r30, s32 *, 4) = -3;
            OSInitThreadQueue(var_r30 + 0x8C);
            OSCreateAlarm(var_r30 + 0xE0);
            var_r29 += 1;
            var_r30 += 0x110;
        } while (var_r29 < 2);
        /* draft: did not compile: __CARDSetDiskID(0x80000000); */
        OSRegisterResetFunction(&lbl_802A7840);
    }
}

u16 fn_800D86CC(void) {
    return lbl_80350B28;
}

void __CARDSetDiskID(void *arg0) {
    void *var_r0;
    void *var_r3;

    var_r3 = arg0;
    if (var_r3 != NULL) {
        var_r0 = var_r3;
    } else {
        var_r0 = &lbl_8031C9E0 + 0x220;
    }
    M2C_FIELD(&lbl_8031C9E0, void **, 0x10C) = var_r0;
    var_r3 = var_r3 != NULL ? var_r3 : &lbl_8031C9E0 + 0x220;
    M2C_FIELD(&lbl_8031C9E0, void **, 0x21C) = var_r3;
}

s32 __CARDGetControlBlock(s32 arg0, void **arg1) {
    s32 var_r31;
    void *temp_r30;

    temp_r30 = &lbl_8031C9E0 + (arg0 * 0x110);
    if ((arg0 < 0) || (arg0 >= 2) || ((u32) M2C_FIELD(temp_r30, u32 *, 0x10C) == 0U)) {
        return -0x80;
    }
    OSDisableInterrupts();
    if ((s32) M2C_FIELD(temp_r30, s32 *, 0) == 0) {
        var_r31 = -3;
    } else if ((s32) M2C_FIELD(temp_r30, s32 *, 4) == -1) {
        var_r31 = -1;
    } else {
        M2C_FIELD(temp_r30, s32 *, 4) = -1;
        var_r31 = 0;
        M2C_FIELD(temp_r30, s32 *, 0xD0) = 0;
        *arg1 = temp_r30;
    }
    OSRestoreInterrupts((long)(0));
    return var_r31;
}

s32 __CARDPutControlBlock(void *arg0, s32 arg1) {
    OSDisableInterrupts();
    if ((s32) (u16)M2C_FIELD(arg0, s32 *, 0) != 0) {
        M2C_FIELD(arg0, s32 *, 4) = arg1;
    } else if ((s32) M2C_FIELD(arg0, s32 *, 4) == -1) {
        M2C_FIELD(arg0, s32 *, 4) = arg1;
    }
    OSRestoreInterrupts((long)(0));
    return arg1;
}

s32 CARDGetResultCode(s32 arg0) {
    if ((arg0 < 0) || (arg0 >= 2)) {
        return -0x80;
    }
    return M2C_FIELD((&lbl_8031C9E0 + (arg0 * 0x110)), s32 *, 4);
}

s32 CARDFreeBlocks(s32 *arg1, s32 *arg2) {
    void *sp18;
    s32 temp_r3;
    u16 var_r5;
    void *temp_r30;
    void *var_r3;

    /* draft: did not compile: temp_r3 = __CARDGetControlBlock(&sp18); */
    if (temp_r3 < 0) {
        return temp_r3;
    }
    temp_r30 = fn_800DA00C(sp18);
    var_r3 = fn_800DA410(sp18);
    if ((temp_r30 == NULL) || (var_r3 == NULL)) {
        OSDisableInterrupts();
        if ((s32) M2C_FIELD(sp18, s32 *, 0) != 0) {
            M2C_FIELD(sp18, s32 *, 4) = -6;
        } else if ((s32) M2C_FIELD(sp18, s32 *, 4) == -1) {
            M2C_FIELD(sp18, s32 *, 4) = -6;
        }
        OSRestoreInterrupts((long)(0));
        return -6;
    }
    if (arg1 != NULL) {
        *arg1 = M2C_FIELD(sp18, s32 *, 0xC) * M2C_FIELD(temp_r30, u16 *, 6);
    }
    if (arg2 != NULL) {
        *arg2 = 0;
        var_r5 = 0;
loop_16:
        if (var_r5 < 0x7FU) {
            if ((u8) M2C_FIELD(var_r3, u8 *, 8) == 0xFF) {
                *arg2 += 1;
            }
            /* draft: did not compile: var_r3 += 0x40; */
            var_r5 += 1;
            goto loop_16;
        }
    }
    OSDisableInterrupts();
    if ((s32) M2C_FIELD(sp18, s32 *, 0) != 0) {
        M2C_FIELD(sp18, s32 *, 4) = 0;
    } else if ((s32) M2C_FIELD(sp18, s32 *, 4) == -1) {
        M2C_FIELD(sp18, s32 *, 4) = 0;
    }
    OSRestoreInterrupts((long)(0));
    return 0;
}

s32 fn_800D89A8(s32 *arg1) {
    void *sp10;
    s8 temp_r3;

    /* draft: did not compile: temp_r3 = __CARDGetControlBlock(&sp10); */
    if (temp_r3 < 0) {
        return temp_r3;
    }
    *arg1 = M2C_FIELD(sp10, s32 *, 0xC);
    OSDisableInterrupts(sp10);
    if ((s32) M2C_FIELD(sp10, s32 *, 0) != 0) {
        M2C_FIELD(sp10, s32 *, 4) = 0;
    } else if ((s32) M2C_FIELD(sp10, s32 *, 4) == -1) {
        M2C_FIELD(sp10, s32 *, 4) = 0;
    }
    OSRestoreInterrupts((long)(0));
    return 0;
}

s32 fn_800D8A2C(s32 arg0) {
    u8 temp_r29;
    s32 temp_r4;
    void *temp_r31;
    u32 var_r0;

    temp_r4 = arg0;
    temp_r4 *= 0x110;
    temp_r31 = &lbl_8031C9E0 + temp_r4;
    temp_r29 = OSDisableInterrupts(&lbl_8031C9E0, temp_r4);
loop_2:
    if ((arg0 < 0) || (arg0 >= 2)) {
        var_r0 = -0x80;
    } else {
        var_r0 = M2C_FIELD(temp_r31, s32 *, 4);
    }
    if (var_r0 == -1) {
        /* draft: did not compile: OSSleepThread(temp_r31 + 0x8C); */
        goto loop_2;
    }
    OSRestoreInterrupts(temp_r29);
    return var_r0;
}

s32 OnReset_800D8AC4(s32 arg0) {
    if ((arg0 == 0) && ((CARDUnmount(0) == -1) || (CARDUnmount(1) == -1))) {
        return 0;
    }
    return 1;
}

s32 fn_800D8B14(u32 arg0) {
    u32 temp_r8;
    s32 var_r10;
    s32 var_r7_2;
    s32 var_r7_3;
    s32 var_r7_4;
    s32 var_r9;
    u32 temp_r6;
    s32 var_ctr;
    s8 temp_r8_2;
    u32 temp_r8_3;
    u32 var_r8;
    s32 var_r7;

    var_r8 = 0;
    temp_r6 = arg0 >> 0x1FU;
    var_r10 = 1;
    var_ctr = 8;
    var_r7 = 0;
    var_r9 = 0;
    do {
        if (var_r8 > 0xFU) {
            if (var_r8 == 0x1F) {
                var_r7_2 = var_r7 | temp_r6;
            } else {
                var_r7_2 = var_r7 | ((u32) (arg0 & (1 << var_r8)) >> var_r10);
                var_r10 += 2;
            }
        } else {
            var_r7_2 = var_r7 | ((arg0 & (1 << var_r8)) << ((0x1F - var_r8) - var_r9));
            var_r9 += 1;
        }
        temp_r8 = var_r8 + 1;
        if (temp_r8 > 0xFU) {
            if (temp_r8 == 0x1F) {
                var_r7_3 = var_r7_2 | temp_r6;
            } else {
                var_r7_3 = var_r7_2 | ((u32) (arg0 & (1 << temp_r8)) >> var_r10);
                var_r10 += 2;
            }
        } else {
            var_r7_3 = var_r7_2 | ((arg0 & (1 << temp_r8)) << ((0x1F - temp_r8) - var_r9));
            var_r9 += 1;
        }
        temp_r8_2 = temp_r8 + 1;
        if (temp_r8_2 > 0xFU) {
            if (temp_r8_2 == 0x1F) {
                var_r7_4 = var_r7_3 | temp_r6;
            } else {
                var_r7_4 = var_r7_3 | ((u32) (arg0 & (1 << temp_r8_2)) >> var_r10);
                var_r10 += 2;
            }
        } else {
            var_r7_4 = var_r7_3 | ((arg0 & (1 << temp_r8_2)) << ((0x1F - temp_r8_2) - var_r9));
            var_r9 += 1;
        }
        temp_r8_3 = temp_r8_2 + 1;
        if (temp_r8_3 > 0xFU) {
            if (temp_r8_3 == 0x1F) {
                var_r7 = var_r7_4 | temp_r6;
            } else {
                var_r7 = var_r7_4 | ((u32) (arg0 & (1 << temp_r8_3)) >> var_r10);
                var_r10 += 2;
            }
        } else {
            var_r7 = var_r7_4 | ((arg0 & (1 << temp_r8_3)) << ((0x1F - temp_r8_3) - var_r9));
            var_r9 += 1;
        }
        var_r8 = temp_r8_3 + 1;
        var_ctr -= 1;
    } while (var_ctr != 0);
    return var_r7;
}
