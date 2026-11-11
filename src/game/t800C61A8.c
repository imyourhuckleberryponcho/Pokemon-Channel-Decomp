/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

extern M2C_UNK lbl_802A6020;
extern M2C_UNK lbl_802A61A0;
extern u16 lbl_8034FF48;
extern void *lbl_80350890;
extern s32 lbl_80350894;
extern s32 lbl_80350898;
extern s32 lbl_8035089C;
extern s32 InterruptHandlerTable_803508A0;
M2C_UNK OSDisableScheduler();
M2C_UNK OSEnableScheduler();
u64 OSGetTime();
M2C_UNK OSLoadContext(void *);
M2C_UNK __OSReschedule();
extern s16 __OSLastInterrupt;
extern s32 __OSLastInterruptSrr0;
extern M2C_UNK __OSLastInterruptTime;
extern s32 lbl_802A6B30;
M2C_UNK OSInitThreadQueue();
M2C_UNK __OSUnhandledException(M2C_UNK);
extern M2C_UNK __OSErrorTable;
M2C_UNK DCInvalidateRange(M2C_UNK, M2C_UNK);
extern M2C_UNK ResetFunctionInfo_802A6B60;
M2C_UNK OSWakeupThread(void *);
extern s32 lbl_803508C0;
M2C_UNK DVDInit();
M2C_UNK ICFlashInvalidate();
M2C_UNK ICInvalidateRange(M2C_UNK, s32);
M2C_UNK OSClearContext(M2C_UNK *, M2C_UNK, s32, M2C_UNK);
M2C_UNK OSSetCurrentContext(M2C_UNK *);
M2C_UNK __OSDoHotReset();
M2C_UNK DVDReadAbsAsyncPrio(M2C_UNK *, M2C_UNK *, s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK DVDCancelStreamAsync(M2C_UNK *, M2C_UNK);
s32 DVDGetCommandBlockStatus(M2C_UNK *);
M2C_UNK fn_800D0458(M2C_UNK);
M2C_UNK DVDResume();
void *fn_800D0804();
s32 DVDCheckDisk();
M2C_UNK AISetStreamPlayState(M2C_UNK);
M2C_UNK fn_800D49EC(M2C_UNK);
M2C_UNK fn_800D4A18(M2C_UNK);
extern s32 __OSIsGcam;
extern M2C_UNK lbl_8031B9E0;
extern s32 lbl_803508B8;
extern s32 lbl_803508BC;
extern s32 __OSSavedRegionEnd;
extern s32 __OSSavedRegionStart;
extern M2C_UNK ResetFunctionQueue_803508C8;
extern s32 sp;

u16 fn_800C61A8(u16 arg0);
u16 fn_800C6344(void);
void *fn_800C639C(void *arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 *arg4);
void *fn_800C6544(void *arg0, s32 *arg1);
s32 OSDisableInterrupts(void);
s32 OSEnableInterrupts(void);
s32 OSRestoreInterrupts(s32 arg0);
s32 __OSSetInterruptHandler(s16 arg0, s32 arg1);
s32 fn_800C66EC(s16 arg0);
void __OSInterruptInit(void);
s32 SetInterruptMask(s32 arg0, s32 arg1);
s32 __OSMaskInterrupts(s32 arg0);
s32 __OSUnmaskInterrupts(s32 arg0);
void __OSDispatchInterrupt(void *arg1);
static void ExternalInterruptHandler(void *arg1);
void __OSModuleInit(void);
void fn_800C6F08(void *arg0, s32 arg1, s32 arg2);
s32 fn_800C6F68(void);
s32 OnReset(s32 arg0);
static void MEMIntrruptHandler(void);
static s32 Config24MB(void);
static s32 Config48MB(void);
static s32 RealMode(s32 arg0);
void __OSInitMemoryProtection(void);
void __OSUnlockAllMutex(void *arg0);
void fn_800C72BC(s32 arg0);
void fn_800C72CC(void);
void __OSReboot(void);
void fn_800C7618(s32 arg0, s32 arg1);
void fn_800C7624(s32 *arg0, s32 *arg1);
void OSRegisterResetFunction(void *arg0);
void Reset_800C76BC(s32 arg0);

u16 fn_800C61A8(u16 arg0) {
    s32 var_r3_4;
    int var_r0_2;
    s32 var_r3;
    s32 var_r3_2;
    s32 var_r3_3;
    s32 var_r0;

    if (fn_800C6344() == 1) {
        if ((arg0 >= 0x20U) && (arg0 <= 0xDFU)) {
            return M2C_FIELD((&lbl_802A6020 + (arg0 * 2)), u16 *, -0x40);
        }
        if ((arg0 > -0x7762U) && (arg0 <= -0x678EU)) {
            var_r3_3 = 0;
            var_r0 = 0;
            if (((u8) arg0 >= 0x40U) && ((u8) arg0 <= 0xFCU)) {
                var_r0 = 1;
            }
            if ((var_r0 != 0) && ((u8) arg0 != 0x7F)) {
                var_r3_3 = 1;
            }
            if (var_r3_3 == 0) {
                return 0U;
            }
            var_r3_2 = arg0 - 0x40;
            if (var_r3_2 >= 0x40) {
                var_r3_2 -= 1;
            }
            return ((((s32) arg0 >> 8) - 0x88) * 0xBC) + (var_r3_2 + 0x2BE);
        }
        if ((arg0 >= -0x7EC0U) && (arg0 < -0x7862U)) {
            var_r3_4 = 0;
            var_r0_2 = 0;
            if (((u8) arg0 >= 0x40U) && ((u8) arg0 <= 0xFCU)) {
                var_r0_2 = 1;
            }
            if ((var_r0_2 != 0) && ((u8) arg0 != 0x7F)) {
                var_r3_4 = 1;
            }
            if (var_r3_4 == 0) {
                return 0U;
            }
            var_r3 = arg0 - 0x40;
            if (var_r3 >= 0x40) {
                var_r3 -= 1;
            }
            return *(&lbl_802A61A0 + (((((arg0 >> 8) - 0x81) * 0xBC) + var_r3) * 2));
        }
        goto block_33;
    }
    if ((arg0 > 0x20U) && (arg0 <= 0xFFU)) {
        return arg0 - 0x20;
    }
block_33:
    return 0U;
}

u16 fn_800C6344(void) {
    s32 temp_r0;
    u16 var_r0;

    if ((u16) lbl_8034FF48 > 1U) {
        temp_r0 = *(s32 *)0x800000CC;
        if (temp_r0 != 0) {
            if (temp_r0 >= 0) {

            }
            lbl_8034FF48 = 0;
        } else {
            if (*(u16 *)0xCC00206E & 2) {
                var_r0 = 1;
            } else {
                var_r0 = 0;
            }
            lbl_8034FF48 = var_r0;
        }
        return lbl_8034FF48;
    }
    return lbl_8034FF48;
}

void *fn_800C639C(void *arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 *arg4) {
    s32 temp_r0_2;
    s32 temp_r3;
    s32 temp_ret;
    s32 var_r4;
    s32 var_r5;
    s32 var_r5_2;
    u16 temp_r6;
    u16 var_r0;
    u8 temp_r0;
    u8 temp_r4;
    u8 var_r3;
    void *var_r27;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0);
    var_r3 = temp_r0;
    if (temp_r0 == 0) {
        *arg1 = 0;
        return arg0;
    }
    /* draft: did not compile: var_r27 = arg0 + 1; */
    if ((u16) lbl_8034FF48 <= 1U) {

    } else {
        temp_r0_2 = *(s32 *)0x800000CC;
        if (temp_r0_2 != 0) {
            if (temp_r0_2 >= 0) {

            }
            lbl_8034FF48 = 0;
        } else {
            if (*(u16 *)0xCC00206E & 2) {
                var_r0 = 1;
            } else {
                var_r0 = 0;
            }
            lbl_8034FF48 = var_r0;
        }
    }
    if ((u16) lbl_8034FF48 == 1) {
        var_r4 = 1;
        var_r5 = 0;
        if ((var_r3 >= 0x81U) && (var_r3 <= 0x9FU)) {
            var_r5 = 1;
        }
        if (var_r5 == 0) {
            var_r5_2 = 0;
            if ((var_r3 >= 0xE0U) && (var_r3 <= 0xFCU)) {
                var_r5_2 = 1;
            }
            if (var_r5_2 == 0) {
                var_r4 = 0;
            }
        }
        if (var_r4 != 0) {
            temp_r4 = M2C_FIELD(arg0, u8 *, 1);
            if ((s8) temp_r4 != 0) {
                var_r3 = ((var_r3 << 8) & 0xFFFF00) | temp_r4;
                /* draft: did not compile: var_r27 += 1; */
            }
        }
    }
    temp_ret = fn_800C61A8(var_r3);
    temp_r3 = temp_ret;
    *arg1 = lbl_80350894 + (M2C_FIELD(lbl_80350890, s32 *, 0x14) * (temp_r3 / (s32) lbl_8035089C));
    temp_r6 = M2C_FIELD(lbl_80350890, u16 *, 0x1A);
    *arg2 = ((temp_ret % lbl_8035089C) % temp_r6) * M2C_FIELD(lbl_80350890, u16 *, 0x10);
    *arg3 = ((s32) (temp_ret % lbl_8035089C) / (s32) temp_r6) * M2C_FIELD(lbl_80350890, u16 *, 0x12);
    if (arg4 != NULL) {
        /* draft: did not compile: *arg4 = (s32) *(lbl_80350898 + temp_r3); */
    }
    return var_r27;
}

