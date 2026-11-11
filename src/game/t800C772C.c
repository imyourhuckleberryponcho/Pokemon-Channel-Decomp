/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK ICFlashInvalidate(M2C_UNK);
M2C_UNK OSDisableInterrupts();
M2C_UNK Reset_800C76BC(s32);
M2C_UNK LCDisable();
M2C_UNK OSCancelThread();
M2C_UNK __OSReboot(s32, s32);
M2C_UNK __OSStopAudioSystem();
s32 __PADDisableRecalibration(s32);
extern void *ResetFunctionQueue_803508C8;
u64 __OSGetSystemTime();
M2C_UNK __OSMaskInterrupts(M2C_UNK);
extern s32 lbl_803508D4;
extern s32 lbl_803508D8;
extern s32 lbl_803508E8;
extern u32 lbl_803508EC;
M2C_UNK OSRestoreInterrupts(s32);
u64 __div2i(s32, s32, M2C_UNK);
extern M2C_UNK __OSStartTime;
extern s32 lbl_803508E0;
extern u32 lbl_803508E4;
extern M2C_UNK Scb_8031BA00;
s32 EXIDeselect(M2C_UNK);
s32 EXIImm(M2C_UNK, s32 *, M2C_UNK, M2C_UNK, M2C_UNK);
s32 EXISelect(M2C_UNK, M2C_UNK, M2C_UNK);
s32 EXISync(M2C_UNK);
M2C_UNK EXIUnlock(M2C_UNK);
s32 EXIImmEx();
M2C_UNK DCInvalidateRange(M2C_UNK *, M2C_UNK);
s32 EXIDma(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK);
s32 EXILock();
M2C_UNK OSSleepThread(void *);
M2C_UNK OSWakeupThread(void *);
M2C_UNK DCFlushRangeNoSync(M2C_UNK, M2C_UNK);
M2C_UNK ICInvalidateRange(M2C_UNK, M2C_UNK);
extern M2C_UNK __OSSystemCallVectorEnd;
extern M2C_UNK __OSSystemCallVectorStart;
M2C_UNK OSClearContext(void *);
M2C_UNK OSClearStack(M2C_UNK);
M2C_UNK OSSetCurrentContext(void *);
extern s32 Reschedule_803508F8;
extern s32 RunQueueBits_803508F0;
extern s32 RunQueueHint_803508F4;
extern M2C_UNK RunQueue_8031BA58;
extern M2C_UNK _stack_addr;
extern s32 _stack_end;
extern s32 lbl_803508D0;

void __OSDoHotReset(s32 arg0);
void OSResetSystem(s32 arg0, s32 arg1, s32 arg2);
u32 OSGetResetCode(void);
void __OSResetSWInterruptHandler(void);
s32 fn_800C7B20(void);
void fn_800C7DB8(void);
void WriteSramCallback(void);
s32 WriteSram(s32 arg0, s32 arg1, s32 arg2);
void __OSInitSram(void);
M2C_UNK *__OSLockSram(void);
void *__OSLockSramEx(void);
s32 fn_800C813C(s32 arg0, u32 arg1);
void __OSUnlockSram(void);
void __OSUnlockSramEx(void);
s32 __OSSyncSram(void);
s32 OSGetSoundMode(void);
s32 OSGetProgressiveMode(void);
void OSSetProgressiveMode(s32 arg0);
u16 OSGetWirelessID(s32 arg0);
void OSSetWirelessID(s32 arg0, u16 arg1);
void fn_800C8760(s32 *arg0, s32 arg1);
s32 fn_800C87B8(s32 *arg0);
s32 fn_800C8828(s32 *arg0);
void SystemCallVector(void);
void __OSInitSystemCall(void);
void fn_800C890C(void);
void __OSThreadInit(void);
void OSInitThreadQueue(void *arg0);
s32 fn_800C8A78(void);
s32 OSDisableScheduler(void);
s32 OSEnableScheduler(void);
void UnsetRun(void *arg0);

void __OSDoHotReset(s32 arg0) {
    OSDisableInterrupts();
    M2C_FIELD((void *)0xCC002000, s16 *, 2) = 0;
    ICFlashInvalidate(0xCC002000);
    Reset_800C76BC(arg0 * 8);
}

