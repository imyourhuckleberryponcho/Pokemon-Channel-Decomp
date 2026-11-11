/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

u16 fn_800BDD44(void *, u16, u16 *, u16 *);
extern M2C_UNK lbl_802CFCA8;
u16 fn_800BE35C(void *, u16, M2C_UNK);
u16 fn_800C0C80(void *, u16);
M2C_UNK fn_800C1C84();
u16 fn_800C11F4(s32, s32, s32, M2C_UNK, u16, M2C_UNK, u16);
M2C_UNK fn_800C1FC4(s32);
s32 fn_800C1048(void *, u16);
u16 fn_800C10A0(M2C_UNK, M2C_UNK, s32, M2C_UNK, u16, u16);
M2C_UNK fn_800C1D74();
u16 fn_800C0FEC(void *, u16);
u16 fn_800C173C(M2C_UNK *, void *);
u16 fn_800C15BC(M2C_UNK *, M2C_UNK *, u16 *, u16);
M2C_UNK fn_800C1D34();
u32 fn_800C1E70();
u16 fn_800C1EB8(s32, s32, u32);
u16 fn_800BD6B4(void *, s32, u16 *);
u16 fn_800C0DB4(void *, u16, u16);
u16 fn_800C3430(u16 *);

u16 fn_800BEAE0(void *arg0, u16 arg1, u16 *arg2);
u16 fn_800BEDE4(u16 arg0, void *arg1);
u16 fn_800BEEE4(void *arg0);
u16 fn_800BF078(void *arg0, u16 arg1);
u16 fn_800BF1F8(void *arg0, s32 arg1, u16 arg2);
u16 fn_800BF308(void *arg0, u16 arg1, u16 arg2);
s32 fn_800BF498(void *arg0);
void fn_800BF4B4(s32 arg0);
u16 fn_800BF4DC(void *arg0, void *arg1, s32 arg2, u16 arg3, s32 *arg4, u16 *arg5, u16 *arg6);
u16 fn_800BF8FC(void *arg0, void **arg1, u16 arg2, s32 *arg3, s16 *arg4, s16 *arg5, s16 *arg6, s32 arg7, u16 arg_sp8);
s32 fn_800BFD28(u16 *arg0, s32 arg1, u16 arg2, u16 *arg3);
u16 fn_800BFE78(void *arg0, u32 arg1, u32 *arg2, u16 *arg3);
s32 fn_800C01F8(void *arg0, u32 arg1, u32 *arg2, s16 *arg3);
u16 fn_800C0354(void *arg0, s32 arg1, u32 arg2, u16 arg3);
s32 fn_800C05CC(void *arg0, u32 arg1);
s32 fn_800C0738(void *arg0, s32 arg1);

u16 fn_800BEAE0(void *arg0, u16 arg1, u16 *arg2) { return 0; } /* draft: stub */

u16 fn_800BEDE4(u16 arg0, void *arg1) {
    void *sp10;
    u16 temp_r3;
    u16 temp_r3_2;
    u16 var_r28;
    u16 var_r29;

    sp10 = &lbl_802CFCA8 + (M2C_FIELD(arg1, u16 *, 0) * 0x25E48);
    if ((arg0 < 2U) || (arg0 >= (u16) M2C_FIELD(arg1, u16 *, 0xBC))) {
        return 0xA00CU;
    }
    var_r29 = arg0;
    var_r28 = 0;
loop_11:
    if (var_r28 >= -1U) {
        goto block_12;
    }
    temp_r3_2 = fn_800C0C80(arg1, var_r29);
    if ((temp_r3_2 < -9U) || (temp_r3_2 >= -1U)) {
        temp_r3 = fn_800BE35C(arg1, var_r29, 0);
        if (temp_r3 != 0) {
            return temp_r3;
        }
        if (temp_r3_2 == -1U) {
            return fn_800BEEE4(arg1);
        }
        var_r29 = temp_r3_2;
        var_r28 = var_r28 + 1;
        goto loop_11;
    }
block_12:
    return 0xA029U;
}

u16 fn_800BEEE4(void *arg0) { return 0; } /* draft: stub */

