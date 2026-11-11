/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_80005888();
void *get_up_vector_for_viewing_mtx(M2C_UNK);
M2C_UNK fn_8014BB10();
M2C_UNK fn_8014F858(void *, M2C_UNK *, M2C_UNK *);
extern M2C_UNK __files;
extern M2C_UNK lbl_802256DC;
s32 get_up_vector_for_viewing_mtx_inner(s32);
M2C_UNK ReadBmp();
s32 fn_80071138(s32);
M2C_UNK fn_8014F694(M2C_UNK *, M2C_UNK, M2C_UNK *, s32);
M2C_UNK strcpy(s32, s32);
s32 strlen(s32);
extern M2C_UNK lbl_80229F90;
M2C_UNK fn_800058E8();
M2C_UNK fn_80020694();
M2C_UNK fn_8008065C(M2C_UNK);
M2C_UNK fn_80080738();
M2C_UNK Tweaker();
u8 RegisterCallback(s32, s32, s32, s32);
u8 InsertCallback();
u8 EraseCallback_80081760(s32, s32, s32, s32);
u32 fn_80005868(s32);
M2C_UNK fn_800058A8(u32);
extern u32 lbl_803506A4;
extern s32 lbl_803506A8;
M2C_UNK fn_800146F0(M2C_UNK *, M2C_UNK);
M2C_UNK fn_80014798(M2C_UNK *, s32, M2C_UNK *);
M2C_UNK *fn_800208F4(M2C_UNK *);
M2C_UNK fn_8002FA14(s32, s32, u8 *);
M2C_UNK fn_8002FCC0(M2C_UNK *, M2C_UNK);
M2C_UNK fn_8002FD20(M2C_UNK *);
M2C_UNK fn_8002FEA4(M2C_UNK *);
M2C_UNK fn_80031578(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK);
u8 fn_8007F61C(s32);
u8 fn_8007F65C(s32);
s32 fn_8007FC40();
f32 fn_80080764(s32);
s32 fn_80080790(s32);
extern M2C_UNK *lbl_803506A0;
M2C_UNK fn_80086D38(void *, u32);
M2C_UNK fn_80086C58(void **);
M2C_UNK fn_80079FDC(M2C_UNK *, M2C_UNK *);
M2C_UNK fn_8007A844(u32 *, void *, u32 *);
M2C_UNK fn_80080698(s32, f32);
M2C_UNK fn_800806D4(s32, s32);
extern f32 lbl_80351A08;
M2C_UNK AErase(void *, u32 *);
extern void *lbl_803506AC;

void fn_80084608(void ***arg0, s32 *arg1, void ***arg2);
void fn_80084684(void **arg0, s32 *arg1, void ***arg2, s32 *arg3, M2C_UNK arg_sp0);
void fn_8008474C(void *arg0, s32 arg1);
s32 fn_800847D4(void *arg0);
void fn_80084828(void *arg0);
void *fn_80084914(void *arg0, s16 arg1);
void fn_8008498C(void *arg0);
void fn_8008499C(void *arg0);
s32 scr_Yield(void);
s32 scr_Exit(s32 arg0);
void scr_Tweaker(void);
s32 scr_RegisterCallback(s32 arg0);
s32 scr_InsertCallback(s32 arg0);
s32 scr_EraseCallback(s32 arg0);
u32 fn_80084BE4(s32 arg0, s32 arg1);
s32 scr_ASet(s32 arg0);
void *fn_800851CC(void *arg0, u32 arg1);
s32 fn_800852EC(s32 arg0);
void *fn_8008531C(void *arg0);
s32 scr_AGet(s32 arg0, M2C_UNK arg_sp0);
s32 scr_AExist(s32 arg0, M2C_UNK arg_sp0);
s32 scr_ASize(s32 arg0, M2C_UNK arg_sp0);
s32 scr_ACount(s32 arg0, M2C_UNK arg_sp0);
s32 scr_AErase(s32 arg0, M2C_UNK arg_sp0);
s32 scr_ACopy(s32 arg0, M2C_UNK arg_sp0);
s32 scr_APaste(s32 arg0, M2C_UNK arg_sp0);

