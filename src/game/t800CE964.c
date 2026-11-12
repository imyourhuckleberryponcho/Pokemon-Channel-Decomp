/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK __DVDStoreErrorCode(M2C_UNK, void *);
M2C_UNK cbForStateError_800CE514(M2C_UNK);
extern void *executing_803509A0;
extern u32 CurrCommand_803509BC;
extern M2C_UNK DummyCommandBlock_8031C760;
extern s32 ResetRequired_803509D8;
extern s32 ResumeFromHere_803509C8;
extern u32 lbl_803509C0;
extern s32 lbl_803509D4;
M2C_UNK DCInvalidateRange();
s32 DVDCompareDiskID(void *, s32);
s32 memcmp(void *, s32, M2C_UNK);
extern M2C_UNK BB2_8031C720;
extern s32 IDShouldBe_803509A4;
M2C_UNK fn_800CD634();
extern M2C_UNK fn_800CE6D0;
M2C_UNK fn_800C5B7C(M2C_UNK *, M2C_UNK, M2C_UNK *);
M2C_UNK DVDLowRead();
extern void *bootInfo_803509A8;
extern M2C_UNK fn_800CE3F4;
extern M2C_UNK fn_800CE488;
extern M2C_UNK lbl_802A6F54;
extern M2C_UNK lbl_8034FF84;
extern M2C_UNK *lbl_803509E4;
extern M2C_UNK lbl_8031C740;
M2C_UNK OSCreateAlarm(void *);
M2C_UNK __DVDClearWaitingQueue();
M2C_UNK DVDLowStopMotor();
s32 __DVDCheckWaitingQueue(M2C_UNK *);
void *__DVDPopWaitingQueue();
extern s32 CancelLastError_803509CC;
extern s32 FatalErrorFlag_803509B8;
extern s32 PauseFlag_803509AC;
extern s32 PausingFlag_803509B0;
extern M2C_UNK lbl_802A6FC8;
extern u32 lbl_8034FF8C;
extern s32 lbl_803509B4;
s32 OSDisableInterrupts();
M2C_UNK OSRestoreInterrupts(s32);
s32 __DVDPushWaitingQueue(s32, void *);
extern s32 autoInvalidation_8034FF7C;
M2C_UNK DVDLowReset();
extern s32 lbl_803509C4;

