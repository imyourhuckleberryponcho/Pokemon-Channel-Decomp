/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_80012CF8();
M2C_UNK fn_80015570(M2C_UNK, M2C_UNK, M2C_UNK, s32, void *, f32, f32, void *, f32);
M2C_UNK fn_8001BADC(void **, void *);
M2C_UNK SetCursorPos(s32, f32, f32);
u32 fn_8002B3F4(s32, M2C_UNK);
M2C_UNK fn_8002B628(void *, s32, M2C_UNK);
M2C_UNK fn_8002BD98(void *, M2C_UNK);
M2C_UNK CloseSystemMenu(void *);
s32 fn_8002C0D8(void *);
s32 fn_8002C2D8(void *, s32);
M2C_UNK *fn_80034370(s32, void *, M2C_UNK *);
s32 method_requestMotionUrgently(void *, u32, f32);
M2C_UNK *method_getItemName(void *);
M2C_UNK *fn_800762BC(void *);
M2C_UNK fn_800796D0(s32, s32, void *);
void *fn_8007B144();
s32 fn_800807CC(M2C_UNK);
M2C_UNK *GetPiktyName();
M2C_UNK fn_800A17A8(void *);
M2C_UNK fn_8014F5B4(M2C_UNK *, M2C_UNK *, M2C_UNK *);
s32 strlen();
extern M2C_UNK lbl_801CB330;
extern M2C_UNK lbl_80222138;
extern s32 lbl_803504F8;
extern f32 lbl_80351618;
extern f32 lbl_80351620;
extern f32 lbl_80351674;
extern f32 lbl_80351678;
extern f32 lbl_803516E8;
extern f32 lbl_80351708;
M2C_UNK fn_8001FFF4(void **, s32);
s32 strcmp(s32, s32);
M2C_UNK fn_800A1984(M2C_UNK, M2C_UNK, M2C_UNK, f32, f32, f32);
M2C_UNK fn_800ABFD4(s32 *, M2C_UNK, M2C_UNK, f32, f32, f32, f32, f32);
extern f32 lbl_8035170C;
extern f32 lbl_80351710;
extern f32 lbl_80351714;
extern f32 lbl_80351718;
M2C_UNK fn_80005888(void **);
M2C_UNK fn_800146F0(void *, M2C_UNK);
M2C_UNK fn_8002FCC0(void *, M2C_UNK);
M2C_UNK fn_8002FD20(void *);
void *get_up_vector_for_viewing_mtx(M2C_UNK);
M2C_UNK fn_8014BB10();
M2C_UNK fn_8014F858(void *, M2C_UNK *, M2C_UNK *);
extern M2C_UNK __files;
extern M2C_UNK lbl_80222DC4;
void *fn_800208F4(f32);
M2C_UNK fn_8002FA14(s32, s32, u8 *);
M2C_UNK fn_8002FEA4(f32);

void fn_8002DA1C(void *arg0, s32 arg1, s32 arg2, M2C_UNK arg_sp0);
void fn_8002E674(void *arg0);
void fn_8002E764(s32 *arg1, void *arg2, u8 arg3, M2C_UNK arg_sp0);
void fn_8002EAE4(s32 arg0);
void fn_8002EB0C(s32 arg0);
void fn_8002EB34(s32 arg0);
void RemoveSystemMenuProgram(void *arg0, s32 arg2);
void RemoveSystemMenuTV(void *arg0, s32 arg2);
void fn_8002EC14(void *arg0);
void fn_8002EE94(void ***arg0, s32 *arg1, void ***arg2, void ***arg3);
void fn_8002EF54(s32 arg1);
void *fn_8002EF7C(void *arg0, s16 arg1);
void fn_8002F06C(void ***arg0, s32 *arg1, void ***arg2);
void fn_8002F104(void **arg0, s32 *arg1, void ***arg2, s32 arg3, M2C_UNK arg_sp0);
void fn_8002F1CC(u32 arg1, s32 arg2);
void *fn_8002F1FC(void *arg0, void *arg1);
void *fn_8002F3CC(void *arg0, s16 arg1);
void fn_8002F4B4(void *arg0);
void fn_8002F4CC(void ***arg0, s32 *arg1, void ***arg2, void ***arg3);
void fn_8002F57C(void **arg0, s32 *arg1, void ***arg2, s32 arg3, M2C_UNK arg_sp0);
void fn_8002F664(void *arg0);
void fn_8002F67C(void ***arg0, s32 *arg1, void ***arg2, void ***arg3, M2C_UNK arg_sp0);
void fn_8002F774(void **arg0, s32 *arg1, void ***arg2, s32 **arg3, M2C_UNK arg_sp0);
void fn_8002F854(void *arg0);
void fn_8002F86C(void ***arg0, s32 *arg1, void ***arg2);
void fn_8002F924(void **arg0, s32 *arg1, void ***arg2, void *arg3, M2C_UNK arg_sp0);
void fn_8002F9FC(void *arg0);

