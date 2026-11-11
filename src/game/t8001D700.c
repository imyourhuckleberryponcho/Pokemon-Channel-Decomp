/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_80012D5C(s32, M2C_UNK);
M2C_UNK fn_80005888();
void *get_up_vector_for_viewing_mtx();
M2C_UNK fn_8014BB10();
M2C_UNK fn_8014F858(void *, M2C_UNK *, M2C_UNK *);
extern M2C_UNK __files;
extern M2C_UNK lbl_80221CF8;
u32 fn_8001A3F0(s32 **);
extern u32 lbl_802C0270;
extern u32 lbl_803504A8;
extern f32 lbl_803514A0;
s32 *fn_80005868(s32);
M2C_UNK fn_800058A8();
M2C_UNK fn_8014F768(M2C_UNK *, M2C_UNK, s32, s32 *);
extern u32 lbl_803504AC;
extern f32 lbl_803514A4;
extern f32 lbl_803514A8;
extern f32 lbl_803514AC;
extern f32 lbl_803514B0;

s32 HSD_CObjGetFlags(void *arg0);
void **fn_8001D708(void **arg0, s32 arg1, s32 arg2);
void fn_8001D784(void ***arg0, s32 *arg1, void ***arg2, void ***arg3);
void fn_8001D834(void ***arg0, s32 *arg1, void ***arg2);
void fn_8001D8B0(void **arg0, s32 *arg1, void ***arg2, void *arg3, M2C_UNK arg_sp0);
void fn_8001D988(void *arg0);
u32 fn_8001D9A0(s32 *arg0);
void fn_8001DA64(void *arg0);
void fn_8001DACC(void *arg0, s32 arg1, s32 arg2, u8 arg3, M2C_UNK arg_sp0);
void fn_8001DE38(s8 *arg0);
void fn_8001DE44(void *arg0, s32 arg1, s32 arg2);
void fn_8001DE50(void *arg0, f32 farg0, f32 farg1);
void fn_8001DE5C(void *arg0, u8 arg1);
void fn_8001DEA8(void *arg0, s32 arg1, s32 arg2);
void fn_8001DF04(void *arg0);
void fn_8001DF90(void *arg0, s32 arg1, s32 arg2);
void fn_8001DFA4(void *arg0, void *arg1);
void fn_8001DFC8(void *arg0, s8 arg1, s8 arg2, s8 arg3, s8 arg4);
void fn_8001DFDC(void *arg0, void *arg1);
void fn_8001E000(void *arg0, s8 arg1, s8 arg2, s8 arg3, s8 arg4);
void fn_8001E014(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7, M2C_UNK arg_sp8);
void fn_8001E0D0(void *arg0, u8 *arg1);
void fn_8001E394(void *arg0, s32 arg1);
void fn_8001E4A4(void *arg0, s8 arg1);
void fn_8001E4AC(void *arg0, s8 arg1);
u32 fn_8001E4B4(s32 arg0);
void fn_8001E5B8(void);
void fn_8001E5BC(void *arg0);
void fn_8001E604(s32 *arg0, s32 arg1);
void SetCursorPos(void *arg0, f32 farg0, f32 farg1);
void fn_8001E624(void *arg0, f32 *arg1, f32 *arg2);
void SetCursorBarrier(void *arg0, f32 farg0, f32 farg1);

