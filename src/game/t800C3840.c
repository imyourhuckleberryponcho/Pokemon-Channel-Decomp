/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

extern M2C_UNK DriveInfo_8031B940;
M2C_UNK ClearArena_800C3718();
M2C_UNK DVDInit();
M2C_UNK EXIInit();
M2C_UNK EnableMetroTRKInterrupts();
M2C_UNK OSDisableInterrupts();
M2C_UNK OSEnableInterrupts();
M2C_UNK OSReport();
M2C_UNK PPCDisableSpeculation();
s32 PPCMfhid2();
M2C_UNK PPCMthid2(s32);
M2C_UNK PPCMtmmcr0(M2C_UNK);
M2C_UNK PPCMtmmcr1(M2C_UNK);
M2C_UNK PPCMtpmc1(M2C_UNK);
M2C_UNK PPCMtpmc2(M2C_UNK);
M2C_UNK PPCMtpmc3(M2C_UNK);
M2C_UNK PPCMtpmc4(M2C_UNK);
M2C_UNK PPCSetFpNonIEEEMode();
M2C_UNK SIInit();
M2C_UNK __OSCacheInit();
M2C_UNK __OSContextInit();
u64 __OSGetSystemTime();
M2C_UNK __OSInitMemoryProtection();
M2C_UNK __OSInitSram();
M2C_UNK __OSInitSystemCall();
M2C_UNK __OSInterruptInit();
M2C_UNK __OSModuleInit();
M2C_UNK __OSSetInterruptHandler(M2C_UNK, M2C_UNK *);
M2C_UNK __OSThreadInit();
extern s32 AreWeInitialized_80350860;
extern u32 BI2DebugFlagHolder_80350848;
extern u32 *BI2DebugFlag_80350844;
extern void *BootInfo_80350840;
extern M2C_UNK __ArenaHi;
extern M2C_UNK __ArenaLo;
extern s32 __DVDLongFileNameFlag;
extern s32 __OSInIPL;
extern s32 __OSIsGcam;
extern M2C_UNK __OSResetSWInterruptHandler;
extern M2C_UNK __OSStartTime;
extern s32 __OSVersion;
extern s32 __PADSpec;
extern M2C_UNK _stack_addr;
M2C_UNK DBPrintf();
M2C_UNK ICInvalidateRange(s32 *, u32);
s32 __DBIsExceptionMarked(u8);
extern s32 OSExceptionTable_80350864;
extern s32 __DBVECTOR;
extern M2C_UNK __OSDBINTEND;
extern M2C_UNK __OSDBINTSTART;
extern M2C_UNK __OSDBJUMPEND;
extern M2C_UNK __OSEVEnd;
extern s32 __OSEVSetNumber;
extern M2C_UNK __OSEVStart;
M2C_UNK __OSUnhandledException(M2C_UNK, M2C_UNK);
M2C_UNK ICFlashInvalidate();
extern M2C_UNK lbl_8034FF34;
extern M2C_UNK AlarmQueue_80350880;
M2C_UNK PPCMtdec(s32);
u64 __div2i(s32, s32, s32, s32);
M2C_UNK OSRestoreInterrupts(s32);
M2C_UNK OSClearContext(M2C_UNK *);
M2C_UNK OSDisableScheduler();
M2C_UNK OSEnableScheduler();
M2C_UNK OSLoadContext(M2C_UNK *);
M2C_UNK OSSetCurrentContext(M2C_UNK *);
M2C_UNK __OSReschedule();
extern s32 __OSArenaHi_80350888;
extern s32 __OSArenaLo_8034FF38;
s32 OSGetTick();
extern M2C_UNK DSPInitCode_802A5878;
extern s32 sp;

