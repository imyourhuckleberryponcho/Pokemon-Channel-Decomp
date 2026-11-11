/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

void *get_up_vector_for_viewing_mtx();
M2C_UNK fn_80005868(s32);
M2C_UNK fn_80005888();
M2C_UNK fn_800146F0(void *, M2C_UNK);
void *fn_800208F4(f32);
M2C_UNK fn_8002FA14(s32, s32, u8 *);
M2C_UNK fn_8002FCC0(void *, M2C_UNK);
M2C_UNK fn_8002FD20(void *);
M2C_UNK fn_8002FEA4(f32);
s32 fn_8014AF48();
extern M2C_UNK fn_8002F3CC;
extern M2C_UNK fn_80078CAC;
M2C_UNK __destroy_new_array();
extern s32 lbl_80350654;
extern u32 lbl_8034EB28;
extern void *lbl_80350650;
extern u32 lbl_80350658;
s32 fn_80078A48();
M2C_UNK fn_80081AB8();
void *fn_8007B144();
M2C_UNK fn_80081F04(s32, M2C_UNK *);
M2C_UNK fn_80020A10();
extern M2C_UNK lbl_80221B10;
extern M2C_UNK lbl_80223D70;
M2C_UNK fn_8002FDB4(M2C_UNK *, M2C_UNK);
M2C_UNK fn_8007A934(void **, void *, M2C_UNK *);
M2C_UNK fn_80021078(u32, s32);
M2C_UNK fn_8002FD8C(void *, s32);

void *fn_80078CB8(void *arg0, s32 arg1, void *arg2, M2C_UNK arg_sp0);
void *fn_80078F20(void *arg0, s16 arg1);
s32 fn_80078F84(void *arg0, s32 arg1);
s32 fn_80078FAC(void);
void fn_80078FCC(u32 arg0);
void fn_80079010(void);
s32 fn_800790BC(u32 arg0);
void fn_80079100(void *arg0);
void fn_8007914C(void *arg0);
void fn_8007918C(void *arg0);
void fn_800791B0(void *arg0, s32 arg1, void *arg2);
void fn_800792BC(void);
void fn_800792DC(void *arg0, s32 arg1, void *arg2, void *arg3);
void fn_80079498(s32 arg1);
void fn_800794C0(s32 arg1);
void fn_800794E8(s32 arg1);
void fn_80079510(void *arg1);
void fn_8007963C(void);
void fn_8007965C(void *arg0, s32 arg1);
void fn_800796D0(void *arg0, void *arg1, void *arg2, M2C_UNK arg_sp0);
void fn_80079B1C(void *arg0, void *arg1, void *arg2);
void fn_80079CCC(void *arg0);
void fn_80079D2C(s32 arg0, void *arg1, void *arg2);
void fn_80079EDC(s32 arg0, void *arg1);
void fn_80079FDC(void *arg0, u8 *arg1);
void *fn_80079FFC(void *arg0, s16 arg1);
void method_setProperty(void *arg0, s32 arg1, void *arg2);
void *fn_8007A404(void *arg0, s32 *arg1, void *arg2);
s32 fn_8007A5D0(void *arg0, s32 arg1);
s32 method_eraseProperty(void *arg0, s32 arg1);
void fn_8007A844(void **arg0, void *arg1, s32 *arg2);
void AErase(void *arg0, u32 *arg1);

void *fn_80078CB8(void *arg0, s32 arg1, void *arg2, M2C_UNK arg_sp0) { } /* draft: stub */