s32 HSD_CObjGetFlags(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

void **fn_8001D708(void **arg0, s32 arg1, s32 arg2) {
    s32 temp_r31;

    if (arg2 != 0) {
        temp_r31 = M2C_FIELD(*arg0, s32 *, 0);
        fn_80012D5C(temp_r31 + arg2, 1);
        /* draft: did not compile: memcpy(M2C_FIELD(*arg0, s32 *, 0xC) + temp_r31, arg1, arg2); */
    }
    return arg0;
}

void fn_8001D784(void ***arg0, s32 *arg1, void ***arg2, void ***arg3) {
    void **temp_r0;
    void **temp_r3_2;
    void **temp_r5;
    void *temp_r4;
    void **temp_r3;

    temp_r5 = *arg2;
    temp_r3 = *arg3;
    if (temp_r5 == temp_r3) {
        *arg0 = temp_r3;
        return;
    }
    *M2C_FIELD(temp_r4, void ***, 4) = *temp_r5;
    temp_r4 = *temp_r3;
    M2C_FIELD(*temp_r5, void ***, 4) = (void **) M2C_FIELD(temp_r4, void ***, 4);
loop_4:
    temp_r0 = *arg3;
    temp_r3_2 = *arg2;
    if (temp_r3_2 != temp_r0) {
        *arg2 = M2C_FIELD(temp_r3_2, void ***, 4);
        fn_80005888();
        *arg1 -= 1;
        goto loop_4;
    }
    *arg0 = temp_r0;
}

void fn_8001D834(void ***arg0, s32 *arg1, void ***arg2) {
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

void fn_8001D8B0(void **arg0, s32 *arg1, void ***arg2, void *arg3, M2C_UNK arg_sp0) {
    void *spC;
    s32 sp8;
    void **temp_r4;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r5;

    temp_r3 = get_up_vector_for_viewing_mtx(0x14);
    if (temp_r3 == NULL) {
        fn_8014F858(&__files + 0xA0, &lbl_80221CF8, &__files);
        fn_8014BB10();
    }
    /* draft: did not compile: temp_r3_2 = temp_r3 + 8; */
    /* draft: did not compile: sp8 = arg1 + 4; */
    spC = temp_r3;
    if (temp_r3_2 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 8) = (s32) M2C_FIELD(arg3, s32 *, 0);
        M2C_FIELD(temp_r3_2, s32 *, 4) = (s32) M2C_FIELD(arg3, s32 *, 4);
        M2C_FIELD(temp_r3_2, s32 *, 8) = (s32) M2C_FIELD(arg3, s32 *, 8);
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

void fn_8001D988(void *arg0) {
    void *temp_r4;

    /* draft: did not compile: temp_r4 = arg0 + 4; */
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(temp_r4, void **, 4) = temp_r4;
    M2C_FIELD(arg0, void **, 4) = temp_r4;
}

u32 fn_8001D9A0(s32 *arg0) {
    s32 *sp8;
    s8 var_r3;
    s8 var_r30;

    var_r30 = 0;
    /* draft: did not compile: var_r3 = get_up_vector_for_viewing_mtx(0x268); */
    if (var_r3 != 0U) {
        sp8 = arg0;
        if (arg0 != NULL) {
            *arg0 += 1;
        }
        var_r30 = 1;
        var_r3 = fn_8001A3F0(&sp8);
    }
    if (var_r30 != 0) {
        if (sp8 != NULL) {
            M2C_FIELD(sp8, s32 *, 0) -= 1;
            if (((s32) M2C_FIELD(sp8, s32 *, 0) == 0) && (sp8 != NULL)) {
                M2C_FIELD(M2C_FIELD(sp8, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
        }
        sp8 = NULL;
    }
    return var_r3;
}

void fn_8001DA64(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) lbl_803514A0;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) lbl_803514A0;
    M2C_FIELD(arg0, u8 *, 0x14) = 1;
    M2C_FIELD(arg0, u8 *, 0x15) = 0;
    M2C_FIELD(arg0, u8 *, 0x16) = 1;
    lbl_803504A8 = !(lbl_803504A8 == 0U) ? lbl_803504A8 : lbl_802C0270;
    M2C_FIELD(arg0, u8 *, 7) = 0xFF;
    M2C_FIELD(arg0, u8 *, 6) = 0xFF;
    M2C_FIELD(arg0, u8 *, 5) = 0xFF;
    M2C_FIELD(arg0, u8 *, 4) = 0xFF;
    M2C_FIELD(arg0, u8 *, 0xB) = 0;
    M2C_FIELD(arg0, u8 *, 0xA) = 0;
    M2C_FIELD(arg0, u8 *, 9) = 0;
    M2C_FIELD(arg0, u8 *, 8) = 0;
}

void fn_8001DACC(void *arg0, s32 arg1, s32 arg2, u8 arg3, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8001DE38(s8 *arg0) {
    *arg0 = 0;
}

void fn_8001DE44(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
    M2C_FIELD(arg0, s32 *, 0x24) = arg2;
}

void fn_8001DE50(void *arg0, f32 farg0, f32 farg1) {
    M2C_FIELD(arg0, f32 *, 0xC) = farg0;
    M2C_FIELD(arg0, f32 *, 0x10) = farg1;
}

void fn_8001DE5C(void *arg0, u8 arg1) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0) != 0U) {
        if (arg1 != 0) {
            fn_8001DEA8((void *)(0), (long)(M2C_FIELD(arg0, s32 *, 0x1C)), (long)(0));
            return;
        }
        /* draft: did not compile: fn_8001DEA8(M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, s32 *, 0x24)); */
    }
}

void fn_8001DEA8(void *arg0, s32 arg1, s32 arg2) {
    s32 var_ctr;
    s32 var_r5;
    s32 var_r7;
    s32 var_r8;

    if ((u32) M2C_FIELD(arg0, u32 *, 0) != 0U) {
        var_r7 = arg1 * 4;
        var_ctr = arg2 - arg1;
        if (arg1 < arg2) {
            do {
                var_r8 = 0;
                var_r5 = 0;
loop_4:
                if (var_r8 < (s32) M2C_FIELD(arg0, s32 *, 0x18)) {
                    var_r8 += 1;
                    /* draft: did not compile: *(*(var_r7 + M2C_FIELD(arg0, u32 *, 0)) + var_r5) = 0; */
                    var_r5 += 0xA;
                    goto loop_4;
                }
                var_r7 += 4;
                var_ctr -= 1;
            } while (var_ctr != 0);
        }
    }
}

void fn_8001DF04(void *arg0) {
    s32 var_r30;
    s32 var_r31;
    u32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0) != 0U) {
        var_r30 = 0;
        var_r31 = 0;
loop_5:
        if (var_r30 < (s32) M2C_FIELD(arg0, s32 *, 0x1C)) {
            /* draft: did not compile: temp_r3 = *(M2C_FIELD(arg0, u32 *, 0) + var_r31); */
            if (temp_r3 != 0U) {
                fn_800058A8(temp_r3 - 0x10);
            }
            var_r31 += 4;
            var_r30 += 1;
            goto loop_5;
        }
        fn_800058A8(M2C_FIELD(arg0, u32 *, 0));
        M2C_FIELD(arg0, u32 *, 0) = 0U;
    }
}

