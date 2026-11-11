/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK DCFlushRange(u16, M2C_UNK, void *, u32, u32, M2C_UNK *, M2C_UNK *, M2C_UNK *);
M2C_UNK DCInvalidateRange(u16, M2C_UNK);
M2C_UNK fn_800C34EC(u16);
extern s32 lbl_80350AC4;
extern s32 lbl_80350AC8;
extern s32 lbl_80350ACC;
M2C_UNK ARStartDMA(s32, s32, u32);
extern M2C_UNK *lbl_80350AE8;
extern M2C_UNK *lbl_80350AF4;
extern s32 lbl_80350AFC;
extern u32 lbl_80350B00;
extern void *lbl_80350AE0;
extern void *lbl_80350AF0;
M2C_UNK OSRegisterVersion(s32);
extern s32 lbl_8034FFE0;
extern s32 lbl_80350AF8;
extern s32 lbl_80350B04;
s32 OSDisableInterrupts();
M2C_UNK OSRestoreInterrupts(s32);
extern M2C_UNK *lbl_80350AE4;
extern M2C_UNK *lbl_80350AEC;
M2C_UNK __OSSetInterruptHandler(M2C_UNK, M2C_UNK *);
M2C_UNK __OSUnmaskInterrupts(M2C_UNK);
extern M2C_UNK __DSPHandler;
extern M2C_UNK lbl_802A7638;
extern s32 lbl_8034FFE8;
extern s32 lbl_80350B08;
extern s32 lbl_80350B18;
extern s32 lbl_80350B1C;
extern s32 lbl_80350B20;
extern s32 lbl_80350B24;
M2C_UNK __DSP_boot_task(void *);
M2C_UNK __DSP_insert_task(void *);

void __ARChecksize(void);
void __ARQServiceQueueLo(void);
void fn_800D6A94(void);
void __ARQInterruptServiceRoutine(void);
void ARQInit(void);
void ARQPostRequest(M2C_UNK *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, M2C_UNK (*arg7)());
void ARQSetChunkSize(s32 arg0);
s32 fn_800D6D50(void);
s32 fn_800D6D58(void);
s32 fn_800D6D68(void);
s32 fn_800D6D78(void);
void fn_800D6D90(u16 arg0);
void DSPInit(void);
void *DSPAddTask(void *arg0);
void fn_800D6ED8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7);

void __ARChecksize(void) { } /* draft: stub */

void __ARQServiceQueueLo(void) { } /* draft: stub */

void fn_800D6A94(void) {

}

#pragma push
#pragma dont_inline on
void __ARQInterruptServiceRoutine(void) {
    if (((M2C_UNK (*)(void *)) lbl_80350AF8) != NULL) {
        /* draft: did not compile: lbl_80350AF8(lbl_80350AF0); */
        lbl_80350AF0 = NULL;
        lbl_80350AF8 = NULL;
    } else if (((M2C_UNK (*)(s32)) lbl_80350AFC) != NULL) {
        /* draft: did not compile: lbl_80350AFC(lbl_80350AF4); */
        lbl_80350AF4 = 0;
        lbl_80350AFC = NULL;
    }
    if ((void *) lbl_80350AE0 != NULL) {
        if ((u32) M2C_FIELD(lbl_80350AE0, u32 *, 8) == 0U) {
            ARStartDMA(M2C_FIELD(lbl_80350AE0, s32 *, 0x10), M2C_FIELD(lbl_80350AE0, s32 *, 0x14), M2C_FIELD(lbl_80350AE0, s32 *, 0x18));
        } else {
            ARStartDMA(M2C_FIELD(lbl_80350AE0, s32 *, 0x14), M2C_FIELD(lbl_80350AE0, s32 *, 0x10), M2C_FIELD(lbl_80350AE0, s32 *, 0x18));
        }
        /* draft: did not compile: lbl_80350AF8 = M2C_FIELD(lbl_80350AE0, M2C_UNK (**)(void *), 0x1C); */
        lbl_80350AF0 = lbl_80350AE0;
        lbl_80350AE0 = M2C_FIELD(lbl_80350AE0, void **, 0);
    }
    if ((void *) lbl_80350AF0 == NULL) {
        __ARQServiceQueueLo();
    }
}
#pragma pop

void ARQInit(void) {
    if ((s32) lbl_80350B04 != 1) {
        OSRegisterVersion(lbl_8034FFE0);
        lbl_80350AE8 = 0;
        lbl_80350B00 = 0x1000;
        lbl_80350AE0 = 0;
        fn_800D4F14(__ARQInterruptServiceRoutine);
        lbl_80350B04 = 1;
        lbl_80350AF0 = 0;
        lbl_80350AF4 = 0;
        lbl_80350AF8 = 0;
        lbl_80350AFC = 0;
    }
}