static void InquiryCallback(void *arg1);
void OSInit(void);
static void OSExceptionInit(void);
static s32 __OSDBIntegrator(void);
void fn_800C3EF8(void);
s32 __OSSetExceptionHandler(u8 arg0, s32 arg1);
s32 __OSGetExceptionHandler(u8 arg0);
static void OSExceptionVector(s32 arg0, s32 arg2);
void OSDefaultExceptionHandler(void *arg1);
s32 __OSPSInit(void);
u8 fn_800C4074(void);
void OSRegisterVersion(s32 arg0);
void OSInitAlarm(void);
void OSCreateAlarm(void *arg0);
static void InsertAlarm(void *arg0, s32 arg2, s32 arg3, s32 arg4);
void OSSetAlarm(void *arg0, s32 arg2, s32 arg3, s32 arg4);
void OSCancelAlarm(void *arg0);
static void DecrementerExceptionCallback(M2C_UNK *arg1);
static void DecrementerExceptionHandler(void *arg1);
s32 OSGetArenaHi(void);
s32 OSGetArenaLo(void);
void OSSetArenaHi(s32 arg0);
void OSSetArenaLo(s32 arg0);
s32 OSAllocFromArenaLo(s32 arg0, s32 arg1);
void __OSInitAudioSystem(void);
void __OSStopAudioSystem(void);
s32 DCEnable(void);
void DCInvalidateRange(s32 arg0, u32 arg1);
void DCFlushRange(s32 arg0, u32 arg1);
void DCStoreRange(s32 arg0, u32 arg1);
void DCFlushRangeNoSync(s32 arg0, u32 arg1);
void DCStoreRangeNoSync(s32 arg0, u32 arg1);

static void InquiryCallback(void *arg1) {
    if ((s32) M2C_FIELD(arg1, s32 *, 0xC) != 0) {
        *(s16 *)0x800030E6 = 1;
        return;
    }
    /* draft: did not compile: *(void *)0x800030E6 = (s16) (M2C_FIELD(&DriveInfo_8031B940, u16 *, 2) | 0x8000); */
}

void OSInit(void) { } /* draft: stub */

static void OSExceptionInit(void) { } /* draft: stub */

static s32 __OSDBIntegrator(void) {
    s32 saved_reg_lr;
    M2C_FIELD((void *)0x40, s32 *, 0xC) = (s32) saved_reg_lr;
    return M2C_ERROR(/* unknown instruction: mtmsr $r3 */);
}

void fn_800C3EF8(void) {
    M2C_ERROR(/* unknown instruction: bla 0x60 */);
}

s32 __OSSetExceptionHandler(u8 arg0, s32 arg1) {
    s32 *temp_r5;
    s32 temp_r3;

    /* draft: did not compile: temp_r5 = OSExceptionTable_80350864 + (arg0 * 4); */
    temp_r3 = *temp_r5;
    *temp_r5 = arg1;
    return temp_r3;
}

s32 __OSGetExceptionHandler(u8 arg0) {
    return 0;
}

static void OSExceptionVector(s32 arg0, s32 arg2) {
    s32 saved_reg_lr;
    s32 temp_r3;
    void *temp_r4;

    M2C_ERROR(/* unknown instruction: mtsprg 0x0, $r4 */);
    temp_r4 = *(void **)0xC0;
    M2C_FIELD(temp_r4, s32 *, 0xC) = arg0;
    M2C_FIELD(temp_r4, s32 *, 0x10) = (s32) M2C_ERROR(/* unknown instruction: mfsprg $r3, 0x0 */);
    M2C_FIELD(temp_r4, s32 *, 0x14) = arg2;
    M2C_FIELD(temp_r4, u16 *, 0x1A2) = (u16) (M2C_FIELD(temp_r4, u16 *, 0x1A2) | 2);
    M2C_FIELD(temp_r4, s32 *, 0x80) = (s32) M2C_ERROR(/* unknown instruction: mfcr $r3 */);
    M2C_FIELD(temp_r4, s32 *, 0x84) = (s32) saved_reg_lr;
    M2C_FIELD(temp_r4, s32 *, 0x88) = (s32) M2C_ERROR(/* Read from unset register $ctr */);
    M2C_FIELD(temp_r4, s32 *, 0x8C) = (s32) M2C_ERROR(/* unknown instruction: mfxer $r3 */);
    M2C_FIELD(temp_r4, s32 *, 0x198) = (s32) M2C_ERROR(/* unknown instruction: mfsrr0 $r3 */);
    temp_r3 = M2C_ERROR(/* unknown instruction: mfsrr1 $r3 */);
    M2C_FIELD(temp_r4, s32 *, 0x19C) = temp_r3;
    M2C_ERROR(/* unknown instruction: mfmsr $r3 */);
    M2C_ERROR(/* unknown instruction: mtsrr1 $r3 */);
    if (!(temp_r3 & 2)) {
        M2C_ERROR(/* unknown instruction: mtsrr0 $r5 */);
        M2C_ERROR(/* unknown instruction: rfi */);
    }
    M2C_ERROR(/* unknown instruction: mtsrr0 $r5 */);
    M2C_ERROR(/* unknown instruction: rfi */);
}