void *fn_800C6544(void *arg0, s32 *arg1) {
    s32 temp_r0_2;
    s32 var_r4;
    s32 var_r5;
    s32 var_r5_2;
    u16 var_r0;
    u8 temp_r0;
    u8 temp_r4;
    u8 var_r3;
    void *var_r30;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0);
    var_r3 = temp_r0;
    if (temp_r0 == 0) {
        return arg0;
    }
    /* draft: did not compile: var_r30 = arg0 + 1; */
    if ((u16) lbl_8034FF48 <= 1U) {

    } else {
        temp_r0_2 = *(s32 *)0x800000CC;
        if (temp_r0_2 != 0) {
            if (temp_r0_2 >= 0) {

            }
            lbl_8034FF48 = 0;
        } else {
            if (*(u16 *)0xCC00206E & 2) {
                var_r0 = 1;
            } else {
                var_r0 = 0;
            }
            lbl_8034FF48 = var_r0;
        }
    }
    if ((u16) lbl_8034FF48 == 1) {
        var_r4 = 1;
        var_r5 = 0;
        if ((var_r3 >= 0x81U) && (var_r3 <= 0x9FU)) {
            var_r5 = 1;
        }
        if (var_r5 == 0) {
            var_r5_2 = 0;
            if ((var_r3 >= 0xE0U) && (var_r3 <= 0xFCU)) {
                var_r5_2 = 1;
            }
            if (var_r5_2 == 0) {
                var_r4 = 0;
            }
        }
        if (var_r4 != 0) {
            temp_r4 = M2C_FIELD(arg0, u8 *, 1);
            if ((s8) temp_r4 != 0) {
                var_r3 = ((var_r3 << 8) & 0xFFFF00) | temp_r4;
                /* draft: did not compile: var_r30 += 1; */
            }
        }
    }
    if (arg1 != NULL) {
        /* draft: did not compile: *arg1 = (s32) *(lbl_80350898 + fn_800C61A8(var_r3)); */
    }
    return var_r30;
}

