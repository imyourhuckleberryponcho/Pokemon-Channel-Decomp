/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

u16 fn_800C0C80(u16 *, s32);
s32 fn_800C0FEC(u16 *, s32);
s32 fn_800C1048(u16 *, u16);
u16 fn_800C10A0(M2C_UNK, u16, s32, M2C_UNK, u16, u16);
M2C_UNK fn_800C194C(u8 *);
M2C_UNK fn_800C1AD4(u8 *);
M2C_UNK fn_800C1C84(u8 *, M2C_UNK, M2C_UNK);
M2C_UNK fn_800C1D74();
s32 fn_800C1E70(u8 *);
extern M2C_UNK lbl_802CFCA8;
extern u8 lbl_8034FF18;
M2C_UNK fn_800BEAE0(void *, u16, u16 *);
u16 fn_800BF498(void *);
u16 fn_800BF4B4(void *);

u16 fn_800BCC1C(void *arg0, u8 *arg1);
u16 fn_800BD304(void *arg0, s32 arg1);
u16 fn_800BD360(void *arg0);
u16 fn_800BD42C(void *arg0, s32 arg1, u16 arg2);
u16 fn_800BD6B4(void *arg0, u16 arg1, u16 *arg2);
u16 fn_800BD918(void *arg0, u16 arg1, u16 arg2, u16 *arg3);
u16 fn_800BDD44(void *arg0, u16 arg1, u16 *arg2, u16 *arg3);
void fn_800BE254(void *arg0, u16 arg1);
u16 fn_800BE35C(void *arg0, u16 arg1, u8 arg2);
u16 fn_800BE7C4(void *arg0, u16 arg1, u16 arg2);

u16 fn_800BCC1C(void *arg0, u8 *arg1) { return 0; } /* draft: stub */

u16 fn_800BD304(void *arg0, s32 arg1) {
    s32 temp_r0;
    s8 var_r30;
    u32 temp_r31;

    temp_r31 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x1C);
    temp_r31 *= M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0xF6);
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x28) % temp_r31;
    var_r30 = (u16) ((u32) (arg1 + temp_r0) / temp_r31);
    if (((arg1 + temp_r0) % temp_r31) != 0) {
        var_r30 += 1;
    }
    return var_r30;
}

u16 fn_800BD360(void *arg0) {
    s32 var_r28;
    s32 var_r29;
    u16 temp_r3;

    if ((u16) M2C_FIELD(arg0, u16 *, 0xF0) == 1) {
        return 0U;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 0xB8) == 1) {
        var_r28 = M2C_FIELD(arg0, s32 *, 0x58);
        var_r29 = M2C_FIELD(arg0, s32 *, 0x5C);
    } else {
        var_r28 = M2C_FIELD(arg0, s32 *, 0x5C);
        var_r29 = M2C_FIELD(arg0, s32 *, 0x58);
    }
    temp_r3 = fn_800C10A0(M2C_FIELD(arg0, s32 *, 0xE8), M2C_FIELD(arg0, u16 *, 0x2E), var_r29, 0, M2C_FIELD(arg0, u16 *, 4), M2C_FIELD(arg0, u16 *, 0));
    if (temp_r3 != 0) {
        return fn_800C10A0(M2C_FIELD(arg0, s32 *, 0xE8), M2C_FIELD(arg0, u16 *, 0x2E), var_r28, 0, M2C_FIELD(arg0, u16 *, 4), M2C_FIELD(arg0, u16 *, 0));
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 0xB8) == 1) {
        M2C_FIELD(arg0, u16 *, 0xB8) = 2U;
    } else {
        M2C_FIELD(arg0, u16 *, 0xB8) = 1U;
    }
    return temp_r3;
}