void *fn_80078F20(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        __destroy_new_array(M2C_FIELD(arg0, s32 *, 0x18), &fn_8002F3CC);
        fn_8007914C(arg0);
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

s32 fn_80078F84(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + arg1);
    if ((s32) M2C_FIELD(arg0, s32 *, 4) < 0) {
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    return M2C_FIELD(arg0, s32 *, 4);
}

s32 fn_80078FAC(void) {
    return lbl_80350654 > 0x400;
}

void fn_80078FCC(u32 arg0) {
    void *var_r4;

    if (((u32) lbl_8034EB28 <= arg0) && (arg0 <= (u32) lbl_80350658)) {
        var_r4 = lbl_80350650;
loop_6:
        if (var_r4 == NULL) {
            return;
        }
        if (0 /* draft: did not compile */) {
            M2C_FIELD(var_r4, s8 *, 0x1C) = 1;
            return;
        }
        var_r4 = M2C_FIELD(var_r4, void **, 0x24);
        goto loop_6;
    }
}

void fn_80079010(void) {
    void *temp_r31;
    void *var_r3;

    lbl_80350658 = NULL;
    var_r3 = lbl_80350650;
    /* draft: did not compile: lbl_8034EB28 = (void *)-1U; */
loop_11:
    if (var_r3 != NULL) {
        temp_r31 = M2C_FIELD(var_r3, void **, 0x24);
        if (((u8) M2C_FIELD(var_r3, u8 *, 0x1C) == 0) && ((s32) M2C_FIELD(var_r3, s32 *, 4) == 0) && ((u8) M2C_FIELD(var_r3, u8 *, 0x1D) != 0)) {
            /* draft: did not compile: fn_80078F20(1); */
        } else {
            if (var_r3 < (void *) lbl_8034EB28) {
                /* draft: did not compile: lbl_8034EB28 = var_r3; */
            }
            if ((void *) lbl_80350658 < var_r3) {
                /* draft: did not compile: lbl_80350658 = var_r3; */
            }
            M2C_FIELD(var_r3, u8 *, 0x1C) = 0U;
        }
        var_r3 = temp_r31;
        goto loop_11;
    }
    lbl_80350654 = 0;
}

s32 fn_800790BC(u32 arg0) {
    void *var_r4;

    if (((u32) lbl_8034EB28 <= arg0) && (arg0 <= (u32) lbl_80350658)) {
        var_r4 = lbl_80350650;
loop_6:
        if (var_r4 == NULL) {
            /* Duplicate return node #7. Try simplifying control flow for better match */
            return 0;
        }
        if (0 /* draft: did not compile */) {
            return 1;
        }
        var_r4 = M2C_FIELD(var_r4, void **, 0x24);
        goto loop_6;
    }
    return 0;
}

void fn_80079100(void *arg0) {
    void *temp_r4;

    M2C_FIELD(arg0, void **, 0x24) = (void *) lbl_80350650;
    temp_r4 = M2C_FIELD(arg0, void **, 0x24);
    if (temp_r4 != NULL) {
        M2C_FIELD(temp_r4, void **, 0x20) = arg0;
    }
    lbl_80350650 = arg0;
    if (arg0 < (void *) lbl_8034EB28) {
        /* draft: did not compile: lbl_8034EB28 = arg0; */
    }
    if ((void *) lbl_80350658 < arg0) {
        /* draft: did not compile: lbl_80350658 = arg0; */
    }
    lbl_80350654 += 1;
}

void fn_8007914C(void *arg0) {
    void *temp_r4;
    void *temp_r4_2;

    temp_r4 = M2C_FIELD(arg0, void **, 0x20);
    if (temp_r4 != NULL) {
        M2C_FIELD(temp_r4, void **, 0x24) = (void *) M2C_FIELD(arg0, void **, 0x24);
    }
    temp_r4_2 = M2C_FIELD(arg0, void **, 0x24);
    if (temp_r4_2 != NULL) {
        M2C_FIELD(temp_r4_2, void **, 0x20) = (void *) M2C_FIELD(arg0, void **, 0x20);
    }
    if (arg0 == (void *) lbl_80350650) {
        lbl_80350650 = M2C_FIELD(arg0, void **, 0x24);
    }
}

void fn_8007918C(void *arg0) {
    /* draft: did not compile: fn_800791B0(M2C_FIELD(arg0, s32 *, 0x38)); */
}

void fn_800791B0(void *arg0, s32 arg1, void *arg2) {
    u8 spC;
    void *sp8;
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    u8 temp_r31;
    s32 var_r4;

    temp_r31 = M2C_FIELD(arg0, s32 *, 4);
    spC = 1;
    sp8 = arg2;
    /* draft: did not compile: var_r4 = get_up_vector_for_viewing_mtx(0x28); */
    if (var_r4 != 0) {
        var_r4 = fn_80078A48(1, -1, arg1, 0, 1, &sp8);
    }
    fn_80081AB8(temp_r31, var_r4);
    switch ((s32) spC) {                            /* irregular */
    case 3:
        fn_800146F0(sp8, 1);
        break;
    case 4:
        temp_cr0_eq = sp8 == NULL;
        if (temp_cr0_eq == 0) {
            if (temp_cr0_eq == 0) {
                fn_8002FCC0(sp8, 0);
            }
            fn_80005888(sp8);
        }
        break;
    case 5:
        temp_cr0_eq_2 = sp8 == NULL;
        if (temp_cr0_eq_2 == 0) {
            if ((temp_cr0_eq_2 == 0) && ((u32) M2C_FIELD(sp8, u32 *, 4) != 0U)) {
                fn_8002FD20(sp8);
            }
            fn_80005888(sp8);
        }
        break;
    }
    spC = 0;
}

void fn_800792BC(void) {
    fn_800791B0((void *)(0), (long)(0), (void *)(0));
}

void fn_800792DC(void *arg0, s32 arg1, void *arg2, void *arg3) {
    u8 sp14;
    void *sp10;
    u8 spC;
    void *sp8;
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    s32 temp_cr0_eq_3;
    s32 temp_cr0_eq_4;
    u8 temp_r31;
    s32 var_r4;

    temp_r31 = M2C_FIELD(arg0, s32 *, 4);
    spC = 1;
    sp8 = arg2;
    sp14 = 1;
    sp10 = arg3;
    /* draft: did not compile: var_r4 = get_up_vector_for_viewing_mtx(0x28); */
    var_r4 = var_r4 == 0 ? var_r4 : fn_80078A48(1, -1, arg1, 0, 2, &sp8);
    fn_80081AB8(temp_r31, var_r4);
    if (&sp10 != NULL) {
        switch ((s32) sp14) {                       /* switch 1; irregular */
        case 3:                                     /* switch 1 */
            fn_800146F0(sp10, 1);
            break;
        case 4:                                     /* switch 1 */
            temp_cr0_eq = sp10 == NULL;
            if (temp_cr0_eq == 0) {
                if (temp_cr0_eq == 0) {
                    fn_8002FCC0(sp10, 0);
                }
                fn_80005888(sp10);
            }
            break;
        case 5:                                     /* switch 1 */
            temp_cr0_eq_2 = sp10 == NULL;
            if (temp_cr0_eq_2 == 0) {
                if ((temp_cr0_eq_2 == 0) && ((u32) M2C_FIELD(sp10, u32 *, 4) != 0U)) {
                    fn_8002FD20(sp10);
                }
                fn_80005888(sp10);
            }
            break;
        }
        sp14 = 0;
    }
    switch ((s32) spC) {                            /* switch 2; irregular */
    case 3:                                         /* switch 2 */
        fn_800146F0(sp8, 1);
        break;
    case 4:                                         /* switch 2 */
        temp_cr0_eq_3 = sp8 == NULL;
        if (temp_cr0_eq_3 == 0) {
            if (temp_cr0_eq_3 == 0) {
                fn_8002FCC0(sp8, 0);
            }
            fn_80005888(sp8);
        }
        break;
    case 5:                                         /* switch 2 */
        temp_cr0_eq_4 = sp8 == NULL;
        if (temp_cr0_eq_4 == 0) {
            if ((temp_cr0_eq_4 == 0) && ((u32) M2C_FIELD(sp8, u32 *, 4) != 0U)) {
                fn_8002FD20(sp8);
            }
            fn_80005888(sp8);
        }
        break;
    }
    spC = 0;
}

void fn_80079498(s32 arg1) {
    /* draft: did not compile: fn_8007918C(9, arg1); */
}

void fn_800794C0(s32 arg1) {
    /* draft: did not compile: fn_8007918C(0xB, arg1); */
}

void fn_800794E8(s32 arg1) {
    /* draft: did not compile: fn_8007918C(0xA, arg1); */
}

void fn_80079510(void *arg1) {
    M2C_UNK sp10;
    u8 spC;
    void *sp8;
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    s32 temp_r3_2;
    void *temp_r3;

    temp_r3 = fn_8007B144();
    if (temp_r3 != NULL) {
        temp_r3_2 = M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), s32 (**)(), 0x10)();
        if (temp_r3_2 != 0) {
            sp8 = arg1;
            spC = 1;
            fn_80078A48(&sp10, 0, -1, 0x10, 0, 1, &sp8);
            fn_80081F04(temp_r3_2, &sp10);
            fn_80078F20(&sp10, -1);
            switch ((s32) spC) {                    /* irregular */
            case 3:
                fn_800146F0(sp8, 1);
                break;
            case 4:
                temp_cr0_eq = sp8 == NULL;
                if (temp_cr0_eq == 0) {
                    if (temp_cr0_eq == 0) {
                        fn_8002FCC0(sp8, 0);
                    }
                    fn_80005888(sp8);
                }
                break;
            case 5:
                temp_cr0_eq_2 = sp8 == NULL;
                if (temp_cr0_eq_2 == 0) {
                    if ((temp_cr0_eq_2 == 0) && ((u32) M2C_FIELD(sp8, u32 *, 4) != 0U)) {
                        fn_8002FD20(sp8);
                    }
                    fn_80005888(sp8);
                }
                break;
            }
            spC = 0;
        }
    }
}