void OSResetSystem(s32 arg0, s32 arg1, s32 arg2) {
    s32 saved_reg_r31;
    s32 var_r0;
    s32 var_r27_2;
    s32 var_r28;
    s32 var_r31;
    u16 temp_r0_3;
    u16 temp_r0_4;
    u32 temp_r0;
    u32 temp_r0_2;
    void *temp_r27;
    void *temp_r27_2;
    void *temp_r3;
    void *var_r27;
    void *var_r28_2;
    void *var_r3;
    void *var_r3_2;

    var_r31 = saved_reg_r31;
    OSDisableScheduler();
    __OSStopAudioSystem();
    if (arg0 == 2) {
        var_r31 = __PADDisableRecalibration(1);
    }
    do {
        var_r27 = ResetFunctionQueue_803508C8;
        var_r28 = 0;
loop_8:
        if ((var_r27 != NULL) && (var_r28 == 0)) {
            temp_r0 = CLZ(M2C_FIELD(var_r27, s32 (**)(M2C_UNK), 0)(0));
            var_r27 = M2C_FIELD(var_r27, void **, 8);
            var_r28 |= temp_r0 >> 5U;
            goto loop_8;
        }
        if ((s32) (var_r28 | (__OSSyncSram() == 0)) != 0) {
            var_r0 = 0;
        } else {
            var_r0 = 1;
        }
    } while (var_r0 == 0);
    if ((arg0 == 1) && (arg2 != 0)) {
        temp_r3 = __OSLockSram();
        M2C_FIELD(temp_r3, u8 *, 0x13) = (u8) (M2C_FIELD(temp_r3, u8 *, 0x13) | 0x40);
        __OSUnlockSram();
        do {

        } while (__OSSyncSram() == 0);
    }
    OSDisableInterrupts();
    var_r28_2 = ResetFunctionQueue_803508C8;
    var_r27_2 = 0;
loop_23:
    if ((var_r28_2 != NULL) && (var_r27_2 == 0)) {
        temp_r0_2 = CLZ(M2C_FIELD(var_r28_2, s32 (**)(M2C_UNK), 0)(1));
        var_r28_2 = M2C_FIELD(var_r28_2, void **, 8);
        var_r27_2 |= temp_r0_2 >> 5U;
        goto loop_23;
    }
    __OSSyncSram();
    LCDisable();
    if (arg0 == 1) {
        OSDisableInterrupts();
        M2C_FIELD((void *)0xCC002000, s16 *, 2) = 0;
        ICFlashInvalidate(0xCC002000);
        Reset_800C76BC(arg1 * 8);
    } else if (arg0 == 0) {
        var_r3 = *(void **)0x800000DC;
loop_37:
        if (var_r3 != NULL) {
            temp_r0_3 = M2C_FIELD(var_r3, u16 *, 0x2C8);
            temp_r27 = M2C_FIELD(var_r3, void **, 0x2FC);
            if ((s32) temp_r0_3 != 4) {
                if ((s32) temp_r0_3 < 4) {
                    if ((s32) temp_r0_3 != 1) {

                    } else {
                        goto block_35;
                    }
                }
            } else {
block_35:
                OSCancelThread();
            }
            var_r3 = temp_r27;
            goto loop_37;
        }
        OSEnableScheduler();
        __OSReboot(arg1, arg2);
    }
    /* draft: did not compile: var_r3_2 = *(void *)0x800000DC; */
loop_48:
    if (var_r3_2 != NULL) {
        temp_r0_4 = M2C_FIELD(var_r3_2, u16 *, 0x2C8);
        temp_r27_2 = M2C_FIELD(var_r3_2, void **, 0x2FC);
        if ((s32) temp_r0_4 != 4) {
            if ((s32) temp_r0_4 < 4) {
                if ((s32) temp_r0_4 != 1) {

                } else {
                    goto block_46;
                }
            }
        } else {
block_46:
            OSCancelThread();
        }
        var_r3_2 = temp_r27_2;
        goto loop_48;
    }
    /* draft: did not compile: memset(0x80000040, 0, 0x8C); */
    /* draft: did not compile: memset(0x800000D4, 0, 0x14); */
    /* draft: did not compile: memset(0x800000F4, 0, 4); */
    /* draft: did not compile: memset(0x80003000, 0, 0xC0); */
    /* draft: did not compile: memset(0x800030C8, 0, 0xC); */
    /* draft: did not compile: memset(0x800030E2, 0, 1); */
    __PADDisableRecalibration(var_r31);
}

#pragma push
#pragma peephole off
u32 OSGetResetCode(void) {
    if ((u8) *(u8 *)0x800030E2 != 0) {
        return 0x80000000U;
    }
    return (u32) (M2C_FIELD((void *)0xCC003000, s32 *, 0x24) & 0xFFFFFFF8) >> 3U;
}
#pragma pop

