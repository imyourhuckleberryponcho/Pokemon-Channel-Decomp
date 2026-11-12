/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK DCFlushRange(u32);
s32 OSDisableInterrupts();
M2C_UNK OSRestoreInterrupts(s32, u32);
M2C_UNK ARQPostRequest(void *, s32, s32, s32, s32, s32, s32, s32);
extern M2C_UNK fn_8012EE14;
extern M2C_UNK lbl_80343AF0;
extern u32 lbl_80350E84;
extern s32 lbl_80350E90;
extern M2C_UNK lbl_80343FF8;
extern M2C_UNK *lbl_80350E78;
extern s32 lbl_80350E7C;
extern s32 lbl_80350E80;
extern s32 lbl_80350E8C;
extern s32 lbl_80350E94;
M2C_UNK OSEnableInterrupts();
s32 OSGetTick();
M2C_UNK AIInitDMA(s32, M2C_UNK, u8);
extern s32 lbl_80350EA4;
extern u32 lbl_80350EA8;
extern s32 lbl_80350EAC;
extern u32 lbl_80350EB0;
extern s32 lbl_80350EB4;
extern u8 lbl_80350EB8;
extern s32 lbl_80350EA0;
extern M2C_UNK lbl_8032CC00;
extern s32 lbl_80350EBC;
M2C_UNK fn_800D4714();
M2C_UNK DSPAddTask(M2C_UNK *);
extern M2C_UNK lbl_802AC620;
extern M2C_UNK lbl_80344400;
extern M2C_UNK lbl_80344460;
extern u16 lbl_80350358;
M2C_UNK fn_800C34EC();
u32 fn_800D6D58();
M2C_UNK fn_800D6D90(s32);
M2C_UNK fn_80127904(s32, s32);
extern u16 lbl_80350E24;
extern s32 lbl_80350E28;
extern s32 lbl_80350E98;
extern s16 lbl_80350E9C;
extern M2C_UNK lbl_80350E6C;
extern M2C_UNK lbl_80346460;
extern s32 lbl_80350EC0;
extern s32 lbl_80350EC4;
extern s32 lbl_80350E88;

s32 fn_8012F40C(s32 arg0, s32 arg1, M2C_UNK arg_sp0);
void fn_8012F7C8(s32 arg1);
void InitStreamBuffers(void);
u8 fn_8012F8A4(s32 arg0);
s32 fn_8012F9AC(s32 arg0, s32 *arg1);
void fn_8012F9E4(s32 arg0);
void salCallback(void);
void fn_8012FB84(void);
void fn_8012FB94(void);
s32 salInitAi(s32 arg0, s32 *arg2);
void fn_8012FCC0(void);
s32 salAiGetDest(void);
s32 fn_8012FD10(void);
void salCtrlDsp(s32 arg0);
u32 salGetStartDelay(void);
void hwInitIrq(void);
void hwEnableIrq(void);
void hwDisableIrq(void);
void fn_8012FF28(void);
void fn_8012FF48(void);
void fn_8012FF68(void);
void fn_8012FF90(void);
void fn_8012FFBC(void);
void fn_801301D8(void *arg0, s32 arg1, u8 arg2, u8 arg3);
s16 fn_801302E4(s32 *arg0, void *arg1, M2C_UNK arg_sp0);
u8 fn_801308BC(void *arg0);
s32 fn_8013091C(void *arg0);
void fn_8013095C(void *arg0, s32 arg1, s32 arg2);
void fn_801309C4(void *arg0);
void fn_80130C80(void *arg0, M2C_UNK arg_sp0);
void fn_80130E58(void *arg0, s32 arg1, s32 arg2);
void fn_801311F8(void *arg0);