void fn_8007963C(void) {
    fn_800791B0((void *)(0), (long)(0), (void *)(0));
}

#pragma push
#pragma dont_inline on
void fn_8007965C(void *arg0, s32 arg1) {
    M2C_UNK sp8;
    s32 temp_r31;

    temp_r31 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 (**)(), 0x10)();
    fn_80078A48(&sp8, 0, -1, arg1, 0, 0, 0);
    fn_80081F04(temp_r31, &sp8);
    fn_80078F20(&sp8, -1);
}
#pragma pop

void fn_800796D0(void *arg0, void *arg1, void *arg2, M2C_UNK arg_sp0) {
    void *sp10;
    M2C_UNK spC;
    M2C_UNK sp8;
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_10;
    s32 temp_cr0_eq_2;
    s32 temp_cr0_eq_3;
    s32 temp_cr0_eq_4;
    s32 temp_cr0_eq_5;
    s32 temp_cr0_eq_6;
    s32 temp_cr0_eq_7;
    s32 temp_cr0_eq_8;
    s32 temp_cr0_eq_9;
    s32 temp_r28;
    s32 temp_r30;
    s32 var_r27;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r0_3;
    u8 temp_r0_4;
    u8 temp_r0_5;
    void *temp_r24;
    void *temp_r24_2;
    void *temp_r24_3;
    void *temp_r24_4;
    void *temp_r24_5;
    void *temp_r24_6;
    void *temp_r24_7;
    void *temp_r24_8;
    void *temp_r25;
    void *temp_r26;
    void *temp_r27;
    void *temp_r27_2;
    void *temp_r27_3;
    void *temp_r31;
    void *temp_r31_2;
    void *temp_r3;
    void *temp_r3_2;
    void *var_r27_2;
    void *var_r31;
    void *var_r4;

    temp_r30 = M2C_FIELD(arg0, s32 *, 4);
    temp_r0 = M2C_FIELD(arg2, u8 *, 8);
    if (temp_r0 != 5) {
        switch ((s32) temp_r0) {                    /* switch 1; irregular */
        case 3:                                     /* switch 1 */
            fn_800146F0(M2C_FIELD(arg2, void **, 4), 1);
            break;
        case 4:                                     /* switch 1 */
            temp_r27 = M2C_FIELD(arg2, void **, 4);
            temp_cr0_eq = temp_r27 == NULL;
            if (temp_cr0_eq == 0) {
                if (temp_cr0_eq == 0) {
                    fn_8002FCC0(temp_r27, 0);
                }
                fn_80005888(temp_r27);
            }
            break;
        case 5:                                     /* switch 1 */
            temp_r27_2 = M2C_FIELD(arg2, void **, 4);
            temp_cr0_eq_2 = temp_r27_2 == NULL;
            if (temp_cr0_eq_2 == 0) {
                if ((temp_cr0_eq_2 == 0) && ((u32) M2C_FIELD(temp_r27_2, u32 *, 4) != 0U)) {
                    fn_8002FD20(temp_r27_2);
                }
                fn_80005888(temp_r27_2);
            }
            break;
        }
        M2C_FIELD(arg2, u8 *, 8) = 5U;
        temp_r3 = get_up_vector_for_viewing_mtx(0x10);
        if (temp_r3 != NULL) {
            /* draft: did not compile: fn_80079FDC(&sp8, &spC); */
        }
        M2C_FIELD(arg2, void **, 4) = temp_r3;
    }
    temp_r31 = M2C_FIELD(arg2, void **, 4);
    if (temp_r31 != NULL) {
        var_r27 = M2C_FIELD(temp_r31, s32 *, 0);
    } else {
        var_r27 = 0;
    }
    temp_r28 = (var_r27 * 2) + 2;
    fn_80005868((temp_r28 * 8) + 0x10);
    /* draft: did not compile: temp_r3_2 = fn_8014AF48(&fn_80078CAC, &fn_8002F3CC, 8, temp_r28); */
    temp_r0_2 = M2C_FIELD(temp_r3_2, u8 *, 4);
    switch ((s32) temp_r0_2) {                      /* switch 2; irregular */
    case 3:                                         /* switch 2 */
        fn_800146F0(M2C_FIELD(temp_r3_2, void **, 0), 1);
        break;
    case 4:                                         /* switch 2 */
        temp_r24 = M2C_FIELD(temp_r3_2, void **, 0);
        temp_cr0_eq_3 = temp_r24 == NULL;
        if (temp_cr0_eq_3 == 0) {
            if (temp_cr0_eq_3 == 0) {
                fn_8002FCC0(temp_r24, 0);
            }
            fn_80005888(temp_r24);
        }
        break;
    case 5:                                         /* switch 2 */
        temp_r24_2 = M2C_FIELD(temp_r3_2, void **, 0);
        temp_cr0_eq_4 = temp_r24_2 == NULL;
        if (temp_cr0_eq_4 == 0U) {
            if ((temp_cr0_eq_4 == 0) && ((u32) M2C_FIELD(temp_r24_2, u32 *, 4) != 0U)) {
                fn_8002FD20(temp_r24_2);
            }
            fn_80005888(temp_r24_2);
        }
        break;
    }
    M2C_FIELD(temp_r3_2, u8 *, 4) = 1U;
    M2C_FIELD(temp_r3_2, void **, 0) = arg1;
    temp_r0_3 = M2C_FIELD(temp_r3_2, u8 *, 0xC);
    temp_r25 = M2C_FIELD(arg2, void **, 0);
    switch ((s32) temp_r0_3) {                      /* switch 3; irregular */
    case 3:                                         /* switch 3 */
        fn_800146F0(M2C_FIELD(temp_r3_2, void **, 8), 1);
        break;
    case 4:                                         /* switch 3 */
        temp_r24_3 = M2C_FIELD(temp_r3_2, void **, 8);
        temp_cr0_eq_5 = temp_r24_3 == NULL;
        if (temp_cr0_eq_5 == 0) {
            if (temp_cr0_eq_5 == 0) {
                fn_8002FCC0(temp_r24_3, 0);
            }
            fn_80005888(temp_r24_3);
        }
        break;
    case 5:                                         /* switch 3 */
        temp_r24_4 = M2C_FIELD(temp_r3_2, void **, 8);
        temp_cr0_eq_6 = temp_r24_4 == NULL;
        if (temp_cr0_eq_6 == 0) {
            if ((temp_cr0_eq_6 == 0) && ((u32) M2C_FIELD(temp_r24_4, u32 *, 4) != 0U)) {
                fn_8002FD20(temp_r24_4);
            }
            fn_80005888(temp_r24_4);
        }
        break;
    }
    M2C_FIELD(temp_r3_2, u8 *, 0xC) = 1U;
    M2C_FIELD(temp_r3_2, void **, 8) = temp_r25;
    if (var_r27 != 0) {
        /* draft: did not compile: var_r27_2 = temp_r3_2 + 0x10; */
        sp10 = M2C_FIELD(temp_r31, void **, 0xC);
loop_93:
        if (0 /* draft: did not compile */) {
            temp_r0_4 = M2C_FIELD(var_r27_2, u8 *, 4);
            temp_r31_2 = M2C_FIELD(sp10, void **, 0xC);
            /* draft: did not compile: temp_r27_3 = var_r27_2 + 8; */
            switch ((s32) temp_r0_4) {              /* switch 4; irregular */
            case 3:                                 /* switch 4 */
                fn_800146F0(M2C_FIELD(var_r27_2, void **, 0), 1);
                break;
            case 4:                                 /* switch 4 */
                temp_r24_5 = M2C_FIELD(var_r27_2, void **, 0);
                temp_cr0_eq_7 = temp_r24_5 == NULL;
                if (temp_cr0_eq_7 == 0) {
                    if (temp_cr0_eq_7 == 0) {
                        fn_8002FCC0(temp_r24_5, 0);
                    }
                    fn_80005888(temp_r24_5);
                }
                break;
            case 5:                                 /* switch 4 */
                temp_r24_6 = M2C_FIELD(var_r27_2, void **, 0);
                temp_cr0_eq_8 = temp_r24_6 == NULL;
                if (temp_cr0_eq_8 == 0) {
                    if ((temp_cr0_eq_8 == 0) && ((u32) M2C_FIELD(temp_r24_6, u32 *, 4) != 0U)) {
                        fn_8002FD20(temp_r24_6);
                    }
                    fn_80005888(temp_r24_6);
                }
                break;
            }
            M2C_FIELD(var_r27_2, u8 *, 4) = 1U;
            M2C_FIELD(var_r27_2, void **, 0) = temp_r31_2;
            if ((u8) M2C_FIELD(sp10, u8 *, 0x14) == 1) {
                var_r31 = M2C_FIELD(sp10, void **, 0x10);
            } else {
                var_r31 = NULL;
            }
            temp_r0_5 = M2C_FIELD(temp_r27_3, u8 *, 4);
            temp_r26 = temp_r27_3;
            /* draft: did not compile: var_r27_2 = temp_r27_3 + 8; */
            switch ((s32) temp_r0_5) {              /* switch 5; irregular */
            case 3:                                 /* switch 5 */
                fn_800146F0(M2C_FIELD(temp_r26, void **, 0), 1);
                break;
            case 4:                                 /* switch 5 */
                temp_r24_7 = M2C_FIELD(temp_r26, void **, 0);
                temp_cr0_eq_9 = temp_r24_7 == NULL;
                if (temp_cr0_eq_9 == 0) {
                    if (temp_cr0_eq_9 == 0) {
                        fn_8002FCC0(temp_r24_7, 0);
                    }
                    fn_80005888(temp_r24_7);
                }
                break;
            case 5:                                 /* switch 5 */
                temp_r24_8 = M2C_FIELD(temp_r26, void **, 0);
                temp_cr0_eq_10 = temp_r24_8 == NULL;
                if (temp_cr0_eq_10 == 0) {
                    if ((temp_cr0_eq_10 == 0) && ((u32) M2C_FIELD(temp_r24_8, u32 *, 4) != 0U)) {
                        fn_8002FD20(temp_r24_8);
                    }
                    fn_80005888(temp_r24_8);
                }
                break;
            }
            M2C_FIELD(temp_r26, s8 *, 4) = 1;
            M2C_FIELD(temp_r26, void **, 0) = var_r31;
            fn_80020A10(&sp10);
            goto loop_93;
        }
    }
    var_r4 = get_up_vector_for_viewing_mtx(0x28);
    if (var_r4 != NULL) {
        /* draft: did not compile: var_r4 = fn_80078A48(1, -1, 0x89, 0, temp_r28, temp_r3_2); */
    }
    __destroy_new_array(temp_r3_2, &fn_8002F3CC);
    fn_80081AB8(temp_r30, var_r4);
}

