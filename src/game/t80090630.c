/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK *get_up_vector_for_viewing_mtx(M2C_UNK);
M2C_UNK fn_80005888(M2C_UNK *);
M2C_UNK fn_800146F0(M2C_UNK *, M2C_UNK);
M2C_UNK fn_80014798(M2C_UNK *, s32, M2C_UNK *);
M2C_UNK *fn_800208F4(M2C_UNK *);
M2C_UNK fn_8002FCC0(M2C_UNK *, M2C_UNK);
M2C_UNK fn_8002FD20(M2C_UNK *);
M2C_UNK fn_80031578(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK method_setProperty(M2C_UNK *, M2C_UNK **);
u8 fn_8007F61C();
u8 fn_8007F65C(s32);
M2C_UNK fn_8008065C();
M2C_UNK *fn_80080738();
f32 fn_80080764(s32);
s32 fn_80080790(s32);
M2C_UNK fn_80089738(s32);
void *fn_8007A5D0(s32);
M2C_UNK fn_8008063C(s32, s32);
M2C_UNK fn_80080698(s32, f32);
M2C_UNK fn_800806D4(s32, s32);
s32 fn_80080710();
extern f32 lbl_80351A78;
u8 method_eraseProperty(s32);
s32 fn_8007FC40();
M2C_UNK method_getPosYShouldBe(s32, f32 *, void *);
M2C_UNK fn_80074FD8();
M2C_UNK fn_8007554C();
s32 method_playSound(s32, s32, f32);
extern f32 lbl_80351A8C;
M2C_UNK method_stopSound();
M2C_UNK method_recalcSound(s32, f32);
s32 method_playSoundEnv(s32, s32, f32);
void *fn_800735A0(s32, M2C_UNK);
M2C_UNK fn_80073D4C();
M2C_UNK HSD_JObjSetupMatrixSub(void *);
M2C_UNK fn_80104500(f32 *);
M2C_UNK HSD_MtxGetTranslate(f32 *);
M2C_UNK __assert(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_8034FC40;
extern M2C_UNK lbl_8034FC48;
s32 method_getPlayingMotId();
s32 method_getPlayingMPID();
void *fn_8007B144();
M2C_UNK ClsPokemonMini();
M2C_UNK fn_8006B084(s32, s32);
s32 fn_80081350(M2C_UNK);
M2C_UNK TerminatePokemonMini();
M2C_UNK DisablePokemonMiniController();
M2C_UNK EnablePokemonMiniController();
M2C_UNK SetPokemonMiniVolume();

s32 scr_method_setProperty(s32 arg0);
s32 scr_method_getProperty(s32 arg0);
s32 scr_method_doesPropertyExist(s32 arg0);
s32 scr_method_eraseProperty(s32 arg0);
s32 scr_method_getPosYShouldBe(s32 arg0);
s32 scr_method_getOriginalPosX(s32 arg0);
s32 scr_method_getOriginalPosY(s32 arg0);
s32 scr_method_getOriginalPosZ(s32 arg0);
s32 scr_method_getOriginalRotateX(s32 arg0);
s32 scr_method_getOriginalRotateY(s32 arg0);
s32 scr_method_getOriginalRotateZ(s32 arg0);
s32 scr_method_playSound(s32 arg0);
s32 scr_method_stopSound(s32 arg0);
s32 scr_method_recalcSound(s32 arg0);
s32 scr_method_playSoundEnv(s32 arg0);
s32 fn_80091058(s32 arg0, u8 arg1, s32 arg2);
void scr_method_getNodePosX(void);
void scr_method_getNodePosY(void);
void scr_method_getNodePosZ(void);
void scr_method_getNodeRotateX(void);
void scr_method_getNodeRotateY(void);
void scr_method_getNodeRotateZ(void);
s32 scr_method_getPlayingMotId(s32 arg0);
s32 scr_method_getPlayingMPID(s32 arg0);
void *fn_80091348(void *arg0);
void *fn_800913C0(void *arg0);
s32 scr_ClsPokemonMini(s32 arg0);
s32 scr_StartPokemonMini(s32 arg0);
s32 scr_TerminatePokemonMini(s32 arg0);
s32 scr_DisablePokemonMiniController(s32 arg0);
s32 scr_EnablePokemonMiniController(s32 arg0);
s32 scr_SetPokemonMiniVolume(s32 arg0);

#pragma push
#pragma peephole off
s32 scr_method_setProperty(s32 arg0) {
    s32 sp14;
    M2C_UNK *sp10;                                  /* compiler-managed */
    M2C_UNK spC;
    M2C_UNK sp8;
    M2C_UNK *temp_r29;
    M2C_UNK *temp_r30;
    M2C_UNK *var_r0;
    f32 temp_f31;
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    s32 temp_cr0_eq_3;
    s32 temp_cr0_eq_4;
    s32 temp_cr0_eq_5;
    s32 temp_cr0_eq_6;
    u32 temp_cr0_eq_7;
    u32 temp_cr0_eq_8;

    sp14 = 0;
    if (fn_8007F61C() != 0) {
        temp_r30 = fn_80080738(arg0);
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
        sp10 = temp_r30;
        sp14 = 1;
    } else if (fn_8007F65C(arg0) != 0) {
        temp_f31 = fn_80080764(arg0);
        switch ((s32) sp14) {                       /* switch 2; irregular */
        case 3:                                     /* switch 2 */
            fn_800146F0(sp10, 1);
            break;
        case 4:                                     /* switch 2 */
            temp_cr0_eq_3 = sp10 == NULL;
            if (temp_cr0_eq_3 == 0) {
                if (temp_cr0_eq_3 == 0) {
                    fn_8002FCC0(sp10, 0);
                }
                fn_80005888(sp10);
            }
            break;
        case 5:                                     /* switch 2 */
            temp_cr0_eq_4 = sp10 == NULL;
            if (temp_cr0_eq_4 == 0) {
                if ((temp_cr0_eq_4 == 0) && ((u32) M2C_FIELD(sp10, u32 *, 4) != 0U)) {
                    fn_8002FD20(sp10);
                }
                fn_80005888(sp10);
            }
            break;
        }
        /* draft: did not compile: sp10 = temp_f31; */
        sp14 = 2;
    } else {
        fn_80014798(&spC, fn_80080790(arg0), &sp8);
        if (sp14 != 3) {
            switch ((s32) sp14) {                   /* switch 3; irregular */
            case 3:                                 /* switch 3 */
                fn_800146F0(M2C_BITWISE(M2C_UNK *, sp10), 1);
                break;
            case 4:                                 /* switch 3 */
                temp_cr0_eq_5 = M2C_BITWISE(u32, sp10) == 0U;
                if (temp_cr0_eq_5 == 0) {
                    if (temp_cr0_eq_5 == 0) {
                        fn_8002FCC0(M2C_BITWISE(M2C_UNK *, sp10), 0);
                    }
                    fn_80005888(M2C_BITWISE(M2C_UNK *, sp10));
                }
                break;
            case 5:                                 /* switch 3 */
                temp_cr0_eq_6 = M2C_BITWISE(u32, sp10) == 0U;
                if (temp_cr0_eq_6 == 0) {
                    if ((temp_cr0_eq_6 == 0) && ((u32) M2C_FIELD(sp10, u32 *, 4) != 0U)) {
                        fn_8002FD20(M2C_BITWISE(M2C_UNK *, sp10));
                    }
                    fn_80005888(M2C_BITWISE(M2C_UNK *, sp10));
                }
                break;
            }
            sp14 = 3;
            var_r0 = get_up_vector_for_viewing_mtx(4);
            var_r0 = var_r0 == NULL ? var_r0 : fn_800208F4(&spC);
            sp10 = var_r0;
        } else {
            fn_80031578(sp10, &spC, 0, -1);
        }
        fn_800146F0(&spC, -1);
    }
    temp_r29 = fn_80080738(arg0);
    fn_80089738(arg0);
    method_setProperty(temp_r29, &sp10);
    fn_8008065C(arg0, 0);
    switch ((s32) sp14) {                           /* switch 4; irregular */
    case 3:                                         /* switch 4 */
        fn_800146F0(sp10, 1);
        break;
    case 4:                                         /* switch 4 */
        temp_cr0_eq_7 = sp10 == NULL;
        if (temp_cr0_eq_7 == 0) {
            switch (temp_cr0_eq_7) {
            case 0:
                    fn_8002FCC0(sp10, 0);
                break;
            }
            fn_80005888(sp10);
        }
        break;
    case 5:                                         /* switch 4 */
        temp_cr0_eq_8 = sp10 == NULL;
        if (temp_cr0_eq_8 == 0) {
            if ((temp_cr0_eq_8 == 0) && ((u32) M2C_FIELD(sp10, u32 *, 4) != 0U)) {
                fn_8002FD20(sp10);
            }
            fn_80005888(sp10);
        }
        break;
    }
    sp14 = 0;
    return 0;
}
#pragma pop

s32 scr_method_getProperty(s32 arg0) { return 0; } /* draft: stub */

s32 scr_method_doesPropertyExist(s32 arg0) {
    s32 temp_r31;

    /* draft: did not compile: temp_r31 = fn_80080738(); */
    /* draft: did not compile: fn_800913C0(arg0); */
    fn_8008065C(arg0, (u16)fn_8007A5D0(temp_r31) != 0);
    return 0;
}

s32 scr_method_eraseProperty(s32 arg0) {
    s32 temp_r31;

    /* draft: did not compile: temp_r31 = fn_80080738(); */
    /* draft: did not compile: fn_800913C0(arg0); */
    u8 tmp1 = method_eraseProperty(temp_r31);
    fn_8008065C(arg0, tmp1);
    return 0;
}

s32 scr_method_getPosYShouldBe(s32 arg0) {
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f64 temp_f1;
    f64 temp_f30;
    f64 temp_f31;
    s32 temp_r3;
    void *temp_r3_2;

    temp_r3 = fn_8007FC40();
    if (temp_r3 == 4) {
        temp_f31 = fn_80080764(arg0);
        temp_f1 = fn_80080764(arg0);
        temp_f30 = fn_80080764(arg0);
        sp8 = (f32) temp_f1;
        spC = (f32) temp_f31;
        sp10 = (f32) temp_f30;
        sp14 = (f32) temp_f1;
        sp18 = (f32) temp_f31;
        sp1C = (f32) temp_f30;
    }
    /* draft: did not compile: temp_r3_2 = fn_800913C0(arg0); */
    if (temp_r3 == 1) {
        M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 0x20), M2C_UNK (**)(f32 *), 0x3C)(&sp14);
    }
    M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 0x20), M2C_UNK (**)(void *, f32 *), 0x3C)(temp_r3_2, &sp14);
    method_getPosYShouldBe(M2C_FIELD(temp_r3_2, s32 *, 0x24), &sp14, temp_r3_2);
    fn_80080698((long)(arg0), (float)(0));
    return 0;
}