void fn_80084608(void ***arg0, s32 *arg1, void ***arg2) {
    void **temp_r3;
    void **temp_r4;

    temp_r3 = *arg2;
    *arg2 = M2C_FIELD(temp_r3, void ***, 4);
    M2C_FIELD(M2C_FIELD(temp_r3, void **, 0), void ***, 4) = (void **) M2C_FIELD(temp_r3, void ***, 4);
    temp_r4 = M2C_FIELD(temp_r3, void ***, 4);
    *temp_r4 = M2C_FIELD(temp_r3, void **, 0);
    fn_80005888(temp_r3, temp_r4);
    *arg1 -= 1;
    *arg0 = *arg2;
}

void fn_80084684(void **arg0, s32 *arg1, void ***arg2, s32 *arg3, M2C_UNK arg_sp0) {
    void *spC;
    s32 sp8;
    void **temp_r4;
    void *temp_r3;
    void *temp_r5;

    temp_r3 = get_up_vector_for_viewing_mtx(0xC);
    if (temp_r3 == NULL) {
        fn_8014F858(&__files + 0xA0, &lbl_802256DC, &__files);
        fn_8014BB10();
    }
    /* draft: did not compile: sp8 = arg1 + 4; */
    spC = temp_r3;
    if (0 /* draft: did not compile */) {
        M2C_FIELD(temp_r3, s32 *, 8) = (s32) *arg3;
    }
    temp_r4 = *arg2;
    temp_r5 = spC;
    spC = NULL;
    M2C_FIELD(*temp_r4, void **, 4) = temp_r5;
    M2C_FIELD(temp_r5, void **, 0) = (void *) *temp_r4;
    *temp_r4 = temp_r5;
    M2C_FIELD(temp_r5, void ***, 4) = temp_r4;
    *arg1 += 1;
    *arg0 = temp_r5;
}

void fn_8008474C(void *arg0, s32 arg1) {
    M2C_UNK sp8;

    M2C_FIELD(arg0, s32 *, 0x2C) = get_up_vector_for_viewing_mtx_inner(strlen(arg1) + 1);
    strcpy(M2C_FIELD(arg0, s32 *, 0x2C), arg1);
    M2C_FIELD(arg0, s32 *, 4) = fn_80071138(M2C_FIELD(arg0, s32 *, 0x2C));
    fn_8014F694(&sp8, 0x400, &lbl_80229F90, M2C_FIELD(arg0, s32 *, 0x2C));
    /* draft: did not compile: ReadBmp(arg0 + 8, &sp8); */
}

s32 fn_800847D4(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
        return 1;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 8) == 0U) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
    fn_80084828((void *)(0));
    return 1;
}

void fn_80084828(void *arg0) { } /* draft: stub */

void *fn_80084914(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
            fn_800058E8();
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
            fn_800058E8();
        }
        /* draft: did not compile: fn_80020694(arg0 + 8, -1); */
        if (arg1 > 0) {
            fn_80005888((void **)(arg0), (void **)(0));
        }
    }
    return arg0;
}

void fn_8008498C(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) (M2C_FIELD(arg0, s16 *, 0x28) + 1);
}

void fn_8008499C(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) (M2C_FIELD(arg0, s16 *, 0x28) - 1);
}

s32 scr_Yield(void) {
    fn_8008065C(0);
    return 1;
}

s32 scr_Exit(s32 arg0) {
    fn_80080738();
    fn_8008065C((long)(arg0));
    return 3;
}

void scr_Tweaker(void) {
    Tweaker();
}

s32 scr_RegisterCallback(s32 arg0) {
    s32 temp_r30;
    s32 temp_r31;

    temp_r31 = fn_80080738();
    temp_r30 = fn_80080738(arg0);
    fn_8008065C((long)(arg0));
    return 0;
}

