/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

s32 fn_800DCCDC();
s32 CARDClose();
s32 fn_8013A7FC(void *);
s32 fn_80139DA8(s32, u32);
M2C_UNK OSDisableInterrupts();
M2C_UNK OSRestoreInterrupts();
s32 fn_800DCB7C();
s32 fn_800DDE30(s32, s32, M2C_UNK *);
s32 fn_800DE0D0(s32, s32, M2C_UNK *);
s32 fn_80141BF0(void *, s32, s32, M2C_UNK, M2C_UNK);
extern s32 lbl_80350EF4;
extern M2C_UNK lbl_803477C0;
extern M2C_UNK lbl_803489C0;
extern s32 lbl_80350ED8;
extern s32 lbl_80350EEC;
extern s32 lbl_80350EF0;
s32 fn_800DD200();
s32 fn_80142468(void *, M2C_UNK);
extern M2C_UNK lbl_803474C0;
extern s32 lbl_80350EDC;
extern s32 lbl_80350EE0;
M2C_UNK fn_8013D328(M2C_UNK, M2C_UNK);
s32 fn_8013DE4C(M2C_UNK, M2C_UNK);
s32 fn_8013F170(M2C_UNK, M2C_UNK);
s32 fn_8014068C(M2C_UNK, M2C_UNK);

s32 fn_80144390(void *arg0, s32 arg1);
s32 method_getTotalBlock(void *arg0);
s32 fn_80144554(void *arg0, s32 arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0);
s32 fn_801448E0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0);
s32 fn_80144B54(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0);
s32 fn_80144F30(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, M2C_UNK arg_sp0);
s32 fn_80144FFC(s32 arg0, s32 arg2, s32 arg3, s32 arg4);
void fn_801450CC(void);
s32 fn_801450F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_80145174(s32 arg0, s32 arg1);
s32 fn_80145200(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_8014529C(void *arg0);
void fn_80145374(u8 *arg0, s32 arg1, s32 arg2, M2C_UNK arg_sp0);
void fn_80145680();
s32 fn_80145820(s32 arg0, s32 arg1, M2C_UNK arg_sp0);
void fn_80145B78();
s32 fn_80145D18(void *arg0, s32 arg1, M2C_UNK arg_sp0);

s32 fn_80144390(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r30;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r30;
    s32 var_r31;
    s32 var_r3;

    var_r31 = 0;
    temp_r30 = M2C_FIELD(arg0, s32 *, 4);
loop_1:
    /* draft: did not compile: temp_r3_2 = fn_800DCCDC(temp_r30, arg1, arg0 + 0xC); */
    if (temp_r3_2 == -1) {
        var_r31 += 1;
        if (var_r31 < 0xA) {
            goto loop_1;
        }
    }
    if (temp_r3_2 < 0) {
        return temp_r3_2;
    }
    var_r3 = 0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x10);
loop_6:
    if (temp_r0 == -1) {
        var_r3 += 1;
        if (var_r3 < 0xA) {
            goto loop_6;
        }
    }
    M2C_FIELD(arg0, s32 *, 0x20) = temp_r0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) < 0) {
        var_r30 = 0;
loop_10:
        if (0 /* draft: did not compile */) {
            var_r30 += 1;
            if (var_r30 < 0xA) {
                goto loop_10;
            }
        }
        return M2C_FIELD(arg0, s32 *, 0x20);
    }
    temp_r3 = fn_8013A7FC(arg0);
    return temp_r3 & (temp_r3 >> 0x1F);
}

s32 method_getTotalBlock(void *arg0) {
    s32 temp_r4;
    s32 var_r4;
    s32 var_r5;
    s32 var_r6;
    s32 var_r7;
    u32 temp_r5;
    u8 temp_r0;
    u8 temp_r0_2;
    void *temp_r8;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x3E8);
    switch ((s32) temp_r0) {                        /* switch 1; irregular */
    case 2:                                         /* switch 1 */
        var_r7 = 0x1800;
        break;
    case 1:                                         /* switch 1 */
        var_r7 = 0xE00;
        break;
    default:                                        /* switch 1 */
        var_r7 = 0;
        break;
    }
    var_r5 = 0;
    var_r6 = 0;
    var_r4 = 0;
loop_15:
    if (var_r4 < 8) {
        /* draft: did not compile: temp_r8 = arg0 + var_r4; */
        if ((u8) M2C_FIELD(temp_r8, u8 *, 0x3F2) != 0) {
            temp_r0_2 = M2C_FIELD(temp_r8, u8 *, 0x3EA);
            switch ((s32) temp_r0_2) {              /* switch 2; irregular */
            case 2:                                 /* switch 2 */
                var_r6 += 0x800;
                break;
            case 1:                                 /* switch 2 */
                var_r5 = 1;
                var_r6 += 0x400;
                break;
            }
            var_r4 += 1;
            goto loop_15;
        }
    }
    if (var_r5 != 0) {
        var_r6 += 0x200;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (var_r7 + var_r6 + 0x40);
    temp_r5 = M2C_FIELD(arg0, u32 *, 8);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x24) + temp_r5;
    return ((u32) (temp_r4 + 0x2F) / temp_r5) + fn_80139DA8(temp_r4, temp_r5);
}