void OSDefaultExceptionHandler(void *arg1) {
    s32 saved_reg_r2;
    M2C_FIELD(arg1, s32 *, 0) = (s32) M2C_ERROR(/* Read from unset register $r0 */);
    M2C_FIELD(arg1, void **, 4) = (void *) sp;
    M2C_FIELD(arg1, s32 *, 8) = (s32) saved_reg_r2;
    M2C_FIELD(arg1, s32 *, 0x1A8) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r0, GQR1 */);
    M2C_FIELD(arg1, s32 *, 0x1AC) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r0, GQR2 */);
    M2C_FIELD(arg1, s32 *, 0x1B0) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r0, GQR3 */);
    M2C_FIELD(arg1, s32 *, 0x1B4) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r0, GQR4 */);
    M2C_FIELD(arg1, s32 *, 0x1B8) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r0, GQR5 */);
    M2C_FIELD(arg1, s32 *, 0x1BC) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r0, GQR6 */);
    M2C_FIELD(arg1, s32 *, 0x1C0) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r0, GQR7 */);
    __OSUnhandledException(M2C_ERROR(/* unknown instruction: mfdsisr $r5 */), M2C_ERROR(/* unknown instruction: mfdar $r6 */));
}

s32 __OSPSInit(void) {
    PPCMthid2(PPCMfhid2() | 0xA0000000);
    ICFlashInvalidate();
    M2C_SYNC();
    M2C_ERROR(/* unknown instruction: mtspr GQR0, $r3 */);
    M2C_ERROR(/* unknown instruction: mtspr GQR1, $r3 */);
    M2C_ERROR(/* unknown instruction: mtspr GQR2, $r3 */);
    M2C_ERROR(/* unknown instruction: mtspr GQR3, $r3 */);
    M2C_ERROR(/* unknown instruction: mtspr GQR4, $r3 */);
    M2C_ERROR(/* unknown instruction: mtspr GQR5, $r3 */);
    M2C_ERROR(/* unknown instruction: mtspr GQR6, $r3 */);
    M2C_ERROR(/* unknown instruction: mtspr GQR7, $r3 */);
    return 0;
}

u8 fn_800C4074(void) {
    return (u8) M2C_FIELD((void *)0xCC006000, s32 *, 0x24);
}

void OSRegisterVersion(s32 arg0) {
    OSReport(&lbl_8034FF34, arg0);
}

void OSInitAlarm(void) {
    if (0 /* draft: did not compile */) {
        M2C_FIELD(&AlarmQueue_80350880, s32 *, 4) = 0;
        M2C_FIELD(&AlarmQueue_80350880, s32 *, 0) = 0;
        __OSSetExceptionHandler((unsigned char)(8), (long)(0));
    }
}