s32 fn_8012F40C(s32 arg0, s32 arg1, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

void fn_8012F7C8(s32 arg1) {
    lbl_80350E90 -= (arg1 + 0x1F) & 0xFFFFFFE0;
}

void InitStreamBuffers(void) { } /* draft: stub */

u8 fn_8012F8A4(s32 arg0) {
    M2C_UNK *temp_r4;
    M2C_UNK *var_r3;
    M2C_UNK *var_r4;
    M2C_UNK *var_r5;
    s32 temp_r0_2;
    u32 temp_r0;
    u8 temp_r7;
    u32 var_r6;

    /* draft: did not compile: var_r3 = lbl_80350E7C; */
    temp_r7 = (arg0 + 0x1F) & 0xFFFFFFE0;
    var_r5 = NULL;
    var_r4 = NULL;
    var_r6 = -1U;
loop_7:
    if (var_r3 != NULL) {
        temp_r0 = M2C_FIELD(var_r3, u32 *, 0xC);
        if (temp_r0 == temp_r7) {
            var_r5 = var_r3;
        } else {
            if ((temp_r0 > temp_r7) && (var_r6 > temp_r0)) {
                var_r5 = var_r3;
                var_r6 = temp_r0;
            }
            var_r4 = var_r3;
            var_r3 = M2C_FIELD(var_r3, M2C_UNK **, 0);
            goto loop_7;
        }
    }
    if (var_r5 == NULL) {
        temp_r4 = lbl_80350E78;
        if ((temp_r4 != NULL) && ((u32) (lbl_80350E8C - temp_r7) >= (u32) lbl_80350E90)) {
            var_r5 = temp_r4;
            lbl_80350E78 = M2C_FIELD(temp_r4, M2C_UNK **, 0);
            M2C_FIELD(temp_r4, u32 *, 0xC) = temp_r7;
            M2C_FIELD(temp_r4, u32 *, 8) = temp_r7;
            temp_r0_2 = lbl_80350E8C - temp_r7;
            M2C_FIELD(temp_r4, s32 *, 4) = temp_r0_2;
            lbl_80350E8C = temp_r0_2;
            /* draft: did not compile: M2C_FIELD(temp_r4, M2C_UNK **, 0) = lbl_80350E80; */
            /* draft: did not compile: lbl_80350E80 = temp_r4; */
        }
    } else {
        if (var_r4 != NULL) {
            /* draft: did not compile: *var_r4 = M2C_FIELD(var_r5, M2C_UNK **, 0); */
        } else {
            /* draft: did not compile: lbl_80350E7C = M2C_FIELD(var_r5, M2C_UNK **, 0); */
        }
        M2C_FIELD(var_r5, u32 *, 8) = temp_r7;
        /* draft: did not compile: M2C_FIELD(var_r5, M2C_UNK **, 0) = lbl_80350E80; */
        /* draft: did not compile: lbl_80350E80 = var_r5; */
    }
    if (var_r5 == NULL) {
        return 0xFFU;
    }
    return (u8) ((s32) (var_r5 - &lbl_80343FF8) / 16);
}

s32 fn_8012F9AC(s32 arg0, s32 *arg1) {
    if (arg1 != NULL) {
        *arg1 = M2C_FIELD((&lbl_80343FF8 + ((arg0 * 0x10) & 0xFF0)), s32 *, 8);
    }
    return M2C_FIELD((&lbl_80343FF8 + ((arg0 * 0x10) & 0xFF0)), s32 *, 4);
}

void fn_8012F9E4(s32 arg0) { } /* draft: stub */

void salCallback(void) {
    u32 temp_r5;
    u32 temp_r5_2;
    u8 temp_r5_3;
    u32 temp_r0;

    temp_r5 = lbl_80350EB8 + 1;
    temp_r5_2 = temp_r5 >> 0x1FU;
    temp_r0 = (temp_r5 << 0x1E) - temp_r5_2;
    temp_r5_3 = ((temp_r0 << 2) | (temp_r0 >> 0x1EU)) + temp_r5_2;
    lbl_80350EB8 = temp_r5_3;
    AIInitDMA(lbl_80350EB4 + 0x80000000 + (temp_r5_3 * 0x280), 0x280, temp_r5_3);
    lbl_80350EA4 = OSGetTick();
    if ((u32) lbl_80350EB0 != 0U) {
        if ((u32) lbl_80350EA8 == 0U) {
            lbl_80350EA8 = 1U;
            OSEnableInterrupts();
            /* draft: did not compile: lbl_80350EBC(); */
            OSDisableInterrupts();
            lbl_80350EA8 = 0U;
        }
    } else {
        lbl_80350EAC = 1;
    }
}

void fn_8012FB84(void) {
    lbl_80350EB0 = 1;
    lbl_80350EA0 = 1;
}

void fn_8012FB94(void) {
    lbl_80350EB0 = 1;
    if ((u32) lbl_80350EAC != 0U) {
        lbl_80350EAC = 0U;
        if ((u32) lbl_80350EA8 == 0U) {
            lbl_80350EA8 = 1U;
            OSEnableInterrupts();
            /* draft: did not compile: lbl_80350EBC(); */
            OSDisableInterrupts();
            lbl_80350EA8 = 0U;
        }
    }
}

s32 salInitAi(s32 arg0, s32 *arg2) {
    u8 temp_r3;

    /* draft: did not compile: temp_r3 = fn_8012FF68(); */
    lbl_80350EB4 = temp_r3;
    if (temp_r3 != 0U) {
        memset((void *)(0), (int)(0xA00), (unsigned long)(0));
        DCFlushRange((unsigned long)(lbl_80350EB4));
        lbl_80350EB0 = 1;
        lbl_80350EB8 = 1;
        lbl_80350EAC = 0;
        lbl_80350EA8 = 0;
        fn_800D4648(salCallback, 1);
        AIInitDMA((long)(lbl_80350EB4 + 0x80000000 + (lbl_80350EB8 * 0x280)), (long)(0x280), (unsigned char)(0));
        lbl_80350EBC = arg0;
        M2C_FIELD(&lbl_8032CC00, s32 *, 4) = 0x20;
        *arg2 = 0x7D00;
        return 1;
    }
    return 0;
}

void fn_8012FCC0(void) {
    fn_800D4714();
}

s32 salAiGetDest(void) {
    u32 temp_r0;
    u32 temp_r3;
    u32 temp_r3_2;

    temp_r3_2 = lbl_80350EB8 + 2;
    temp_r3 = temp_r3_2 >> 0x1FU;
    temp_r0 = (temp_r3_2 << 0x1E) - temp_r3;
    return lbl_80350EB4 + ((u8) (((temp_r0 << 2) | (temp_r0 >> 0x1EU)) + temp_r3) * 0x280);
}

s32 fn_8012FD10(void) {
    M2C_FIELD(&lbl_80344400, s32 *, 0x10) = (s32) lbl_80350358;
    M2C_FIELD(&lbl_80344400, s32 *, 0x14) = 0;
    M2C_FIELD(&lbl_80344400, M2C_UNK **, 0xC) = &lbl_802AC620;
    M2C_FIELD(&lbl_80344400, M2C_UNK **, 0x18) = &lbl_80344460;
    M2C_FIELD(&lbl_80344400, s32 *, 0x1C) = 0x2000;
    M2C_FIELD(&lbl_80344400, s16 *, 0x24) = 0x10;
    M2C_FIELD(&lbl_80344400, s16 *, 0x26) = 0x30;
    M2C_FIELD(&lbl_80344400, s32 *, 0x20) = 0;
    /* draft: did not compile: M2C_FIELD(&lbl_80344400, M2C_UNK (**)(), 0x28) = fn_8012FB84; */
    /* draft: did not compile: M2C_FIELD(&lbl_80344400, M2C_UNK (**)(), 0x2C) = fn_8012FB94; */
    M2C_FIELD(&lbl_80344400, s32 *, 4) = 0;
    M2C_FIELD(&lbl_80344400, s32 *, 0x30) = 0;
    M2C_FIELD(&lbl_80344400, s32 *, 0x34) = 0;
    DSPInit(0x30, fn_8012FB84, 0x10, 0x2000, &lbl_80344460, 0, lbl_80350358, &lbl_80344400);
    DSPAddTask(&lbl_80344400);
    lbl_80350EA0 = 0U;
    hwEnableIrq();
    do {

    } while ((u32) lbl_80350EA0 == 0U);
    hwDisableIrq();
    return 1;
}

void salCtrlDsp(s32 arg0) {
    s32 temp_r31;

    fn_80127904(arg0, salGetStartDelay());
    temp_r31 = lbl_80350E28;
    lbl_80350EB0 = 0;
    fn_800C34EC();
    fn_800D6D90(lbl_80350E24 | 0xBABE0000);
    do {

    } while (fn_800D6D58() != 0U);
    fn_800D6D90(temp_r31);
    do {

    } while (fn_800D6D58() != 0U);
}

u32 salGetStartDelay(void) {
    return (u32) ((OSGetTick() - lbl_80350EA4) * 8) / (u32) (*(u32 *)0x800000F8 / 500000);
}

void hwInitIrq(void) {
    lbl_80350E98 = OSDisableInterrupts();
    lbl_80350E9C = 1;
}

void hwEnableIrq(void) {
    u16 temp_r3;

    temp_r3 = lbl_80350E9C - 1;
    lbl_80350E9C = temp_r3;
    if (temp_r3 == 0) {
        OSRestoreInterrupts((long)(lbl_80350E98), (unsigned long)(0));
    }
}

void hwDisableIrq(void) {
    s32 temp_cr0_eq;

    temp_cr0_eq = (u16) lbl_80350E9C == 0;
    lbl_80350E9C += 1;
    if (temp_cr0_eq != 0) {
        lbl_80350E98 = OSDisableInterrupts();
    }
}

void fn_8012FF28(void) {
    OSDisableInterrupts();
}

void fn_8012FF48(void) {
    OSEnableInterrupts();
}

void fn_8012FF68(void) {
    /* draft: did not compile: lbl_80350E6C(); */
}

void fn_8012FF90(void) {
    M2C_FIELD(&lbl_80350E6C, M2C_UNK (**)(M2C_UNK *), 4)(&lbl_80350E6C);
}

#pragma push
#pragma peephole off
void fn_8012FFBC(void) {
    M2C_UNK *var_r4;
    s32 *var_r3;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 temp_r6_3;
    s32 temp_r6_4;
    s32 temp_r7;
    s32 temp_r8;
    s32 temp_r9;
    s32 var_ctr;
    s32 var_ctr_2;
    s32 var_ctr_3;
    s8 var_ctr_4;
    s32 var_r11;
    s32 var_r31;
    s32 var_r6;
    s32 var_r9;
    u8 var_r0;
    u8 var_r0_2;
    u8 var_r0_3;
    u8 var_r0_4;
    void *temp_r4;
    void *temp_r4_2;
    void *var_r10;
    void *var_r12;

    var_r4 = &lbl_80346460;
    var_r6 = -0x80;
    var_ctr = 0x80;
    do {
        if (var_r6 < 0) {
            var_r0 = 0;
        } else {
            var_r0 = 0xFF;
            if (var_r6 <= 0xFF) {
                var_r0 = (u8) var_r6;
            }
        }
        temp_r6 = var_r6 + 1;
        M2C_FIELD(var_r4, u8 *, 0) = var_r0;
        temp_r4 = var_r4 + 1;
        if (temp_r6 < 0) {
            var_r0_2 = 0;
        } else {
            var_r0_2 = 0xFF;
            if (temp_r6 <= 0xFF) {
                var_r0_2 = (u8) temp_r6;
            }
        }
        temp_r6_2 = temp_r6 + 1;
        M2C_FIELD(var_r4, u8 *, 1) = var_r0_2;
        /* draft: did not compile: temp_r4_2 = temp_r4 + 1; */
        if (temp_r6_2 < 0) {
            var_r0_3 = 0;
        } else {
            var_r0_3 = 0xFF;
            if (temp_r6_2 <= 0xFF) {
                var_r0_3 = (u8) temp_r6_2;
            }
        }
        temp_r6_3 = temp_r6_2 + 1;
        M2C_FIELD(temp_r4, u8 *, 1) = var_r0_3;
        if (temp_r6_3 < 0) {
            var_r0_4 = 0;
        } else {
            var_r0_4 = 0xFF;
            if (temp_r6_3 <= 0xFF) {
                var_r0_4 = (u8) temp_r6_3;
            }
        }
        M2C_FIELD(temp_r4_2, u8 *, 1) = var_r0_4;
        /* draft: did not compile: var_r4 = temp_r4_2 + 1 + 1; */
        var_r6 = temp_r6_3 + 1;
        var_ctr -= 1;
    } while (var_ctr != 0);
    M2C_FIELD(&lbl_80346460, s32 *, 0x200) = 0;
    var_r10 = &lbl_80346460 + 0x204;
    var_r11 = 1;
    var_r9 = 0x10;
    var_ctr_2 = 3;
    do {
        temp_r4_3 = (var_r11 + 3) * 0x10;
        temp_r0 = (var_r11 + 4) * 0x10;
        M2C_FIELD(var_r10, s32 *, 0) = (s32) ((0x1000 / var_r9) * 0x10);
        var_r9 += 0x50;
        temp_r5 = 0x1000 / (s32) ((var_r11 + 2) * 0x10);
        M2C_FIELD(var_r10, s32 *, 4) = (s32) ((0x1000 / (s32) ((var_r11 + 1) * 0x10)) * 0x10);
        var_r11 += 5;
        M2C_FIELD(var_r10, s32 *, 8) = (s32) (temp_r5 * 0x10);
        M2C_FIELD(var_r10, s32 *, 0xC) = (s32) ((0x1000 / temp_r4_3) * 0x10);
        M2C_FIELD(var_r10, s32 *, 0x10) = (s32) ((0x1000 / temp_r0) * 0x10);
        /* draft: did not compile: var_r10 += 0x14; */
        var_ctr_2 -= 1;
    } while (var_ctr_2 != 0);
    M2C_FIELD(&lbl_80346460, s32 *, 0x240) = 0;
    var_r12 = &lbl_80346460 + 0x244;
    var_r31 = 1;
    var_ctr_3 = 0x3F;
    do {
        temp_r8 = var_r31 + 2;
        temp_r7 = var_r31 + 3;
        temp_r6_4 = var_r31 + 4;
        temp_r5_2 = var_r31 + 5;
        temp_r4_4 = var_r31 + 6;
        temp_r0_2 = var_r31 + 7;
        M2C_FIELD(var_r12, s32 *, 0) = (s32) (0x1000 / var_r31);
        temp_r9 = 0x1000 / (s32) (var_r31 + 1);
        var_r31 += 8;
        M2C_FIELD(var_r12, s32 *, 4) = temp_r9;
        M2C_FIELD(var_r12, s32 *, 8) = (s32) (0x1000 / temp_r8);
        M2C_FIELD(var_r12, s32 *, 0xC) = (s32) (0x1000 / temp_r7);
        M2C_FIELD(var_r12, s32 *, 0x10) = (s32) (0x1000 / temp_r6_4);
        M2C_FIELD(var_r12, s32 *, 0x14) = (s32) (0x1000 / temp_r5_2);
        M2C_FIELD(var_r12, s32 *, 0x18) = (s32) (0x1000 / temp_r4_4);
        M2C_FIELD(var_r12, s32 *, 0x1C) = (s32) (0x1000 / temp_r0_2);
        /* draft: did not compile: var_r12 += 0x20; */
        var_ctr_3 -= 1;
    } while (var_ctr_3 != 0);
    var_r3 = &lbl_80346460 + (var_r31 * 4) + 0x240;
    var_ctr_4 = 0x200 - var_r31;
    if (var_r31 < 0x200) {
        do {
            temp_r0_3 = 0x1000 / var_r31;
            var_r31 += 1;
            *var_r3 = temp_r0_3;
            var_r3 += 4;
            var_ctr_4 -= 1;
        } while (var_ctr_4 != 0);
    }
}
#pragma pop

void fn_801301D8(void *arg0, s32 arg1, u8 arg2, u8 arg3) {
    s32 temp_r3;
    u16 temp_r5;
    void *temp_r4;

    /* draft: did not compile: temp_r4 = M2C_FIELD(arg0, s32 *, 0) + (arg1 * 0x38); */
    M2C_FIELD(temp_r4, u8 *, 0x30) = (u8) (arg2 == 2);
    M2C_FIELD(temp_r4, u16 *, 0x28) = (u16) ((s32) M2C_FIELD(arg0, u16 *, 4) >> M2C_FIELD(temp_r4, u8 *, 0x30));
    M2C_FIELD(temp_r4, u8 *, 0x31) = (u8) (arg3 == 2);
    M2C_FIELD(temp_r4, u16 *, 0x2A) = (u16) ((s32) M2C_FIELD(arg0, u16 *, 6) >> M2C_FIELD(temp_r4, u8 *, 0x31));
    M2C_FIELD(temp_r4, s32 *, 0x2C) = (s32) (M2C_FIELD(temp_r4, u16 *, 0x28) * M2C_FIELD(temp_r4, u16 *, 0x2A));
    M2C_FIELD(temp_r4, u8 *, 0x32) = (u8) (2 >> M2C_FIELD(temp_r4, u8 *, 0x30));
    M2C_FIELD(temp_r4, u8 *, 0x33) = (u8) (2 >> M2C_FIELD(temp_r4, u8 *, 0x31));
    M2C_FIELD(temp_r4, s8 *, 0x34) = (s8) (M2C_FIELD(temp_r4, u8 *, 0x32) * M2C_FIELD(temp_r4, u8 *, 0x33));
    M2C_FIELD(temp_r4, u16 *, 8) = (u16) ((s32) M2C_FIELD(arg0, u16 *, 4) / (s32) ((arg2 * 4) & 0x3FC));
    M2C_FIELD(temp_r4, u16 *, 0xA) = (u16) ((s32) M2C_FIELD(arg0, u16 *, 6) / (s32) ((arg3 * 4) & 0x3FC));
    M2C_FIELD(temp_r4, u16 *, 0xC) = (u16) (M2C_FIELD(temp_r4, u16 *, 8) + 2);
    M2C_FIELD(temp_r4, s16 *, 0xE) = (s16) (M2C_FIELD(temp_r4, u16 *, 0xA) + 2);
    M2C_FIELD(temp_r4, s16 *, 0x10) = 0;
    M2C_FIELD(temp_r4, s16 *, 0x16) = 1;
    temp_r5 = M2C_FIELD(temp_r4, u16 *, 0xC);
    M2C_FIELD(temp_r4, u16 *, 0x12) = temp_r5;
    M2C_FIELD(temp_r4, s16 *, 0x14) = (s16) (temp_r5 + 1);
    M2C_FIELD(temp_r4, s32 *, 0x18) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x24) = 4;
    temp_r3 = 4;
    temp_r3 *= M2C_FIELD(temp_r4, u16 *, 0x28);
    M2C_FIELD(temp_r4, s32 *, 0x1C) = temp_r3;
    M2C_FIELD(temp_r4, s32 *, 0x20) = (s32) (temp_r3 + 4);
}

