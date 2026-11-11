/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

s32 OSDisableInterrupts();
M2C_UNK OSRestoreInterrupts(s32);
M2C_UNK SIEnablePollingInterrupt(M2C_UNK);
extern u32 lbl_8031C5F0;
M2C_UNK OSRegisterVersion(s32, M2C_UNK *);
M2C_UNK __OSSetInterruptHandler(M2C_UNK, M2C_UNK *);
M2C_UNK __OSUnmaskInterrupts(M2C_UNK);
extern M2C_UNK Packet_8031C450;
extern M2C_UNK SIInterruptHandler_800CA6BC;
extern M2C_UNK Si_802A6C14;
extern s32 __SIVersion;
extern M2C_UNK lbl_802A6BD0;
extern M2C_UNK Type_802A6C28;
extern M2C_UNK lbl_8031C4D0;
u64 __OSGetSystemTime();
s32 OSGetWirelessID(s32);
M2C_UNK OSSetWirelessID(s32, u16);
extern s32 lbl_80350920;
extern M2C_UNK TypeTime_8031C570;
extern M2C_UNK lbl_8031C5B0;
M2C_UNK OSReport(void *);
s32 VIGetTvFormat();
extern u32 SamplingRate_80350928;
extern M2C_UNK XYNTSC_802A6CE8;
extern s32 DBVerbose;
extern s32 __DBInterface;
M2C_UNK OSDumpContext(s32);
M2C_UNK PPCHalt();
extern M2C_UNK lbl_802A6D80;
extern f32 lbl_80351CD4;
M2C_UNK PSMTXRotTrig(s32, s32, f32, f32);
f32 fn_80156F14(f32);
f32 fn_80156F38(f32);
extern s32 cmdTypeAndStatus;