void fn_80079B1C(void *arg0, void *arg1, void *arg2) {
    M2C_UNK sp18;
    u8 sp14;
    void *sp10;
    u8 spC;
    void *sp8;
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    s32 temp_cr0_eq_3;
    s32 temp_cr0_eq_4;
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 4);
    sp8 = arg1;
    sp10 = arg2;
    spC = 1;
    sp14 = 1;
    fn_80078A48(&sp18, 0, -1, 0x88, 0, 2, &sp8);
    fn_80081F04(temp_r31, &sp18);
    fn_80078F20(&sp18, -1);
    if (&sp10 != NULL) {
        switch ((s32) sp14) {                       /* switch 1; irregular */
        case 3:                                     /* switch 1 */
            fn_800146F0(sp10, 1);
            break;
        case 4:                                     /* switch 1 */
            temp_cr0_eq = sp10 == NULL;
            if (temp_cr0_eq == 0) {
                if (temp_cr0_eq == 0) {
                    fn_8002FCC0(sp10, 0);
                }
                fn_80005888(sp10);
            }
            break;
        case 5:                                     /* switch 1 */
            temp_cr0_eq_2 = sp10 == NULL;
            if (temp_cr0_eq_2 == 0) {
                if ((temp_cr0_eq_2 == 0) && ((u32) M2C_FIELD(sp10, u32 *, 4) != 0U)) {
                    fn_8002FD20(sp10);
                }
                fn_80005888(sp10);
            }
            break;
        }
        sp14 = 0;
    }
    switch ((s32) spC) {                            /* switch 2; irregular */
    case 3:                                         /* switch 2 */
        fn_800146F0(sp8, 1);
        break;
    case 4:                                         /* switch 2 */
        temp_cr0_eq_3 = sp8 == NULL;
        if (temp_cr0_eq_3 == 0) {
            if (temp_cr0_eq_3 == 0) {
                fn_8002FCC0(sp8, 0);
            }
            fn_80005888(sp8);
        }
        break;
    case 5:                                         /* switch 2 */
        temp_cr0_eq_4 = sp8 == NULL;
        if (temp_cr0_eq_4 == 0) {
            if ((temp_cr0_eq_4 == 0) && ((u32) M2C_FIELD(sp8, u32 *, 4) != 0U)) {
                fn_8002FD20(sp8);
            }
            fn_80005888(sp8);
        }
        break;
    }
    spC = 0;
}