s32 scr_method_getOriginalPosX(s32 arg0) {
    f32 sp8;

    fn_800913C0((void *)(0));
    fn_80074FD8(&sp8);
    fn_80080698(arg0, sp8);
    return 0;
}

s32 scr_method_getOriginalPosY(s32 arg0) {
    s32 spC;
    M2C_UNK sp8;

    fn_800913C0((void *)(0));
    fn_80074FD8(&sp8);
    fn_80080698(arg0, spC);
    return 0;
}

s32 scr_method_getOriginalPosZ(s32 arg0) {
    s32 sp10;
    M2C_UNK sp8;

    fn_800913C0((void *)(0));
    fn_80074FD8(&sp8);
    fn_80080698(arg0, sp10);
    return 0;
}

s32 scr_method_getOriginalRotateX(s32 arg0) {
    f32 sp8;

    fn_800913C0((void *)(0));
    fn_8007554C(&sp8);
    fn_80080698(arg0, sp8);
    return 0;
}

s32 scr_method_getOriginalRotateY(s32 arg0) {
    s32 spC;
    M2C_UNK sp8;

    fn_800913C0((void *)(0));
    fn_8007554C(&sp8);
    fn_80080698(arg0, spC);
    return 0;
}

s32 scr_method_getOriginalRotateZ(s32 arg0) {
    s32 sp10;
    M2C_UNK sp8;

    fn_800913C0((void *)(0));
    fn_8007554C(&sp8);
    fn_80080698(arg0, sp10);
    return 0;
}

