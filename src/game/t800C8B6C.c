/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK UnsetRun(void *);
extern s32 RunQueueBits_803508F0;
extern s32 RunQueueHint_803508F4;
extern M2C_UNK RunQueue_8031BA58;
M2C_UNK OSClearContext(void *);
M2C_UNK OSDisableInterrupts();
M2C_UNK OSEnableInterrupts();
M2C_UNK OSLoadContext(void *);
M2C_UNK OSSetCurrentContext(void *);
u32 fn_800C5410();
u32 OSSaveContext(void *);
extern s32 Reschedule_803508F8;
M2C_UNK OSRestoreInterrupts();
M2C_UNK OSInitContext(void *, s32, M2C_UNK, s32);
extern M2C_UNK __OSErrorTable;
extern s32 lbl_8034FF40;
M2C_UNK __OSUnlockAllMutex(void *);
u32 fn_800C5574();
extern M2C_UNK lbl_802A6B70;
extern M2C_UNK lbl_802A6BA0;
u64 __div2i(u64, u32, M2C_UNK, u32);
u64 __mod2i(s32, s32, M2C_UNK, u32);
M2C_UNK PPCHalt();
s32 OSGetConsoleType();
extern s32 lbl_80350908;
extern s32 lbl_8035090C;
extern s32 lbl_80350910;
extern s32 lbl_80350914;
M2C_UNK EXIDeselect(s32);
M2C_UNK EXIImm(s32, u32 *, u32, M2C_UNK, M2C_UNK);
s32 EXILock(s32, s32, M2C_UNK);
s32 EXISelect(s32, s32, M2C_UNK);
M2C_UNK EXISync(s32);
M2C_UNK EXIUnlock(s32);
extern s32 Si_802A6C14;
extern M2C_UNK Packet_8031C450;
extern M2C_UNK TypeTime_8031C570;
extern M2C_UNK lbl_802A6BD0;
extern M2C_UNK lbl_8031C590;
M2C_UNK SITransfer(s32, M2C_UNK *, M2C_UNK, void *, M2C_UNK, M2C_UNK *, M2C_UNK, u32);
M2C_UNK OSCancelAlarm(void *);
s32 __SITransfer(s32, s32, s32, s32, s32, s32);
s32 SIGetResponseRaw(s32);
s32 fn_800D2B40();
extern M2C_UNK GetTypeCallback_800CB4BC;
extern M2C_UNK lbl_80350918;
extern u32 lbl_8031C5F0;
extern s32 _ctors;

s32 __OSGetEffectivePriority(void *arg0);
s32 SetEffectivePriority(void *arg0, s32 arg1);
static void *SelectThread(s32 arg0);
void __OSReschedule(void);
s32 OSCreateThread(void *arg0, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void OSExitThread(s32 arg0);
void OSCancelThread(void *arg0);
s32 fn_800C9448(void *arg0, s32 *arg1);
s32 OSResumeThread(void *arg0);
s32 OSSuspendThread(void *arg0);
void OSSleepThread(void *arg0);
void OSWakeupThread(void *arg0);
void OSClearStack(s32 arg0);
void OSGetTime();
s32 OSGetTick(void);
s32 __OSGetSystemTime(void);
void GetDates(s32 arg0, void *arg1);
void OSTicksToCalendarTime(s32 arg0, s32 arg1, void *arg2);
void InitMetroTRK_BBA(void);
void __init_user(void);
static void __init_cpp(void);
void _ExitProcess(void);
s32 InitializeUART(void);
s32 fn_800CA148(u32 *arg0, u32 arg1);
s32 SIBusy(void);
s32 SIIsChanBusy(s32 arg0);
u32 CompleteTransfer(void);
void SIInterruptHandler_800CA6BC(s32 arg0, s32 arg1);
s32 SIEnablePollingInterrupt(s32 arg0);
s32 SIRegisterPollingHandler(u32 arg0);

s32 __OSGetEffectivePriority(void *arg0) {
    s32 temp_r0;
    s32 var_r4;
    void *temp_r3;
    void *var_r5;

    var_r4 = M2C_FIELD(arg0, s32 *, 0x2D4);
    var_r5 = M2C_FIELD(arg0, void **, 0x2F4);
loop_5:
    if (var_r5 != NULL) {
        temp_r3 = M2C_FIELD(var_r5, void **, 0);
        if (temp_r3 != NULL) {
            temp_r0 = M2C_FIELD(temp_r3, s32 *, 0x2D0);
            if (temp_r0 < var_r4) {
                var_r4 = temp_r0;
            }
        }
        var_r5 = M2C_FIELD(var_r5, void **, 0x10);
        goto loop_5;
    }
    return var_r4;
}

s32 SetEffectivePriority(void *arg0, s32 arg1) {
    u16 temp_r0;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r5;
    void *var_r5;

    temp_r0 = M2C_FIELD(arg0, u16 *, 0x2C8);
    switch ((s32) temp_r0) {                        /* irregular */
    case 1:
        UnsetRun(arg0);
        M2C_FIELD(arg0, s32 *, 0x2D0) = arg1;
        M2C_FIELD(arg0, void **, 0x2DC) = (void *) (&RunQueue_8031BA58 + (M2C_FIELD(arg0, s32 *, 0x2D0) * 8));
        temp_r4 = M2C_FIELD(arg0, void **, 0x2DC);
        temp_r3_2 = M2C_FIELD(temp_r4, void **, 4);
        if (temp_r3_2 == NULL) {
            M2C_FIELD(temp_r4, void **, 0) = arg0;
        } else {
            M2C_FIELD(temp_r3_2, void **, 0x2E0) = arg0;
        }
        M2C_FIELD(arg0, void **, 0x2E4) = temp_r3_2;
        M2C_FIELD(arg0, void **, 0x2E0) = NULL;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x2DC), void **, 4) = arg0;
        RunQueueBits_803508F0 |= 1 << (0x1F - M2C_FIELD(arg0, s32 *, 0x2D0));
        RunQueueHint_803508F4 = 1;
    case 3:
block_32:
    default:
        return 0;
    case 4:
        temp_r4_2 = M2C_FIELD(arg0, void **, 0x2E0);
        temp_r5 = M2C_FIELD(arg0, void **, 0x2E4);
        if (temp_r4_2 == NULL) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x2DC), void **, 4) = temp_r5;
        } else {
            M2C_FIELD(temp_r4_2, void **, 0x2E4) = temp_r5;
        }
        if (temp_r5 == NULL) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x2DC), void **, 0) = temp_r4_2;
        } else {
            M2C_FIELD(temp_r5, void **, 0x2E0) = temp_r4_2;
        }
        M2C_FIELD(arg0, s32 *, 0x2D0) = arg1;
        temp_r4_3 = M2C_FIELD(arg0, void **, 0x2DC);
        var_r5 = M2C_FIELD(temp_r4_3, void **, 0);
