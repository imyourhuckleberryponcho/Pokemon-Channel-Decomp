/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

u8 fn_800916D4(s32);
M2C_UNK fn_80091710();
s32 fn_800919A8(s32);
extern s32 lbl_803506D0;
s32 MiniScore_GetScore(s32);
extern s32 lbl_803506D4;
M2C_UNK fn_8008065C();
s32 fn_800917CC();
M2C_UNK fn_80080738();
M2C_UNK fn_800806D4(s32, s32 *);
extern s32 lbl_803506D8;
s32 fn_80135F40();
M2C_UNK *get_up_vector_for_viewing_mtx(M2C_UNK);
M2C_UNK fn_80005868();
M2C_UNK fn_80005888();
M2C_UNK fn_800146F0(M2C_UNK *, M2C_UNK);
M2C_UNK fn_80014798(M2C_UNK *, s32, M2C_UNK *);
M2C_UNK *fn_800208F4(M2C_UNK *);
M2C_UNK fn_8002FCC0(M2C_UNK *, M2C_UNK);
M2C_UNK fn_8002FD20(M2C_UNK *);
M2C_UNK fn_80031578(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK *fn_80078A48(M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK *, s32, s32);
u8 fn_8007F61C(s32);
u8 fn_8007F65C(s32);
u8 fn_8007F680(s32);
s32 fn_8007FC40();
f32 fn_80080764(s32);
s32 fn_80080790(s32);
M2C_UNK __destroy_new_array(s32, M2C_UNK *);
s32 fn_8014AF48(M2C_UNK *, M2C_UNK *, M2C_UNK, s32);
extern M2C_UNK fn_8002F3CC;
extern M2C_UNK fn_80078CAC;
M2C_UNK fn_800058A8(s32 *);
M2C_UNK fn_80078F20();
s32 fn_80078F84(s32, M2C_UNK);
u8 fn_800790BC();
void *fn_8007B144();
M2C_UNK fn_80081AB8(s32);
M2C_UNK fn_80081F04(s32);
s32 fn_80081B7C(s32, s32, s32);
extern s32 lbl_803506E0;
extern s32 lbl_803506E4;
extern u8 lbl_803506E8;
M2C_UNK method_eraseMessages(s32, s32, s32);
M2C_UNK fn_80080698(s32, f32);
extern f32 lbl_80351A90;
s32 LookupFirstCallback(s32, s32, s32);
s32 LookupNextCallback();
void *fn_80016698();
M2C_UNK fn_8001FFF4(void **, s32);
void *fn_80027224();
M2C_UNK fn_800947B0();
M2C_UNK fn_8009C094(s32, void *);
s32 fn_800A6F74(void *, void *);

s32 MiniScore_GetScoreAlt(s32 arg0);
void MiniScore_GetName();
s32 MiniScore_GetRanks(void);
s32 MiniScore_SelectScene(s32 arg0);
void MiniScore_SelectGame(s32 arg0);
s32 scr_MiniScore_GetFirstGame(s32 arg0);
s32 scr_MiniScore_GetNextGame(s32 arg0);
s32 scr_MiniScore_SelectGame(s32 arg0);
s32 scr_MiniScore_SelectScene(s32 arg0);
s32 scr_MiniScore_GetRanks(s32 arg0);
s32 scr_MiniScore_GetScore(s32 arg0);
s32 scr_MiniScore_GetScoreAlt(s32 arg0);
s32 scr_MiniScore_GetName(s32 arg0);
s32 scr_MouReadButtons(s32 arg0);
s32 scr_MouReadX(s32 arg0);
s32 scr_MouReadY(s32 arg0);
s32 scr_CreateMessage(s32 arg0);
s32 fn_80092A2C(void *arg0, u8 arg1, M2C_UNK arg_sp0);
void scr_method_sendTo(void);
void scr_method_postTo(void);
s32 scr_method_dispatchMessage(s32 arg0);
s32 scr_method_getMessage(void *arg0);
s32 scr_method_eraseMessages(void *arg0);
s32 scr_method_getMsgSender(s32 arg0);
s32 scr_method_getMsgType(s32 arg0);
s32 scr_method_getMsgFlags(s32 arg0);
s32 scr_method_getMsgArgc(s32 arg0);
s32 scr_method_getMsgArg(s32 arg0);
s32 scr_method_destroyMessage(s32 arg0);
s32 scr_LookupFirstCallback(s32 arg0);
s32 scr_LookupNextCallback(s32 arg0);
s32 scr_CreateObjectIndeed(void *arg0);

s32 MiniScore_GetScoreAlt(s32 arg0) {
    fn_80091710();
    if (fn_800916D4(lbl_803506D0) == 0) {
        return -1;
    }
    if ((s32) lbl_803506D0 != 0) {
        return -1;
    }
    return fn_800919A8(arg0);
}

void MiniScore_GetName() { } /* draft: stub */

s32 MiniScore_GetRanks(void) {
    s32 var_r31;

    var_r31 = 1;
loop_2:
    if (MiniScore_GetScore(var_r31) >= 0) {
        var_r31 += 1;
        goto loop_2;
    }
    return var_r31 - 1;
}

s32 MiniScore_SelectScene(s32 arg0) {
    lbl_803506D4 = arg0 - 1;
    return MiniScore_GetRanks() > 0;
}

void MiniScore_SelectGame(s32 arg0) {
    lbl_803506D0 = arg0;
    fn_80091710();
    fn_800916D4(lbl_803506D0);
}

s32 scr_MiniScore_GetFirstGame(s32 arg0) {
    fn_80091710();
    lbl_803506D0 = -1;
    fn_8008065C(arg0, fn_800917CC());
    return 0;
}

s32 scr_MiniScore_GetNextGame(s32 arg0) {
    fn_8008065C(arg0, fn_800917CC());
    return 0;
}

s32 scr_MiniScore_SelectGame(s32 arg0) {
    fn_80080738();
    /* draft: did not compile: fn_8008065C(arg0, MiniScore_SelectGame((long)(0))); */
    return 0;
}

s32 scr_MiniScore_SelectScene(s32 arg0) {
    fn_80080738();
    fn_8008065C(arg0, MiniScore_SelectScene((long)(0)));
    return 0;
}

s32 scr_MiniScore_GetRanks(s32 arg0) {
    fn_8008065C(arg0, MiniScore_GetRanks());
    return 0;
}

s32 scr_MiniScore_GetScore(s32 arg0) {
    fn_80080738();
    fn_8008065C(arg0, MiniScore_GetScore((long)(0)));
    return 0;
}

s32 scr_MiniScore_GetScoreAlt(s32 arg0) {
    fn_80080738();
    fn_8008065C(arg0, MiniScore_GetScoreAlt((long)(0)));
    return 0;
}

s32 scr_MiniScore_GetName(s32 arg0) {
    fn_80080738();
    /* draft: did not compile: lbl_803506D8 = MiniScore_GetName(); */
    fn_800806D4(arg0, &lbl_803506D8);
    return 0;
}

s32 scr_MouReadButtons(s32 arg0) {
    u16 sp8;

    fn_80080738();
    if (fn_80135F40(&sp8) == 0) {
        fn_8008065C(arg0, sp8);
    } else {
        fn_8008065C(arg0, 0U);
    }
    return 0;
}

s32 scr_MouReadX(s32 arg0) {
    s8 spA;
    M2C_UNK sp8;

    fn_80080738();
    if (fn_80135F40(&sp8) == 0) {
        fn_8008065C(arg0, spA);
    } else {
        fn_8008065C(arg0, 0);
    }
    return 0;
}

s32 scr_MouReadY(s32 arg0) {
    s8 spB;
    M2C_UNK sp8;

    fn_80080738();
    if (fn_80135F40(&sp8) == 0) {
        fn_8008065C(arg0, spB);
    } else {
        fn_8008065C(arg0, 0);
    }
    return 0;
}

s32 scr_CreateMessage(s32 arg0) {
    M2C_UNK spC;
    M2C_UNK sp8;
    M2C_UNK *temp_r25;
    M2C_UNK *temp_r25_2;
    M2C_UNK *temp_r25_3;
    M2C_UNK *temp_r25_4;
    M2C_UNK *temp_r25_5;
    M2C_UNK *temp_r25_6;
    M2C_UNK *temp_r26_2;
    M2C_UNK *temp_r26_3;
    M2C_UNK *temp_r27;
    M2C_UNK *temp_r29;
    M2C_UNK *var_r0;
    M2C_UNK *var_r25;
    f32 temp_f31;
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    s32 temp_cr0_eq_3;
    s32 temp_cr0_eq_4;
    s32 temp_cr0_eq_5;
    s32 temp_cr0_eq_6;
    s32 temp_r26;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r27;
    s32 var_r28;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r0_3;
    void *var_r29;

    temp_r3 = fn_8007FC40();
    var_r28 = 0;
    if ((temp_r3 - 3) > 0) {
        temp_r26 = temp_r3 - 3;
        fn_80005868((temp_r26 * 8) + 0x10);
        temp_r3_2 = fn_8014AF48(&fn_80078CAC, &fn_8002F3CC, 8, temp_r26);
        var_r27 = temp_r3 - 4;
        var_r28 = temp_r3_2;
        /* draft: did not compile: var_r29 = temp_r3_2 + (var_r27 * 8); */
loop_62:
        if (var_r27 >= 0) {
            if (fn_8007F61C(arg0) != 0) {
                temp_r0 = M2C_FIELD(var_r29, u8 *, 4);
                /* draft: did not compile: temp_r26_2 = fn_80080738(arg0); */
                switch ((s32) temp_r0) {            /* switch 1; irregular */
                case 3:                             /* switch 1 */
                    fn_800146F0(M2C_FIELD(var_r29, M2C_UNK **, 0), 1);
                    break;
                case 4:                             /* switch 1 */
                    temp_r25 = M2C_FIELD(var_r29, M2C_UNK **, 0);
                    temp_cr0_eq = temp_r25 == NULL;
                    if (temp_cr0_eq == 0) {
                        if (temp_cr0_eq == 0) {
                            fn_8002FCC0(temp_r25, 0);
                        }
                        fn_80005888(temp_r25);
                    }
                    break;
                case 5:                             /* switch 1 */
                    temp_r25_2 = M2C_FIELD(var_r29, M2C_UNK **, 0);
                    temp_cr0_eq_2 = temp_r25_2 == NULL;
                    if (temp_cr0_eq_2 == 0) {
                        if ((temp_cr0_eq_2 == 0) && ((u32) M2C_FIELD(temp_r25_2, u32 *, 4) != 0U)) {
                            fn_8002FD20(temp_r25_2);
                        }
                        fn_80005888(temp_r25_2);
                    }
                    break;
                }
                M2C_FIELD(var_r29, u8 *, 4) = 1U;
                M2C_FIELD(var_r29, M2C_UNK **, 0) = temp_r26_2;
            } else if (fn_8007F65C(arg0) != 0) {
                temp_r0_2 = M2C_FIELD(var_r29, u8 *, 4);
                temp_f31 = fn_80080764(arg0);
                switch ((s32) temp_r0_2) {          /* switch 2; irregular */
                case 3:                             /* switch 2 */
                    fn_800146F0(M2C_FIELD(var_r29, M2C_UNK **, 0), 1);
                    break;
                case 4:                             /* switch 2 */
                    temp_r25_3 = M2C_FIELD(var_r29, M2C_UNK **, 0);
                    temp_cr0_eq_3 = temp_r25_3 == NULL;
                    if (temp_cr0_eq_3 == 0) {
                        if (temp_cr0_eq_3 == 0) {
                            fn_8002FCC0(temp_r25_3, 0);
                        }
                        fn_80005888(temp_r25_3);
                    }
                    break;
                case 5:                             /* switch 2 */
                    temp_r25_4 = M2C_FIELD(var_r29, M2C_UNK **, 0);
                    temp_cr0_eq_4 = temp_r25_4 == NULL;
                    if (temp_cr0_eq_4 == 0) {
                        if ((temp_cr0_eq_4 == 0) && ((u32) M2C_FIELD(temp_r25_4, u32 *, 4) != 0U)) {
                            fn_8002FD20(temp_r25_4);
                        }
                        fn_80005888(temp_r25_4);
                    }
                    break;
                }
                M2C_FIELD(var_r29, u8 *, 4) = 2U;
                /* draft: did not compile: M2C_FIELD(var_r29, M2C_UNK **, 0) = temp_f31; */
            } else if (fn_8007F680(arg0) != 0) {
                fn_80014798(&spC, fn_80080790(arg0), &sp8);
                temp_r0_3 = M2C_FIELD(var_r29, u8 *, 4);
                if (temp_r0_3 != 3) {
                    switch ((s32) temp_r0_3) {      /* switch 3; irregular */
                    case 3:                         /* switch 3 */
                        fn_800146F0(M2C_FIELD(var_r29, M2C_UNK **, 0), 1);
                        break;
                    case 4:                         /* switch 3 */
                        temp_r25_5 = M2C_FIELD(var_r29, M2C_UNK **, 0);
                        temp_cr0_eq_5 = temp_r25_5 == NULL;
                        if (temp_cr0_eq_5 == 0) {
                            if (temp_cr0_eq_5 == 0) {
                                fn_8002FCC0(temp_r25_5, 0);
                            }
                            fn_80005888(temp_r25_5);
                        }
                        break;
                    case 5:                         /* switch 3 */
                        temp_r25_6 = M2C_FIELD(var_r29, M2C_UNK **, 0);
                        temp_cr0_eq_6 = temp_r25_6 == NULL;
                        if (temp_cr0_eq_6 == 0) {
                            if ((temp_cr0_eq_6 == 0) && ((u32) M2C_FIELD(temp_r25_6, u32 *, 4) != 0U)) {
                                fn_8002FD20(temp_r25_6);
                            }
                            fn_80005888(temp_r25_6);
                        }
                        break;
                    }
                    M2C_FIELD(var_r29, u8 *, 4) = 3U;
                    var_r0 = get_up_vector_for_viewing_mtx(4);
                    if (var_r0 != NULL) {
                        var_r0 = fn_800208F4(&spC);
                    }
                    M2C_FIELD(var_r29, M2C_UNK **, 0) = var_r0;
                } else {
                    fn_80031578(M2C_FIELD(var_r29, M2C_UNK **, 0), &spC, 0, -1);
                }
                fn_800146F0(&spC, -1);
            }
            /* draft: did not compile: var_r29 -= 8; */
            var_r27 -= 1;
            goto loop_62;
        }
    }
    /* draft: did not compile: temp_r26_3 = fn_80080738(arg0); */
    /* draft: did not compile: temp_r27 = fn_80080738(arg0); */
    /* draft: did not compile: temp_r29 = fn_80080738(arg0); */
    var_r25 = get_up_vector_for_viewing_mtx(0x28);
    if (var_r25 != NULL) {
        var_r25 = fn_80078A48(1, temp_r29, temp_r27, temp_r26_3, temp_r3 - 3, var_r28);
    }
    __destroy_new_array(var_r28, &fn_8002F3CC);
    fn_8008065C(arg0, var_r25);
    return 0;
}

s32 fn_80092A2C(void *arg0, u8 arg1, M2C_UNK arg_sp0) {
    s32 *temp_r3;
    s32 *var_r29_2;
    s32 *var_r30;
    s32 temp_r25;
    s32 temp_r27;
    s32 var_r24;
    s32 var_r28;
    s32 var_r29;

    var_r28 = 0;
    temp_r27 = fn_8007FC40() - 1;
    if (temp_r27 > 0) {
        /* draft: did not compile: temp_r3 = fn_80005868(temp_r27 * 4); */
        var_r29 = temp_r27 - 1;
        var_r30 = temp_r3 + (var_r29 * 4);
loop_3:
        if (var_r29 >= 0) {
            *var_r30 = fn_80080738(arg0);
            var_r30 -= 4;
            var_r29 -= 1;
            goto loop_3;
        }
        temp_r25 = fn_80080738(arg0);
        if (fn_800790BC() != 0) {
            fn_80078F84(temp_r25, 1);
            var_r29_2 = temp_r3;
            var_r24 = 0;
loop_13:
            if (var_r24 < temp_r27) {
                if ((s32) *var_r29_2 == 0) {

                } else {
                    M2C_FIELD(M2C_FIELD(fn_8007B144(), void **, 0x20), M2C_UNK (**)(), 0x10)();
                }
                if (arg1 != 0) {
                    fn_80081F04(temp_r25);
                } else {
                    fn_80081AB8(temp_r25);
                }
                var_r28 += 1;
                var_r29_2 += 4;
                var_r24 += 1;
                goto loop_13;
            }
            fn_800058A8(temp_r3);
            if (fn_80078F84(temp_r25, -1) == 0) {
                fn_80078F20(temp_r25, 1);
            }
        }
    }
    fn_8008065C(arg0, var_r28);
    return 0;
}

void scr_method_sendTo(void) {
    /* draft: did not compile: fn_80092A2C(1); */
}

void scr_method_postTo(void) {
    fn_80092A2C((void *)(0), (unsigned char)(0), (long)(0));
}

s32 scr_method_dispatchMessage(s32 arg0) {
    void *temp_r31;

    /* draft: did not compile: temp_r31 = fn_80080738(); */
    if (fn_800790BC() != 0) {
        fn_80081F04((long)(arg0));
        if ((s32) M2C_FIELD(temp_r31, s32 *, 4) == 0) {
            fn_80078F20(temp_r31, 1);
        }
    }
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_getMessage(void *arg0) {
    s32 temp_r30;
    s32 var_r29;
    s32 var_r31;
    s32 var_r3;

    temp_r30 = fn_8007FC40() - 1;
    if ((s8) lbl_803506E8 == 0) {
        lbl_803506E4 = 0;
        lbl_803506E8 = 1;
    }
    if ((s32) lbl_803506E4 < temp_r30) {
        fn_80005888(lbl_803506E0);
        lbl_803506E0 = fn_80005868(temp_r30 * 4);
        lbl_803506E4 = temp_r30;
    }
    var_r29 = temp_r30 - 1;
    var_r31 = var_r29 * 4;
loop_6:
    if (var_r29 >= 0) {
        var_r29 -= 1;
        /* draft: did not compile: *(lbl_803506E0 + var_r31) = fn_80080738(arg0); */
        var_r31 -= 4;
        goto loop_6;
    }
    if (fn_80080738(arg0) == 0) {
        var_r3 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2E0), void **, 0x38), s32 *, 4);
    } else {
        var_r3 = M2C_FIELD(M2C_FIELD(fn_8007B144(), void **, 0x20), s32 (**)(), 0x10)();
    }
    fn_8008065C(arg0, fn_80081B7C(var_r3, lbl_803506E0, temp_r30));
    return 0;
}