s32 fn_80144554(void *arg0, s32 arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0) {
    s32 sp40;
    u16 sp3E;
    u16 sp3C;
    s32 sp38;
    u8 sp36;
    M2C_UNK sp8;
    s32 temp_r0;
    s32 temp_r28;
    s32 temp_r29;
    s32 temp_r29_2;
    s32 temp_r29_3;
    s32 temp_r30;
    s32 temp_r30_2;
    s32 temp_r30_3;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r3_5;
    s32 temp_r3_6;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 temp_r6_3;
    s32 temp_r6_4;
    s32 temp_r6_5;
    s32 temp_r8_2;
    s32 temp_r8_3;
    s32 temp_r8_4;
    s32 temp_r9;
    s32 temp_r9_2;
    s32 temp_r9_3;
    s32 temp_r9_4;
    s32 temp_r9_5;
    s32 temp_r9_6;
    s32 var_r28;
    s32 var_r28_2;
    s32 var_r28_3;
    s32 var_r28_4;
    s32 var_r28_5;
    s32 var_r28_6;
    s32 var_r29;
    s32 var_r30;
    s32 var_r6;
    s32 var_r7;
    s32 var_r8;
    u16 temp_r0_3;
    u16 temp_r0_4;
    u16 temp_r0_5;
    u16 temp_r5;
    u16 temp_r5_2;
    u16 temp_r5_3;
    u16 temp_r5_4;
    u32 temp_r0_2;
    u32 var_ctr;
    u32 var_ctr_2;
    u32 var_r3;
    void *temp_r8;

    OSDisableInterrupts();
    temp_r30 = lbl_80350EF4 == 1;
    OSRestoreInterrupts();
    if (temp_r30 != 0) {
        return -0x108;
    }
    temp_r28 = M2C_FIELD(arg0, s32 *, 0x20);
    var_r30 = 0;
    temp_r29 = M2C_FIELD(arg0, s32 *, 4);
loop_3:
    /* draft: did not compile: temp_r3_2 = fn_800DCB7C(temp_r29, temp_r28, arg0 + 0xC); */
    if (temp_r3_2 == -1) {
        var_r30 += 1;
        if (var_r30 < 0xA) {
            goto loop_3;
        }
    }
    if (temp_r3_2 < 0) {
        return temp_r3_2;
    }
    /* draft: did not compile: memcpy(arg0 + 0x3A8, arg1, 0x40); */
    temp_r3 = fn_80141BF0(arg0, arg2, arg3, 0, 0);
    if (temp_r3 < 0) {
        var_r28_2 = 0;
loop_9:
        if (0 /* draft: did not compile */) {
            var_r28_2 += 1;
            if (var_r28_2 < 0xA) {
                goto loop_9;
            }
        }
        return temp_r3;
    }
    if (temp_r3 == 1) {
        var_r28_3 = 0;
loop_14:
        if (0 /* draft: did not compile */) {
            var_r28_3 += 1;
            if (var_r28_3 < 0xA) {
                goto loop_14;
            }
        }
        return temp_r3;
    }
    temp_r30_2 = M2C_FIELD(arg0, s32 *, 0x20);
    var_r28_4 = 0;
    temp_r29_2 = M2C_FIELD(arg0, s32 *, 4);
loop_18:
    temp_r3_3 = fn_800DDE30(temp_r29_2, temp_r30_2, &sp8);
    if (temp_r3_3 == -1) {
        var_r28_4 += 1;
        if (var_r28_4 < 0xA) {
            goto loop_18;
        }
    }
    if (temp_r3_3 < 0) {
        var_r28 = temp_r3_3;
    } else {
        var_r6 = 0;
        sp40 = 0;
        var_r7 = 0;
        sp38 = 0x40;
        sp36 = (sp36 & 0xFFFFFFFC) | M2C_FIELD(arg0, u8 *, 0x3E8);
loop_24:
        if (var_r6 < 8) {
            /* draft: did not compile: temp_r8 = arg0 + var_r6; */
            if ((u8) M2C_FIELD(temp_r8, u8 *, 0x3F2) == 0) {

            } else {
                temp_r3_4 = 3 << var_r7;
                temp_r9 = ~(temp_r3_4 | temp_r3_4);
                var_r6 += 1;
                sp3C = (sp3C & temp_r9) | (M2C_FIELD(temp_r8, u8 *, 0x3EA) << var_r7);
                temp_r0 = M2C_FIELD(temp_r8, u8 *, 0x3F2) << var_r7;
                sp3E = (sp3E & temp_r9) | temp_r0;
                var_r7 += 2;
                goto loop_24;
            }
        }
        var_r8 = var_r6 * 2;
        var_r3 = 8 - var_r6;
        if (var_r6 < 8) {
            temp_r0_2 = var_r3 >> 2U;
            var_ctr = temp_r0_2;
            if (temp_r0_2 != 0) {
                do {
                    temp_r6 = 3 << var_r8;
                    temp_r9_2 = ~(temp_r6 | temp_r6);
                    temp_r5 = sp3C & temp_r9_2;
                    temp_r8_2 = var_r8 + 2;
                    temp_r0_3 = sp3E & temp_r9_2;
                    sp3C = temp_r5;
                    temp_r6_2 = 3 << temp_r8_2;
                    temp_r9_3 = ~(temp_r6_2 | temp_r6_2);
                    sp3E = temp_r0_3;
                    temp_r5_2 = temp_r5 & temp_r9_3;
                    temp_r8_3 = temp_r8_2 + 2;
                    sp3C = temp_r5_2;
                    temp_r6_3 = 3 << temp_r8_3;
                    temp_r0_4 = temp_r0_3 & temp_r9_3;
                    sp3E = temp_r0_4;
                    temp_r9_4 = ~(temp_r6_3 | temp_r6_3);
                    temp_r8_4 = temp_r8_3 + 2;
                    temp_r5_3 = temp_r5_2 & temp_r9_4;
                    temp_r6_4 = 3 << temp_r8_4;
                    sp3C = temp_r5_3;
                    temp_r0_5 = temp_r0_4 & temp_r9_4;
                    temp_r9_5 = ~(temp_r6_4 | temp_r6_4);
                    sp3E = temp_r0_5;
                    var_r8 = temp_r8_4 + 2;
                    sp3C = temp_r5_3 & temp_r9_5;
                    sp3E = temp_r0_5 & temp_r9_5;
                    var_ctr -= 1;
                } while (var_ctr != 0);
                var_r3 &= 3;
                if (var_r3 != 0) {
                    goto block_31;
                }
            } else {
block_31:
                var_ctr_2 = var_r3;
                do {
                    temp_r6_5 = 3 << var_r8;
                    temp_r9_6 = ~(temp_r6_5 | temp_r6_5);
                    temp_r5_4 = sp3C & temp_r9_6;
                    var_r8 += 2;
                    sp3C = temp_r5_4;
                    sp3E &= temp_r9_6;
                    var_ctr_2 -= 1;
                } while (var_ctr_2 != 0);
            }
        }
        temp_r30_3 = M2C_FIELD(arg0, s32 *, 0x20);
        var_r28_5 = 0;
        temp_r29_3 = M2C_FIELD(arg0, s32 *, 4);
loop_34:
        temp_r3_5 = fn_800DE0D0(temp_r29_3, temp_r30_3, &sp8);
        if (temp_r3_5 == -1) {
            var_r28_5 += 1;
            if (var_r28_5 < 0xA) {
                goto loop_34;
            }
        }
        if (temp_r3_5 < 0) {
            var_r28 = temp_r3_5;
        } else {
            var_r28 = 0;
        }
    }
    if (var_r28 < 0) {
        var_r29 = 0;
loop_41:
        if (0 /* draft: did not compile */) {
            var_r29 += 1;
            if (var_r29 < 0xA) {
                goto loop_41;
            }
        }
        return var_r28;
    }
    var_r28_6 = 0;
loop_45:
    /* draft: did not compile: temp_r3_6 = CARDClose(arg0 + 0xC); */
    if (temp_r3_6 == -1) {
        var_r28_6 += 1;
        if (var_r28_6 < 0xA) {
            goto loop_45;
        }
    }
    if (temp_r3_6 < 0) {
        return -0x10B;
    }
    return 0;
}