#pragma push
#pragma peephole off
void fn_80079CCC(void *arg0) {
    u8 temp_r31;
    s32 var_r4;

    temp_r31 = M2C_FIELD(arg0, s32 *, 4);
    /* draft: did not compile: var_r4 = get_up_vector_for_viewing_mtx(0x28); */
    if (var_r4 != 0) {
        var_r4 = fn_80078A48(1, -1, 0x4F, 0, 0, 0);
    }
    fn_80081AB8(temp_r31, var_r4);
}
#pragma pop

void fn_80079D2C(s32 arg0, void *arg1, void *arg2) {
    M2C_UNK sp18;
    u8 sp14;
    void *sp10;
    u8 spC;
    void *sp8;
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    s32 temp_cr0_eq_3;
    s32 temp_cr0_eq_4;

    sp8 = arg1;
    sp10 = arg2;
    spC = 1;
    sp14 = 1;
    fn_80078A48(&sp18, 0, -1, 0x12, 0, 2, &sp8);
    fn_80081F04(arg0, &sp18);
    fn_80078F20(&sp18, -1);
    if (&sp10 != NULL) {
        switch ((s32) sp14) {                       /* switch 1; irregular */
        case 3:                                     /* switch 1 */
            fn_800146F0(sp10, 1);
            break;
        case 4:                                     /* switch 1 */
            temp_cr0_eq = sp10 == NULL;
            if (temp_cr0_eq == 0) {
                if (temp_cr0_eq == 0) {
                    fn_8002FCC0(sp10, 0);
                }
                fn_80005888(sp10);
            }
            break;
        case 5:                                     /* switch 1 */
            temp_cr0_eq_2 = sp10 == NULL;
            if (temp_cr0_eq_2 == 0) {
                if ((temp_cr0_eq_2 == 0) && ((u32) M2C_FIELD(sp10, u32 *, 4) != 0U)) {
                    fn_8002FD20(sp10);
                }
                fn_80005888(sp10);
            }
            break;
        }
        sp14 = 0;
    }
    switch ((s32) spC) {                            /* switch 2; irregular */
    case 3:                                         /* switch 2 */
        fn_800146F0(sp8, 1);
        break;
    case 4:                                         /* switch 2 */
        temp_cr0_eq_3 = sp8 == NULL;
        if (temp_cr0_eq_3 == 0) {
            if (temp_cr0_eq_3 == 0) {
                fn_8002FCC0(sp8, 0);
            }
            fn_80005888(sp8);
        }
        break;
    case 5:                                         /* switch 2 */
        temp_cr0_eq_4 = sp8 == NULL;
        if (temp_cr0_eq_4 == 0) {
            if ((temp_cr0_eq_4 == 0) && ((u32) M2C_FIELD(sp8, u32 *, 4) != 0U)) {
                fn_8002FD20(sp8);
            }
            fn_80005888(sp8);
        }
        break;
    }
    spC = 0;
}