void OSCreateAlarm(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

static void InsertAlarm(void *arg0, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r26;
    s32 temp_r27;
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r4_3;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 temp_r6_3;
    s32 temp_r7;
    s32 temp_r8;
    s32 var_r25;
    s32 var_r30;
    s32 var_r5;
    u32 temp_r4_2;
    u64 temp_r3_2;
    u64 temp_ret;
    u64 temp_ret_2;
    u64 temp_ret_3;
    u64 temp_ret_4;
    void *temp_r3_3;
    void *temp_r4_4;
    void *var_r6;

    var_r5 = arg2;
    temp_r4 = 0 ^ 0x80000000;
    var_r25 = var_r5;
    var_r30 = arg3;
    temp_r3 = -((temp_r4 - temp_r4) - !M2C_CARRY);
    if (temp_r3 != 0) {
        temp_ret = __OSGetSystemTime(temp_r3);
        temp_r3_2 = temp_ret;
        temp_r4_2 = (u32) temp_ret;
        temp_r7 = M2C_FIELD(arg0, s32 *, 0x20);
        temp_r8 = M2C_FIELD(arg0, s32 *, 0x24);
        temp_r6 = temp_r7 ^ 0x80000000;
        var_r5 = -((temp_r6 - temp_r6) - !M2C_CARRY);
        var_r30 = temp_r8;
        var_r25 = temp_r7;
        if (0 != var_r5) {
            temp_r27 = M2C_FIELD(arg0, s32 *, 0x18);
            temp_r26 = M2C_FIELD(arg0, s32 *, 0x1C);
            temp_ret_2 = __div2i((temp_r3_2 - temp_r7) - !M2C_CARRY, temp_r4_2 - temp_r8, temp_r27, temp_r26);
            var_r5 = (u32) temp_ret_2 + 1;
            var_r30 += temp_r26 * var_r5;
            var_r25 = var_r25 + ((temp_r27 * var_r5) + MULTU_HI(temp_r26, var_r5) + (temp_r26 * (temp_ret_2 + M2C_CARRY))) + M2C_CARRY;
        }
    }
    M2C_FIELD(arg0, s32 *, 0) = arg4;
    temp_r4_3 = var_r25 ^ 0x80000000;
    M2C_FIELD(arg0, s32 *, 0xC) = var_r30;
    M2C_FIELD(arg0, s32 *, 8) = var_r25;
    var_r6 = M2C_FIELD(&AlarmQueue_80350880, void **, 0);
loop_13:
    if (var_r6 == NULL) {
        M2C_FIELD(arg0, void **, 0x14) = NULL;
        temp_r4_4 = M2C_FIELD(&AlarmQueue_80350880, void **, 4);
        M2C_FIELD(&AlarmQueue_80350880, void **, 4) = arg0;
        M2C_FIELD(arg0, void **, 0x10) = temp_r4_4;
        if (temp_r4_4 != NULL) {
            M2C_FIELD(temp_r4_4, void **, 0x14) = arg0;
            return;
        }
        M2C_FIELD(&AlarmQueue_80350880, void **, 4) = arg0;
        M2C_FIELD(&AlarmQueue_80350880, void **, 0) = arg0;
        temp_ret_3 = __OSGetSystemTime(var_r5);
        temp_r6_2 = ((M2C_FIELD(arg0, s32 *, 8) - temp_ret_3) - !M2C_CARRY) ^ 0x80000000;
        if (-((temp_r6_2 - temp_r6_2) - !M2C_CARRY) != 0) {
            PPCMtdec(0);
            return;
        }
        if (-((temp_r6_2 - temp_r6_2) - !M2C_CARRY) != 0) {
            PPCMtdec(M2C_FIELD(arg0, s32 *, 0xC) - (u32) temp_ret_3);
            return;
        }
        PPCMtdec(0x7FFFFFFF);
        return;
    }
    var_r5 = M2C_FIELD(var_r6, s32 *, 0xC);
    if (-((temp_r4_3 - temp_r4_3) - !M2C_CARRY) != 0) {
        M2C_FIELD(arg0, void **, 0x10) = (void *) M2C_FIELD(var_r6, void **, 0x10);
        M2C_FIELD(var_r6, void **, 0x10) = arg0;
        M2C_FIELD(arg0, void **, 0x14) = var_r6;
        temp_r3_3 = M2C_FIELD(arg0, void **, 0x10);
        if (temp_r3_3 != NULL) {
            M2C_FIELD(temp_r3_3, void **, 0x14) = arg0;
            return;
        }
        M2C_FIELD(&AlarmQueue_80350880, void **, 0) = arg0;
        temp_ret_4 = __OSGetSystemTime();
        temp_r6_3 = ((M2C_FIELD(arg0, s32 *, 8) - temp_ret_4) - !M2C_CARRY) ^ 0x80000000;
        if (-((temp_r6_3 - temp_r6_3) - !M2C_CARRY) != 0) {
            PPCMtdec(0);
            return;
        }
        if (-((temp_r6_3 - temp_r6_3) - !M2C_CARRY) != 0) {
            PPCMtdec(M2C_FIELD(arg0, s32 *, 0xC) - (u32) temp_ret_4);
            return;
        }
        PPCMtdec(0x7FFFFFFF);
        return;
    }
    var_r6 = M2C_FIELD(var_r6, void **, 0x14);
    goto loop_13;
}

void OSSetAlarm(void *arg0, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r3;
    u64 temp_ret;

    temp_r3 = OSDisableInterrupts();
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    temp_ret = __OSGetSystemTime();
    InsertAlarm(arg0, arg2 + temp_ret + M2C_CARRY, arg3 + (u32) temp_ret, arg4);
    OSRestoreInterrupts(temp_r3);
}

void OSCancelAlarm(void *arg0) {
    u8 temp_r31;
    s32 temp_r6;
    u64 temp_ret;
    void *temp_r29;
    void *temp_r3;

    temp_r31 = OSDisableInterrupts();
    if ((u32) M2C_FIELD(arg0, u32 *, 0) == 0U) {
        OSRestoreInterrupts(temp_r31);
        return;
    }
    temp_r29 = M2C_FIELD(arg0, void **, 0x14);
    if (temp_r29 == NULL) {
        M2C_FIELD(&AlarmQueue_80350880, void **, 4) = (void *) M2C_FIELD(arg0, void **, 0x10);
    } else {
        M2C_FIELD(temp_r29, void **, 0x10) = (void *) M2C_FIELD(arg0, void **, 0x10);
    }
    temp_r3 = M2C_FIELD(arg0, void **, 0x10);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, void **, 0x14) = temp_r29;
    } else {
        M2C_FIELD(&AlarmQueue_80350880, void **, 0) = temp_r29;
        if (temp_r29 != NULL) {
            temp_ret = __OSGetSystemTime();
            if (-(((temp_r6 = ((M2C_FIELD(temp_r29, s32 *, 8) - temp_ret) - !M2C_CARRY) ^ 0x80000000) - temp_r6) - !M2C_CARRY) != 0) {
                PPCMtdec(0);
            } else if (-((temp_r6 - temp_r6) - !M2C_CARRY) != 0) {
                PPCMtdec(M2C_FIELD(temp_r29, s32 *, 0xC) - (u32) temp_ret);
            } else {
                PPCMtdec(0x7FFFFFFF);
            }
        }
    }
    M2C_FIELD(arg0, u32 *, 0) = 0U;
    OSRestoreInterrupts(temp_r31);
}