void __OSResetSWInterruptHandler(void) {
    M2C_UNK (*temp_lr)();
    u8 temp_r3;
    u32 temp_r29;
    u64 temp_ret;

    temp_ret = __OSGetSystemTime();
    lbl_803508EC = (u32) temp_ret;
    lbl_803508E8 = temp_ret;
    temp_r29 = (u32) ((*(u32 *)0x800000F8 / 500000) * 0x64) >> 3U;
loop_1:
    if (-(((temp_r3 = ((__OSGetSystemTime() - lbl_803508E8) - !M2C_CARRY) ^ 0x80000000) - temp_r3) - !M2C_CARRY) != 0) {
        if (!(*(s32 *)0xCC003000 & 0x10000)) {
            goto loop_1;
        }
    }
    if (0 /* draft: did not compile */) {
        lbl_803508D4 = 1;
        lbl_803508D8 = 1;
        __OSMaskInterrupts(0x200);
        if (((M2C_UNK (*)()) lbl_803508D0) != NULL) {
            /* draft: did not compile: temp_lr = lbl_803508D0; */
            lbl_803508D0 = NULL;
            temp_lr();
        }
    }
    /* draft: did not compile: *(void *)0xCC003000 = 2; */
}

s32 fn_800C7B20(void) {
    s32 temp_r0;
    s32 temp_r10;
    s32 temp_r30;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 temp_r7;
    s32 temp_r8;
    u8 var_r0;
    s32 var_r10;
    u16 var_r29;
    u8 var_r7;
    u32 temp_r4;
    u8 temp_r6_3;
    u64 temp_r3;
    u64 temp_ret;
    u64 temp_ret_2;

    temp_r30 = OSDisableInterrupts();
    temp_ret = __OSGetSystemTime();
    temp_r3 = temp_ret;
    temp_r4 = (u32) temp_ret;
    if (!(*(s32 *)0xCC003000 & 0x10000)) {
        if ((s32) lbl_803508D4 == 0) {
            var_r7 = 1;
            lbl_803508D4 = 1;
            if (((lbl_803508E4 ^ 0) | (lbl_803508E0 ^ 0)) != 0) {

            } else {
                var_r7 = 0;
            }
            lbl_803508EC = temp_r4;
            var_r29 = var_r7;
            lbl_803508E8 = (s32) temp_r3;
        } else {
            var_r10 = 1;
            if (((lbl_803508E4 ^ 0) | (lbl_803508E0 ^ 0)) == 0) {
                var_r10 = -(((temp_r6 = 0 ^ 0x80000000) - temp_r6) - !M2C_CARRY) != 0 ? var_r10 : 0;
            }
            if (var_r10 != 0) {
                var_r0 = 1;
            } else {
                var_r0 = 0;
            }
            var_r29 = var_r0;
        }
    } else if ((s32) lbl_803508D4 != 0) {
        lbl_803508D4 = 0;
        var_r29 = lbl_803508D8;
        if ((s32) lbl_803508D8 != 0) {
            lbl_803508E4 = temp_r4;
            lbl_803508E0 = (s32) temp_r3;
        } else {
            lbl_803508E4 = 0;
            lbl_803508E0 = 0;
        }
    } else if ((((lbl_803508E4 ^ 0) | (lbl_803508E0 ^ 0)) != 0) && (temp_r6_2 = ((temp_r3 - lbl_803508E0) - !M2C_CARRY) ^ 0x80000000, ((-((temp_r6_2 - temp_r6_2) - !M2C_CARRY) == 0) == 0))) {
        var_r29 = 1;
    } else {
        lbl_803508E4 = 0;
        var_r29 = 0;
        lbl_803508E0 = 0;
    }
    lbl_803508D8 = var_r29;
    temp_r0 = *(u8 *)0x800030E3 & 0x3F;
    if (temp_r0 != 0) {
        temp_r10 = temp_r0 * 0x3C;
        temp_r6_3 = (u32) *(u8 *)0x800000F8 >> 2U;
        temp_r8 = M2C_FIELD(&__OSStartTime, s32 *, 0) + (((temp_r10 >> 0x1F) * temp_r6_3) + MULTU_HI(temp_r10, temp_r6_3) + (temp_r10 * 0)) + M2C_CARRY;
        temp_r7 = temp_r8 ^ 0x80000000;
        if (-((temp_r7 - temp_r7) - !M2C_CARRY) != 0) {
            __div2i((temp_r3 - temp_r8) - !M2C_CARRY, temp_r4 - (M2C_FIELD(&__OSStartTime, s32 *, 4) + (temp_r10 * temp_r6_3)), 0);
            temp_ret_2 = __div2i((long)(0), (long)(2), (long)(0));
            if (((((u32) temp_ret_2 & 1) ^ 0) | ((temp_ret_2 & 0) ^ 0)) == 0) {
                var_r29 = 1;
            } else {
                var_r29 = 0;
            }
        }
    }
    OSRestoreInterrupts(temp_r30);
    return var_r29;
}

void fn_800C7DB8(void) {
    fn_800C7B20();
}

