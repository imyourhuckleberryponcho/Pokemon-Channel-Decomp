/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK OSDisableInterrupts();
M2C_UNK OSRestoreInterrupts(M2C_UNK *);
s32 fn_800DCB7C(s32, s32, void *);
s32 CARDClose(void *);
s32 fn_800DD678();
s32 fn_80139DA8(void *);
s32 fn_8013A4FC(void *, s32, s32, u8, s32, s32, s32);
s32 fn_80145D18(s32, s32);
s32 memcmp(s32, void *, s32);
extern M2C_UNK lbl_803477C0;
extern M2C_UNK lbl_803489C0;
extern s32 lbl_80350ED8;
extern s32 lbl_80350EEC;
extern s32 lbl_80350EF0;
extern s32 lbl_80350EF4;
s32 fn_800DD9F4();
s32 fn_8013A1DC(void *, s32 *, s32 *);
M2C_UNK fn_80145374(s32 *, u32, void *);

s32 fn_8014068C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0);
s32 fn_80141BF0(void *arg0, s32 *arg1, s32 *arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0);

s32 fn_8014068C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

s32 fn_80141BF0(void *arg0, s32 *arg1, s32 *arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0) {
    s32 spBC;
    void *sp9C;
    s32 sp98;
    u32 sp94;
    s32 sp90;
    s32 *sp8C;
    s32 sp88;
    s32 sp84;
    s32 sp7C;
    void *sp78;
    s32 sp74;
    s32 sp70;
    s32 sp6C;
    s32 sp68;
    s32 sp64;
    s32 sp60;
    void *sp54;
    s32 sp50;
    s32 *sp3C;
    s32 *sp38;
    u32 sp34;
    void *sp30;
    s32 sp2C;
    s32 *sp18;
    s32 *sp14;
    u32 sp10;
    void *spC;
    s32 sp8;
    s32 *temp_r23_7;
    s32 *temp_r25_2;
    s32 *temp_r28;
    s32 *temp_r28_2;
    s32 *temp_r3_10;
    s32 *temp_r3_11;
    s32 *temp_r3_6;
    s32 *temp_r3_7;
    s32 *temp_r3_9;
    s32 *temp_r4_2;
    s32 *var_r30;
    s32 temp_r0_4;
    s32 temp_r22;
    s32 temp_r22_2;
    s32 temp_r22_3;
    s32 temp_r22_4;
    s32 temp_r22_5;
    s32 temp_r22_7;
    s32 temp_r23;
    s32 temp_r23_2;
    s32 temp_r23_3;
    s32 temp_r23_4;
    s32 temp_r23_5;
    s32 temp_r23_6;
    s32 temp_r25;
    s32 temp_r26;
    s32 temp_r26_2;
    s32 temp_r26_3;
    s32 temp_r26_4;
    s32 temp_r28_3;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r3_5;
    s32 temp_r6_4;
    s32 var_r22;
    s32 var_r23;
    s32 var_r24;
    s32 var_r24_2;
    s32 var_r25_3;
    s32 var_r26_2;
    s32 var_r27;
    s32 var_r3;
    s32 var_r3_2;
    s32 var_r3_3;
    s32 var_r3_4;
    s32 var_r3_5;
    s32 var_r4;
    s32 var_r5;
    s32 var_r6;
    u32 temp_r21;
    u32 temp_r21_2;
    u32 temp_r22_6;
    u32 temp_r3_12;
    u32 temp_r3_8;
    u32 temp_r4;
    u32 temp_r4_3;
    u32 temp_r5;
    u32 temp_r5_2;
    u32 temp_r6;
    u32 temp_r6_2;
    u32 temp_r6_3;
    u32 temp_r6_5;
    u32 temp_r6_6;
    u32 temp_r7_10;
    u32 temp_r7_11;
    u32 temp_r7_2;
    u32 temp_r7_3;
    u32 temp_r7_4;
    u32 temp_r7_5;
    u32 temp_r7_6;
    u32 temp_r7_7;
    u32 temp_r7_8;
    u32 temp_r7_9;
    u32 var_r25;
    u32 var_r25_2;
    u32 var_r26;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r0_3;
    void *temp_r7;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x3E8);
    var_r30 = arg2;
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
    var_r3_5 = 0;