s32 OSDisableInterrupts(void) {
    M2C_ERROR(/* unknown instruction: mtmsr $r4 */);
    return ((u32) M2C_ERROR(/* unknown instruction: mfmsr $r3 */) >> 0xFU) & 1;
}

s32 OSEnableInterrupts(void) {
    M2C_ERROR(/* unknown instruction: mtmsr $r4 */);
    return ((u32) M2C_ERROR(/* unknown instruction: mfmsr $r3 */) >> 0xFU) & 1;
}

s32 OSRestoreInterrupts(s32 arg0) {
    if (arg0 != 0) {

    }
    M2C_ERROR(/* unknown instruction: mtmsr $r5 */);
    return ((u32) M2C_ERROR(/* unknown instruction: mfmsr $r4 */) >> 0xFU) & 1;
}

s32 __OSSetInterruptHandler(s16 arg0, s32 arg1) {
    s32 *temp_r5;
    s32 temp_r3;

    /* draft: did not compile: temp_r5 = InterruptHandlerTable_803508A0 + (arg0 * 4); */
    temp_r3 = *temp_r5;
    *temp_r5 = arg1;
    return temp_r3;
}

s32 fn_800C66EC(s16 arg0) {
    return 0;
}

void __OSInterruptInit(void) {
    InterruptHandlerTable_803508A0 = 0x80003040;
    /* draft: did not compile: memset(InterruptHandlerTable_803508A0, 0, 0x80); */
    *(s32 *)0x800000C4 = 0;
    *(s32 *)0x800000C8 = 0;
    M2C_FIELD((void *)0xCC003000, s32 *, 4) = 0xF0;
    __OSMaskInterrupts((long)(-0x20));
    __OSSetExceptionHandler(4, ExternalInterruptHandler);
}