u16 fn_800BF078(void *arg0, u16 arg1) {
    u16 spC;
    s32 var_r26;
    s32 var_r28;
    u16 temp_r22;
    u16 temp_r27;
    u16 temp_r3;
    u16 var_r30;
    u16 var_r30_2;
    u16 var_r31;

    spC = arg1;
    var_r31 = 0;
    temp_r22 = M2C_FIELD(arg0, u16 *, 0x1E);
    temp_r27 = M2C_FIELD(arg0, u16 *, 0x2E);
    if (spC == 1) {
        var_r28 = M2C_FIELD(arg0, s32 *, 0x58);
    } else {
        var_r28 = M2C_FIELD(arg0, s32 *, 0x5C);
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 0x3C) == 1) {

    }
loop_18:
    if (var_r31 >= temp_r27) {
        return 0U;
    }
    var_r30 = var_r31;
loop_9:
    if (var_r30 < temp_r27) {
        if (0 /* draft: did not compile */) {
            var_r30 += 1;
            goto loop_9;
        }
    }
    var_r31 = var_r30;
    if (var_r30 != temp_r27) {
        var_r26 = 0;
        var_r30_2 = var_r31;
loop_14:
        if (var_r30_2 < temp_r27) {
            if ((u32) ((u32) (var_r28 + var_r31) / temp_r22) == (u32) ((u32) (var_r28 + (var_r31 + var_r26)) / temp_r22)) {
                var_r30_2 += 1;
                var_r26 += 1;
                goto loop_14;
            }
        }
        temp_r3 = fn_800C11F4(M2C_FIELD(arg0, s32 *, 0xE8) + ((var_r31 << 9) & 0x01FFFE00), var_r26, var_r28 + var_r31, 0, M2C_FIELD(arg0, u16 *, 4), 0, M2C_FIELD(arg0, u16 *, 0));
        if (temp_r3 != 0) {
            return temp_r3;
        }
        var_r31 = var_r30_2;
        goto loop_18;
    }
    goto loop_18;
}

u16 fn_800BF1F8(void *arg0, s32 arg1, u16 arg2) { return 0; } /* draft: stub */

u16 fn_800BF308(void *arg0, u16 arg1, u16 arg2) {
    u16 temp_r23;
    u32 temp_r3;
    u16 temp_r3_2;
    u16 temp_r3_3;
    s8 var_r24;
    s8 var_r27;

    if ((arg1 < 2U) || (arg1 >= (u16) M2C_FIELD(arg0, u16 *, 0xBC))) {
        return 0xA00CU;
    }
    if ((arg2 < 2U) || (arg2 >= (u16) M2C_FIELD(arg0, u16 *, 0xBC))) {
        return 0xA00CU;
    }
    temp_r23 = (u16) ((u32) (M2C_FIELD(arg0, s32 *, 0x68) - M2C_FIELD(arg0, s32 *, 0x64)) / (u16) M2C_FIELD(arg0, u16 *, 0x1E));
    var_r27 = arg1;
    if (arg1 == arg2) {
        return fn_800BE35C(arg0, arg2, 0);
    }
    var_r24 = 0;
loop_19:
    if (var_r24 >= temp_r23) {
        return 0xA029U;
    }
    temp_r3_2 = fn_800C0C80(arg0, var_r27);
    temp_r3_3 = fn_800C0C80(arg0, temp_r3_2);
    if ((temp_r3_3 >= -9U) && (temp_r3_3 < -1U)) {
        return 0xA029U;
    }
    if (temp_r3_3 == -1U) {
        if (temp_r3_2 != arg2) {
            return 0xA00CU;
        }
        temp_r3 = fn_800BE35C(arg0, var_r27, 0xFFFF);
        if (temp_r3 != 0) {
            return temp_r3;
        }
        return fn_800BE35C(arg0, arg2, 0);
    }
    var_r27 = temp_r3_2;
    var_r24 = var_r24 + 1;
    goto loop_19;
}

s32 fn_800BF498(void *arg0) {
    if ((u16) M2C_FIELD(arg0, u16 *, 0xF0) == 1) {
        return 0;
    }
    return 1;
}

