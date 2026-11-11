/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

s32 fn_800DD678();
s32 memcmp();
M2C_UNK OSDisableInterrupts();
M2C_UNK OSRestoreInterrupts();
extern M2C_UNK lbl_803477C0;
extern s32 lbl_80350EEC;
extern s32 lbl_80350EF0;
extern s32 lbl_80350EF4;
s32 fn_800DD9F4(void *, s32, u32, s32);
M2C_UNK fn_80145820(s32, s32);

s32 fn_80139DA8(void *arg0);
s32 fn_8013A140(s32 arg0, s32 arg1);
s32 fn_8013A1B8(void *arg0, s32 arg1);
s32 fn_8013A1DC(void *arg0, void *arg1, void *arg2, M2C_UNK arg_sp0);
s32 fn_8013A3BC(void *arg0, s32 arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0);
s32 fn_8013A4FC(void *arg0, s32 arg1, s8 arg2, s8 arg3, s32 arg4, s32 arg5, s32 arg6, M2C_UNK arg_sp0);

s32 fn_80139DA8(void *arg0) {
    s32 var_ctr;
    s32 var_r7;
    s32 temp_r10_2;
    s32 temp_r10_3;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r7;
    s32 temp_r9;
    s32 temp_r9_2;
    s32 temp_r9_7;
    s32 temp_r9_9;
    s32 temp_cr0_gt;
    s32 var_r4;
    s32 var_r6;
    s32 temp_r0;
    s32 var_r8;
    int temp_r10;
    u32 temp_r10_4;
    u32 temp_r10_5;
    u32 temp_r10_6;
    u32 temp_r11;
    u32 temp_r11_2;
    u32 temp_r11_3;
    u32 temp_r11_4;
    u32 temp_r11_5;
    u32 temp_r12;
    u32 temp_r12_2;
    u32 temp_r6;
    u32 temp_r7_2;
    u32 temp_r8;
    u32 temp_r9_10;
    u32 temp_r9_3;
    u32 temp_r9_4;
    u32 temp_r9_5;
    u32 temp_r9_6;
    u32 temp_r9_8;
    u32 var_r5;
    u32 var_r5_2;
    u32 var_r5_3;
    u32 var_r5_4;
    u32 var_r9;
    u32 var_r9_2;
    void *var_r4_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x68);
    var_r6 = 0;
    var_r7 = 0;
    temp_cr0_gt = temp_r0 > 0;
    if (temp_cr0_gt != 0) {
        if (temp_cr0_gt == 0) {
            var_r4 = 0;
        } else {
            temp_r6 = M2C_FIELD(arg0, u32 *, 8);
            temp_r8 = temp_r6 - 0x20;
            temp_r5 = temp_r0 - (temp_r8 - ((M2C_FIELD(arg0, s32 *, 0x24) + 0x30) % temp_r6));
            if (temp_r5 <= 0) {
                var_r4 = 1;
            } else {
                var_r4 = ((u32) (temp_r5 + (temp_r6 - 0x21)) / temp_r8) + 1;
            }
        }
        var_r6 = var_r4 - 1;
    }
    /* draft: did not compile: var_r4_2 = arg0 + 4; */
    var_r8 = 1;
    var_ctr = 0xF;
    do {
        temp_r5_2 = M2C_FIELD(var_r4_2, s32 *, 0x68);
        if (temp_r5_2 > 0) {
            temp_r9 = M2C_FIELD(var_r4_2, s32 *, 0x28);
            switch (temp_r9) {                      /* irregular */
            case 0:
                if (temp_r5_2 <= 0) {
                    var_r5 = 0;
                } else if (var_r8 == 0) {
                    temp_r10 = M2C_FIELD(arg0, u32 *, 8);
                    temp_r11 = temp_r10 - 0x20;
                    temp_r9_2 = temp_r0 - (temp_r11 - ((M2C_FIELD(arg0, s32 *, 0x24) + 0x30) % temp_r10));
                    if (temp_r9_2 <= 0) {
                        var_r5 = 1;
                    } else {
                        var_r5 = ((u32) (temp_r9_2 + (temp_r10 - 0x21)) / temp_r11) + 1;
                    }
                } else {
                    temp_r9_3 = M2C_FIELD(arg0, u32 *, 8);
                    var_r5 = (u32) (temp_r5_2 + (temp_r9_3 - 0x21)) / (u32) (temp_r9_3 - 0x20);
                }
                var_r6 += var_r5 * 2;
                break;
            case 1:
                if (temp_r5_2 <= 0) {
                    var_r9 = 0;
                } else if (var_r8 == 0) {
                    temp_r11_2 = M2C_FIELD(arg0, u32 *, 8);
                    temp_r12 = temp_r11_2 - 0x20;
                    temp_r10_2 = temp_r0 - (temp_r12 - ((M2C_FIELD(arg0, s32 *, 0x24) + 0x30) % temp_r11_2));
                    if (temp_r10_2 <= 0) {
                        var_r9 = 1;
                    } else {
                        var_r9 = ((u32) (temp_r10_2 + (temp_r11_2 - 0x21)) / temp_r12) + 1;
                    }
                } else {
                    temp_r9_4 = M2C_FIELD(arg0, u32 *, 8);
                    var_r9 = (u32) (temp_r5_2 + (temp_r9_4 - 0x21)) / (u32) (temp_r9_4 - 0x20);
                }
                var_r6 += var_r9;
                if (temp_r5_2 <= 0) {
                    var_r9_2 = 0;
                } else if (var_r8 == 0) {
                    temp_r11_3 = M2C_FIELD(arg0, u32 *, 8);
                    temp_r12_2 = temp_r11_3 - 0x20;
                    temp_r10_3 = temp_r0 - (temp_r12_2 - ((M2C_FIELD(arg0, s32 *, 0x24) + 0x30) % temp_r11_3));
                    if (temp_r10_3 <= 0) {
                        var_r9_2 = 1;
                    } else {
                        var_r9_2 = ((u32) (temp_r10_3 + (temp_r11_3 - 0x21)) / temp_r12_2) + 1;
                    }
                } else {
                    temp_r9_5 = M2C_FIELD(arg0, u32 *, 8);
                    var_r9_2 = (u32) (temp_r5_2 + (temp_r9_5 - 0x21)) / (u32) (temp_r9_5 - 0x20);
                }
                if (var_r7 < (s32) var_r9_2) {
                    if (temp_r5_2 <= 0) {
                        var_r5_2 = 0;
                    } else if (var_r8 == 0) {
                        temp_r9_6 = M2C_FIELD(arg0, u32 *, 8);
                        temp_r10_4 = temp_r9_6 - 0x20;
                        temp_r7 = temp_r0 - (temp_r10_4 - ((M2C_FIELD(arg0, s32 *, 0x24) + 0x30) % temp_r9_6));
                        if (temp_r7 <= 0) {
                            var_r5_2 = 1;
                        } else {
                            var_r5_2 = ((u32) (temp_r7 + (temp_r9_6 - 0x21)) / temp_r10_4) + 1;
                        }
                    } else {
                        temp_r7_2 = M2C_FIELD(arg0, u32 *, 8);
                        var_r5_2 = (u32) (temp_r5_2 + (temp_r7_2 - 0x21)) / (u32) (temp_r7_2 - 0x20);
                    }
                    var_r7 = (s32) var_r5_2;
                }
                break;
            case 2:
                if (temp_r5_2 <= 0) {
                    var_r5_3 = 0;
                } else if (var_r8 == 0) {
                    temp_r10_5 = M2C_FIELD(arg0, u32 *, 8);
                    temp_r11_4 = temp_r10_5 - 0x20;
                    temp_r9_7 = temp_r0 - (temp_r11_4 - ((M2C_FIELD(arg0, s32 *, 0x24) + 0x30) % temp_r10_5));
                    if (temp_r9_7 <= 0) {
                        var_r5_3 = 1;
                    } else {
                        var_r5_3 = ((u32) (temp_r9_7 + (temp_r10_5 - 0x21)) / temp_r11_4) + 1;
                    }
                } else {
                    temp_r9_8 = M2C_FIELD(arg0, u32 *, 8);
                    var_r5_3 = (u32) (temp_r5_2 + (temp_r9_8 - 0x21)) / (u32) (temp_r9_8 - 0x20);
                }
                var_r6 += var_r5_3;
                if (var_r7 < 1) {
                    var_r7 = 1;
                }
                break;
            case 3:
                if (temp_r5_2 <= 0) {
                    var_r5_4 = 0;
                } else if (var_r8 == 0) {
                    temp_r10_6 = M2C_FIELD(arg0, u32 *, 8);
                    temp_r11_5 = temp_r10_6 - 0x20;
                    temp_r9_9 = temp_r0 - (temp_r11_5 - ((M2C_FIELD(arg0, s32 *, 0x24) + 0x30) % temp_r10_6));
                    if (temp_r9_9 <= 0) {
                        var_r5_4 = 1;
                    } else {
                        var_r5_4 = ((u32) (temp_r9_9 + (temp_r10_6 - 0x21)) / temp_r11_5) + 1;
                    }
                } else {
                    temp_r9_10 = M2C_FIELD(arg0, u32 *, 8);
                    var_r5_4 = (u32) (temp_r5_2 + (temp_r9_10 - 0x21)) / (u32) (temp_r9_10 - 0x20);
                }
                var_r6 += var_r5_4;
                break;
            }
        }
        /* draft: did not compile: var_r4_2 += 4; */
        var_r8 += 1;
        var_ctr -= 1;
    } while (var_ctr != 0);
    return var_r6 + var_r7;
}