#pragma push
#pragma peephole off
static void DecrementerExceptionCallback(M2C_UNK *arg1) {
    M2C_UNK sp18;
    M2C_UNK (*temp_r30_2)(void *, M2C_UNK *);
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r6;
    s32 temp_r6_2;
    u32 temp_r28;
    u64 temp_r30;
    u64 temp_ret;
    u64 temp_ret_2;
    u64 temp_ret_3;
    void *temp_r28_2;
    void *temp_r31;
    void *temp_r3_2;

    temp_ret = __OSGetSystemTime();
    temp_r28 = (u32) temp_ret;
    temp_r30 = temp_ret;
    temp_r31 = M2C_FIELD(&AlarmQueue_80350880, void **, 0);
    if ((void *) M2C_FIELD(&AlarmQueue_80350880, void **, 0) == NULL) {
        OSLoadContext(arg1);
    }
    temp_r4 = temp_r30 ^ 0x80000000;
    temp_r3 = -((temp_r4 - temp_r4) - !M2C_CARRY);
    if (temp_r3 != 0) {
        temp_ret_2 = __OSGetSystemTime(temp_r3);
        if (-(((temp_r6 = ((M2C_FIELD(temp_r31, s32 *, 8) - temp_ret_2) - !M2C_CARRY) ^ 0x80000000) - temp_r6) - !M2C_CARRY) != 0) {
            PPCMtdec(0);
        } else if (-((temp_r6 - temp_r6) - !M2C_CARRY) != 0) {
            PPCMtdec(M2C_FIELD(temp_r31, s32 *, 0xC) - (u32) temp_ret_2);
        } else {
            PPCMtdec(0x7FFFFFFF);
        }
        OSLoadContext(arg1);
    }
    temp_r3_2 = M2C_FIELD(temp_r31, void **, 0x14);
    M2C_FIELD(&AlarmQueue_80350880, void **, 0) = temp_r3_2;
    if (temp_r3_2 == NULL) {
        M2C_FIELD(&AlarmQueue_80350880, s32 *, 4) = 0;
    } else {
        M2C_FIELD(temp_r3_2, s32 *, 0x10) = 0;
    }
    temp_r30_2 = M2C_FIELD(temp_r31, M2C_UNK (**)(void *, M2C_UNK *), 0);
    temp_r4_2 = 0 ^ 0x80000000;
    M2C_FIELD(temp_r31, M2C_UNK (**)(void *, M2C_UNK *), 0) = NULL;
    if (-((temp_r4_2 - temp_r4_2) - !M2C_CARRY) != 0) {
        /* draft: did not compile: InsertAlarm(temp_r31, 0, 0, temp_r30_2); */
    }
    temp_r28_2 = M2C_FIELD(&AlarmQueue_80350880, void **, 0);
    if (temp_r28_2 != NULL) {
        temp_ret_3 = __OSGetSystemTime();
        if (-(((temp_r6_2 = ((M2C_FIELD(temp_r28_2, s32 *, 8) - temp_ret_3) - !M2C_CARRY) ^ 0x80000000) - temp_r6_2) - !M2C_CARRY) != 0) {
            PPCMtdec(0);
        } else if (-((temp_r6_2 - temp_r6_2) - !M2C_CARRY) != 0) {
            PPCMtdec(M2C_FIELD(temp_r28_2, s32 *, 0xC) - (u32) temp_ret_3);
        } else {
            PPCMtdec(0x7FFFFFFF);
        }
    }
    temp_r30_2(temp_r31, arg1);
    OSDisableScheduler();
    OSClearContext(&sp18);
    OSSetCurrentContext(&sp18);
    OSClearContext(&sp18);
    OSSetCurrentContext(arg1);
    OSEnableScheduler();
    __OSReschedule();
    OSLoadContext(arg1);
}
#pragma pop