s32 scr_method_eraseMessages(void *arg0) {
    s32 temp_r31;
    s32 var_r3;

    temp_r31 = fn_80080738();
    if (fn_80080738(arg0) == 0) {
        var_r3 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2E0), void **, 0x38), s32 *, 4);
    } else {
        var_r3 = M2C_FIELD(M2C_FIELD(fn_8007B144(), void **, 0x20), s32 (**)(), 0x10)();
    }
    method_eraseMessages(var_r3, temp_r31, temp_r31);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_getMsgSender(s32 arg0) {
    s32 *temp_r31;

    /* draft: did not compile: temp_r31 = fn_80080738(); */
    if (fn_800790BC() != 0) {
        fn_8008065C(arg0, *temp_r31);
    } else {
        fn_8008065C(arg0, 0);
    }
    return 0;
}

s32 scr_method_getMsgType(s32 arg0) {
    void *temp_r31;

    /* draft: did not compile: temp_r31 = fn_80080738(); */
    if (fn_800790BC() != 0) {
        fn_8008065C(arg0, M2C_FIELD(temp_r31, s32 *, 8));
    } else {
        fn_8008065C(arg0, 0);
    }
    return 0;
}

s32 scr_method_getMsgFlags(s32 arg0) {
    void *temp_r31;

    /* draft: did not compile: temp_r31 = fn_80080738(); */
    if (fn_800790BC() != 0) {
        fn_8008065C(arg0, M2C_FIELD(temp_r31, s32 *, 0xC));
    } else {
        fn_8008065C(arg0, 0);
    }
    return 0;
}