s32 fn_8013A140(s32 arg0, s32 arg1) {
    s32 temp_r0;

    if (arg0 < 0) {
        return -1;
    }
    if (arg1 < 0) {
        return 1;
    }
    if ((arg0 == 0) && (arg1 == 0xFF)) {
        return 1;
    }
    if ((arg0 == 0xFF) && (arg1 == 0)) {
        return -1;
    }
    temp_r0 = arg0 - arg1;
    if (temp_r0 > 0x80) {
        return -1;
    }
    if (temp_r0 >= -0x80) {
        return temp_r0;
    }
    return 1;
}

s32 fn_8013A1B8(void *arg0, s32 arg1) {
    u32 temp_r5;

    temp_r5 = M2C_FIELD(arg0, u32 *, 8);
    return temp_r5 * (arg1 + (((u32) (M2C_FIELD(arg0, s32 *, 0x24) + temp_r5 + 0x2F) / temp_r5) - 1));
}

s32 fn_8013A1DC(void *arg0, void *arg1, void *arg2, M2C_UNK arg_sp0) {
    s32 temp_r0_2;
    s32 temp_r25;
    s32 temp_r3;
    s32 temp_r3_3;
    s32 temp_r6;
    s32 var_r26;
    s32 var_r31;
    u32 temp_r23;
    u32 temp_r3_2;
    u32 temp_r4;
    u32 temp_r5;
    u32 temp_r5_2;
    u32 var_r30;
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x3E8);
    switch ((s32) temp_r0) {                        /* irregular */
    case 2:
        var_r31 = 0x1800;
        break;
    case 1:
        var_r31 = 0xE00;
        break;
    default:
        var_r31 = 0;
        break;
    }
    var_r30 = 0;