s16 fn_801302E4(s32 *arg0, void *arg1, M2C_UNK arg_sp0) {
    s32 temp_r30;
    s16 var_r3_2;
    s16 var_r3_3;
    s16 var_r3_4;
    s16 var_r4_3;
    s16 var_r4_5;
    s16 var_r5;
    s16 var_r5_2;
    s16 var_r5_3;
    s16 var_r5_4;
    s16 var_r5_5;
    s16 var_r5_6;
    s32 *temp_r4;
    s32 *temp_r4_3;
    s32 temp_r25;
    s32 temp_r25_2;
    s32 temp_r25_3;
    s32 temp_r25_4;
    s32 temp_r28;
    s32 temp_r28_2;
    u32 *temp_r3_2;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 temp_r6_3;
    s32 temp_r7;
    s32 temp_r7_2;
    s32 temp_r7_3;
    u32 *temp_r3_3;
    s32 var_r4_2;
    s32 var_r4_4;
    s32 var_r6;
    s32 var_r6_2;
    s32 var_r6_3;
    u32 *temp_r3;
    s16 var_r3;
    s32 var_r4;
    u32 *temp_r4_2;
    u32 *temp_r4_4;
    u32 *temp_r4_5;
    u32 var_r0;
    u32 var_r0_2;
    u32 var_r0_3;
    u32 var_r7;
    u32 var_r7_2;
    u32 var_r7_3;
    s16 var_r5_7;

    var_r4 = M2C_FIELD(arg1, s32 *, 0xC);
    if (var_r4 < 0) {
        temp_r3 = M2C_FIELD(arg1, u32 **, 0);
        var_r4 = 0x1F;
        M2C_FIELD(arg1, u32 **, 0) = (u32 *) (temp_r3 + 4);
        var_r0 = *temp_r3;
        M2C_FIELD(arg1, u32 *, 8) = var_r0;
    } else {
        var_r0 = M2C_FIELD(arg1, u32 *, 8);
    }
    M2C_FIELD(arg1, s32 *, 0xC) = (s32) (var_r4 - 1);
    if ((var_r0 >> var_r4) & 1) {
        temp_r30 = *arg0;
        *arg0 = temp_r30 + 1;
        var_r4_2 = M2C_FIELD(arg1, s32 *, 0xC);
        if (var_r4_2 < 0) {
            temp_r3_2 = M2C_FIELD(arg1, u32 **, 0);
            var_r4_2 = 0x1F;
            M2C_FIELD(arg1, u32 **, 0) = (u32 *) (temp_r3_2 + 4);
            var_r0_2 = *temp_r3_2;
            M2C_FIELD(arg1, u32 *, 8) = var_r0_2;
        } else {
            var_r0_2 = M2C_FIELD(arg1, u32 *, 8);
        }
        M2C_FIELD(arg1, s32 *, 0xC) = (s32) (var_r4_2 - 1);
        if ((var_r0_2 >> var_r4_2) & 1) {
            temp_r28 = *arg0;
            *arg0 = temp_r28 + 1;
            if (fn_8013091C(arg1) != 0) {
                temp_r25 = *arg0;
                *arg0 = temp_r25 + 1;
                M2C_FIELD(&arg0[temp_r25], s32 *, 8) = (s32) fn_801302E4((long *)(arg0), (void *)(arg1), (long)(0));
                M2C_FIELD(&arg0[temp_r25], s32 *, 0x808) = (s32) fn_801302E4((long *)(arg0), (void *)(arg1), (long)(0));
                var_r3 = (s16) temp_r25;
            } else {
                var_r3 = fn_801308BC(arg1);
                var_r5 = var_r3;
                if (((s32) lbl_80350EC4 != 0) && (var_r3 > 0x7F)) {
                    var_r5 -= 0x100;
                }
                M2C_FIELD(&arg0[var_r3], s32 *, 8) = (s32) (s16) (var_r5 << lbl_80350EC0);
            }
            temp_r4 = &arg0[temp_r28];
            M2C_FIELD(temp_r4, s32 *, 8) = (s32) var_r3;
            if (fn_8013091C((void *)(arg1)) != 0) {
                temp_r25_2 = *arg0;
                *arg0 = temp_r25_2 + 1;
                M2C_FIELD(&arg0[temp_r25_2], s32 *, 8) = (s32) fn_801302E4((long *)(arg0), (void *)(arg1), (long)(0));
                M2C_FIELD(&arg0[temp_r25_2], s32 *, 0x808) = (s32) fn_801302E4((long *)(arg0), (void *)(arg1), (long)(0));
                var_r3_2 = (s16) temp_r25_2;
            } else {
                var_r3_2 = fn_801308BC(arg1);
                var_r5_2 = var_r3_2;
                if (((s32) lbl_80350EC4 != 0) && (var_r3_2 > 0x7F)) {
                    var_r5_2 -= 0x100;
                }
                M2C_FIELD(&arg0[var_r3_2], s32 *, 8) = (s32) (s16) (var_r5_2 << lbl_80350EC0);
            }
            M2C_FIELD(&arg0[temp_r28], s32 *, 0x808) = (s32) var_r3_2;
            var_r5_3 = (s16) temp_r28;
        } else {
            temp_r6 = M2C_FIELD(arg1, s32 *, 0xC);
            if (temp_r6 >= 7) {
                var_r6 = temp_r6 - 8;
                var_r7_2 = (u32) M2C_FIELD(arg1, u32 *, 8) >> (temp_r6 - 7);
            } else {
                temp_r4_2 = M2C_FIELD(arg1, u32 **, 0);
                var_r6 = temp_r6 + 0x18;
                temp_r7 = M2C_FIELD(arg1, u32 *, 8) << (7 - temp_r6);
                M2C_FIELD(arg1, u32 **, 0) = (u32 *) (temp_r4_2 + 4);
                M2C_FIELD(arg1, u32 *, 8) = (u32) *temp_r4_2;
                var_r7_2 = temp_r7 | ((u32) M2C_FIELD(arg1, u32 *, 8) >> (temp_r6 + 0x19));
            }
            M2C_FIELD(arg1, s32 *, 0xC) = var_r6;
            var_r5_3 = (s16) (u8) var_r7_2;
            var_r4_3 = var_r5_3;
            if (((s32) lbl_80350EC4 != 0) && (var_r5_3 > 0x7F)) {
                var_r4_3 = var_r5_3;
                var_r4_3 -= 0x100;
            }
            M2C_FIELD(&arg0[var_r5_3], s32 *, 8) = (s32) (s16) (var_r4_3 << lbl_80350EC0);
        }
        M2C_FIELD(&arg0[temp_r30], s32 *, 8) = (s32) var_r5_3;
        var_r4_4 = M2C_FIELD(arg1, s32 *, 0xC);
        if (var_r4_4 < 0) {
            temp_r3_3 = M2C_FIELD(arg1, u32 **, 0);
            var_r4_4 = 0x1F;
            M2C_FIELD(arg1, u32 **, 0) = (u32 *) (temp_r3_3 + 4);
            var_r0_3 = *temp_r3_3;
            M2C_FIELD(arg1, u32 *, 8) = var_r0_3;
        } else {
            var_r0_3 = M2C_FIELD(arg1, u32 *, 8);
        }
        M2C_FIELD(arg1, s32 *, 0xC) = (s32) (var_r4_4 - 1);
        if ((var_r0_3 >> var_r4_4) & 1) {
            temp_r28_2 = *arg0;
            *arg0 = temp_r28_2 + 1;
            if (fn_8013091C(arg1) != 0) {
                temp_r25_3 = *arg0;
                *arg0 = temp_r25_3 + 1;
                M2C_FIELD(&arg0[temp_r25_3], s32 *, 8) = (s32) fn_801302E4((long *)(arg0), (void *)(arg1), (long)(0));
                M2C_FIELD(&arg0[temp_r25_3], s32 *, 0x808) = (s32) fn_801302E4((long *)(arg0), (void *)(arg1), (long)(0));
                var_r3_3 = (s16) temp_r25_3;
            } else {
                var_r3_3 = fn_801308BC(arg1);
                var_r5_4 = var_r3_3;
                if (((s32) lbl_80350EC4 != 0) && (var_r3_3 > 0x7F)) {
                    var_r5_4 -= 0x100;
                }
                M2C_FIELD(&arg0[var_r3_3], s32 *, 8) = (s32) (s16) (var_r5_4 << lbl_80350EC0);
            }
            temp_r4_3 = &arg0[temp_r28_2];
            M2C_FIELD(temp_r4_3, s32 *, 8) = (s32) var_r3_3;
            if (fn_8013091C((void *)(arg1)) != 0) {
                temp_r25_4 = *arg0;
                *arg0 = temp_r25_4 + 1;
                M2C_FIELD(&arg0[temp_r25_4], s32 *, 8) = (s32) fn_801302E4((long *)(arg0), (void *)(arg1), (long)(0));
                M2C_FIELD(&arg0[temp_r25_4], s32 *, 0x808) = (s32) fn_801302E4((long *)(arg0), (void *)(arg1), (long)(0));
                var_r3_4 = (s16) temp_r25_4;
            } else {
                var_r3_4 = fn_801308BC(arg1);
                var_r5_5 = var_r3_4;
                if (((s32) lbl_80350EC4 != 0) && (var_r3_4 > 0x7F)) {
                    var_r5_5 -= 0x100;
                }
                M2C_FIELD(&arg0[var_r3_4], s32 *, 8) = (s32) (s16) (var_r5_5 << lbl_80350EC0);
            }
            M2C_FIELD(&arg0[temp_r28_2], s32 *, 0x808) = (s32) var_r3_4;
            var_r5_6 = (s16) temp_r28_2;
        } else {
            temp_r6_2 = M2C_FIELD(arg1, s32 *, 0xC);
            if (temp_r6_2 >= 7) {
                var_r6_2 = temp_r6_2 - 8;
                var_r7_3 = (u32) M2C_FIELD(arg1, u32 *, 8) >> (temp_r6_2 - 7);
            } else {
                temp_r4_4 = M2C_FIELD(arg1, u32 **, 0);
                var_r6_2 = temp_r6_2 + 0x18;
                temp_r7_2 = M2C_FIELD(arg1, u32 *, 8) << (7 - temp_r6_2);
                M2C_FIELD(arg1, u32 **, 0) = (u32 *) (temp_r4_4 + 4);
                M2C_FIELD(arg1, u32 *, 8) = (u32) *temp_r4_4;
                var_r7_3 = temp_r7_2 | ((u32) M2C_FIELD(arg1, u32 *, 8) >> (temp_r6_2 + 0x19));
            }
            M2C_FIELD(arg1, s32 *, 0xC) = var_r6_2;
            var_r5_6 = (s16) (u8) var_r7_3;
            var_r4_5 = var_r5_6;
            if (((s32) lbl_80350EC4 != 0) && (var_r5_6 > 0x7F)) {
                var_r4_5 = var_r5_6 - 0x100;
            }
            M2C_FIELD(&arg0[var_r5_6], s32 *, 8) = (s32) (s16) (var_r4_5 << lbl_80350EC0);
        }
        M2C_FIELD(&arg0[temp_r30], s32 *, 0x808) = (s32) var_r5_6;
        return (s16) temp_r30;
    }
    temp_r6_3 = M2C_FIELD(arg1, s32 *, 0xC);
    if (temp_r6_3 >= 7) {
        var_r6_3 = temp_r6_3 - 8;
        var_r7 = (u32) M2C_FIELD(arg1, u32 *, 8) >> (temp_r6_3 - 7);
    } else {
        temp_r4_5 = M2C_FIELD(arg1, u32 **, 0);
        var_r6_3 = temp_r6_3 + 0x18;
        temp_r7_3 = M2C_FIELD(arg1, u32 *, 8) << (7 - temp_r6_3);
        M2C_FIELD(arg1, u32 **, 0) = (u32 *) (temp_r4_5 + 4);
        M2C_FIELD(arg1, u32 *, 8) = (u32) *temp_r4_5;
        var_r7 = temp_r7_3 | ((u32) M2C_FIELD(arg1, u32 *, 8) >> (temp_r6_3 + 0x19));
    }
    M2C_FIELD(arg1, s32 *, 0xC) = var_r6_3;
    var_r5_7 = (u8) var_r7;
    if (((s32) lbl_80350EC4 != 0) && ((s16) (u8) var_r7 > 0x7F)) {
        var_r5_7 = (u8) var_r7;
        var_r5_7 -= 0x100;
    }
    M2C_FIELD(&arg0[(s16) (u8) var_r7], s32 *, 8) = (s32) (s16) ((s16) var_r5_7 << lbl_80350EC0);
    return (s16) (u8) var_r7;
}

