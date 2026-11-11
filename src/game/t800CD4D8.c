/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

extern s32 Callback_80350940;
extern s32 StopAtNextInt_80350938;
extern s32 WaitingCoverClose_80350954;
M2C_UNK OSCreateAlarm();
M2C_UNK OSSetAlarm(M2C_UNK *, M2C_UNK, s32, M2C_UNK *);
extern M2C_UNK AlarmForTimeout_8031C6B8;
extern M2C_UNK AlarmHandlerForTimeout_800CCFAC;
u64 __OSGetSystemTime(M2C_UNK);
extern M2C_UNK LastResetEnd_80350948;
extern s32 ResetOccurred_80350950;
extern s32 lbl_80350958;
M2C_UNK OSDisableInterrupts();
M2C_UNK OSRestoreInterrupts();
extern s32 WorkAroundSeekLocation_80350960;
extern s32 WorkAroundType_8035095C;
extern s32 BootInfo_80350980;
extern void *FstStart_80350984;
extern void *FstStringStart_80350988;
extern s32 MaxEntryNum_8035098C;
M2C_UNK fn_800C5B7C(M2C_UNK *, M2C_UNK, M2C_UNK *, u8 *);
s32 fn_8014E7FC(s8);
extern u32 __DVDLongFileNameFlag;
extern M2C_UNK lbl_802A6D98;
extern M2C_UNK lbl_8034FF70;
extern u32 lbl_80350990;
M2C_UNK OSReport();
extern M2C_UNK lbl_802A6E60;
M2C_UNK DVDCancel();
extern M2C_UNK lbl_802A6E98;
M2C_UNK OSSleepThread(M2C_UNK *);
extern M2C_UNK __DVDThreadQueue;
extern M2C_UNK lbl_802A6ECC;
M2C_UNK OSWakeupThread(M2C_UNK *);
M2C_UNK OSInitThreadQueue(M2C_UNK *);
M2C_UNK OSRegisterVersion(s32);
M2C_UNK __DVDClearWaitingQueue();
M2C_UNK __DVDInitWA();
M2C_UNK __OSSetInterruptHandler(M2C_UNK, M2C_UNK *);
M2C_UNK __OSUnmaskInterrupts(M2C_UNK);
M2C_UNK __fstLoad();
extern s32 DVDInitialized_803509E0;
extern s32 FirstTimeInBootrom_803509DC;
extern s32 IDShouldBe_803509A4;
extern M2C_UNK __DVDInterruptHandler;
extern s32 __DVDVersion;
extern void *bootInfo_803509A8;
extern M2C_UNK BB2_8031C720;
extern M2C_UNK lbl_802A6F54;
extern M2C_UNK lbl_8034FF84;
M2C_UNK stateReady_800CF388();
extern M2C_UNK DummyCommandBlock_8031C760;
extern M2C_UNK *executing_803509A0;
extern s32 lbl_803509D4;
M2C_UNK __DVDPrintFatalMessage();
extern s32 FatalErrorFlag_803509B8;
extern u32 lbl_803509C0;
M2C_UNK DVDReset();
M2C_UNK __DVDStoreErrorCode(M2C_UNK);
extern u32 lbl_803509D0;
M2C_UNK DVDLowSeek(s32, M2C_UNK *, M2C_UNK *);
M2C_UNK fn_800CEA64();
M2C_UNK fn_800CF110(M2C_UNK *);
M2C_UNK fn_800CF27C(M2C_UNK *);
extern s32 ResumeFromHere_803509C8;
extern M2C_UNK fn_800CE964;
extern s32 lbl_803509E4;
extern s32 lbl_803509C4;