u16 fn_800BD42C(void *arg0, s32 arg1, u16 arg2) {
    u32 temp_r27;
    s32 var_r24;
    u16 temp_r3;
    s16 temp_r3_2;
    u16 temp_r3_3;
    u16 var_r28;
    s32 var_r30;
    u32 var_r26;
    u32 var_r25;
    u32 var_r25_2;
    void *temp_r21;

    var_r28 = 0;
    temp_r27 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x1E) * M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x1C);
    temp_r21 = M2C_FIELD(arg0, void **, 4);
    if (arg0 == NULL) {
        return 0xA00CU;
    }
    if ((u16) M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 6) == 1) {
        return 0xA003U;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 0) == -1U) {
        return 0xA008U;
    }
    switch ((s32) arg2) {                           /* irregular */
    case 1:
        var_r24 = arg1;
block_17:
        if (var_r24 < 0) {
            return 0xA00CU;
        }
        if ((u32) var_r24 > (u32) M2C_FIELD(arg0, u32 *, 0x24)) {
            return 0xA00CU;
        }
        if ((arg2 == 2) && ((u32) var_r24 > (u32) M2C_FIELD(arg0, u32 *, 0x28))) {
            var_r30 = M2C_FIELD(arg0, u16 *, 0x2E);
            var_r26 = (u32) (arg1 + (M2C_FIELD(arg0, u32 *, 0x28) % temp_r27)) / temp_r27;
        } else if ((arg2 == 4) && ((u32) var_r24 > (u32) M2C_FIELD(arg0, u32 *, 0x28))) {
            var_r30 = M2C_FIELD(arg0, u16 *, 0x2E);
            var_r26 = ((u32) var_r24 / temp_r27) - ((u32) M2C_FIELD(arg0, u32 *, 0x28) / temp_r27);
        } else {
            var_r30 = M2C_FIELD(arg0, u16 *, 0x22);
            var_r26 = (u32) var_r24 / temp_r27;
        }
        var_r25 = 0U;
loop_34:
        if (var_r25 < var_r26) {
            temp_r3 = fn_800C0C80(M2C_FIELD(arg0, void **, 4), var_r30);
            var_r30 = temp_r3;
            if ((temp_r3 == -9U) || (var_r30 == -3U) || (var_r30 == -2U)) {
                var_r30 = 1;
                var_r28 = 0xA029;
            } else {
                var_r25 += 1;
                goto loop_34;
            }
        }
        if ((var_r30 == 1) && ((u16) M2C_FIELD(temp_r21, u16 *, 0xF0) == 2)) {
            temp_r3_2 = fn_800BD360(M2C_FIELD(arg0, void **, 4));
            var_r28 = temp_r3_2;
            if (temp_r3_2 != 0) {
                return var_r28;
            }
            var_r30 = M2C_FIELD(arg0, u16 *, 0x22);
            var_r25_2 = 0U;
loop_45:
            if (var_r25_2 < (u32) ((u32) var_r24 / temp_r27)) {
                temp_r3_3 = fn_800C0C80(M2C_FIELD(arg0, void **, 4), var_r30);
                var_r30 = temp_r3_3;
                if ((temp_r3_3 == -9U) || (var_r30 == -3U) || (var_r30 == -2U)) {
                    var_r30 = 1;
                    var_r28 = 0xA029;
                } else {
                    var_r25_2 += 1;
                    goto loop_45;
                }
            }
            goto block_46;
        }
block_46:
        M2C_FIELD(arg0, u32 *, 0x28) = (u32) var_r24;
        M2C_FIELD(arg0, u16 *, 0x2E) = var_r30;
        return var_r28;
    case 2:
        var_r24 = M2C_FIELD(arg0, u32 *, 0x28) + arg1;
        goto block_17;
    case 4:
        var_r24 = M2C_FIELD(arg0, u32 *, 0x24) + arg1;
        goto block_17;
    case 3:
        /* fallthrough */
    default:
        return 0xA00CU;
    }
}

u16 fn_800BD6B4(void *arg0, u16 arg1, u16 *arg2) { return 0; } /* draft: stub */

u16 fn_800BD918(void *arg0, u16 arg1, u16 arg2, u16 *arg3) { return 0; } /* draft: stub */

u16 fn_800BDD44(void *arg0, u16 arg1, u16 *arg2, u16 *arg3) { return 0; } /* draft: stub */

void fn_800BE254(void *arg0, u16 arg1) { } /* draft: stub */

u16 fn_800BE35C(void *arg0, u16 arg1, u8 arg2) { return 0; } /* draft: stub */