s32 SetInterruptMask(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r5_2;
    s32 var_r5_3;
    s32 var_r5_4;
    s32 var_r6_2;
    s32 var_r7;
    s32 var_r5;
    s32 var_r6;
    s32 var_r3;

    var_r3 = arg0;
    temp_r0 = CLZ(var_r3);
    if (temp_r0 < 0xC) {
        if (temp_r0 != 8) {
            if (temp_r0 < 8) {
                if (temp_r0 < 5) {
                    if (temp_r0 < 0) {
                        return var_r3;
                    }
                    var_r5 = 0;
                    if ((u32) (arg1 & 0x80000000) == 0) {
                        var_r5 = 1;
                    }
                    if ((u32) (arg1 & 0x40000000) == 0) {
                        var_r5 = var_r5 | 2;
                    }
                    if ((u32) (arg1 & 0x20000000) == 0) {
                        var_r5 = var_r5 | 4;
                    }
                    if ((u32) (arg1 & 0x10000000) == 0) {
                        var_r5 = var_r5 | 8;
                    }
                    if ((u32) (arg1 & 0x08000000) == 0) {
                        var_r5 = var_r5 | 0x10;
                    }
                    M2C_FIELD((void *)0xCC004000, u16 *, 0x1C) = var_r5;
                    return var_r3 & 0x07FFFFFF;
                }
                var_r6 = *(u16 *)0xCC00500A & 0xFFFFFE07;
                if ((u32) (arg1 & 0x04000000) == 0) {
                    var_r6 = var_r6 | 0x10;
                }
                if ((u32) (arg1 & 0x02000000) == 0) {
                    var_r6 = var_r6 | 0x40;
                }
                if ((u32) (arg1 & 0x01000000) == 0) {
                    var_r6 = var_r6 | 0x100;
                }
                *(u16 *)0xCC00500A = var_r6;
                return var_r3 & 0xF8FFFFFF;
            }
            var_r5_2 = *(s32 *)0xCC006800 & ~0x2C0F;
            if ((u32) (arg1 & 0x400000) == 0) {
                var_r5_2 = var_r5_2 | 1;
            }
            if ((u32) (arg1 & 0x200000) == 0) {
                var_r5_2 = var_r5_2 | 4;
            }
            if ((u32) (arg1 & 0x100000) == 0) {
                var_r5_2 = var_r5_2 | 0x400;
            }
            /* draft: did not compile: *(void *)0xCC006800 = var_r5_2; */
            return var_r3 & 0xFF8FFFFF;
        }
        var_r5_3 = *(s32 *)0xCC006C00 & ~0x2C;
        if ((u32) (arg1 & 0x800000) == 0) {
            var_r5_3 = var_r5_3 | 4;
        }
        /* draft: did not compile: *(void *)0xCC006C00 = var_r5_3; */
        return var_r3 & 0xFF7FFFFF;
    }
    if (temp_r0 < 0x11) {
        if (temp_r0 < 0xF) {
            var_r7 = *(s32 *)0xCC006814 & ~0xC0F;
            if ((u32) (arg1 & 0x80000) == 0) {
                var_r7 = var_r7 | 1;
            }
            if ((u32) (arg1 & 0x40000) == 0) {
                var_r7 = var_r7 | 4;
            }
            if ((u32) (arg1 & 0x20000) == 0) {
                var_r7 = var_r7 | 0x400;
            }
            *(s32 *)0xCC006814 = var_r7;
            return var_r3 & 0xFFF1FFFF;
        }
        var_r6_2 = *(s32 *)0xCC006828 & 0xFFFFFFF0;
        if ((u32) (arg1 & 0x10000) == 0) {
            var_r6_2 = var_r6_2 | 1;
        }
        if ((u32) (arg1 & 0x8000) == 0) {
            var_r6_2 = var_r6_2 | 4;
        }
        *(s32 *)0xCC006828 = var_r6_2;
        return var_r3 & 0xFFFE7FFF;
    }
    if (temp_r0 < 0x1B) {
        var_r5_4 = 0xF0;
        if ((u32) (arg1 & 0x4000) == 0) {
            var_r5_4 = 0xF0 | 0x800;
        }
        if ((u32) (arg1 & 0x800) == 0) {
            var_r5_4 = var_r5_4 | 8;
        }
        if ((u32) (arg1 & 0x400) == 0) {
            var_r5_4 = var_r5_4 | 4;
        }
        if ((u32) (arg1 & 0x200) == 0) {
            var_r5_4 = var_r5_4 | 2;
        }
        if ((u32) (arg1 & 0x100) == 0) {
            var_r5_4 = var_r5_4 | 1;
        }
        if ((u32) (arg1 & 0x80) == 0) {
            var_r5_4 = var_r5_4 | 0x100;
        }
        if ((u32) (arg1 & 0x40) == 0) {
            var_r5_4 = var_r5_4 | 0x1000;
        }
        if ((u32) (arg1 & 0x2000) == 0) {
            var_r5_4 = var_r5_4 | 0x200;
        }
        if ((u32) (arg1 & 0x1000) == 0) {
            var_r5_4 = var_r5_4 | 0x400;
        }
        if ((u32) (arg1 & 0x20) == 0) {
            var_r5_4 = var_r5_4 | 0x2000;
        }
        M2C_FIELD((void *)0xCC003000, s32 *, 4) = var_r5_4;
        var_r3 = var_r3 & 0xFFFF801F;
    }
    return var_r3;
}

s32 __OSMaskInterrupts(s32 arg0) {
    s32 temp_r29;
    s32 temp_r30;
    s32 temp_r31;
    s32 temp_r5;
    u32 var_r3;

    temp_r29 = *(s32 *)0x800000C4;
    temp_r30 = OSDisableInterrupts();
    temp_r5 = *(s32 *)0x800000C8;
    var_r3 = arg0 & ~(temp_r29 | temp_r5);
    temp_r31 = arg0 | temp_r29;
    *(s32 *)0x800000C4 = temp_r31;
loop_4:
    if (var_r3 != 0) {
        var_r3 = SetInterruptMask((long)(temp_r31 | temp_r5), (long)(0));
        goto loop_4;
    }
    OSRestoreInterrupts(temp_r30);
    return temp_r29;
}

s32 __OSUnmaskInterrupts(s32 arg0) {
    s32 temp_r29;
    s32 temp_r30;
    s32 temp_r31;
    s32 temp_r5;
    u32 var_r3;

    temp_r29 = *(s32 *)0x800000C4;
    temp_r30 = OSDisableInterrupts();
    temp_r5 = *(s32 *)0x800000C8;
    var_r3 = arg0 & (temp_r29 | temp_r5);
    temp_r31 = temp_r29 & ~arg0;
    *(s32 *)0x800000C4 = temp_r31;
loop_4:
    if (var_r3 != 0) {
        var_r3 = SetInterruptMask((long)(temp_r31 | temp_r5), (long)(0));
        goto loop_4;
    }
    OSRestoreInterrupts(temp_r30);
    return temp_r29;
}

