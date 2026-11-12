/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

s32 OSDisableInterrupts();
M2C_UNK OSRestoreInterrupts();
M2C_UNK OSSleepThread(M2C_UNK *);
extern M2C_UNK __DVDThreadQueue;
M2C_UNK OSWakeupThread(M2C_UNK *);
M2C_UNK stateReady_800CF388();
extern s32 PauseFlag_803509AC;
extern s32 PausingFlag_803509B0;
extern void *executing_803509A0;
extern u32 lbl_803509C0;
extern M2C_UNK WaitingQueue_8031C7B8;
extern M2C_UNK lbl_802A7080;
void *__OSLockSramEx();
M2C_UNK __OSUnlockSramEx(M2C_UNK);
s32 strncmp();
M2C_UNK DVDReset();
extern void *bb2_803509F4;
extern s32 idTmp_803509F8;
extern s32 lbl_803509F0;
s32 DVDGetDriveStatus();
M2C_UNK OSGetArenaHi();
M2C_UNK OSReport();
M2C_UNK OSSetArenaHi(s32);
extern M2C_UNK bb2Buf_8031C7D8;
M2C_UNK OSClearContext(M2C_UNK *, s32);
M2C_UNK OSSetCurrentContext(M2C_UNK *);
M2C_UNK SIRefreshSamplingRate();
u32 fn_800D2A30();
u64 __shl2i(M2C_UNK, M2C_UNK, s32, s32);
u64 __shr2u(s32, s32, M2C_UNK);
extern s32 CurrTvMode_80350A44;
extern M2C_UNK lbl_8031C848;
extern s32 lbl_80350A04;
extern u32 lbl_80350A08;
extern M2C_UNK lbl_80350A0C;
extern u32 lbl_80350A30;
extern s32 lbl_80350A38;
extern s32 lbl_80350A3C;
extern s32 lbl_80350A40;
extern s32 lbl_80350A48;
extern s32 lbl_80350A4C;
extern s32 lbl_80350A14;
extern s32 lbl_80350A18;
M2C_UNK OSInitThreadQueue(M2C_UNK *, u16, M2C_UNK, s16, M2C_UNK);
M2C_UNK OSRegisterVersion(s32);
void *__OSLockSram(M2C_UNK, s16, u16, u16);
M2C_UNK __OSUnlockSram(M2C_UNK);
M2C_UNK __OSUnmaskInterrupts(M2C_UNK);
extern M2C_UNK lbl_802A7138;
extern s32 lbl_8034FFA0;
extern s32 lbl_80350A00;
extern s32 lbl_80350A1C;
extern s16 lbl_80350A20;
extern s16 lbl_80350A22;
extern s32 lbl_80350A24;
extern s32 lbl_80350A28;
extern s32 lbl_80350A2C;
extern s32 lbl_803509C4;
extern s32 lbl_803509E8;
extern s32 block;

s32 DVDCancel(void *arg0);
void fn_800D07E0(void);
s32 fn_800D0804(void);
void DVDCheckDisk();
void __DVDPrepareResetAsync(M2C_UNK (*arg0)(M2C_UNK, M2C_UNK));
void __DVDClearWaitingQueue(void);
s32 __DVDPushWaitingQueue(s32 arg0, M2C_UNK *arg1);
void *__DVDPopWaitingQueue(void);
s32 __DVDCheckWaitingQueue(void);
s32 __DVDDequeueWaitingQueue(void *arg0);
static u8 ErrorCode2Num(u32 arg0);
void __DVDStoreErrorCode(u32 arg0);
s32 DVDCompareDiskID(void *arg0, void *arg1);
void __DVDPrintFatalMessage(void);
static void cb(s32 arg0, s32 arg1);
void __fstLoad(void);
void fn_800D1118(M2C_UNK *arg1);
s32 VISetPreRetraceCallback(s32 arg0);
s32 VISetPostRetraceCallback(s32 arg0);
void fn_800D13D0();
void fn_800D1470(u32 arg0);
void VIInit(void);
void VIWaitForRetrace(void);
void fn_800D1B74(void *arg0, u32 *arg1, u32 *arg2, u32 *arg3, u32 *arg4);
void fn_800D1E48(u16 arg0, u16 arg1, u8 arg2, u16 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp8);