loop_15:
    if (var_r3_5 < 8) {
        /* draft: did not compile: temp_r7 = arg0 + var_r3_5; */
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
            var_r3_5 += 1;
            goto loop_15;
        }
    }
    if (var_r4 != 0) {
        var_r5 += 0x200;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (var_r6 + var_r5 + 0x40);
    if (arg3 == 0) {
        if (arg4 != 0) {
            var_r26 = 0U;
loop_34:
            temp_r4 = M2C_FIELD(arg0, u32 *, 8);
            if (var_r26 >= (u32) ((u32) (M2C_FIELD(arg0, s32 *, 0x24) + temp_r4 + 0x2F) / temp_r4)) {
                var_r3_4 = 0;
            } else {
                spC = arg0;
                sp8 = 0xA;
                sp14 = arg1;
                sp18 = var_r30;
                sp10 = var_r26;
                OSDisableInterrupts((unsigned long)(0), (unsigned long)(0));
                temp_r23 = lbl_80350EF0;
                temp_r25 = lbl_80350EF4;
                temp_r22 = *(&lbl_803477C0 + (lbl_80350EF0 * 0x24));
                OSRestoreInterrupts((long *)(0));
                if ((temp_r25 != 2) && ((s32) lbl_80350EEC == temp_r23) && ((temp_r25 != 0) || ((s32) lbl_80350EEC != temp_r23) || (temp_r22 != 0))) {
                    var_r3_4 = -0x109;
                } else {
                    temp_r7_2 = lbl_80350EEC + 1;
                    temp_r7_3 = temp_r7_2 >> 0x1FU;
                    temp_r6 = (temp_r7_2 << 0x19) - temp_r7_3;
                    temp_r3_6 = &lbl_803477C0 + (lbl_80350EEC * 0x24);
                    lbl_80350EEC = ((temp_r6 << 7) | (temp_r6 >> 0x19U)) + temp_r7_3;
                    memcpy((void *)(temp_r3_6), (const void *)(&sp8), (unsigned long)(0x24));
                    if (temp_r25 == 2) {
                        lbl_80350EF4 = 0;
                    }
                    var_r3_4 = 0;
                }
                if (var_r3_4 < 0) {

                } else {
                    var_r26 += 1;
                    goto loop_34;
                }
            }
            if (var_r3_4 < 0) {
                return var_r3_4;
            }
            sp9C = arg0;
            sp98 = 6;
            OSDisableInterrupts((unsigned long)(0), (unsigned long)(0));
            temp_r23_2 = lbl_80350EF0;
            temp_r26 = lbl_80350EF4;
            temp_r22_2 = *(&lbl_803477C0 + (lbl_80350EF0 * 0x24));
            OSRestoreInterrupts(&lbl_803477C0);
            if ((temp_r26 != 2) && ((s32) lbl_80350EEC == temp_r23_2) && ((temp_r26 != 0) || ((s32) lbl_80350EEC != temp_r23_2) || (temp_r22_2 != 0))) {
                var_r3_3 = -0x109;
            } else {
                temp_r7_4 = lbl_80350EEC + 1;
                temp_r7_5 = temp_r7_4 >> 0x1FU;
                temp_r6_2 = (temp_r7_4 << 0x19) - temp_r7_5;
                temp_r3_7 = &lbl_803477C0 + (lbl_80350EEC * 0x24);
                lbl_80350EEC = ((temp_r6_2 << 7) | (temp_r6_2 >> 0x19U)) + temp_r7_5;
                memcpy((void *)(temp_r3_7), (const void *)(&sp98), (unsigned long)(0x24));
                if (temp_r26 == 2) {
                    lbl_80350EF4 = 0;
                }
                var_r3_3 = 0;
            }
            if (var_r3_3 < 0) {
                return var_r3_3;
            }
            goto block_53;
        }
        temp_r3_5 = fn_8013A1DC(arg0, arg1, var_r30);
        if (temp_r3_5 < 0) {
            return temp_r3_5;
        }
        if (temp_r3_5 == 0) {
            return 1;
        }
        goto block_53;
    }
block_53:
    if (arg4 != 0) {
        var_r25 = 0;
loop_89:
        temp_r5 = M2C_FIELD(arg0, u32 *, 8);
        temp_r3_8 = (u32) (M2C_FIELD(arg0, s32 *, 0x24) + temp_r5 + 0x2F) / temp_r5;
        if (var_r25 >= temp_r3_8) {
            return 0;
        }
        if ((u32) (var_r25 + 1) == temp_r3_8) {
            if (arg3 != 0) {
                temp_r4_2 = M2C_FIELD(arg0, s32 **, 0);
                sp74 = 4;
                sp78 = arg0;
                sp84 = 0;
                sp88 = 0;
                sp8C = temp_r4_2;
                sp94 = temp_r5;
                sp90 = 0;
                sp7C = 0;
                OSDisableInterrupts(4, temp_r4_2);
                temp_r23_3 = lbl_80350EF0;
                temp_r26_2 = lbl_80350EF4;
                temp_r22_3 = *(&lbl_803477C0 + (lbl_80350EF0 * 0x24));
                OSRestoreInterrupts(&lbl_803477C0);
                if ((temp_r26_2 != 2) && ((s32) lbl_80350EEC == temp_r23_3) && ((temp_r26_2 != 0) || ((s32) lbl_80350EEC != temp_r23_3) || (temp_r22_3 != 0))) {
                    var_r3_2 = -0x109;
                } else {
                    temp_r7_6 = lbl_80350EEC + 1;
                    temp_r7_7 = temp_r7_6 >> 0x1FU;
                    temp_r6_3 = (temp_r7_6 << 0x19) - temp_r7_7;
                    temp_r3_9 = &lbl_803477C0 + (lbl_80350EEC * 0x24);
                    lbl_80350EEC = ((temp_r6_3 << 7) | (temp_r6_3 >> 0x19U)) + temp_r7_7;
                    memcpy((void *)(temp_r3_9), (const void *)(&sp74), (unsigned long)(0x24));
                    if (temp_r26_2 == 2) {
                        lbl_80350EF4 = 0;
                    }
                    var_r3_2 = 0;
                }
            } else {
                sp54 = arg0;
                temp_r6_4 = M2C_FIELD(arg0, s32 *, 0x68) > 0;
                sp50 = 2;
                sp60 = -1;
                sp64 = 0;
                sp68 = 0;
                sp70 = temp_r6_4;
                sp6C = var_r25 * temp_r5;
                OSDisableInterrupts(0, (s32 *)-1, 2, temp_r6_4);
                temp_r23_4 = lbl_80350EF0;
                temp_r26_3 = lbl_80350EF4;
                temp_r22_4 = *(&lbl_803477C0 + (lbl_80350EF0 * 0x24));
                OSRestoreInterrupts(&lbl_803477C0);
                if ((temp_r26_3 != 2) && ((s32) lbl_80350EEC == temp_r23_4) && ((temp_r26_3 != 0) || ((s32) lbl_80350EEC != temp_r23_4) || (temp_r22_4 != 0))) {
                    var_r3_2 = -0x109;
                } else {
                    temp_r7_8 = lbl_80350EEC + 1;
                    temp_r7_9 = temp_r7_8 >> 0x1FU;
                    temp_r6_5 = (temp_r7_8 << 0x19) - temp_r7_9;
                    temp_r3_10 = &lbl_803477C0 + (lbl_80350EEC * 0x24);
                    lbl_80350EEC = ((temp_r6_5 << 7) | (temp_r6_5 >> 0x19U)) + temp_r7_9;
                    memcpy((void *)(temp_r3_10), (const void *)(&sp50), (unsigned long)(0x24));
                    if (temp_r26_3 == 2) {
                        lbl_80350EF4 = 0;
                    }
                    var_r3_2 = 0;
                }
            }
            if (var_r3_2 < 0) {
                return var_r3_2;
            }
            goto block_77;
        }
block_77:
        sp30 = arg0;
        sp2C = 9;
        sp34 = var_r25;
        sp38 = arg1;
        sp3C = var_r30;
        OSDisableInterrupts();
        temp_r23_5 = lbl_80350EF0;
        temp_r26_4 = lbl_80350EF4;
        temp_r22_5 = *(&lbl_803477C0 + (lbl_80350EF0 * 0x24));
        OSRestoreInterrupts((long *)(0));
        if ((temp_r26_4 != 2) && ((s32) lbl_80350EEC == temp_r23_5) && ((temp_r26_4 != 0) || ((s32) lbl_80350EEC != temp_r23_5) || (temp_r22_5 != 0))) {
            var_r3 = -0x109;
        } else {
            temp_r7_10 = lbl_80350EEC + 1;
            temp_r7_11 = temp_r7_10 >> 0x1FU;
            temp_r6_6 = (temp_r7_10 << 0x19) - temp_r7_11;
            temp_r3_11 = &lbl_803477C0 + (lbl_80350EEC * 0x24);
            lbl_80350EEC = ((temp_r6_6 << 7) | (temp_r6_6 >> 0x19U)) + temp_r7_11;
            memcpy((void *)(temp_r3_11), (const void *)(&sp2C), (unsigned long)(0x24));
            if (temp_r26_4 == 2) {
                lbl_80350EF4 = 0;
            }
            var_r3 = 0;
        }
        if (var_r3 < 0) {
            return var_r3;
        }
        var_r25 += 1;
        goto loop_89;
    }
    temp_r5_2 = M2C_FIELD(arg0, u32 *, 8);
    if ((u32) (M2C_FIELD(arg0, s32 *, 0x24) + 0x30) < temp_r5_2) {
        if (arg3 != 0) {
            memset((void *)(M2C_FIELD(arg0, s32 **, 0)), (int)(0), (unsigned long)(0));
            goto block_99;
        }
        temp_r25_2 = M2C_FIELD(arg0, s32 **, 0);
        var_r24 = 0;
loop_95:
        /* draft: did not compile: temp_r3_4 = fn_800DD678(arg0 + 0xC, temp_r25_2, temp_r5_2, 0); */
        if (temp_r3_4 == -1) {
            var_r24 += 1;
            if (var_r24 < 0xA) {
                goto loop_95;
            }
        }
        if (temp_r3_4 < 0) {
            return temp_r3_4;
        }
        goto block_99;
    }
block_99:
    /* draft: did not compile: memcpy(M2C_FIELD(arg0, s32 **, 0), arg0 + 0x3A8, 0x40); */
    temp_r0_3 = M2C_FIELD(arg0, u8 *, 0x3E8);
    var_r25_2 = 0x40;
    switch ((s32) temp_r0_3) {                      /* switch 3; irregular */
    case 2:                                         /* switch 3 */
        memcpy(M2C_FIELD(arg0, s32 **, 0) + 0x40, arg1, 0x1800);
        var_r25_2 = 0x1840;
        break;
    case 1:                                         /* switch 3 */
        memcpy(M2C_FIELD(arg0, s32 **, 0) + 0x40, arg1, 0xE00);
        var_r25_2 = 0xE40;
        break;
    }
    memset(&spBC, 0, 0x30U);
    var_r27 = 0;
    var_r24_2 = 0;
    var_r26_2 = M2C_FIELD(arg0, s32 *, 0x24) - var_r25_2;
loop_126:
    if (var_r26_2 < 0) {
        return 0;
    }
    temp_r3_12 = M2C_FIELD(arg0, u32 *, 8);
    if ((u32) (var_r25_2 + var_r26_2) > temp_r3_12) {
        memcpy(M2C_FIELD(arg0, s32 **, 0) + var_r25_2, var_r30, temp_r3_12 - var_r25_2);
        temp_r4_3 = M2C_FIELD(arg0, u32 *, 8);
        temp_r0_4 = temp_r4_3 - var_r25_2;
        var_r30 += temp_r0_4;
        var_r26_2 -= temp_r0_4;
        fn_80145374(M2C_FIELD(arg0, s32 **, 0), temp_r4_3, &spBC + var_r24_2);
        temp_r22_6 = M2C_FIELD(arg0, u32 *, 8);
        var_r25_3 = 0;
        temp_r28 = M2C_FIELD(arg0, s32 **, 0);
        temp_r23_6 = temp_r22_6 * var_r27;
loop_108:
        /* draft: did not compile: temp_r3_3 = fn_800DD9F4(arg0 + 0xC, temp_r28, temp_r22_6, temp_r23_6); */
        if (temp_r3_3 == -1) {
            var_r25_3 += 1;
            if (var_r25_3 < 0xA) {
                goto loop_108;
            }
        }
        if (temp_r3_3 < 0) {
            return temp_r3_3;
        }
        var_r25_2 = 0;
        var_r27 += 1;
        var_r24_2 += 0x10;
        if ((s32) (var_r26_2 + 0x30) < (s32) M2C_FIELD(arg0, s32 *, 0x24)) {
            if (arg3 != 0) {
                memset(M2C_FIELD(arg0, s32 **, 0), 0, M2C_FIELD(arg0, u32 *, 8));
                goto loop_126;
            }
            temp_r21 = M2C_FIELD(arg0, u32 *, 8);
            var_r23 = 0;
            temp_r28_2 = M2C_FIELD(arg0, s32 **, 0);
            temp_r22_7 = temp_r21 * var_r27;
loop_116:
            /* draft: did not compile: temp_r3_2 = fn_800DD678(arg0 + 0xC, temp_r28_2, temp_r21, temp_r22_7); */
            if (temp_r3_2 == -1) {
                var_r23 += 1;
                if (var_r23 < 0xA) {
                    goto loop_116;
                }
            }
            if (temp_r3_2 < 0) {
                return temp_r3_2;
            }
            goto loop_126;
        }
        goto loop_126;
    }
    memcpy(M2C_FIELD(arg0, s32 **, 0) + var_r25_2, var_r30, var_r26_2);
    var_r25_2 += var_r26_2;
    fn_80145374(M2C_FIELD(arg0, s32 **, 0), var_r25_2, &spBC + var_r24_2);
    memcpy(M2C_FIELD(arg0, s32 **, 0) + var_r25_2, &spBC, 0x30);
    temp_r21_2 = M2C_FIELD(arg0, u32 *, 8);
    var_r26_2 = -1;
    temp_r23_7 = M2C_FIELD(arg0, s32 **, 0);
    var_r22 = 0;
    temp_r28_3 = temp_r21_2 * var_r27;
loop_121:
    /* draft: did not compile: temp_r3 = fn_800DD9F4(arg0 + 0xC, temp_r23_7, temp_r21_2, temp_r28_3); */
    if (temp_r3 == -1) {
        var_r22 += 1;
        if (var_r22 < 0xA) {
            goto loop_121;
        }
    }
    if (temp_r3 < 0) {
        return temp_r3;
    }
    var_r27 += 1;
    var_r24_2 += 0x10;
    goto loop_126;
}