#pragma push
#pragma peephole off
void __OSDispatchInterrupt(void *arg1) {
    M2C_UNK (*temp_r31_2)(s16, void *);
    s32 temp_r0_2;
    s32 *var_r3;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 var_r0;
    u16 temp_r4;
    u16 temp_r4_2;
    u32 temp_r0;
    u32 temp_r31;
    u32 temp_r4_6;
    u64 temp_ret;

    temp_r31 = *(s32 *)0xCC003000 & 0xFFFEFFFF;
    if ((temp_r31 == 0) || ((u32) (temp_r31 & M2C_FIELD(((s32 *)0xCC000000 + 0x3000), s32 *, 4)) == 0)) {
        OSLoadContext(arg1);
    }
    var_r0 = 0;
    if ((u32) (temp_r31 & 0x80) != 0) {
        temp_r4 = M2C_FIELD((void *)0xCC004000, u16 *, 0x1E);
        if ((u32) (temp_r4 & 1) != 0) {
            var_r0 = 0x80000000;
        }
        if ((u32) (temp_r4 & 2) != 0) {
            var_r0 |= 0x40000000;
        }
        if ((u32) (temp_r4 & 4) != 0) {
            var_r0 |= 0x20000000;
        }
        if ((u32) (temp_r4 & 8) != 0) {
            var_r0 |= 0x10000000;
        }
        if ((u32) (temp_r4 & 0x10) != 0) {
            var_r0 |= 0x08000000;
        }
    }
    if ((u32) (temp_r31 & 0x40) != 0) {
        temp_r4_2 = M2C_FIELD((void *)0xCC005000, u16 *, 0xA);
        if ((u32) (temp_r4_2 & 8) != 0) {
            var_r0 |= 0x04000000;
        }
        if ((u32) (temp_r4_2 & 0x20) != 0) {
            var_r0 |= 0x02000000;
        }
        if ((u32) (temp_r4_2 & 0x80) != 0) {
            var_r0 |= 0x01000000;
        }
    }
    if (((u32) (temp_r31 & 0x20) != 0) && ((u32) (*(s32 *)0xCC006C00 & 8) != 0)) {
        var_r0 |= 0x800000;
    }
    if ((u32) (temp_r31 & 0x10) != 0) {
        temp_r4_3 = M2C_FIELD((void *)0xCC006800, s32 *, 0);
        if ((u32) (temp_r4_3 & 2) != 0) {
            var_r0 |= 0x400000;
        }
        if ((u32) (temp_r4_3 & 8) != 0) {
            var_r0 |= 0x200000;
        }
        if ((u32) (temp_r4_3 & 0x800) != 0) {
            var_r0 |= 0x100000;
        }
        temp_r4_4 = M2C_FIELD((void *)0xCC006800, s32 *, 0x14);
        if ((u32) (temp_r4_4 & 2) != 0) {
            var_r0 |= 0x80000;
        }
        if ((u32) (temp_r4_4 & 8) != 0) {
            var_r0 |= 0x40000;
        }
        if ((u32) (temp_r4_4 & 0x800) != 0) {
            var_r0 |= 0x20000;
        }
        temp_r4_5 = M2C_FIELD((void *)0xCC006800, s32 *, 0x28);
        if ((u32) (temp_r4_5 & 2) != 0) {
            var_r0 |= 0x10000;
        }
        if ((u32) (temp_r4_5 & 8) != 0) {
            var_r0 |= 0x8000;
        }
    }
    if ((u32) (temp_r31 & 0x2000) != 0) {
        var_r0 |= 0x20;
    }
    if ((u32) (temp_r31 & 0x1000) != 0) {
        var_r0 |= 0x40;
    }
    if ((u32) (temp_r31 & 0x400) != 0) {
        var_r0 |= 0x1000;
    }
    if ((u32) (temp_r31 & 0x200) != 0) {
        var_r0 |= 0x2000;
    }
    if ((u32) (temp_r31 & 0x100) != 0) {
        var_r0 |= 0x80;
    }
    if ((u32) (temp_r31 & 8) != 0) {
        var_r0 |= 0x800;
    }
    if ((u32) (temp_r31 & 4) != 0) {
        var_r0 |= 0x400;
    }
    if ((u32) (temp_r31 & 2) != 0) {
        var_r0 |= 0x200;
    }
    if ((u32) (temp_r31 & 0x800) != 0) {
        var_r0 |= 0x4000;
    }
    if ((u32) (temp_r31 & 1) != 0) {
        var_r0 |= 0x100;
    }
    temp_r4_6 = var_r0 & ~(*(s32 *)0x800000C4 | *(s32 *)0x800000C8);
    if (temp_r4_6 != 0) {
        var_r3 = &lbl_802A6B30;
loop_64:
        temp_r0 = temp_r4_6 & *var_r3;
        if (temp_r0 == 0) {
            var_r3 += 4;
            goto loop_64;
        }
        temp_r0_2 = CLZ(temp_r0);
        /* draft: did not compile: temp_r31_2 = *(InterruptHandlerTable_803508A0 + (temp_r0_2 * 4)); */
        if (temp_r31_2 != NULL) {
            if (temp_r0_2 > 4) {
                __OSLastInterrupt = temp_r0_2;
                temp_ret = OSGetTime();
                M2C_FIELD(&__OSLastInterruptTime, u32 *, 4) = (u32) temp_ret;
                M2C_FIELD(&__OSLastInterruptTime, s32 *, 0) = temp_ret;
                __OSLastInterruptSrr0 = M2C_FIELD(arg1, s32 *, 0x198);
            }
            OSDisableScheduler();
            temp_r31_2(temp_r0_2, arg1);
            OSEnableScheduler();
            __OSReschedule();
            OSLoadContext(arg1);
        }
    }
    OSLoadContext(arg1);
}
#pragma pop

static void ExternalInterruptHandler(void *arg1) {
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
    __OSDispatchInterrupt((void *)(0));
}