s32 DVDCancel(void *arg0) {
    s32 temp_r31;
    s32 temp_r3;
    u32 temp_r3_2;

    if (DVDCancelAsync((u16)fn_800D07E0) == 0) {
        return -1;
    }
    temp_r31 = OSDisableInterrupts();
loop_3:
    temp_r3 = M2C_FIELD(arg0, s32 *, 0xC);
    if (((u32) (temp_r3 + 1) > 1U) && (temp_r3 != 0xA) && ((temp_r3 != 3) || ((temp_r3_2 = M2C_FIELD(arg0, u32 *, 8), (((u32) (temp_r3_2 - 4) > 1U) != 0)) && (temp_r3_2 != 0xDU) && (temp_r3_2 != 0xFU)))) {
        OSSleepThread(&__DVDThreadQueue);
        goto loop_3;
    }
    OSRestoreInterrupts(temp_r31);
    return 0;
}

void fn_800D07E0(void) {
    OSWakeupThread(&__DVDThreadQueue);
}

s32 fn_800D0804(void) {
    return 0x80000000;
}

void DVDCheckDisk() { } /* draft: stub */

void __DVDPrepareResetAsync(M2C_UNK (*arg0)(M2C_UNK, M2C_UNK)) {
    s32 temp_r29;
    s32 temp_r31;
    s32 temp_r3;

    temp_r29 = OSDisableInterrupts();
    __DVDClearWaitingQueue();
    if ((u32) lbl_803509C0 != 0U) {
        /* draft: did not compile: lbl_803509C4 = arg0; */
    } else {
        if ((void *) executing_803509A0 != NULL) {
            M2C_FIELD(executing_803509A0, s32 *, 0x28) = 0;
        }
        temp_r31 = OSDisableInterrupts();
        OSDisableInterrupts();
        PauseFlag_803509AC = 1;
        if ((void *) executing_803509A0 == NULL) {
            PausingFlag_803509B0 = 1;
        }
        OSRestoreInterrupts((long)(0));
loop_8:
        if (__DVDPopWaitingQueue() != 0U) {
            DVDCancelAsync(NULL);
            goto loop_8;
        }
        if ((void *) executing_803509A0 != NULL) {
            DVDCancelAsync(arg0);
        } else if (arg0 != NULL) {
            arg0(0, 0);
        }
        temp_r3 = OSDisableInterrupts();
        PauseFlag_803509AC = 0;
        if ((s32) PausingFlag_803509B0 != 0) {
            PausingFlag_803509B0 = 0;
            stateReady_800CF388();
        }
        OSRestoreInterrupts(temp_r3);
        OSRestoreInterrupts(temp_r31);
    }
    OSRestoreInterrupts(temp_r29);
}

void __DVDClearWaitingQueue(void) {
    void *temp_r4;
    void *temp_r5;
    void *temp_r3;

    M2C_FIELD(&WaitingQueue_8031C7B8, M2C_UNK **, 0) = &WaitingQueue_8031C7B8;
    temp_r5 = &WaitingQueue_8031C7B8 + 8;
    temp_r4 = &WaitingQueue_8031C7B8 + 0x10;
    temp_r3 = &WaitingQueue_8031C7B8 + 0x18;
    M2C_FIELD(&WaitingQueue_8031C7B8, void **, 8) = temp_r5;
    M2C_FIELD(temp_r3, void **, 4) = temp_r3;
    M2C_FIELD(temp_r5, void **, 4) = temp_r5;
    M2C_FIELD(&WaitingQueue_8031C7B8, void **, 0x10) = temp_r4;
    M2C_FIELD(temp_r4, void **, 4) = temp_r4;
    M2C_FIELD(&WaitingQueue_8031C7B8, void **, 0x18) = temp_r3;
    M2C_FIELD(&WaitingQueue_8031C7B8, M2C_UNK **, 4) = &WaitingQueue_8031C7B8;
}