s32 SIUnregisterPollingHandler(u32 arg0);
void SIInit(void);
s32 __SITransfer(s32 arg0, void *arg1, u8 arg2, s32 arg3, u32 arg4, u32 arg5);
u32 SIGetStatus(s32 arg0);
void fn_800CAF94(s32 arg0, s32 arg1);
void fn_800CAFA8(void);
s32 SISetXY(s32 arg0, s32 arg1);
s32 SIEnablePolling(u32 arg0);
s32 SIDisablePolling(u32 arg0);
s32 SIGetResponseRaw(s32 arg0);
s32 SIGetResponse(s32 arg0, void *arg1);
void AlarmHandler_800CB2C4(s32 arg0);
s32 SITransfer(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void GetTypeCallback_800CB4BC(s32 arg0, s32 arg1);
u32 SIGetType(s32 arg0);
s32 SIGetTypeAsync(s32 arg0, M2C_UNK (*arg1)(s32, s32));
s32 SIDecodeType(u8 arg0);
void SIProbe(void);
void SISetSamplingRate(u32 arg0);
void SIRefreshSamplingRate(void);
void DBInit(void);
void __DBExceptionDestinationAux(void);
void __DBExceptionDestination(void);
s32 __DBIsExceptionMarked(u8 arg0);
void DBPrintf(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7);
f32 PSMTXIdentity(void);
f32 PSMTXCopy(void);
f32 PSMTXConcat(void);
f32 PSMTXTranspose(void *arg0, void *arg1);
s32 PSMTXInverse(void *arg0);
s32 PSMTXInvXpose(void);
void MTXRotRad(s32 arg0, s32 arg1, f32 farg0);

s32 SIUnregisterPollingHandler(u32 arg0) {
    s32 temp_r31;
    s32 var_ctr;
    u8 var_r4;
    s32 var_r4_2;
    u32 *temp_r3;
    u32 *var_r3;

    temp_r31 = OSDisableInterrupts();
    var_r3 = &lbl_8031C5F0;
    var_ctr = 4;
    var_r4 = 0;
loop_1:
    if ((u32) *var_r3 == arg0) {
        (&lbl_8031C5F0)[var_r4] = 0U;
        var_r4_2 = 0;
        if ((u32) M2C_FIELD(&lbl_8031C5F0, u32 *, 0) == 0U) {
            var_r4_2 = 1;
            temp_r3 = &lbl_8031C5F0 + 4;
            if ((u32) M2C_FIELD(&lbl_8031C5F0, u32 *, 4) == 0U) {
                var_r4_2 = 2;
                if ((u32) M2C_FIELD(temp_r3, u32 *, 4) == 0U) {
                    var_r4_2 = 3;
                    if ((u32) M2C_FIELD((temp_r3 + 4), u32 *, 4) == 0U) {
                        var_r4_2 = 4;
                    }
                }
            }
        }
        if (var_r4_2 == 4) {
            SIEnablePollingInterrupt(0);
        }
        OSRestoreInterrupts(temp_r31);
        return 1;
    }
    var_r3 += 1;
    var_r4 += 1;
    var_ctr -= 1;
    if (var_ctr == 0) {
        OSRestoreInterrupts(temp_r31);
        return 0;
    }
    goto loop_1;
}

void SIInit(void) {
    M2C_FIELD(&Packet_8031C450, s32 *, 0) = -1;
    OSRegisterVersion(__SIVersion, &Packet_8031C450);
    M2C_FIELD(&Packet_8031C450, s32 *, 0x40) = -1;
    M2C_FIELD(&Packet_8031C450, s32 *, 0x20) = -1;
    M2C_FIELD(&Packet_8031C450, s32 *, 0x60) = -1;
    M2C_FIELD(&Si_802A6C14, s32 *, 4) = 0;
    SISetSamplingRate((unsigned long)(0));
    do {

    } while (M2C_FIELD((void *)0xCC006400, s32 *, 0x34) & 1);
    M2C_FIELD((void *)0xCC006400, s32 *, 0x34) = 0x80000000;
    __OSSetInterruptHandler(0x14, &SIInterruptHandler_800CA6BC);
    __OSUnmaskInterrupts(0x800);
    SIGetType(0);
    SIGetType(1);
    SIGetType(2);
    SIGetType(3);
}

s32 __SITransfer(s32 arg0, void *arg1, u8 arg2, s32 arg3, u32 arg4, u32 arg5) {
    s32 unksp27;
    s32 unksp26;
    s32 unksp25;
    s32 sp24;                                       /* compiler-managed */
    s32 *var_r6_2;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 var_ctr_2;
    s32 var_r4;
    u32 temp_r4;
    u32 temp_r7;
    u32 var_ctr;
    u32 var_r0_2;
    u32 var_r5;
    u8 temp_r0_4;
    u8 var_r0;
    void *var_r6;
    void *var_r7;
    void *var_r7_2;

    OSDisableInterrupts(&lbl_802A6BD0);
    if ((s32) M2C_FIELD(&lbl_802A6BD0, s32 *, 0x44) != -1) {
        OSRestoreInterrupts((long)(0));
        return 0;
    }
    *(s32 *)0xCC006438 &= 0x0F000000 >> (arg0 * 8);
    temp_r4 = (u32) (arg2 + 3) >> 2U;
    M2C_FIELD(&lbl_802A6BD0, s32 *, 0x44) = arg0;
    var_r5 = 0;
    M2C_FIELD(&lbl_802A6BD0, u32 *, 0x54) = arg5;
    M2C_FIELD(&lbl_802A6BD0, u32 *, 0x4C) = arg4;
    M2C_FIELD(&lbl_802A6BD0, s32 *, 0x50) = arg3;
    if (temp_r4 > 0U) {
        temp_r7 = temp_r4 - 8;
        if (temp_r4 > 8U) {
            var_ctr = (u32) (temp_r7 + 7) >> 3U;
            var_r7 = arg1;
            var_r6 = (s32 *)0xCC000000 + 0x6400;
            if (temp_r7 > 0U) {
                do {
                    var_r5 += 8;
                    M2C_FIELD(var_r6, s32 *, 0x80) = (s32) M2C_FIELD(var_r7, s32 *, 0);
                    M2C_FIELD(var_r6, s32 *, 0x84) = (s32) M2C_FIELD(var_r7, s32 *, 4);
                    M2C_FIELD(var_r6, s32 *, 0x88) = (s32) M2C_FIELD(var_r7, s32 *, 8);
                    M2C_FIELD(var_r6, s32 *, 0x8C) = (s32) M2C_FIELD(var_r7, s32 *, 0xC);
                    M2C_FIELD(var_r6, s32 *, 0x90) = (s32) M2C_FIELD(var_r7, s32 *, 0x10);
                    M2C_FIELD(var_r6, s32 *, 0x94) = (s32) M2C_FIELD(var_r7, s32 *, 0x14);
                    M2C_FIELD(var_r6, s32 *, 0x98) = (s32) M2C_FIELD(var_r7, s32 *, 0x18);
                    temp_r0 = M2C_FIELD(var_r7, s32 *, 0x1C);
                    /* draft: did not compile: var_r7 += 0x20; */
                    M2C_FIELD(var_r6, s32 *, 0x9C) = temp_r0;
                    /* draft: did not compile: var_r6 += 0x20; */
                    var_ctr -= 1;
                } while (var_ctr != 0);
            }
        }
        temp_r0_2 = var_r5 * 4;
        /* draft: did not compile: var_r6_2 = arg1 + temp_r0_2; */
        /* draft: did not compile: var_r7_2 = temp_r0_2 + 0xCC006400; */
        var_ctr_2 = temp_r4 - var_r5;
        if (var_r5 < temp_r4) {
            do {
                temp_r0_3 = *var_r6_2;
                var_r6_2 += 4;
                M2C_FIELD(var_r7_2, s32 *, 0x80) = temp_r0_3;
                /* draft: did not compile: var_r7_2 += 4; */
                var_ctr_2 -= 1;
            } while (var_ctr_2 != 0);
        }
    }
    var_r4 = 1;
    sp24 = M2C_FIELD((void *)0xCC006400, s32 *, 0x34);
    sp24 = (u8) sp24 | 0x80;
    if (arg5 != 0U) {

    } else {
        var_r4 = 0;
    }
    sp24 = (sp24 & ~0x40) | ((var_r4 << 6) & 0x40);
    if (arg2 == 0x80) {
        var_r0 = 0;
    } else {
        var_r0 = arg2;
    }
    unksp25 = (unksp25 & ~0x7F) | (var_r0 & 0x7F);
    if (arg4 == 0x80) {
        var_r0_2 = 0;
    } else {
        var_r0_2 = arg4;
    }
    unksp26 = (unksp26 & ~0x7F) | ((u8) var_r0_2 & 0x7F);
    temp_r0_4 = (unksp27 & ~6) | ((arg0 << 1) & 6);
    unksp27 = temp_r0_4;
    unksp27 = temp_r0_4 | 1;
    M2C_FIELD((void *)0xCC006400, s32 *, 0x34) = (s32) sp24;
    OSRestoreInterrupts(1);
    return 1;
}

u32 SIGetStatus(s32 arg0) {
    s32 *temp_r4;
    u32 temp_r31;

    OSDisableInterrupts();
    temp_r31 = (u32) *(u32 *)0xCC006438 >> ((3 - arg0) * 8);
    if (temp_r31 & 8) {
        temp_r4 = &Type_802A6C28 + (arg0 * 4);
        if (!(*temp_r4 & 0x80)) {
            *temp_r4 = 8;
        }
    }
    OSRestoreInterrupts((long)(0));
    return temp_r31;
}

void fn_800CAF94(s32 arg0, s32 arg1) {
    /* draft: did not compile: *(0xCC006400 + (arg0 * 0xC)) = arg1; */
}

void fn_800CAFA8(void) {
    *(s32 *)0xCC006438 = 0x80000000;
}

s32 SISetXY(s32 arg0, s32 arg1) {
    s32 temp_r31;

    OSDisableInterrupts();
    M2C_FIELD(&Si_802A6C14, s32 *, 4) = (s32) (M2C_FIELD(&Si_802A6C14, s32 *, 4) & 0xFC0000FF);
    M2C_FIELD(&Si_802A6C14, s32 *, 4) = (s32) (M2C_FIELD(&Si_802A6C14, s32 *, 4) | ((arg0 << 0x10) | (arg1 << 8)));
    temp_r31 = M2C_FIELD(&Si_802A6C14, s32 *, 4);
    *(s32 *)0xCC006430 = temp_r31;
    OSRestoreInterrupts((long)(0xCC000000));
    return temp_r31;
}

s32 SIEnablePolling(u32 arg0) {
    s32 temp_r31;
    s32 temp_r4;
    u32 temp_r31_2;

    if (arg0 == 0) {
        return M2C_FIELD(&Si_802A6C14, s32 *, 4);
    }
    OSDisableInterrupts();
    temp_r31_2 = arg0 >> 0x18U;
    temp_r4 = (temp_r31_2 >> 4U) & 0xF;
    M2C_FIELD(&Si_802A6C14, s32 *, 4) = (s32) (M2C_FIELD(&Si_802A6C14, s32 *, 4) & ~temp_r4);
    M2C_FIELD(&Si_802A6C14, s32 *, 4) = (s32) (M2C_FIELD(&Si_802A6C14, s32 *, 4) | (temp_r31_2 & (temp_r4 | 0x03FF0000 | 0xFFF0) & 0xFC0000FF));
    temp_r31 = M2C_FIELD(&Si_802A6C14, s32 *, 4);
    M2C_FIELD((void *)0xCC006400, s32 *, 0x38) = 0x80000000;
    M2C_FIELD((void *)0xCC006400, s32 *, 0x30) = temp_r31;
    OSRestoreInterrupts((long)(0xCC006400));
    return temp_r31;
}

s32 SIDisablePolling(u32 arg0) {
    s32 temp_r31;

    if (arg0 == 0) {
        return M2C_FIELD(&Si_802A6C14, s32 *, 4);
    }
    OSDisableInterrupts();
    temp_r31 = M2C_FIELD(&Si_802A6C14, s32 *, 4) & ~((arg0 >> 0x18U) & 0xF0);
    *(s32 *)0xCC006430 = temp_r31;
    M2C_FIELD(&Si_802A6C14, s32 *, 4) = temp_r31;
    OSRestoreInterrupts((long)(0xCC000000));
    return temp_r31;
}

s32 SIGetResponseRaw(s32 arg0) {
    s32 *temp_r4;
    u32 temp_r29;
    void *temp_r3;
    void *temp_r6;

    OSDisableInterrupts(&Packet_8031C450);
    temp_r29 = (u32) *(u32 *)0xCC006438 >> ((3 - arg0) * 8);
    if (temp_r29 & 8) {
        temp_r4 = &Type_802A6C28 + (arg0 * 4);
        if (!(*temp_r4 & 0x80)) {
            *temp_r4 = 8;
        }
    }
    OSRestoreInterrupts((long)(0));
    if (temp_r29 & 0x20) {
        /* draft: did not compile: temp_r3 = (arg0 * 0xC) + 0xCC006400; */
        M2C_FIELD((&Packet_8031C450 + (arg0 * 4)), s32 *, 0x1B0) = 1;
        temp_r6 = &Packet_8031C450 + (arg0 * 8);
        M2C_FIELD(temp_r6, s32 *, 0x1C0) = (s32) M2C_FIELD(temp_r3, s32 *, 4);
        M2C_FIELD(temp_r6, s32 *, 0x1C4) = (s32) M2C_FIELD(temp_r3, s32 *, 8);
        return 1;
    }
    return 0;
}

s32 SIGetResponse(s32 arg0, void *arg1) {
    s32 temp_cr0_eq;
    s32 temp_r27;
    s32 temp_r31;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r4;
    void *temp_r5;

    temp_r31 = OSDisableInterrupts(&Packet_8031C450);
    if (SIGetStatus(arg0) & 0x20) {
        /* draft: did not compile: temp_r4 = (arg0 * 0xC) + 0xCC006400; */
        temp_r5 = &Packet_8031C450 + (arg0 * 8);
        M2C_FIELD(temp_r5, s32 *, 0x1C0) = (s32) M2C_FIELD(temp_r4, s32 *, 4);
        M2C_FIELD(temp_r5, s32 *, 0x1C4) = (s32) M2C_FIELD(temp_r4, s32 *, 8);
        M2C_FIELD((&Packet_8031C450 + (arg0 * 4)), s32 *, 0x1B0) = 1;
    }
    temp_r3 = &Packet_8031C450 + (arg0 * 4);
    temp_r27 = M2C_FIELD(temp_r3, s32 *, 0x1B0);
    temp_cr0_eq = temp_r27 == 0;
    M2C_FIELD(temp_r3, s32 *, 0x1B0) = 0;
    if (temp_cr0_eq == 0) {
        temp_r3_2 = &Packet_8031C450 + (arg0 * 8);
        M2C_FIELD(arg1, s32 *, 0) = (s32) M2C_FIELD(temp_r3_2, s32 *, 0x1C0);
        M2C_FIELD(arg1, s32 *, 4) = (s32) M2C_FIELD(temp_r3_2, s32 *, 0x1C4);
    }
    OSRestoreInterrupts(temp_r31);
    return temp_r27;
}

void AlarmHandler_800CB2C4(s32 arg0) { } /* draft: stub */

s32 SITransfer(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 temp_r21;
    s32 temp_r6_2;
    u32 temp_r4;
    u32 var_r19;
    u64 temp_r3;
    u64 temp_ret;
    u64 var_r20;
    void *temp_r22;
    void *temp_r6;

    temp_r22 = &Packet_8031C450 + (arg0 << 5);
    temp_r21 = OSDisableInterrupts(&Packet_8031C450);
    if (((s32) M2C_FIELD(temp_r22, s32 *, 0) != -1) || ((s32) Si_802A6C14 == arg0)) {
        OSRestoreInterrupts(temp_r21);
        return 0;
    }
    temp_ret = __OSGetSystemTime();
    temp_r3 = temp_ret;
    temp_r4 = (u32) temp_ret;
    if (((arg7 ^ 0) | (arg6 ^ 0)) == 0) {
        var_r19 = temp_r4;
        var_r20 = temp_r3;
    } else {
        temp_r6 = &Packet_8031C450 + (arg0 * 8);
        var_r19 = arg7 + M2C_FIELD(temp_r6, s32 *, 0x144);
        var_r20 = arg6 + M2C_FIELD(temp_r6, s32 *, 0x140) + M2C_CARRY;
    }
    if (-(((temp_r6_2 = temp_r3 ^ 0x80000000) - temp_r6_2) - !M2C_CARRY) != 0) {
        OSSetAlarm(&Packet_8031C450 + (arg0 * 0x28) + 0x80, AlarmHandler_800CB2C4, (var_r20 - temp_r3) - !M2C_CARRY, var_r19 - temp_r4, (u16)AlarmHandler_800CB2C4);
        goto block_10;
    }
    if (0 /* draft: did not compile */) {
        OSRestoreInterrupts(temp_r21);
        return 1;
    }
block_10:
    M2C_FIELD(temp_r22, s32 *, 0) = arg0;
    M2C_FIELD(temp_r22, s32 *, 4) = arg1;
    M2C_FIELD(temp_r22, s32 *, 8) = arg2;
    M2C_FIELD(temp_r22, s32 *, 0xC) = arg3;
    M2C_FIELD(temp_r22, s32 *, 0x10) = arg4;
    M2C_FIELD(temp_r22, s32 *, 0x14) = arg5;
    M2C_FIELD(temp_r22, u32 *, 0x1C) = var_r19;
    M2C_FIELD(temp_r22, s32 *, 0x18) = (s32) var_r20;
    OSRestoreInterrupts(temp_r21);
    return 1;
}

void GetTypeCallback_800CB4BC(s32 arg0, s32 arg1) {
    M2C_UNK (**var_r31)(s32, s32);
    M2C_UNK (**var_r31_2)(s32, s32);
    M2C_UNK (*temp_r12)(s32, s32);
    M2C_UNK (*temp_r12_2)(s32, s32);
    s32 *temp_r30;
    s32 temp_r28;
    s32 temp_r29;
    s32 temp_r30_2;
    s32 temp_r30_3;
    s32 temp_r3;
    s32 var_r29;
    s32 var_r29_2;
    u16 temp_r28_2;
    u32 temp_r3_2;
    u32 temp_r4;
    u32 var_r26;
    u64 temp_ret;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r5;

    temp_r29 = arg0 * 4;
    temp_r30 = &Type_802A6C28 + temp_r29;
    *temp_r30 &= 0xFFFFFF7F;
    *temp_r30 |= arg1;
    temp_r5 = &Packet_8031C450 + (arg0 * 8);
    temp_ret = __OSGetSystemTime(&Packet_8031C450);
    M2C_FIELD(temp_r5, u32 *, 0x124) = (u32) temp_ret;
    temp_r4 = 0x80000000U >> arg0;
    temp_r3 = lbl_80350920;
    temp_r28 = *temp_r30;
    lbl_80350920 = temp_r3 & ~temp_r4;
    M2C_FIELD(temp_r5, s32 *, 0x120) = temp_ret;
    if ((arg1 & 0xF) || ((u32) ((temp_r28 & 0x18000000) + 0xF8000000) != 0U) || !(temp_r28 & 0x80000000) || (temp_r28 & 0x04000000)) {
        OSSetWirelessID(arg0, 0U);
        temp_r30_2 = *temp_r30;
        var_r29 = 0;
        /* draft: did not compile: var_r31 = &Packet_8031C450 + (arg0 * 0x10) + 0x160; */
        do {
            temp_r12 = *var_r31;
            if (temp_r12 != NULL) {
                *var_r31 = NULL;
                temp_r12(arg0, temp_r30_2);
            }
            var_r29 += 1;
            var_r31 += 4;
        } while (var_r29 < 4);
        return;
    }
    var_r26 = (OSGetWirelessID(arg0) << 8) & 0xFFFF00;
    if (((s32) (temp_r3 & temp_r4) != 0) && (var_r26 & 0x100000)) {
        temp_r4_2 = &Packet_8031C450 + temp_r29;
        M2C_FIELD(temp_r4_2, s32 *, 0x1F0) = (s32) ((var_r26 & 0xCFFF00) | 0x4E100000);
        *temp_r30 = 0x80;
        /* draft: did not compile: SITransfer(arg0, temp_r4_2 + 0x1F0, 3, temp_r30, 3, GetTypeCallback_800CB4BC, 0, 0); */
        return;
    }
    if (temp_r28 & 0x100000) {
        temp_r3_2 = temp_r28 & 0xCFFF00;
        if ((u32) (var_r26 & 0xCFFF00) != temp_r3_2) {
            if (!(var_r26 & 0x100000)) {
                var_r26 = temp_r3_2 | 0x100000;
                OSSetWirelessID(arg0, (u16) (var_r26 >> 8U));
            }
            temp_r4_3 = &Packet_8031C450 + temp_r29;
            M2C_FIELD(temp_r4_3, s32 *, 0x1F0) = (s32) (var_r26 | 0x4E000000);
            *temp_r30 = 0x80;
            /* draft: did not compile: SITransfer(arg0, temp_r4_3 + 0x1F0, 3, temp_r30, 3, GetTypeCallback_800CB4BC, 0, 0); */
            return;
        }
        goto block_20;
    }
    if (temp_r28 & 0x40000000) {
        temp_r28_2 = (temp_r28 & 0xCFFF00) | 0x100000;
        OSSetWirelessID(arg0, (u16) (temp_r28_2 >> 8U));
        temp_r4_4 = &Packet_8031C450 + temp_r29;
        M2C_FIELD(temp_r4_4, s32 *, 0x1F0) = (s32) (temp_r28_2 | 0x4E000000);
        *temp_r30 = 0x80;
        /* draft: did not compile: SITransfer(arg0, temp_r4_4 + 0x1F0, 3, temp_r30, 3, GetTypeCallback_800CB4BC, 0, 0); */
        return;
    }
    OSSetWirelessID(arg0, 0U);
block_20:
    temp_r30_3 = *temp_r30;
    var_r29_2 = 0;
    /* draft: did not compile: var_r31_2 = &Packet_8031C450 + (arg0 * 0x10) + 0x160; */
    do {
        temp_r12_2 = *var_r31_2;
        if (temp_r12_2 != NULL) {
            *var_r31_2 = NULL;
            temp_r12_2(arg0, temp_r30_3);
        }
        var_r29_2 += 1;
        var_r31_2 += 4;
    } while (var_r29_2 < 4);
}

u32 SIGetType(s32 arg0) { return 0; } /* draft: stub */

s32 SIGetTypeAsync(s32 arg0, M2C_UNK (*arg1)(s32, s32)) { return 0; } /* draft: stub */

#pragma push
#pragma peephole off
s32 SIDecodeType(u8 arg0) {
    s32 temp_r3;
    u32 var_r3;

    if (arg0 & 8) {
        return 8;
    }
    if (arg0 & 0x47) {
        return 0x40;
    }
    if (arg0 != 0) {
        return 0x80;
    }
    temp_r3 = (arg0 & 0xFFFFFF00) & 0x18000000;
    if (temp_r3 == 0) {
        var_r3 = (arg0 & 0xFFFFFF00) & 0xFFFF0000;
        if (var_r3 != 0x40000) {
            if (var_r3 < 0x40000) {
                if (var_r3 != 0x20000) {
                    if (var_r3 < 0x20000) {
                        if (var_r3 != 0x10000) {
                            /* Duplicate return node #18. Try simplifying control flow for better match */
                            return 0x40;
                        }
                        /* Duplicate return node #38. Try simplifying control flow for better match */
                        return var_r3;
                    }
                    /* Duplicate return node #18. Try simplifying control flow for better match */
                    return 0x40;
                }
                /* Duplicate return node #38. Try simplifying control flow for better match */
                return var_r3;
            }
            if (var_r3 != 0x05000000) {
                if (var_r3 < 0x05000000) {
                    if (var_r3 != 0x02000000) {
                        /* Duplicate return node #18. Try simplifying control flow for better match */
                        return 0x40;
                    }
                    /* Duplicate return node #38. Try simplifying control flow for better match */
                    return var_r3;
                }
                return 0x40;
            }
            /* Duplicate return node #38. Try simplifying control flow for better match */
            return var_r3;
        }
        /* Duplicate return node #38. Try simplifying control flow for better match */
        return var_r3;
    }
    if ((u32) (temp_r3 + 0xF8000000) != 0U) {
        return 0x40;
    }
    var_r3 = (arg0 & 0xFFFFFF00) & 0xFFFF0000;
    if (var_r3 != 0x09000000) {
        if (var_r3 < 0x09000000) {
            if (var_r3 != 0x08000000) {
                goto block_26;
            }
            /* Duplicate return node #38. Try simplifying control flow for better match */
            return var_r3;
        }
block_26:
        if ((u32) (((arg0 & 0xFFFFFF00) & 0xFFE00000) + 0xF7E00000) == 0U) {
            return 0x08200000;
        }
        if (((arg0 & 0xFFFFFF00) & 0x80000000) && !((arg0 & 0xFFFFFF00) & 0x04000000)) {
            if ((u32) (((arg0 & 0xFFFFFF00) & 0x8B100000) + 0x74F00000) == 0U) {
                return 0x8B100000;
            }
            if (!((arg0 & 0xFFFFFF00) & 0x02000000)) {
                return 0x88000000;
            }
            goto block_34;
        }
block_34:
        if ((u32) (((arg0 & 0xFFFFFF00) & 0x09000000) + 0xF7000000) == 0U) {
            return 0x09000000;
        }
        return 0x40;
    }
    return var_r3;
}
#pragma pop

void SIProbe(void) {
    SIGetType((long)(0));
    SIDecodeType((unsigned char)(0));
}

void SISetSamplingRate(u32 arg0) {
    M2C_UNK *var_r4;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 var_r5;
    u32 var_r29;

    var_r29 = arg0;
    if (var_r29 > 0xBU) {
        var_r29 = 0xB;
    }
    temp_r3 = OSDisableInterrupts();
    SamplingRate_80350928 = var_r29;
    temp_r3_2 = VIGetTvFormat();
    switch (temp_r3_2) {                            /* irregular */
    case 2:
    case 5:
    case 0:
        var_r4 = &XYNTSC_802A6CE8;
        break;
    case 1:
        var_r4 = &XYNTSC_802A6CE8 + 0x30;
        break;
    default:
        OSReport(&XYNTSC_802A6CE8 + 0x60);
        var_r29 = 0;
        var_r4 = &XYNTSC_802A6CE8;
        break;
    }
    if (*(u16 *)0xCC00206C & 1) {
        var_r5 = 2;
    } else {
        var_r5 = 1;
    }
    temp_r3_3 = var_r29 * 4;
    SISetXY(var_r5 * *(var_r4 + temp_r3_3), M2C_FIELD((var_r4 + temp_r3_3), u8 *, 2));
    OSRestoreInterrupts(temp_r3);
}

void SIRefreshSamplingRate(void) {
    SISetSamplingRate(SamplingRate_80350928);
}

void DBInit(void) {
    __DBInterface = 0x80000040;
    /* draft: did not compile: *(void **)0x80000048 = __DBExceptionDestination + 0x80000000; */
    DBVerbose = 1;
}

void __DBExceptionDestinationAux(void) {
    s32 temp_r4;

    temp_r4 = *(s32 *)0xC0;
    OSReport((void *)(&lbl_802A6D80));
    OSDumpContext(temp_r4 + 0x80000000);
    PPCHalt();
}

void __DBExceptionDestination(void) {
    M2C_ERROR(/* unknown instruction: mfmsr $r3 */);
    __DBExceptionDestinationAux();
}

s32 __DBIsExceptionMarked(u8 arg0) {
    return M2C_FIELD(__DBInterface, s32 *, 4) & (1 << arg0);
}

void DBPrintf(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7) {
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
}

f32 PSMTXIdentity(void) {
    M2C_ERROR(/* unknown instruction: ps_merge01 $f2, $f0, $f1 */);
    return M2C_ERROR(/* unknown instruction: ps_merge10 $f1, $f1, $f0 */);
}

f32 PSMTXCopy(void) {
    return M2C_ERROR(/* psq_l unimplemented */);
}

f32 PSMTXConcat(void) {
    M2C_ERROR(/* unknown instruction: ps_muls0 $f12, $f6, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f13, $f7, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f14, $f6, $f2 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f15, $f7, $f2 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f12, $f8, $f0, $f12 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f14, $f8, $f2, $f14 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f13, $f9, $f0, $f13 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f15, $f9, $f2, $f15 */);
    M2C_ERROR(/* unknown instruction: ps_madds0 $f12, $f10, $f1, $f12 */);
    M2C_ERROR(/* unknown instruction: ps_madds0 $f13, $f11, $f1, $f13 */);
    M2C_ERROR(/* unknown instruction: ps_madds0 $f14, $f10, $f3, $f14 */);
    M2C_ERROR(/* unknown instruction: ps_madds0 $f15, $f11, $f3, $f15 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f2, $f6, $f4 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f13, $f31, $f1, $f13 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f0, $f7, $f4 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f15, $f31, $f3, $f15 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f2, $f8, $f4, $f2 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f0, $f9, $f4, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_madds0 $f2, $f10, $f5, $f2 */);
    M2C_ERROR(/* unknown instruction: ps_madds0 $f0, $f11, $f5, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f0, $f31, $f5, $f0 */);
    return M2C_ERROR(/* psq_l unimplemented */);
}

f32 PSMTXTranspose(void *arg0, void *arg1) {
    M2C_FIELD(arg1, f32 *, 0x2C) = (f32) lbl_80351CD4;
    M2C_ERROR(/* unknown instruction: ps_merge00 $f4, $f1, $f2 */);
    M2C_ERROR(/* unknown instruction: ps_merge11 $f5, $f1, $f2 */);
    M2C_ERROR(/* unknown instruction: ps_merge00 $f2, $f3, $f2 */);
    M2C_ERROR(/* unknown instruction: ps_merge00 $f4, $f1, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_merge10 $f5, $f1, $f0 */);
    M2C_FIELD(arg1, f32 *, 0x28) = (f32) M2C_FIELD(arg0, f32 *, 0x28);
    return M2C_ERROR(/* psq_l unimplemented */);
}

s32 PSMTXInverse(void *arg0) {
    M2C_ERROR(/* unknown instruction: ps_merge10 $f6, $f1, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_merge10 $f7, $f3, $f2 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f11, $f3, $f6 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f13, $f5, $f7 */);
    M2C_ERROR(/* unknown instruction: ps_merge10 $f8, $f5, $f4 */);
    M2C_ERROR(/* unknown instruction: ps_msub $f11, $f1, $f7, $f11 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f12, $f1, $f8 */);
    M2C_ERROR(/* unknown instruction: ps_msub $f13, $f3, $f8, $f13 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f10, $f3, $f4 */);
    M2C_ERROR(/* unknown instruction: ps_msub $f12, $f5, $f6, $f12 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f9, $f0, $f5 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f8, $f1, $f2 */);
    M2C_ERROR(/* unknown instruction: ps_sub $f6, $f6, $f6 */);
    M2C_ERROR(/* unknown instruction: ps_msub $f10, $f2, $f5, $f10 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f7, $f0, $f13 */);
    M2C_ERROR(/* unknown instruction: ps_msub $f9, $f1, $f4, $f9 */);
    M2C_ERROR(/* unknown instruction: ps_madd $f7, $f2, $f12, $f7 */);
    M2C_ERROR(/* unknown instruction: ps_msub $f8, $f0, $f3, $f8 */);
    M2C_ERROR(/* unknown instruction: ps_madd $f7, $f4, $f11, $f7 */);
    M2C_ERROR(/* unknown instruction: ps_cmpo0 $cr0, $f7, $f6 */);
    if (M2C_ERROR(/* Read from unset register $cr0_eq */)) {
        return 0;
    }
    M2C_ERROR(/* unknown instruction: ps_add $f6, $f0, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f5, $f0, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_nmsub $f0, $f7, $f5, $f6 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f13, $f13, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f12, $f12, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f11, $f11, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_merge00 $f5, $f13, $f12 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f10, $f10, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_merge11 $f4, $f13, $f12 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f9, $f9, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f6, $f13, $f1 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f8, $f8, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_madd $f6, $f12, $f2, $f6 */);
    M2C_ERROR(/* unknown instruction: ps_nmadd $f6, $f11, $f3, $f6 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f7, $f10, $f1 */);
    M2C_ERROR(/* unknown instruction: ps_merge00 $f5, $f11, $f6 */);
    M2C_ERROR(/* unknown instruction: ps_merge11 $f4, $f11, $f6 */);
    M2C_ERROR(/* unknown instruction: ps_madd $f7, $f9, $f2, $f7 */);
    M2C_ERROR(/* unknown instruction: ps_nmadd $f7, $f8, $f3, $f7 */);
    return 1;
}

s32 PSMTXInvXpose(void) {
    M2C_ERROR(/* unknown instruction: ps_merge10 $f6, $f1, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_merge10 $f7, $f3, $f2 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f11, $f3, $f6 */);
    M2C_ERROR(/* unknown instruction: ps_merge10 $f8, $f5, $f4 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f13, $f5, $f7 */);
    M2C_ERROR(/* unknown instruction: ps_msub $f11, $f1, $f7, $f11 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f12, $f1, $f8 */);
    M2C_ERROR(/* unknown instruction: ps_msub $f13, $f3, $f8, $f13 */);
    M2C_ERROR(/* unknown instruction: ps_msub $f12, $f5, $f6, $f12 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f10, $f3, $f4 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f9, $f0, $f5 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f8, $f1, $f2 */);
    M2C_ERROR(/* unknown instruction: ps_msub $f10, $f2, $f5, $f10 */);
    M2C_ERROR(/* unknown instruction: ps_msub $f9, $f1, $f4, $f9 */);
    M2C_ERROR(/* unknown instruction: ps_msub $f8, $f0, $f3, $f8 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f7, $f0, $f13 */);
    M2C_ERROR(/* unknown instruction: ps_sub $f1, $f1, $f1 */);
    M2C_ERROR(/* unknown instruction: ps_madd $f7, $f2, $f12, $f7 */);
    M2C_ERROR(/* unknown instruction: ps_madd $f7, $f4, $f11, $f7 */);
    M2C_ERROR(/* unknown instruction: ps_cmpo0 $cr0, $f7, $f1 */);
    if (M2C_ERROR(/* Read from unset register $cr0_eq */)) {
        return 0;
    }
    M2C_ERROR(/* unknown instruction: ps_add $f6, $f0, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f5, $f0, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_nmsub $f0, $f7, $f5, $f6 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f13, $f13, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f12, $f12, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f11, $f11, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f10, $f10, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f9, $f9, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f8, $f8, $f0 */);
    return 1;
}

void MTXRotRad(s32 arg0, s32 arg1, f32 farg0) {
    f32 temp_f31;

    temp_f31 = fn_80156F14(farg0);
    PSMTXRotTrig(arg0, arg1, temp_f31, fn_80156F38(farg0));
}