void __OSModuleInit(void) {
    *(s32 *)0x800030CC = 0;
    *(s32 *)0x800030C8 = 0;
    *(s32 *)0x800030D0 = 0;
}

void fn_800C6F08(void *arg0, s32 arg1, s32 arg2) {
    OSInitThreadQueue((long)(0));
    /* draft: did not compile: OSInitThreadQueue(arg0 + 8); */
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    M2C_FIELD(arg0, s32 *, 0x14) = arg2;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}

s32 fn_800C6F68(void) {
    return *(s32 *)0x80000028;
}

s32 OnReset(s32 arg0) {
    if (arg0 != 0) {
        *(s16 *)0xCC004010 = 0xFF;
        __OSMaskInterrupts(0xF0000000);
    }
    return 1;
}

static void MEMIntrruptHandler(void) {
    M2C_FIELD((void *)0xCC004000, s16 *, 0x20) = 0;
    if (((M2C_UNK (*)(M2C_UNK)) M2C_FIELD(&__OSErrorTable, M2C_UNK (**)(M2C_UNK), 0x3C)) != NULL) {
        M2C_FIELD(&__OSErrorTable, M2C_UNK (**)(M2C_UNK), 0x3C)(0xF);
        return;
    }
    __OSUnhandledException(0xF);
}

static s32 Config24MB(void) {
    M2C_SYNC();
    M2C_ERROR(/* unknown instruction: mtdbatu 0x0, $r7 */);
    M2C_ERROR(/* unknown instruction: mtdbatl 0x0, $r4 */);
    M2C_ERROR(/* unknown instruction: mtdbatu 0x0, $r3 */);
    M2C_SYNC();
    M2C_ERROR(/* unknown instruction: mtibatu 0x0, $r7 */);
    M2C_ERROR(/* unknown instruction: mtibatl 0x0, $r4 */);
    M2C_ERROR(/* unknown instruction: mtibatu 0x0, $r3 */);
    M2C_SYNC();
    M2C_ERROR(/* unknown instruction: mtdbatu 0x2, $r7 */);
    M2C_ERROR(/* unknown instruction: mtdbatl 0x2, $r6 */);
    M2C_ERROR(/* unknown instruction: mtdbatu 0x2, $r5 */);
    M2C_SYNC();
    M2C_ERROR(/* unknown instruction: mtibatu 0x2, $r7 */);
    M2C_ERROR(/* unknown instruction: mtibatl 0x2, $r6 */);
    M2C_ERROR(/* unknown instruction: mtibatu 0x2, $r5 */);
    M2C_SYNC();
    M2C_ERROR(/* unknown instruction: mfmsr $r3 */);
    M2C_ERROR(/* unknown instruction: mtsrr1 $r3 */);
    M2C_ERROR(/* unknown instruction: rfi */);
    return M2C_ERROR(/* unknown instruction: mtsrr0 $r3 */);
}

static s32 Config48MB(void) {
    M2C_SYNC();
    M2C_ERROR(/* unknown instruction: mtdbatu 0x0, $r7 */);
    M2C_ERROR(/* unknown instruction: mtdbatl 0x0, $r4 */);
    M2C_ERROR(/* unknown instruction: mtdbatu 0x0, $r3 */);
    M2C_SYNC();
    M2C_ERROR(/* unknown instruction: mtibatu 0x0, $r7 */);
    M2C_ERROR(/* unknown instruction: mtibatl 0x0, $r4 */);
    M2C_ERROR(/* unknown instruction: mtibatu 0x0, $r3 */);
    M2C_SYNC();
    M2C_ERROR(/* unknown instruction: mtdbatu 0x2, $r7 */);
    M2C_ERROR(/* unknown instruction: mtdbatl 0x2, $r6 */);
    M2C_ERROR(/* unknown instruction: mtdbatu 0x2, $r5 */);
    M2C_SYNC();
    M2C_ERROR(/* unknown instruction: mtibatu 0x2, $r7 */);
    M2C_ERROR(/* unknown instruction: mtibatl 0x2, $r6 */);
    M2C_ERROR(/* unknown instruction: mtibatu 0x2, $r5 */);
    M2C_SYNC();
    M2C_ERROR(/* unknown instruction: mfmsr $r3 */);
    M2C_ERROR(/* unknown instruction: mtsrr1 $r3 */);
    M2C_ERROR(/* unknown instruction: rfi */);
    return M2C_ERROR(/* unknown instruction: mtsrr0 $r3 */);
}

static s32 RealMode(s32 arg0) {
    M2C_ERROR(/* unknown instruction: mtsrr0 $r3 */);
    M2C_ERROR(/* unknown instruction: mfmsr $r3 */);
    M2C_ERROR(/* unknown instruction: rfi */);
    return M2C_ERROR(/* unknown instruction: mtsrr1 $r3 */);
}