s32 __DVDPushWaitingQueue(s32 arg0, M2C_UNK *arg1) {
    M2C_UNK *temp_r4;
    M2C_UNK *temp_r5;

    OSDisableInterrupts();
    temp_r5 = &WaitingQueue_8031C7B8 + (arg0 * 8);
    temp_r4 = M2C_FIELD(temp_r5, M2C_UNK **, 4);
    /* draft: did not compile: *temp_r4 = arg1; */
    M2C_FIELD(temp_r5, M2C_UNK **, 4) = arg1;
    M2C_FIELD(arg1, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(temp_r5, M2C_UNK **, 4);
    M2C_FIELD(arg1, M2C_UNK **, 0) = temp_r5;
    OSRestoreInterrupts(temp_r4, temp_r5);
    return 1;
}

void *__DVDPopWaitingQueue(void) {
    s32 var_ctr;
    s32 var_r31;
    u32 *var_r4;
    void **temp_r5;
    void *temp_r31;
    void *temp_r4;

    OSDisableInterrupts();
    var_ctr = 4;
    /* draft: did not compile: var_r4 = &WaitingQueue_8031C7B8; */
    var_r31 = 0;
loop_1:
    if (0 /* draft: did not compile */) {
        OSRestoreInterrupts();
        OSDisableInterrupts();
        /* draft: did not compile: temp_r5 = &WaitingQueue_8031C7B8 + (var_r31 * 8); */
        temp_r31 = *temp_r5;
        *temp_r5 = M2C_FIELD(temp_r31, void **, 0);
        temp_r4 = M2C_FIELD(temp_r31, void **, 0);
        M2C_FIELD(temp_r4, void ***, 4) = temp_r5;
        OSRestoreInterrupts(temp_r4, temp_r5);
        M2C_FIELD(temp_r31, void **, 0) = NULL;
        M2C_FIELD(temp_r31, s32 *, 4) = 0;
        return temp_r31;
    }
    var_r4 += 8;
    var_r31 += 1;
    var_ctr -= 1;
    if (var_ctr == 0) {
        OSRestoreInterrupts();
        return NULL;
    }
    goto loop_1;
}

s32 __DVDCheckWaitingQueue(void) {
    u8 var_ctr;
    u32 *var_r4;

    OSDisableInterrupts();
    var_ctr = 4;
    /* draft: did not compile: var_r4 = &WaitingQueue_8031C7B8; */
loop_1:
    if (0 /* draft: did not compile */) {
        OSRestoreInterrupts();
        return 1;
    }
    var_r4 += 8;
    var_ctr -= 1;
    switch (var_ctr) {
    case 0:
            OSRestoreInterrupts();
            return 0;
        break;
    }
    goto loop_1;
}

s32 __DVDDequeueWaitingQueue(void *arg0) {
    void *temp_r5;
    void **temp_r4;

    OSDisableInterrupts();
    temp_r4 = M2C_FIELD(arg0, void ***, 4);
    temp_r5 = M2C_FIELD(arg0, void **, 0);
    if ((temp_r4 == NULL) || (temp_r5 == NULL)) {
        OSRestoreInterrupts();
        return 0;
    }
    *temp_r4 = temp_r5;
    M2C_FIELD(temp_r5, void ***, 4) = temp_r4;
    OSRestoreInterrupts();
    return 1;
}

static u8 ErrorCode2Num(u32 arg0) {
    s32 temp_r5;
    s32 var_ctr;
    M2C_UNK *var_r4;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 temp_r5_4;
    s32 temp_r5_5;
    s32 temp_r5_6;
    s32 temp_r5_7;
    s32 temp_r5_8;
    s32 var_r5;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r4_7;

    var_ctr = 2;
    var_r4 = &lbl_802A7080;
    var_r5 = 0;
loop_1:
    if (arg0 == (u32) M2C_FIELD(var_r4, u32 *, 0)) {
        return var_r5;
    }
    temp_r4 = var_r4 + 4;
    temp_r5_8 = var_r5 + 1;
    if (arg0 == (u32) M2C_FIELD(var_r4, u32 *, 4)) {
        return temp_r5_8;
    }
    /* draft: did not compile: temp_r4_2 = temp_r4 + 4; */
    temp_r5_7 = temp_r5_8 + 1;
    if (arg0 == (u32) M2C_FIELD(temp_r4, u32 *, 4)) {
        return temp_r5_7;
    }
    /* draft: did not compile: temp_r4_3 = temp_r4_2 + 4; */
    temp_r5_6 = temp_r5_7 + 1;
    if (arg0 == (u32) M2C_FIELD(temp_r4_2, u32 *, 4)) {
        return temp_r5_6;
    }
    /* draft: did not compile: temp_r4_4 = temp_r4_3 + 4; */
    temp_r5_5 = temp_r5_6 + 1;
    if (arg0 == (u32) M2C_FIELD(temp_r4_3, u32 *, 4)) {
        return temp_r5_5;
    }
    /* draft: did not compile: temp_r4_5 = temp_r4_4 + 4; */
    temp_r5_4 = temp_r5_5 + 1;
    if (arg0 == (u32) M2C_FIELD(temp_r4_4, u32 *, 4)) {
        return temp_r5_4;
    }
    /* draft: did not compile: temp_r4_6 = temp_r4_5 + 4; */
    temp_r5_3 = temp_r5_4 + 1;
    if (arg0 == (u32) M2C_FIELD(temp_r4_5, u32 *, 4)) {
        return temp_r5_3;
    }
    /* draft: did not compile: temp_r4_7 = temp_r4_6 + 4; */
    temp_r5_2 = temp_r5_3 + 1;
    if (arg0 == (u32) M2C_FIELD(temp_r4_6, u32 *, 4)) {
        return temp_r5_2;
    }
    temp_r5 = temp_r5_2 + 1;
    if (arg0 == (u32) M2C_FIELD(temp_r4_7, u32 *, 4)) {
        return temp_r5;
    }
    /* draft: did not compile: var_r4 = temp_r4_7 + 4 + 4; */
    var_r5 = temp_r5 + 1;
    var_ctr -= 1;
    if (var_ctr == 0) {
        if ((arg0 >= 0x100000U) && (arg0 <= 0x100008U)) {
            return 0x11U;
        }
        return 0x1DU;
    }
    goto loop_1;
}

void __DVDStoreErrorCode(u32 arg0) {
    u8 var_r31;
    u32 temp_r0;
    u32 var_r31_2;
    u8 temp_r3;

    temp_r0 = arg0 + 0xFEDD0000;
    if (temp_r0 == 0x4567U) {
        var_r31 = 0xFF;
    } else if (temp_r0 == 0x4568U) {
        var_r31 = 0xFE;
    } else {
        var_r31_2 = arg0 >> 0x18U;
        temp_r3 = ErrorCode2Num(arg0 & 0xFFFFFF);
        if (var_r31_2 >= 6U) {
            var_r31_2 = 6;
        }
        var_r31 = (var_r31_2 * 0x1E);
        var_r31 += temp_r3;
    }
    M2C_FIELD(__OSLockSramEx(), u8 *, 0x24) = var_r31;
    __OSUnlockSramEx(1);
}

s32 DVDCompareDiskID(void *arg0, void *arg1) { return 0; } /* draft: stub */

void __DVDPrintFatalMessage(void) {
    if (((M2C_UNK (*)()) lbl_803509E8) != NULL) {
        /* draft: did not compile: lbl_803509E8(); */
    }
}

static void cb(s32 arg0, s32 arg1) {
    switch (arg0) {                                 /* switch 1; irregular */
    default:                                        /* switch 1 */
        switch ((s32) lbl_803509F0) {               /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            lbl_803509F0 = 1;
            DVDReadAbsAsyncForBS(arg1, bb2_803509F4, 0x20, 0x420, cb);
            return;
        case 1:                                     /* switch 2 */
            lbl_803509F0 = 2;
            DVDReadAbsAsyncForBS(arg1, M2C_FIELD(bb2_803509F4, void **, 0x10), (M2C_FIELD(bb2_803509F4, s32 *, 8) + 0x1F) & 0xFFFFFFE0, M2C_FIELD(bb2_803509F4, s32 *, 4), (s16)cb);
            return;
        }
        break;
    case -4:                                        /* switch 1 */
        lbl_803509F0 = 0;
        DVDReset();
        DVDReadDiskID(arg1, idTmp_803509F8, cb);
        break;
    }
}

void __fstLoad(void) { } /* draft: stub */

void fn_800D1118(M2C_UNK *arg1) {
    M2C_UNK sp18;
    s32 temp_r27;
    s32 temp_r4_4;
    s32 temp_r6_2;
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r7;
    u16 temp_r4;
    u16 temp_r4_2;
    u16 temp_r4_3;
    u16 temp_r6;
    u32 temp_r4_5;
    u64 temp_r3;
    u64 temp_ret;

    var_r7 = 0;
    temp_r6 = M2C_FIELD((void *)0xCC002000, u16 *, 0x30);
    if (temp_r6 & 0x8000) {
        M2C_FIELD((void *)0xCC002000, u16 *, 0x30) = (u16) (temp_r6 & 0xFFFF7FFF);
        var_r7 = 1;
    }
    temp_r4 = *(u16 *)0xCC002034;
    if (temp_r4 & 0x8000) {
        M2C_FIELD((u16 *)0xCC000000, s16 *, 0x2034) = (s16) (temp_r4 & 0xFFFF7FFF);
        var_r7 |= 2;
    }
    temp_r4_2 = *(u16 *)0xCC002038;
    if (temp_r4_2 & 0x8000) {
        M2C_FIELD((u16 *)0xCC000000, s16 *, 0x2038) = (s16) (temp_r4_2 & 0xFFFF7FFF);
        var_r7 |= 4;
    }
    temp_r4_3 = *(u16 *)0xCC00203C;
    if (temp_r4_3 & 0x8000) {
        M2C_FIELD((u16 *)0xCC000000, s16 *, 0x203C) = (s16) (temp_r4_3 & 0xFFFF7FFF);
        var_r7 |= 8;
    }
    if ((var_r7 & 4) || (var_r7 & 8)) {
        OSSetCurrentContext(arg1);
        return;
    }
    temp_r4_4 = lbl_80350A04;
    lbl_80350A04 = temp_r4_4 + 1;
    OSClearContext(&sp18, temp_r4_4);
    OSSetCurrentContext(&sp18);
    if (((M2C_UNK (*)(s32)) lbl_80350A14) != NULL) {
        /* draft: did not compile: lbl_80350A14(lbl_80350A04); */
    }
    if ((u32) lbl_80350A08 != 0U) {
        if (((u32) lbl_80350A30 != 1U) || (fn_800D2A30() != 0U)) {
loop_21:
            if (((lbl_80350A3C ^ 0) | (lbl_80350A38 ^ 0)) != 0) {
                temp_r27 = lbl_80350A3C;
                var_r4 = CLZ((u32) __shr2u(lbl_80350A38, temp_r27, 0x20));
                if (var_r4 < 0x20) {

                } else {
                    var_r4 = CLZ(temp_r27 & ~0) + 0x20;
                }
                temp_r6_2 = var_r4 * 2;
                /* draft: did not compile: *(0xCC002000 + temp_r6_2) = (u16) M2C_FIELD((&lbl_8031C848 + temp_r6_2), u16 *, 0x78); */
                temp_ret = __shl2i(0, 1, 0x3F - var_r4, temp_r6_2);
                temp_r3 = temp_ret;
                temp_r4_5 = (u32) temp_ret;
                lbl_80350A3C &= ~(temp_r4_5 | temp_r4_5);
                lbl_80350A38 &= ~(temp_r3 | temp_r3);
                goto loop_21;
            }
            lbl_80350A30 = 0U;
            var_r4_2 = 1;
            lbl_80350A40 = M2C_FIELD(&lbl_8031C848, s32 *, 0x144);
            CurrTvMode_80350A44 = M2C_FIELD(&lbl_8031C848, s32 *, 0x118);
            lbl_80350A4C = lbl_80350A48;
        } else {
            var_r4_2 = 0;
        }
        if (var_r4_2 != 0) {
            lbl_80350A08 = 0U;
            SIRefreshSamplingRate();
        }
    }
    if (((M2C_UNK (*)(s32)) lbl_80350A18) != NULL) {
        OSClearContext((long *)(&sp18), (long)(0));
        /* draft: did not compile: lbl_80350A18(lbl_80350A04); */
    }
    OSWakeupThread(&lbl_80350A0C);
    OSClearContext((long *)(&sp18), (long)(0));
    OSSetCurrentContext(arg1);
}

s32 VISetPreRetraceCallback(s32 arg0) {
    s32 temp_r31;

    temp_r31 = lbl_80350A14;
    OSDisableInterrupts();
    lbl_80350A14 = arg0;
    OSRestoreInterrupts();
    return temp_r31;
}

#pragma push
#pragma peephole off
s32 VISetPostRetraceCallback(s32 arg0) {
    s32 temp_r31;

    temp_r31 = lbl_80350A18;
    OSDisableInterrupts();
    lbl_80350A18 = arg0;
    OSRestoreInterrupts();
    return temp_r31;
}
#pragma pop

void fn_800D13D0() { } /* draft: stub */

void fn_800D1470(u32 arg0) {
    u32 sp1C;
    u32 temp_r31;
    void *temp_r3;

    temp_r31 = arg0 >> 2U;
    *(u32 *)0x800000CC = temp_r31;
    /* draft: did not compile: temp_r3 = fn_800D13D0(arg0); */
    M2C_FIELD((void *)0xCC002000, s16 *, 2) = 2;
    sp1C = 0U;
    if (0U < 0x3E8U) {
loop_3:
        if (sp1C < 0x3E8U) {
            sp1C += 8;
            goto loop_3;
        }
    }
    M2C_FIELD((void *)0xCC002000, s16 *, 2) = 0;
    *(u16 *)0xCC002006 = M2C_FIELD(temp_r3, u16 *, 0x1A);
    *(u16 *)0xCC002004 = (M2C_FIELD(temp_r3, u8 *, 0x1E) & ~0xFF00) | ((M2C_FIELD(temp_r3, u8 *, 0x1D) << 8) & 0xFF00);
    *(u16 *)0xCC00200A = M2C_FIELD(temp_r3, u8 *, 0x1C) | (M2C_FIELD(temp_r3, u8 *, 0x1F) << 7);
    *(u16 *)0xCC002008 = (M2C_FIELD(temp_r3, u16 *, 0x20) * 2) & 0xFFFE;
    *(u16 *)0xCC00200E = M2C_FIELD(temp_r3, u16 *, 4) + ((M2C_FIELD(temp_r3, u16 *, 2) * 2) - 2);
    M2C_FIELD((u16 *)0xCC002000, u16 *, 0) = (u16) M2C_FIELD(temp_r3, u8 *, 0);
    *(u16 *)0xCC00200C = M2C_FIELD(temp_r3, u16 *, 8) + 2;
    *(u16 *)0xCC002012 = M2C_FIELD(temp_r3, u16 *, 6) + ((M2C_FIELD(temp_r3, u16 *, 2) * 2) - 2);
    *(u16 *)0xCC002010 = M2C_FIELD(temp_r3, u16 *, 0xA) + 2;
    *(u16 *)0xCC002016 = M2C_FIELD(temp_r3, u8 *, 0xC) | (M2C_FIELD(temp_r3, u16 *, 0x10) << 5);
    *(u16 *)0xCC002014 = M2C_FIELD(temp_r3, u8 *, 0xE) | (M2C_FIELD(temp_r3, u16 *, 0x14) << 5);
    *(u16 *)0xCC00201A = M2C_FIELD(temp_r3, u8 *, 0xD) | (M2C_FIELD(temp_r3, u16 *, 0x12) << 5);
    *(u16 *)0xCC002018 = M2C_FIELD(temp_r3, u8 *, 0xF) | (M2C_FIELD(temp_r3, u16 *, 0x16) << 5);
    *(u16 *)0xCC002048 = 0x2828;
    *(u16 *)0xCC002036 = 1;
    *(u16 *)0xCC002034 = 0x1001;
    *(u16 *)0xCC002030 = (((s32) M2C_FIELD(temp_r3, u16 *, 0x18) / 2) + 1) | 0x1000;
    *(u16 *)0xCC002032 = M2C_FIELD(temp_r3, u16 *, 0x1A) + 1;
    if (((s32) arg0 != 2) && ((s32) arg0 != 3) && ((s32) arg0 != 0x1A)) {
        M2C_FIELD((void *)0xCC002000, s16 *, 2) = (s16) (((arg0 & 2) * 4) | 1 | (temp_r31 << 8));
        M2C_FIELD(((u16 *)0xCC000000 + 0x2000), s16 *, 0x6C) = 0;
        return;
    }
    M2C_FIELD((void *)0xCC002000, s16 *, 2) = (s16) ((temp_r31 << 8) | 5);
    *(s16 *)0xCC00206C = 1;
}

void VIInit(void) { } /* draft: stub */

void VIWaitForRetrace(void) {
    s32 temp_r31;
    u32 temp_r30;

    temp_r31 = OSDisableInterrupts();
    temp_r30 = lbl_80350A04;
    do {
        OSSleepThread(&lbl_80350A0C);
    } while (temp_r30 == (u32) lbl_80350A04);
    OSRestoreInterrupts(temp_r31);
}

void fn_800D1B74(void *arg0, u32 *arg1, u32 *arg2, u32 *arg3, u32 *arg4) {
    s32 temp_r31;
    s32 temp_r31_2;
    u32 temp_r8;
    u32 temp_r8_2;
    s8 var_r10;
    u32 var_r8;
    u32 var_r8_2;

    temp_r31 = M2C_FIELD(arg0, u8 *, 0x2C) << 5;
    *arg1 = M2C_FIELD(arg0, s32 *, 0x30) + (((M2C_FIELD(arg0, u16 *, 0x16) * 2) & 0xFFFFFFE0) + (temp_r31 * M2C_FIELD(arg0, u16 *, 0xE)));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 0) {
        var_r8 = *arg1;
    } else {
        var_r8 = *arg1 + temp_r31;
    }
    *arg2 = var_r8;
    if ((s32) (M2C_FIELD(arg0, u16 *, 0xA) % 2) == 1) {
        temp_r8 = *arg1;
        *arg1 = *arg2;
        *arg2 = temp_r8;
    }
    *arg1 &= 0x3FFFFFFF;
    *arg2 &= (u8)0x3FFFFFFF;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x44) != 0) {
        temp_r31_2 = M2C_FIELD(arg0, u8 *, 0x2C) << 5;
        *arg3 = M2C_FIELD(arg0, s32 *, 0x48) + (((M2C_FIELD(arg0, u16 *, 0x16) * 2) & 0xFFFFFFE0) + (temp_r31_2 * M2C_FIELD(arg0, u16 *, 0xE)));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 0) {
            var_r8_2 = *arg3;
        } else {
            var_r8_2 = *arg3 + temp_r31_2;
        }
        *arg4 = var_r8_2;
        if ((s32) (M2C_FIELD(arg0, u16 *, 0xA) % 2) == 1) {
            temp_r8_2 = *arg3;
            *arg3 = *arg4;
            *arg4 = temp_r8_2;
        }
        *arg3 &= 0x3FFFFFFF;
        *arg4 &= 0x3FFFFFFF;
    }
    if ((*arg1 < 0x01000000U) && ((u32) *arg2 < 0x01000000U) && ((u32) *arg3 < 0x01000000U) && ((u32) *arg4 < 0x01000000U)) {
        var_r10 = 0;
    } else {
        var_r10 = 1;
    }
    if (var_r10 != 0) {
        *arg1 = (u32) *arg1 >> 5U;
        *arg2 = (u32) *arg2 >> 5U;
        *arg3 = (u32) *arg3 >> 5U;
        *arg4 = (u32) *arg4 >> 5U;
    }
    M2C_FIELD(&lbl_8031C848, s16 *, 0x1E) = (s16) *arg1;
    lbl_80350A2C = lbl_80350A2C;
    lbl_80350A28 |= 0x10000;
    M2C_FIELD(&lbl_8031C848, s16 *, 0x1C) = (s16) ((var_r10 << 0xC) | (((u32) *arg1 >> 0x10U) | (M2C_FIELD(arg0, u8 *, 0x3C) << 8)));
    lbl_80350A2C = lbl_80350A2C;
    lbl_80350A28 |= 0x20000;
    M2C_FIELD(&lbl_8031C848, s16 *, 0x26) = (s16) *arg2;
    lbl_80350A2C = lbl_80350A2C;
    lbl_80350A28 |= 0x1000;
    M2C_FIELD(&lbl_8031C848, s16 *, 0x24) = (s16) ((u32) *arg2 >> 0x10U);
    lbl_80350A2C = lbl_80350A2C;
    lbl_80350A28 |= 0x2000;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x44) != 0) {
        M2C_FIELD(&lbl_8031C848, s16 *, 0x22) = (s16) *arg3;
        lbl_80350A2C = lbl_80350A2C;
        lbl_80350A28 |= 0x4000;
        M2C_FIELD(&lbl_8031C848, s16 *, 0x20) = (s16) ((u32) *arg3 >> 0x10U);
        lbl_80350A2C = lbl_80350A2C;
        lbl_80350A28 |= 0x8000;
        M2C_FIELD(&lbl_8031C848, s16 *, 0x2A) = (s16) *arg4;
        lbl_80350A2C = lbl_80350A2C;
        lbl_80350A28 |= 0x400;
        M2C_FIELD(&lbl_8031C848, s16 *, 0x28) = (s16) ((u32) *arg4 >> 0x10U);
        lbl_80350A2C = lbl_80350A2C;
        lbl_80350A28 |= 0x800;
    }
}