loop_19:
        if ((var_r5 != NULL) && ((s32) M2C_FIELD(var_r5, s32 *, 0x2D0) <= (s32) M2C_FIELD(arg0, s32 *, 0x2D0))) {
            var_r5 = M2C_FIELD(var_r5, void **, 0x2E0);
            goto loop_19;
        }
        if (var_r5 == NULL) {
            temp_r3_3 = M2C_FIELD(temp_r4_3, void **, 4);
            if (temp_r3_3 == NULL) {
                M2C_FIELD(temp_r4_3, void **, 0) = arg0;
            } else {
                M2C_FIELD(temp_r3_3, void **, 0x2E0) = arg0;
            }
            M2C_FIELD(arg0, void **, 0x2E4) = temp_r3_3;
            M2C_FIELD(arg0, void **, 0x2E0) = NULL;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x2DC), void **, 4) = arg0;
        } else {
            M2C_FIELD(arg0, void **, 0x2E0) = var_r5;
            temp_r3_4 = M2C_FIELD(var_r5, void **, 0x2E4);
            M2C_FIELD(var_r5, void **, 0x2E4) = arg0;
            M2C_FIELD(arg0, void **, 0x2E4) = temp_r3_4;
            if (temp_r3_4 == NULL) {
                M2C_FIELD(M2C_FIELD(arg0, void **, 0x2DC), void **, 0) = arg0;
            } else {
                M2C_FIELD(temp_r3_4, void **, 0x2E0) = arg0;
            }
        }
        temp_r3 = M2C_FIELD(arg0, void **, 0x2F0);
        if (temp_r3 != NULL) {
            return M2C_FIELD(temp_r3, s32 *, 8);
        }
        goto block_32;
    case 2:
        RunQueueHint_803508F4 = 1;
        M2C_FIELD(arg0, s32 *, 0x2D0) = arg1;
        goto block_32;
    }
}

static void *SelectThread(s32 arg0) {
    s32 temp_r7;
    void *temp_r6_2;
    void *temp_r4_2;
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r6;
    void *temp_r4;

    if ((s32) Reschedule_803508F8 > 0) {
        return NULL;
    }
    temp_r6 = *(void **)0x800000E4;
    if (0 /* draft: did not compile */) {
        return NULL;
    }
    if (temp_r6 != NULL) {
        if ((u16) M2C_FIELD(temp_r6, u16 *, 0x2C8) == 2) {
            if ((arg0 == 0) && ((s32) M2C_FIELD(temp_r6, s32 *, 0x2D0) <= (s32) CLZ(RunQueueBits_803508F0))) {
                return NULL;
            }
            M2C_FIELD(temp_r6, u16 *, 0x2C8) = 1U;
            M2C_FIELD(temp_r6, void **, 0x2DC) = (void *) (&RunQueue_8031BA58 + (M2C_FIELD(temp_r6, s32 *, 0x2D0) * 8));
            temp_r5_2 = M2C_FIELD(temp_r6, void **, 0x2DC);
            temp_r4 = M2C_FIELD(temp_r5_2, void **, 4);
            if (temp_r4 == NULL) {
                M2C_FIELD(temp_r5_2, void **, 0) = temp_r6;
            } else {
                M2C_FIELD(temp_r4, void **, 0x2E0) = temp_r6;
            }
            M2C_FIELD(temp_r6, void **, 0x2E4) = temp_r4;
            M2C_FIELD(temp_r6, s32 *, 0x2E0) = 0;
            RunQueueHint_803508F4 = 1;
            M2C_FIELD(M2C_FIELD(temp_r6, void **, 0x2DC), void **, 4) = temp_r6;
            RunQueueBits_803508F0 |= 1 << (0x1F - M2C_FIELD(temp_r6, s32 *, 0x2D0));
            goto block_13;
        }
block_13:
        if (!(M2C_FIELD(temp_r6, u16 *, 0x1A2) & 2) && (OSSaveContext(temp_r6) != 0U)) {
            return NULL;
        }
        goto block_16;
    }
block_16:
    if ((u32) RunQueueBits_803508F0 == 0) {
        /* draft: did not compile: SwitchThreadCallback_8034FF50(*(void *)0x800000E4, NULL); */
        /* draft: did not compile: *(void *)0x800000E4 = NULL; */
        OSSetCurrentContext(&RunQueue_8031BA58 + 0x730);
        do {
            OSEnableInterrupts();
loop_19:
            if ((u32) RunQueueBits_803508F0 == 0) {
                goto loop_19;
            }
            OSDisableInterrupts();
        } while ((u32) RunQueueBits_803508F0 == 0);
        OSClearContext(&RunQueue_8031BA58 + 0x730);
    }
    RunQueueHint_803508F4 = 0;
    temp_r7 = CLZ(RunQueueBits_803508F0);
    temp_r4_2 = &RunQueue_8031BA58 + (temp_r7 * 8);
    temp_r5 = M2C_FIELD(temp_r4_2, void **, 0);
    temp_r6_2 = M2C_FIELD(temp_r5, void **, 0x2E0);
    if (temp_r6_2 == NULL) {
        M2C_FIELD(temp_r4_2, s32 *, 4) = 0;
    } else {
        M2C_FIELD(temp_r6_2, s32 *, 0x2E4) = 0;
    }
    M2C_FIELD(temp_r4_2, void **, 0) = temp_r6_2;
    if ((void *) M2C_FIELD(temp_r4_2, void **, 0) == NULL) {
        RunQueueBits_803508F0 &= ~(1 << (0x1F - temp_r7));
    }
    M2C_FIELD(temp_r5, s16 *, 0x2C8) = 2;
    M2C_FIELD(temp_r5, s32 *, 0x2DC) = 0;
    /* draft: did not compile: SwitchThreadCallback_8034FF50(*(void *)0x800000E4, temp_r5); */
    /* draft: did not compile: *(void *)0x800000E4 = temp_r5; */
    OSSetCurrentContext(temp_r5);
    OSLoadContext(temp_r5);
    return temp_r5;
}

void __OSReschedule(void) {
    if ((s32) RunQueueHint_803508F4 != 0) {
        SelectThread(0);
    }
}