s32 fn_801448E0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0) {
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    u32 sp10;
    void *spC;
    s32 sp8;
    s32 temp_r22;
    s32 temp_r23;
    s32 temp_r29;
    s32 var_r3;
    s32 var_r3_2;
    s32 var_r4;
    s32 var_r5;
    s32 var_r6;
    s32 var_r6_2;
    u32 temp_r0_3;
    u32 temp_r4;
    u32 temp_r4_2;
    u32 temp_r4_3;
    u32 temp_r6;
    u32 temp_r7_2;
    u32 temp_r7_3;
    u32 var_r30;
    u8 temp_r0;
    u8 temp_r0_2;
    void *temp_r3;
    void *temp_r7;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x3E8);
    switch ((s32) temp_r0) {                        /* switch 1; irregular */
    case 2:                                         /* switch 1 */
        var_r6 = 0x1800;
        break;
    case 1:                                         /* switch 1 */
        var_r6 = 0xE00;
        break;
    default:                                        /* switch 1 */
        var_r6 = 0;
        break;
    }
    var_r4 = 0;
    var_r5 = 0;
    var_r3_2 = 0;
loop_15:
    if (var_r3_2 < 8) {
        /* draft: did not compile: temp_r7 = arg0 + var_r3_2; */
        if ((u8) M2C_FIELD(temp_r7, u8 *, 0x3F2) != 0) {
            temp_r0_2 = M2C_FIELD(temp_r7, u8 *, 0x3EA);
            switch ((s32) temp_r0_2) {              /* switch 2; irregular */
            case 2:                                 /* switch 2 */
                var_r5 += 0x800;
                break;
            case 1:                                 /* switch 2 */
                var_r4 = 1;
                var_r5 += 0x400;
                break;
            }
            var_r3_2 += 1;
            goto loop_15;
        }
    }
    if (var_r4 != 0) {
        var_r5 += 0x200;
    }
    var_r30 = 0U;
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (var_r6 + var_r5 + 0x40);
    lbl_80350ED8 = lbl_80350EEC;
loop_32:
    temp_r4 = M2C_FIELD(arg0, u32 *, 8);
    if (var_r30 >= (u32) ((u32) (M2C_FIELD(arg0, s32 *, 0x24) + temp_r4 + 0x2F) / temp_r4)) {
        var_r3 = 0;
    } else {
        spC = arg0;
        sp8 = 0xB;
        sp10 = var_r30;
        sp14 = arg1;
        sp18 = arg2;
        sp1C = arg3;
        OSDisableInterrupts();
        temp_r22 = lbl_80350EF0;
        temp_r29 = lbl_80350EF4;
        temp_r23 = *(&lbl_803477C0 + (lbl_80350EF0 * 0x24));
        OSRestoreInterrupts();
        if ((temp_r29 != 2) && ((s32) lbl_80350EEC == temp_r22) && ((temp_r29 != 0) || ((s32) lbl_80350EEC != temp_r22) || (temp_r23 != 0))) {
            var_r3 = -0x109;
        } else {
            temp_r7_2 = lbl_80350EEC + 1;
            temp_r7_3 = temp_r7_2 >> 0x1FU;
            temp_r6 = (temp_r7_2 << 0x19) - temp_r7_3;
            temp_r3 = &lbl_803477C0 + (lbl_80350EEC * 0x24);
            lbl_80350EEC = ((temp_r6 << 7) | (temp_r6 >> 0x19U)) + temp_r7_3;
            memcpy((void *)(temp_r3), (const void *)(&sp8), (unsigned long)(0x24));
            if (temp_r29 == 2) {
                lbl_80350EF4 = 0;
            }
            var_r3 = 0;
        }
        if (var_r3 < 0) {

        } else {
            var_r30 += 1;
            goto loop_32;
        }
    }
    if (var_r3 < 0) {
        if ((s32) lbl_80350ED8 >= 0) {
            var_r6_2 = lbl_80350ED8;
loop_38:
            if (var_r6_2 != (s32) lbl_80350EEC) {
                temp_r4_2 = var_r6_2 + 1;
                temp_r4_3 = temp_r4_2 >> 0x1FU;
                temp_r0_3 = (temp_r4_2 << 0x19) - temp_r4_3;
                *(&lbl_803477C0 + (var_r6_2 * 0x24)) = 0;
                var_r6_2 = ((temp_r0_3 << 7) | (temp_r0_3 >> 0x19U)) + temp_r4_3;
                goto loop_38;
            }
            lbl_80350EEC = lbl_80350ED8;
            return var_r3;
        }
        /* Duplicate return node #41. Try simplifying control flow for better match */
        return var_r3;
    }
    M2C_FIELD(&lbl_803489C0, s32 *, 0) = 5;
    var_r3 = 0;
    M2C_FIELD(&lbl_803489C0, void **, 4) = arg0;
    M2C_FIELD(&lbl_803489C0, s32 *, 8) = arg4;
    M2C_FIELD(&lbl_803489C0, s32 *, 0xC) = 0;
    lbl_80350ED8 = -1;
    return var_r3;
}

s32 fn_80144B54(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0) {
    s32 sp40;
    u16 sp3E;
    u16 sp3C;
    s32 sp38;
    u8 sp36;
    M2C_UNK sp8;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r28;
    s32 temp_r28_2;
    s32 temp_r29;
    s32 temp_r29_2;
    s32 temp_r30;
    s32 temp_r30_2;
    s32 temp_r30_3;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r3_5;
    s32 temp_r3_6;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 temp_r6_3;
    s32 temp_r6_4;
    s32 temp_r6_5;
    s32 temp_r8_2;
    s32 temp_r8_3;
    s32 temp_r8_4;
    s32 temp_r9;
    s32 temp_r9_2;
    s32 temp_r9_3;
    s32 temp_r9_4;
    s32 temp_r9_5;
    s32 temp_r9_6;
    s32 var_r28;
    s32 var_r29;
    s32 var_r29_2;
    s32 var_r29_3;
    s32 var_r29_4;
    s32 var_r29_5;
    s32 var_r30;
    s32 var_r3;
    s32 var_r3_2;
    s32 var_r6;
    s32 var_r7;
    s32 var_r8;
    u16 temp_r0_4;
    u16 temp_r0_5;
    u16 temp_r0_6;
    u16 temp_r5;
    u16 temp_r5_2;
    u16 temp_r5_3;
    u16 temp_r5_4;
    u32 temp_r0_3;
    u32 var_ctr;
    u32 var_ctr_2;
    u32 var_r3_3;
    void *temp_r8;

    OSDisableInterrupts();
    temp_r30 = lbl_80350EF4 == 1;
    OSRestoreInterrupts();
    if (temp_r30 != 0) {
        return -0x108;
    }
    /* draft: did not compile: memcpy(arg0 + 0x3A8, arg2, 0x40); */
    var_r30 = 0;
    temp_r29 = M2C_FIELD(arg0, s32 *, 4);
    temp_r28 = M2C_FIELD(arg0, s32 *, 8) * method_getTotalBlock(arg0);
loop_3:
    /* draft: did not compile: temp_r3_4 = fn_800DD200(temp_r29, arg1, temp_r28, arg0 + 0xC); */
    if (temp_r3_4 == -1) {
        var_r30 += 1;
        if (var_r30 < 0xA) {
            goto loop_3;
        }
    }
    if (temp_r3_4 < 0) {
        return temp_r3_4;
    }
    var_r3_2 = 0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x10);