#pragma push
#pragma dont_inline on
void ARQPostRequest(M2C_UNK *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, M2C_UNK (*arg7)()) {
    s32 temp_r31;

    M2C_FIELD(arg0, M2C_UNK **, 0) = NULL;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 0x10) = arg4;
    M2C_FIELD(arg0, s32 *, 0x14) = arg5;
    M2C_FIELD(arg0, s32 *, 0x18) = arg6;
    if (arg7 != NULL) {
        M2C_FIELD(arg0, M2C_UNK (**)(), 0x1C) = arg7;
    } else {
        /* draft: did not compile: M2C_FIELD(arg0, M2C_UNK (**)(), 0x1C) = fn_800D6A94; */
    }
    temp_r31 = OSDisableInterrupts();
    switch (arg3) {                                 /* irregular */
    case 0:
        if ((M2C_UNK *) lbl_80350AE8 != NULL) {
            /* draft: did not compile: *lbl_80350AEC = arg0; */
        } else {
            lbl_80350AE8 = arg0;
        }
        lbl_80350AEC = arg0;
        break;
    case 1:
        if ((M2C_UNK *) lbl_80350AE0 != NULL) {
            /* draft: did not compile: *lbl_80350AE4 = arg0; */
        } else {
            lbl_80350AE0 = arg0;
        }
        lbl_80350AE4 = arg0;
        break;
    }
    if (((M2C_UNK *) lbl_80350AF0 == NULL) && ((u32) lbl_80350AF4 == 0U)) {
        if ((M2C_UNK *) lbl_80350AE0 != NULL) {
            if ((u32) M2C_FIELD(lbl_80350AE0, u32 *, 8) == 0U) {
                ARStartDMA(M2C_FIELD(lbl_80350AE0, s32 *, 0x10), M2C_FIELD(lbl_80350AE0, s32 *, 0x14), M2C_FIELD(lbl_80350AE0, s32 *, 0x18));
            } else {
                ARStartDMA(M2C_FIELD(lbl_80350AE0, s32 *, 0x14), M2C_FIELD(lbl_80350AE0, s32 *, 0x10), M2C_FIELD(lbl_80350AE0, s32 *, 0x18));
            }
            lbl_80350AF8 = M2C_FIELD(lbl_80350AE0, s32 *, 0x1C);
            lbl_80350AF0 = lbl_80350AE0;
            lbl_80350AE0 = M2C_FIELD(lbl_80350AE0, M2C_UNK **, 0);
        }
        if ((M2C_UNK *) lbl_80350AF0 == NULL) {
            __ARQServiceQueueLo();
        }
    }
    OSRestoreInterrupts(temp_r31);
}
#pragma pop

void ARQSetChunkSize(s32 arg0) {
    s32 temp_r0;

    temp_r0 = arg0 & 0x1F;
    if (temp_r0 != 0) {
        lbl_80350B00 = arg0 + (0x20 - temp_r0);
        return;
    }
    lbl_80350B00 = arg0;
}

s32 fn_800D6D50(void) {
    return lbl_80350B00;
}

s32 fn_800D6D58(void) {
    return ((u16) *(u16 *)0xCC005000 >> 0xFU) & 1;
}

s32 fn_800D6D68(void) {
    return ((u16) *(u16 *)0xCC005004 >> 0xFU) & 1;
}

s32 fn_800D6D78(void) {
    return (M2C_FIELD((void *)0xCC005000, s16 *, 6) & ~0xFFFF0000) | (M2C_FIELD((void *)0xCC005000, s16 *, 4) << 0x10);
}

void fn_800D6D90(u16 arg0) {
    *(u16 *)0xCC005002 = arg0;
    *(u16 *)0xCC005000 = (u16) (arg0 >> 0x10U);
}

void DSPInit(void) {
    s32 temp_r31;
    u16 temp_r5;
    u16 temp_r7;

    /* draft: did not compile: fn_800D6ED8(&lbl_802A7638 + 0x48, &lbl_802A7638 + 0x68, &lbl_802A7638 + 0x74); */
    if ((s32) lbl_80350B08 != 1) {
        OSRegisterVersion(lbl_8034FFE8);
        __OSSetInterruptHandler(7, &__DSPHandler);
        __OSUnmaskInterrupts(0x01000000);
        M2C_FIELD((void *)0xCC005000, u16 *, 0xA) = (u16) ((*(u16 *)0xCC00500A & ~0xA8) | 0x800);
        temp_r31 = OSDisableInterrupts();
        temp_r7 = M2C_FIELD((void *)0xCC005000, u16 *, 0xA);
        temp_r5 = temp_r7 & ~0xAC;
        M2C_FIELD((void *)0xCC005000, u16 *, 0xA) = temp_r5;
        lbl_80350B18 = 0;
        lbl_80350B24 = 0;
        lbl_80350B1C = 0;
        lbl_80350B20 = 0;
        lbl_80350B08 = 1;
        OSRestoreInterrupts((long)(temp_r31));
    }
}

#pragma push
#pragma peephole off
void *DSPAddTask(void *arg0) {
    s32 temp_r31;

    temp_r31 = OSDisableInterrupts();
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 1;
    __DSP_insert_task(arg0);
    OSRestoreInterrupts(temp_r31);
    if (0 /* draft: did not compile */) {
        __DSP_boot_task(arg0);
    }
    return arg0;
}
#pragma pop

void fn_800D6ED8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7) {
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