s32 OSCreateThread(void *arg0, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 *temp_r3;
    s32 *temp_r4;
    s32 temp_r7;
    s32 var_ctr;
    void *temp_r6;
    void *var_r5;

    if ((arg5 < 0) || (arg5 > 0x1F)) {
        return 0;
    }
    M2C_FIELD(arg0, s16 *, 0x2C8) = 1;
    temp_r7 = arg3 & 0xFFFFFFF8;
    M2C_FIELD(arg0, s16 *, 0x2CA) = (s16) (arg6 & 1);
    M2C_FIELD(arg0, s32 *, 0x2D4) = arg5;
    M2C_FIELD(arg0, s32 *, 0x2D0) = arg5;
    M2C_FIELD(arg0, s32 *, 0x2CC) = 1;
    M2C_FIELD(arg0, s32 *, 0x2D8) = -1;
    M2C_FIELD(arg0, s32 *, 0x2F0) = 0;
    M2C_FIELD(arg0, s32 *, 0x2E8) = 0;
    M2C_FIELD(arg0, s32 *, 0x2F8) = 0;
    M2C_FIELD(arg0, s32 *, 0x2F4) = 0;
    M2C_FIELD(temp_r7, s32 *, -8) = 0;
    M2C_FIELD(temp_r7, s32 *, -4) = 0;
    OSInitContext(arg0, temp_r7 - 8, 1, temp_r7);
    M2C_FIELD(arg0, s32 *, 0x2EC) = 0;
    /* draft: did not compile: M2C_FIELD(arg0, M2C_UNK (**)(), 0x84) = OSExitThread; */
    /* draft: did not compile: temp_r4 = arg3 - arg4; */
    M2C_FIELD(arg0, s32 *, 0xC) = arg2;
    M2C_FIELD(arg0, s32 *, 0x304) = arg3;
    M2C_FIELD(arg0, s32 **, 0x308) = temp_r4;
    temp_r3 = M2C_FIELD(arg0, s32 **, 0x308);
    *temp_r3 = 0xDEADBABE;
    M2C_FIELD(arg0, s32 *, 0x30C) = 0;
    M2C_FIELD(arg0, s32 *, 0x310) = 0;
    M2C_FIELD(arg0, s32 *, 0x314) = 0;
    OSDisableInterrupts(temp_r3, temp_r4);
    if ((u32) M2C_FIELD(&__OSErrorTable, u32 *, 0x40) != 0U) {
        var_ctr = 4;
        var_r5 = arg0;
        M2C_FIELD(arg0, s32 *, 0x19C) = (s32) (M2C_FIELD(arg0, s32 *, 0x19C) | 0x900);
        M2C_FIELD(arg0, u16 *, 0x1A2) = (u16) (M2C_FIELD(arg0, u16 *, 0x1A2) | 1);
        M2C_FIELD(arg0, s32 *, 0x194) = (s32) ((lbl_8034FF40 & 0xF8) | 4);
        do {
            M2C_FIELD(var_r5, s32 *, 0x94) = -1;
            M2C_FIELD(var_r5, s32 *, 0x90) = -1;
            M2C_FIELD(var_r5, s32 *, 0x1CC) = -1;
            M2C_FIELD(var_r5, s32 *, 0x1C8) = -1;
            M2C_FIELD(var_r5, s32 *, 0x9C) = -1;
            M2C_FIELD(var_r5, s32 *, 0x98) = -1;
            M2C_FIELD(var_r5, s32 *, 0x1D4) = -1;
            M2C_FIELD(var_r5, s32 *, 0x1D0) = -1;
            M2C_FIELD(var_r5, s32 *, 0xA4) = -1;
            M2C_FIELD(var_r5, s32 *, 0xA0) = -1;
            M2C_FIELD(var_r5, s32 *, 0x1DC) = -1;
            M2C_FIELD(var_r5, s32 *, 0x1D8) = -1;
            M2C_FIELD(var_r5, s32 *, 0xAC) = -1;
            M2C_FIELD(var_r5, s32 *, 0xA8) = -1;
            M2C_FIELD(var_r5, s32 *, 0x1E4) = -1;
            M2C_FIELD(var_r5, s32 *, 0x1E0) = -1;
            M2C_FIELD(var_r5, s32 *, 0xB4) = -1;
            M2C_FIELD(var_r5, s32 *, 0xB0) = -1;
            M2C_FIELD(var_r5, s32 *, 0x1EC) = -1;
            M2C_FIELD(var_r5, s32 *, 0x1E8) = -1;
            M2C_FIELD(var_r5, s32 *, 0xBC) = -1;
            M2C_FIELD(var_r5, s32 *, 0xB8) = -1;
            M2C_FIELD(var_r5, s32 *, 0x1F4) = -1;
            M2C_FIELD(var_r5, s32 *, 0x1F0) = -1;
            M2C_FIELD(var_r5, s32 *, 0xC4) = -1;
            M2C_FIELD(var_r5, s32 *, 0xC0) = -1;
            M2C_FIELD(var_r5, s32 *, 0x1FC) = -1;
            M2C_FIELD(var_r5, s32 *, 0x1F8) = -1;
            M2C_FIELD(var_r5, s32 *, 0xCC) = -1;
            M2C_FIELD(var_r5, s32 *, 0xC8) = -1;
            M2C_FIELD(var_r5, s32 *, 0x204) = -1;
            M2C_FIELD(var_r5, s32 *, 0x200) = -1;
            /* draft: did not compile: var_r5 += 0x40; */
            var_ctr -= 1;
        } while (var_ctr != 0);
    }
    temp_r6 = M2C_FIELD((void *)0x800000DC, void **, 4);
    if (temp_r6 == NULL) {
        M2C_FIELD((void *)0x800000DC, void **, 0) = arg0;
    } else {
        M2C_FIELD(temp_r6, void **, 0x2FC) = arg0;
    }
    M2C_FIELD(arg0, void **, 0x300) = temp_r6;
    M2C_FIELD(arg0, s32 *, 0x2FC) = 0;
    M2C_FIELD((void *)0x800000DC, void **, 4) = arg0;
    OSRestoreInterrupts();
    return 1;
}

void OSExitThread(s32 arg0) {
    s32 temp_r29;
    void *temp_r30;
    void *temp_r4;
    void *temp_r5;

    temp_r29 = OSDisableInterrupts();
    temp_r30 = *(void **)0x800000E4;
    OSClearContext(temp_r30);
    if (M2C_FIELD(temp_r30, u16 *, 0x2CA) & 1) {
        temp_r4 = M2C_FIELD(temp_r30, void **, 0x2FC);
        temp_r5 = M2C_FIELD(temp_r30, void **, 0x300);
        if (temp_r4 == NULL) {
            *(void **)0x800000E0 = temp_r5;
        } else {
            M2C_FIELD(temp_r4, void **, 0x300) = temp_r5;
        }
        if (temp_r5 == NULL) {
            *(void **)0x800000DC = temp_r4;
        } else {
            M2C_FIELD(temp_r5, void **, 0x2FC) = temp_r4;
        }
        M2C_FIELD(temp_r30, s16 *, 0x2C8) = 0;
    } else {
        M2C_FIELD(temp_r30, s16 *, 0x2C8) = 8;
        M2C_FIELD(temp_r30, s32 *, 0x2D8) = arg0;
    }
    __OSUnlockAllMutex(temp_r30);
    /* draft: did not compile: OSWakeupThread(temp_r30 + 0x2E8); */
    RunQueueHint_803508F4 = 1;
    if (RunQueueHint_803508F4 != 0) {
        SelectThread(0);
    }
    OSRestoreInterrupts(temp_r29);
}

void OSCancelThread(void *arg0) {
    s32 temp_r31;
    u16 temp_r0;
    void *temp_r3;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r5;
    void *temp_r5_2;
    void *var_r29;

    temp_r0 = M2C_FIELD(arg0, u16 *, 0x2C8);
    temp_r31 = OSDisableInterrupts();
    switch ((s32) temp_r0) {                        /* irregular */
    case 1:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x2CC) <= 0) {
            UnsetRun(arg0);
        }