loop_8:
    if (temp_r0 == -1) {
        var_r3_2 += 1;
        if (var_r3_2 < 0xA) {
            goto loop_8;
        }
    }
    M2C_FIELD(arg0, s32 *, 0x20) = temp_r0;
    temp_r3_3 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_r3_3 < 0) {
        return temp_r3_3;
    }
    temp_r3_2 = fn_80141BF0(arg0, arg3, arg4, 1, 0);
    if (temp_r3_2 < 0) {
        var_r29 = 0;
loop_14:
        if (0 /* draft: did not compile */) {
            var_r29 += 1;
            if (var_r29 < 0xA) {
                goto loop_14;
            }
        }
        return temp_r3_2;
    }
    temp_r3 = fn_80142468(arg0, 0);
    if (temp_r3 < 0) {
        var_r29_2 = 0;
loop_19:
        if (0 /* draft: did not compile */) {
            var_r29_2 += 1;
            if (var_r29_2 < 0xA) {
                goto loop_19;
            }
        }
        return temp_r3;
    }
    temp_r28_2 = M2C_FIELD(arg0, s32 *, 0x20);
    var_r29_3 = 0;
    temp_r30_2 = M2C_FIELD(arg0, s32 *, 4);
loop_23:
    var_r3 = fn_800DDE30(temp_r30_2, temp_r28_2, &sp8);
    if (var_r3 == -1) {
        var_r29_3 += 1;
        if (var_r29_3 < 0xA) {
            goto loop_23;
        }
    }
    if (var_r3 < 0) {

    } else {
        var_r6 = 0;
        sp40 = 0;
        var_r7 = 0;
        sp38 = 0x40;
        sp36 = (sp36 & 0xFFFFFFFC) | M2C_FIELD(arg0, u8 *, 0x3E8);
loop_29:
        if (var_r6 < 8) {
            /* draft: did not compile: temp_r8 = arg0 + var_r6; */
            if ((u8) M2C_FIELD(temp_r8, u8 *, 0x3F2) == 0) {

            } else {
                temp_r3_5 = 3 << var_r7;
                temp_r9 = ~(temp_r3_5 | temp_r3_5);
                var_r6 += 1;
                sp3C = (sp3C & temp_r9) | (M2C_FIELD(temp_r8, u8 *, 0x3EA) << var_r7);
                temp_r0_2 = M2C_FIELD(temp_r8, u8 *, 0x3F2) << var_r7;
                sp3E = (sp3E & temp_r9) | temp_r0_2;
                var_r7 += 2;
                goto loop_29;
            }
        }
        var_r8 = var_r6 * 2;
        var_r3_3 = 8 - var_r6;
        if (var_r6 < 8) {
            temp_r0_3 = var_r3_3 >> 2U;
            var_ctr = temp_r0_3;
            if (temp_r0_3 != 0) {
                do {
                    temp_r6 = 3 << var_r8;
                    temp_r9_2 = ~(temp_r6 | temp_r6);
                    temp_r5 = sp3C & temp_r9_2;
                    temp_r8_2 = var_r8 + 2;
                    temp_r0_4 = sp3E & temp_r9_2;
                    sp3C = temp_r5;
                    temp_r6_2 = 3 << temp_r8_2;
                    temp_r9_3 = ~(temp_r6_2 | temp_r6_2);
                    sp3E = temp_r0_4;
                    temp_r5_2 = temp_r5 & temp_r9_3;
                    temp_r8_3 = temp_r8_2 + 2;
                    sp3C = temp_r5_2;
                    temp_r6_3 = 3 << temp_r8_3;
                    temp_r0_5 = temp_r0_4 & temp_r9_3;
                    sp3E = temp_r0_5;
                    temp_r9_4 = ~(temp_r6_3 | temp_r6_3);
                    temp_r8_4 = temp_r8_3 + 2;
                    temp_r5_3 = temp_r5_2 & temp_r9_4;
                    temp_r6_4 = 3 << temp_r8_4;
                    sp3C = temp_r5_3;
                    temp_r0_6 = temp_r0_5 & temp_r9_4;
                    temp_r9_5 = ~(temp_r6_4 | temp_r6_4);
                    sp3E = temp_r0_6;
                    var_r8 = temp_r8_4 + 2;
                    sp3C = temp_r5_3 & temp_r9_5;
                    sp3E = temp_r0_6 & temp_r9_5;
                    var_ctr -= 1;
                } while (var_ctr != 0);
                var_r3_3 &= 3;
                if (var_r3_3 != 0) {
                    goto block_36;
                }
            } else {
block_36:
                var_ctr_2 = var_r3_3;
                do {
                    temp_r6_5 = 3 << var_r8;
                    temp_r9_6 = ~(temp_r6_5 | temp_r6_5);
                    temp_r5_4 = sp3C & temp_r9_6;
                    var_r8 += 2;
                    sp3C = temp_r5_4;
                    sp3E &= temp_r9_6;
                    var_ctr_2 -= 1;
                } while (var_ctr_2 != 0);
            }
        }
        temp_r30_3 = M2C_FIELD(arg0, s32 *, 0x20);
        var_r28 = 0;
        temp_r29_2 = M2C_FIELD(arg0, s32 *, 4);
loop_39:
        var_r3 = fn_800DE0D0(temp_r29_2, temp_r30_3, &sp8);
        if (var_r3 == -1) {
            var_r28 += 1;
            if (var_r28 < 0xA) {
                goto loop_39;
            }
        }
        if (var_r3 < 0) {

        } else {
            var_r3 = 0;
        }
    }
    if (var_r3 < 0) {
        var_r29_4 = 0;
loop_46:
        if (0 /* draft: did not compile */) {
            var_r29_4 += 1;
            if (var_r29_4 < 0xA) {
                goto loop_46;
            }
        }
        return var_r3;
    }
    var_r29_5 = 0;
loop_50:
    /* draft: did not compile: temp_r3_6 = CARDClose(arg0 + 0xC); */
    if (temp_r3_6 == -1) {
        var_r29_5 += 1;
        if (var_r29_5 < 0xA) {
            goto loop_50;
        }
    }
    if (temp_r3_6 < 0) {
        return -0x10B;
    }
    return 0;
}