s32 scr_InsertCallback(s32 arg0) { return 0; } /* draft: stub */

s32 scr_EraseCallback(s32 arg0) {
    s32 temp_r30;
    s32 temp_r31;

    temp_r31 = fn_80080738();
    temp_r30 = fn_80080738(arg0);
    fn_8008065C((long)(arg0));
    return 0;
}

u32 fn_80084BE4(s32 arg0, s32 arg1) {
    s32 temp_r4;
    s32 var_r31;

    if (((u32) lbl_803506A4 == 0U) || ((s32) lbl_803506A8 < arg1)) {
        fn_800058A8(lbl_803506A4);
        lbl_803506A8 = arg1;
        lbl_803506A4 = fn_80005868(arg1 * 4);
    }
    var_r31 = 0;
loop_5:
    if (var_r31 < arg1) {
        temp_r4 = (arg1 - var_r31) * 4;
        var_r31 += 1;
        /* draft: did not compile: *(lbl_803506A4 + (temp_r4 - 4)) = fn_80080738(arg0); */
        goto loop_5;
    }
    return lbl_803506A4;
}

s32 scr_ASet(s32 arg0) { return 0; } /* draft: stub */

void *fn_800851CC(void *arg0, u32 arg1) {
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    u8 temp_r0;
    void *temp_r31;
    void *temp_r31_2;
    void *var_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 4);
    if (temp_r0 != 4) {
        switch ((s32) temp_r0) {                    /* irregular */
        case 3:
            fn_800146F0(M2C_FIELD(arg0, void **, 0), 1);
            break;
        case 4:
            temp_r31 = M2C_FIELD(arg0, void **, 0);
            temp_cr0_eq = temp_r31 == NULL;
            if (temp_cr0_eq == 0) {
                if (temp_cr0_eq == 0) {
                    fn_8002FCC0(temp_r31, 0);
                }
                fn_80005888(temp_r31);
            }
            break;
        case 5:
            temp_r31_2 = M2C_FIELD(arg0, void **, 0);
            temp_cr0_eq_2 = temp_r31_2 == NULL;
            if (temp_cr0_eq_2 == 0) {
                if ((temp_cr0_eq_2 == 0) && ((u32) M2C_FIELD(temp_r31_2, u32 *, 4) != 0U)) {
                    fn_8002FD20(temp_r31_2);
                }
                fn_80005888(temp_r31_2);
            }
            break;
        }
        M2C_FIELD(arg0, u8 *, 4) = 4U;
        var_r0 = get_up_vector_for_viewing_mtx(0xC);
        if (var_r0 != NULL) {
            /* draft: did not compile: var_r0 = fn_800852EC(arg1); */
        }
        fn_80086D38(M2C_FIELD(arg0, void **, 0), arg1);
        M2C_FIELD(arg0, void **, 0) = var_r0;
    } else if ((u32) M2C_FIELD(M2C_FIELD(arg0, void **, 0), u32 *, 4) < arg1) {
        fn_80086D38((void *)(0), (unsigned long)(0));
    }
    return M2C_FIELD(arg0, void **, 0);
}

s32 fn_800852EC(s32 arg0) {
    fn_8008531C((void *)(0));
    return arg0;
}

void *fn_8008531C(void *arg0) {
    u8 spC;
    void *sp8;
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;

    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    spC = 0;
    fn_80086C58(&sp8);
    switch ((s32) spC) {                            /* irregular */
    case 3:
        fn_800146F0(sp8, 1);
        break;
    case 4:
        temp_cr0_eq = sp8 == NULL;
        if (temp_cr0_eq == 0) {
            if (temp_cr0_eq == 0) {
                fn_8002FCC0((long *)(0), (long)(0));
            }
            fn_80005888(sp8);
        }
        break;
    case 5:
        temp_cr0_eq_2 = sp8 == NULL;
        if (temp_cr0_eq_2 == 0) {
            if ((temp_cr0_eq_2 == 0) && ((u32) M2C_FIELD(sp8, u32 *, 4) != 0U)) {
                fn_8002FD20((long *)(0));
            }
            fn_80005888(sp8);
        }
        break;
    }
    spC = 0;
    return arg0;
}