void fn_80079EDC(s32 arg0, void *arg1) {
    M2C_UNK sp10;
    u8 spC;
    void *sp8;
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;

    sp8 = arg1;
    spC = 1;
    fn_80078A48(&sp10, 0, -1, 0x13, 0, 1, &sp8);
    fn_80081F04(arg0, &sp10);
    fn_80078F20(&sp10, -1);
    switch ((s32) spC) {                            /* irregular */
    case 3:
        fn_800146F0(sp8, 1);
        break;
    case 4:
        temp_cr0_eq = sp8 == NULL;
        if (temp_cr0_eq == 0) {
            if (temp_cr0_eq == 0) {
                fn_8002FCC0(sp8, 0);
            }
            fn_80005888(sp8);
        }
        break;
    case 5:
        temp_cr0_eq_2 = sp8 == NULL;
        if (temp_cr0_eq_2 == 0) {
            if ((temp_cr0_eq_2 == 0) && ((u32) M2C_FIELD(sp8, u32 *, 4) != 0U)) {
                fn_8002FD20(sp8);
            }
            fn_80005888(sp8);
        }
        break;
    }
    spC = 0;
}

void fn_80079FDC(void *arg0, u8 *arg1) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, u8 *, 8) = (u8) *arg1;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    /* draft: did not compile: M2C_FIELD(arg0, s32 *, 0xC) = (s32) (arg0 + 4); */
}