u8 fn_801308BC(void *arg0) {
    u32 *temp_r5;
    s32 temp_r8;
    s32 var_r8;
    s32 temp_r7;
    u32 var_r7;

    temp_r8 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_r8 >= 7) {
        var_r8 = temp_r8 - 8;
        var_r7 = (u32) M2C_FIELD(arg0, u32 *, 8) >> (temp_r8 - 7);
    } else {
        temp_r5 = M2C_FIELD(arg0, u32 **, 0);
        var_r8 = temp_r8 + 0x18;
        temp_r7 = M2C_FIELD(arg0, u32 *, 8) << (7 - temp_r8);
        M2C_FIELD(arg0, u32 **, 0) = (u32 *) (temp_r5 + 4);
        M2C_FIELD(arg0, u32 *, 8) = (u32) *temp_r5;
        var_r7 = temp_r7 | ((u32) M2C_FIELD(arg0, u32 *, 8) >> (temp_r8 + 0x19));
    }
    M2C_FIELD(arg0, s32 *, 0xC) = var_r8;
    return (u8) var_r7;
}

s32 fn_8013091C(void *arg0) {
    s32 var_r5;
    u32 *temp_r4;
    u32 var_r0;

    var_r5 = M2C_FIELD(arg0, s32 *, 0xC);
    if (var_r5 < 0) {
        temp_r4 = M2C_FIELD(arg0, u32 **, 0);
        var_r5 = 0x1F;
        M2C_FIELD(arg0, u32 **, 0) = (u32 *) (temp_r4 + 4);
        var_r0 = *temp_r4;
        M2C_FIELD(arg0, u32 *, 8) = var_r0;
    } else {
        var_r0 = M2C_FIELD(arg0, u32 *, 8);
    }
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (var_r5 - 1);
    return (var_r0 >> var_r5) & 1;
}