block_24:
        OSClearContext(arg0);
        if (M2C_FIELD(arg0, u16 *, 0x2CA) & 1) {
            temp_r4 = M2C_FIELD(arg0, void **, 0x2FC);
            temp_r5 = M2C_FIELD(arg0, void **, 0x300);
            if (temp_r4 == NULL) {
                *(void **)0x800000E0 = temp_r5;
            } else {
                M2C_FIELD(temp_r4, void **, 0x300) = temp_r5;
            }
            if (temp_r5 == NULL) {
                *(void **)0x800000DC = temp_r4;
            } else {
                M2C_FIELD(temp_r5, void **, 0x2FC) = temp_r4;
            }
            M2C_FIELD(arg0, u16 *, 0x2C8) = 0U;
        } else {
            M2C_FIELD(arg0, u16 *, 0x2C8) = 8U;
        }
        __OSUnlockAllMutex(arg0);
        /* draft: did not compile: OSWakeupThread(arg0 + 0x2E8); */
        if ((s32) RunQueueHint_803508F4 != 0) {
            SelectThread(0);
        }
        OSRestoreInterrupts(temp_r31);
        return;
    case 2:
        RunQueueHint_803508F4 = 1;
        goto block_24;
    case 4:
        temp_r4_2 = M2C_FIELD(arg0, void **, 0x2E0);
        temp_r5_2 = M2C_FIELD(arg0, void **, 0x2E4);
        if (temp_r4_2 == NULL) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x2DC), void **, 4) = temp_r5_2;
        } else {
            M2C_FIELD(temp_r4_2, void **, 0x2E4) = temp_r5_2;
        }
        if (temp_r5_2 == NULL) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x2DC), void **, 0) = temp_r4_2;
        } else {
            M2C_FIELD(temp_r5_2, void **, 0x2E0) = temp_r4_2;
        }
        M2C_FIELD(arg0, void **, 0x2DC) = NULL;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x2CC) <= 0) {
            temp_r3 = M2C_FIELD(arg0, void **, 0x2F0);
            if (temp_r3 != NULL) {
                var_r29 = M2C_FIELD(temp_r3, void **, 8);
loop_19:
                if (((s32) M2C_FIELD(var_r29, s32 *, 0x2CC) <= 0) && ((s32) M2C_FIELD(var_r29, s32 *, 0x2D0) != __OSGetEffectivePriority(var_r29))) {
                    /* draft: did not compile: var_r29 = SetEffectivePriority((void *)(var_r29), (long)(0)); */
                    if (var_r29 == NULL) {

                    } else {
                        goto loop_19;
                    }
                }
            }
        }
        goto block_24;
    default:
    case 3:
        OSRestoreInterrupts(temp_r31);
        return;
    }
}

s32 fn_800C9448(void *arg0, s32 *arg1) {
    s8 temp_r30;
    s32 var_r0;
    void *temp_r5;
    void *var_r3;

    temp_r30 = OSDisableInterrupts();
    if (!(M2C_FIELD(arg0, u16 *, 0x2CA) & 1) && (M2C_FIELD(arg0, u16 *, 0x2C8) != 8) && ((u32) M2C_FIELD(arg0, u32 *, 0x2E8) == 0U)) {
        /* draft: did not compile: OSSleepThread(arg0 + 0x2E8); */
        if ((u16) M2C_FIELD(arg0, u16 *, 0x2C8) == 0) {
            var_r0 = 0;
        } else {
            var_r3 = *(void **)0x800000DC;
loop_9:
            if (var_r3 == NULL) {
                var_r0 = 0;
            } else if (arg0 == var_r3) {
                var_r0 = 1;
            } else {
                var_r3 = M2C_FIELD(var_r3, void **, 0x2FC);
                goto loop_9;
            }
        }
        if (var_r0 == 0) {
            OSRestoreInterrupts(temp_r30);
            return 0;
        }
        goto block_13;
    }
block_13:
    if ((u16) M2C_FIELD(arg0, u16 *, 0x2C8) == 8) {
        if (arg1 != NULL) {
            *arg1 = M2C_FIELD(arg0, s32 *, 0x2D8);
        }
        temp_r5 = M2C_FIELD(arg0, void **, 0x300);
        if ((M2C_FIELD(arg0, void **, 0x2FC)) == NULL) {
            *(void **)0x800000E0 = temp_r5;
        } else {
            M2C_FIELD((M2C_FIELD(arg0, void **, 0x2FC)), void **, 0x300) = temp_r5;
        }
        if (temp_r5 == NULL) {
            /* draft: did not compile: *(void *)0x800000DC = (M2C_FIELD(arg0, void **, 0x2FC)); */
        } else {
            M2C_FIELD(temp_r5, void **, 0x2FC) = (M2C_FIELD(arg0, void **, 0x2FC));
        }
        M2C_FIELD(arg0, u16 *, 0x2C8) = 0U;
        OSRestoreInterrupts(temp_r30);
        return 1;
    }
    OSRestoreInterrupts(temp_r30);
    return 0;
}

#pragma push
#pragma dont_inline on
s32 OSResumeThread(void *arg0) {
    s32 temp_r0;
    s32 temp_r31;
    s32 temp_r4;
    s32 temp_r4_3;
    s32 temp_r4_7;
    s32 var_r0;
    s32 var_r0_2;
    u16 temp_r0_2;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r4_2;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r4_8;
    void *temp_r5;
    void *var_r29;
    void *var_r3;
    void *var_r3_2;
    void *var_r5;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x2CC);
    temp_r31 = OSDisableInterrupts();
    M2C_FIELD(arg0, s32 *, 0x2CC) = (s32) (temp_r4 - 1);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x2CC);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x2CC) = 0;
    } else if (temp_r0 == 0) {
        temp_r0_2 = M2C_FIELD(arg0, u16 *, 0x2C8);
        switch ((s32) temp_r0_2) {                  /* irregular */
        case 1:
            var_r0 = M2C_FIELD(arg0, s32 *, 0x2D4);
            var_r3 = M2C_FIELD(arg0, void **, 0x2F4);
loop_12:
            if (var_r3 != NULL) {
                temp_r4_2 = M2C_FIELD(var_r3, void **, 0);
                if (temp_r4_2 != NULL) {
                    temp_r4_3 = M2C_FIELD(temp_r4_2, s32 *, 0x2D0);
                    if (temp_r4_3 < var_r0) {
                        var_r0 = temp_r4_3;
                    }
                }
                var_r3 = M2C_FIELD(var_r3, void **, 0x10);
                goto loop_12;
            }
            M2C_FIELD(arg0, s32 *, 0x2D0) = var_r0;
            M2C_FIELD(arg0, void **, 0x2DC) = (void *) (&RunQueue_8031BA58 + (M2C_FIELD(arg0, s32 *, 0x2D0) * 8));
            temp_r4_4 = M2C_FIELD(arg0, void **, 0x2DC);
            temp_r3 = M2C_FIELD(temp_r4_4, void **, 4);
            if (temp_r3 == NULL) {
                M2C_FIELD(temp_r4_4, void **, 0) = arg0;
            } else {
                M2C_FIELD(temp_r3, void **, 0x2E0) = arg0;
            }
            M2C_FIELD(arg0, void **, 0x2E4) = temp_r3;
            M2C_FIELD(arg0, void **, 0x2E0) = NULL;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x2DC), void **, 4) = arg0;
            RunQueueBits_803508F0 |= 1 << (0x1F - M2C_FIELD(arg0, s32 *, 0x2D0));
            RunQueueHint_803508F4 = 1;
            break;
        case 4:
            temp_r4_5 = M2C_FIELD(arg0, void **, 0x2E0);
            temp_r5 = M2C_FIELD(arg0, void **, 0x2E4);
            if (temp_r4_5 == NULL) {
                M2C_FIELD(M2C_FIELD(arg0, void **, 0x2DC), void **, 4) = temp_r5;
            } else {
                M2C_FIELD(temp_r4_5, void **, 0x2E4) = temp_r5;
            }
            if (temp_r5 == NULL) {
                M2C_FIELD(M2C_FIELD(arg0, void **, 0x2DC), void **, 0) = temp_r4_5;
            } else {
                M2C_FIELD(temp_r5, void **, 0x2E0) = temp_r4_5;
            }
            var_r0_2 = M2C_FIELD(arg0, s32 *, 0x2D4);
            var_r3_2 = M2C_FIELD(arg0, void **, 0x2F4);