void fn_8001DF90(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x28) = arg1;
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (arg2 + M2C_FIELD(arg0, s32 *, 0x20));
}

void fn_8001DFA4(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u8 *, 4) = (u8) M2C_FIELD(arg1, u8 *, 0);
    M2C_FIELD(arg0, u8 *, 5) = (u8) M2C_FIELD(arg1, u8 *, 1);
    M2C_FIELD(arg0, u8 *, 6) = (u8) M2C_FIELD(arg1, u8 *, 2);
    M2C_FIELD(arg0, u8 *, 7) = (u8) M2C_FIELD(arg1, u8 *, 3);
}

void fn_8001DFC8(void *arg0, s8 arg1, s8 arg2, s8 arg3, s8 arg4) {
    M2C_FIELD(arg0, s8 *, 4) = arg1;
    M2C_FIELD(arg0, s8 *, 5) = arg2;
    M2C_FIELD(arg0, s8 *, 6) = arg3;
    M2C_FIELD(arg0, s8 *, 7) = arg4;
}

void fn_8001DFDC(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u8 *, 8) = (u8) M2C_FIELD(arg1, u8 *, 0);
    M2C_FIELD(arg0, u8 *, 9) = (u8) M2C_FIELD(arg1, u8 *, 1);
    M2C_FIELD(arg0, u8 *, 0xA) = (u8) M2C_FIELD(arg1, u8 *, 2);
    M2C_FIELD(arg0, u8 *, 0xB) = (u8) M2C_FIELD(arg1, u8 *, 3);
}

void fn_8001E000(void *arg0, s8 arg1, s8 arg2, s8 arg3, s8 arg4) {
    M2C_FIELD(arg0, s8 *, 8) = arg1;
    M2C_FIELD(arg0, s8 *, 9) = arg2;
    M2C_FIELD(arg0, s8 *, 0xA) = arg3;
    M2C_FIELD(arg0, s8 *, 0xB) = arg4;
}

void fn_8001E014(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7, M2C_UNK arg_sp8) {
    M2C_UNK sp74;
    s32 *sp70;
    M2C_UNK *sp6C;
    s32 sp68;
    f64 sp60;
    f64 sp58;
    f64 sp50;
    f64 sp48;
    f64 sp40;
    f64 sp38;
    f64 sp30;
    f64 sp28;
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;

    if (M2C_ERROR(/* Read from unset register $cr0_eq */)) {
        sp28 = farg0;
        sp30 = farg1;
        sp38 = farg2;
        sp40 = farg3;
        sp48 = farg4;
        sp50 = farg5;
        sp58 = farg6;
        sp60 = farg7;
    }
    sp8 = arg0;
    spC = arg1;
    sp10 = arg2;
    sp14 = arg3;
    sp18 = arg4;
    sp1C = arg5;
    sp20 = arg6;
    sp24 = arg7;
    sp68 = 0x02000000;
    sp6C = &arg_sp8;
    sp70 = &sp8;
    fn_8014F768(&sp74, 0x400, arg1, &sp68);
    /* draft: did not compile: fn_8001E0D0(arg0, &sp74); */
}