void __OSInitMemoryProtection(void) {
    s32 temp_r3;
    u32 temp_r31;
    u32 temp_r3_2;

    temp_r31 = *(u32 *)0x800000F0;
    temp_r3 = OSDisableInterrupts();
    M2C_FIELD((void *)0xCC004000, s16 *, 0x20) = 0;
    M2C_FIELD((void *)0xCC004000, s16 *, 0x10) = 0xFF;
    __OSMaskInterrupts((long)(0xF0000000));
    /* draft: did not compile: __OSSetInterruptHandler(0, MEMIntrruptHandler); */
    /* draft: did not compile: __OSSetInterruptHandler(1, MEMIntrruptHandler); */
    /* draft: did not compile: __OSSetInterruptHandler(2, MEMIntrruptHandler); */
    /* draft: did not compile: __OSSetInterruptHandler(3, MEMIntrruptHandler); */
    /* draft: did not compile: __OSSetInterruptHandler(4, MEMIntrruptHandler); */
    OSRegisterResetFunction(&ResetFunctionInfo_802A6B60);
    temp_r3_2 = *(u32 *)0x800000F0;
    if ((temp_r3_2 < (u32) *(u32 *)0x80000028) && ((u32) (temp_r3_2 + 0xFE800000) == 0U)) {
        DCInvalidateRange(0x81800000, 0x01800000);
        M2C_FIELD((void *)0xCC004000, s16 *, 0x28) = 2;
    }
    if (temp_r31 <= 0x01800000U) {
        /* draft: did not compile: RealMode(Config24MB); */
    } else if (temp_r31 <= 0x03000000U) {
        /* draft: did not compile: RealMode(Config48MB); */
    }
    __OSUnmaskInterrupts(0x08000000);
    OSRestoreInterrupts(temp_r3);
}

void __OSUnlockAllMutex(void *arg0) {
    void *temp_r4;
    void *temp_r5;

loop_5:
    temp_r4 = M2C_FIELD(arg0, void **, 0x2F4);
    if (temp_r4 != NULL) {
        temp_r5 = M2C_FIELD(temp_r4, void **, 0x10);
        if (temp_r5 == NULL) {
            M2C_FIELD(arg0, s32 *, 0x2F8) = 0;
        } else {
            M2C_FIELD(temp_r5, s32 *, 0x14) = 0;
        }
        M2C_FIELD(arg0, void **, 0x2F4) = temp_r5;
        M2C_FIELD(temp_r4, s32 *, 0xC) = 0;
        M2C_FIELD(temp_r4, s32 *, 8) = 0;
        OSWakeupThread(temp_r4);
        goto loop_5;
    }
}

void fn_800C72BC(s32 arg0) {
    M2C_SYNC();
    M2C_SYNC();
}

void fn_800C72CC(void) {
    lbl_803508C0 = 1;
}

#pragma push
#pragma dont_inline on
void __OSReboot(void) {
    M2C_UNK spA0;
    M2C_UNK sp70;
    M2C_UNK sp40;
    M2C_UNK sp10;
    s32 temp_r26;
    s32 temp_r26_3;
    s32 temp_r27_2;
    s32 temp_r28_3;
    s32 temp_r31_3;
    s32 var_r0;
    u32 temp_r26_2;
    u32 temp_r27;
    u32 temp_r27_3;
    u32 temp_r28_2;
    u32 temp_r29;
    u32 temp_r29_3;
    u32 temp_r29_4;
    u32 temp_r31;
    u64 temp_r28;
    u64 temp_r28_4;
    u64 temp_r29_2;
    u64 temp_r31_2;
    u64 temp_ret;
    u64 temp_ret_2;
    u64 temp_ret_3;
    u64 temp_ret_4;

    OSDisableInterrupts();
    *(s32 *)0x817FFFFC = 0;
    *(s32 *)0x817FFFF8 = 0;
    *(s8 *)0x800030E2 = 1;
    *(s32 *)0x812FDFF0 = lbl_803508B8;
    *(s32 *)0x812FDFEC = lbl_803508BC;
    OSClearContext(&spA0, 0x81300000, lbl_803508B8, 1);
    OSSetCurrentContext(&spA0);
    DVDInit();
    fn_800D0458(1);
    DVDResume();
    lbl_803508C0 = 0;
    __DVDPrepareResetAsync(fn_800C72CC);
    __OSMaskInterrupts(-0x20);
    __OSUnmaskInterrupts(0x400);
    OSEnableInterrupts();
    temp_ret = OSGetTime();
    temp_r29 = (u32) temp_ret;
    temp_r28 = temp_ret;
    temp_r26 = 0 ^ 0x80000000;
    temp_r27 = (u32) *(s8 *)0x800000F8 >> 2U;
loop_6:
    if ((s32) lbl_803508C0 != 1) {
        if ((DVDCheckDisk() == 0) || (OSGetTime(), (((s32) -((temp_r26 - temp_r26) - !M2C_CARRY) == 0) == 0))) {
            __OSDoHotReset(*(s32 *)0x817FFFFC);
        }
        goto loop_6;
    }
    if ((s32) __OSIsGcam == 0) {
        if ((u8) M2C_FIELD(fn_800D0804(), u8 *, 8) != 0) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        if (var_r0 != 0) {
            fn_800D49EC(0);
            fn_800D4A18(0);
            DVDCancelStreamAsync(&sp70, 0);
            temp_ret_2 = OSGetTime();
            temp_r31 = (u32) temp_ret_2;
            temp_r29_2 = temp_ret_2;
            temp_r27_2 = 0 ^ 0x80000000;
            /* draft: did not compile: temp_r28_2 = (u32) *(void *)0x800000F8 >> 2U; */
loop_18:
            if (DVDGetCommandBlockStatus(&sp70) != 0) {
                if ((DVDCheckDisk() == 0) || (OSGetTime(), (((s32) -((temp_r27_2 - temp_r27_2) - !M2C_CARRY) == 0) == 0))) {
                    /* draft: did not compile: __OSDoHotReset(*(void *)0x817FFFFC); */
                }
                goto loop_18;
            }
            AISetStreamPlayState(0);
        }
    }
    DVDReadAbsAsyncPrio(&sp40, &lbl_8031B9E0, 0x20, 0x2440, 0, 0);
    temp_ret_3 = OSGetTime();
    temp_r26_2 = (u32) temp_ret_3;
    temp_r31_2 = temp_ret_3;
    temp_r28_3 = 0 ^ 0x80000000;
    /* draft: did not compile: temp_r29_3 = (u32) *(void *)0x800000F8 >> 2U; */
loop_26:
    if (DVDGetCommandBlockStatus(&sp40) != 0) {
        if ((DVDCheckDisk() == 0) || (OSGetTime(), (((s32) -((temp_r28_3 - temp_r28_3) - !M2C_CARRY) == 0) == 0))) {
            /* draft: did not compile: __OSDoHotReset(*(void *)0x817FFFFC); */
        }
        goto loop_26;
    }
    temp_r26_3 = (M2C_FIELD(&lbl_8031B9E0, s32 *, 0x18) + 0x1F) & 0xFFFFFFE0;
    DVDReadAbsAsyncPrio(&sp10, (M2C_UNK *)0x81300000, temp_r26_3, M2C_FIELD(&lbl_8031B9E0, s32 *, 0x14) + 0x20 + 0x2440, 0, 0);
    temp_ret_4 = OSGetTime();
    temp_r27_3 = (u32) temp_ret_4;
    temp_r28_4 = temp_ret_4;
    temp_r31_3 = 0 ^ 0x80000000;
    /* draft: did not compile: temp_r29_4 = (u32) *(void *)0x800000F8 >> 2U; */
loop_33:
    if (DVDGetCommandBlockStatus(&sp10) != 0) {
        if ((DVDCheckDisk() == 0) || (OSGetTime(), (((s32) -((temp_r31_3 - temp_r31_3) - !M2C_CARRY) == 0) == 0))) {
            /* draft: did not compile: __OSDoHotReset(*(void *)0x817FFFFC); */
        }
        goto loop_33;
    }
    ICInvalidateRange(0x81300000, temp_r26_3);
    OSDisableInterrupts();
    ICFlashInvalidate();
    fn_800C72BC(0x81300000);
}
#pragma pop