loop_28:
            if (var_r3_2 != NULL) {
                temp_r4_6 = M2C_FIELD(var_r3_2, void **, 0);
                if (temp_r4_6 != NULL) {
                    temp_r4_7 = M2C_FIELD(temp_r4_6, s32 *, 0x2D0);
                    if (temp_r4_7 < var_r0_2) {
                        var_r0_2 = temp_r4_7;
                    }
                }
                var_r3_2 = M2C_FIELD(var_r3_2, void **, 0x10);
                goto loop_28;
            }
            M2C_FIELD(arg0, s32 *, 0x2D0) = var_r0_2;
            temp_r4_8 = M2C_FIELD(arg0, void **, 0x2DC);
            var_r5 = M2C_FIELD(temp_r4_8, void **, 0);
loop_31:
            if ((var_r5 != NULL) && ((s32) M2C_FIELD(var_r5, s32 *, 0x2D0) <= (s32) M2C_FIELD(arg0, s32 *, 0x2D0))) {
                var_r5 = M2C_FIELD(var_r5, void **, 0x2E0);
                goto loop_31;
            }
            if (var_r5 == NULL) {
                temp_r3_2 = M2C_FIELD(temp_r4_8, void **, 4);
                if (temp_r3_2 == NULL) {
                    M2C_FIELD(temp_r4_8, void **, 0) = arg0;
                } else {
                    M2C_FIELD(temp_r3_2, void **, 0x2E0) = arg0;
                }
                M2C_FIELD(arg0, void **, 0x2E4) = temp_r3_2;
                M2C_FIELD(arg0, void **, 0x2E0) = NULL;
                M2C_FIELD(M2C_FIELD(arg0, void **, 0x2DC), void **, 4) = arg0;
            } else {
                M2C_FIELD(arg0, void **, 0x2E0) = var_r5;
                temp_r3_3 = M2C_FIELD(var_r5, void **, 0x2E4);
                M2C_FIELD(var_r5, void **, 0x2E4) = arg0;
                M2C_FIELD(arg0, void **, 0x2E4) = temp_r3_3;
                if (temp_r3_3 == NULL) {
                    M2C_FIELD(M2C_FIELD(arg0, void **, 0x2DC), void **, 0) = arg0;
                } else {
                    M2C_FIELD(temp_r3_3, void **, 0x2E0) = arg0;
                }
            }
            temp_r3_4 = M2C_FIELD(arg0, void **, 0x2F0);
            if (temp_r3_4 != NULL) {
                var_r29 = M2C_FIELD(temp_r3_4, void **, 8);
loop_43:
                if (((s32) M2C_FIELD(var_r29, s32 *, 0x2CC) <= 0) && ((s32) M2C_FIELD(var_r29, s32 *, 0x2D0) != __OSGetEffectivePriority(var_r29))) {
                    /* draft: did not compile: var_r29 = SetEffectivePriority((void *)(var_r29), (long)(0)); */
                    if (var_r29 != NULL) {
                        goto loop_43;
                    }
                }
            }
            break;
        }
        if ((s32) RunQueueHint_803508F4 != 0) {
            SelectThread(0);
        }
    }
    OSRestoreInterrupts(temp_r31);
    return temp_r4;
}
#pragma pop

#pragma push
#pragma peephole off
s32 OSSuspendThread(void *arg0) {
    u8 temp_r31;
    s32 temp_r4;
    u16 temp_r0;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r5;
    void *var_r29;

    temp_r31 = OSDisableInterrupts();
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x2CC);
    M2C_FIELD(arg0, s32 *, 0x2CC) = (s32) (temp_r4 + 1);
    if (temp_r4 == 0) {
        temp_r0 = M2C_FIELD(arg0, u16 *, 0x2C8);
        switch ((s32) temp_r0) {                    /* irregular */
        case 3:
            break;
        case 2:
            RunQueueHint_803508F4 = 1;
            M2C_FIELD(arg0, u16 *, 0x2C8) = 1U;
            break;
        case 1:
            UnsetRun(arg0);
            break;
        case 4:
            temp_r4_2 = M2C_FIELD(arg0, void **, 0x2E0);
            temp_r5 = M2C_FIELD(arg0, void **, 0x2E4);
            if (temp_r4_2 == NULL) {
                M2C_FIELD(M2C_FIELD(arg0, void **, 0x2DC), void **, 4) = temp_r5;
            } else {
                M2C_FIELD(temp_r4_2, void **, 0x2E4) = temp_r5;
            }
            if (temp_r5 == NULL) {
                M2C_FIELD(M2C_FIELD(arg0, void **, 0x2DC), void **, 0) = temp_r4_2;
            } else {
                M2C_FIELD(temp_r5, void **, 0x2E0) = temp_r4_2;
            }
            M2C_FIELD(arg0, s32 *, 0x2D0) = 0x20;
            temp_r4_3 = M2C_FIELD(arg0, void **, 0x2DC);
            temp_r3 = M2C_FIELD(temp_r4_3, void **, 4);
            if (temp_r3 == NULL) {
                M2C_FIELD(temp_r4_3, void **, 0) = arg0;
            } else {
                M2C_FIELD(temp_r3, void **, 0x2E0) = arg0;
            }
            M2C_FIELD(arg0, void **, 0x2E4) = temp_r3;
            M2C_FIELD(arg0, void **, 0x2E0) = NULL;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x2DC), void **, 4) = arg0;
            temp_r3_2 = M2C_FIELD(arg0, void **, 0x2F0);
            if (temp_r3_2 != NULL) {
                var_r29 = M2C_FIELD(temp_r3_2, void **, 8);
loop_21:
                if (((s32) M2C_FIELD(var_r29, s32 *, 0x2CC) <= 0) && ((s32) M2C_FIELD(var_r29, s32 *, 0x2D0) != __OSGetEffectivePriority(var_r29))) {
                    /* draft: did not compile: var_r29 = SetEffectivePriority((void *)(var_r29), (long)(0)); */
                    if (var_r29 != NULL) {
                        goto loop_21;
                    }
                }
            }
            break;
        }
        if ((s32) RunQueueHint_803508F4 != 0) {
            SelectThread(0);
        }
    }
    OSRestoreInterrupts(temp_r31);
    return temp_r4;
}
#pragma pop

void OSSleepThread(void *arg0) {
    s32 temp_r31;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r4;
    void *var_r5;

    temp_r4 = *(void **)0x800000E4;
    temp_r31 = OSDisableInterrupts();
    M2C_FIELD(temp_r4, s16 *, 0x2C8) = 4;
    M2C_FIELD(temp_r4, void **, 0x2DC) = arg0;
    var_r5 = M2C_FIELD(arg0, void **, 0);
loop_2:
    if ((var_r5 != NULL) && ((s32) M2C_FIELD(var_r5, s32 *, 0x2D0) <= (s32) M2C_FIELD(temp_r4, s32 *, 0x2D0))) {
        var_r5 = M2C_FIELD(var_r5, void **, 0x2E0);
        goto loop_2;
    }
    if (var_r5 == NULL) {
        temp_r3 = M2C_FIELD(arg0, void **, 4);
        if (temp_r3 == NULL) {
            M2C_FIELD(arg0, void **, 0) = temp_r4;
        } else {
            M2C_FIELD(temp_r3, void **, 0x2E0) = temp_r4;
        }
        M2C_FIELD(temp_r4, void **, 0x2E4) = temp_r3;
        M2C_FIELD(temp_r4, void **, 0x2E0) = NULL;
        M2C_FIELD(arg0, void **, 4) = temp_r4;
    } else {
        M2C_FIELD(temp_r4, void **, 0x2E0) = var_r5;
        temp_r3_2 = M2C_FIELD(var_r5, void **, 0x2E4);
        M2C_FIELD(var_r5, void **, 0x2E4) = temp_r4;
        M2C_FIELD(temp_r4, void **, 0x2E4) = temp_r3_2;
        if (temp_r3_2 == NULL) {
            M2C_FIELD(arg0, void **, 0) = temp_r4;
        } else {
            M2C_FIELD(temp_r3_2, void **, 0x2E0) = temp_r4;
        }
    }
    RunQueueHint_803508F4 = 1;
    if ((s32) RunQueueHint_803508F4 != 0) {
        SelectThread(0);
    }
    OSRestoreInterrupts(temp_r31);
}

