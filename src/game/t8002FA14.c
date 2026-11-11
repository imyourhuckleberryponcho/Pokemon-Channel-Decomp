/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

s32 get_up_vector_for_viewing_mtx();
M2C_UNK fn_8014BB10();
M2C_UNK fn_8014F858(void *, M2C_UNK *, M2C_UNK *);
extern M2C_UNK __files;
extern M2C_UNK lbl_80222DC4;
extern M2C_UNK lbl_80222DE0;
M2C_UNK fn_80005888(void *);
M2C_UNK fn_800146F0(void *, M2C_UNK);
void *fn_800208F4();
M2C_UNK GetMotionEndFrame(void **, M2C_UNK, void *);
M2C_UNK fn_80031B74();
void *fn_800A163C(M2C_UNK, s32);
M2C_UNK method_setTTColSpacing(void *, M2C_UNK);
extern M2C_UNK lbl_802C0270;
extern f32 lbl_80351720;
extern f32 lbl_80351724;
extern f32 lbl_80351728;
extern f32 lbl_8035172C;
extern f32 lbl_80351730;
f64 fn_80151CE4(u8 **, u8 **);
extern f32 lbl_80351734;
M2C_UNK fn_80015F5C();
M2C_UNK fn_80031A90();
u8 *fn_801518D0(u8 *, M2C_UNK *);
s32 strncmp();
u8 *strchr();
s32 strlen();
extern M2C_UNK lbl_8034E888;
extern M2C_UNK lbl_8034E88C;
extern f32 lbl_80351738;
M2C_UNK fn_80012CF8();
s32 method_requestMotionUrgently(s32, s32, f32);
M2C_UNK fn_800A17A8(void *);
void *fn_800A7338(s32, M2C_UNK);
extern void *lbl_803504E8;
M2C_UNK fn_800319F0();
u8 method_isMotionCompleted(s32, s32, M2C_UNK);
M2C_UNK fn_800A1950(void *);
extern f32 lbl_80351748;
M2C_UNK fn_800A1984(s32, M2C_UNK, M2C_UNK, M2C_UNK, f32, f32, f32);
M2C_UNK fn_80012D5C(u32 **, s32, M2C_UNK);
M2C_UNK memmove(u32 *, u32 *, s32);
extern M2C_UNK lbl_80222E30;
M2C_UNK fn_80014440(u32 **, M2C_UNK, u32, M2C_UNK, M2C_UNK);
extern M2C_UNK lbl_80222E4C;

void fn_8002FA14(void *arg0, u32 arg1, u32 arg2, M2C_UNK arg_sp0);
void fn_8002FB00(void *arg1, void *arg2);
void *fn_8002FCC0(void *arg0, s16 arg1);
void fn_8002FD20(s32 arg0, void *arg1);
void fn_8002FD8C(s32 arg1);
void *fn_8002FDB4(void *arg0, s16 arg1);
void *fn_8002FEA4(void *arg0, void *arg1);
void fn_8002FF44(void *arg0);
void fn_8002FFB0(void *arg1);
void *fn_80030078(s32 arg0, void *arg1);
void fn_80030184(u32 arg1, s32 arg2);
void *fn_800301B4(void *arg0, void *arg1);
void *fn_80030384(void *arg0);
u8 *fn_80030830(f32 *arg1, f32 *arg2);
void fn_800308C0(s32 arg0, u8 *arg1);
s32 fn_80030A54(s32 *arg0);
void fn_80030A68(void *arg0, s32 arg1);
void fn_80030AD4(void *arg0, f32 farg0);
void fn_80030B28(void *arg0, s32 arg1, f32 farg0);
void fn_80030C30(void *arg0);
void fn_80030F44(void *arg0);
void fn_80030F98(void *arg0);
void fn_800310A0(void *arg0);
void fn_800312F4(void *arg0, s32 arg1);
void fn_80031384(void *arg0);
void fn_800313CC(void *arg0, s8 arg1);
u32 **fn_800313D4(u32 **arg0, u32 *arg1, s32 arg2, M2C_UNK arg_sp0);
u32 **fn_80031578(u32 **arg0, u32 **arg1, u32 arg2, u32 arg3);
s32 fn_800317DC(u32 **arg0, s32 arg1, M2C_UNK arg_sp0);
void fn_8003192C(void ***arg0, s32 *arg1, void ***arg2, void ***arg3);