s32 scr_method_getMsgArgc(s32 arg0) {
    void *temp_r31;

    /* draft: did not compile: temp_r31 = fn_80080738(); */
    if (fn_800790BC() != 0) {
        fn_8008065C(arg0, M2C_FIELD(temp_r31, s32 *, 0x14));
    } else {
        fn_8008065C(arg0, 0);
    }
    return 0;
}

s32 scr_method_getMsgArg(s32 arg0) { return 0; } /* draft: stub */

s32 scr_method_destroyMessage(s32 arg0) {
    void *temp_r31;

    /* draft: did not compile: temp_r31 = fn_80080738(); */
    if ((fn_800790BC() != 0) && ((s32) M2C_FIELD(temp_r31, s32 *, 4) == 0)) {
        fn_80078F20(temp_r31, 1);
    }
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_LookupFirstCallback(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_80080738();
    fn_8008065C(arg0, LookupFirstCallback(arg0, fn_80080738(arg0), temp_r31));
    return 0;
}

s32 scr_LookupNextCallback(s32 arg0) {
    fn_8008065C(arg0, LookupNextCallback());
    return 0;
}

s32 scr_CreateObjectIndeed(void *arg0) {
    void *sp10;
    M2C_UNK spC;
    void *sp8;
    s32 temp_r3;
    s32 var_r29;
    void *temp_r31;
    void *temp_r3_2;
    void *temp_r5;
    void *var_r3;
    void *var_r4;
    void *sp14;

    temp_r3 = fn_80080738();
    temp_r31 = M2C_FIELD(arg0, void **, 0x2E0);
    if (temp_r3 == 0x19D) {
        var_r29 = fn_800A6F74(temp_r31, fn_80027224());
    } else if (temp_r3 == 0x19E) {
        var_r4 = get_up_vector_for_viewing_mtx(0x1F8);
        if (var_r4 != NULL) {
            var_r4 = fn_80016698();
        }
        M2C_FIELD(var_r4, s32 *, 0x5C) = 1;
        var_r29 = fn_800A6F74((void *)(temp_r31), (void *)(0));
    } else {
        fn_8001FFF4(&sp10, temp_r3);
        sp14 = sp10;
        if (sp10 != NULL) {
            M2C_FIELD(sp10, s32 *, 0) = (s32) (M2C_FIELD(sp10, s32 *, 0) + 1);
        }
        if (sp10 != NULL) {
            M2C_FIELD(sp10, s32 *, 0) = (s32) (M2C_FIELD(sp10, s32 *, 0) - 1);
            if (((s32) M2C_FIELD(sp10, s32 *, 0) == 0) && (sp10 != NULL)) {
                M2C_FIELD(M2C_FIELD(sp10, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
        }
        /* draft: did not compile: temp_r5 = arg0 + 0x2F8; */
        sp10 = NULL;
        var_r3 = M2C_FIELD(arg0, void **, 0x2FC);
loop_14:
        if (0 /* draft: did not compile */) {
            var_r3 = M2C_FIELD(var_r3, void **, 4);
            goto loop_14;
        }
        if (var_r3 != temp_r5) {
            sp8 = var_r3;
            /* draft: did not compile: fn_800947B0(&spC, arg0 + 0x2F4, &sp8); */
        }
        temp_r3_2 = M2C_FIELD(M2C_FIELD(sp14, void **, 4), void *(**)(void *), 0xC)(sp14);
        if (M2C_FIELD(temp_r3_2, s32 *, 8) & 0x2000) {
            fn_8009C094(M2C_FIELD(temp_r31, s32 *, 0x38), temp_r3_2);
            var_r29 = M2C_FIELD(temp_r3_2, s32 *, 0);
        } else {
            var_r29 = fn_800A6F74(temp_r31, temp_r3_2);
        }
        if (sp14 != NULL) {
            M2C_FIELD(sp14, s32 *, 0) = (s32) (M2C_FIELD(sp14, s32 *, 0) - 1);
            if (((s32) M2C_FIELD(sp14, s32 *, 0) == 0) && (sp14 != NULL)) {
                M2C_FIELD(M2C_FIELD(sp14, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
        }
        sp14 = NULL;
    }
    fn_8008065C(arg0, var_r29);
    return 0;
}