void OSWakeupThread(void *arg0) {
    s32 temp_r31;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r4;
    void *temp_r6;

    temp_r31 = OSDisableInterrupts();
loop_9:
    temp_r6 = M2C_FIELD(arg0, void **, 0);
    if (temp_r6 != NULL) {
        temp_r3 = M2C_FIELD(temp_r6, void **, 0x2E0);
        if (temp_r3 == NULL) {
            M2C_FIELD(arg0, s32 *, 4) = 0;
        } else {
            M2C_FIELD(temp_r3, s32 *, 0x2E4) = 0;
        }
        M2C_FIELD(arg0, void **, 0) = temp_r3;
        M2C_FIELD(temp_r6, s16 *, 0x2C8) = 1;
        if ((s32) M2C_FIELD(temp_r6, s32 *, 0x2CC) <= 0) {
            M2C_FIELD(temp_r6, void **, 0x2DC) = (void *) (&RunQueue_8031BA58 + (M2C_FIELD(temp_r6, s32 *, 0x2D0) * 8));
            temp_r4 = M2C_FIELD(temp_r6, void **, 0x2DC);
            temp_r3_2 = M2C_FIELD(temp_r4, void **, 4);
            if (temp_r3_2 == NULL) {
                M2C_FIELD(temp_r4, void **, 0) = temp_r6;
            } else {
                M2C_FIELD(temp_r3_2, void **, 0x2E0) = temp_r6;
            }
            M2C_FIELD(temp_r6, void **, 0x2E0) = NULL;
            M2C_FIELD(M2C_FIELD(temp_r6, void **, 0x2DC), void **, 4) = temp_r6;
            RunQueueBits_803508F0 |= 1 << (0x1F - M2C_FIELD(temp_r6, s32 *, 0x2D0));
            M2C_FIELD(temp_r6, void **, 0x2E4) = temp_r3_2;
            RunQueueHint_803508F4 = 1;
        }
        goto loop_9;
    }
    if ((s32) RunQueueHint_803508F4 != 0) {
        SelectThread(0);
    }
    OSRestoreInterrupts(temp_r31);
}

void OSClearStack(s32 arg0) {
    s32 *var_r5;
    s32 temp_r31;
    u32 temp_r0;
    u32 temp_r3;
    u32 var_ctr;
    u32 var_ctr_2;
    u32 var_r4;

    temp_r31 = ((((((arg0 << 0x10) & 0xFF0000 & ~0xFF000000) | (arg0 << 0x18)) & ~0xFF00) | ((arg0 << 8) & 0xFF00)) & ~0xFF) | (arg0 & 0xFF);
    temp_r3 = fn_800C5574();
    /* draft: did not compile: var_r5 = M2C_FIELD(*(void **)0x800000E4, s32 *, 0x308) + 4; */
    /* draft: did not compile: var_r4 = (u32) ((temp_r3 + 3) - var_r5) >> 2U; */
    if (0 /* draft: did not compile */) {
        temp_r0 = var_r4 >> 3U;
        var_ctr = temp_r0;
        if (temp_r0 != 0) {
            do {
                M2C_FIELD(var_r5, s32 *, 0) = temp_r31;
                M2C_FIELD(var_r5, s32 *, 4) = temp_r31;
                M2C_FIELD(var_r5, s32 *, 8) = temp_r31;
                M2C_FIELD(var_r5, s32 *, 0xC) = temp_r31;
                M2C_FIELD(var_r5, s32 *, 0x10) = temp_r31;
                M2C_FIELD(var_r5, s32 *, 0x14) = temp_r31;
                M2C_FIELD(var_r5, s32 *, 0x18) = temp_r31;
                M2C_FIELD(var_r5, s32 *, 0x1C) = temp_r31;
                var_r5 += 0x20;
                var_ctr -= 1;
            } while (var_ctr != 0);
            var_r4 &= 7;
            if (var_r4 != 0) {
                goto block_4;
            }
        } else {
block_4:
            var_ctr_2 = var_r4;
            do {
                *var_r5 = temp_r31;
                var_r5 += 4;
                var_ctr_2 -= 1;
            } while (var_ctr_2 != 0);
        }
    }
}

void OSGetTime() { } /* draft: stub */

s32 OSGetTick(void) {
    return M2C_ERROR(/* unknown instruction: mftb $r3, 0x10c */);
}

s32 __OSGetSystemTime(void) {
    s32 temp_r29;
    s32 temp_r30;
    s32 temp_r31;
    s32 temp_r5;
    u64 temp_ret;

    temp_r31 = OSDisableInterrupts();
    /* draft: did not compile: temp_ret = OSGetTime(); */
    temp_r5 = *(s32 *)0x800030DC;
    temp_r29 = temp_r5 + (u32) temp_ret;
    temp_r30 = *(s32 *)0x800030D8 + temp_ret + M2C_CARRY;
    OSRestoreInterrupts(temp_r31, temp_r5, 0x80000000);
    return temp_r30;
}

void GetDates(s32 arg0, void *arg1) {
    M2C_UNK *var_r6;
    s32 temp_r0;
    s32 var_r7_2;
    s32 var_r0;
    s32 var_r11;
    s32 var_r3;
    s32 var_r7;
    s32 temp_r0_2;
    s32 var_r8;
    int var_r5;

    M2C_FIELD(arg1, s32 *, 0x18) = (s32) ((arg0 + 6) % 7);
    var_r5 = arg0 / 365;
    var_r11 = var_r5 * 0x16D;
loop_4:
    if ((s32) var_r5 < 1) {
        var_r0 = 0;
    } else {
        var_r0 = ((var_r5 - 1) / 400) + (((s32) (var_r5 + 3) / 4) - ((var_r5 - 1) / 100));
    }
    temp_r0 = var_r11 + var_r0;
    if (arg0 < temp_r0) {
        var_r11 -= 0x16D;
        var_r5 -= 1;
        goto loop_4;
    }
    M2C_FIELD(arg1, u32 *, 0x14) = var_r5;
    temp_r0_2 = arg0 - temp_r0;
    M2C_FIELD(arg1, s32 *, 0x1C) = temp_r0_2;
    var_r7 = 1;
    var_r8 = 0;
    if (((s32) (var_r5 % 4) == 0) && ((s32) (var_r5 % 100) != 0)) {
        var_r8 = 1;
    }
    if ((var_r8 == 0) && ((s32) (var_r5 % 400) != 0)) {
        var_r7 = 0;
    }
    if (var_r7 != 0) {
        var_r6 = &lbl_802A6BA0;
    } else {
        var_r6 = &lbl_802A6B70;
    }
    var_r7_2 = 0xC;
    var_r3 = 0x30;
    do {
        var_r3 -= 4;
        var_r7_2 -= 1;
    } while (temp_r0_2 < (s32) *(var_r6 + var_r3));
    M2C_FIELD(arg1, s32 *, 0x10) = var_r7_2;
    M2C_FIELD(arg1, s32 *, 0xC) = (s32) ((temp_r0_2 - *(var_r6 + var_r3)) + 1);
}