void fn_8002FA14(void *arg0, u32 arg1, u32 arg2, M2C_UNK arg_sp0) {
    s32 temp_r27;
    s32 temp_r3;
    s32 var_r27;
    u32 var_r30;

    var_r30 = arg1;
    temp_r27 = (s32) (arg2 - var_r30) / 8;
    if ((u32) M2C_FIELD(arg0, u32 *, 4) > 0x1FFFFFFFU) {
        fn_8014F858(&__files + 0xA0, &lbl_80222DE0, &__files);
        fn_8014BB10();
    }
    if ((u32) temp_r27 != 0U) {
        temp_r3 = get_up_vector_for_viewing_mtx(temp_r27 * 8);
        if (temp_r3 == 0) {
            fn_8014F858(&__files + 0xA0, &lbl_80222DC4, &__files);
            fn_8014BB10();
        }
        M2C_FIELD(arg0, s32 *, 8) = temp_r3;
        M2C_FIELD(arg0, s32 *, 0) = temp_r27;
        var_r27 = M2C_FIELD(arg0, s32 *, 8);
loop_7:
        if (var_r30 != arg2) {
            /* draft: did not compile: fn_8002FB00(arg0, var_r27, var_r30); */
            var_r30 += 8;
            var_r27 += 8;
            M2C_FIELD(arg0, u32 *, 4) = (u32) (M2C_FIELD(arg0, u32 *, 4) + 1);
            goto loop_7;
        }
    }
}

void fn_8002FB00(void *arg1, void *arg2) { } /* draft: stub */

void *fn_8002FCC0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        fn_8002FF44((void *)(0));
        if ((u32) M2C_FIELD(arg0, u32 *, 8) != 0U) {
            fn_80005888((void *)(0));
        }
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

void fn_8002FD20(s32 arg0, void *arg1) {
    if ((u32) M2C_FIELD(arg1, u32 *, 0) != 0U) {
        fn_8002FD20((long)(0), (void *)(0));
    }
    if ((u32) M2C_FIELD(arg1, u32 *, 4) != 0U) {
        fn_8002FD20((long)(arg0), (void *)(0));
    }
    /* draft: did not compile: fn_8002FD8C(arg0, arg1 + 0xC); */
    fn_80005888(arg1);
}

void fn_8002FD8C(s32 arg1) {
    /* draft: did not compile: fn_8002FDB4(arg1, -1); */
}