loop_30:
    temp_r23 = M2C_FIELD(arg0, u32 *, 8);
    if (var_r30 >= (u32) ((u32) (M2C_FIELD(arg0, u32 *, 0x24) + temp_r23 + 0x2F) / temp_r23)) {
        return 0;
    }
    temp_r25 = M2C_FIELD(arg0, s32 *, 0);
    var_r26 = 0;
loop_9:
    /* draft: did not compile: temp_r3 = fn_800DD678(arg0 + 0xC, temp_r25, temp_r23, var_r30 * temp_r23); */
    if (temp_r3 == -1) {
        var_r26 += 1;
        if (var_r26 < 0xA) {
            goto loop_9;
        }
    }
    if (temp_r3 < 0) {
        return temp_r3;
    }
    if ((s32) var_r30 == 0) {
        if (0 /* draft: did not compile */) {
            return 1;
        }
        if ((var_r31 > 0) && (memcmp(M2C_FIELD(arg0, s32 *, 0) + 0x40, arg1, var_r31) != 0)) {
            return 1;
        }
        temp_r5 = M2C_FIELD(arg0, u32 *, 0x24);
        temp_r6 = var_r31 + 0x40;
        temp_r3_2 = M2C_FIELD(arg0, u32 *, 8);
        if (temp_r5 > temp_r3_2) {
            if (memcmp(M2C_FIELD(arg0, s32 *, 0) + temp_r6, arg2, temp_r3_2 - temp_r6) != 0) {
                return 1;
            }
            goto block_29;
        }
        if (memcmp(M2C_FIELD(arg0, s32 *, 0) + temp_r6, arg2, temp_r5 - temp_r6) != 0) {
            return 1;
        }
        goto block_29;
    }
    temp_r5_2 = M2C_FIELD(arg0, u32 *, 8);
    temp_r3_3 = var_r30 * temp_r5_2;
    temp_r4 = M2C_FIELD(arg0, u32 *, 0x24) - temp_r3_3;
    temp_r0_2 = (temp_r3_3 - 0x40) - var_r31;
    if (temp_r4 > temp_r5_2) {
        if (0 /* draft: did not compile */) {
            return 1;
        }
        goto block_29;
    }
    if (0 /* draft: did not compile */) {
        return 1;
    }