void fn_8002DA1C(void *arg0, s32 arg1, s32 arg2, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8002E674(void *arg0) {
    void *sp34;
    s32 sp30;
    M2C_UNK sp2C;
    void *sp28;
    s32 sp24;
    M2C_UNK sp20;
    void *sp1C;
    s32 sp18;
    M2C_UNK sp14;
    void *sp10;
    s32 spC;
    M2C_UNK sp8;
    void *temp_r3;
    void *temp_r7;
    void *temp_r7_2;
    void *temp_r7_3;
    void *temp_r7_4;

    /* draft: did not compile: temp_r7 = arg0 + 0x94; */
    sp34 = temp_r7;
    sp30 = M2C_FIELD(arg0, s32 *, 0x98);
    /* draft: did not compile: fn_8002EE94(&sp2C, arg0 + 0x90, &sp30, &sp34, temp_r7); */
    /* draft: did not compile: temp_r7_2 = arg0 + 0xAC; */
    sp28 = temp_r7_2;
    sp24 = M2C_FIELD(arg0, s32 *, 0xB0);
    /* draft: did not compile: fn_8002EE94(&sp20, arg0 + 0xA8, &sp24, &sp28, temp_r7_2); */
    /* draft: did not compile: temp_r7_3 = arg0 + 0xA0; */
    sp1C = temp_r7_3;
    sp18 = M2C_FIELD(arg0, s32 *, 0xA4);
    /* draft: did not compile: fn_8002EE94(&sp14, arg0 + 0x9C, &sp18, &sp1C, temp_r7_3); */
    /* draft: did not compile: temp_r7_4 = arg0 + 0xBC; */
    sp10 = temp_r7_4;
    spC = M2C_FIELD(arg0, s32 *, 0xC0);
    /* draft: did not compile: fn_8002F4CC(&sp8, arg0 + 0xB8, &spC, &sp10, temp_r7_4); */
    M2C_FIELD(arg0, s32 *, 0xE8) = 0;
    temp_r3 = M2C_FIELD(arg0, void **, 0xD4);
    if (temp_r3 != NULL) {
        M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(M2C_UNK), 8)(1);
    }
    M2C_FIELD(arg0, void **, 0xD4) = NULL;
    M2C_FIELD(arg0, s8 *, 0xFC) = 1;
}

