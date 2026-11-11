/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK OSDisableInterrupts(s32, u32, s32);
M2C_UNK OSRestoreInterrupts(M2C_UNK *);
s32 fn_8013A4FC(void *, s32, s32, M2C_UNK, s32, s32, s32);
extern M2C_UNK lbl_803477C0;
extern s32 lbl_80350EEC;
extern s32 lbl_80350EF0;
extern s32 lbl_80350EF4;
s32 fn_80141BF0(void *, s32, s32, M2C_UNK, M2C_UNK);
s32 method_getTotalBlock();
extern M2C_UNK lbl_803489C0;
extern s32 lbl_80350ED8;
extern M2C_UNK lbl_803474C0;
extern s32 lbl_80350EDC;
extern s32 lbl_80350EE0;
extern s32 lbl_80350EE8;

s32 fn_80142468(void *arg0, s32 arg1, M2C_UNK arg_sp0);
s32 fn_80143B88(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0);
s32 fn_80143F78(s32 arg0, s32 arg3, M2C_UNK arg_sp0);
void fn_801441B8(void);
void fn_801442A8(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_80144314(s32 arg0, s32 arg1, s32 arg2);

s32 fn_80142468(void *arg0, s32 arg1, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

s32 fn_80143B88(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0) {
    s32 sp38;
    s32 sp34;
    void *sp30;
    s32 sp2C;
    void *spC;
    s32 sp8;
    s32 temp_r25;
    s32 temp_r25_2;
    s32 temp_r26;
    s32 temp_r26_2;
    s32 temp_r31;
    s32 temp_r31_2;
    s32 temp_r3;
    s32 temp_r4;
    s32 var_r0;
    s32 var_r3;
    s32 var_r5;
    s32 var_r6;
    s32 var_r6_2;
    s32 var_r6_3;
    s32 var_r6_4;
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r0_4;
    u32 temp_r0_5;
    u32 temp_r3_4;
    u32 temp_r3_5;
    u32 temp_r4_2;
    u32 temp_r4_3;
    u32 temp_r4_4;
    u32 temp_r4_5;
    u32 temp_r4_6;
    u32 temp_r4_7;
    u32 temp_r4_8;
    u32 temp_r4_9;
    u32 temp_r6;
    u32 temp_r6_2;
    u32 temp_r7;
    u32 temp_r7_2;
    u32 temp_r7_3;
    u32 temp_r7_4;
    void *temp_r3_2;
    void *temp_r3_3;

    lbl_80350ED8 = lbl_80350EEC;
    temp_r4 = M2C_FIELD(arg0, s32 *, 8);
    temp_r3 = temp_r4 * method_getTotalBlock();
    sp2C = 7;
    sp30 = arg0;
    sp34 = arg1;
    sp38 = temp_r3;
    OSDisableInterrupts((long)(temp_r3), (unsigned long)(temp_r4), (long)(0));
    temp_r25 = lbl_80350EF0;
    temp_r31 = lbl_80350EF4;
    temp_r26 = *(&lbl_803477C0 + (lbl_80350EF0 * 0x24));
    OSRestoreInterrupts(&lbl_803477C0);
    if ((temp_r31 != 2) && ((s32) lbl_80350EEC == temp_r25) && ((temp_r31 != 0) || ((s32) lbl_80350EEC != temp_r25) || (temp_r26 != 0))) {
        var_r0 = -0x109;
    } else {
        temp_r7 = lbl_80350EEC + 1;
        temp_r7_2 = temp_r7 >> 0x1FU;
        temp_r6 = (temp_r7 << 0x19) - temp_r7_2;
        temp_r3_2 = &lbl_803477C0 + (lbl_80350EEC * 0x24);
        lbl_80350EEC = ((temp_r6 << 7) | (temp_r6 >> 0x19U)) + temp_r7_2;
        memcpy((void *)(temp_r3_2), (const void *)(&sp2C), (unsigned long)(0x24));
        if (temp_r31 == 2) {
            lbl_80350EF4 = 0;
        }
        var_r0 = 0;
    }
    var_r3 = var_r0;
    if (var_r0 < 0) {
        if ((s32) lbl_80350ED8 >= 0) {
            var_r6 = lbl_80350ED8;
loop_13:
            if (var_r6 != (s32) lbl_80350EEC) {
                temp_r4_2 = var_r6 + 1;
                temp_r4_3 = temp_r4_2 >> 0x1FU;
                temp_r0 = (temp_r4_2 << 0x19) - temp_r4_3;
                *(&lbl_803477C0 + (var_r6 * 0x24)) = 0;
                var_r6 = ((temp_r0 << 7) | (temp_r0 >> 0x19U)) + temp_r4_3;
                goto loop_13;
            }
            lbl_80350EEC = lbl_80350ED8;
            return var_r3;
        }
        /* Duplicate return node #50. Try simplifying control flow for better match */
        return var_r3;
    }
    var_r3 = fn_80141BF0(arg0, arg2, arg3, 1, 1);
    if (var_r3 < 0) {
        if ((s32) lbl_80350ED8 >= 0) {
            var_r6_2 = lbl_80350ED8;
loop_19:
            if (var_r6_2 != (s32) lbl_80350EEC) {
                temp_r4_4 = var_r6_2 + 1;
                temp_r4_5 = temp_r4_4 >> 0x1FU;
                temp_r0_2 = (temp_r4_4 << 0x19) - temp_r4_5;
                *(&lbl_803477C0 + (var_r6_2 * 0x24)) = 0;
                var_r6_2 = ((temp_r0_2 << 7) | (temp_r0_2 >> 0x19U)) + temp_r4_5;
                goto loop_19;
            }
            lbl_80350EEC = lbl_80350ED8;
            return var_r3;
        }
        /* Duplicate return node #50. Try simplifying control flow for better match */
        return var_r3;
    }
    var_r3 = fn_80142468((void *)(arg0), (long)(1), (long)(0));
    if (var_r3 < 0) {
        if ((s32) lbl_80350ED8 >= 0) {
            var_r6_3 = lbl_80350ED8;
loop_25:
            if (var_r6_3 != (s32) lbl_80350EEC) {
                temp_r4_6 = var_r6_3 + 1;
                temp_r4_7 = temp_r4_6 >> 0x1FU;
                temp_r0_3 = (temp_r4_6 << 0x19) - temp_r4_7;
                *(&lbl_803477C0 + (var_r6_3 * 0x24)) = 0;
                var_r6_3 = ((temp_r0_3 << 7) | (temp_r0_3 >> 0x19U)) + temp_r4_7;
                goto loop_25;
            }
            lbl_80350EEC = lbl_80350ED8;
            return var_r3;
        }
        /* Duplicate return node #50. Try simplifying control flow for better match */
        return var_r3;
    }
    spC = arg0;
    sp8 = 8;
    OSDisableInterrupts((long)(0), (unsigned long)(0), (long)(0));
    temp_r26_2 = lbl_80350EF0;
    temp_r31_2 = lbl_80350EF4;
    temp_r25_2 = *(&lbl_803477C0 + (lbl_80350EF0 * 0x24));
    OSRestoreInterrupts(&lbl_803477C0);
    if ((temp_r31_2 != 2) && ((s32) lbl_80350EEC == temp_r26_2) && ((temp_r31_2 != 0) || ((s32) lbl_80350EEC != temp_r26_2) || (temp_r25_2 != 0))) {
        var_r3 = -0x109;
    } else {
        temp_r7_3 = lbl_80350EEC + 1;
        temp_r7_4 = temp_r7_3 >> 0x1FU;
        temp_r6_2 = (temp_r7_3 << 0x19) - temp_r7_4;
        temp_r3_3 = &lbl_803477C0 + (lbl_80350EEC * 0x24);
        lbl_80350EEC = ((temp_r6_2 << 7) | (temp_r6_2 >> 0x19U)) + temp_r7_4;
        memcpy((void *)(temp_r3_3), (const void *)(&sp8), (unsigned long)(0x24));
        if (temp_r31_2 == 2) {
            lbl_80350EF4 = 0;
        }
        var_r3 = 0;
    }
    if (var_r3 < 0) {
        if ((s32) lbl_80350ED8 >= 0) {
            var_r6_4 = lbl_80350ED8;
loop_40:
            if (var_r6_4 != (s32) lbl_80350EEC) {
                temp_r4_8 = var_r6_4 + 1;
                temp_r4_9 = temp_r4_8 >> 0x1FU;
                temp_r0_4 = (temp_r4_8 << 0x19) - temp_r4_9;
                *(&lbl_803477C0 + (var_r6_4 * 0x24)) = 0;
                var_r6_4 = ((temp_r0_4 << 7) | (temp_r0_4 >> 0x19U)) + temp_r4_9;
                goto loop_40;
            }
            lbl_80350EEC = lbl_80350ED8;
            return var_r3;
        }
        /* Duplicate return node #50. Try simplifying control flow for better match */
        return var_r3;
    }
    M2C_FIELD(&lbl_803489C0, s32 *, 0) = 6;
    M2C_FIELD(&lbl_803489C0, void **, 4) = arg0;
    M2C_FIELD(&lbl_803489C0, s32 *, 8) = arg4;
    M2C_FIELD(&lbl_803489C0, s32 *, 0xC) = 0;
    if (0 < 0) {
        if ((s32) lbl_80350ED8 >= 0) {
            var_r5 = lbl_80350ED8;
loop_46:
            if (var_r5 != (s32) lbl_80350EEC) {
                temp_r3_4 = var_r5 + 1;
                temp_r3_5 = temp_r3_4 >> 0x1FU;
                temp_r0_5 = (temp_r3_4 << 0x19) - temp_r3_5;
                *(&lbl_803477C0 + (var_r5 * 0x24)) = 0;
                var_r5 = ((temp_r0_5 << 7) | (temp_r0_5 >> 0x19U)) + temp_r3_5;
                goto loop_46;
            }
            lbl_80350EEC = lbl_80350ED8;
        }
        return 0;
    }
    var_r3 = 0;
    lbl_80350ED8 = -1;
    return var_r3;
}

s32 fn_80143F78(s32 arg0, s32 arg3, M2C_UNK arg_sp0) {
    s32 spC;
    s32 sp8;
    s32 temp_r27;
    s32 temp_r28;
    s32 temp_r31;
    s32 var_r3;
    s32 var_r5;
    s32 var_r6;
    s32 var_r6_2;
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r3_2;
    u32 temp_r3_3;
    u32 temp_r4;
    u32 temp_r4_2;
    u32 temp_r4_3;
    u32 temp_r4_4;
    u32 temp_r6;
    u32 temp_r7;
    u32 temp_r7_2;
    void *temp_r3;

    lbl_80350ED8 = lbl_80350EEC;
    var_r3 = fn_80141BF0((void *)(0), (long)(1), (long)(0), (long)(0), (long)(0));
    if (var_r3 < 0) {
        if ((s32) lbl_80350ED8 >= 0) {
            var_r6 = lbl_80350ED8;
loop_4:
            if (var_r6 != (s32) lbl_80350EEC) {
                temp_r4 = var_r6 + 1;
                temp_r4_2 = temp_r4 >> 0x1FU;
                temp_r0 = (temp_r4 << 0x19) - temp_r4_2;
                *(&lbl_803477C0 + (var_r6 * 0x24)) = 0;
                var_r6 = ((temp_r0 << 7) | (temp_r0 >> 0x19U)) + temp_r4_2;
                goto loop_4;
            }
            lbl_80350EEC = lbl_80350ED8;
            return var_r3;
        }
        /* Duplicate return node #29. Try simplifying control flow for better match */
        return var_r3;
    }
    spC = arg0;
    sp8 = 8;
    OSDisableInterrupts((long)(0), (unsigned long)(0), (long)(0));
    temp_r27 = lbl_80350EF0;
    temp_r31 = lbl_80350EF4;
    temp_r28 = *(&lbl_803477C0 + (lbl_80350EF0 * 0x24));
    OSRestoreInterrupts(&lbl_803477C0);
    if ((temp_r31 != 2) && ((s32) lbl_80350EEC == temp_r27) && ((temp_r31 != 0) || ((s32) lbl_80350EEC != temp_r27) || (temp_r28 != 0))) {
        var_r3 = -0x109;
    } else {
        temp_r7 = lbl_80350EEC + 1;
        temp_r7_2 = temp_r7 >> 0x1FU;
        temp_r6 = (temp_r7 << 0x19) - temp_r7_2;
        temp_r3 = &lbl_803477C0 + (lbl_80350EEC * 0x24);
        lbl_80350EEC = ((temp_r6 << 7) | (temp_r6 >> 0x19U)) + temp_r7_2;
        memcpy((void *)(temp_r3), (const void *)(&sp8), (unsigned long)(0x24));
        if (temp_r31 == 2) {
            lbl_80350EF4 = 0;
        }
        var_r3 = 0;
    }
    if (var_r3 < 0) {
        if ((s32) lbl_80350ED8 >= 0) {
            var_r6_2 = lbl_80350ED8;
loop_19:
            if (var_r6_2 != (s32) lbl_80350EEC) {
                temp_r4_3 = var_r6_2 + 1;
                temp_r4_4 = temp_r4_3 >> 0x1FU;
                temp_r0_2 = (temp_r4_3 << 0x19) - temp_r4_4;
                *(&lbl_803477C0 + (var_r6_2 * 0x24)) = 0;
                var_r6_2 = ((temp_r0_2 << 7) | (temp_r0_2 >> 0x19U)) + temp_r4_4;
                goto loop_19;
            }
            lbl_80350EEC = lbl_80350ED8;
            return var_r3;
        }
        /* Duplicate return node #29. Try simplifying control flow for better match */
        return var_r3;
    }
    M2C_FIELD(&lbl_803489C0, s32 *, 0) = 7;
    M2C_FIELD(&lbl_803489C0, s32 *, 4) = arg0;
    M2C_FIELD(&lbl_803489C0, s32 *, 8) = arg3;
    M2C_FIELD(&lbl_803489C0, s32 *, 0xC) = 0;
    if (0 < 0) {
        if ((s32) lbl_80350ED8 >= 0) {
            var_r5 = lbl_80350ED8;
loop_25:
            if (var_r5 != (s32) lbl_80350EEC) {
                temp_r3_2 = var_r5 + 1;
                temp_r3_3 = temp_r3_2 >> 0x1FU;
                temp_r0_3 = (temp_r3_2 << 0x19) - temp_r3_3;
                *(&lbl_803477C0 + (var_r5 * 0x24)) = 0;
                var_r5 = ((temp_r0_3 << 7) | (temp_r0_3 >> 0x19U)) + temp_r3_3;
                goto loop_25;
            }
            lbl_80350EEC = lbl_80350ED8;
        }
        return 0;
    }
    var_r3 = 0;
    lbl_80350ED8 = -1;
    return var_r3;
}

void fn_801441B8(void) {
    s32 var_ctr;
    M2C_UNK *var_r5;

    lbl_80350EE0 = 0;
    lbl_80350EDC = 0;
    memset(&lbl_803474C0, 0, 0x300);
    lbl_80350EF0 = 0;
    lbl_80350EEC = 0;
    lbl_80350EF4 = 2;
    var_ctr = 4;
    var_r5 = &lbl_803477C0;
    do {
        M2C_FIELD(var_r5, s32 *, 0) = 0;
        M2C_FIELD(var_r5, s32 *, 0x24) = 0;
        M2C_FIELD(var_r5, s32 *, 0x48) = 0;
        M2C_FIELD(var_r5, s32 *, 0x6C) = 0;
        M2C_FIELD(var_r5, s32 *, 0x90) = 0;
        M2C_FIELD(var_r5, s32 *, 0xB4) = 0;
        M2C_FIELD(var_r5, s32 *, 0xD8) = 0;
        M2C_FIELD(var_r5, s32 *, 0xFC) = 0;
        M2C_FIELD(var_r5, s32 *, 0x120) = 0;
        M2C_FIELD(var_r5, s32 *, 0x144) = 0;
        M2C_FIELD(var_r5, s32 *, 0x168) = 0;
        M2C_FIELD(var_r5, s32 *, 0x18C) = 0;
        M2C_FIELD(var_r5, s32 *, 0x1B0) = 0;
        M2C_FIELD(var_r5, s32 *, 0x1D4) = 0;
        M2C_FIELD(var_r5, s32 *, 0x1F8) = 0;
        M2C_FIELD(var_r5, s32 *, 0x21C) = 0;
        M2C_FIELD(var_r5, s32 *, 0x240) = 0;
        M2C_FIELD(var_r5, s32 *, 0x264) = 0;
        M2C_FIELD(var_r5, s32 *, 0x288) = 0;
        M2C_FIELD(var_r5, s32 *, 0x2AC) = 0;
        M2C_FIELD(var_r5, s32 *, 0x2D0) = 0;
        M2C_FIELD(var_r5, s32 *, 0x2F4) = 0;
        M2C_FIELD(var_r5, s32 *, 0x318) = 0;
        M2C_FIELD(var_r5, s32 *, 0x33C) = 0;
        M2C_FIELD(var_r5, s32 *, 0x360) = 0;
        M2C_FIELD(var_r5, s32 *, 0x384) = 0;
        M2C_FIELD(var_r5, s32 *, 0x3A8) = 0;
        M2C_FIELD(var_r5, s32 *, 0x3CC) = 0;
        M2C_FIELD(var_r5, s32 *, 0x3F0) = 0;
        M2C_FIELD(var_r5, s32 *, 0x414) = 0;
        M2C_FIELD(var_r5, s32 *, 0x438) = 0;
        M2C_FIELD(var_r5, s32 *, 0x45C) = 0;
        var_r5 += 0x480;
        var_ctr -= 1;
    } while (var_ctr != 0);
    lbl_80350EE8 = 0;
}

void fn_801442A8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    memset((void *)(0), (int)(0x49C), (unsigned long)(0));
    M2C_FIELD(arg0, s32 *, 0x20) = -1;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 0) = arg3;
}

s32 fn_80144314(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r9;
    s32 var_r8;
    u32 temp_r0;
    u32 temp_r6;
    u32 temp_r6_2;
    void *temp_r7;

    if (((s32) lbl_80350EE0 == (s32) lbl_80350EDC) && ((s32) *(&lbl_803474C0 + (lbl_80350EE0 * 0x18)) != 0)) {
        var_r8 = -0x109;
    } else {
        temp_r9 = lbl_80350EDC * 0x18;
        temp_r6 = lbl_80350EDC + 1;
        *(&lbl_803474C0 + temp_r9) = 5;
        temp_r7 = &lbl_803474C0 + temp_r9;
        temp_r6_2 = temp_r6 >> 0x1FU;
        var_r8 = 0;
        M2C_FIELD(temp_r7, s32 *, 4) = arg0;
        temp_r0 = (temp_r6 << 0x1B) - temp_r6_2;
        M2C_FIELD(temp_r7, s32 *, 8) = arg1;
        M2C_FIELD(temp_r7, s32 *, 0x14) = arg2;
        lbl_80350EDC = ((temp_r0 << 5) | (temp_r0 >> 0x1BU)) + temp_r6_2;
    }
    return var_r8;
}