void *fn_8002FDB4(void *arg0, s16 arg1) {
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
                        /* draft: did not compile: fn_8002FD20(temp_r31_2); */
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

void *fn_8002FEA4(void *arg0, void *arg1) {
    M2C_UNK *temp_r0;
    M2C_UNK *temp_r4;
    M2C_UNK *var_r3;

    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(arg1, M2C_UNK **, 4);
    M2C_FIELD(arg0, u8 *, 8) = (u8) M2C_FIELD(arg1, u8 *, 8);
    M2C_FIELD(arg0, M2C_UNK **, 0xC) = (M2C_UNK *) M2C_FIELD(arg1, M2C_UNK **, 0xC);
    if ((M2C_UNK *) M2C_FIELD(arg1, M2C_UNK **, 4) != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = fn_80030078((long)(0), (void *)(0));
        temp_r4 = M2C_FIELD(arg0, M2C_UNK **, 4);
        /* draft: did not compile: M2C_FIELD(temp_r4, s32 *, 8) = (s32) ((s32) (arg0 + 4) | (M2C_FIELD(temp_r4, s32 *, 8) & 1)); */
        var_r3 = M2C_FIELD(arg0, M2C_UNK **, 4);
loop_3:
        /* draft: did not compile: temp_r0 = *var_r3; */
        if (temp_r0 != NULL) {
            var_r3 = temp_r0;
            goto loop_3;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0xC) = var_r3;
    } else {
        /* draft: did not compile: M2C_FIELD(arg0, M2C_UNK **, 0xC) = (M2C_UNK *) (arg0 + 4); */
    }
    return arg0;
}

void fn_8002FF44(void *arg0) {
    u32 temp_r31;
    u32 var_r30;

    temp_r31 = M2C_FIELD(arg0, u32 *, 8);
    var_r30 = temp_r31 + (M2C_FIELD(arg0, s32 *, 4) * 8);
loop_2:
    if (var_r30 > temp_r31) {
        var_r30 -= 8;
        fn_8002FFB0((void *)(arg0));
        goto loop_2;
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

#pragma push
#pragma dont_inline on
void fn_8002FFB0(void *arg1) {
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    u8 temp_r0;
    void *temp_r31;
    void *temp_r31_2;

    if (arg1 != NULL) {
        temp_r0 = M2C_FIELD(arg1, u8 *, 4);
        switch ((s32) temp_r0) {                    /* irregular */
        case 3:
            fn_800146F0(M2C_FIELD(arg1, void **, 0), 1);
            break;
        case 4:
            temp_r31 = M2C_FIELD(arg1, void **, 0);
            temp_cr0_eq = temp_r31 == NULL;
            if (temp_cr0_eq == 0) {
                if (temp_cr0_eq == 0) {
                    fn_8002FCC0(temp_r31, 0);
                }
                fn_80005888(temp_r31);
            }
            break;
        case 5:
            temp_r31_2 = M2C_FIELD(arg1, void **, 0);
            if ((temp_cr0_eq_2 = temp_r31_2 == NULL) == 0) {
                if ((temp_cr0_eq_2 == 0) && ((u32) M2C_FIELD(temp_r31_2, u32 *, 4) != 0U)) {
                    /* draft: did not compile: fn_8002FD20(temp_r31_2); */
                }
                fn_80005888(temp_r31_2);
            }
            break;
        }
        M2C_FIELD(arg1, u8 *, 4) = 0U;
    }
}
#pragma pop

void *fn_80030078(s32 arg0, void *arg1) {
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;

    /* draft: did not compile: temp_r3 = get_up_vector_for_viewing_mtx(0x18); */
    if (temp_r3 == NULL) {
        fn_8014F858(&__files + 0xA0, &lbl_80222DC4, &__files);
        fn_8014BB10();
    }
    M2C_FIELD(temp_r3, void **, 4) = NULL;
    M2C_FIELD(temp_r3, void **, 0) = NULL;
    if ((u32) M2C_FIELD(arg1, u32 *, 0) != 0U) {
        M2C_FIELD(temp_r3, void **, 0) = fn_80030078((long)(arg0), (void *)(0));
        temp_r3_2 = M2C_FIELD(temp_r3, void **, 0);
        M2C_FIELD(temp_r3_2, s32 *, 8) = (s32) ((s32) temp_r3 | (M2C_FIELD(temp_r3_2, s32 *, 8) & 1));
    }
    if ((u32) M2C_FIELD(arg1, u32 *, 4) != 0U) {
        M2C_FIELD(temp_r3, void **, 4) = fn_80030078((long)(arg0), (void *)(0));
        temp_r3_3 = M2C_FIELD(temp_r3, void **, 4);
        M2C_FIELD(temp_r3_3, s32 *, 8) = (s32) ((s32) temp_r3 | (M2C_FIELD(temp_r3_3, s32 *, 8) & 1));
    }
    /* draft: did not compile: fn_80030184(arg0, temp_r3 + 0xC, arg1 + 0xC); */
    if (M2C_FIELD(arg1, s32 *, 8) & 1) {
        M2C_FIELD(temp_r3, s32 *, 8) = (s32) (M2C_FIELD(temp_r3, s32 *, 8) | 1);
    } else {
        M2C_FIELD(temp_r3, s32 *, 8) = (s32) (M2C_FIELD(temp_r3, s32 *, 8) & 0xFFFFFFFE);
    }
    return temp_r3;
}

void fn_80030184(u32 arg1, s32 arg2) {
    if (arg1 != 0U) {
        /* draft: did not compile: fn_800301B4(arg1, arg2); */
    }
}

void *fn_800301B4(void *arg0, void *arg1) { } /* draft: stub */

void *fn_80030384(void *arg0) {
    s32 sp2C;
    void *sp10;
    void *sp24;
    void *sp20;
    void *sp18;
    void *sp14;
    M2C_UNK sp28;
    void *spC;
    void *sp8;
    void *temp_r30;
    void *temp_r30_2;
    void *temp_r30_3;
    void *temp_r30_4;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r5_3;
    void *var_r0;
    void *sp1C;

    M2C_FIELD(arg0, s8 *, 0x28) = 1;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    /* draft: did not compile: fn_80031B74(arg0 + 0x2C); */
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    GetMotionEndFrame((void **)(&sp24), (long)(0x1AA), (void *)(0));
    sp20 = sp24;
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
    temp_r30 = M2C_FIELD(M2C_FIELD(sp20, void **, 4), void *(**)(void *), 0xC)(sp20);
    if (sp20 != NULL) {
        M2C_FIELD(sp20, s32 *, 0) = (s32) (M2C_FIELD(sp20, s32 *, 0) - 1);
        if (((s32) M2C_FIELD(sp20, s32 *, 0) == 0) && (sp20 != NULL)) {
            M2C_FIELD(M2C_FIELD(sp20, void **, 4), M2C_UNK (**)(void *, M2C_UNK), 8)(sp20, 1);
        }
    }
    M2C_FIELD(arg0, void **, 4) = temp_r30;
    temp_r3 = M2C_FIELD(arg0, void **, 4);
    sp20 = NULL;
    M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(void *, M2C_UNK *), 0x3C)(temp_r3, &sp28);
    temp_r5 = M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(temp_r5, s32 *, 8) = (s32) (M2C_FIELD(temp_r5, s32 *, 8) | 0x200000);
    GetMotionEndFrame(&sp1C, 0x1AB, temp_r5);
    sp18 = sp1C;
    if (sp1C != NULL) {
        M2C_FIELD(sp1C, s32 *, 0) = (s32) (M2C_FIELD(sp1C, s32 *, 0) + 1);
    }
    if (sp1C != NULL) {
        M2C_FIELD(sp1C, s32 *, 0) = (s32) (M2C_FIELD(sp1C, s32 *, 0) - 1);
        if (((s32) M2C_FIELD(sp1C, s32 *, 0) == 0) && (sp1C != NULL)) {
            M2C_FIELD(M2C_FIELD(sp1C, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
        }
    }
    sp1C = NULL;
    temp_r30_2 = M2C_FIELD(M2C_FIELD(sp18, void **, 4), void *(**)(void *), 0xC)(sp18);
    if (sp18 != NULL) {
        M2C_FIELD(sp18, s32 *, 0) = (s32) (M2C_FIELD(sp18, s32 *, 0) - 1);
        if (((s32) M2C_FIELD(sp18, s32 *, 0) == 0) && (sp18 != NULL)) {
            M2C_FIELD(M2C_FIELD(sp18, void **, 4), M2C_UNK (**)(void *, M2C_UNK), 8)(sp18, 1);
        }
    }
    M2C_FIELD(arg0, void **, 8) = temp_r30_2;
    temp_r3_2 = M2C_FIELD(arg0, void **, 8);
    sp18 = NULL;
    M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 0x20), M2C_UNK (**)(void *, M2C_UNK *), 0x3C)(temp_r3_2, &sp28);
    temp_r5_2 = M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(temp_r5_2, s32 *, 8) = (s32) (M2C_FIELD(temp_r5_2, s32 *, 8) | 0x200000);
    GetMotionEndFrame(&sp14, 0x1BC, temp_r5_2);
    sp10 = sp14;
    if (sp14 != NULL) {
        M2C_FIELD(sp14, s32 *, 0) = (s32) (M2C_FIELD(sp14, s32 *, 0) + 1);
    }
    if (sp14 != NULL) {
        M2C_FIELD(sp14, s32 *, 0) = (s32) (M2C_FIELD(sp14, s32 *, 0) - 1);
        if (((s32) M2C_FIELD(sp14, s32 *, 0) == 0) && (sp14 != NULL)) {
            M2C_FIELD(M2C_FIELD(sp14, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
        }
    }
    sp14 = NULL;
    temp_r30_3 = M2C_FIELD(M2C_FIELD(sp10, void **, 4), void *(**)(void *), 0xC)(sp10);
    if (sp10 != NULL) {
        M2C_FIELD(sp10, s32 *, 0) = (s32) (M2C_FIELD(sp10, s32 *, 0) - 1);
        if (((s32) M2C_FIELD(sp10, s32 *, 0) == 0) && (sp10 != NULL)) {
            M2C_FIELD(M2C_FIELD(sp10, void **, 4), M2C_UNK (**)(void *, M2C_UNK), 8)(sp10, 1);
        }
    }
    M2C_FIELD(arg0, void **, 0xC) = temp_r30_3;
    temp_r5_3 = M2C_FIELD(arg0, void **, 0xC);
    sp10 = NULL;
    M2C_FIELD(temp_r5_3, s32 *, 8) = (s32) (M2C_FIELD(temp_r5_3, s32 *, 8) | 0x200000);
    GetMotionEndFrame(&spC, 0x1BD, temp_r5_3);
    sp8 = spC;
    if (spC != NULL) {
        M2C_FIELD(spC, s32 *, 0) = (s32) (M2C_FIELD(spC, s32 *, 0) + 1);
    }
    if (spC != NULL) {
        M2C_FIELD(spC, s32 *, 0) = (s32) (M2C_FIELD(spC, s32 *, 0) - 1);
        if (((s32) M2C_FIELD(spC, s32 *, 0) == 0) && (spC != NULL)) {
            M2C_FIELD(M2C_FIELD(spC, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
        }
    }
    spC = NULL;
    temp_r30_4 = M2C_FIELD(M2C_FIELD(sp8, void **, 4), void *(**)(void *), 0xC)(sp8);
    if (sp8 != NULL) {
        M2C_FIELD(sp8, s32 *, 0) = (s32) (M2C_FIELD(sp8, s32 *, 0) - 1);
        if (((s32) M2C_FIELD(sp8, s32 *, 0) == 0) && (sp8 != NULL)) {
            M2C_FIELD(M2C_FIELD(sp8, void **, 4), M2C_UNK (**)(void *, M2C_UNK), 8)(sp8, 1);
        }
    }
    M2C_FIELD(arg0, void **, 0x10) = temp_r30_4;
    temp_r4 = M2C_FIELD(arg0, void **, 0x10);
    sp8 = NULL;
    M2C_FIELD(temp_r4, s32 *, 8) = (s32) (M2C_FIELD(temp_r4, s32 *, 8) | 0x200000);
    /* draft: did not compile: var_r0 = get_up_vector_for_viewing_mtx(0x88, temp_r4); */
    var_r0 = var_r0 == NULL ? var_r0 : fn_800A163C(0, M2C_FIELD(&lbl_802C0270, s32 *, 8));
    method_setTTColSpacing(M2C_FIELD(arg0, void **, 0x24), -2);
    temp_r4_2 = M2C_FIELD(arg0, void **, 0x24);
    M2C_FIELD(temp_r4_2, f32 *, 0x40) = (f32) lbl_8035172C;
    temp_r4_3 = M2C_FIELD(arg0, void **, 0x24);
    M2C_FIELD(temp_r4_2, f32 *, 0x44) = (f32) (((lbl_80351720 * -sp2C) / lbl_80351724) - lbl_80351728);
    M2C_FIELD(arg0, void **, 0x24) = var_r0;
    M2C_FIELD(temp_r4_3, f32 *, 0x48) = (f32) lbl_80351730;
    M2C_FIELD(temp_r4_3, f32 *, 0x4C) = (f32) lbl_80351730;
    return arg0;
}

u8 *fn_80030830(f32 *arg1, f32 *arg2) {
    u8 *sp8;

    *arg1 = (f32) fn_80151CE4((unsigned char **)(&sp8), (unsigned char **)(0));
    if ((s32) *sp8 == 0x3B) {
        *arg2 = (f32) fn_80151CE4((u8 **) (sp8 + 1), &sp8);
    } else {
        *arg2 = lbl_80351734;
    }
    if ((s32) *sp8 == 0x6D) {
        sp8 += 1;
    }
    return sp8;
}

#pragma push
#pragma optimize_for_size on
void fn_800308C0(s32 arg0, u8 *arg1) {
    M2C_UNK sp14;
    s32 sp28;
    f32 sp24;
    f32 sp20;
    u32 *sp1C;
    s32 sp18;
    s32 spC;
    M2C_UNK sp10;
    u8 sp8;
    f32 temp_f31;
    u8 *var_r24;
    u8 *var_r25;
    u8 *var_r26;
    u8 *var_r5;

    temp_f31 = lbl_80351734;
    var_r24 = arg1;
loop_17:
    if (var_r24 == NULL) {
        return;
    }
    fn_80015F5C(&sp1C, &sp10);
    sp20 = temp_f31;
    sp24 = temp_f31;
    sp28 = 0;
    switch ((u16)strncmp(var_r24, &lbl_8034E888, 3)) {
    case 0:
            var_r24 += 3;
            sp28 = 1;
        break;
    }
    var_r26 = strchr(var_r24, 0xC);
    var_r25 = fn_801518D0(var_r24, &lbl_8034E88C);
    if (var_r26 == NULL) {
        var_r26 = var_r24 + strlen(var_r24);
    } else if (var_r26 < var_r25) {
        var_r25 = NULL;
    }
    if (var_r25 != NULL) {
        /* draft: did not compile: fn_80030830(var_r25 + 2, &sp20, &sp24); */
    }
    sp8 = spC;
    if (var_r25 != NULL) {
        var_r5 = var_r25;
    } else {
        var_r5 = var_r26;
    }
    /* draft: did not compile: fn_800313D4(&sp1C, var_r24, var_r5, &sp8); */
    if ((u32) *sp1C == 0U) {
        fn_800146F0(&sp1C, -1);
        return;
    }
    sp18 = arg0 + 0x30;
    fn_80031A90(&sp14, arg0 + 0x2C, &sp18, &sp1C);
    if ((s8) *var_r26 == 0) {
        fn_800146F0(&sp1C, -1);
        return;
    }
    var_r24 = var_r26 + 1;
    fn_800146F0(&sp1C, -1);
    goto loop_17;
}
#pragma pop

s32 fn_80030A54(s32 *arg0) {
    return *arg0 != 0;
}

void fn_80030A68(void *arg0, s32 arg1) {
    s32 sp10;
    s32 spC;
    M2C_UNK sp8;
    s32 temp_r7;

    /* draft: did not compile: temp_r7 = arg0 + 0x30; */
    sp10 = temp_r7;
    spC = M2C_FIELD(arg0, s32 *, 0x34);
    /* draft: did not compile: fn_8003192C(&sp8, arg0 + 0x2C, &spC, &sp10, temp_r7); */
    /* draft: did not compile: fn_800308C0(arg0, arg1); */
    fn_80030C30(arg0);
}

void fn_80030AD4(void *arg0, f32 farg0) {
    void *temp_r5;
    void *temp_r5_2;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) == 0U) {
        fn_80030A68((void *)(0), (long)(0));
        return;
    }
    temp_r5 = M2C_FIELD(arg0, void **, 0x30);
    if (lbl_80351738 > M2C_FIELD(temp_r5, f32 *, 0xC)) {
        M2C_FIELD(temp_r5, f32 *, 0xC) = (f32) lbl_80351738;
    }
    temp_r5_2 = M2C_FIELD(arg0, void **, 0x30);
    M2C_FIELD(temp_r5_2, f32 *, 0x10) = farg0;
    /* draft: did not compile: fn_800308C0(temp_r5_2); */
}

#pragma push
#pragma peephole off
void fn_80030B28(void *arg0, s32 arg1, f32 farg0) {
    s32 sp2C;
    f32 sp28;
    f32 sp24;
    M2C_UNK sp20;
    s32 sp1C;
    s32 sp18;
    M2C_UNK sp14;
    s32 sp10;
    M2C_UNK spC;
    M2C_UNK sp8;
    s32 temp_r31;
    u8 var_r30;

    var_r30 = arg1;
    if (var_r30 == 0) {
        fn_80030F44((void *)(0));
        return;
    }
    /* draft: did not compile: temp_r31 = arg0 + 0x30; */
    sp1C = temp_r31;
    sp18 = M2C_FIELD(arg0, s32 *, 0x34);
    /* draft: did not compile: fn_8003192C(&sp14, arg0 + 0x2C, &sp18, &sp1C); */
    fn_80015F5C(&sp20, &sp8);
    sp24 = farg0;
    sp28 = lbl_80351734;
    sp2C = 0;
    if (strncmp(var_r30, &lbl_8034E888, 3) == 0) {
        var_r30 += 3;
        sp2C = 1;
    }
    fn_80012CF8(&sp20, var_r30, strlen(var_r30));
    sp10 = temp_r31;
    /* draft: did not compile: fn_80031A90(&spC, arg0 + 0x2C, &sp10, &sp20); */
    fn_80030C30(arg0);
    fn_800146F0(&sp20, -1);
}
#pragma pop

void fn_80030C30(void *arg0) { } /* draft: stub */

void fn_80030F44(void *arg0) {
    s32 sp10;
    s32 spC;
    M2C_UNK sp8;
    s32 temp_r7;

    /* draft: did not compile: temp_r7 = arg0 + 0x30; */
    sp10 = temp_r7;
    spC = M2C_FIELD(arg0, s32 *, 0x34);
    /* draft: did not compile: fn_8003192C(&sp8, arg0 + 0x2C, &spC, &sp10, temp_r7); */
    fn_80030F98(arg0);
}

void fn_80030F98(void *arg0) { } /* draft: stub */

#pragma push
#pragma dont_inline on
void fn_800310A0(void *arg0) {
    void *spC;
    M2C_UNK sp8;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 temp_r0;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r3_6;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *var_r30;
    s32 var_r29;

    var_r30 = arg0;
    var_r29 = 0;
    do {
        temp_r3 = M2C_FIELD(var_r30, void **, 4);
        if (temp_r3 != NULL) {
            M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(M2C_UNK), 0x18)(0);
        }
        var_r29 += 1;
        /* draft: did not compile: var_r30 += 4; */
    } while (var_r29 < 4);
    fn_800A1950(M2C_FIELD(arg0, void **, 0x24));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0);
    switch (temp_r0) {                              /* irregular */
    case 0:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) + 1);
            temp_r4 = M2C_FIELD(arg0, void **, 0x34);
            temp_f2 = M2C_FIELD(temp_r4, f32 *, 0x10);
            if (lbl_80351738 <= temp_f2) {
                if ((lbl_80351748 * temp_f2) <= (f32) M2C_FIELD(arg0, s32 *, 0x38)) {
                    spC = temp_r4;
                    /* draft: did not compile: fn_800319F0(&sp8, arg0 + 0x2C, &spC); */
                    fn_80030C30(arg0);
                    return;
                }
            }
        }
        return;
    case 1:
        /* draft: did not compile: temp_r4_2 = arg0 + (M2C_FIELD(arg0, s32 *, 0x3C) * 4); */
        if (method_isMotionCompleted(M2C_FIELD(temp_r4_2, s32 *, 4), M2C_FIELD(temp_r4_2, s32 *, 0x14), 0) != 0) {
            M2C_FIELD(arg0, s32 *, 0) = 2;
            temp_r3_2 = M2C_FIELD(arg0, void **, 0x24);
            M2C_FIELD(temp_r3_2, u8 *, 0x10) = 1U;
            if ((u8) M2C_FIELD(temp_r3_2, u8 *, 0x10) == 0) {
                M2C_FIELD(temp_r3_2, s32 *, 0x58) = -1;
                return;
            }
        }
        break;
    case 2:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) + 1);
            temp_f2_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), f32 *, 0xC);
            if (lbl_80351738 <= temp_f2_2) {
                if ((lbl_80351748 * temp_f2_2) <= (f32) M2C_FIELD(arg0, s32 *, 0x38)) {
                    fn_80030F98(arg0);
                    return;
                }
            }
        }
        break;
    case 3:
        /* draft: did not compile: temp_r4_3 = arg0 + (M2C_FIELD(arg0, s32 *, 0x3C) * 4); */
        if (method_isMotionCompleted(M2C_FIELD(temp_r4_3, s32 *, 4), M2C_FIELD(temp_r4_3, s32 *, 0x14), 0) != 0) {
            M2C_FIELD(arg0, s32 *, 0) = 0;
            temp_r3_3 = M2C_FIELD(arg0, void **, 4);
            M2C_FIELD(temp_r3_3, s32 *, 8) = (s32) (M2C_FIELD(temp_r3_3, s32 *, 8) | 0x200000);
            temp_r3_4 = M2C_FIELD(arg0, void **, 8);
            M2C_FIELD(temp_r3_4, s32 *, 8) = (s32) (M2C_FIELD(temp_r3_4, s32 *, 8) | 0x200000);
            temp_r3_5 = M2C_FIELD(arg0, void **, 0xC);
            M2C_FIELD(temp_r3_5, s32 *, 8) = (s32) (M2C_FIELD(temp_r3_5, s32 *, 8) | 0x200000);
            temp_r3_6 = M2C_FIELD(arg0, void **, 0x10);
            M2C_FIELD(temp_r3_6, s32 *, 8) = (s32) (M2C_FIELD(temp_r3_6, s32 *, 8) | 0x200000);
        }
        break;
    }
}
#pragma pop