void fn_800BF4B4(s32 arg0) {
    s32 sp8;

    sp8 = arg0;
    fn_800C1FC4(arg0);
}

u16 fn_800BF4DC(void *arg0, void *arg1, s32 arg2, u16 arg3, s32 *arg4, u16 *arg5, u16 *arg6) { return 0; } /* draft: stub */

u16 fn_800BF8FC(void *arg0, void **arg1, u16 arg2, s32 *arg3, s16 *arg4, s16 *arg5, s16 *arg6, s32 arg7, u16 arg_sp8) {
    s8 sp33;
    M2C_UNK sp28;
    s16 *sp1C;
    s16 *sp18;
    s32 *sp14;
    void **spC;
    u16 temp_r23;
    u16 temp_r3;
    u16 temp_r3_2;
    u16 temp_r3_3;
    u16 var_r24;
    u16 var_r25;
    u16 var_r27;
    u16 var_r29;
    u16 var_r29_2;
    u16 var_r31;
    u16 var_r31_2;
    u32 var_r19;
    int var_r20;
    void *temp_r26;
    void *var_r28;

    spC = arg1;
    var_r25 = arg2;
    sp14 = arg3;
    sp18 = arg4;
    sp1C = arg5;
    var_r19 = 0U;
    var_r27 = 0;
    var_r20 = 0U;
    temp_r26 = &lbl_802CFCA8 + (M2C_FIELD(arg0, u16 *, 0) * 0x25E48);
    temp_r23 = M2C_FIELD(arg0, u16 *, 0xF6);
    var_r24 = (temp_r23 * 0x10) & 0xFFF0;
    if (arg_sp8 == 1) {
        var_r27 = M2C_FIELD(arg0, u16 *, 0x28);
        if (var_r24 > var_r27) {
            var_r24 = var_r27;
        }
    }
    var_r31 = 0;
    var_r29 = 0;
loop_16:
    if (var_r31 < 0xCU) {
        if (0 /* draft: did not compile */) {
loop_7:
            if (var_r29 < 0xBU) {
                *(&sp28 + var_r29) = 0x20;
                var_r29 += 1;
                goto loop_7;
            }
        } else {
            if (0 /* draft: did not compile */) {
loop_12:
                if (var_r29 < 8U) {
                    *(&sp28 + var_r29) = 0x20;
                    var_r29 += 1;
                    goto loop_12;
                }
                var_r29 -= 1;
            } else {
                /* draft: did not compile: *(&sp28 + var_r29) = *(arg7 + var_r31); */
            }
            var_r31 += 1;
            var_r29 += 1;
            goto loop_16;
        }
    }
    sp33 = 0;
    var_r29_2 = 0;
loop_53:
    if (var_r29_2 >= -1U) {
        return 0xA02AU;
    }
    temp_r3 = fn_800C10A0(0, temp_r23, var_r25, 0, (u8) M2C_FIELD(arg0, u16 *, 4), M2C_FIELD(arg0, u16 *, 0));
    if (temp_r3 != 0) {
        return temp_r3;
    }
    var_r31_2 = 0;
    /* draft: did not compile: var_r28 = temp_r26 + 0x20BA4; */
loop_36:
    if (var_r31_2 >= var_r24) {
        if (arg_sp8 == 1) {
            var_r25 += temp_r23;
            if (var_r27 > var_r24) {
                var_r27 -= var_r24;
                if (var_r27 < var_r24) {
                    var_r24 = var_r27;
                }
                goto block_50;
            }
            return 0xA02AU;
        }
        var_r20 += temp_r23;
        if (var_r20 < (u16) M2C_FIELD(arg0, u16 *, 0x1E)) {
            var_r25 += temp_r23;
            goto block_50;
        }
        var_r20 = 0U;
        temp_r3_2 = fn_800C0FEC(arg0, var_r25);
        if (temp_r3_2 == -1U) {
            return 0xA02AU;
        }
        temp_r3_3 = fn_800C0C80(arg0, temp_r3_2);
        if (temp_r3_3 >= -9U) {
            return 0xA02AU;
        }
        var_r25 = fn_800C1048(arg0, temp_r3_3);
        if ((u32) (var_r25 + 0x10000) == -1U) {
            return 0xA02AU;
        }
block_50:
        var_r19 += temp_r23 * 0x10;
        if (var_r19 >= 0x10000U) {
            return 0xA02AU;
        }
        var_r29_2 += 1;
        goto loop_53;
    }
    if ((u8) M2C_FIELD(var_r28, u8 *, 0) == 0) {
        if ((u32) M2C_FIELD(temp_r26, u32 *, 0x24BB0) == 0U) {
            M2C_FIELD(temp_r26, u32 *, 0x24BB0) = (u32) (var_r25 + ((u32) ((var_r31_2 << 5) & 0x1FFFE0) / (u16) M2C_FIELD(arg0, u16 *, 0x1C)));
            M2C_FIELD(temp_r26, s16 *, 0x24BB4) = (s16) (((var_r31_2 << 5) & 0x1FFFE0) % M2C_FIELD(arg0, u16 *, 0x1C));
        }
        return 0xA02AU;
    }
    if (((u32) M2C_FIELD(temp_r26, u32 *, 0x24BAC) != 0U) && ((u32) M2C_FIELD(temp_r26, u32 *, 0x24BB0) == 0U) && ((u8) M2C_FIELD(var_r28, u8 *, 0) == 0xE5)) {
        M2C_FIELD(temp_r26, u32 *, 0x24BB0) = (u32) (var_r25 + ((u32) ((var_r31_2 << 5) & 0x1FFFE0) / (u16) M2C_FIELD(arg0, u16 *, 0x1C)));
        M2C_FIELD(temp_r26, s16 *, 0x24BB4) = (s16) (((var_r31_2 << 5) & 0x1FFFE0) % M2C_FIELD(arg0, u16 *, 0x1C));
    }
    if (!(M2C_FIELD(var_r28, u8 *, 0xB) & 8) && (fn_800C173C(&sp28, var_r28) == 0)) {
        if (M2C_FIELD(var_r28, u8 *, 0xB) & 0x10) {
            *arg6 = (M2C_FIELD(var_r28, u8 *, 0x1A) & ~0xFF00) | ((M2C_FIELD(var_r28, u8 *, 0x1B) << 8) & 0xFF00);
        } else {
            *arg6 = 0xFFFF;
        }
        *spC = var_r28;
        *sp14 = var_r25 + ((u32) ((var_r31_2 << 5) & 0x1FFFE0) / (u16) M2C_FIELD(arg0, u16 *, 0x1C));
        *sp18 = ((var_r31_2 << 5) & 0x1FFFE0) % M2C_FIELD(arg0, u16 *, 0x1C);
        *sp1C = (u16) *sp14 - var_r25;
        return 0U;
    }
    var_r31_2 += 1;
    /* draft: did not compile: var_r28 += 0x20; */
    goto loop_36;
}