void fn_800CE964(u32 arg0);
void fn_800CE9CC(u32 arg0);
void fn_800CEA64(void);
void fn_800CEA8C(u32 arg0);
void fn_800CEBE4(void);
void fn_800CECC4(void);
void fn_800CECF8(void);
void fn_800CED2C(u32 arg0);
void fn_800CEDA0(void);
void fn_800CEDD8(u32 arg0);
void fn_800CEEEC(u32 arg0);
void fn_800CEFD0(u32 arg0);
static void AlarmHandler(void);
void fn_800CF110(void);
void fn_800CF1DC(void);
void fn_800CF20C(u32 arg0);
void fn_800CF27C(void);
static void cbForStateMotorStopped(void);
void stateReady_800CF388(void);
void stateBusy_800CF5B8();
void fn_800CF8D8(u32 arg0);
s32 DVDReadAbsAsyncPrio(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 DVDReadAbsAsyncForBS(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 DVDReadDiskID(void *arg0, s32 arg1, s32 arg2);
s32 DVDCancelStreamAsync(void *arg0, s32 arg1);
s32 DVDInquiryAsync(void *arg0, s32 arg1, s32 arg2);
void DVDReset(void);
s32 DVDGetCommandBlockStatus(void *arg0);
s32 DVDGetDriveStatus(void);
s32 fn_800D0458(s32 arg0);
void DVDResume(void);
void DVDCancelAsync();

void fn_800CE964(u32 arg0) {
    if (arg0 == 0x10) {
        M2C_FIELD(executing_803509A0, s32 *, 0xC) = -1;
        __DVDStoreErrorCode(0x01234568, executing_803509A0);
        DVDReset();
        cbForStateError_800CE514(0);
        return;
    }
    if (arg0 & 1) {
        fn_800CEA64();
        return;
    }
    fn_800CD634(fn_800CE9CC);
}

void fn_800CE9CC(u32 arg0) {
    if (arg0 == 0x10) {
        M2C_FIELD(executing_803509A0, s32 *, 0xC) = -1;
        __DVDStoreErrorCode(0x01234568, executing_803509A0);
        DVDReset();
        cbForStateError_800CE514(0);
        return;
    }
    M2C_FIELD(executing_803509A0, s32 *, 0xC) = -1;
    if (arg0 & 2) {
        __DVDStoreErrorCode((long)(0x01234567), (void *)(0));
        DVDLowStopMotor(cbForStateError_800CE514);
        return;
    }
    __DVDStoreErrorCode((long)(M2C_FIELD((void *)0xCC006000, s32 *, 0x20)), (void *)(0));
    DVDLowStopMotor(cbForStateError_800CE514);
}

void fn_800CEA64(void) {
    DVDLowStopMotor((u16)fn_800CEA8C);
}

void fn_800CEA8C(u32 arg0) {
    M2C_UNK (*temp_r12)(M2C_UNK, M2C_UNK *);
    M2C_UNK *temp_r31;
    s32 var_r0;

    if (arg0 == 0x10) {
        M2C_FIELD(executing_803509A0, s32 *, 0xC) = -1;
        __DVDStoreErrorCode(0x01234568, executing_803509A0);
        DVDReset();
        cbForStateError_800CE514(0);
        return;
    }
    if (arg0 & 2) {
        M2C_FIELD(executing_803509A0, s32 *, 0xC) = -1;
        __DVDStoreErrorCode(0x01234567, executing_803509A0);
        DVDLowStopMotor(cbForStateError_800CE514);
        return;
    }
    lbl_803509D4 = 0;
    if ((CurrCommand_803509BC == 4U) || ((u32) CurrCommand_803509BC == 5U) || ((u32) CurrCommand_803509BC == 0xDU) || ((u32) CurrCommand_803509BC == 0xFU)) {
        ResetRequired_803509D8 = 1;
    }
    if ((u32) lbl_803509C0 != 0U) {
        temp_r31 = executing_803509A0;
        ResumeFromHere_803509C8 = 2;
        lbl_803509C0 = 0U;
        M2C_FIELD(temp_r31, s32 *, 0xC) = 0xA;
        temp_r12 = M2C_FIELD(temp_r31, M2C_UNK (**)(M2C_UNK, M2C_UNK *), 0x28);
        executing_803509A0 = &DummyCommandBlock_8031C760;
        if (temp_r12 != NULL) {
            temp_r12(-3, temp_r31);
        }
        if (((M2C_UNK (*)(M2C_UNK, M2C_UNK *)) lbl_803509C4) != NULL) {
            /* draft: did not compile: lbl_803509C4(0, temp_r31); */
        }
        var_r0 = 1;
        stateReady_800CF388();
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        M2C_FIELD(executing_803509A0, s32 *, 0xC) = 0xB;
        fn_800CF27C();
    }
}

void fn_800CEBE4(void) {
    if ((s32) CurrCommand_803509BC != 3) {
        if (memcmp(&BB2_8031C720 + 0x20, IDShouldBe_803509A4, 0x20) != 0) {
            DVDLowStopMotor((u16)fn_800CEDD8);
            return;
        }
        /* draft: did not compile: lbl_803509E4 = fn_800CECC4; */
        fn_800CECC4();
        return;
    }
    if (DVDCompareDiskID(&BB2_8031C720 + 0x20, M2C_FIELD(executing_803509A0, s32 *, 0x24)) != 0) {
        /* draft: did not compile: memcpy(IDShouldBe_803509A4, &BB2_8031C720 + 0x20, 0x20); */
        M2C_FIELD(executing_803509A0, s32 *, 0xC) = 1;
        DCInvalidateRange(&BB2_8031C720, 0x20);
        /* draft: did not compile: lbl_803509E4 = fn_800CECF8; */
        fn_800CECF8();
        return;
    }
    DVDLowStopMotor((u16)fn_800CEDD8);
}

void fn_800CECC4(void) {
    DVDLowAudioBufferConfig(M2C_FIELD(IDShouldBe_803509A4, s8 *, 8), 0xA, fn_800CEFD0);
}

void fn_800CECF8(void) {
    DVDLowAudioBufferConfig(M2C_FIELD(IDShouldBe_803509A4, s8 *, 8), 0xA, fn_800CED2C);
}

void fn_800CED2C(u32 arg0) {
    if (arg0 == 0x10) {
        M2C_FIELD(executing_803509A0, s32 *, 0xC) = -1;
        __DVDStoreErrorCode(0x01234568, executing_803509A0);
        DVDReset();
        cbForStateError_800CE514(0);
        return;
    }
    if (arg0 & 1) {
        lbl_803509D4 = 0;
        fn_800CEDA0();
        return;
    }
    fn_800CD634(&fn_800CE6D0);
}

void fn_800CEDA0(void) {
    DVDLowRead(&BB2_8031C720, 0x20, 0x420, fn_800CEEEC);
}

void fn_800CEDD8(u32 arg0) {
    M2C_UNK (*temp_r12)(M2C_UNK, M2C_UNK *);
    M2C_UNK *temp_r31;
    s32 var_r4;

    if (arg0 == 0x10) {
        M2C_FIELD(executing_803509A0, s32 *, 0xC) = -1;
        __DVDStoreErrorCode(0x01234568, executing_803509A0);
        DVDReset();
        cbForStateError_800CE514(0);
        return;
    }
    if (arg0 & 2) {
        M2C_FIELD(executing_803509A0, s32 *, 0xC) = -1;
        __DVDStoreErrorCode(0x01234567, executing_803509A0);
        DVDLowStopMotor(cbForStateError_800CE514);
        return;
    }
    var_r4 = 0;
    lbl_803509D4 = 0;
    if ((u32) lbl_803509C0 != 0U) {
        temp_r31 = executing_803509A0;
        ResumeFromHere_803509C8 = 1;
        lbl_803509C0 = 0U;
        M2C_FIELD(temp_r31, s32 *, 0xC) = 0xA;
        executing_803509A0 = &DummyCommandBlock_8031C760;
        temp_r12 = M2C_FIELD(temp_r31, M2C_UNK (**)(M2C_UNK, M2C_UNK *), 0x28);
        if (temp_r12 != NULL) {
            temp_r12(-3, temp_r31);
        }
        if (((M2C_UNK (*)(M2C_UNK, M2C_UNK *)) lbl_803509C4) != NULL) {
            /* draft: did not compile: lbl_803509C4(0, temp_r31); */
        }
        var_r4 = 1;
        stateReady_800CF388();
    }
    if (var_r4 == 0) {
        M2C_FIELD(executing_803509A0, s32 *, 0xC) = 6;
        fn_800CF27C();
    }
}

void fn_800CEEEC(u32 arg0) {
    if (arg0 == 0x10) {
        M2C_FIELD(executing_803509A0, s32 *, 0xC) = -1;
        __DVDStoreErrorCode(0x01234568, executing_803509A0);
        DVDReset();
        cbForStateError_800CE514(0);
        return;
    }
    if (arg0 & 1) {
        lbl_803509E4 = &fn_800CE3F4;
        lbl_803509D4 = 0;
        if ((u32) M2C_FIELD(bootInfo_803509A8, u32 *, 0x3C) < (u32) M2C_FIELD(&BB2_8031C720, u32 *, 8)) {
            fn_800C5B7C(&lbl_8034FF84, 0x287, &lbl_802A6F54);
        }
        DVDLowRead(M2C_FIELD(bootInfo_803509A8, s32 *, 0x38), (M2C_FIELD(&BB2_8031C720, u32 *, 8) + 0x1F) & 0xFFFFFFE0, M2C_FIELD(&BB2_8031C720, s32 *, 4), &fn_800CE488, bootInfo_803509A8);
        return;
    }
    fn_800CD634(&fn_800CE6D0);
}

void fn_800CEFD0(u32 arg0) {
    M2C_UNK (*temp_r12)(M2C_UNK, M2C_UNK *);
    M2C_UNK *temp_r31;
    s32 var_r4;

    if (arg0 == 0x10) {
        M2C_FIELD(executing_803509A0, s32 *, 0xC) = -1;
        __DVDStoreErrorCode(0x01234568, executing_803509A0);
        DVDReset();
        cbForStateError_800CE514(0);
        return;
    }
    if (arg0 & 1) {
        var_r4 = 0;
        lbl_803509D4 = 0;
        if ((u32) lbl_803509C0 != 0U) {
            ResumeFromHere_803509C8 = 0;
            temp_r31 = executing_803509A0;
            lbl_803509C0 = 0U;
            M2C_FIELD(temp_r31, s32 *, 0xC) = 0xA;
            executing_803509A0 = &DummyCommandBlock_8031C760;
            temp_r12 = M2C_FIELD(temp_r31, M2C_UNK (**)(M2C_UNK, M2C_UNK *), 0x28);
            if (temp_r12 != NULL) {
                temp_r12(-3, temp_r31);
            }
            if (((M2C_UNK (*)(M2C_UNK, M2C_UNK *)) lbl_803509C4) != NULL) {
                /* draft: did not compile: lbl_803509C4(0, temp_r31); */
            }
            var_r4 = 1;
            stateReady_800CF388();
        }
        if (var_r4 == 0) {
            M2C_FIELD(executing_803509A0, s32 *, 0xC) = 1;
            stateBusy_800CF5B8(executing_803509A0);
        }
    } else {
        fn_800CD634(&fn_800CE6D0);
    }
}

static void AlarmHandler(void) {
    DVDReset();
    DCInvalidateRange(&lbl_8031C740, 0x20);
    /* draft: did not compile: lbl_803509E4 = fn_800CF1DC; */
    fn_800CF1DC();
}

void fn_800CF110(void) {
    M2C_UNK (*temp_r12)(M2C_UNK);
    void *temp_r4;

    if ((s32) CurrCommand_803509BC != 0xD) {
        if ((s32) CurrCommand_803509BC < 0xD) {
            if ((s32) CurrCommand_803509BC < 6) {
                if ((s32) CurrCommand_803509BC < 4) {
                    goto block_10;
                }
                goto block_7;
            }
            goto block_10;
        }
        if ((s32) CurrCommand_803509BC != 0xF) {
block_10:
            DVDReset();
            OSCreateAlarm(&BB2_8031C720 + 0x70);
            OSSetAlarm(&BB2_8031C720 + 0x70, 0x10624DD3, 0, (*(u32 *)0x800000F8 / 4000) * 0x47E, AlarmHandler);
            return;
        }
        goto block_7;
    }
block_7:
    __DVDClearWaitingQueue();
    temp_r4 = executing_803509A0;
    executing_803509A0 = &BB2_8031C720 + 0x40;
    temp_r12 = M2C_FIELD(temp_r4, M2C_UNK (**)(M2C_UNK), 0x28);
    if (temp_r12 != NULL) {
        temp_r12(-4);
    }
    stateReady_800CF388();
}

void fn_800CF1DC(void) {
    DVDLowReadDiskID(&lbl_8031C740, (u16)fn_800CF20C);
}

void fn_800CF20C(u32 arg0) {
    if (arg0 == 0x10) {
        M2C_FIELD(executing_803509A0, s32 *, 0xC) = -1;
        __DVDStoreErrorCode(0x01234568, executing_803509A0);
        DVDReset();
        cbForStateError_800CE514(0);
        return;
    }
    if (arg0 & 1) {
        lbl_803509D4 = 0;
        fn_800CEBE4();
        return;
    }
    fn_800CD634(&fn_800CE6D0);
}

void fn_800CF27C(void) {
    DVDLowWaitCoverClose((u16)cbForStateMotorStopped);
}

static void cbForStateMotorStopped(void) {
    M2C_UNK (*temp_r12)(M2C_UNK);
    void *temp_r4;

    *(s32 *)0xCC006004 = 0;
    M2C_FIELD(executing_803509A0, s32 *, 0xC) = 3;
    if ((s32) CurrCommand_803509BC != 0xD) {
        if ((s32) CurrCommand_803509BC < 0xD) {
            if ((s32) CurrCommand_803509BC < 6) {
                if ((s32) CurrCommand_803509BC < 4) {
                    goto block_10;
                }
                goto block_7;
            }
            goto block_10;
        }
        if ((s32) CurrCommand_803509BC != 0xF) {
block_10:
            DVDReset();
            OSCreateAlarm(&BB2_8031C720 + 0x70);
            OSSetAlarm(&BB2_8031C720 + 0x70, 0x10624DD3, 0, (*(u32 *)0x800000F8 / 4000) * 0x47E, AlarmHandler);
            return;
        }
        goto block_7;
    }
block_7:
    __DVDClearWaitingQueue();
    temp_r4 = executing_803509A0;
    executing_803509A0 = &BB2_8031C720 + 0x40;
    temp_r12 = M2C_FIELD(temp_r4, M2C_UNK (**)(M2C_UNK), 0x28);
    if (temp_r12 != NULL) {
        temp_r12(-4);
    }
    stateReady_800CF388();
}

void stateReady_800CF388(void) {
    M2C_UNK (*temp_r12)(M2C_UNK);
    M2C_UNK (*temp_r12_2)(M2C_UNK);
    void *temp_r4;
    void *temp_r4_2;

    if ((u16)__DVDCheckWaitingQueue(&BB2_8031C720) == 0) {
        executing_803509A0 = NULL;
        return;
    }
    if ((s32) PauseFlag_803509AC != 0) {
        PausingFlag_803509B0 = 1;
        executing_803509A0 = NULL;
        return;
    }
    executing_803509A0 = __DVDPopWaitingQueue();
    if ((s32) FatalErrorFlag_803509B8 != 0) {
        temp_r4 = executing_803509A0;
        M2C_FIELD(executing_803509A0, s32 *, 0xC) = -1;
        executing_803509A0 = &BB2_8031C720 + 0x40;
        temp_r12 = M2C_FIELD(temp_r4, M2C_UNK (**)(M2C_UNK), 0x28);
        if (temp_r12 != NULL) {
            temp_r12(-1);
        }
        stateReady_800CF388();
        return;
    }
    CurrCommand_803509BC = M2C_FIELD(executing_803509A0, s32 *, 8);
    if ((u32) ResumeFromHere_803509C8 != 0U) {
        switch ((s32) ResumeFromHere_803509C8) {    /* irregular */
        case 2:
            M2C_FIELD(executing_803509A0, s32 *, 0xC) = 0xB;
            DVDLowWaitCoverClose(cbForStateMotorStopped);
            break;
        case 3:
            M2C_FIELD(executing_803509A0, s32 *, 0xC) = 4;
            DVDLowWaitCoverClose(cbForStateMotorStopped);
            break;
        case 4:
            M2C_FIELD(executing_803509A0, s32 *, 0xC) = 5;
            DVDLowWaitCoverClose(cbForStateMotorStopped);
            break;
        case -1:        default:
            M2C_FIELD(executing_803509A0, s32 *, 0xC) = 3;
            if ((s32) CurrCommand_803509BC != 0xD) {
                if ((s32) CurrCommand_803509BC < 0xD) {
                    if ((s32) CurrCommand_803509BC < 6) {
                        if ((s32) CurrCommand_803509BC < 4) {
                            goto block_31;
                        }
                        goto block_28;
                    }
                    goto block_31;
                }
                if ((s32) CurrCommand_803509BC != 0xF) {
block_31:
                    DVDReset();
                    OSCreateAlarm(&BB2_8031C720 + 0x70);
                    OSSetAlarm(&BB2_8031C720 + 0x70, 0x10624DD3, 0, (*(u32 *)0x800000F8 / 4000) * 0x47E, AlarmHandler);
                } else {
                    goto block_28;
                }
            } else {
block_28:
                temp_r4_2 = executing_803509A0;
                executing_803509A0 = &BB2_8031C720 + 0x40;
                __DVDClearWaitingQueue();
                temp_r12_2 = M2C_FIELD(temp_r4_2, M2C_UNK (**)(M2C_UNK), 0x28);
                if (temp_r12_2 != NULL) {
                    temp_r12_2(-4);
                }
                stateReady_800CF388();
            }
            break;
        case 5:
            M2C_FIELD(executing_803509A0, s32 *, 0xC) = -1;
            __DVDStoreErrorCode((long)(CancelLastError_803509CC), (void *)(0));
            DVDLowStopMotor(&cbForStateError_800CE514);
            break;
        }
        ResumeFromHere_803509C8 = 0U;
        return;
    }
    M2C_FIELD(executing_803509A0, s32 *, 0xC) = 1;
    stateBusy_800CF5B8(executing_803509A0);
}

void stateBusy_800CF5B8() { } /* draft: stub */

#pragma push
#pragma dont_inline on
void fn_800CF8D8(u32 arg0) {
    M2C_UNK (*temp_r12)(M2C_UNK, void *);
    M2C_UNK (*temp_r12_10)(s32);
    M2C_UNK (*temp_r12_2)(M2C_UNK, void *);
    M2C_UNK (*temp_r12_3)(M2C_UNK, void *);
    M2C_UNK (*temp_r12_4)(s32);
    M2C_UNK (*temp_r12_5)();
    M2C_UNK (*temp_r12_6)(M2C_UNK);
    M2C_UNK (*temp_r12_7)(M2C_UNK);
    M2C_UNK (*temp_r12_8)(M2C_UNK);
    M2C_UNK (*temp_r12_9)(M2C_UNK, void *);
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;
    s32 var_r4;
    void *temp_r30;
    void *temp_r30_2;
    void *temp_r30_3;
    void *temp_r30_4;
    void *temp_r3;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;

    if (arg0 == 0x10) {
        M2C_FIELD(executing_803509A0, s32 *, 0xC) = -1;
        __DVDStoreErrorCode(0x01234568, executing_803509A0);
        DVDReset();
        cbForStateError_800CE514(0);
        return;
    }
    if ((CurrCommand_803509BC == 3U) || ((u32) CurrCommand_803509BC == 0xFU)) {
        if (arg0 & 2) {
            M2C_FIELD(executing_803509A0, s32 *, 0xC) = -1;
            __DVDStoreErrorCode(0x01234567, executing_803509A0);
            DVDLowStopMotor(cbForStateError_800CE514);
            return;
        }
        lbl_803509D4 = 0;
        if ((u32) CurrCommand_803509BC == 0xFU) {
            ResetRequired_803509D8 = 1;
        }
        if ((u32) lbl_803509C0 != 0U) {
            temp_r30 = executing_803509A0;
            ResumeFromHere_803509C8 = 7;
            lbl_803509C0 = 0U;
            executing_803509A0 = &BB2_8031C720 + 0x40;
            M2C_FIELD(temp_r30, s32 *, 0xC) = 0xA;
            temp_r12 = M2C_FIELD(temp_r30, M2C_UNK (**)(M2C_UNK, void *), 0x28);
            if (temp_r12 != NULL) {
                temp_r12(-3, temp_r30);
            }
            if (((M2C_UNK (*)(M2C_UNK, void *)) lbl_803509C4) != NULL) {
                /* draft: did not compile: lbl_803509C4(0, temp_r30); */
            }
            stateReady_800CF388();
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        if (var_r0 == 0) {
            M2C_FIELD(executing_803509A0, s32 *, 0xC) = 7;
            DVDLowWaitCoverClose(cbForStateMotorStopped, executing_803509A0);
        }
    } else {
        if (((u32) CurrCommand_803509BC == 1U) || ((u32) (CurrCommand_803509BC - 4) <= 1U) || ((u32) CurrCommand_803509BC == 0xEU)) {
            var_r0_2 = 1;
        } else if ((u32) CurrCommand_803509BC == (u32) lbl_8034FF8C) {
            var_r0_2 = 1;
        } else {
            var_r0_2 = 0;
        }
        if (var_r0_2 != 0) {
            M2C_FIELD(executing_803509A0, u32 *, 0x20) = (u32) (M2C_FIELD(executing_803509A0, u32 *, 0x20) + (M2C_FIELD(executing_803509A0, u32 *, 0x1C) - M2C_FIELD((void *)0xCC006000, s32 *, 0x18)));
        }
        if (arg0 & 8) {
            temp_r30_2 = executing_803509A0;
            lbl_803509C0 = 0U;
            executing_803509A0 = &BB2_8031C720 + 0x40;
            M2C_FIELD(temp_r30_2, s32 *, 0xC) = 0xA;
            temp_r12_2 = M2C_FIELD(temp_r30_2, M2C_UNK (**)(M2C_UNK, void *), 0x28);
            if (temp_r12_2 != NULL) {
                temp_r12_2(-3, temp_r30_2);
            }
            if (((M2C_UNK (*)(M2C_UNK, void *)) lbl_803509C4) != NULL) {
                /* draft: did not compile: lbl_803509C4(0, temp_r30_2); */
            }
            stateReady_800CF388();
            return;
        }
        if (arg0 & 1) {
            var_r4 = 0;
            lbl_803509D4 = 0;
            if ((u32) lbl_803509C0 != 0U) {
                ResumeFromHere_803509C8 = 0;
                temp_r30_3 = executing_803509A0;
                lbl_803509C0 = 0U;
                M2C_FIELD(temp_r30_3, s32 *, 0xC) = 0xA;
                temp_r12_3 = M2C_FIELD(temp_r30_3, M2C_UNK (**)(M2C_UNK, void *), 0x28);
                executing_803509A0 = &BB2_8031C720 + 0x40;
                if (temp_r12_3 != NULL) {
                    temp_r12_3(-3, temp_r30_3);
                }
                if (((M2C_UNK (*)(M2C_UNK, void *)) lbl_803509C4) != NULL) {
                    /* draft: did not compile: lbl_803509C4(0, temp_r30_3); */
                }
                stateReady_800CF388();
                var_r4 = 1;
            }
            if (var_r4 == 0) {
                if (((u32) CurrCommand_803509BC == 1U) || ((u32) (CurrCommand_803509BC - 4) <= 1U) || ((u32) CurrCommand_803509BC == 0xEU)) {
                    var_r0_3 = 1;
                } else if ((u32) CurrCommand_803509BC == (u32) lbl_8034FF8C) {
                    var_r0_3 = 1;
                } else {
                    var_r0_3 = 0;
                }
                if (var_r0_3 != 0) {
                    temp_r3 = executing_803509A0;
                    if ((u32) M2C_FIELD(temp_r3, u32 *, 0x20) != (u32) M2C_FIELD(temp_r3, u32 *, 0x14)) {
                        stateBusy_800CF5B8();
                        return;
                    }
                    executing_803509A0 = &BB2_8031C720 + 0x40;
                    M2C_FIELD(temp_r3, s32 *, 0xC) = 0;
                    temp_r12_4 = M2C_FIELD(temp_r3, M2C_UNK (**)(s32), 0x28);
                    if (temp_r12_4 != NULL) {
                        temp_r12_4(M2C_FIELD(temp_r3, s32 *, 0x20));
                    }
                    stateReady_800CF388();
                    return;
                }
                if ((u32) (CurrCommand_803509BC - 9) <= 3U) {
                    var_r0_4 = 1;
                } else if ((u32) CurrCommand_803509BC == (u32) M2C_FIELD(&lbl_802A6FC8, u32 *, 0)) {
                    var_r0_4 = 1;
                } else if ((u32) CurrCommand_803509BC == (u32) M2C_FIELD(&lbl_802A6FC8, u32 *, 4)) {
                    var_r0_4 = 1;
                } else if ((u32) CurrCommand_803509BC == (u32) M2C_FIELD((&lbl_802A6FC8 + 4), u32 *, 4)) {
                    var_r0_4 = 1;
                } else {
                    var_r0_4 = 0;
                }
                if (var_r0_4 != 0) {
                    if (((u32) CurrCommand_803509BC == 0xBU) || ((u32) CurrCommand_803509BC == 0xAU)) {

                    }
                    temp_r4 = executing_803509A0;
                    executing_803509A0 = &BB2_8031C720 + 0x40;
                    M2C_FIELD(temp_r4, s32 *, 0xC) = 0;
                    temp_r12_5 = M2C_FIELD(temp_r4, M2C_UNK (**)(), 0x28);
                    if (temp_r12_5 != NULL) {
                        temp_r12_5();
                    }
                    stateReady_800CF388();
                    return;
                }
                if ((u32) CurrCommand_803509BC == 6U) {
                    temp_r4_2 = executing_803509A0;
                    if ((u32) M2C_FIELD(temp_r4_2, u32 *, 0x1C) == 0U) {
                        if (0 /* draft: did not compile */) {
                            executing_803509A0 = &BB2_8031C720 + 0x40;
                            M2C_FIELD(temp_r4_2, s32 *, 0xC) = 9;
                            temp_r12_6 = M2C_FIELD(temp_r4_2, M2C_UNK (**)(M2C_UNK), 0x28);
                            if (temp_r12_6 != NULL) {
                                temp_r12_6(-2);
                            }
                            stateReady_800CF388();
                            return;
                        }
                        lbl_803509B4 = 0;
                        M2C_FIELD(temp_r4_2, s32 *, 0x1C) = 1;
                        DVDLowAudioStream(0, M2C_FIELD(executing_803509A0, u32 *, 0x14), M2C_FIELD(executing_803509A0, s32 *, 0x10), fn_800CF8D8);
                        return;
                    }
                    executing_803509A0 = &BB2_8031C720 + 0x40;
                    M2C_FIELD(temp_r4_2, s32 *, 0xC) = 0;
                    temp_r12_7 = M2C_FIELD(temp_r4_2, M2C_UNK (**)(M2C_UNK), 0x28);
                    if (temp_r12_7 != NULL) {
                        temp_r12_7(0);
                    }
                    stateReady_800CF388();
                    return;
                }
                temp_r4_3 = executing_803509A0;
                executing_803509A0 = &BB2_8031C720 + 0x40;
                M2C_FIELD(temp_r4_3, s32 *, 0xC) = 0;
                temp_r12_8 = M2C_FIELD(temp_r4_3, M2C_UNK (**)(M2C_UNK), 0x28);
                if (temp_r12_8 != NULL) {
                    temp_r12_8(0);
                }
                stateReady_800CF388();
            }
        } else {
            if ((u32) CurrCommand_803509BC == 0xEU) {
                M2C_FIELD(executing_803509A0, s32 *, 0xC) = -1;
                __DVDStoreErrorCode(0x01234567, executing_803509A0);
                DVDLowStopMotor(cbForStateError_800CE514);
                return;
            }
            if ((((u32) CurrCommand_803509BC == 1U) || ((u32) CurrCommand_803509BC == 4U) || ((u32) CurrCommand_803509BC == 5U) || ((u32) CurrCommand_803509BC == 0xEU)) && (temp_r30_4 = executing_803509A0, (((u32) M2C_FIELD(temp_r30_4, u32 *, 0x20) == (u32) M2C_FIELD(temp_r30_4, u32 *, 0x14)) != 0))) {
                if ((u32) lbl_803509C0 != 0U) {
                    ResumeFromHere_803509C8 = 0;
                    lbl_803509C0 = 0U;
                    executing_803509A0 = &BB2_8031C720 + 0x40;
                    M2C_FIELD(temp_r30_4, s32 *, 0xC) = 0xA;
                    temp_r12_9 = M2C_FIELD(temp_r30_4, M2C_UNK (**)(M2C_UNK, void *), 0x28);
                    if (temp_r12_9 != NULL) {
                        temp_r12_9(-3, temp_r30_4);
                    }
                    if (((M2C_UNK (*)(M2C_UNK, void *)) lbl_803509C4) != NULL) {
                        /* draft: did not compile: lbl_803509C4(0, temp_r30_4); */
                    }
                    var_r0_5 = 1;
                    stateReady_800CF388();
                } else {
                    var_r0_5 = 0;
                }
                if (var_r0_5 == 0) {
                    temp_r4_4 = executing_803509A0;
                    executing_803509A0 = &BB2_8031C720 + 0x40;
                    M2C_FIELD(temp_r4_4, s32 *, 0xC) = 0;
                    temp_r12_10 = M2C_FIELD(temp_r4_4, M2C_UNK (**)(s32), 0x28);
                    if (temp_r12_10 != NULL) {
                        temp_r12_10(M2C_FIELD(temp_r4_4, s32 *, 0x20));
                    }
                    stateReady_800CF388();
                }
            } else {
                fn_800CD634(&fn_800CE6D0);
            }
        }
    }
}
#pragma pop

s32 DVDReadAbsAsyncPrio(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_r31;
    s32 temp_r3_2;
    u32 temp_r3;

    M2C_FIELD(arg0, u32 *, 8) = 1U;
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    M2C_FIELD(arg0, s32 *, 0x14) = arg2;
    M2C_FIELD(arg0, s32 *, 0x10) = arg3;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = arg4;
    if (((s32) autoInvalidation_8034FF7C != 0) && ((temp_r3 = M2C_FIELD(arg0, u32 *, 8), ((temp_r3 == 1U) != 0)) || ((u32) (temp_r3 - 4) <= 1U) || (temp_r3 == 0xEU))) {
        DCInvalidateRange(M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, s32 *, 0x14));
    }
    temp_r3_2 = OSDisableInterrupts();
    M2C_FIELD(arg0, s32 *, 0xC) = 2;
    temp_r31 = __DVDPushWaitingQueue(arg5, arg0);
    if (((u32) executing_803509A0 == 0U) && ((s32) PauseFlag_803509AC == 0)) {
        stateReady_800CF388();
    }
    OSRestoreInterrupts(temp_r3_2);
    return temp_r31;
}

s32 DVDReadAbsAsyncForBS(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r31;
    s32 temp_r3_2;
    u32 temp_r3;

    M2C_FIELD(arg0, u32 *, 8) = 4U;
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    M2C_FIELD(arg0, s32 *, 0x14) = arg2;
    M2C_FIELD(arg0, s32 *, 0x10) = arg3;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = arg4;
    if (((s32) autoInvalidation_8034FF7C != 0) && ((temp_r3 = M2C_FIELD(arg0, u32 *, 8), ((temp_r3 == 1U) != 0)) || ((u32) (temp_r3 - 4) <= 1U) || (temp_r3 == 0xEU))) {
        DCInvalidateRange(M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, s32 *, 0x14));
    }
    temp_r3_2 = OSDisableInterrupts();
    M2C_FIELD(arg0, s32 *, 0xC) = 2;
    temp_r31 = __DVDPushWaitingQueue(2, arg0);
    if (((u32) executing_803509A0 == 0U) && ((s32) PauseFlag_803509AC == 0)) {
        stateReady_800CF388();
    }
    OSRestoreInterrupts(temp_r3_2);
    return temp_r31;
}

s32 DVDReadDiskID(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r31;
    s32 temp_r3_2;
    u32 temp_r3;

    M2C_FIELD(arg0, u32 *, 8) = 5U;
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    M2C_FIELD(arg0, s32 *, 0x14) = 0x20;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = arg2;
    if (((s32) autoInvalidation_8034FF7C != 0) && ((temp_r3 = M2C_FIELD(arg0, u32 *, 8), ((temp_r3 == 1U) != 0)) || ((u32) (temp_r3 - 4) <= 1U) || (temp_r3 == 0xEU))) {
        DCInvalidateRange(M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, s32 *, 0x14));
    }
    temp_r3_2 = OSDisableInterrupts();
    M2C_FIELD(arg0, s32 *, 0xC) = 2;
    temp_r31 = __DVDPushWaitingQueue(2, arg0);
    if (((u32) executing_803509A0 == 0U) && ((s32) PauseFlag_803509AC == 0)) {
        stateReady_800CF388();
    }
    OSRestoreInterrupts(temp_r3_2);
    return temp_r31;
}