void fn_800D1E48(u16 arg0, u16 arg1, u8 arg2, u16 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp8) {
    s32 var_r0;
    s32 var_r7;
    s32 var_r6;
    s32 var_r3;
    s32 temp_r29;
    s32 temp_r29_2;
    s32 temp_r30;
    u8 temp_r30_2;
    s32 temp_r4;
    u16 var_r12;
    s32 var_r29;
    s32 var_r4;

    if (M2C_FIELD(&lbl_8031C848, u16 *, 0x6C) & 1) {
        var_r12 = 1;
        var_r29 = 2;
    } else {
        var_r12 = 2;
        var_r29 = 1;
    }
    if ((arg0 % 2) == 0) {
        temp_r29 = var_r29 * arg0;
        temp_r30 = var_r29 * (((var_r12 * arg3) - arg1) - arg0);
        var_r0 = arg4 + temp_r29;
        var_r6 = arg6 + temp_r30;
        var_r3 = arg5 + temp_r29;
        var_r7 = arg7 + temp_r30;
    } else {
        temp_r29_2 = var_r29 * arg0;
        temp_r30_2 = var_r29 * (((var_r12 * arg3) - arg1) - arg0);
        var_r0 = arg5 + temp_r29_2;
        var_r3 = arg4 + temp_r29_2;
        var_r7 = arg6 + temp_r30_2;
        var_r6 = arg7 + temp_r30_2;
    }
    var_r4 = (u16) ((s32) arg1 / (s32) var_r12);
    if (arg_sp8 != 0) {
        temp_r4 = (var_r4 * 2);
        temp_r4 -= 2;
        var_r0 += temp_r4;
        var_r3 += temp_r4;
        var_r4 = 0;
        var_r6 += 2;
        var_r7 += 2;
    }
    M2C_FIELD(&lbl_8031C848, s16 *, 0) = (s16) (arg2 | ((var_r4 * 0x10) & 0xFFFF0));
    lbl_80350A2C = lbl_80350A2C;
    lbl_80350A28 |= (u8)0x80000000;
    M2C_FIELD(&lbl_8031C848, s16 *, 0xE) = var_r0;
    lbl_80350A2C = lbl_80350A2C;
    lbl_80350A28 |= 0x01000000;
    M2C_FIELD(&lbl_8031C848, s16 *, 0xC) = var_r6;
    lbl_80350A2C = lbl_80350A2C;
    lbl_80350A28 |= 0x02000000;
    M2C_FIELD(&lbl_8031C848, s16 *, 0x12) = var_r3;
    lbl_80350A2C = lbl_80350A2C;
    lbl_80350A28 |= 0x400000;
    M2C_FIELD(&lbl_8031C848, s16 *, 0x10) = var_r7;
    lbl_80350A2C = lbl_80350A2C;
    lbl_80350A28 |= 0x800000;
}