static void DecrementerExceptionHandler(void *arg1) {
    s32 saved_reg_r2;
    M2C_FIELD(arg1, s32 *, 0) = (s32) M2C_ERROR(/* Read from unset register $r0 */);
    M2C_FIELD(arg1, void **, 4) = (void *) sp;
    M2C_FIELD(arg1, s32 *, 8) = (s32) saved_reg_r2;
    M2C_FIELD(arg1, s32 *, 0x1A8) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r0, GQR1 */);
    M2C_FIELD(arg1, s32 *, 0x1AC) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r0, GQR2 */);
    M2C_FIELD(arg1, s32 *, 0x1B0) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r0, GQR3 */);
    M2C_FIELD(arg1, s32 *, 0x1B4) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r0, GQR4 */);
    M2C_FIELD(arg1, s32 *, 0x1B8) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r0, GQR5 */);
    M2C_FIELD(arg1, s32 *, 0x1BC) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r0, GQR6 */);
    M2C_FIELD(arg1, s32 *, 0x1C0) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r0, GQR7 */);
    DecrementerExceptionCallback((long *)(0));
}

s32 OSGetArenaHi(void) {
    return __OSArenaHi_80350888;
}

s32 OSGetArenaLo(void) {
    return __OSArenaLo_8034FF38;
}

void OSSetArenaHi(s32 arg0) {
    __OSArenaHi_80350888 = arg0;
}

void OSSetArenaLo(s32 arg0) {
    __OSArenaLo_8034FF38 = arg0;
}

s32 OSAllocFromArenaLo(s32 arg0, s32 arg1) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    temp_r4 = arg1 - 1;
    temp_r5 = ~(temp_r4 | temp_r4);
    temp_r6 = temp_r5 & (__OSArenaLo_8034FF38 + temp_r4);
    __OSArenaLo_8034FF38 = temp_r5 & (temp_r6 + arg0 + temp_r4);
    return temp_r6;
}

void __OSInitAudioSystem(void) { } /* draft: stub */