void fn_800312F4(void *arg0, s32 arg1) {
    s32 var_r30;
    void *temp_r3;
    void *var_r31;

    if ((u8) M2C_FIELD(arg0, u8 *, 0x28) != 0) {
        var_r30 = 0;
        var_r31 = arg0;
        do {
            temp_r3 = M2C_FIELD(var_r31, void **, 4);
            if ((temp_r3 != NULL) && !(M2C_FIELD(temp_r3, s32 *, 8) & 0x200000)) {
                M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(M2C_UNK, M2C_UNK, s32), 0x20)(0, 0, arg1);
            }
            var_r30 += 1;
            /* draft: did not compile: var_r31 += 4; */
        } while (var_r30 < 4);
    }
}

void fn_80031384(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x28) != 0) {
        fn_800A1984(M2C_FIELD(arg0, s32 *, 0x24), 1, 0xA, 1, lbl_80351738, lbl_80351738, lbl_80351738);
    }
}

void fn_800313CC(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x28) = arg1;
}

u32 **fn_800313D4(u32 **arg0, u32 *arg1, s32 arg2, M2C_UNK arg_sp0) {
    u32 sp8;
    s32 temp_r29;
    s32 temp_r4_2;
    u32 *temp_r3;
    u32 *temp_r3_2;
    u32 *temp_r3_3;
    u32 *var_r31;
    u32 *var_r3;
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r4;

    temp_r3 = *arg0;
    /* draft: did not compile: temp_r29 = arg2 - arg1; */
    temp_r0 = M2C_FIELD(temp_r3, u32 *, 0xC);
    if (0 /* draft: did not compile */) {
        if ((u32) M2C_FIELD(temp_r3, u32 *, 8) > 1U) {
            sp8 = temp_r4;
            var_r31 = *arg0;
            if ((u32) M2C_FIELD(var_r31, u32 *, 8) <= 1U) {

            } else {
                /* draft: did not compile: temp_r3_2 = get_up_vector_for_viewing_mtx(0x10); */
                if (temp_r3_2 == NULL) {
                    fn_8014F858(&__files + 0xA0, &lbl_80222E30, &__files);
                    fn_8014BB10();
                }
                if (temp_r3_2 != NULL) {
                    temp_r4_2 = sp8 & 3;
                    M2C_FIELD(temp_r3_2, s32 *, 4) = (s32) ((sp8 + 3) - temp_r4_2);
                    M2C_FIELD(temp_r3_2, s32 *, 8) = 1;
                    /* draft: did not compile: temp_r3_3 = get_up_vector_for_viewing_mtx(M2C_FIELD(temp_r3_2, s32 *, 4) + 1, temp_r4_2); */
                    if (temp_r3_3 == NULL) {
                        fn_8014F858(&__files + 0xA0, &lbl_80222E30, &__files);
                        fn_8014BB10();
                    }
                    M2C_FIELD(temp_r3_2, u32 **, 0xC) = temp_r3_3;
                }
                M2C_FIELD(var_r31, u32 *, 8) = (u32) (M2C_FIELD(var_r31, u32 *, 8) - 1);
                if ((u32) M2C_FIELD(var_r31, u32 *, 0) < sp8) {
                    var_r3 = var_r31;
                } else {
                    var_r3 = &sp8;
                }
                memcpy(M2C_FIELD(temp_r3_2, u32 **, 0xC), M2C_FIELD(var_r31, u32 **, 0xC), *var_r3 + 1);
                temp_r0_2 = M2C_FIELD(var_r31, u32 *, 0);
                var_r31 = temp_r3_2;
                M2C_FIELD(temp_r3_2, u32 *, 0) = temp_r0_2;
            }
            *arg0 = var_r31;
        }
        memmove(M2C_FIELD(*arg0, u32 **, 0xC), arg1, temp_r29);
        fn_80012D5C(arg0, temp_r29, 1);
    } else {
        fn_80012D5C(arg0, temp_r29, 0);
        memcpy(M2C_FIELD(*arg0, u32 **, 0xC), arg1, temp_r29);
    }
    return arg0;
}

u32 **fn_80031578(u32 **arg0, u32 **arg1, u32 arg2, u32 arg3) { return 0; } /* draft: stub */

s32 fn_800317DC(u32 **arg0, s32 arg1, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

void fn_8003192C(void ***arg0, s32 *arg1, void ***arg2, void ***arg3) {
    void **temp_r0;
    void **temp_r3;
    void **temp_r3_2;
    void **temp_r3_4;
    void **temp_r5;
    void *temp_r3_3;
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
loop_6:
    temp_r3_2 = *arg2;
    temp_r0 = *arg3;
    if (temp_r3_2 != temp_r0) {
        temp_r3_3 = temp_r3_2 + 8;
        if (temp_r3_3 != NULL) {
            fn_800146F0(temp_r3_3, -1);
        }
        temp_r3_4 = *arg2;
        *arg2 = M2C_FIELD(temp_r3_4, void ***, 4);
        fn_80005888(temp_r3_4);
        *arg1 -= 1;
        goto loop_6;
    }
    *arg0 = temp_r0;
}