s32 scr_method_playSound(s32 arg0) {
    f32 var_f31;
    s32 temp_r30;
    s32 temp_r3;
    s32 var_r31;

    temp_r3 = fn_8007FC40();
    var_f31 = lbl_80351A8C;
    if (temp_r3 > 3) {
        var_f31 = fn_80080764(arg0);
    }
    var_r31 = 0x7F;
    if (temp_r3 > 2) {
        M2C_UNK * dc_fn_80080738 = fn_80080738(arg0);
        /* draft: did not compile: var_r31 = dc_fn_80080738; */
    }
    /* draft: did not compile: temp_r30 = dc_fn_80080738; */
    /* draft: did not compile: fn_800913C0(arg0); */
    fn_8008065C(arg0, method_playSound(temp_r30, var_r31, var_f31));
    return 0;
}

s32 scr_method_stopSound(s32 arg0) {
    fn_800913C0((void *)(0));
    method_stopSound();
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_recalcSound(s32 arg0) {
    f32 var_f31;
    s8 temp_r3;
    s32 var_r31;

    temp_r3 = fn_8007FC40();
    var_f31 = lbl_80351A8C;
    if (temp_r3 > 2) {
        var_f31 = fn_80080764(arg0);
    }
    var_r31 = 0x7F;
    if (temp_r3 > 1) {
        /* draft: did not compile: var_r31 = fn_80080738(arg0); */
    }
    /* draft: did not compile: fn_800913C0(arg0); */
    fn_8008065C(arg0, 0);
    method_recalcSound(var_r31, var_f31);
    return 0;
}

s32 scr_method_playSoundEnv(s32 arg0) {
    f32 var_f31;
    s32 temp_r30;
    s32 temp_r3;
    s32 var_r31;

    temp_r3 = fn_8007FC40();
    var_f31 = lbl_80351A8C;
    if (temp_r3 > 3) {
        var_f31 = fn_80080764(arg0);
    }
    var_r31 = 0x7F;
    if (temp_r3 > 2) {
        M2C_UNK * dc_fn_80080738 = fn_80080738(arg0);
        /* draft: did not compile: var_r31 = dc_fn_80080738; */
    }
    /* draft: did not compile: temp_r30 = dc_fn_80080738; */
    /* draft: did not compile: fn_800913C0(arg0); */
    fn_8008065C(arg0, method_playSoundEnv(temp_r30, var_r31, var_f31));
    return 0;
}

s32 fn_80091058(s32 arg0, u8 arg1, s32 arg2) {
    s32 sp10;
    s32 spC;
    u32 sp20;
    s32 sp1C;
    f32 sp18;
    f32 sp8;
    f32 var_f31;
    s32 temp_cr0_eq;
    s32 temp_r31;
    s32 temp_r4;
    u8 var_r3;
    void *temp_r3;

    temp_r31 = fn_80080790((long)(0));
    /* draft: did not compile: fn_800913C0(arg0); */
    fn_80073D4C();
    temp_r3 = fn_800735A0(temp_r31, 0x4A);
    if (temp_r3 == NULL) {
        __assert(&lbl_8034FC40, 0x47C, &lbl_8034FC48);
    }
    temp_cr0_eq = temp_r3 == NULL;
    if (temp_cr0_eq == 0) {
        if (temp_cr0_eq != 0) {
            __assert(&lbl_8034FC40, 0x25D, &lbl_8034FC48);
        }
        temp_r4 = M2C_FIELD(temp_r3, s32 *, 0x14);
        var_r3 = 0;
        var_r3 = !(!(temp_r4 & 0x800000) && (temp_r4 & 0x40)) ? var_r3 : 1;
        if (var_r3 != 0) {
            HSD_JObjSetupMatrixSub(temp_r3);
        }
    }
    var_f31 = lbl_80351A78;
    if (arg1 != 0) {
        HSD_MtxGetTranslate(&sp18);
        switch (arg2) {                             /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            var_f31 = sp18;
            break;
        case 1:                                     /* switch 1 */
            var_f31 = sp1C;
            break;
        case 2:                                     /* switch 1 */
            var_f31 = sp20;
            break;
        }
    } else {
        fn_80104500(&sp8);
        switch (arg2) {                             /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            var_f31 = sp8;
            break;
        case 1:                                     /* switch 2 */
            var_f31 = spC;
            break;
        case 2:                                     /* switch 2 */
            var_f31 = sp10;
            break;
        }
    }
    fn_80080698(arg0, var_f31);
    return 0;
}

void scr_method_getNodePosX(void) {
    fn_80091058((long)(1), (unsigned char)(0), (long)(0));
}

void scr_method_getNodePosY(void) {
    fn_80091058((long)(1), (unsigned char)(1), (long)(0));
}

void scr_method_getNodePosZ(void) {
    fn_80091058((long)(1), (unsigned char)(2), (long)(0));
}

void scr_method_getNodeRotateX(void) {
    fn_80091058((long)(0), (unsigned char)(0), (long)(0));
}

void scr_method_getNodeRotateY(void) {
    fn_80091058((long)(0), (unsigned char)(1), (long)(0));
}

void scr_method_getNodeRotateZ(void) {
    fn_80091058((long)(0), (unsigned char)(2), (long)(0));
}

s32 scr_method_getPlayingMotId(s32 arg0) {
    fn_800913C0((void *)(0));
    fn_8008065C(arg0, method_getPlayingMotId());
    return 0;
}

s32 scr_method_getPlayingMPID(s32 arg0) {
    fn_800913C0((void *)(0));
    fn_8008065C(arg0, method_getPlayingMPID());
    return 0;
}

void *fn_80091348(void *arg0) {
    s32 temp_r4;
    void *var_r3;

    fn_80080738();
    var_r3 = fn_8007B144();
    if (var_r3 == NULL) {
        return NULL;
    }
    temp_r4 = M2C_FIELD(var_r3, s32 *, 8);
    if (!(temp_r4 & 0x8000)) {
        return NULL;
    }
    if ((temp_r4 & 2) && !(temp_r4 & 0x2000) && ((u32) M2C_FIELD(arg0, u32 *, 0x2E0) != (u32) M2C_FIELD(var_r3, u32 *, 0x24))) {
        var_r3 = NULL;
    }
    return var_r3;
}

void *fn_800913C0(void *arg0) {
    s32 temp_r4;
    void *var_r3;

    fn_80080738();
    var_r3 = fn_8007B144();
    if (var_r3 == NULL) {
        return NULL;
    }
    temp_r4 = M2C_FIELD(var_r3, s32 *, 8);
    if (!(temp_r4 & 0x400)) {
        return NULL;
    }
    if ((temp_r4 & 2) && !(temp_r4 & 0x2000) && ((u32) M2C_FIELD(arg0, u32 *, 0x2E0) != (u32) M2C_FIELD(var_r3, u32 *, 0x24))) {
        var_r3 = NULL;
    }
    return var_r3;
}

s32 scr_ClsPokemonMini(s32 arg0) {
    ClsPokemonMini();
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_StartPokemonMini(s32 arg0) {
    s32 temp_r31;

    /* draft: did not compile: temp_r31 = fn_80080738(); */
    s32 tmp1 = fn_80081350(0x1A4);
    fn_8006B084(temp_r31, tmp1);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_TerminatePokemonMini(s32 arg0) {
    TerminatePokemonMini();
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_DisablePokemonMiniController(s32 arg0) {
    DisablePokemonMiniController();
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_EnablePokemonMiniController(s32 arg0) {
    EnablePokemonMiniController();
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_SetPokemonMiniVolume(s32 arg0) {
    fn_80080738();
    SetPokemonMiniVolume();
    fn_8008065C(arg0, 0);
    return 0;
}