u16 fn_800BE7C4(void *arg0, u16 arg1, u16 arg2) {
    s32 temp_r3_2;
    u16 temp_r0;
    u16 temp_r3;
    u16 var_r19;
    u16 var_r20;
    u16 var_r22;
    u16 var_r24;
    u16 var_r25;
    u16 var_r26;
    u16 var_r27;
    u16 var_r29;
    u32 var_r28;
    u8 var_r23;

    var_r19 = 0;
    var_r22 = 0;
    if ((u16) M2C_FIELD(arg0, u16 *, 0x3C) == 1) {
        var_r23 = (u8) (arg1 >> 8U);
    } else {
        var_r23 = (u8) ((u32) (arg1 * 3) >> 0xAU);
        if ((u32) (((u32) (arg1 * 3) >> 1U) & 0x1FF) == 0x1FF) {
            var_r19 = 1;
        }
    }
    if (var_r23 > 0xFFU) {
        return 0xA02DU;
    }
    var_r29 = (u16) var_r23;
    if (var_r19 == 0) {
        var_r20 = 2;
    } else {
        var_r20 = 4;
    }
    var_r27 = 0;
loop_35:
    if (var_r27 < var_r20) {
        if ((var_r27 == 0) || (var_r27 == 2)) {
            var_r28 = M2C_FIELD(arg0, u32 *, 0x58);
        } else {
            var_r28 = M2C_FIELD(arg0, u32 *, 0x5C);
        }
        if (0 /* draft: did not compile */) {
            temp_r0 = var_r28 % M2C_FIELD(arg0, u16 *, 0x1E);
            if (var_r29 < (u32) (M2C_FIELD(arg0, u16 *, 0x1E) - temp_r0)) {
                var_r24 = 0;
                var_r25 = (M2C_FIELD(arg0, u16 *, 0x1E) - temp_r0) - 1;
                if (var_r25 >= (u16) M2C_FIELD(arg0, u16 *, 0x2E)) {
                    var_r25 = M2C_FIELD(arg0, u16 *, 0x2E) - 1;
                }
            } else if ((u32) ((u32) (var_r28 + var_r29) / (u16) M2C_FIELD(arg0, u16 *, 0x1E)) == (u32) ((u32) (var_r28 + M2C_FIELD(arg0, u16 *, 0x2E)) / (u16) M2C_FIELD(arg0, u16 *, 0x1E))) {
                var_r24 = (M2C_FIELD(arg0, u16 *, 0x1E) * ((u32) (var_r28 + var_r29) / (u16) M2C_FIELD(arg0, u16 *, 0x1E))) - var_r28;
                var_r25 = M2C_FIELD(arg0, u16 *, 0x2E) - 1;
            } else {
                var_r24 = (M2C_FIELD(arg0, u16 *, 0x1E) * ((u32) (var_r28 + var_r29) / (u16) M2C_FIELD(arg0, u16 *, 0x1E))) - var_r28;
                var_r25 = var_r24 + (M2C_FIELD(arg0, u16 *, 0x1E) - 1);
            }
            var_r26 = var_r24;
loop_25:
            if (var_r26 <= var_r25) {
                if (0 /* draft: did not compile */) {
                    var_r26 = 0xFFFF;
                } else {
                    var_r26 = var_r26 + 1;
                    goto loop_25;
                }
            }
            if (var_r26 != -1U) {
                var_r22 = var_r22 + 1;
            }
            if ((arg2 == 1) && ((var_r27 == 1) || (var_r27 == 3))) {
                temp_r3_2 = ((s32) var_r29 / 8) + 0xC2;
                /* draft: did not compile: *(arg0 + temp_r3_2) = *(arg0 + temp_r3_2) | (u8) (0x80 >> (var_r29 % 8)); */
            }
        }
        var_r29 = var_r27 != 1 ? var_r29 : var_r29 + 1;
        var_r27 = var_r27 + 1;
        goto loop_35;
    }
    if (arg2 == 0) {
        if ((s32) (M2C_FIELD(arg0, u16 *, 0xE2) + var_r22) > (s32) M2C_FIELD(arg0, u16 *, 0xE4)) {
            temp_r3 = fn_800BF4B4(arg0);
            if (temp_r3 != 0) {
                return temp_r3;
            }
        }
        goto block_41;
    }
    M2C_FIELD(arg0, u16 *, 0xE2) = (u16) (M2C_FIELD(arg0, u16 *, 0xE2) + var_r22);
block_41:
    return 0U;
}