void fn_8001E0D0(void *arg0, u8 *arg1) {
    u8 sp8;
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r5;
    s32 temp_r5_2;
    u8 *var_r30;
    u8 *var_r6;
    u8 temp_r31;
    u8 temp_r3_3;

    var_r30 = arg1;
    if ((u32) M2C_FIELD(arg0, u32 *, 0) != 0U) {
        if (((u8) M2C_FIELD(arg0, u8 *, 0x14) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x2C) < 0)) {
            fn_8001E394((void *)(0), (long)(0));
            M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        }
loop_40:
        temp_r31 = *var_r30;
        if ((s8) temp_r31 != 0) {
            var_r30 += 1;
            switch ((s32) temp_r31) {               /* irregular */
            case 13:
                M2C_FIELD(arg0, s32 *, 0x28) = 0;
                break;
            case 10:
                M2C_FIELD(arg0, s32 *, 0x28) = 0;
                M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) + 1);
                break;
            default:
                if (((u8) M2C_FIELD(arg0, u8 *, 0x15) == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x18) <= (s32) M2C_FIELD(arg0, s32 *, 0x28))) {
                    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) + 1);
                    M2C_FIELD(arg0, s32 *, 0x28) = 0;
                }
                if ((u8) M2C_FIELD(arg0, u8 *, 0x14) != 0) {
                    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
                    temp_r3 = M2C_FIELD(arg0, s32 *, 0x2C);
                    if (temp_r0 <= temp_r3) {
                        fn_8001E394(arg0, (temp_r3 - temp_r0) + 1);
                        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) - 1);
                    }
                    temp_r4 = M2C_FIELD(arg0, s32 *, 0x24);
                    temp_r5 = M2C_FIELD(arg0, s32 *, 0x2C);
                    if (temp_r4 <= temp_r5) {
                        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (temp_r5 + 1);
                        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) - (temp_r4 - M2C_FIELD(arg0, s32 *, 0x20)));
                    }
                }
                if ((s32) temp_r31 == 9) {
                    M2C_FIELD(arg0, s32 *, 0x28) = (s32) ((M2C_FIELD(arg0, s32 *, 0x28) + 8) & 0xFFFFFFF8);
                } else {
                    sp8 = 0;
                    temp_r5_2 = M2C_FIELD(arg0, s32 *, 0x28);
                    if ((temp_r5_2 >= 0) && (temp_r5_2 < (s32) M2C_FIELD(arg0, s32 *, 0x18)) && (temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x2C), ((temp_r3_2 < 0) == 0)) && (temp_r3_2 < (s32) M2C_FIELD(arg0, s32 *, 0x1C))) {
                        /* draft: did not compile: var_r6 = *(M2C_FIELD(arg0, u32 *, 0) + (temp_r3_2 * 4)) + (temp_r5_2 * 0xA); */
                    } else {
                        var_r6 = &sp8;
                    }
                    if ((((s32) temp_r31 >= 0x20) && ((s32) temp_r31 <= 0x7E)) || (((s32) temp_r31 >= 0xA1) && ((s32) temp_r31 <= 0xDF))) {
                        M2C_FIELD(var_r6, u8 *, 0) = temp_r31;
                        M2C_FIELD(var_r6, u8 *, 1) = 0U;
                    } else {
                        temp_r3_3 = *var_r30;
                        if (((s32) temp_r31 >= 0x81) && ((s32) temp_r31 <= 0x98) && ((s32) temp_r3_3 >= 0x40) && ((s32) temp_r3_3 <= 0xFC)) {
                            M2C_FIELD(var_r6, u8 *, 0) = temp_r31;
                            var_r30 += 1;
                            M2C_FIELD(var_r6, u8 *, 1) = temp_r3_3;
                            M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + 1);
                            if (var_r6 != &sp8) {
                                temp_r4_2 = M2C_FIELD(arg0, s32 *, 0x28);
                                if (temp_r4_2 < (s32) M2C_FIELD(arg0, s32 *, 0x18)) {
                                    /* draft: did not compile: *(*(M2C_FIELD(arg0, u32 *, 0) + (M2C_FIELD(arg0, s32 *, 0x2C) * 4)) + (temp_r4_2 * 0xA)) = 0; */
                                }
                            }
                        } else {
                            M2C_FIELD(var_r6, u8 *, 0) = 0x20;
                            M2C_FIELD(var_r6, u8 *, 1) = 0U;
                        }
                    }
                    M2C_FIELD(var_r6, u8 *, 2) = (u8) M2C_FIELD(arg0, u8 *, 4);
                    M2C_FIELD(var_r6, u8 *, 3) = (u8) M2C_FIELD(arg0, u8 *, 5);
                    M2C_FIELD(var_r6, u8 *, 4) = (u8) M2C_FIELD(arg0, u8 *, 6);
                    M2C_FIELD(var_r6, u8 *, 5) = (u8) M2C_FIELD(arg0, u8 *, 7);
                    M2C_FIELD(var_r6, u8 *, 6) = (u8) M2C_FIELD(arg0, u8 *, 8);
                    M2C_FIELD(var_r6, u8 *, 7) = (u8) M2C_FIELD(arg0, u8 *, 9);
                    M2C_FIELD(var_r6, u8 *, 8) = (u8) M2C_FIELD(arg0, u8 *, 0xA);
                    M2C_FIELD(var_r6, u8 *, 9) = (u8) M2C_FIELD(arg0, u8 *, 0xB);
                    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + 1);
                }
                break;
            }
            goto loop_40;
        }
    }
}