s32 fn_800BFD28(u16 *arg0, s32 arg1, u16 arg2, u16 *arg3) { return 0; } /* draft: stub */

u16 fn_800BFE78(void *arg0, u32 arg1, u32 *arg2, u16 *arg3) {
    u16 sp18;
    s32 temp_r3_3;
    u16 temp_r17;
    u16 temp_r28;
    u16 temp_r3;
    u16 temp_r3_2;
    u16 var_r21;
    u16 var_r24;
    u16 var_r27;
    u16 var_r29;
    u32 var_r22;
    u32 var_r30;
    u32 var_r30_2;
    void *temp_r26;

    var_r22 = 0U;
    var_r24 = 1;
    var_r27 = 0;
    temp_r26 = &lbl_802CFCA8 + (M2C_FIELD(arg0, u16 *, 0) * 0x25E48);
    if ((arg1 < (u32) M2C_FIELD(arg0, u32 *, 0x60)) || (arg1 >= (u32) M2C_FIELD(arg0, u32 *, 0x68))) {
        return 0xA00CU;
    }
    if ((u32) M2C_FIELD(temp_r26, u32 *, 0x24BAC) == arg1) {
        *arg2 = M2C_FIELD(temp_r26, u32 *, 0x24BB0);
        M2C_FIELD(temp_r26, u32 *, 0x24BAC) = 0U;
        M2C_FIELD(temp_r26, u32 *, 0x24BB0) = 0U;
        M2C_FIELD(temp_r26, u16 *, 0x24BB4) = 0U;
        *arg3 = M2C_FIELD(temp_r26, u16 *, 0x24BB4);
        return fn_800C10A0(0, 1U, *arg2, 0, (u8) M2C_FIELD(arg0, u16 *, 4), M2C_FIELD(arg0, u16 *, 0));
    }
    temp_r28 = M2C_FIELD(arg0, u16 *, 0xF6);
    var_r30 = arg1;
    *arg2 = 0U;
    *arg3 = 0;
    temp_r17 = M2C_FIELD(arg0, u16 *, 0xBC) - 2;
    var_r21 = 0;
loop_34:
    if (var_r21 >= temp_r17) {
        return 0xA029U;
    }
    if (var_r24 != 0) {
        temp_r3_2 = fn_800C10A0(0, temp_r28, var_r30, 0, (u8) M2C_FIELD(arg0, u16 *, 4), M2C_FIELD(arg0, u16 *, 0));
        if (temp_r3_2 != 0) {
            return temp_r3_2;
        }
    }
    /* draft: did not compile: temp_r3 = fn_800C01F8(arg0, var_r30, arg2, arg3); */
    if (temp_r3 == 0) {
        if ((u32) *arg2 != 0U) {
            return temp_r3;
        }
        var_r24 = 1;
        var_r27 += temp_r28;
        var_r22 += (temp_r28 * 0x10) & 0xFFFF0;
        if (var_r22 >= 0x10000U) {
            return 0xA012U;
        }
        if ((var_r30 >= (u32) M2C_FIELD(arg0, u32 *, 0x60)) && (var_r30 < (u32) M2C_FIELD(arg0, u32 *, 0x64))) {
            var_r30 += temp_r28;
            if (var_r30 >= (u32) M2C_FIELD(arg0, u32 *, 0x64)) {
                return 0xA012U;
            }
            goto block_33;
        }
        if (var_r27 < (u16) M2C_FIELD(arg0, u16 *, 0x1E)) {
            var_r30 += temp_r28;
            goto block_33;
        }
        var_r27 = 0;
        temp_r3_3 = fn_800C0FEC(arg0, var_r30);
        sp18 = fn_800C0C80(arg0, temp_r3_3);
        var_r30 = fn_800C1048(arg0, sp18);
        if ((u32) (var_r30 + 0x10000) == -1U) {
            if (fn_800BD6B4(arg0, temp_r3_3, &sp18) != 0) {
                return 0xA012U;
            }
            /* draft: did not compile: fn_800C1C84(temp_r26 + 0x20BA4, 0, 0x4000); */
            var_r30_2 = fn_800C1048(arg0, sp18);
loop_25:
            if ((s32) (M2C_FIELD(arg0, u16 *, 0x1E) - var_r27) >= (s32) temp_r28) {
                var_r29 = fn_800C11F4(0, temp_r28, var_r30_2, 0, (u8) M2C_FIELD(arg0, u16 *, 4), 0, M2C_FIELD(arg0, u16 *, 0));
            } else {
                var_r29 = fn_800C11F4(0, (M2C_FIELD(arg0, u16 *, 0x1E) - var_r27) % temp_r28, var_r30_2, 0, (u8) M2C_FIELD(arg0, u16 *, 4), 0, M2C_FIELD(arg0, u16 *, 0));
            }
            if (var_r29 != 0) {
                return var_r29;
            }
            var_r27 += temp_r28;
            if (var_r27 < (u16) M2C_FIELD(arg0, u16 *, 0x1E)) {
                var_r30_2 += temp_r28;
                goto loop_25;
            }
            var_r30 = fn_800C1048(arg0, sp18);
            var_r27 = 0;
            var_r24 = 0;
            goto block_33;
        }
block_33:
        var_r21 += 1;
        goto loop_34;
    }
    return temp_r3;
}