s32 fn_80144F30(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, M2C_UNK arg_sp0) {
    s32 temp_r6;
    u32 temp_r0;
    u32 temp_r3;
    u32 temp_r4;
    void *temp_r5;

    /* draft: did not compile: memcpy(arg0 + 0x3A8, arg2, 0x40); */
    if (((s32) lbl_80350EE0 == (s32) lbl_80350EDC) && ((s32) *(&lbl_803474C0 + (lbl_80350EE0 * 0x18)) != 0)) {
        return -0x109;
    }
    temp_r6 = lbl_80350EDC * 0x18;
    temp_r3 = lbl_80350EDC + 1;
    *(&lbl_803474C0 + temp_r6) = 3;
    temp_r5 = &lbl_803474C0 + temp_r6;
    temp_r4 = temp_r3 >> 0x1FU;
    M2C_FIELD(temp_r5, s32 *, 4) = arg0;
    temp_r0 = (temp_r3 << 0x1B) - temp_r4;
    M2C_FIELD(temp_r5, s32 *, 8) = arg1;
    M2C_FIELD(temp_r5, s32 *, 0xC) = arg3;
    M2C_FIELD(temp_r5, s32 *, 0x10) = arg4;
    M2C_FIELD(temp_r5, s32 *, 0x14) = arg5;
    lbl_80350EDC = ((temp_r0 << 5) | (temp_r0 >> 0x1BU)) + temp_r4;
    return 0;
}

s32 fn_80144FFC(s32 arg0, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r6;
    u32 temp_r0;
    u32 temp_r3;
    u32 temp_r4;
    void *temp_r5;

    /* draft: did not compile: memcpy(arg0 + 0x3A8, 0x40); */
    if (((s32) lbl_80350EE0 == (s32) lbl_80350EDC) && ((s32) *(&lbl_803474C0 + (lbl_80350EE0 * 0x18)) != 0)) {
        return -0x109;
    }
    temp_r6 = lbl_80350EDC * 0x18;
    temp_r3 = lbl_80350EDC + 1;
    *(&lbl_803474C0 + temp_r6) = 4;
    temp_r5 = &lbl_803474C0 + temp_r6;
    temp_r4 = temp_r3 >> 0x1FU;
    M2C_FIELD(temp_r5, s32 *, 4) = arg0;
    temp_r0 = (temp_r3 << 0x1B) - temp_r4;
    M2C_FIELD(temp_r5, s32 *, 0xC) = arg2;
    M2C_FIELD(temp_r5, s32 *, 0x10) = arg3;
    M2C_FIELD(temp_r5, s32 *, 0x14) = arg4;
    lbl_80350EDC = ((temp_r0 << 5) | (temp_r0 >> 0x1BU)) + temp_r4;
    return 0;
}

void fn_801450CC(void) {
    fn_8013D328(0, 0);
}

s32 fn_801450F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r10;
    s32 var_r9;
    u32 temp_r0;
    u32 temp_r7;
    u32 temp_r7_2;
    void *temp_r8;

    if (((s32) lbl_80350EE0 == (s32) lbl_80350EDC) && ((s32) *(&lbl_803474C0 + (lbl_80350EE0 * 0x18)) != 0)) {
        var_r9 = -0x109;
    } else {
        temp_r10 = lbl_80350EDC * 0x18;
        temp_r7 = lbl_80350EDC + 1;
        *(&lbl_803474C0 + temp_r10) = 1;
        temp_r8 = &lbl_803474C0 + temp_r10;
        temp_r7_2 = temp_r7 >> 0x1FU;
        var_r9 = 0;
        M2C_FIELD(temp_r8, s32 *, 4) = arg0;
        temp_r0 = (temp_r7 << 0x1B) - temp_r7_2;
        M2C_FIELD(temp_r8, s32 *, 8) = arg1;
        M2C_FIELD(temp_r8, s32 *, 0xC) = arg2;
        M2C_FIELD(temp_r8, s32 *, 0x14) = arg3;
        lbl_80350EDC = ((temp_r0 << 5) | (temp_r0 >> 0x1BU)) + temp_r7_2;
    }
    return var_r9;
}

s32 fn_80145174(s32 arg0, s32 arg1) {
    s32 temp_r0;
    void *temp_r6;

    /* draft: did not compile: temp_r6 = arg0 + (arg1 * 4); */
    if ((s32) M2C_FIELD(temp_r6, s32 *, 0x68) <= 0) {
        return -0x101;
    }
    temp_r0 = M2C_FIELD(temp_r6, s32 *, 0x28);
    if (temp_r0 != 3) {
        if (temp_r0 < 3) {
            if (temp_r0 != 0) {
                if (temp_r0 < 0) {
                    goto block_10;
                }
                return fn_8013F170(0, 0);
            }
            return fn_8013DE4C(0, 0);
        }
block_10:
        return -0x101;
    }
    return fn_8014068C(0, 0);
}

#pragma push
#pragma peephole off
s32 fn_80145200(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r10;
    s32 var_r9;
    u32 temp_r0;
    u32 temp_r7;
    u32 temp_r7_2;
    void *temp_r8;

    if ((s32) M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x68) <= 0) {
        return -0x101;
    }
    if (((s32) lbl_80350EE0 == (s32) lbl_80350EDC) && ((s32) *(&lbl_803474C0 + (lbl_80350EE0 * 0x18)) != 0)) {
        var_r9 = -0x109;
    } else {
        temp_r10 = lbl_80350EDC * 0x18;
        temp_r7 = lbl_80350EDC + 1;
        *(&lbl_803474C0 + temp_r10) = 2;
        temp_r8 = &lbl_803474C0 + temp_r10;
        temp_r7_2 = temp_r7 >> 0x1FU;
        var_r9 = 0;
        M2C_FIELD(temp_r8, s32 *, 4) = arg0;
        temp_r0 = (temp_r7 << 0x1B) - temp_r7_2;
        M2C_FIELD(temp_r8, s32 *, 8) = arg1;
        M2C_FIELD(temp_r8, s32 *, 0xC) = arg2;
        M2C_FIELD(temp_r8, s32 *, 0x14) = arg3;
        lbl_80350EDC = ((temp_r0 << 5) | (temp_r0 >> 0x1BU)) + temp_r7_2;
    }
    return var_r9;
}
#pragma pop