void *fn_80079FFC(void *arg0, s16 arg1) {
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    u8 temp_r0;
    void *temp_r31;
    void *temp_r30;
    void *temp_r30_2;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x20) = &lbl_80223D70;
        temp_r31 = M2C_FIELD(arg0, void **, 0x58);
        if (temp_r31 != NULL) {
            temp_r0 = M2C_FIELD(temp_r31, u8 *, 4);
            switch ((s32) temp_r0) {                /* irregular */
            case 3:
                fn_800146F0(M2C_FIELD(temp_r31, void **, 0), 1);
                break;
            case 4:
                temp_r30 = M2C_FIELD(temp_r31, void **, 0);
                temp_cr0_eq = temp_r30 == NULL;
                if (temp_cr0_eq == 0) {
                    if (temp_cr0_eq == 0) {
                        fn_8002FCC0(temp_r30, 0);
                    }
                    fn_80005888(temp_r30);
                }
                break;
            case 5:
                temp_r30_2 = M2C_FIELD(temp_r31, void **, 0);
                temp_cr0_eq_2 = temp_r30_2 == NULL;
                if (temp_cr0_eq_2 == 0) {
                    if ((temp_cr0_eq_2 == 0) && ((u32) M2C_FIELD(temp_r30_2, u32 *, 4) != 0U)) {
                        fn_8002FD20(temp_r30_2);
                    }
                    fn_80005888(temp_r30_2);
                }
                break;
            }
            M2C_FIELD(temp_r31, u8 *, 4) = 0U;
            fn_80005888(temp_r31);
        }
        if (arg0 != NULL) {
            M2C_FIELD(arg0, M2C_UNK **, 0x20) = &lbl_80221B10;
        }
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

void method_setProperty(void *arg0, s32 arg1, void *arg2) { } /* draft: stub */

void *fn_8007A404(void *arg0, s32 *arg1, void *arg2) { } /* draft: stub */

s32 fn_8007A5D0(void *arg0, s32 arg1) {
    u32 sp14;
    M2C_UNK sp10;
    M2C_UNK spC;
    s32 sp8;
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    u8 temp_r0;
    void *temp_r30;
    void *temp_r31;
    void *temp_r31_2;
    void *temp_r31_3;
    void *temp_r3;

    temp_r30 = M2C_FIELD(arg0, void **, 0x58);
    sp8 = arg1;
    if (temp_r30 == NULL) {
        return 0;
    }
    temp_r0 = M2C_FIELD(temp_r30, u8 *, 4);
    if (temp_r0 != 5) {
        switch ((s32) temp_r0) {                    /* irregular */
        case 3:
            fn_800146F0(M2C_FIELD(temp_r30, void **, 0), 1);
            break;
        case 4:
            temp_r31 = M2C_FIELD(temp_r30, void **, 0);
            temp_cr0_eq = temp_r31 == NULL;
            if (temp_cr0_eq == 0) {
                if (temp_cr0_eq == 0) {
                    fn_8002FCC0(temp_r31, 0);
                }
                fn_80005888(temp_r31);
            }
            break;
        case 5:
            temp_r31_2 = M2C_FIELD(temp_r30, void **, 0);
            temp_cr0_eq_2 = temp_r31_2 == NULL;
            if (temp_cr0_eq_2 == 0) {
                if ((temp_cr0_eq_2 == 0) && ((u32) M2C_FIELD(temp_r31_2, u32 *, 4) != 0U)) {
                    fn_8002FD20(temp_r31_2);
                }
                fn_80005888(temp_r31_2);
            }
            break;
        }
        M2C_FIELD(temp_r30, u8 *, 4) = 5U;
        temp_r3 = get_up_vector_for_viewing_mtx(0x10);
        if (temp_r3 != NULL) {
            /* draft: did not compile: fn_80079FDC(&spC, &sp10); */
        }
        M2C_FIELD(temp_r30, void **, 0) = temp_r3;
    }
    temp_r31_3 = M2C_FIELD(temp_r30, void **, 0);
    /* draft: did not compile: fn_8007A844(&sp14, temp_r31_3, &sp8); */
    if (0 /* draft: did not compile */) {
        return 0;
    }
    return sp14 + 0x10;
}