void OSTicksToCalendarTime(s32 arg0, s32 arg1, void *arg2) { } /* draft: stub */

void InitMetroTRK_BBA(void) {

}

void __init_user(void) {
    __init_cpp();
}

static void __init_cpp(void) {
    M2C_UNK (**var_r31)();
    M2C_UNK (*temp_r12)();

    /* draft: did not compile: var_r31 = &_ctors; */
loop_4:
    temp_r12 = *var_r31;
    if (temp_r12 != NULL) {
        temp_r12();
        var_r31 += 4;
        goto loop_4;
    }
}

void _ExitProcess(void) {
    PPCHalt();
}

s32 InitializeUART(void) {
    if ((u32) (lbl_80350914 + 0x5A010000) == 0x5AU) {
        return 0;
    }
    if (!(OSGetConsoleType() & 0x10000000)) {
        lbl_80350910 = 0;
        return 2;
    }
    lbl_80350910 = 0xA5FF005A;
    lbl_80350908 = 0;
    lbl_8035090C = 1;
    return 0;
}

s32 fn_800CA148(u32 *arg0, u32 arg1) {
    u32 sp14;
    u32 sp10;
    s32 temp_r27;
    s32 var_r0;
    s32 var_r25;
    s32 var_r26;
    u32 *var_r30;
    u32 *var_r4;
    u32 var_r28;
    u32 var_r31;

    var_r30 = arg0;
    var_r31 = arg1;
    if ((u32) (lbl_80350910 + 0x5A010000) != 0x5AU) {
        return 2;
    }
    temp_r27 = OSDisableInterrupts();
    if (EXILock(lbl_80350908, lbl_8035090C, 0) == 0) {
        OSRestoreInterrupts(temp_r27);
        return 0;
    }
    var_r4 = var_r30;
loop_8:
    if ((u32) (var_r4 - var_r30) < var_r31) {
        if ((s32) *var_r4 == 0xA) {
            *var_r4 = 0xDU;
        }
        var_r4 += 1;
        goto loop_8;
    }
    sp14 = 0xA0010000;
    var_r25 = 0;
loop_29:
    if (var_r31 != 0U) {
        if (EXISelect(lbl_80350908, lbl_8035090C, 3) == 0) {
            var_r0 = -1;
        } else {
            sp10 = 0x20010000;
            EXIImm(lbl_80350908, &sp10, 4U, 1, 0);
            EXISync(lbl_80350908);
            EXIImm(lbl_80350908, &sp10, 1U, 0, 0);
            EXISync(lbl_80350908);
            EXIDeselect(lbl_80350908);
            var_r0 = 0x10 - (sp10 >> 0x18U);
        }
        var_r26 = var_r0;
        if (var_r0 < 0) {
            var_r25 = 3;
        } else if ((var_r0 >= 0xC) || ((u32) var_r0 >= var_r31)) {
            if (EXISelect(lbl_80350908, lbl_8035090C, 3) == 0) {
                var_r25 = 3;
            } else {
                EXIImm(lbl_80350908, &sp14, 4U, 1, 0);
                EXISync(lbl_80350908);
loop_26:
                if ((var_r26 != 0) && (var_r31 != 0U)) {
                    if ((var_r26 >= 4) || ((u32) var_r26 >= var_r31)) {
                        if (var_r31 < 4U) {
                            var_r28 = var_r31;
                        } else {
                            var_r28 = 4U;
                        }
                        EXIImm(lbl_80350908, var_r30, var_r28, 1, 0);
                        var_r30 += var_r28;
                        var_r31 -= var_r28;
                        var_r26 -= var_r28;
                        EXISync(lbl_80350908);
                        goto loop_26;
                    }
                }
                EXIDeselect(lbl_80350908);
                goto loop_29;
            }
        } else {
            goto loop_29;
        }
    }
    EXIUnlock(lbl_80350908);
    OSRestoreInterrupts(temp_r27);
    return var_r25;
}

s32 SIBusy(void) {
    if ((s32) Si_802A6C14 != -1) {
        return 1;
    }
    return 0;
}

s32 SIIsChanBusy(s32 arg0) {
    s32 var_r5;

    var_r5 = 1;
    if (((s32) *(&Packet_8031C450 + (arg0 << 5)) == -1) && ((s32) Si_802A6C14 != arg0)) {
        var_r5 = 0;
    }
    return var_r5;
}