void fn_8002E764(s32 *arg1, void *arg2, u8 arg3, M2C_UNK arg_sp0) {
    void *sp28;
    void *sp24;
    M2C_UNK sp20;
    void *sp1C;
    void *sp18;
    M2C_UNK sp14;
    void *sp10;
    void *spC;
    M2C_UNK sp8;
    s32 temp_r0;
    void *var_r30;
    s32 temp_r3;
    void *temp_r26;
    s32 temp_r29;

    fn_8001FFF4(&sp24, *arg1);
    sp28 = sp24;
    if (sp24 != NULL) {
        M2C_FIELD(sp24, s32 *, 0) = (s32) (M2C_FIELD(sp24, s32 *, 0) + 1);
    }
    if (sp24 != NULL) {
        M2C_FIELD(sp24, s32 *, 0) = (s32) (M2C_FIELD(sp24, s32 *, 0) - 1);
        if (((s32) M2C_FIELD(sp24, s32 *, 0) == 0) && (sp24 != NULL)) {
            M2C_FIELD(M2C_FIELD(sp24, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
        }
    }
    sp24 = NULL;
    temp_r29 = M2C_FIELD(M2C_FIELD(sp28, void **, 4), s32 (**)(void *), 0x34)(sp28);
    var_r30 = M2C_FIELD(arg2, void **, 8);
    /* draft: did not compile: temp_r26 = arg2 + 4; */
loop_40:
    if (var_r30 == temp_r26) {
        spC = temp_r26;
        /* draft: did not compile: fn_8002F104(&sp8, arg2, &spC, arg1); */
        if (sp28 != NULL) {
            M2C_FIELD(sp28, s32 *, 0) = (s32) (M2C_FIELD(sp28, s32 *, 0) - 1);
            if (((s32) M2C_FIELD(sp28, s32 *, 0) == 0) && (sp28 != NULL)) {
                M2C_FIELD(M2C_FIELD(sp28, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
        }
        sp28 = NULL;
        return;
    }
    if (arg3 != 0) {
        temp_r3 = *arg1;
        temp_r0 = M2C_FIELD(var_r30, s32 *, 8);
        if (temp_r3 == temp_r0) {
            if (sp28 != NULL) {
                M2C_FIELD(sp28, s32 *, 0) = (s32) (M2C_FIELD(sp28, s32 *, 0) - 1);
                if (((s32) M2C_FIELD(sp28, s32 *, 0) == 0) && (sp28 != NULL)) {
                    M2C_FIELD(M2C_FIELD(sp28, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
                }
            }
            sp28 = NULL;
            return;
        }
        if (temp_r3 < temp_r0) {
            sp1C = var_r30;
            /* draft: did not compile: fn_8002F104(&sp20, arg2, &sp1C, arg1); */
            if (sp28 != NULL) {
                M2C_FIELD(sp28, s32 *, 0) = (s32) (M2C_FIELD(sp28, s32 *, 0) - 1);
                if (((s32) M2C_FIELD(sp28, s32 *, 0) == 0) && (sp28 != NULL)) {
                    M2C_FIELD(M2C_FIELD(sp28, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
                }
            }
            sp28 = NULL;
            return;
        }
        goto block_39;
    }
    fn_8001FFF4(&sp18, M2C_FIELD(var_r30, s32 *, 8));
    if ((&sp18 != &sp28) && (sp18 != sp28)) {
        if (sp18 != NULL) {
            M2C_FIELD(sp18, s32 *, 0) = (s32) (M2C_FIELD(sp18, s32 *, 0) + 1);
        }
        if (sp28 != NULL) {
            M2C_FIELD(sp28, s32 *, 0) = (s32) (M2C_FIELD(sp28, s32 *, 0) - 1);
            if (((s32) M2C_FIELD(sp28, s32 *, 0) == 0) && (sp28 != NULL)) {
                M2C_FIELD(M2C_FIELD(sp28, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
        }
        sp28 = sp18;
    }
    if (sp18 != NULL) {
        M2C_FIELD(sp18, s32 *, 0) = (s32) (M2C_FIELD(sp18, s32 *, 0) - 1);
        if (((s32) M2C_FIELD(sp18, s32 *, 0) == 0) && (sp18 != NULL)) {
            M2C_FIELD(M2C_FIELD(sp18, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
        }
    }
    sp18 = NULL;
    if (strcmp(temp_r29, M2C_FIELD(M2C_FIELD(sp28, void **, 4), s32 (**)(void *), 0x34)(sp28)) <= 0) {
        sp10 = var_r30;
        /* draft: did not compile: fn_8002F104(&sp14, arg2, &sp10, arg1); */
        if (sp28 != NULL) {
            M2C_FIELD(sp28, s32 *, 0) = (s32) (M2C_FIELD(sp28, s32 *, 0) - 1);
            if (((s32) M2C_FIELD(sp28, s32 *, 0) == 0) && (sp28 != NULL)) {
                M2C_FIELD(M2C_FIELD(sp28, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
        }
        sp28 = NULL;
        return;
    }
block_39:
    var_r30 = M2C_FIELD(var_r30, void **, 4);
    goto loop_40;
}

void fn_8002EAE4(s32 arg0) {
    /* draft: did not compile: fn_8002E764(arg0 + 0x90, 0); */
}

void fn_8002EB0C(s32 arg0) {
    /* draft: did not compile: fn_8002E764(arg0 + 0xA8, 0); */
}

void fn_8002EB34(s32 arg0) {
    /* draft: did not compile: fn_8002E764(arg0 + 0x9C, 1); */
}

void RemoveSystemMenuProgram(void *arg0, s32 arg2) {
    M2C_UNK spC;
    void *sp8;
    void *var_r3;

    var_r3 = M2C_FIELD(arg0, void **, 0xA4);
loop_4:
    if (0 /* draft: did not compile */) {
        return;
    }
    if (arg2 == (s32) M2C_FIELD(var_r3, s32 *, 8)) {
        sp8 = var_r3;
        /* draft: did not compile: fn_8002F06C(&spC, arg0 + 0x9C, &sp8); */
        return;
    }
    var_r3 = M2C_FIELD(var_r3, void **, 4);
    goto loop_4;
}

void RemoveSystemMenuTV(void *arg0, s32 arg2) {
    M2C_UNK spC;
    void *sp8;
    void *var_r3;

    var_r3 = M2C_FIELD(arg0, void **, 0xB0);
loop_4:
    if (0 /* draft: did not compile */) {
        return;
    }
    if (arg2 == (s32) M2C_FIELD(var_r3, s32 *, 8)) {
        sp8 = var_r3;
        /* draft: did not compile: fn_8002F06C(&spC, arg0 + 0xA8, &sp8); */
        return;
    }
    var_r3 = M2C_FIELD(var_r3, void **, 4);
    goto loop_4;
}

void fn_8002EC14(void *arg0) {
    s32 spC;
    s8 spB;
    s8 spA;
    s8 sp9;
    s8 sp8;
    s16 var_r29;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r3_6;
    void *temp_r3_7;
    void *temp_r3_8;
    void *var_r30;

    temp_r3 = M2C_FIELD(arg0, void **, 0xD0);
    if (temp_r3 != NULL) {
        M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(M2C_UNK, M2C_UNK, M2C_UNK), 0x20)(0, 0, 4);
        temp_r3_2 = M2C_FIELD(arg0, void **, 0xD0);
        M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 0x20), M2C_UNK (**)(void *, M2C_UNK, M2C_UNK, M2C_UNK), 0x20)(temp_r3_2, 0, 0, 8);
    }
    temp_r3_3 = M2C_FIELD(arg0, void **, 0xD8);
    if ((temp_r3_3 != NULL) && !(M2C_FIELD(temp_r3_3, s32 *, 8) & 0x200000)) {
        M2C_FIELD(M2C_FIELD(temp_r3_3, void **, 0x20), M2C_UNK (**)(M2C_UNK, M2C_UNK, M2C_UNK), 0x20)(0, 0, 4);
        temp_r3_4 = M2C_FIELD(arg0, void **, 0xD8);
        M2C_FIELD(M2C_FIELD(temp_r3_4, void **, 0x20), M2C_UNK (**)(void *, M2C_UNK, M2C_UNK, M2C_UNK), 0x20)(temp_r3_4, 0, 0, 8);
    }
    temp_r3_5 = M2C_FIELD(arg0, void **, 0xDC);
    if ((temp_r3_5 != NULL) && !(M2C_FIELD(temp_r3_5, s32 *, 8) & 0x200000)) {
        M2C_FIELD(M2C_FIELD(temp_r3_5, void **, 0x20), M2C_UNK (**)(M2C_UNK, M2C_UNK, M2C_UNK), 0x20)(0, 0, 4);
        temp_r3_6 = M2C_FIELD(arg0, void **, 0xDC);
        M2C_FIELD(M2C_FIELD(temp_r3_6, void **, 0x20), M2C_UNK (**)(void *, M2C_UNK, M2C_UNK, M2C_UNK), 0x20)(temp_r3_6, 0, 0, 8);
    }
    if ((void *) M2C_FIELD(arg0, void **, 0xD4) != NULL) {
        sp8 = 0;
        sp9 = 0;
        spA = 0;
        spB = 0;
        spC = (s32) sp8;
        fn_800ABFD4(&spC, 1, 0xFFFFFF, lbl_8035170C, lbl_80351710, lbl_80351714, lbl_80351618, lbl_80351718);
        temp_r3_7 = M2C_FIELD(arg0, void **, 0xD4);
        M2C_FIELD(M2C_FIELD(temp_r3_7, void **, 0x20), M2C_UNK (**)(void *, M2C_UNK, M2C_UNK, M2C_UNK), 0x20)(temp_r3_7, 0, 0, 4);
        temp_r3_8 = M2C_FIELD(arg0, void **, 0xD4);
        M2C_FIELD(M2C_FIELD(temp_r3_8, void **, 0x20), M2C_UNK (**)(void *, M2C_UNK, M2C_UNK, M2C_UNK), 0x20)(temp_r3_8, 0, 0, 8);
    }
    if ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0xE4) == 2) {
        var_r29 = 0;
        var_r30 = arg0;
        do {
            if ((u32) M2C_FIELD(var_r30, u32 *, 0x68) != 0U) {
                fn_800A1984(1, 0xA, 1, lbl_80351618, lbl_80351618, lbl_80351618);
            }
            var_r29 += 1;
            /* draft: did not compile: var_r30 += 4; */
        } while (var_r29 < 7);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x84) != 0U) {
            fn_800A1984(1, 0xA, 1, lbl_80351618, lbl_80351618, lbl_80351618);
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x88) != 0U) {
            fn_800A1984(1, 0xA, 1, lbl_80351618, lbl_80351618, lbl_80351618);
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x8C) != 0U) {
            fn_800A1984(1, 0xA, 1, lbl_80351618, lbl_80351618, lbl_80351618);
        }
    }
}

void fn_8002EE94(void ***arg0, s32 *arg1, void ***arg2, void ***arg3) {
    void **temp_r0;
    void **temp_r3;
    void **temp_r3_2;
    void **temp_r4_2;
    void **temp_r5;
    void *temp_r4;

    temp_r5 = *arg2;
    temp_r3 = *arg3;
    if (temp_r5 == temp_r3) {
        *arg0 = temp_r3;
        return;
    }
    temp_r4 = *temp_r3;
    M2C_FIELD(*temp_r5, void ***, 4) = (void **) M2C_FIELD(temp_r4, void ***, 4);
    *M2C_FIELD(temp_r4, void ***, 4) = *temp_r5;
loop_4:
    temp_r4_2 = *arg2;
    temp_r0 = *arg3;
    if (temp_r4_2 != temp_r0) {
        /* draft: did not compile: fn_8002EF54(arg1, temp_r4_2 + 8); */
        *arg1 -= 1;
        temp_r3_2 = *arg2;
        *arg2 = M2C_FIELD(temp_r3_2, void ***, 4);
        fn_80005888(temp_r3_2);
        goto loop_4;
    }
    *arg0 = temp_r0;
}

void fn_8002EF54(s32 arg1) {
    /* draft: did not compile: fn_8002EF7C(arg1, -1); */
}

void *fn_8002EF7C(void *arg0, s16 arg1) {
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    u8 temp_r0;
    void *temp_r31;
    void *temp_r31_2;

    if (arg0 != NULL) {
        if (0 /* draft: did not compile */) {
            temp_r0 = M2C_FIELD(arg0, u8 *, 8);
            switch ((s32) temp_r0) {                /* irregular */
            case 3:
                fn_800146F0(M2C_FIELD(arg0, void **, 4), 1);
                break;
            case 4:
                temp_r31 = M2C_FIELD(arg0, void **, 4);
                temp_cr0_eq = temp_r31 == NULL;
                if (temp_cr0_eq == 0) {
                    if (temp_cr0_eq == 0) {
                        fn_8002FCC0(temp_r31, 0);
                    }
                    fn_80005888(temp_r31);
                }
                break;
            case 5:
                temp_r31_2 = M2C_FIELD(arg0, void **, 4);
                temp_cr0_eq_2 = temp_r31_2 == NULL;
                if (temp_cr0_eq_2 == 0) {
                    if ((temp_cr0_eq_2 == 0) && ((u32) M2C_FIELD(temp_r31_2, u32 *, 4) != 0U)) {
                        fn_8002FD20(temp_r31_2);
                    }
                    fn_80005888(temp_r31_2);
                }
                break;
            }
            M2C_FIELD(arg0, u8 *, 8) = 0U;
        }
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

void fn_8002F06C(void ***arg0, s32 *arg1, void ***arg2) {
    void **temp_r5;
    void **temp_r6;

    temp_r6 = *arg2;
    *arg2 = M2C_FIELD(temp_r6, void ***, 4);
    M2C_FIELD(M2C_FIELD(temp_r6, void **, 0), void ***, 4) = (void **) M2C_FIELD(temp_r6, void ***, 4);
    temp_r5 = M2C_FIELD(temp_r6, void ***, 4);
    *temp_r5 = M2C_FIELD(temp_r6, void **, 0);
    /* draft: did not compile: fn_8002EF54(arg1, temp_r6 + 8, temp_r5, temp_r6); */
    fn_80005888(temp_r6);
    *arg1 -= 1;
    *arg0 = *arg2;
}

void fn_8002F104(void **arg0, s32 *arg1, void ***arg2, s32 arg3, M2C_UNK arg_sp0) {
    void *spC;
    s32 sp8;
    void **temp_r4;
    void *temp_r3;

    temp_r3 = get_up_vector_for_viewing_mtx(0x14);
    if (temp_r3 == NULL) {
        fn_8014F858(&__files + 0xA0, &lbl_80222DC4, &__files);
        fn_8014BB10();
    }
    /* draft: did not compile: sp8 = arg1 + 4; */
    spC = temp_r3;
    /* draft: did not compile: fn_8002F1CC(arg1, temp_r3 + 8, arg3); */
    temp_r4 = *arg2;
    spC = NULL;
    M2C_FIELD(*temp_r4, void **, 4) = temp_r3;
    M2C_FIELD(temp_r3, void **, 0) = (void *) *temp_r4;
    *temp_r4 = temp_r3;
    M2C_FIELD(temp_r3, void ***, 4) = temp_r4;
    *arg1 += 1;
    *arg0 = temp_r3;
}

void fn_8002F1CC(u32 arg1, s32 arg2) {
    if (arg1 != 0U) {
        /* draft: did not compile: fn_8002F1FC(arg1, arg2); */
    }
}

void *fn_8002F1FC(void *arg0, void *arg1) { } /* draft: stub */

void *fn_8002F3CC(void *arg0, s16 arg1) {
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    u8 temp_r0;
    void *temp_r31;
    void *temp_r31_2;

    if (arg0 != NULL) {
        temp_r0 = M2C_FIELD(arg0, u8 *, 4);
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
        M2C_FIELD(arg0, u8 *, 4) = 0U;
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

void fn_8002F4B4(void *arg0) {
    void *temp_r4;

    /* draft: did not compile: temp_r4 = arg0 + 4; */
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(temp_r4, void **, 4) = temp_r4;
    M2C_FIELD(arg0, void **, 4) = temp_r4;
}

void fn_8002F4CC(void ***arg0, s32 *arg1, void ***arg2, void ***arg3) {
    void **temp_r0;
    void **temp_r3;
    void **temp_r3_2;
    void **temp_r5;
    void *temp_r4;

    temp_r5 = *arg2;
    temp_r3 = *arg3;
    if (temp_r5 == temp_r3) {
        *arg0 = temp_r3;
        return;
    }
    temp_r4 = *temp_r3;
    M2C_FIELD(*temp_r5, void ***, 4) = (void **) M2C_FIELD(temp_r4, void ***, 4);
    *M2C_FIELD(temp_r4, void ***, 4) = *temp_r5;
loop_4:
    temp_r3_2 = *arg2;
    temp_r0 = *arg3;
    if (temp_r3_2 != temp_r0) {
        *arg2 = M2C_FIELD(temp_r3_2, void ***, 4);
        fn_80005888((void **)(0));
        *arg1 -= 1;
        goto loop_4;
    }
    *arg0 = temp_r0;
}

void fn_8002F57C(void **arg0, s32 *arg1, void ***arg2, s32 arg3, M2C_UNK arg_sp0) {
    void *spC;
    s32 sp8;
    void *temp_r3;
    void *temp_r4;
    void *temp_r5;

    temp_r3 = get_up_vector_for_viewing_mtx(0x1C);
    if (temp_r3 == NULL) {
        fn_8014F858(&__files + 0xA0, &lbl_80222DC4, &__files);
        fn_8014BB10();
    }
    /* draft: did not compile: temp_r4 = temp_r3 + 8; */
    /* draft: did not compile: sp8 = arg1 + 4; */
    spC = temp_r3;
    if (temp_r4 != NULL) {
        /* draft: did not compile: M2C_STRUCT_COPY(temp_r4, arg3, 0x14); */
    }
    M2C_FIELD(temp_r5, void **, 0) = (void *) *(*arg2);
    temp_r5 = spC;
    spC = NULL;
    *(*arg2) = temp_r5;
    M2C_FIELD(temp_r5, void ***, 4) = (*arg2);
    M2C_FIELD(*(*arg2), void **, 4) = temp_r5;
    *arg1 += 1;
    *arg0 = temp_r5;
}

void fn_8002F664(void *arg0) {
    void *temp_r4;

    /* draft: did not compile: temp_r4 = arg0 + 4; */
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(temp_r4, void **, 4) = temp_r4;
    M2C_FIELD(arg0, void **, 4) = temp_r4;
}

void fn_8002F67C(void ***arg0, s32 *arg1, void ***arg2, void ***arg3, M2C_UNK arg_sp0) {
    void **temp_r0;
    void **temp_r3;
    void **temp_r3_2;
    void **temp_r3_4;
    void **temp_r5;
    void *temp_r3_3;
    void *temp_r4;
    void *temp_r4_2;

    temp_r5 = *arg2;
    temp_r3 = *arg3;
    if (temp_r5 == temp_r3) {
        *arg0 = temp_r3;
        return;
    }
    temp_r4 = *temp_r3;
    M2C_FIELD(*temp_r5, void ***, 4) = (void **) M2C_FIELD(temp_r4, void ***, 4);
    *M2C_FIELD(temp_r4, void ***, 4) = *temp_r5;
loop_10:
    temp_r3_2 = *arg2;
    temp_r0 = *arg3;
    if (temp_r3_2 != temp_r0) {
        if ((temp_r3_2 + 8) != NULL) {
            temp_r4_2 = M2C_FIELD(temp_r3_2, void **, 8);
            if (temp_r4_2 != NULL) {
                M2C_FIELD(temp_r4_2, s32 *, 0) = (s32) (M2C_FIELD(temp_r4_2, s32 *, 0) - 1);
                if ((s32) M2C_FIELD(temp_r4_2, s32 *, 0) == 0) {
                    temp_r3_3 = M2C_FIELD(temp_r3_2, void **, 8);
                    if (temp_r3_3 != NULL) {
                        M2C_FIELD(M2C_FIELD(temp_r3_3, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
                    }
                }
            }
            M2C_FIELD(temp_r3_2, void **, 8) = NULL;
        }
        temp_r3_4 = *arg2;
        *arg2 = M2C_FIELD(temp_r3_4, void ***, 4);
        fn_80005888(temp_r3_4);
        *arg1 -= 1;
        goto loop_10;
    }
    *arg0 = temp_r0;
}

void fn_8002F774(void **arg0, s32 *arg1, void ***arg2, s32 **arg3, M2C_UNK arg_sp0) {
    void *spC;
    s32 sp8;
    s32 *temp_r4;
    void **temp_r4_2;
    void *temp_r3;
    void *temp_r5;

    temp_r3 = get_up_vector_for_viewing_mtx(0xC);
    if (temp_r3 == NULL) {
        fn_8014F858(&__files + 0xA0, &lbl_80222DC4, &__files);
        fn_8014BB10();
    }
    /* draft: did not compile: sp8 = arg1 + 4; */
    spC = temp_r3;
    if (0 /* draft: did not compile */) {
        M2C_FIELD(temp_r3, s32 **, 8) = (s32 *) *arg3;
        temp_r4 = M2C_FIELD(temp_r3, s32 **, 8);
        if (temp_r4 != NULL) {
            *temp_r4 += 1;
        }
    }
    temp_r4_2 = *arg2;
    temp_r5 = spC;
    spC = NULL;
    M2C_FIELD(*temp_r4_2, void **, 4) = temp_r5;
    M2C_FIELD(temp_r5, void **, 0) = (void *) *temp_r4_2;
    *temp_r4_2 = temp_r5;
    M2C_FIELD(temp_r5, void ***, 4) = temp_r4_2;
    *arg1 += 1;
    *arg0 = temp_r5;
}

void fn_8002F854(void *arg0) {
    void *temp_r4;

    /* draft: did not compile: temp_r4 = arg0 + 4; */
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(temp_r4, void **, 4) = temp_r4;
    M2C_FIELD(arg0, void **, 4) = temp_r4;
}

void fn_8002F86C(void ***arg0, s32 *arg1, void ***arg2) {
    s32 temp_cr0_eq;
    void **temp_r5;
    void *temp_r3;

    temp_r5 = *arg2;
    *arg2 = M2C_FIELD(temp_r5, void ***, 4);
    M2C_FIELD(M2C_FIELD(temp_r5, void **, 0), void ***, 4) = (void **) M2C_FIELD(temp_r5, void ***, 4);
    *M2C_FIELD(temp_r5, void ***, 4) = M2C_FIELD(temp_r5, void **, 0);
    if ((temp_r5 + 8) != NULL) {
        temp_r3 = M2C_FIELD(temp_r5, void **, 0x10);
        temp_cr0_eq = temp_r3 == NULL;
        if ((temp_cr0_eq == 0) && (temp_cr0_eq == 0)) {
            M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(M2C_UNK), 8)(1);
        }
    }
    fn_80005888(temp_r5);
    *arg1 -= 1;
    *arg0 = *arg2;
}

void fn_8002F924(void **arg0, s32 *arg1, void ***arg2, void *arg3, M2C_UNK arg_sp0) {
    void *spC;
    s32 sp8;
    void **temp_r4;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r5;

    temp_r3 = get_up_vector_for_viewing_mtx(0x14);
    if (temp_r3 == NULL) {
        fn_8014F858(&__files + 0xA0, &lbl_80222DC4, &__files);
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

void fn_8002F9FC(void *arg0) {
    void *temp_r4;

    /* draft: did not compile: temp_r4 = arg0 + 4; */
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(temp_r4, void **, 4) = temp_r4;
    M2C_FIELD(arg0, void **, 4) = temp_r4;
}