s32 DVDLowWaitCoverClose(s32 arg0);
s32 DVDLowReadDiskID(s32 arg0, s32 arg1);
s32 DVDLowStopMotor(s32 arg0);
s32 fn_800CD634(s32 arg0);
s32 DVDLowInquiry(s32 arg0, s32 arg1);
s32 DVDLowAudioStream(s32 arg0, s32 arg1, u32 arg2, s32 arg3);
s32 DVDLowRequestAudioStatus(s32 arg0, s32 arg1);
s32 DVDLowAudioBufferConfig(s32 arg0, s32 arg1, s32 arg2);
void DVDLowReset(void);
s32 fn_800CD9D8(void);
s32 fn_800CD9EC(void);
void __DVDLowSetWAType(s32 arg0, s32 arg1);
void __DVDFSInit(void);
u32 DVDConvertPathToEntrynum(u8 *arg0);
s32 fn_800CDD74(s32 arg0, void *arg1);
s32 DVDOpen(s32 arg0, void *arg1);
s32 DVDClose(void);
u32 fn_800CDED4(u32 arg0, s32 arg1, u32 arg2);
s32 DVDGetCurrentDir(s32 arg0, u32 arg1);
s32 DVDReadAsyncPrio(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_800CE1B8(void *arg1);
s32 DVDReadPrio(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_800CE300(void);
void fn_800CE324(void);
void DVDInit(void);
void fn_800CE3F4(void);
void fn_800CE488(u32 arg0);
void cbForStateError_800CE514(u32 arg0);
void fn_800CE5C0(void);
void fn_800CE5F4(void);
s32 CategorizeError(u32 arg0);
void fn_800CE6D0(u32 arg0);

s32 DVDLowWaitCoverClose(s32 arg0) {
    Callback_80350940 = arg0;
    WaitingCoverClose_80350954 = 1;
    M2C_FIELD((void *)0xCC006000, s32 *, 4) = 2;
    StopAtNextInt_80350938 = 0;
    return 1;
}

s32 DVDLowReadDiskID(s32 arg0, s32 arg1) {
    s32 temp_r30;

    Callback_80350940 = arg1;
    StopAtNextInt_80350938 = 0;
    M2C_FIELD((void *)0xCC006000, s32 *, 0xC) = 0;
    *(s32 *)0xCC006008 = 0xA8000040;
    M2C_FIELD((void *)0xCC006000, s32 *, 0x10) = 0x20;
    M2C_FIELD((void *)0xCC006000, s32 *, 0x14) = arg0;
    M2C_FIELD((void *)0xCC006000, s32 *, 0x18) = 0x20;
    M2C_FIELD((void *)0xCC006000, s32 *, 0x1C) = 3;
    temp_r30 = ((u32) *(u32 *)0x800000F8 >> 2U) * 0xA;
    OSCreateAlarm(&AlarmForTimeout_8031C6B8, &AlarmForTimeout_8031C6B8, 0x80000000, 0x20, 0xCC006000, 0);
    OSSetAlarm(&AlarmForTimeout_8031C6B8, 0, temp_r30, &AlarmHandlerForTimeout_800CCFAC);
    return 1;
}

s32 DVDLowStopMotor(s32 arg0) {
    s32 temp_r30;

    StopAtNextInt_80350938 = 0;
    M2C_FIELD((void *)0xCC006000, s32 *, 0x1C) = 1;
    *(s32 *)0xCC006008 = 0xE3000000;
    temp_r30 = ((u32) *(u32 *)0x800000F8 >> 2U) * 0xA;
    OSCreateAlarm(&AlarmForTimeout_8031C6B8, 0x80000000);
    Callback_80350940 = arg0;
    OSSetAlarm(&AlarmForTimeout_8031C6B8, 0, temp_r30, &AlarmHandlerForTimeout_800CCFAC);
    return 1;
}

s32 fn_800CD634(s32 arg0) {
    s32 temp_r30;

    StopAtNextInt_80350938 = 0;
    M2C_FIELD((void *)0xCC006000, s32 *, 0x1C) = 1;
    *(s32 *)0xCC006008 = 0xE0000000;
    temp_r30 = ((u32) *(u32 *)0x800000F8 >> 2U) * 0xA;
    OSCreateAlarm(&AlarmForTimeout_8031C6B8, 0x80000000);
    Callback_80350940 = arg0;
    OSSetAlarm(&AlarmForTimeout_8031C6B8, 0, temp_r30, &AlarmHandlerForTimeout_800CCFAC);
    return 1;
}

s32 DVDLowInquiry(s32 arg0, s32 arg1) {
    s32 temp_r30;

    Callback_80350940 = arg1;
    StopAtNextInt_80350938 = 0;
    *(s32 *)0xCC006008 = 0x12000000;
    M2C_FIELD((void *)0xCC006000, s32 *, 0x14) = arg0;
    M2C_FIELD((void *)0xCC006000, s32 *, 0x18) = 0x20;
    M2C_FIELD((void *)0xCC006000, s32 *, 0x1C) = 3;
    temp_r30 = ((u32) *(u32 *)0x800000F8 >> 2U) * 0xA;
    OSCreateAlarm(&AlarmForTimeout_8031C6B8, &AlarmForTimeout_8031C6B8, 0x80000000, 0x20, 0xCC006000);
    OSSetAlarm(&AlarmForTimeout_8031C6B8, 0, temp_r30, &AlarmHandlerForTimeout_800CCFAC);
    M2C_FIELD((void *)0xCC006000, s32 *, 0x10) = 0x20;
    return 1;
}

#pragma push
#pragma peephole off
s32 DVDLowAudioStream(s32 arg0, s32 arg1, u32 arg2, s32 arg3) {
    s32 temp_r30;

    Callback_80350940 = arg3;
    M2C_FIELD((void *)0xCC006000, s32 *, 8) = (s32) (arg0 | 0xE1000000);
    M2C_FIELD((void *)0xCC006000, s32 *, 0x10) = arg1;
    M2C_FIELD((void *)0xCC006000, s32 *, 0x1C) = 1;
    StopAtNextInt_80350938 = 0;
    temp_r30 = ((u32) *(u32 *)0x800000F8 >> 2U) * 0xA;
    OSCreateAlarm(&AlarmForTimeout_8031C6B8, 0x80000000, 0xCC006000);
    M2C_FIELD((void *)0xCC006000, u32 *, 0xC) = (u32) (arg2 >> 2U);
    OSSetAlarm(&AlarmForTimeout_8031C6B8, 0, temp_r30, &AlarmHandlerForTimeout_800CCFAC);
    return 1;
}
#pragma pop

s32 DVDLowRequestAudioStatus(s32 arg0, s32 arg1) {
    s32 temp_r30;

    Callback_80350940 = arg1;
    StopAtNextInt_80350938 = 0;
    M2C_FIELD((void *)0xCC006000, s32 *, 8) = (s32) (arg0 | 0xE2000000);
    M2C_FIELD((void *)0xCC006000, s32 *, 0x1C) = 1;
    temp_r30 = ((u32) *(u32 *)0x800000F8 >> 2U) * 0xA;
    OSCreateAlarm(&AlarmForTimeout_8031C6B8, 0x80000000);
    OSSetAlarm(&AlarmForTimeout_8031C6B8, 0, temp_r30, &AlarmHandlerForTimeout_800CCFAC);
    return 1;
}

s32 DVDLowAudioBufferConfig(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r30;
    s32 var_r0;

    Callback_80350940 = arg2;
    StopAtNextInt_80350938 = var_r0 = 0;
    if (arg0 != 0) {
        var_r0 = 0x10000;
    }
    M2C_FIELD((void *)0xCC006000, s32 *, 8) = (s32) (arg1 | (var_r0 | 0xE4000000));
    M2C_FIELD((void *)0xCC006000, s32 *, 0x1C) = 1;
    temp_r30 = ((u32) *(u32 *)0x800000F8 >> 2U) * 0xA;
    OSCreateAlarm(&AlarmForTimeout_8031C6B8, 0x80000000);
    OSSetAlarm(&AlarmForTimeout_8031C6B8, 0, temp_r30, &AlarmHandlerForTimeout_800CCFAC);
    return 1;
}

void DVDLowReset(void) {
    s32 temp_r30;
    s32 temp_r4;
    u32 temp_r26;
    u32 temp_r28;
    u64 temp_r27;
    u64 temp_ret;
    u64 temp_ret_2;

    *(s32 *)0xCC006004 = 2;
    temp_ret = __OSGetSystemTime(0xCC000000);
    temp_r30 = *(s32 *)0xCC003024;
    M2C_FIELD((void *)0xCC003000, s32 *, 0x24) = (s32) ((temp_r30 & 0xFFFFFFFB) | 1);
    temp_r26 = (u32) temp_ret;
    temp_r27 = temp_ret;
    temp_r28 = (u32) ((*(u32 *)0x800000F8 / 500000) * 0xC) >> 3U;
    do {
        temp_r4 = ((__OSGetSystemTime((long)(0)) - temp_r27) - !M2C_CARRY) ^ 0x80000000;
    } while (-((temp_r4 - temp_r4) - !M2C_CARRY) != 0);
    M2C_FIELD((void *)0xCC003000, s32 *, 0x24) = (s32) (temp_r30 | 5);
    ResetOccurred_80350950 = 1;
    temp_ret_2 = __OSGetSystemTime((long)(0));
    M2C_FIELD(&LastResetEnd_80350948, u32 *, 4) = (u32) temp_ret_2;
    M2C_FIELD(&LastResetEnd_80350948, s32 *, 0) = temp_ret_2;
}

s32 fn_800CD9D8(void) {
    StopAtNextInt_80350938 = 1;
    lbl_80350958 = 1;
    return 1;
}

s32 fn_800CD9EC(void) {
    s32 temp_r3;

    *(s32 *)0xCC006004 = 0;
    temp_r3 = Callback_80350940;
    Callback_80350940 = 0;
    return temp_r3;
}

void __DVDLowSetWAType(s32 arg0, s32 arg1) {
    OSDisableInterrupts();
    WorkAroundType_8035095C = arg0;
    WorkAroundSeekLocation_80350960 = arg1;
    OSRestoreInterrupts();
}

void __DVDFSInit(void) {
    BootInfo_80350980 = 0x80000000;
    FstStart_80350984 = *(void **)0x80000038;
    if ((void *) FstStart_80350984 != NULL) {
        MaxEntryNum_8035098C = M2C_FIELD(FstStart_80350984, s32 *, 8);
        /* draft: did not compile: FstStringStart_80350988 = FstStart_80350984 + (MaxEntryNum_8035098C * 0xC); */
    }
}

u32 DVDConvertPathToEntrynum(u8 *arg0) { return 0; } /* draft: stub */

s32 fn_800CDD74(s32 arg0, void *arg1) { return 0; } /* draft: stub */

s32 DVDOpen(s32 arg0, void *arg1) { return 0; } /* draft: stub */

s32 DVDClose(void) {
    DVDCancel();
    return 1;
}

u32 fn_800CDED4(u32 arg0, s32 arg1, u32 arg2) { return 0; } /* draft: stub */

#pragma push
#pragma dont_inline on
s32 DVDGetCurrentDir(s32 arg0, u32 arg1) {
    s8 temp_r31;
    s8 var_r0;
    s32 var_r0_2;
    u32 var_r3;

    temp_r31 = lbl_80350990;
    var_r3 = fn_800CDED4(temp_r31, arg0, arg1);
    if (var_r3 == arg1) {
        var_r0 = 0;
        M2C_FIELD((arg0 + arg1), s8 *, -1) = 0;
    } else {
        if (0 /* draft: did not compile */) {
            var_r0_2 = 0;
        } else {
            var_r0_2 = 1;
        }
        if (var_r0_2 != 0) {
            if (var_r3 == (u32) (arg1 - 1)) {
                var_r0 = 0;
                /* draft: did not compile: *(arg0 + var_r3) = 0; */
            } else {
                /* draft: did not compile: *(arg0 + var_r3) = 0x2F; */
                var_r3 += 1;
                goto block_9;
            }
        } else {
block_9:
            /* draft: did not compile: *(arg0 + var_r3) = 0; */
            var_r0 = 1;
        }
    }
    return var_r0;
}
#pragma pop

s32 DVDReadAsyncPrio(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_r4;

    if ((arg3 < 0) || ((u32) arg3 >= (u32) M2C_FIELD(arg0, u32 *, 0x34))) {
        fn_800C5B7C((long *)(&lbl_8034FF70), (long)(0x2E6), (long *)(&lbl_802A6E98), (unsigned char *)(0));
    }
    temp_r4 = arg3 + arg2;
    if ((temp_r4 < 0) || ((u32) temp_r4 >= (u32) (M2C_FIELD(arg0, u32 *, 0x34) + 0x20))) {
        fn_800C5B7C((long *)(&lbl_8034FF70), (long)(0x2EC), (long *)(&lbl_802A6E98), (unsigned char *)(0));
    }
    M2C_FIELD(arg0, s32 *, 0x38) = arg4;
    DVDReadAbsAsyncPrio(arg0, arg1, arg2, M2C_FIELD(arg0, s32 *, 0x30) + arg3, (u16)fn_800CE1B8, arg5);
    return 1;
}

void fn_800CE1B8(void *arg1) {
    M2C_UNK (*temp_r12)();

    temp_r12 = M2C_FIELD(arg1, M2C_UNK (**)(), 0x38);
    if (temp_r12 != NULL) {
        temp_r12();
    }
}

s32 DVDReadPrio(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r0;
    s32 temp_r30;
    s32 temp_r4;
    s32 var_r31;

    if ((arg3 < 0) || ((u32) arg3 >= (u32) M2C_FIELD(arg0, u32 *, 0x34))) {
        fn_800C5B7C((long *)(&lbl_8034FF70), (long)(0x32C), (long *)(&lbl_802A6ECC), (unsigned char *)(0));
    }
    temp_r4 = arg3 + arg2;
    if ((temp_r4 < 0) || ((u32) temp_r4 >= (u32) (M2C_FIELD(arg0, u32 *, 0x34) + 0x20))) {
        fn_800C5B7C((long *)(&lbl_8034FF70), (long)(0x332), (long *)(&lbl_802A6ECC), (unsigned char *)(0));
    }
    if (DVDReadAbsAsyncPrio(arg0, arg1, arg2, M2C_FIELD(arg0, s32 *, 0x30) + arg3, fn_800CE300, arg4) == 0) {
        return -1;
    }
    temp_r30 = OSDisableInterrupts();
loop_9:
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC);
    switch (temp_r0) {                              /* irregular */
    case 0:
        var_r31 = M2C_FIELD(arg0, s32 *, 0x20);
        break;
    case -1:
        var_r31 = -1;
        break;
    case 10:
        var_r31 = -3;
        break;
    default:
        OSSleepThread(&__DVDThreadQueue);
        goto loop_9;
    }
    OSRestoreInterrupts(temp_r30);
    return var_r31;
}

void fn_800CE300(void) {
    OSWakeupThread(&__DVDThreadQueue);
}

void fn_800CE324(void) {

}

#pragma push
#pragma dont_inline on
void DVDInit(void) {
    s32 temp_r3;

    if ((s32) DVDInitialized_803509E0 == 0) {
        OSRegisterVersion(__DVDVersion);
        DVDInitialized_803509E0 = 1;
        __DVDFSInit();
        __DVDClearWaitingQueue();
        __DVDInitWA();
        bootInfo_803509A8 = (void *)0x80000000;
        IDShouldBe_803509A4 = 0x80000000;
        __OSSetInterruptHandler(0x15, &__DVDInterruptHandler);
        __OSUnmaskInterrupts(0x400);
        OSInitThreadQueue(&__DVDThreadQueue);
        *(s32 *)0xCC006000 = 0x2A;
        *(s32 *)0xCC006004 = 0;
        temp_r3 = M2C_FIELD(bootInfo_803509A8, s32 *, 0x20);
        if ((u32) (temp_r3 + 0x1AE00000) == 0x7C22U) {
            /* draft: did not compile: OSReport(&@18_802A6F48); */
            __fstLoad();
            return;
        }
        if ((u32) (temp_r3 + 0xF2EB0000) != -0x15A2U) {
            FirstTimeInBootrom_803509DC = 1;
        }
    }
}
#pragma pop

void fn_800CE3F4(void) {
    /* draft: did not compile: lbl_803509E4 = fn_800CE3F4; */
    if ((u32) M2C_FIELD(bootInfo_803509A8, u32 *, 0x3C) < (u32) M2C_FIELD(&BB2_8031C720, u32 *, 8)) {
        fn_800C5B7C((long *)(&lbl_8034FF84), (long)(0x287), (long *)(&lbl_802A6F54), (unsigned char *)(0));
    }
    DVDLowRead(M2C_FIELD(bootInfo_803509A8, s32 *, 0x38), (M2C_FIELD(&BB2_8031C720, u32 *, 8) + 0x1F) & 0xFFFFFFE0, M2C_FIELD(&BB2_8031C720, s32 *, 4), (u16)fn_800CE488, bootInfo_803509A8);
}

#pragma push
#pragma dont_inline on
void fn_800CE488(u32 arg0) {
    M2C_UNK (*temp_r12)(M2C_UNK);
    M2C_UNK *temp_r4;

    if (arg0 == 0x10) {
        M2C_FIELD(executing_803509A0, s32 *, 0xC) = -1;
        fn_800CE5C0();
        return;
    }
    if (arg0 & 1) {
        lbl_803509D4 = 0;
        __DVDFSInit();
        temp_r4 = executing_803509A0;
        executing_803509A0 = &DummyCommandBlock_8031C760;
        M2C_FIELD(temp_r4, s32 *, 0xC) = 0;
        temp_r12 = M2C_FIELD(temp_r4, M2C_UNK (**)(M2C_UNK), 0x28);
        if (temp_r12 != NULL) {
            temp_r12(0);
        }
        stateReady_800CF388();
        return;
    }
    fn_800CE5F4();
}
#pragma pop

void cbForStateError_800CE514(u32 arg0) {
    M2C_UNK (*temp_r12)(M2C_UNK, M2C_UNK *);
    M2C_UNK *temp_r31;

    if (arg0 == 0x10U) {
        M2C_FIELD(executing_803509A0, s32 *, 0xC) = -1;
        fn_800CE5C0();
        return;
    }
    temp_r31 = executing_803509A0;
    __DVDPrintFatalMessage();
    executing_803509A0 = &DummyCommandBlock_8031C760;
    FatalErrorFlag_803509B8 = 1;
    temp_r12 = M2C_FIELD(temp_r31, M2C_UNK (**)(M2C_UNK, M2C_UNK *), 0x28);
    if (temp_r12 != NULL) {
        temp_r12(-1, temp_r31);
    }
    if ((u32) lbl_803509C0 != 0U) {
        lbl_803509C0 = 0U;
        if (((M2C_UNK (*)(M2C_UNK, M2C_UNK *)) lbl_803509C4) != NULL) {
            /* draft: did not compile: lbl_803509C4(0, temp_r31); */
        }
    }
    stateReady_800CF388();
}

void fn_800CE5C0(void) {
    __DVDStoreErrorCode(0x01234568);
    DVDReset();
    cbForStateError_800CE514(0);
}

void fn_800CE5F4(void) {
    /* draft: did not compile: fn_800CD634(fn_800CE6D0); */
}

s32 CategorizeError(u32 arg0) {
    u32 temp_r4;

    if ((u32) (arg0 + 0xFFFE0000) == 0x400U) {
        lbl_803509D0 = arg0;
        return 1;
    }
    temp_r4 = arg0 & 0xFFFFFF;
    if (((u32) (temp_r4 + 0xFFFA0000) == 0x2800U) || ((u32) (temp_r4 + 0xFFFE0000) == 0x3A00U) || ((u32) (temp_r4 + 0xFFF50000) == 0x5A01U)) {
        return 0;
    }
    lbl_803509D4 += 1;
    if ((s32) lbl_803509D4 == 2) {
        if (temp_r4 == (u32) lbl_803509D0) {
            lbl_803509D0 = temp_r4;
            return 1;
        }
        lbl_803509D0 = temp_r4;
        return 2;
    }
    lbl_803509D0 = temp_r4;
    if (((u32) (temp_r4 + 0xFFFD0000) == 0x1100U) || ((u32) M2C_FIELD(executing_803509A0, u32 *, 8) == 5U)) {
        return 2;
    }
    return 3;
}

void fn_800CE6D0(u32 arg0) {
    M2C_UNK (*temp_r12)(M2C_UNK, M2C_UNK *);
    s32 var_r0;
    s32 temp_r29;
    M2C_UNK *temp_r30;
    s32 var_r4;
    u32 temp_r3;
    s32 temp_r28;

    if (arg0 == 0x10) {
        M2C_FIELD(executing_803509A0, s32 *, 0xC) = -1;
        __DVDStoreErrorCode((long)(0x01234568));
        DVDReset();
        cbForStateError_800CE514(0);
        return;
    }
    if (arg0 & 2) {
        M2C_FIELD(executing_803509A0, s32 *, 0xC) = -1;
        __DVDStoreErrorCode((long)(0x01234567));
        /* draft: did not compile: DVDLowStopMotor(cbForStateError_800CE514); */
        return;
    }
    temp_r29 = *(s32 *)0xCC006020;
    temp_r28 = temp_r29 & 0xFF000000;
    temp_r3 = CategorizeError(temp_r29);
    if (temp_r3 == 1U) {
        M2C_FIELD(executing_803509A0, s32 *, 0xC) = -1;
        __DVDStoreErrorCode((long)(temp_r29));
        /* draft: did not compile: DVDLowStopMotor(cbForStateError_800CE514); */
        return;
    }
    if ((u32) (temp_r3 - 2) <= 1U) {
        var_r4 = 0;
    } else if ((u32) (temp_r28 + 0xFF000000) == 0U) {
        var_r4 = 4;
    } else if ((u32) (temp_r28 + 0xFE000000) == 0U) {
        var_r4 = 6;
    } else if ((u32) (temp_r28 + 0xFD000000) == 0U) {
        var_r4 = 3;
    } else {
        var_r4 = 5;
    }
    if ((u32) lbl_803509C0 != 0U) {
        temp_r30 = executing_803509A0;
        lbl_803509C0 = 0U;
        executing_803509A0 = &DummyCommandBlock_8031C760;
        M2C_FIELD(temp_r30, s32 *, 0xC) = 0xA;
        temp_r12 = M2C_FIELD(temp_r30, M2C_UNK (**)(M2C_UNK, M2C_UNK *), 0x28);
        ResumeFromHere_803509C8 = var_r4;
        if (temp_r12 != NULL) {
            temp_r12(-3, temp_r30);
        }
        if (((M2C_UNK (*)(M2C_UNK, M2C_UNK *)) lbl_803509C4) != NULL) {
            /* draft: did not compile: lbl_803509C4(0, temp_r30); */
        }
        var_r0 = 1;
        stateReady_800CF388();
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        if (temp_r3 == 2U) {
            __DVDStoreErrorCode(temp_r29);
            fn_800CEA64();
            return;
        }
        if (temp_r3 == 3U) {
            if ((u32) ((temp_r29 & 0xFFFFFF) + 0xFFFD0000) == 0x1100U) {
                DVDLowSeek(M2C_FIELD(executing_803509A0, s32 *, 0x10), &fn_800CE964, executing_803509A0);
                return;
            }
            /* draft: did not compile: lbl_803509E4(executing_803509A0); */
            return;
        }
        if ((u32) (temp_r28 + 0xFF000000) == 0U) {
            M2C_FIELD(executing_803509A0, s32 *, 0xC) = 5;
            fn_800CF27C(executing_803509A0);
            return;
        }
        if ((u32) (temp_r28 + 0xFE000000) == 0U) {
            M2C_FIELD(executing_803509A0, s32 *, 0xC) = 3;
            fn_800CF110(executing_803509A0);
            return;
        }
        if ((u32) (temp_r28 + 0xFD000000) == 0U) {
            M2C_FIELD(executing_803509A0, s32 *, 0xC) = 4;
            fn_800CF27C(executing_803509A0);
            return;
        }
        M2C_FIELD(executing_803509A0, s32 *, 0xC) = -1;
        __DVDStoreErrorCode((long)(0x01234567));
        /* draft: did not compile: DVDLowStopMotor(cbForStateError_800CE514); */
    }
}