s32 DVDCancelStreamAsync(void *arg0, s32 arg1) {
    s32 temp_r31;
    s32 temp_r3_2;
    u32 temp_r3;

    M2C_FIELD(arg0, u32 *, 8) = 7U;
    M2C_FIELD(arg0, s32 *, 0x28) = arg1;
    if (((s32) autoInvalidation_8034FF7C != 0) && ((temp_r3 = M2C_FIELD(arg0, u32 *, 8), ((temp_r3 == 1U) != 0)) || ((u32) (temp_r3 - 4) <= 1U) || (temp_r3 == 0xEU))) {
        DCInvalidateRange(M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, s32 *, 0x14));
    }
    temp_r3_2 = OSDisableInterrupts();
    M2C_FIELD(arg0, s32 *, 0xC) = 2;
    temp_r31 = __DVDPushWaitingQueue(1, arg0);
    if (((u32) executing_803509A0 == 0U) && ((s32) PauseFlag_803509AC == 0)) {
        stateReady_800CF388();
    }
    OSRestoreInterrupts(temp_r3_2);
    return temp_r31;
}

s32 DVDInquiryAsync(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r31;
    s32 temp_r3_2;
    u32 temp_r3;

    M2C_FIELD(arg0, u32 *, 8) = 0xEU;
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    M2C_FIELD(arg0, s32 *, 0x14) = 0x20;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = arg2;
    if (((s32) autoInvalidation_8034FF7C != 0) && ((temp_r3 = M2C_FIELD(arg0, u32 *, 8), ((temp_r3 == 1U) != 0)) || ((u32) (temp_r3 - 4) <= 1U) || (temp_r3 == 0xEU))) {
        DCInvalidateRange(M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, s32 *, 0x14));
    }
    temp_r3_2 = OSDisableInterrupts();
    M2C_FIELD(arg0, s32 *, 0xC) = 2;
    temp_r31 = __DVDPushWaitingQueue(2, arg0);
    if (((u32) executing_803509A0 == 0U) && ((s32) PauseFlag_803509AC == 0)) {
        stateReady_800CF388();
    }
    OSRestoreInterrupts(temp_r3_2);
    return temp_r31;
}