block_29:
    var_r30 += 1;
    goto loop_30;
}

#pragma push
#pragma peephole off
s32 fn_8013A3BC(void *arg0, s32 arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0) {
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    u32 sp10;
    void *spC;
    s32 sp8;
    s32 temp_r23;
    s32 temp_r24;
    s32 var_r3;
    u32 temp_r4;
    u32 temp_r6;
    u32 temp_r7;
    u32 temp_r7_2;
    u32 var_r29;
    void *temp_r3;
    s32 temp_r30;

    var_r29 = 0U;
loop_13:
    temp_r4 = M2C_FIELD(arg0, u32 *, 8);
    if (var_r29 >= (u32) ((u32) (M2C_FIELD(arg0, s32 *, 0x24) + temp_r4 + 0x2F) / temp_r4)) {
        return 0;
    }
    spC = arg0;
    sp8 = 0xB;
    sp10 = var_r29;
    sp14 = arg1;
    sp18 = arg2;
    sp1C = arg3;
    OSDisableInterrupts();
    temp_r23 = lbl_80350EF0;
    temp_r30 = lbl_80350EF4;
    temp_r24 = *(&lbl_803477C0 + (lbl_80350EF0 * 0x24));
    OSRestoreInterrupts();
    if ((temp_r30 != 2) && ((s32) lbl_80350EEC == temp_r23) && ((temp_r30 != 0) || ((s32) lbl_80350EEC != temp_r23) || (temp_r24 != 0))) {
        var_r3 = -0x109;
    } else {
        temp_r7 = lbl_80350EEC + 1;
        temp_r7_2 = temp_r7 >> 0x1FU;
        temp_r6 = (temp_r7 << 0x19) - temp_r7_2;
        temp_r3 = &lbl_803477C0 + (lbl_80350EEC * 0x24);
        lbl_80350EEC = ((temp_r6 << 7) | (temp_r6 >> 0x19U)) + temp_r7_2;
        memcpy((void *)(temp_r3), (const void *)(&sp8), (unsigned long)(0x24));
        if (temp_r30 == 2) {
            lbl_80350EF4 = 0;
        }
        var_r3 = 0;
    }
    if (var_r3 < 0) {
        return var_r3;
    }
    var_r29 += 1;
    goto loop_13;
}
#pragma pop

s32 fn_8013A4FC(void *arg0, s32 arg1, s8 arg2, s8 arg3, s32 arg4, s32 arg5, s32 arg6, M2C_UNK arg_sp0) { return 0; } /* draft: stub */