s32 scr_AGet(s32 arg0, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

s32 scr_AExist(s32 arg0, M2C_UNK arg_sp0) {
    u32 sp10;
    M2C_UNK spC;
    M2C_UNK sp8;
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    s32 temp_r3;
    s32 var_r30;
    u32 *temp_r3_2;
    u32 *var_r27;
    u32 temp_r28;
    u8 temp_r0;
    u8 temp_r0_2;
    void *temp_r28_2;
    void *temp_r28_3;
    void *temp_r28_4;
    void *temp_r3_3;
    void *var_r26;

    temp_r3 = fn_8007FC40();
    /* draft: did not compile: temp_r3_2 = fn_80084BE4(arg0, temp_r3); */
    var_r26 = lbl_803506A0;
    if ((void *) lbl_803506A0 == NULL) {
        fn_8008065C((long)(arg0));
        return 0;
    }
    var_r27 = temp_r3_2;
    var_r30 = 0;
loop_31:
    if (var_r30 >= temp_r3) {
        temp_r0 = M2C_FIELD(var_r26, u8 *, 4);
        if (((s32) temp_r0 != 0) && ((s32) temp_r0 >= 0) && ((s32) temp_r0 < 6)) {
            fn_8008065C((long)(arg0));
        } else {
            fn_8008065C((long)(arg0));
        }
        return 0;
    }
    if ((s32) M2C_FIELD(var_r26, u8 *, 4) == 4) {
        temp_r28 = *var_r27;
        if (temp_r28 < (u32) M2C_FIELD(fn_800851CC(var_r26, 0), u32 *, 4)) {
            /* draft: did not compile: var_r26 = M2C_FIELD(fn_800851CC(var_r26, 0), s32 *, 8) + (temp_r28 * 8); */
            goto block_30;
        }
    }
    temp_r0_2 = M2C_FIELD(var_r26, u8 *, 4);
    if ((s32) temp_r0_2 == 5) {
        if (temp_r0_2 != 5) {
            switch ((s32) temp_r0_2) {              /* irregular */
            case 3:
                fn_800146F0(M2C_FIELD(var_r26, void **, 0), 1);
                break;
            case 4:
                temp_r28_2 = M2C_FIELD(var_r26, void **, 0);
                temp_cr0_eq = temp_r28_2 == NULL;
                if (temp_cr0_eq == 0) {
                    if (temp_cr0_eq == 0) {
                        fn_8002FCC0(temp_r28_2, 0);
                    }
                    fn_80005888(temp_r28_2);
                }
                break;
            case 5:
                temp_r28_3 = M2C_FIELD(var_r26, void **, 0);
                temp_cr0_eq_2 = temp_r28_3 == NULL;
                if (temp_cr0_eq_2 == 0) {
                    if ((temp_cr0_eq_2 == 0) && ((u32) M2C_FIELD(temp_r28_3, u32 *, 4) != 0U)) {
                        fn_8002FD20(temp_r28_3);
                    }
                    fn_80005888(temp_r28_3);
                }
                break;
            }
            M2C_FIELD(var_r26, u8 *, 4) = 5U;
            temp_r3_3 = get_up_vector_for_viewing_mtx(0x10);
            if (temp_r3_3 != NULL) {
                fn_80079FDC(&sp8, &spC);
            }
            M2C_FIELD(var_r26, void **, 0) = temp_r3_3;
        }
        temp_r28_4 = M2C_FIELD(var_r26, void **, 0);
        fn_8007A844(&sp10, temp_r28_4, var_r27);
        if (0 /* draft: did not compile */) {
            /* draft: did not compile: var_r26 = sp10 + 0x10; */
block_30:
            var_r27 += 4;
            var_r30 += 1;
            goto loop_31;
        }
        goto block_29;
    }
block_29:
    fn_8008065C((long)(arg0));
    return 0;
}

s32 scr_ASize(s32 arg0, M2C_UNK arg_sp0) {
    u32 sp10;
    M2C_UNK spC;
    M2C_UNK sp8;
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    s32 temp_r3;
    s32 var_r30;
    u32 *temp_r3_2;
    u32 *var_r27;
    u32 temp_r28;
    u8 temp_r0;
    void *temp_r28_2;
    void *temp_r28_3;
    void *temp_r28_4;
    void *temp_r3_3;
    void *var_r26;

    temp_r3 = fn_8007FC40();
    /* draft: did not compile: temp_r3_2 = fn_80084BE4(arg0, temp_r3); */
    var_r26 = lbl_803506A0;
    if ((void *) lbl_803506A0 == NULL) {
        fn_8008065C((long)(arg0));
        return 0;
    }
    var_r27 = temp_r3_2;
    var_r30 = 0;
loop_31:
    if (var_r30 >= temp_r3) {
        if ((s32) M2C_FIELD(var_r26, u8 *, 4) == 4) {
            fn_8008065C((long)(arg0));
        } else {
            fn_8008065C((long)(arg0));
        }
        return 0;
    }
    if ((s32) M2C_FIELD(var_r26, u8 *, 4) == 4) {
        temp_r28 = *var_r27;
        if (temp_r28 < (u32) M2C_FIELD(fn_800851CC(var_r26, 0), u32 *, 4)) {
            /* draft: did not compile: var_r26 = M2C_FIELD(fn_800851CC(var_r26, 0), s32 *, 8) + (temp_r28 * 8); */
            goto block_30;
        }
    }
    temp_r0 = M2C_FIELD(var_r26, u8 *, 4);
    if ((s32) temp_r0 == 5) {
        if (temp_r0 != 5) {
            switch ((s32) temp_r0) {                /* irregular */
            case 3:
                fn_800146F0(M2C_FIELD(var_r26, void **, 0), 1);
                break;
            case 4:
                temp_r28_2 = M2C_FIELD(var_r26, void **, 0);
                temp_cr0_eq = temp_r28_2 == NULL;
                if (temp_cr0_eq == 0) {
                    if (temp_cr0_eq == 0) {
                        fn_8002FCC0(temp_r28_2, 0);
                    }
                    fn_80005888(temp_r28_2);
                }
                break;
            case 5:
                temp_r28_3 = M2C_FIELD(var_r26, void **, 0);
                temp_cr0_eq_2 = temp_r28_3 == NULL;
                if (temp_cr0_eq_2 == 0) {
                    if ((temp_cr0_eq_2 == 0) && ((u32) M2C_FIELD(temp_r28_3, u32 *, 4) != 0U)) {
                        fn_8002FD20(temp_r28_3);
                    }
                    fn_80005888(temp_r28_3);
                }
                break;
            }
            M2C_FIELD(var_r26, u8 *, 4) = 5U;
            temp_r3_3 = get_up_vector_for_viewing_mtx(0x10);
            if (temp_r3_3 != NULL) {
                fn_80079FDC(&sp8, &spC);
            }
            M2C_FIELD(var_r26, void **, 0) = temp_r3_3;
        }
        temp_r28_4 = M2C_FIELD(var_r26, void **, 0);
        fn_8007A844(&sp10, temp_r28_4, var_r27);
        if (0 /* draft: did not compile */) {
            /* draft: did not compile: var_r26 = sp10 + 0x10; */
block_30:
            var_r27 += 4;
            var_r30 += 1;
            goto loop_31;
        }
        goto block_29;
    }
block_29:
    fn_8008065C((long)(arg0));
    return 0;
}

s32 scr_ACount(s32 arg0, M2C_UNK arg_sp0) {
    u32 sp18;
    M2C_UNK sp14;
    M2C_UNK sp10;
    M2C_UNK spC;
    M2C_UNK sp8;
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    s32 temp_cr0_eq_3;
    s32 temp_cr0_eq_4;
    u32 temp_r3;
    s32 var_r26_2;
    s32 var_r29;
    s32 var_r4;
    u32 *temp_r3_2;
    u32 *var_r26;
    u32 temp_r0_2;
    u32 temp_r27_3;
    u32 var_ctr;
    u8 temp_r0;
    u8 temp_r0_3;
    void *temp_r27;
    void *temp_r27_2;
    void *temp_r27_4;
    void *temp_r27_5;
    void *temp_r27_6;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *var_r30;

    temp_r3 = fn_8007FC40();
    /* draft: did not compile: temp_r3_2 = fn_80084BE4(arg0, temp_r3); */
    var_r30 = lbl_803506A0;
    if ((void *) lbl_803506A0 == NULL) {
        fn_8008065C((long)(arg0));
        return 0;
    }
    var_r26 = temp_r3_2;
    var_r29 = 0;
loop_31:
    if (var_r29 >= temp_r3) {
        temp_r0 = M2C_FIELD(var_r30, u8 *, 4);
        switch ((s32) temp_r0) {                    /* switch 2; irregular */
        default:                                    /* switch 2 */
            fn_8008065C((long)(arg0));
            break;
        case 4:                                     /* switch 2 */
            var_r26_2 = 0;
            temp_r3_3 = fn_800851CC(var_r30, 0);
            temp_r0_2 = M2C_FIELD(temp_r3_3, u32 *, 4);
            var_r4 = 0;
            var_ctr = temp_r0_2;
            if (temp_r0_2 > 0U) {
                do {
                    if (0 /* draft: did not compile */) {
                        var_r26_2 += 1;
                    }
                    var_r4 += 8;
                    var_ctr -= 1;
                } while (var_ctr != 0U);
            }
            fn_8008065C((long)(arg0));
            break;
        case 5:                                     /* switch 2 */
            if (temp_r0 != 5) {
                switch ((s32) temp_r0) {            /* switch 3; irregular */
                case 3:                             /* switch 3 */
                    fn_800146F0(M2C_FIELD(var_r30, void **, 0), 1);
                    break;
                case 4:                             /* switch 3 */
                    temp_r27 = M2C_FIELD(var_r30, void **, 0);
                    temp_cr0_eq = temp_r27 == NULL;
                    if (temp_cr0_eq == 0) {
                        if (temp_cr0_eq == 0) {
                            fn_8002FCC0(temp_r27, 0);
                        }
                        fn_80005888(temp_r27);
                    }
                    break;
                case 5:                             /* switch 3 */
                    temp_r27_2 = M2C_FIELD(var_r30, void **, 0);
                    temp_cr0_eq_2 = temp_r27_2 == NULL;
                    if (temp_cr0_eq_2 == 0) {
                        if ((temp_cr0_eq_2 == 0) && ((u32) M2C_FIELD(temp_r27_2, u32 *, 4) != 0U)) {
                            fn_8002FD20(temp_r27_2);
                        }
                        fn_80005888(temp_r27_2);
                    }
                    break;
                }
                M2C_FIELD(var_r30, u8 *, 4) = 5U;
                temp_r3_4 = get_up_vector_for_viewing_mtx(0x10);
                if (temp_r3_4 != NULL) {
                    fn_80079FDC(&sp8, &spC);
                }
                M2C_FIELD(var_r30, void **, 0) = temp_r3_4;
            }
            fn_8008065C((long)(arg0));
            break;
        }
        return 0;
    }
    if ((s32) M2C_FIELD(var_r30, u8 *, 4) == 4) {
        temp_r27_3 = *var_r26;
        if (temp_r27_3 < (u32) M2C_FIELD(fn_800851CC(var_r30, 0), u32 *, 4)) {
            /* draft: did not compile: var_r30 = M2C_FIELD(fn_800851CC(var_r30, 0), s32 *, 8) + (temp_r27_3 * 8); */
            goto block_30;
        }
    }
    temp_r0_3 = M2C_FIELD(var_r30, u8 *, 4);
    if ((s32) temp_r0_3 == 5) {
        if (temp_r0_3 != 5) {
            switch ((s32) temp_r0_3) {              /* switch 1; irregular */
            case 3:                                 /* switch 1 */
                fn_800146F0(M2C_FIELD(var_r30, void **, 0), 1);
                break;
            case 4:                                 /* switch 1 */
                temp_r27_4 = M2C_FIELD(var_r30, void **, 0);
                temp_cr0_eq_3 = temp_r27_4 == NULL;
                if (temp_cr0_eq_3 == 0) {
                    if (temp_cr0_eq_3 == 0) {
                        fn_8002FCC0(temp_r27_4, 0);
                    }
                    fn_80005888(temp_r27_4);
                }
                break;
            case 5:                                 /* switch 1 */
                temp_r27_5 = M2C_FIELD(var_r30, void **, 0);
                temp_cr0_eq_4 = temp_r27_5 == NULL;
                if (temp_cr0_eq_4 == 0) {
                    if ((temp_cr0_eq_4 == 0) && ((u32) M2C_FIELD(temp_r27_5, u32 *, 4) != 0U)) {
                        fn_8002FD20(temp_r27_5);
                    }
                    fn_80005888(temp_r27_5);
                }
                break;
            }
            M2C_FIELD(var_r30, u8 *, 4) = 5U;
            temp_r3_5 = get_up_vector_for_viewing_mtx(0x10);
            if (temp_r3_5 != NULL) {
                fn_80079FDC(&sp10, &sp14);
            }
            M2C_FIELD(var_r30, void **, 0) = temp_r3_5;
        }
        temp_r27_6 = M2C_FIELD(var_r30, void **, 0);
        fn_8007A844(&sp18, temp_r27_6, var_r26);
        if (0 /* draft: did not compile */) {
            /* draft: did not compile: var_r30 = sp18 + 0x10; */
block_30:
            var_r26 += 4;
            var_r29 += 1;
            goto loop_31;
        }
        goto block_29;
    }
block_29:
    fn_8008065C((long)(arg0));
    return 0;
}

s32 scr_AErase(s32 arg0, M2C_UNK arg_sp0) {
    u32 sp18;
    u32 sp14;
    u32 sp10;
    M2C_UNK spC;
    M2C_UNK sp8;
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    s32 temp_cr0_eq_3;
    s32 temp_cr0_eq_4;
    s32 temp_r3;
    s32 var_r29;
    u32 *temp_r3_2;
    u32 *var_r26;
    u32 temp_r27_3;
    u8 temp_r0;
    u8 temp_r0_2;
    void *temp_r27;
    void *temp_r27_2;
    void *temp_r27_4;
    void *temp_r27_5;
    void *temp_r27_6;
    void *temp_r3_3;
    void *var_r30;

    temp_r3 = fn_8007FC40();
    /* draft: did not compile: temp_r3_2 = fn_80084BE4(arg0, temp_r3); */
    var_r30 = lbl_803506A0;
    if ((void *) lbl_803506A0 == NULL) {
        fn_8008065C((long)(arg0));
        return 0;
    }
    var_r26 = temp_r3_2;
    var_r29 = 0;
loop_33:
    if (var_r29 >= temp_r3) {
        if (var_r30 != NULL) {
            temp_r0 = M2C_FIELD(var_r30, u8 *, 4);
            switch ((s32) temp_r0) {                /* switch 2; irregular */
            case 3:                                 /* switch 2 */
                fn_800146F0(M2C_FIELD(var_r30, void **, 0), 1);
                break;
            case 4:                                 /* switch 2 */
                temp_r27 = M2C_FIELD(var_r30, void **, 0);
                temp_cr0_eq = temp_r27 == NULL;
                if (temp_cr0_eq == 0) {
                    if (temp_cr0_eq == 0) {
                        fn_8002FCC0(temp_r27, 0);
                    }
                    fn_80005888(temp_r27);
                }
                break;
            case 5:                                 /* switch 2 */
                temp_r27_2 = M2C_FIELD(var_r30, void **, 0);
                temp_cr0_eq_2 = temp_r27_2 == NULL;
                if (temp_cr0_eq_2 == 0) {
                    if ((temp_cr0_eq_2 == 0) && ((u32) M2C_FIELD(temp_r27_2, u32 *, 4) != 0U)) {
                        fn_8002FD20(temp_r27_2);
                    }
                    fn_80005888(temp_r27_2);
                }
                break;
            }
            M2C_FIELD(var_r30, u8 *, 4) = 0U;
        }
        fn_8008065C((long)(arg0));
        return 0;
    }
    if ((s32) M2C_FIELD(var_r30, u8 *, 4) == 4) {
        if ((temp_r27_3 = *var_r26) < (u32) M2C_FIELD(fn_800851CC(var_r30, 0), u32 *, 4)) {
            /* draft: did not compile: var_r30 = M2C_FIELD(fn_800851CC(var_r30, 0), s32 *, 8) + (temp_r27_3 * 8); */
            goto block_32;
        }
    }
    temp_r0_2 = M2C_FIELD(var_r30, u8 *, 4);
    if ((s32) temp_r0_2 == 5) {
        if (temp_r0_2 != 5) {
            switch ((s32) temp_r0_2) {              /* switch 1; irregular */
            case 3:                                 /* switch 1 */
                fn_800146F0(M2C_FIELD(var_r30, void **, 0), 1);
                break;
            case 4:                                 /* switch 1 */
                temp_r27_4 = M2C_FIELD(var_r30, void **, 0);
                temp_cr0_eq_3 = temp_r27_4 == NULL;
                if (temp_cr0_eq_3 == 0) {
                    if (temp_cr0_eq_3 == 0) {
                        fn_8002FCC0(temp_r27_4, 0);
                    }
                    fn_80005888(temp_r27_4);
                }
                break;
            case 5:                                 /* switch 1 */
                temp_r27_5 = M2C_FIELD(var_r30, void **, 0);
                temp_cr0_eq_4 = temp_r27_5 == NULL;
                if (temp_cr0_eq_4 == 0) {
                    if ((temp_cr0_eq_4 == 0) && ((u32) M2C_FIELD(temp_r27_5, u32 *, 4) != 0U)) {
                        fn_8002FD20(temp_r27_5);
                    }
                    fn_80005888(temp_r27_5);
                }
                break;
            }
            M2C_FIELD(var_r30, u8 *, 4) = 5U;
            temp_r3_3 = get_up_vector_for_viewing_mtx(0x10);
            if (temp_r3_3 != NULL) {
                fn_80079FDC(&sp8, &spC);
            }
            M2C_FIELD(var_r30, void **, 0) = temp_r3_3;
        }
        temp_r27_6 = M2C_FIELD(var_r30, void **, 0);
        fn_8007A844(&sp14, temp_r27_6, var_r26);
        sp18 = sp14;
        if (0 /* draft: did not compile */) {
            if (var_r29 == (s32) (temp_r3 - 1)) {
                sp10 = sp14;
                AErase(temp_r27_6, &sp10);
                fn_8008065C((long)(arg0));
                return 0;
            }
            /* draft: did not compile: var_r30 = sp14 + 0x10; */
block_32:
            var_r26 += 4;
            var_r29 += 1;
            goto loop_33;
        }
        goto block_31;
    }
block_31:
    fn_8008065C((long)(arg0));
    return 0;
}

s32 scr_ACopy(s32 arg0, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

s32 scr_APaste(s32 arg0, M2C_UNK arg_sp0) { return 0; } /* draft: stub */