void DVDReset(void) {
    DVDLowReset();
    *(s32 *)0xCC006000 = 0x2A;
    M2C_FIELD(((s32 *)0xCC000000 + 0x6000), s32 *, 4) = (s32) *(s32 *)0xCC006004;
    ResetRequired_803509D8 = 0;
    ResumeFromHere_803509C8 = 0;
}

s32 DVDGetCommandBlockStatus(void *arg0) {
    s32 var_r31;

    OSDisableInterrupts();
    if ((M2C_FIELD(arg0, s32 *, 0xC)) == 3) {
        var_r31 = 1;
    } else {
        var_r31 = (M2C_FIELD(arg0, s32 *, 0xC));
    }
    OSRestoreInterrupts((long)(0));
    return var_r31;
}

#pragma push
#pragma peephole off
s32 DVDGetDriveStatus(void) {
    s32 temp_r30;
    s32 var_r31;
    void *temp_r31;

    temp_r30 = OSDisableInterrupts();
    if ((s32) FatalErrorFlag_803509B8 != 0) {
        var_r31 = -1;
    } else if ((s32) PausingFlag_803509B0 != 0) {
        var_r31 = 8;
    } else {
        temp_r31 = executing_803509A0;
        if (temp_r31 == NULL) {
            var_r31 = 0;
        } else if (temp_r31 == &DummyCommandBlock_8031C760) {
            var_r31 = 0;
        } else {
            OSDisableInterrupts();
            var_r31 = M2C_FIELD(temp_r31, s32 *, 0xC);
            if (var_r31 == 3) {
                var_r31 = 1;
            }
            OSRestoreInterrupts((long)(0));
        }
    }
    OSRestoreInterrupts(temp_r30);
    return var_r31;
}
#pragma pop

s32 fn_800D0458(s32 arg0) {
    s32 temp_r0;

    temp_r0 = autoInvalidation_8034FF7C;
    autoInvalidation_8034FF7C = arg0;
    return temp_r0;
}

void DVDResume(void) {
    s32 temp_r3;

    temp_r3 = OSDisableInterrupts();
    PauseFlag_803509AC = 0;
    if ((s32) PausingFlag_803509B0 != 0) {
        PausingFlag_803509B0 = 0;
        stateReady_800CF388();
    }
    OSRestoreInterrupts(temp_r3);
}

void DVDCancelAsync() { } /* draft: stub */