void WriteSramCallback(void) { } /* draft: stub */

s32 WriteSram(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp14;
    u8 temp_r31;
    s32 temp_r31_2;
    s32 temp_r31_3;
    u8 temp_r31_4;

    if (EXILock(0, 1, WriteSramCallback, (u16)WriteSramCallback) == 0) {
        return 0;
    }
    if (EXISelect(0, 1, 3) == 0) {
        EXIUnlock(0);
        return 0;
    }
    sp14 = ((arg1 << 6) + 0x100) | 0xA0000000;
    temp_r31_2 = EXIImm(0, &sp14, 4, 1, 0) == 0;
    temp_r31_3 = temp_r31_2 | (EXISync(0) == 0);
    temp_r31_4 = temp_r31_3 | (EXIImmEx(0, arg0, arg2, 1) == 0);
    temp_r31 = temp_r31_4 | (EXIDeselect(0) == 0);
    EXIUnlock(0);
    return temp_r31 == 0;
}

void __OSInitSram(void) {
    s32 sp8;
    s8 temp_r31;
    s32 temp_r31_2;
    s32 temp_r31_3;
    s32 temp_r31_4;
    s32 temp_r31_5;
    u8 var_r31;

    var_r31 = 0;
    M2C_FIELD(&Scb_8031BA00, s32 *, 0x44) = 0;
    M2C_FIELD(&Scb_8031BA00, s32 *, 0x48) = 0;
    DCInvalidateRange(&Scb_8031BA00, 0x40);
    if (EXILock(0, 1, 0) == 0) {

    } else if (EXISelect(0, 1, 3) == 0) {
        EXIUnlock(0);
    } else {
        sp8 = 0x20000100;
        temp_r31 = EXIImm(0, &sp8, 4, 1, 0) == 0;
        temp_r31_2 = temp_r31 | (EXISync(0) == 0);
        temp_r31_3 = temp_r31_2 | (EXIDma(0, &Scb_8031BA00, 0x40, 0, 0) == 0);
        temp_r31_4 = temp_r31_3 | (EXISync(0) == 0);
        temp_r31_5 = temp_r31_4 | (EXIDeselect(0) == 0);
        EXIUnlock(0);
        var_r31 = temp_r31_5 == 0;
    }
    M2C_FIELD(&Scb_8031BA00, s32 *, 0x4C) = var_r31;
    M2C_FIELD(&Scb_8031BA00, s32 *, 0x40) = 0x40;
}

M2C_UNK *__OSLockSram(void) {
    M2C_UNK *var_r31;
    u8 temp_r3;

    var_r31 = &Scb_8031BA00;
    temp_r3 = OSDisableInterrupts(&Scb_8031BA00);
    if ((s32) M2C_FIELD(&Scb_8031BA00, s32 *, 0x48) != 0) {
        OSRestoreInterrupts((long)(0));
        var_r31 = NULL;
    } else {
        M2C_FIELD(&Scb_8031BA00, s32 *, 0x44) = temp_r3;
        M2C_FIELD(&Scb_8031BA00, s32 *, 0x48) = 1;
    }
    return var_r31;
}

void *__OSLockSramEx(void) {
    u8 temp_r3;

    temp_r3 = OSDisableInterrupts(&Scb_8031BA00);
    if ((s32) M2C_FIELD(&Scb_8031BA00, s32 *, 0x48) != 0) {
        OSRestoreInterrupts((long)(0));
        return NULL;
    }
    M2C_FIELD(&Scb_8031BA00, s32 *, 0x44) = temp_r3;
    M2C_FIELD(&Scb_8031BA00, s32 *, 0x48) = 1;
    return &Scb_8031BA00 + 0x14;
}