void fn_800C7618(s32 arg0, s32 arg1) {
    lbl_803508B8 = arg0;
    lbl_803508BC = arg1;
}

void fn_800C7624(s32 *arg0, s32 *arg1) {
    *arg0 = __OSSavedRegionStart;
    *arg1 = __OSSavedRegionEnd;
}

void OSRegisterResetFunction(void *arg0) {
    void *temp_r4;
    void *var_r5;

    var_r5 = M2C_FIELD(&ResetFunctionQueue_803508C8, void **, 0);
loop_2:
    if ((var_r5 != NULL) && ((u32) M2C_FIELD(var_r5, u32 *, 4) <= (u32) M2C_FIELD(arg0, u32 *, 4))) {
        var_r5 = M2C_FIELD(var_r5, void **, 8);
        goto loop_2;
    }
    if (var_r5 == NULL) {
        if ((void *) M2C_FIELD(&ResetFunctionQueue_803508C8, void **, 4) == NULL) {
            M2C_FIELD(&ResetFunctionQueue_803508C8, void **, 0) = arg0;
        } else {
            M2C_FIELD(M2C_FIELD(&ResetFunctionQueue_803508C8, void **, 4), void **, 8) = arg0;
        }
        M2C_FIELD(arg0, void **, 0xC) = (void *) M2C_FIELD(&ResetFunctionQueue_803508C8, void **, 4);
        M2C_FIELD(arg0, void **, 8) = NULL;
        M2C_FIELD(&ResetFunctionQueue_803508C8, void **, 4) = arg0;
        return;
    }
    M2C_FIELD(arg0, void **, 8) = var_r5;
    temp_r4 = M2C_FIELD(var_r5, void **, 0xC);
    M2C_FIELD(var_r5, void **, 0xC) = arg0;
    M2C_FIELD(arg0, void **, 0xC) = temp_r4;
    if (temp_r4 == NULL) {
        M2C_FIELD(&ResetFunctionQueue_803508C8, void **, 0) = arg0;
        return;
    }
    M2C_FIELD(temp_r4, void **, 8) = arg0;
}

void Reset_800C76BC(s32 arg0) {
    M2C_ERROR(/* unknown instruction: mfspr $r8, HID0 */);
    M2C_ERROR(/* unknown instruction: mtspr HID0, $r8 */);
    M2C_SYNC();
    M2C_SYNC();
    do {

    } while ((u32) (M2C_ERROR(/* unknown instruction: mftb $r6, 0x10c */) - M2C_ERROR(/* unknown instruction: mftb $r5, 0x10c */)) < 0x1124U);
    M2C_FIELD((void *)0xCC003000, s32 *, 0x24) = 3;
    M2C_FIELD((void *)0xCC003000, s32 *, 0x24) = arg0;
loop_9:
    goto loop_9;
}