void fn_8013095C(void *arg0, s32 arg1, s32 arg2) {
    void *temp_r31;

    temp_r31 = M2C_FIELD(arg0, void **, 0x10);
    lbl_80350EC4 = arg1;
    lbl_80350EC0 = arg2;
    M2C_FIELD(temp_r31, s32 *, 0) = 0x100;
    if ((u32) M2C_FIELD(arg0, u32 *, 4) != 0U) {
        M2C_FIELD(temp_r31, s32 *, 4) = (s32) fn_801302E4((long *)(temp_r31), (void *)(arg0), (long)(0));
        return;
    }
    M2C_FIELD(temp_r31, s32 *, 4) = 0;
}

void fn_801309C4(void *arg0) { } /* draft: stub */

void fn_80130C80(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80130E58(void *arg0, s32 arg1, s32 arg2) {
    s32 var_ctr_4;
    s32 var_ctr_6;
    s32 var_r12;
    s32 var_r30;
    s32 var_r31;
    s32 var_r5_3;
    s32 var_r5_4;
    s32 var_r6_2;
    s32 var_r7_2;
    s32 var_r9;
    u32 temp_r0_12;
    s32 temp_r0_8;
    s32 temp_r4;
    s32 temp_r6;
    s32 temp_r7;
    s32 temp_r8;
    u8 temp_r9;
    s32 var_ctr_10;
    s32 var_ctr_2;
    s32 var_ctr_8;
    s32 var_r11;
    s32 var_r29;
    s32 var_r5;
    s32 var_r5_2;
    s32 var_r5_5;
    s32 var_r5_6;
    u32 temp_r0;
    u32 temp_r0_13;
    u32 temp_r0_4;
    u32 temp_r0_7;
    u32 temp_r0_9;
    u32 var_ctr;
    u32 var_ctr_3;
    u32 var_ctr_5;
    u32 var_ctr_7;
    u32 var_ctr_9;
    u8 *var_r10;
    u8 *var_r4;
    u8 *var_r6;
    u8 *var_r7;
    u8 *var_r8;
    s32 temp_r0_10;
    s32 temp_r0_11;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_5;
    s32 temp_r0_6;

    temp_r8 = M2C_FIELD(arg0, u16 *, 0xC);
    temp_r7 = M2C_FIELD(arg0, u16 *, 8);
    temp_r6 = M2C_FIELD(arg0, u16 *, 0x625C);
    temp_r9 = M2C_FIELD(arg0, u16 *, 0xA);
    /* draft: did not compile: var_r10 = M2C_FIELD(arg0, s32 *, 4) + ((arg1 + (arg2 * temp_r8)) * 2); */
    if ((s32) temp_r7 < (s32) temp_r6) {
        var_r12 = temp_r6 - temp_r7;
        var_r11 = temp_r7;
        if (var_r12 > (s32) temp_r7) {
            var_r12 = (s32) temp_r7;
        }
        var_r30 = temp_r6 - (temp_r7 + var_r12);
    } else {
        var_r11 = temp_r6;
        var_r30 = 0;
        var_r12 = 0;
    }
    temp_r4 = M2C_FIELD(arg0, u16 *, 0x625E);
    if ((s32) temp_r9 < (s32) temp_r4) {
        var_r31 = temp_r4 - temp_r9;
        var_r5 = temp_r9;
        if (var_r31 > (s32) temp_r9) {
            var_r31 = (s32) temp_r9;
        }
        var_r9 = temp_r4 - (temp_r9 + var_r31);
    } else {
        var_r5 = temp_r4;
        var_r9 = 0;
        var_r31 = 0;
    }
    var_r29 = var_r5;
    /* draft: did not compile: var_r4 = arg0 + 0x6261; */
loop_30:
    if ((s32) var_r29 > 0) {
        var_r6 = var_r10;
        var_r5_2 = var_r11;
        if ((s32) var_r11 > 0) {
            temp_r0 = var_r11 >> 3U;
            var_ctr = temp_r0;
            if (temp_r0 != 0) {
                do {
                    M2C_FIELD(var_r4, u8 *, 0) = ((u8) M2C_FIELD(var_r6, u8 *, 0) >> 4U) & 0xF;
                    M2C_FIELD(var_r4, s8 *, 1) = (s8) (((u8) M2C_FIELD(var_r6, u8 *, 2) >> 4U) & 0xF);
                    M2C_FIELD(var_r4, s8 *, 2) = (s8) (((u8) M2C_FIELD(var_r6, u8 *, 4) >> 4U) & 0xF);
                    M2C_FIELD(var_r4, s8 *, 3) = (s8) (((u8) M2C_FIELD(var_r6, u8 *, 6) >> 4U) & 0xF);
                    M2C_FIELD(var_r4, s8 *, 4) = (s8) (((u8) M2C_FIELD(var_r6, u8 *, 8) >> 4U) & 0xF);
                    M2C_FIELD(var_r4, s8 *, 5) = (s8) (((u8) M2C_FIELD(var_r6, u8 *, 0xA) >> 4U) & 0xF);
                    M2C_FIELD(var_r4, s8 *, 6) = (s8) (((u8) M2C_FIELD(var_r6, u8 *, 0xC) >> 4U) & 0xF);
                    temp_r0_2 = M2C_FIELD(var_r6, u8 *, 0xE);
                    var_r6 += 0x10;
                    M2C_FIELD(var_r4, s8 *, 7) = (s8) ((temp_r0_2 >> 4U) & 0xF);
                    var_r4 += 8;
                    var_ctr -= 1;
                } while (var_ctr != 0);
                var_r5_2 &= 7;
                if (var_r5_2 != 0) {
                    goto block_15;
                }
            } else {
block_15:
                var_ctr_2 = var_r5_2;
                do {
                    temp_r0_3 = *var_r6;
                    var_r6 += 2;
                    *var_r4 = (temp_r0_3 >> 4U) & 0xF;
                    var_r4 += 1;
                    var_ctr_2 -= 1;
                } while (var_ctr_2 != 0);
            }
        }
        var_r5_3 = var_r12;
        if (var_r12 > 0) {
            temp_r0_4 = (u32) var_r12 >> 3U;
            var_ctr_3 = temp_r0_4;
            if (temp_r0_4 != 0) {
                do {
                    M2C_FIELD(var_r4, u8 *, 0) = ((u8) M2C_FIELD(var_r6, u8 *, -2) >> 4U) & 0xF;
                    M2C_FIELD(var_r4, s8 *, 1) = (s8) (((u8) M2C_FIELD(var_r6, u8 *, -4) >> 4U) & 0xF);
                    M2C_FIELD(var_r4, s8 *, 2) = (s8) (((u8) M2C_FIELD(var_r6, u8 *, -6) >> 4U) & 0xF);
                    M2C_FIELD(var_r4, s8 *, 3) = (s8) (((u8) M2C_FIELD(var_r6, u8 *, -8) >> 4U) & 0xF);
                    M2C_FIELD(var_r4, s8 *, 4) = (s8) (((u8) M2C_FIELD(var_r6, u8 *, -0xA) >> 4U) & 0xF);
                    M2C_FIELD(var_r4, s8 *, 5) = (s8) (((u8) M2C_FIELD(var_r6, u8 *, -0xC) >> 4U) & 0xF);
                    M2C_FIELD(var_r4, s8 *, 6) = (s8) (((u8) M2C_FIELD(var_r6, u8 *, -0xE) >> 4U) & 0xF);
                    temp_r0_5 = M2C_FIELD(var_r6, u8 *, -0x10);
                    var_r6 -= 0x10;
                    M2C_FIELD(var_r4, s8 *, 7) = (s8) ((temp_r0_5 >> 4U) & 0xF);
                    var_r4 += 8;
                    var_ctr_3 -= 1;
                } while (var_ctr_3 != 0);
                var_r5_3 &= 7;
                if (var_r5_3 != 0) {
                    goto block_21;
                }
            } else {
block_21:
                var_ctr_4 = var_r5_3;
                do {
                    temp_r0_6 = M2C_FIELD(var_r6, u8 *, -2);
                    var_r6 -= 2;
                    *var_r4 = (temp_r0_6 >> 4U) & 0xF;
                    var_r4 += 1;
                    var_ctr_4 -= 1;
                } while (var_ctr_4 != 0);
            }
        }
        var_r5_4 = var_r30;
        if (var_r30 > 0) {
            temp_r0_7 = (u32) var_r30 >> 3U;
            var_ctr_5 = temp_r0_7;
            if (temp_r0_7 != 0) {
                do {
                    M2C_FIELD(var_r4, u8 *, 0) = 0;
                    M2C_FIELD(var_r4, s8 *, 1) = 0;
                    M2C_FIELD(var_r4, s8 *, 2) = 0;
                    M2C_FIELD(var_r4, s8 *, 3) = 0;
                    M2C_FIELD(var_r4, s8 *, 4) = 0;
                    M2C_FIELD(var_r4, s8 *, 5) = 0;
                    M2C_FIELD(var_r4, s8 *, 6) = 0;
                    M2C_FIELD(var_r4, s8 *, 7) = 0;
                    var_r4 += 8;
                    var_ctr_5 -= 1;
                } while (var_ctr_5 != 0);
                var_r5_4 &= 7;
                if (var_r5_4 != 0) {
                    goto block_27;
                }
            } else {
block_27:
                var_ctr_6 = var_r5_4;
                do {
                    *var_r4 = 0;
                    var_r4 += 1;
                    var_ctr_6 -= 1;
                } while (var_ctr_6 != 0);
            }
        }
        var_r10 += temp_r8 * 2;
        var_r29 -= 1;
        goto loop_30;
    }
    var_r6_2 = var_r31;
    var_r7 = var_r4 - M2C_FIELD(arg0, u16 *, 0x625C);
loop_39:
    if (var_r6_2 > 0) {
        temp_r0_8 = M2C_FIELD(arg0, u16 *, 0x625C);
        var_r8 = var_r7;
        var_r5_5 = temp_r0_8;
        if ((s32) temp_r0_8 > 0) {
            temp_r0_9 = temp_r0_8 >> 3U;
            var_ctr_7 = temp_r0_9;
            if (temp_r0_9 != 0) {
                do {
                    M2C_FIELD(var_r4, u8 *, 0) = M2C_FIELD(var_r8, u8 *, 0);
                    M2C_FIELD(var_r4, u8 *, 1) = (u8) M2C_FIELD(var_r8, u8 *, 1);
                    M2C_FIELD(var_r4, u8 *, 2) = (u8) M2C_FIELD(var_r8, u8 *, 2);
                    M2C_FIELD(var_r4, u8 *, 3) = (u8) M2C_FIELD(var_r8, u8 *, 3);
                    M2C_FIELD(var_r4, u8 *, 4) = (u8) M2C_FIELD(var_r8, u8 *, 4);
                    M2C_FIELD(var_r4, u8 *, 5) = (u8) M2C_FIELD(var_r8, u8 *, 5);
                    M2C_FIELD(var_r4, u8 *, 6) = (u8) M2C_FIELD(var_r8, u8 *, 6);
                    temp_r0_10 = M2C_FIELD(var_r8, u8 *, 7);
                    var_r8 += 8;
                    M2C_FIELD(var_r4, u8 *, 7) = temp_r0_10;
                    var_r4 += 8;
                    var_ctr_7 -= 1;
                } while (var_ctr_7 != 0);
                var_r5_5 &= 7;
                if (var_r5_5 != 0) {
                    goto block_36;
                }
            } else {
block_36:
                var_ctr_8 = var_r5_5;
                do {
                    temp_r0_11 = *var_r8;
                    var_r8 += 1;
                    *var_r4 = temp_r0_11;
                    var_r4 += 1;
                    var_ctr_8 -= 1;
                } while (var_ctr_8 != 0);
            }
        }
        var_r6_2 -= 1;
        var_r7 -= M2C_FIELD(arg0, u16 *, 0x625C);
        goto loop_39;
    }
    var_r7_2 = var_r9;
loop_48:
    if (var_r7_2 > 0) {
        temp_r0_12 = M2C_FIELD(arg0, u16 *, 0x625C);
        var_r5_6 = temp_r0_12;
        if ((s32) temp_r0_12 > 0) {
            temp_r0_13 = temp_r0_12 >> 3U;
            var_ctr_9 = temp_r0_13;
            if (temp_r0_13 != 0) {
                do {
                    M2C_FIELD(var_r4, u8 *, 0) = 0;
                    M2C_FIELD(var_r4, s8 *, 1) = 0;
                    M2C_FIELD(var_r4, s8 *, 2) = 0;
                    M2C_FIELD(var_r4, s8 *, 3) = 0;
                    M2C_FIELD(var_r4, s8 *, 4) = 0;
                    M2C_FIELD(var_r4, s8 *, 5) = 0;
                    M2C_FIELD(var_r4, s8 *, 6) = 0;
                    M2C_FIELD(var_r4, s8 *, 7) = 0;
                    var_r4 += 8;
                    var_ctr_9 -= 1;
                } while (var_ctr_9 != 0);
                var_r5_6 &= 7;
                if (var_r5_6 != 0) {
                    goto block_45;
                }
            } else {
block_45:
                var_ctr_10 = var_r5_6;
                do {
                    *var_r4 = 0;
                    var_r4 += 1;
                    var_ctr_10 -= 1;
                } while (var_ctr_10 != 0);
            }
        }
        var_r7_2 -= 1;
        goto loop_48;
    }
}

void fn_801311F8(void *arg0) {
    s32 temp_r11;
    u32 var_r10;
    u32 var_r5;
    u32 var_r6;
    u32 var_r9_2;
    u8 *var_r4;
    u8 *var_r5_2;
    u8 *var_r7_2;
    u8 *var_r8;
    u8 *var_r8_2;
    u8 *var_r9;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r12;
    u8 temp_r4;
    void *var_r7;

    /* draft: did not compile: var_r7 = arg0 + 0x6261; */
    /* draft: did not compile: var_r8 = arg0 + 0x7729; */
    /* draft: did not compile: var_r9 = arg0 + 0x6CC5; */
    var_r6 = 0U;
loop_8:
    if (var_r6 < (u16) M2C_FIELD(arg0, u16 *, 0x625E)) {
        var_r5 = 0U;
loop_6:
        if (var_r5 < (u32) (M2C_FIELD(arg0, u16 *, 0x625C) - 2)) {
            temp_r0 = M2C_FIELD(var_r7, u8 *, 0);
            temp_r4 = M2C_FIELD(var_r7, u8 *, 2);
            if (temp_r0 > temp_r4) {
                *var_r8 = temp_r0;
                var_r8 += 1;
                *var_r9 = temp_r4;
                var_r9 += 1;
            } else {
                *var_r8 = temp_r4;
                var_r8 += 1;
                *var_r9 = temp_r0;
                var_r9 += 1;
            }
            /* draft: did not compile: var_r7 += 1; */
            var_r5 += 1;
            goto loop_6;
        }
        /* draft: did not compile: var_r7 += 2; */
        var_r8 += 2;
        var_r9 += 2;
        var_r6 += 1;
        goto loop_8;
    }
    /* draft: did not compile: var_r7_2 = arg0 + 0x7729; */
    /* draft: did not compile: var_r8_2 = arg0 + 0x6CC5; */
    var_r9_2 = 0U;
    temp_r11 = M2C_FIELD(arg0, u16 *, 0x625C) * 2;
loop_18:
    if (var_r9_2 < (u32) (M2C_FIELD(arg0, u16 *, 0x625E) - 2)) {
        var_r5_2 = temp_r11 + var_r8_2;
        var_r4 = temp_r11 + var_r7_2;
        var_r10 = 0U;
loop_16:
        if (var_r10 < (u32) (M2C_FIELD(arg0, u16 *, 0x625C) - 2)) {
            temp_r12 = *var_r4;
            temp_r0_2 = *var_r5_2;
            if ((u8) *var_r7_2 <= temp_r12) {
                *var_r7_2 = temp_r12;
            }
            if ((u8) *var_r8_2 >= temp_r0_2) {
                *var_r8_2 = temp_r0_2;
            }
            var_r7_2 += 1;
            var_r4 += 1;
            var_r8_2 += 1;
            var_r5_2 += 1;
            var_r10 += 1;
            goto loop_16;
        }
        var_r7_2 += 2;
        var_r8_2 += 2;
        var_r9_2 += 1;
        goto loop_18;
    }
}