s32 fn_800C813C(s32 arg0, u32 arg1) {
    s32 sp10;
    s32 temp_r27;
    s32 temp_r29_2;
    s32 temp_r29_3;
    s32 temp_r29_4;
    s32 temp_r29_5;
    s32 var_r0;
    u16 *var_r6;
    u16 temp_r0_10;
    u16 temp_r0_2;
    u16 temp_r0_3;
    u16 temp_r0_4;
    u16 temp_r0_5;
    u16 temp_r0_6;
    u16 temp_r0_7;
    u16 temp_r0_8;
    u16 temp_r0_9;
    u32 temp_r0;
    u32 temp_r29;
    u32 var_ctr;
    u32 var_ctr_2;
    u32 var_r3;
    void *temp_r28;
    void *temp_r5;

    if (arg0 != 0) {
        if (arg1 == 0) {
            if ((u32) (M2C_FIELD(&Scb_8031BA00, u8 *, 0x13) & 3) > 2U) {
                M2C_FIELD(&Scb_8031BA00, u8 *, 0x13) = (u8) (M2C_FIELD(&Scb_8031BA00, u8 *, 0x13) & 0xFFFFFFFC);
            }
            M2C_FIELD(&Scb_8031BA00, u16 *, 2) = 0U;
            temp_r5 = &Scb_8031BA00 + 0x14;
            /* draft: did not compile: var_r6 = &Scb_8031BA00 + 0xC; */
            M2C_FIELD(&Scb_8031BA00, u16 *, 0) = 0U;
            /* draft: did not compile: var_r3 = (u32) ((temp_r5 + 1) - var_r6) >> 1U; */
            if (var_r6 < temp_r5) {
                temp_r0 = var_r3 >> 3U;
                var_ctr = temp_r0;
                if (temp_r0 != 0) {
                    do {
                        M2C_FIELD(&Scb_8031BA00, u16 *, 0) = (u16) (M2C_FIELD(&Scb_8031BA00, u16 *, 0) + M2C_FIELD(var_r6, u16 *, 0));
                        temp_r0_2 = M2C_FIELD(var_r6, u16 *, 0);
                        M2C_FIELD(&Scb_8031BA00, u16 *, 2) = (u16) (M2C_FIELD(&Scb_8031BA00, u16 *, 2) + ~(temp_r0_2 | temp_r0_2));
                        M2C_FIELD(&Scb_8031BA00, u16 *, 0) = (u16) (M2C_FIELD(&Scb_8031BA00, u16 *, 0) + M2C_FIELD(var_r6, u16 *, 2));
                        temp_r0_3 = M2C_FIELD(var_r6, u16 *, 2);
                        M2C_FIELD(&Scb_8031BA00, u16 *, 2) = (u16) (M2C_FIELD(&Scb_8031BA00, u16 *, 2) + ~(temp_r0_3 | temp_r0_3));
                        M2C_FIELD(&Scb_8031BA00, u16 *, 0) = (u16) (M2C_FIELD(&Scb_8031BA00, u16 *, 0) + M2C_FIELD(var_r6, u16 *, 4));
                        temp_r0_4 = M2C_FIELD(var_r6, u16 *, 4);
                        M2C_FIELD(&Scb_8031BA00, u16 *, 2) = (u16) (M2C_FIELD(&Scb_8031BA00, u16 *, 2) + ~(temp_r0_4 | temp_r0_4));
                        M2C_FIELD(&Scb_8031BA00, u16 *, 0) = (u16) (M2C_FIELD(&Scb_8031BA00, u16 *, 0) + M2C_FIELD(var_r6, u16 *, 6));
                        temp_r0_5 = M2C_FIELD(var_r6, u16 *, 6);
                        M2C_FIELD(&Scb_8031BA00, u16 *, 2) = (u16) (M2C_FIELD(&Scb_8031BA00, u16 *, 2) + ~(temp_r0_5 | temp_r0_5));
                        M2C_FIELD(&Scb_8031BA00, u16 *, 0) = (u16) (M2C_FIELD(&Scb_8031BA00, u16 *, 0) + M2C_FIELD(var_r6, u16 *, 8));
                        temp_r0_6 = M2C_FIELD(var_r6, u16 *, 8);
                        M2C_FIELD(&Scb_8031BA00, u16 *, 2) = (u16) (M2C_FIELD(&Scb_8031BA00, u16 *, 2) + ~(temp_r0_6 | temp_r0_6));
                        M2C_FIELD(&Scb_8031BA00, u16 *, 0) = (u16) (M2C_FIELD(&Scb_8031BA00, u16 *, 0) + M2C_FIELD(var_r6, u16 *, 0xA));
                        temp_r0_7 = M2C_FIELD(var_r6, u16 *, 0xA);
                        M2C_FIELD(&Scb_8031BA00, u16 *, 2) = (u16) (M2C_FIELD(&Scb_8031BA00, u16 *, 2) + ~(temp_r0_7 | temp_r0_7));
                        M2C_FIELD(&Scb_8031BA00, u16 *, 0) = (u16) (M2C_FIELD(&Scb_8031BA00, u16 *, 0) + M2C_FIELD(var_r6, u16 *, 0xC));
                        temp_r0_8 = M2C_FIELD(var_r6, u16 *, 0xC);
                        M2C_FIELD(&Scb_8031BA00, u16 *, 0) = (u16) (M2C_FIELD(&Scb_8031BA00, u16 *, 0) + M2C_FIELD(var_r6, u16 *, 0xE));
                        M2C_FIELD(&Scb_8031BA00, u16 *, 2) = (u16) (M2C_FIELD(&Scb_8031BA00, u16 *, 2) + ~(temp_r0_8 | temp_r0_8));
                        temp_r0_9 = M2C_FIELD(var_r6, u16 *, 0xE);
                        var_r6 = var_r6 + 0x10;
                        M2C_FIELD(&Scb_8031BA00, u16 *, 2) = (u16) (M2C_FIELD(&Scb_8031BA00, u16 *, 2) + ~(temp_r0_9 | temp_r0_9));
                        var_ctr = var_ctr - 1;
                    } while (var_ctr != 0);
                    var_r3 = var_r3 & 7;
                    if (var_r3 != 0) {
                        goto block_8;
                    }
                } else {
block_8:
                    var_ctr_2 = var_r3;
                    do {
                        M2C_FIELD(&Scb_8031BA00, u16 *, 0) = (u16) (M2C_FIELD(&Scb_8031BA00, u16 *, 0) + *var_r6);
                        temp_r0_10 = *var_r6;
                        var_r6 = var_r6 + 2;
                        M2C_FIELD(&Scb_8031BA00, u16 *, 2) = (u16) (M2C_FIELD(&Scb_8031BA00, u16 *, 2) + ~(temp_r0_10 | temp_r0_10));
                        var_ctr_2 = var_ctr_2 - 1;
                    } while (var_ctr_2 != 0);
                }
            }
        }
        if (arg1 < (u32) M2C_FIELD(&Scb_8031BA00, u32 *, 0x40)) {
            M2C_FIELD(&Scb_8031BA00, u32 *, 0x40) = arg1;
        }
        temp_r29 = M2C_FIELD(&Scb_8031BA00, u32 *, 0x40);
        temp_r27 = 0x40 - temp_r29;
        temp_r28 = &Scb_8031BA00 + temp_r29;
        if (EXILock(0, 1, WriteSramCallback) == 0) {
            var_r0 = 0;
        } else if (EXISelect(0, 1, 3) == 0) {
            EXIUnlock(0);
            var_r0 = 0;
        } else {
            sp10 = ((temp_r29 << 6) + 0x100) | 0xA0000000;
            temp_r29_2 = EXIImm(0, &sp10, 4, 1, 0) == 0;
            temp_r29_3 = temp_r29_2 | (EXISync(0) == 0);
            temp_r29_4 = temp_r29_3 | (EXIImmEx(0, temp_r28, temp_r27, 1) == 0);
            temp_r29_5 = temp_r29_4 | (EXIDeselect(0) == 0);
            EXIUnlock(0);
            var_r0 = temp_r29_5 == 0;
        }
        M2C_FIELD(&Scb_8031BA00, s32 *, 0x4C) = var_r0;
        if ((s32) M2C_FIELD(&Scb_8031BA00, s32 *, 0x4C) != 0) {
            M2C_FIELD(&Scb_8031BA00, u32 *, 0x40) = 0x40U;
        }
    }
    M2C_FIELD(&Scb_8031BA00, s32 *, 0x48) = 0;
    OSRestoreInterrupts(M2C_FIELD(&Scb_8031BA00, s32 *, 0x44));
    return M2C_FIELD(&Scb_8031BA00, s32 *, 0x4C);
}