#pragma push
#pragma peephole off
s32 fn_800C01F8(void *arg0, u32 arg1, u32 *arg2, s16 *arg3) {
    s16 *sp14;
    s16 temp_r25;
    s32 var_r24;
    u32 var_r29;
    u32 temp_r26;
    u8 *var_r28;
    void *temp_r27;

    sp14 = arg3;
    temp_r27 = &lbl_802CFCA8 + (M2C_FIELD(arg0, s16 *, 0) * 0x25E48);
    if ((arg1 < (u32) M2C_FIELD(arg0, u32 *, 0x60)) || (arg1 >= (u32) M2C_FIELD(arg0, u32 *, 0x68))) {
        return 0xA00C;
    }
    temp_r25 = M2C_FIELD(arg0, s16 *, 0xF6);
    var_r24 = (temp_r25 * 0x10) & 0xFFF0;
    if ((arg1 >= (u32) M2C_FIELD(arg0, u32 *, 0x60)) && (arg1 < (u32) M2C_FIELD(arg0, u32 *, 0x64))) {
        temp_r26 = M2C_FIELD(arg0, u32 *, 0x64) - arg1;
        if (temp_r26 < temp_r25) {
            var_r24 = (temp_r26 * 0x10) & 0xFFF0;
        }
    }
    var_r29 = 0;
    /* draft: did not compile: var_r28 = temp_r27 + 0x20BA4; */
loop_14:
    if (var_r29 >= var_r24) {
        return 0;
    }
    if (((u8) *var_r28 == 0xE5) || ((u8) *var_r28 == 0)) {
        *arg2 = arg1 + ((u32) ((var_r29 << 5) & 0x1FFFE0) / (s16) M2C_FIELD(arg0, s16 *, 0x1C));
        *sp14 = ((var_r29 << 5) & 0x1FFFE0) % M2C_FIELD(arg0, s16 *, 0x1C);
        if ((u32) *arg2 != arg1) {
            /* draft: did not compile: fn_800C1D74(temp_r27 + 0x20BA4, temp_r27 + (((*arg2 - arg1) << 9) + 0x20BA4), 0x200); */
        }
        return 0;
    }
    var_r29 += 1;
    var_r28 += 0x20;
    goto loop_14;
}
#pragma pop