void fn_8001E394(void *arg0, s32 arg1) {
    s32 *temp_r3;
    s32 *var_r5;
    s32 temp_r0;
    s32 temp_r3_2;
    s32 temp_r5;
    s32 temp_r6;
    s32 var_r31;
    s32 var_r7;

    var_r31 = arg1;
    if ((s32 *) M2C_FIELD(arg0, s32 **, 0) != NULL) {
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x1C);
        if ((var_r31 <= (s32) -temp_r5) || (temp_r5 <= var_r31)) {
            fn_8001DE5C(arg0, 1);
            return;
        }
        if (var_r31 > 0) {
            var_r31 = arg1 % temp_r5;
            fn_8001DEA8((void *)(0), (long)(var_r31), (long)(0));
        } else if (var_r31 < 0) {
            var_r31 = temp_r5 - (-var_r31 % temp_r5);
            /* draft: did not compile: fn_8001DEA8(var_r31); */
        }
        temp_r3 = fn_80005868(M2C_FIELD(arg0, s32 *, 0x1C) * 4);
        var_r7 = 0;
        var_r5 = temp_r3;
loop_10:
        temp_r6 = M2C_FIELD(arg0, s32 *, 0x1C);
        if (var_r7 < temp_r6) {
            temp_r3_2 = var_r7 + var_r31;
            temp_r0 = temp_r3_2 / temp_r6;
            var_r7 += 1;
            *var_r5 = *(M2C_FIELD(arg0, s32 **, 0) + ((temp_r3_2 - (temp_r0 * temp_r6)) * 4));
            var_r5 += 4;
            goto loop_10;
        }
        fn_800058A8(M2C_FIELD(arg0, s32 **, 0));
        M2C_FIELD(arg0, s32 **, 0) = temp_r3;
    }
}

void fn_8001E4A4(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x14) = arg1;
}

void fn_8001E4AC(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x15) = arg1;
}

u32 fn_8001E4B4(s32 arg0) { return 0; } /* draft: stub */

void fn_8001E5B8(void) {

}

void fn_8001E5BC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_803514A8;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) lbl_803514A8;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) lbl_803514A8;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_803514AC;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_803514B0;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_803514A8;
    M2C_FIELD(arg0, s8 *, 0x3C) = 0;
    M2C_FIELD(arg0, s8 *, 0x3D) = 0;
    M2C_FIELD(arg0, s8 *, 0x40) = 0;
    M2C_FIELD(arg0, s8 *, 0x41) = 1;
}

void fn_8001E604(s32 *arg0, s32 arg1) {
    if ((s32) *arg0 != arg1) {
        *arg0 = arg1;
    }
}

void SetCursorPos(void *arg0, f32 farg0, f32 farg1) {
    M2C_FIELD(arg0, f32 *, 8) = farg0;
    M2C_FIELD(arg0, f32 *, 0xC) = farg1;
}

void fn_8001E624(void *arg0, f32 *arg1, f32 *arg2) {
    *arg1 = M2C_FIELD(arg0, f32 *, 8);
    *arg2 = M2C_FIELD(arg0, f32 *, 0xC);
}

void SetCursorBarrier(void *arg0, f32 farg0, f32 farg1) {
    M2C_FIELD(arg0, f32 *, 0x20) = farg0;
    M2C_FIELD(arg0, f32 *, 0x24) = farg1;
}