#pragma push
#pragma dont_inline on
u32 CompleteTransfer(void) {
    s32 *var_r5;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3_2;
    s32 var_ctr_2;
    s32 var_ctr_4;
    s32 var_r4_2;
    u32 temp_r3;
    u32 temp_r6;
    u32 temp_r7;
    u32 temp_r7_2;
    u32 var_ctr;
    u32 var_ctr_3;
    u32 var_r28;
    u32 var_r4;
    u64 temp_ret;
    u64 temp_ret_2;
    void *temp_r3_3;
    void *temp_r5;
    void *temp_r5_2;
    void *var_r30;
    void *var_r3;

    var_r30 = (void *)0xCC006400;
    var_r28 = *(u32 *)0xCC006438;
    M2C_FIELD((void *)0xCC006400, s32 *, 0x34) = (s32) ((*(u32 *)0xCC006434 | 0x80000000) & 0xFFFFFFFE);
    if ((s32) M2C_FIELD(&lbl_802A6BD0, s32 *, 0x44) != -1) {
        temp_ret = __OSGetSystemTime();
        temp_r5 = &lbl_8031C590 + (M2C_FIELD(&lbl_802A6BD0, s32 *, 0x44) * 8);
        M2C_FIELD(temp_r5, u32 *, 4) = (u32) temp_ret;
        var_r4 = 0;
        M2C_FIELD(temp_r5, s32 *, 0) = temp_ret;
        var_r5 = M2C_FIELD(&lbl_802A6BD0, s32 **, 0x50);
        temp_r7 = (u32) M2C_FIELD(&lbl_802A6BD0, u32 *, 0x4C) >> 2U;
        if (temp_r7 > 0U) {
            temp_r3 = temp_r7 - 8;
            if (temp_r7 > 8U) {
                var_ctr = (u32) (temp_r3 + 7) >> 3U;
                if (temp_r3 > 0U) {
                    do {
                        var_r4 += 8;
                        M2C_FIELD(var_r5, s32 *, 0) = M2C_FIELD(var_r30, s32 *, 0x80);
                        M2C_FIELD(var_r5, s32 *, 4) = (s32) M2C_FIELD(var_r30, s32 *, 0x84);
                        M2C_FIELD(var_r5, s32 *, 8) = (s32) M2C_FIELD(var_r30, s32 *, 0x88);
                        M2C_FIELD(var_r5, s32 *, 0xC) = (s32) M2C_FIELD(var_r30, s32 *, 0x8C);
                        M2C_FIELD(var_r5, s32 *, 0x10) = (s32) M2C_FIELD(var_r30, s32 *, 0x90);
                        M2C_FIELD(var_r5, s32 *, 0x14) = (s32) M2C_FIELD(var_r30, s32 *, 0x94);
                        M2C_FIELD(var_r5, s32 *, 0x18) = (s32) M2C_FIELD(var_r30, s32 *, 0x98);
                        temp_r0 = M2C_FIELD(var_r30, s32 *, 0x9C);
                        /* draft: did not compile: var_r30 += 0x20; */
                        M2C_FIELD(var_r5, s32 *, 0x1C) = temp_r0;
                        var_r5 += 0x20;
                        var_ctr -= 1;
                    } while (var_ctr != 0);
                }
            }
            /* draft: did not compile: var_r3 = (var_r4 * 4) + 0xCC006400; */
            var_ctr_2 = temp_r7 - var_r4;
            if (var_r4 < temp_r7) {
                do {
                    temp_r0_2 = M2C_FIELD(var_r3, s32 *, 0x80);
                    /* draft: did not compile: var_r3 += 4; */
                    var_r4 += 1;
                    *var_r5 = temp_r0_2;
                    var_r5 += 4;
                    var_ctr_2 -= 1;
                } while (var_ctr_2 != 0);
            }
        }
        temp_r3_2 = M2C_FIELD(&lbl_802A6BD0, u32 *, 0x4C) & 3;
        if (temp_r3_2 != 0) {
            temp_r6 = M2C_FIELD(((var_r4 * 4) + 0xCC006400), u32 *, 0x80);
            var_r4_2 = 0;
            if (temp_r3_2 > 0) {
                temp_r7_2 = temp_r3_2 - 8;
                if ((u32) temp_r3_2 > 8U) {
                    var_ctr_3 = (u32) (temp_r7_2 + 7) >> 3U;
                    if (temp_r7_2 > 0U) {
                        do {
                            M2C_FIELD(var_r5, s8 *, 0) = (s8) (temp_r6 >> ((3 - var_r4_2) * 8));
                            M2C_FIELD(var_r5, s8 *, 1) = (s8) (temp_r6 >> ((3 - (var_r4_2 + 1)) * 8));
                            M2C_FIELD(var_r5, s8 *, 2) = (s8) (temp_r6 >> ((3 - (var_r4_2 + 2)) * 8));
                            M2C_FIELD(var_r5, s8 *, 3) = (s8) (temp_r6 >> (var_r4_2 * -8));
                            M2C_FIELD(var_r5, s8 *, 4) = (s8) (temp_r6 >> ((3 - (var_r4_2 + 4)) * 8));
                            M2C_FIELD(var_r5, s8 *, 5) = (s8) (temp_r6 >> ((3 - (var_r4_2 + 5)) * 8));
                            M2C_FIELD(var_r5, s8 *, 6) = (s8) (temp_r6 >> ((3 - (var_r4_2 + 6)) * 8));
                            M2C_FIELD(var_r5, s8 *, 7) = (s8) (temp_r6 >> ((3 - (var_r4_2 + 7)) * 8));
                            var_r5 += 8;
                            var_r4_2 += 8;
                            var_ctr_3 -= 1;
                        } while (var_ctr_3 != 0);
                    }
                }
                var_ctr_4 = temp_r3_2 - var_r4_2;
                if ((u32) var_r4_2 < (u32) temp_r3_2) {
                    do {
                        *var_r5 = (s8) (temp_r6 >> ((3 - var_r4_2) * 8));
                        var_r5 += 1;
                        var_r4_2 += 1;
                        var_ctr_4 -= 1;
                    } while (var_ctr_4 != 0);
                }
            }
        }
        if (0 /* draft: did not compile */) {
            var_r28 = (var_r28 >> ((3 - M2C_FIELD(&lbl_802A6BD0, s32 *, 0x44)) * 8)) & 0xF;
            if (var_r28 & 8) {
                temp_r3_3 = &lbl_802A6BD0 + (M2C_FIELD(&lbl_802A6BD0, s32 *, 0x44) * 4);
                if (!(M2C_FIELD(temp_r3_3, s32 *, 0x58) & 0x80)) {
                    M2C_FIELD(temp_r3_3, s32 *, 0x58) = 8;
                }
            }
            if (var_r28 == 0) {
                var_r28 = 4;
            }
        } else {
            temp_ret_2 = __OSGetSystemTime();
            temp_r5_2 = &TypeTime_8031C570 + (M2C_FIELD(&lbl_802A6BD0, s32 *, 0x44) * 8);
            M2C_FIELD(temp_r5_2, u32 *, 4) = (u32) temp_ret_2;
            var_r28 = 0;
            M2C_FIELD(temp_r5_2, s32 *, 0) = temp_ret_2;
        }
        M2C_FIELD(&lbl_802A6BD0, s32 *, 0x44) = -1;
    }
    return var_r28;
}
#pragma pop

void SIInterruptHandler_800CA6BC(s32 arg0, s32 arg1) { } /* draft: stub */

s32 SIEnablePollingInterrupt(s32 arg0) {
    s32 temp_r5;
    s32 temp_r5_2;
    s32 var_r30;
    s32 var_r5;

    OSDisableInterrupts(&Packet_8031C450);
    temp_r5 = *(s32 *)0xCC006434;
    if (temp_r5 & 0x08000000) {
        var_r30 = 1;
    } else {
        var_r30 = 0;
    }
    if (arg0 != 0) {
        M2C_FIELD(&Packet_8031C450, s32 *, 0x1E0) = 0;
        var_r5 = temp_r5 | 0x08000000;
        M2C_FIELD(&Packet_8031C450, s32 *, 0x1E4) = 0;
        M2C_FIELD(&Packet_8031C450, s32 *, 0x1E8) = 0;
        M2C_FIELD(&Packet_8031C450, s32 *, 0x1EC) = 0;
    } else {
        var_r5 = temp_r5 & 0xF7FFFFFF;
    }
    temp_r5_2 = var_r5 & 0x7FFFFFFE;
    M2C_FIELD((s32 *)0xCC000000, s32 *, 0x6434) = temp_r5_2;
    OSRestoreInterrupts(temp_r5_2);
    return var_r30;
}

s32 SIRegisterPollingHandler(u32 arg0) {
    s32 temp_r31;
    s32 var_ctr;
    s32 var_ctr_2;
    s32 var_r5;
    u32 *var_r3;
    u32 *var_r4;

    var_r4 = &lbl_8031C5F0;
    var_ctr = 4;
    temp_r31 = OSDisableInterrupts();
    var_r3 = &lbl_8031C5F0;
loop_1:
    if ((u32) *var_r3 == arg0) {
        OSRestoreInterrupts(temp_r31);
        return 1;
    }
    var_r3 += 4;
    var_ctr -= 1;
    if (var_ctr == 0) {
        var_ctr_2 = 4;
        var_r5 = 0;
loop_5:
        if ((u32) *var_r4 == 0U) {
            (&lbl_8031C5F0)[var_r5] = arg0;
            SIEnablePollingInterrupt((long)(1));
            OSRestoreInterrupts(temp_r31);
            return 1;
        }
        var_r4 += 4;
        var_r5 += 1;
        var_ctr_2 -= 1;
        if (var_ctr_2 == 0) {
            OSRestoreInterrupts(temp_r31);
            return 0;
        }
        goto loop_5;
    }
    goto loop_1;
}