u16 fn_800C0354(void *arg0, s32 arg1, u32 arg2, u16 arg3) { return 0; } /* draft: stub */

#pragma push
#pragma optimize_for_size on
s32 fn_800C05CC(void *arg0, u32 arg1) {
    s8 sp16;
    s32 sp15;
    s32 sp14;
    s32 sp13;
    s32 sp12;
    u16 sp10;
    u8 temp_r30;
    u16 temp_r30_2;

    fn_800C1C84(&sp10, 0, 8);
    if (arg1 == 0U) {
        if (fn_800C3430(&sp10) != 0) {
            M2C_FIELD(arg0, s16 *, 0x16) = 0;
            M2C_FIELD(arg0, s16 *, 0x18) = 0;
            return 0xA041;
        }
        goto block_4;
    }
    fn_800C1D74(&sp10, arg1, 8);
block_4:
    if ((sp10 < 0x7BCU) || (sp10 > 0x83BU) || (sp12 < 1U) || (sp12 > 0xCU) || (sp13 < 1U) || (sp13 > 0x1FU) || (sp14 > 0x17U) || (sp15 > 0x3BU) || (sp16 > 0x3BU)) {
        M2C_FIELD(arg0, s16 *, 0x16) = 0;
        M2C_FIELD(arg0, s16 *, 0x18) = 0;
        return 0xA041;
    }
    temp_r30 = (sp14 << 0xB) + ((sp15 << 5) + ((s32) sp16 / 2));
    M2C_FIELD(arg0, s16 *, 0x16) = temp_r30;
    temp_r30_2 = ((sp10 - 0x7BC) << 9) + ((sp12 << 5) + sp13);
    M2C_FIELD(arg0, u8 *, 0x17) = (u8) (temp_r30 >> 8U);
    M2C_FIELD(arg0, s16 *, 0x18) = temp_r30_2;
    M2C_FIELD(arg0, u8 *, 0x19) = (u8) (temp_r30_2 >> 8U);
    return 0;
}
#pragma pop

s32 fn_800C0738(void *arg0, s32 arg1) { return 0; } /* draft: stub */