void __OSUnlockSram(void) {
    fn_800C813C((long)(0), (unsigned long)(0));
}

void __OSUnlockSramEx(void) {
    fn_800C813C((long)(0x14), (unsigned long)(0));
}

s32 __OSSyncSram(void) {
    return M2C_FIELD(&Scb_8031BA00, s32 *, 0x4C);
}

s32 OSGetSoundMode(void) {
    M2C_UNK *var_r31_2;
    s32 temp_r3;
    s32 var_r31;

    var_r31_2 = &Scb_8031BA00;
    temp_r3 = OSDisableInterrupts(&Scb_8031BA00);
    if ((s32) M2C_FIELD(&Scb_8031BA00, s32 *, 0x48) != 0) {
        OSRestoreInterrupts((long)(0));
        var_r31_2 = NULL;
    } else {
        M2C_FIELD(&Scb_8031BA00, s32 *, 0x44) = temp_r3;
        M2C_FIELD(&Scb_8031BA00, s32 *, 0x48) = 1;
    }
    if (M2C_FIELD(var_r31_2, u8 *, 0x13) & 4) {
        var_r31 = 1;
    } else {
        var_r31 = 0;
    }
    fn_800C813C(0, 0);
    return var_r31;
}

s32 OSGetProgressiveMode(void) {
    M2C_UNK *var_r31;
    s8 temp_r31;
    s32 temp_r3;

    var_r31 = &Scb_8031BA00;
    temp_r3 = OSDisableInterrupts(&Scb_8031BA00);
    if ((s32) M2C_FIELD(&Scb_8031BA00, s32 *, 0x48) != 0) {
        OSRestoreInterrupts((long)(0));
        var_r31 = NULL;
    } else {
        M2C_FIELD(&Scb_8031BA00, s32 *, 0x44) = temp_r3;
        M2C_FIELD(&Scb_8031BA00, s32 *, 0x48) = 1;
    }
    temp_r31 = ((u8) M2C_FIELD(var_r31, u8 *, 0x13) >> 7U) & 1;
    fn_800C813C(0, 0);
    return temp_r31;
}