s32 fn_8014529C(void *arg0) {
    s32 var_r3;
    s32 var_r4;
    s32 var_r5;
    s32 var_r6;
    u8 temp_r0;
    u8 temp_r0_2;
    void *temp_r7;

    /* draft: did not compile: memcpy(arg0 + 0x3E8, 0x12); */
    temp_r0 = M2C_FIELD(arg0, u8 *, 0x3E8);
    switch ((s32) temp_r0) {                        /* switch 1; irregular */
    case 2:                                         /* switch 1 */
        var_r6 = 0x1800;
        break;
    case 1:                                         /* switch 1 */
        var_r6 = 0xE00;
        break;
    default:                                        /* switch 1 */
        var_r6 = 0;
        break;
    }
    var_r4 = 0;
    var_r5 = 0;
    var_r3 = 0;
loop_15:
    if (var_r3 < 8) {
        /* draft: did not compile: temp_r7 = arg0 + var_r3; */
        if ((u8) M2C_FIELD(temp_r7, u8 *, 0x3F2) != 0) {
            temp_r0_2 = M2C_FIELD(temp_r7, u8 *, 0x3EA);
            switch ((s32) temp_r0_2) {              /* switch 2; irregular */
            case 2:                                 /* switch 2 */
                var_r5 += 0x800;
                break;
            case 1:                                 /* switch 2 */
                var_r4 = 1;
                var_r5 += 0x400;
                break;
            }
            var_r3 += 1;
            goto loop_15;
        }
    }
    if (var_r4 != 0) {
        var_r5 += 0x200;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (var_r6 + var_r5 + 0x40);
    return 0;
}

void fn_80145374(u8 *arg0, s32 arg1, s32 arg2, M2C_UNK arg_sp0) {
    s8 sp17;
    s8 sp16;
    s8 sp15;
    s8 sp14;
    s8 sp13;
    s8 sp12;
    s8 sp11;
    s8 sp10;
    s8 spF;
    s8 spE;
    s8 spD;
    s8 spC;
    s8 spB;
    s8 spA;
    u8 sp9;
    u8 sp8;
    s32 temp_r10_4;
    s32 temp_r11_4;
    s32 temp_r26;
    s32 temp_r27_3;
    s32 temp_r29_3;
    s32 temp_r30;
    s32 temp_r31;
    s32 temp_r31_3;
    s32 temp_r4_2;
    s32 temp_r9;
    s32 temp_r9_6;
    s32 var_ctr_2;
    s32 var_ctr_3;
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r0_4;
    u32 temp_r0_5;
    u32 temp_r10;
    u32 temp_r10_2;
    u32 temp_r10_3;
    u32 temp_r11;
    u32 temp_r11_2;
    u32 temp_r11_3;
    u32 temp_r12;
    u32 temp_r12_2;
    u32 temp_r27;
    u32 temp_r27_2;
    u32 temp_r28;
    u32 temp_r29;
    u32 temp_r29_2;
    u32 temp_r30_2;
    u32 temp_r31_2;
    u32 temp_r4;
    u32 temp_r9_2;
    u32 temp_r9_3;
    u32 temp_r9_4;
    u32 temp_r9_5;
    u32 var_ctr;
    u32 var_r8;
    u8 *var_r3;
    u8 *var_r7;
    u8 temp_r0_6;
    u8 temp_r0_7;
    u8 temp_r12_3;
    u8 temp_r3;
    u8 temp_r3_2;
    u8 temp_r3_3;
    u8 temp_r3_4;
    u8 temp_r3_5;

    var_r3 = arg0;
    sp8 = 1;
    var_r8 = 0;
    sp9 = 0x23;
    var_r7 = &sp9;
    spA = 0x45;
    spB = 0x67;
    spC = 0x89;
    spD = 0xAB;
    spE = 0xCD;
    spF = 0xEF;
    sp10 = 0xFE;
    sp11 = 0xDC;
    sp12 = 0xBA;
    sp13 = 0x98;
    sp14 = 0x76;
    sp15 = 0x54;
    sp16 = 0x32;
    sp17 = 0x10;
    if (arg1 > 0) {
        temp_r9 = arg1 - 8;
        if (arg1 > 8) {
            var_ctr = (u32) (temp_r9 + 7) >> 3U;
            if (temp_r9 > 0) {
                do {
                    temp_r11 = var_r8 >> 0x1FU;
                    temp_r0 = (var_r8 << 0x1C) - temp_r11;
                    temp_r10 = var_r8 + 1;
                    temp_r30 = ((temp_r0 << 4) | (temp_r0 >> 0x1CU)) + temp_r11;
                    temp_r29 = temp_r10 >> 0x1FU;
                    temp_r9_2 = (temp_r10 << 0x1C) - temp_r29;
                    temp_r0_2 = var_r8 + 2;
                    temp_r27 = var_r8 + 3;
                    (&sp8)[temp_r30] += M2C_FIELD(var_r3, u8 *, 0);
                    temp_r26 = ((temp_r9_2 << 4) | (temp_r9_2 >> 0x1CU)) + temp_r29;
                    temp_r29_2 = temp_r0_2 >> 0x1FU;
                    temp_r12 = var_r8 + 4;
                    temp_r11_2 = var_r8 + 5;
                    temp_r28 = temp_r27 >> 0x1FU;
                    temp_r27_2 = (temp_r0_2 << 0x1C) - temp_r29_2;
                    (&sp8)[temp_r26] += M2C_FIELD(var_r3, u8 *, 1);
                    temp_r0_3 = (temp_r27 << 0x1C) - temp_r28;
                    temp_r31 = ((temp_r27_2 << 4) | (temp_r27_2 >> 0x1CU)) + temp_r29_2;
                    temp_r27_3 = ((temp_r0_3 << 4) | (temp_r0_3 >> 0x1CU)) + temp_r28;
                    temp_r10_2 = var_r8 + 6;
                    (&sp8)[temp_r31] += M2C_FIELD(var_r3, u8 *, 2);
                    temp_r30_2 = temp_r12 >> 0x1FU;
                    temp_r0_4 = (temp_r12 << 0x1C);
                    temp_r0_4 -= temp_r30_2;
                    temp_r31_2 = temp_r11_2 >> 0x1FU;
                    temp_r29_3 = ((temp_r0_4 << 4) | (temp_r0_4 >> 0x1CU)) + temp_r30_2;
                    temp_r9_3 = var_r8 + 7;
                    temp_r12_2 = (temp_r11_2 << 0x1C) - temp_r31_2;
                    (&sp8)[temp_r27_3] += M2C_FIELD(var_r3, u8 *, 3);
                    temp_r31_3 = ((temp_r12_2 << 4) | (temp_r12_2 >> 0x1CU)) + temp_r31_2;
                    temp_r11_3 = temp_r10_2 >> 0x1FU;
                    temp_r10_3 = (temp_r10_2 << 0x1C) - temp_r11_3;
                    temp_r9_4 = temp_r9_3 >> 0x1FU;
                    (&sp8)[temp_r29_3] += M2C_FIELD(var_r3, u8 *, 4);
                    temp_r0_5 = (temp_r9_3 << 0x1C) - temp_r9_4;
                    temp_r11_4 = ((temp_r10_3 << 4) | (temp_r10_3 >> 0x1CU)) + temp_r11_3;
                    temp_r10_4 = ((temp_r0_5 << 4) | (temp_r0_5 >> 0x1CU)) + temp_r9_4;
                    temp_r12_3 = (&sp8)[temp_r31_3];
                    var_r8 += 8;
                    (&sp8)[temp_r31_3] = temp_r12_3 + M2C_FIELD(var_r3, u8 *, 5);
                    (&sp8)[temp_r11_4] += M2C_FIELD(var_r3, u8 *, 6);
                    temp_r0_6 = M2C_FIELD(var_r3, u8 *, 7);
                    var_r3 += 8;
                    (&sp8)[temp_r10_4] += temp_r0_6;
                    var_ctr -= 1;
                } while (var_ctr != 0);
            }
        }
        var_ctr_2 = arg1 - var_r8;
        if ((s32) var_r8 < arg1) {
            do {
                temp_r9_5 = var_r8 >> 0x1FU;
                temp_r4 = (var_r8 << 0x1C) - temp_r9_5;
                temp_r0_7 = *var_r3;
                temp_r4_2 = (temp_r4 << 4) | (temp_r4 >> 0x1CU);
                var_r8 += 1;
                temp_r9_6 = temp_r4_2 + temp_r9_5;
                var_r3 += 1;
                (&sp8)[temp_r9_6] += temp_r0_7;
                var_ctr_2 -= 1;
            } while (var_ctr_2 != 0);
        }
    }
    var_ctr_3 = 3;
    do {
        temp_r3 = M2C_FIELD(var_r7, u8 *, 0);
        if ((u8) M2C_FIELD(var_r7, u8 *, -1) == temp_r3) {
            M2C_FIELD(var_r7, u8 *, 0) = temp_r3 ^ 0xFF;
        }
        temp_r3_2 = M2C_FIELD(var_r7, u8 *, 1);
        if ((u8) M2C_FIELD(var_r7, u8 *, 0) == temp_r3_2) {
            M2C_FIELD(var_r7, u8 *, 1) = (u8) (temp_r3_2 ^ 0xFF);
        }
        temp_r3_3 = M2C_FIELD(var_r7, u8 *, 2);
        if ((u8) M2C_FIELD(var_r7, u8 *, 1) == temp_r3_3) {
            M2C_FIELD(var_r7, u8 *, 2) = (u8) (temp_r3_3 ^ 0xFF);
        }
        temp_r3_4 = M2C_FIELD(var_r7, u8 *, 3);
        if ((u8) M2C_FIELD(var_r7, u8 *, 2) == temp_r3_4) {
            M2C_FIELD(var_r7, u8 *, 3) = (u8) (temp_r3_4 ^ 0xFF);
        }
        temp_r3_5 = M2C_FIELD(var_r7, u8 *, 4);
        if ((u8) M2C_FIELD(var_r7, u8 *, 3) == temp_r3_5) {
            M2C_FIELD(var_r7, u8 *, 4) = (u8) (temp_r3_5 ^ 0xFF);
        }
        var_r7 += 5;
        var_ctr_3 -= 1;
    } while (var_ctr_3 != 0);
    /* draft: did not compile: memcpy(arg2, &sp8, 0x10); */
}

void fn_80145680() { } /* draft: stub */

s32 fn_80145820(s32 arg0, s32 arg1, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

void fn_80145B78() { } /* draft: stub */

#pragma push
#pragma optimize_for_size on
s32 fn_80145D18(void *arg0, s32 arg1, M2C_UNK arg_sp0) {
    M2C_UNK sp18;
    s8 sp17;
    s8 sp16;
    s8 sp15;
    s8 sp14;
    s8 sp13;
    s8 sp12;
    s8 sp11;
    s8 sp10;
    s8 spF;
    s8 spE;
    s8 spD;
    s8 spC;
    s8 spB;
    s8 spA;
    u8 sp9;
    u8 sp8;
    M2C_UNK *var_r5_2;
    s32 temp_r11_4;
    s32 temp_r26;
    s32 temp_r27_3;
    s32 temp_r28;
    s32 temp_r29;
    s32 temp_r29_2;
    s32 temp_r3;
    s32 temp_r3_3;
    s32 temp_r7;
    s32 temp_r8_4;
    s32 temp_r8_6;
    s32 temp_r9_4;
    s32 var_ctr_2;
    s32 var_ctr_3;
    s32 var_ctr_4;
    s32 var_r23;
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r0_4;
    u32 temp_r0_5;
    u32 temp_r10;
    u32 temp_r10_2;
    u32 temp_r11;
    u32 temp_r11_2;
    u32 temp_r11_3;
    u32 temp_r12;
    u32 temp_r12_2;
    u32 temp_r27;
    u32 temp_r27_2;
    u32 temp_r3_2;
    u32 temp_r7_2;
    u32 temp_r7_3;
    u32 temp_r7_4;
    u32 temp_r8;
    u32 temp_r8_2;
    u32 temp_r8_3;
    u32 temp_r8_5;
    u32 temp_r9;
    u32 temp_r9_2;
    u32 temp_r9_3;
    u32 var_ctr;
    u32 var_r4;
    u8 *var_r29;
    u8 *var_r5;
    u8 *var_r6;
    u8 temp_r0_6;
    u8 temp_r0_7;
    u8 temp_r10_3;
    u8 temp_r3_4;
    u8 temp_r3_5;
    u8 temp_r3_6;
    u8 temp_r3_7;
    u8 temp_r3_8;
    u8 temp_r4;
    u8 var_r3;
    void *var_r3_2;

    if (arg0 == NULL) {
        return -1;
    }
    var_r3 = M2C_FIELD(arg0, u8 *, 0xF);
    /* draft: did not compile: var_r29 = arg0 + 0x10; */
    var_r23 = 0x10;
loop_4:
    if (var_r23 < arg1) {
        temp_r4 = *var_r29;
        /* draft: did not compile: *var_r29 = fn_80145B78(var_r3, temp_r4); */
        var_r3 = temp_r4;
        var_r23 += 1;
        var_r29 += 1;
        goto loop_4;
    }
    sp8 = 1;
    /* draft: did not compile: var_r5 = arg0 + 0x10; */
    var_r6 = &sp9;
    sp9 = 0x23;
    var_r4 = 0;
    spA = 0x45;
    spB = 0x67;
    spC = 0x89;
    spD = 0xAB;
    spE = 0xCD;
    spF = 0xEF;
    sp10 = 0xFE;
    sp11 = 0xDC;
    sp12 = 0xBA;
    sp13 = 0x98;
    sp14 = 0x76;
    sp15 = 0x54;
    sp16 = 0x32;
    sp17 = 0x10;
    if ((arg1 - 0x10) > 0) {
        temp_r7 = arg1 - 0x18;
        if ((s32) (arg1 - 0x10) > 8) {
            var_ctr = (u32) (temp_r7 + 7) >> 3U;
            if (temp_r7 > 0) {
                do {
                    temp_r9 = var_r4 >> 0x1FU;
                    temp_r0 = (var_r4 << 0x1C) - temp_r9;
                    temp_r8 = var_r4 + 1;
                    temp_r28 = ((temp_r0 << 4) | (temp_r0 >> 0x1CU)) + temp_r9;
                    temp_r27 = temp_r8 >> 0x1FU;
                    temp_r7_2 = (temp_r8 << 0x1C) - temp_r27;
                    temp_r0_2 = var_r4 + 2;
                    temp_r11 = var_r4 + 3;
                    (&sp8)[temp_r28] += M2C_FIELD(var_r5, u8 *, 0);
                    temp_r26 = ((temp_r7_2 << 4) | (temp_r7_2 >> 0x1CU)) + temp_r27;
                    temp_r27_2 = temp_r0_2 >> 0x1FU;
                    temp_r12 = (temp_r0_2 << 0x1C) - temp_r27_2;
                    temp_r11_2 = temp_r11 >> 0x1FU;
                    (&sp8)[temp_r26] += M2C_FIELD(var_r5, u8 *, 1);
                    temp_r29 = ((temp_r12 << 4) | (temp_r12 >> 0x1CU)) + temp_r27_2;
                    temp_r0_3 = (temp_r11 << 0x1C) - temp_r11_2;
                    temp_r10 = var_r4 + 4;
                    temp_r27_3 = ((temp_r0_3 << 4) | (temp_r0_3 >> 0x1CU)) + temp_r11_2;
                    temp_r9_2 = var_r4 + 5;
                    temp_r12_2 = temp_r10 >> 0x1FU;
                    (&sp8)[temp_r29] += M2C_FIELD(var_r5, u8 *, 2);
                    temp_r0_4 = (temp_r10 << 0x1C) - temp_r12_2;
                    temp_r11_3 = temp_r9_2 >> 0x1FU;
                    temp_r29_2 = ((temp_r0_4 << 4) | (temp_r0_4 >> 0x1CU)) + temp_r12_2;
                    temp_r10_2 = (temp_r9_2 << 0x1C) - temp_r11_3;
                    temp_r8_2 = var_r4 + 6;
                    temp_r7_3 = var_r4 + 7;
                    (&sp8)[temp_r27_3] += M2C_FIELD(var_r5, u8 *, 3);
                    temp_r11_4 = ((temp_r10_2 << 4) | (temp_r10_2 >> 0x1CU)) + temp_r11_3;
                    temp_r9_3 = temp_r8_2 >> 0x1FU;
                    temp_r8_3 = (temp_r8_2 << 0x1C) - temp_r9_3;
                    temp_r7_4 = temp_r7_3 >> 0x1FU;
                    (&sp8)[temp_r29_2] += M2C_FIELD(var_r5, u8 *, 4);
                    temp_r0_5 = (temp_r7_3 << 0x1C) - temp_r7_4;
                    temp_r9_4 = ((temp_r8_3 << 4) | (temp_r8_3 >> 0x1CU)) + temp_r9_3;
                    temp_r8_4 = ((temp_r0_5 << 4) | (temp_r0_5 >> 0x1CU)) + temp_r7_4;
                    temp_r10_3 = (&sp8)[temp_r11_4];
                    var_r4 += 8;
                    (&sp8)[temp_r11_4] = temp_r10_3 + M2C_FIELD(var_r5, u8 *, 5);
                    (&sp8)[temp_r9_4] += M2C_FIELD(var_r5, u8 *, 6);
                    temp_r0_6 = M2C_FIELD(var_r5, u8 *, 7);
                    var_r5 += 8;
                    (&sp8)[temp_r8_4] += temp_r0_6;
                    var_ctr -= 1;
                } while (var_ctr != 0);
            }
        }
        temp_r3 = arg1 - 0x10;
        var_ctr_2 = temp_r3 - var_r4;
        if ((s32) var_r4 < temp_r3) {
            do {
                temp_r8_5 = var_r4 >> 0x1FU;
                temp_r3_2 = (var_r4 << 0x1C) - temp_r8_5;
                temp_r0_7 = *var_r5;
                temp_r3_3 = (temp_r3_2 << 4) | (temp_r3_2 >> 0x1CU);
                var_r4 += 1;
                temp_r8_6 = temp_r3_3 + temp_r8_5;
                var_r5 += 1;
                (&sp8)[temp_r8_6] += temp_r0_7;
                var_ctr_2 -= 1;
            } while (var_ctr_2 != 0);
        }
    }
    var_ctr_3 = 3;
    do {
        temp_r3_4 = M2C_FIELD(var_r6, u8 *, 0);
        if ((u8) M2C_FIELD(var_r6, u8 *, -1) == temp_r3_4) {
            M2C_FIELD(var_r6, u8 *, 0) = temp_r3_4 ^ 0xFF;
        }
        temp_r3_5 = M2C_FIELD(var_r6, u8 *, 1);
        if ((u8) M2C_FIELD(var_r6, u8 *, 0) == temp_r3_5) {
            M2C_FIELD(var_r6, u8 *, 1) = (u8) (temp_r3_5 ^ 0xFF);
        }
        temp_r3_6 = M2C_FIELD(var_r6, u8 *, 2);
        if ((u8) M2C_FIELD(var_r6, u8 *, 1) == temp_r3_6) {
            M2C_FIELD(var_r6, u8 *, 2) = (u8) (temp_r3_6 ^ 0xFF);
        }
        temp_r3_7 = M2C_FIELD(var_r6, u8 *, 3);
        if ((u8) M2C_FIELD(var_r6, u8 *, 2) == temp_r3_7) {
            M2C_FIELD(var_r6, u8 *, 3) = (u8) (temp_r3_7 ^ 0xFF);
        }
        temp_r3_8 = M2C_FIELD(var_r6, u8 *, 4);
        if ((u8) M2C_FIELD(var_r6, u8 *, 3) == temp_r3_8) {
            M2C_FIELD(var_r6, u8 *, 4) = (u8) (temp_r3_8 ^ 0xFF);
        }
        var_r6 += 5;
        var_ctr_3 -= 1;
    } while (var_ctr_3 != 0);
    memcpy(&sp18, &sp8, 0x10);
    var_r3_2 = arg0;
    var_r5_2 = &sp18;
    var_ctr_4 = 2;
loop_24:
    if ((u8) M2C_FIELD(var_r5_2, u8 *, 0) != (u8) M2C_FIELD(var_r3_2, u8 *, 0)) {
        return -1;
    }
    if ((u8) M2C_FIELD(var_r5_2, u8 *, 1) != (u8) M2C_FIELD(var_r3_2, u8 *, 1)) {
        return -1;
    }
    if ((u8) M2C_FIELD(var_r5_2, u8 *, 2) != (u8) M2C_FIELD(var_r3_2, u8 *, 2)) {
        return -1;
    }
    if ((u8) M2C_FIELD(var_r5_2, u8 *, 3) != (u8) M2C_FIELD(var_r3_2, u8 *, 3)) {
        return -1;
    }
    if ((u8) M2C_FIELD(var_r5_2, u8 *, 4) != (u8) M2C_FIELD(var_r3_2, u8 *, 4)) {
        return -1;
    }
    if ((u8) M2C_FIELD(var_r5_2, u8 *, 5) != (u8) M2C_FIELD(var_r3_2, u8 *, 5)) {
        return -1;
    }
    if ((u8) M2C_FIELD(var_r5_2, u8 *, 6) != (u8) M2C_FIELD(var_r3_2, u8 *, 6)) {
        return -1;
    }
    if ((u8) M2C_FIELD(var_r5_2, u8 *, 7) != (u8) M2C_FIELD(var_r3_2, u8 *, 7)) {
        return -1;
    }
    var_r5_2 += 8;
    /* draft: did not compile: var_r3_2 += 8; */
    var_ctr_4 -= 1;
    if (var_ctr_4 == 0) {
        return 0;
    }
    goto loop_24;
}
#pragma pop