void __OSStopAudioSystem(void) {
    s32 temp_r30;
    void *temp_r4;

    M2C_FIELD((void *)0xCC005000, u16 *, 0xA) = 0x804U;
    M2C_FIELD((void *)0xCC005000, u16 *, 0x36) = (u16) (M2C_FIELD((void *)0xCC005000, u16 *, 0x36) & 0xFFFF7FFF);
loop_2:
    if (M2C_FIELD((void *)0xCC005000, u16 *, 0xA) & 0x400) {
        goto loop_2;
    }
loop_5:
    if (M2C_FIELD((void *)0xCC005000, u16 *, 0xA) & 0x200) {
        goto loop_5;
    }
    M2C_FIELD((void *)0xCC005000, u16 *, 0xA) = 0x8ACU;
    M2C_FIELD((void *)0xCC005000, s16 *, 0) = 0;
    /* draft: did not compile: temp_r4 = (void *)0xCC000000 + 0x5000; */
    do {

    } while (((M2C_FIELD(temp_r4, u16 *, 6) & ~0xFFFF0000) | (M2C_FIELD(temp_r4, u16 *, 4) << 0x10)) & 0x80000000);
    temp_r30 = OSGetTick();
    do {

    } while ((s32) (OSGetTick() - temp_r30) < 0x2C);
    M2C_FIELD((void *)0xCC005000, u16 *, 0xA) = (u16) (M2C_FIELD((void *)0xCC005000, u16 *, 0xA) | 1);
loop_12:
    if (M2C_FIELD((void *)0xCC005000, u16 *, 0xA) & 1) {
        goto loop_12;
    }
}

s32 DCEnable(void) {
    M2C_SYNC();
    M2C_ERROR(/* unknown instruction: mtspr HID0, $r3 */);
    return M2C_ERROR(/* unknown instruction: mfspr $r3, HID0 */) | 0x4000;
}

void DCInvalidateRange(s32 arg0, u32 arg1) {
    s32 var_r3;
    u32 var_ctr;

    var_r3 = arg0;
    if (arg1 > 0U) {
        var_ctr = (u32) (arg1 + (var_r3 & 0x1F) + 0x1F) >> 5U;
        do {
            M2C_DCACHE_INVALIDATE(var_r3);
            var_r3 += 0x20;
            var_ctr -= 1;
        } while (var_ctr != 0);
    }
}

void DCFlushRange(s32 arg0, u32 arg1) {
    s32 var_r3;
    u32 var_ctr;

    var_r3 = arg0;
    if (arg1 > 0U) {
        var_ctr = (u32) (arg1 + (var_r3 & 0x1F) + 0x1F) >> 5U;
        do {
            M2C_DCACHE_CLEAN_INVALIDATE(var_r3);
            var_r3 += 0x20;
            var_ctr -= 1;
        } while (var_ctr != 0);
        M2C_ERROR(/* unknown instruction: sc */);
    }
}

void DCStoreRange(s32 arg0, u32 arg1) {
    s32 var_r3;
    u32 var_ctr;

    var_r3 = arg0;
    if (arg1 > 0U) {
        var_ctr = (u32) (arg1 + (var_r3 & 0x1F) + 0x1F) >> 5U;
        do {
            M2C_DCACHE_CLEAN(var_r3);
            var_r3 += 0x20;
            var_ctr -= 1;
        } while (var_ctr != 0);
        M2C_ERROR(/* unknown instruction: sc */);
    }
}

void DCFlushRangeNoSync(s32 arg0, u32 arg1) {
    s32 var_r3;
    u32 var_ctr;

    var_r3 = arg0;
    if (arg1 > 0U) {
        var_ctr = (u32) (arg1 + (var_r3 & 0x1F) + 0x1F) >> 5U;
        do {
            M2C_DCACHE_CLEAN_INVALIDATE(var_r3);
            var_r3 += 0x20;
            var_ctr -= 1;
        } while (var_ctr != 0);
    }
}

void DCStoreRangeNoSync(s32 arg0, u32 arg1) {
    s32 var_r3;
    u32 var_ctr;

    var_r3 = arg0;
    if (arg1 > 0U) {
        var_ctr = (u32) (arg1 + (var_r3 & 0x1F) + 0x1F) >> 5U;
        do {
            M2C_DCACHE_CLEAN(var_r3);
            var_r3 += 0x20;
            var_ctr -= 1;
        } while (var_ctr != 0);
    }
}