void OSSetProgressiveMode(s32 arg0) {
    M2C_UNK *var_r31;
    s32 temp_r3;
    s8 temp_r30;
    u8 temp_r3_2;

    var_r31 = &Scb_8031BA00;
    temp_r30 = (arg0 << 7) & 0x80;
    temp_r3 = OSDisableInterrupts(&Scb_8031BA00);
    if ((s32) M2C_FIELD(&Scb_8031BA00, s32 *, 0x48) != 0) {
        OSRestoreInterrupts((long)(0));
        var_r31 = NULL;
    } else {
        M2C_FIELD(&Scb_8031BA00, s32 *, 0x44) = temp_r3;
        M2C_FIELD(&Scb_8031BA00, s32 *, 0x48) = 1;
    }
    temp_r3_2 = M2C_FIELD(var_r31, u8 *, 0x13);
    if (temp_r30 == (u32) (temp_r3_2 & 0x80)) {
        fn_800C813C(0, 0);
        return;
    }
    M2C_FIELD(var_r31, u8 *, 0x13) = (u8) (temp_r3_2 & 0xFFFFFF7F);
    M2C_FIELD(var_r31, u8 *, 0x13) = (u8) (M2C_FIELD(var_r31, u8 *, 0x13) | temp_r30);
    fn_800C813C(1, 0);
}

u16 OSGetWirelessID(s32 arg0) { return 0; } /* draft: stub */

void OSSetWirelessID(s32 arg0, u16 arg1) {
    s32 temp_r3;
    void *temp_r4;
    void *var_r3;

    temp_r3 = OSDisableInterrupts(&Scb_8031BA00);
    if ((s32) M2C_FIELD(&Scb_8031BA00, s32 *, 0x48) != 0) {
        OSRestoreInterrupts((long)(0));
        var_r3 = NULL;
    } else {
        var_r3 = &Scb_8031BA00 + 0x14;
        M2C_FIELD(&Scb_8031BA00, s32 *, 0x48) = 1;
        M2C_FIELD(&Scb_8031BA00, s32 *, 0x44) = temp_r3;
    }
    /* draft: did not compile: temp_r4 = var_r3 + (arg0 * 2); */
    if ((u16) M2C_FIELD(temp_r4, u16 *, 0x1C) != arg1) {
        M2C_FIELD(temp_r4, u16 *, 0x1C) = arg1;
        fn_800C813C(1, 0x14);
        return;
    }
    fn_800C813C(0, 0x14);
}

void fn_800C8760(s32 *arg0, s32 arg1) {
    u8 temp_r31;

    temp_r31 = OSDisableInterrupts();
    OSInitThreadQueue(arg0 + 4);
    *arg0 = arg1;
    OSRestoreInterrupts(temp_r31);
}

s32 fn_800C87B8(s32 *arg0) {
    s32 temp_r31;
    u8 temp_r30;
    s32 temp_r4;

    temp_r31 = OSDisableInterrupts();
loop_2:
    temp_r30 = *arg0;
    if (temp_r30 <= 0) {
        OSSleepThread(arg0 + 4);
        goto loop_2;
    }
    temp_r4 = *arg0;
    *arg0 = temp_r4 - 1;
    OSRestoreInterrupts((long)(temp_r31));
    return temp_r30;
}

s32 fn_800C8828(s32 *arg0) {
    s32 temp_r31;
    s32 temp_r30;

    temp_r31 = OSDisableInterrupts();
    temp_r30 = *arg0;
    *arg0 = temp_r30 + 1;
    OSWakeupThread(arg0 + 4);
    OSRestoreInterrupts(temp_r31);
    return temp_r30;
}

void SystemCallVector(void) {
    M2C_ERROR(/* unknown instruction: mfspr $r9, HID0 */);
    M2C_ERROR(/* unknown instruction: mtspr HID0, $r10 */);
    M2C_SYNC();
    M2C_SYNC();
    M2C_ERROR(/* unknown instruction: mtspr HID0, $r9 */);
    M2C_ERROR(/* unknown instruction: rfi */);
}

void __OSInitSystemCall(void) { } /* draft: stub */

void fn_800C890C(void) {

}