s32 method_eraseProperty(void *arg0, s32 arg1) {
    u32 sp1C;
    u32 sp18;
    u32 sp14;
    M2C_UNK sp10;
    M2C_UNK spC;
    s32 sp8;
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    u8 temp_r0;
    void *temp_r30;
    void *temp_r31;
    void *temp_r31_2;
    void *temp_r31_3;
    void *temp_r3;

    sp8 = arg1;
    temp_r30 = M2C_FIELD(arg0, void **, 0x58);
    if (temp_r30 == NULL) {
        return 0;
    }
    temp_r0 = M2C_FIELD(temp_r30, u8 *, 4);
    if (temp_r0 != 5) {
        switch ((s32) temp_r0) {                    /* irregular */
        case 3:
            fn_800146F0(M2C_FIELD(temp_r30, void **, 0), 1);
            break;
        case 4:
            temp_r31 = M2C_FIELD(temp_r30, void **, 0);
            temp_cr0_eq = temp_r31 == NULL;
            if (temp_cr0_eq == 0) {
                if (temp_cr0_eq == 0) {
                    fn_8002FCC0(temp_r31, 0);
                }
                fn_80005888(temp_r31);
            }
            break;
        case 5:
            temp_r31_2 = M2C_FIELD(temp_r30, void **, 0);
            temp_cr0_eq_2 = temp_r31_2 == NULL;
            if (temp_cr0_eq_2 == 0) {
                if ((temp_cr0_eq_2 == 0) && ((u32) M2C_FIELD(temp_r31_2, u32 *, 4) != 0U)) {
                    fn_8002FD20(temp_r31_2);
                }
                fn_80005888(temp_r31_2);
            }
            break;
        }
        M2C_FIELD(temp_r30, u8 *, 4) = 5U;
        temp_r3 = get_up_vector_for_viewing_mtx(0x10);
        if (temp_r3 != NULL) {
            /* draft: did not compile: fn_80079FDC(&spC, &sp10); */
        }
        M2C_FIELD(temp_r30, void **, 0) = temp_r3;
    }
    temp_r31_3 = M2C_FIELD(temp_r30, void **, 0);
    /* draft: did not compile: fn_8007A844(&sp18, temp_r31_3, &sp8); */
    sp1C = sp18;
    if (0 /* draft: did not compile */) {
        return 0;
    }
    sp14 = sp18;
    AErase(temp_r31_3, &sp14);
    return 1;
}

void fn_8007A844(void **arg0, void *arg1, s32 *arg2) {
    void *var_r7;
    void *var_r8;

    var_r7 = M2C_FIELD(arg1, void **, 4);
    /* draft: did not compile: var_r8 = arg1 + 4; */
loop_4:
    if (var_r7 != NULL) {
        if ((s32) M2C_FIELD(var_r7, s32 *, 0xC) >= (s32) *arg2) {
            var_r8 = var_r7;
            var_r7 = M2C_FIELD(var_r7, void **, 0);
        } else {
            var_r7 = M2C_FIELD(var_r7, void **, 4);
        }
        goto loop_4;
    }
    if (0 /* draft: did not compile */) {
        /* draft: did not compile: *arg0 = arg1 + 4; */
        return;
    }
    *arg0 = var_r8;
}

void AErase(void *arg0, u32 *arg1) {
    u8 temp_r3;

    temp_r3 = *arg1;
    if (temp_r3 == (u32) M2C_FIELD(arg0, u32 *, 0xC)) {
        fn_80020A10(arg1);
        M2C_FIELD(arg0, u32 *, 0xC) = (u32) *arg1;
    }
    fn_80021078(temp_r3, M2C_FIELD(arg0, s32 *, 4));
    fn_8002FD8C(arg0, temp_r3 + 0xC);
    fn_80005888(temp_r3);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) - 1);
}