void __OSThreadInit(void) {
    M2C_UNK *var_r29;
    s32 var_r30;
    void *temp_r31;
    void *temp_r3;

    temp_r31 = &RunQueue_8031BA58 + 0x418;
    M2C_FIELD(&RunQueue_8031BA58, s16 *, 0x6E0) = 2;
    M2C_FIELD(&RunQueue_8031BA58, s16 *, 0x6E2) = 1;
    M2C_FIELD(&RunQueue_8031BA58, s32 *, 0x6EC) = 0x10;
    M2C_FIELD(&RunQueue_8031BA58, s32 *, 0x6E8) = 0x10;
    M2C_FIELD(&RunQueue_8031BA58, s32 *, 0x6E4) = 0;
    M2C_FIELD(&RunQueue_8031BA58, s32 *, 0x6F0) = -1;
    M2C_FIELD(&RunQueue_8031BA58, s32 *, 0x708) = 0;
    /* draft: did not compile: OSInitThreadQueue(temp_r31 + 0x2E8, 0x10); */
    M2C_FIELD(&RunQueue_8031BA58, s32 *, 0x710) = 0;
    M2C_FIELD(&RunQueue_8031BA58, s32 *, 0x70C) = 0;
    var_r29 = &RunQueue_8031BA58;
    *(void **)0x800000D8 = temp_r31;
    OSClearContext(temp_r31);
    OSSetCurrentContext(temp_r31);
    M2C_FIELD(&RunQueue_8031BA58, M2C_UNK **, 0x71C) = &_stack_addr;
    *M2C_FIELD(&RunQueue_8031BA58, s32 **, 0x720) = 0xDEADBABE;
    SwitchThreadCallback_8034FF50(*(void **)0x800000E4, temp_r31);
    M2C_FIELD(&RunQueue_8031BA58, s32 **, 0x720) = &_stack_end;
    OSClearStack(0);
    RunQueueBits_803508F0 = 0;
    var_r30 = 0;
    RunQueueHint_803508F4 = 0;
    *(void **)0x800000E4 = temp_r31;
    do {
        OSInitThreadQueue(var_r29);
        var_r30 += 1;
        var_r29 += 8;
    } while (var_r30 <= 0x1F);
    OSInitThreadQueue((M2C_UNK *)0x800000DC);
    temp_r3 = M2C_FIELD((void *)0x800000DC, void **, 4);
    if (temp_r3 == NULL) {
        M2C_FIELD((void *)0x800000DC, void **, 0) = temp_r31;
    } else {
        M2C_FIELD(temp_r3, void **, 0x2FC) = temp_r31;
    }
    M2C_FIELD(temp_r31, s32 *, 0x2FC) = 0;
    M2C_FIELD(temp_r31, void **, 0x300) = temp_r3;
    M2C_FIELD((void *)0x800000DC, void **, 4) = temp_r31;
    OSClearContext(&RunQueue_8031BA58 + 0x730);
    Reschedule_803508F8 = 0;
}

void OSInitThreadQueue(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
}

s32 fn_800C8A78(void) {
    return *(s32 *)0x800000E4;
}

s32 OSDisableScheduler(void) {
    u8 temp_r4;

    OSDisableInterrupts();
    temp_r4 = Reschedule_803508F8;
    Reschedule_803508F8 = temp_r4 + 1;
    OSRestoreInterrupts(temp_r4);
    return temp_r4;
}

s32 OSEnableScheduler(void) {
    u8 temp_r4;

    OSDisableInterrupts();
    temp_r4 = Reschedule_803508F8;
    Reschedule_803508F8 = temp_r4 - 1;
    OSRestoreInterrupts(temp_r4);
    return temp_r4;
}

void UnsetRun(void *arg0) {
    void *temp_r4;
    void *temp_r5;
    void *temp_r6;

    temp_r4 = M2C_FIELD(arg0, void **, 0x2E0);
    temp_r5 = M2C_FIELD(arg0, void **, 0x2DC);
    temp_r6 = M2C_FIELD(arg0, void **, 0x2E4);
    if (temp_r4 == NULL) {
        M2C_FIELD(temp_r5, void **, 4) = temp_r6;
    } else {
        M2C_FIELD(temp_r4, void **, 0x2E4) = temp_r6;
    }
    if (temp_r6 == NULL) {
        M2C_FIELD(temp_r5, void **, 0) = temp_r4;
    } else {
        M2C_FIELD(temp_r6, void **, 0x2E0) = temp_r4;
    }
    if ((void *) M2C_FIELD(temp_r5, void **, 0) == NULL) {
        RunQueueBits_803508F0 &= ~(1 << (0x1F - M2C_FIELD(arg0, s32 *, 0x2D0)));
    }
    M2C_FIELD(arg0, void **, 0x2DC) = NULL;
}
