/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

u32 get_up_vector_for_viewing_mtx();
u32 fn_80026FA8(s32, M2C_UNK, M2C_UNK, M2C_UNK, f32);
M2C_UNK fn_800270E0(M2C_UNK);
extern f32 lbl_80351950;
M2C_UNK fn_80075574(void *, f32 *, f32 *);
M2C_UNK PSMTXMultVec(s32, f32 *, f32 *);
extern f32 lbl_80351938;
M2C_UNK fn_80027144(u32, u32, M2C_UNK, M2C_UNK);
M2C_UNK fn_800E1D1C(M2C_UNK);
M2C_UNK HSD_StateInvalidate(M2C_UNK);
M2C_UNK fn_800EF7E4();
M2C_UNK fn_800F0480();
s32 HSD_LObjGetCurrentByType(M2C_UNK);
M2C_UNK HSD_LObjRemoveAll(s32);
M2C_UNK HSD_LObjSetColor(s32, s32 *);
M2C_UNK HSD_LObjGetColor(s32 *);
s32 HSD_LObjLoadDesc(M2C_UNK *);
M2C_UNK HSD_CObjGetCurrent();
M2C_UNK fn_800FAEF0(void *, u32, M2C_UNK, M2C_UNK);
M2C_UNK __assert(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_80223BC8;
extern M2C_UNK lbl_8034EAA8;
extern M2C_UNK lbl_8034EAB0;
M2C_UNK fn_80075778();
M2C_UNK fn_80076DE8();
M2C_UNK fn_80076E84();
M2C_UNK HSD_JObjUnref();
M2C_UNK fn_80012CF8(s32, s32, s32);
M2C_UNK fn_80012D5C(s32, M2C_UNK, M2C_UNK);
s32 strlen(s32);
M2C_UNK *fn_80034370(s32);
extern M2C_UNK lbl_8034EAC8;
s32 method_requestMotionUrgently(s32, f32);
s32 method_requestNextMotion(void *);
M2C_UNK fn_800A7008(s32);
void *fn_800A713C(s32, u32);
extern f32 lbl_80351954;
M2C_UNK fn_80016FAC(f32 *);
M2C_UNK fn_80016FC8(s32, void *);
s32 fn_800A71F8(s32, M2C_UNK);
f32 fn_8007119C(f32, f32, f32);
extern f32 lbl_8035193C;
extern f32 lbl_80351958;
f32 fn_80071174(f32, f32);
M2C_UNK PlaySound();
M2C_UNK StopSound(s32);
M2C_UNK SetSoundVolume(s32, s32, s32, s32);
s32 fn_800735A0();
M2C_UNK fn_80076F20(void *, s32);
M2C_UNK fn_80076FA8(void *, s32);
M2C_UNK fn_80005888(void **);
M2C_UNK fn_8014BB10();
M2C_UNK fn_8014F858(void *, M2C_UNK *, M2C_UNK *);
extern M2C_UNK __files;
extern M2C_UNK lbl_80223C64;

void method_enableAutoMove(void *arg0, u8 arg1);
s32 method_isAutoMoveEnabled(void *arg0);
void method_enableAbsoluteMotion(void *arg0, u8 arg1);
s32 method_enableFur(void *arg0, u8 arg1);
void method_setAmbientCorrection(void *arg0, void *arg1);
s32 fn_80075CC4(void *arg0);
s32 fn_80075CD4(void *arg0, s32 arg1, void *arg2);
void fn_80075E18(void *arg0, u32 arg1, s32 arg3, M2C_UNK arg_sp0);
void fn_80075FE0(void);
void fn_80076000(void *arg0);
void method_setItemName(s32 arg0, s32 arg1);
void method_setItemDesc(s32 arg0, s32 arg1);
M2C_UNK *method_getItemName(void *arg0);
M2C_UNK *method_getItemDesc(void *arg0);
M2C_UNK *fn_800762BC(void *arg0);
void method_setManpuObject(void *arg0, u32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0);
void method_playSound(void *arg0, s32 arg1, s32 arg2, f32 farg0);
void fn_80076448(void *arg0, void *arg1, void *arg2);
s32 fn_8007651C(void *arg1, void *arg2);
s32 fn_800765FC(void *arg1, s32 arg2, f32 farg0);
void method_playSoundEnv(void *arg0, s32 arg1, s32 arg2, f32 farg0);
void method_stopSound(void *arg0);
void method_recalcSound(void *arg0, s32 arg1, f32 farg0);
s32 method_getPlayingMotId(void *arg0);
s32 method_getPlayingMPID(void *arg0);
s32 fn_8007690C(void);
void fn_80076914(void *arg0, void *arg1, s32 arg2, void *arg3, M2C_UNK arg_sp0);
void fn_800769BC(void *arg0, void *arg1, s32 arg2, void *arg3, M2C_UNK arg_sp0);
void fn_80076A64(void ***arg0, s32 *arg1, void ***arg2, void ***arg3, M2C_UNK arg_sp0);
void fn_80076B64(void ***arg0, s32 *arg1, void ***arg2);
void fn_80076C4C(void **arg0, s32 *arg1, void ***arg2, void *arg3, M2C_UNK arg_sp0);
void fn_80076D34(void *arg0);

void method_enableAutoMove(void *arg0, u8 arg1) {
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) | 1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) & 0xFFFFFFFE);
}

s32 method_isAutoMoveEnabled(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x60) & 1;
}

void method_enableAbsoluteMotion(void *arg0, u8 arg1) {
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) | 4);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) & 0xFFFFFFFB);
}

s32 method_enableFur(void *arg0, u8 arg1) {
    u32 var_r0;

    if ((arg1 != 0) && ((u32) M2C_FIELD(arg0, u32 *, 0x6C) == 0U)) {
        if ((s32) M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x5C), void **, 8), s32 *, 4) != 0x19) {
            return 0;
        }
        var_r0 = get_up_vector_for_viewing_mtx(0x34);
        if (var_r0 != 0U) {
            var_r0 = fn_80026FA8(M2C_FIELD(arg0, s32 *, 0x64), 0xF, 0x40, 0x40, lbl_80351950);
        }
        M2C_FIELD(arg0, u32 *, 0x6C) = var_r0;
        return 1;
    }
    if ((arg1 == 0) && ((u32) M2C_FIELD(arg0, u32 *, 0x6C) != 0U)) {
        fn_800270E0(1);
        M2C_FIELD(arg0, u32 *, 0x6C) = 0U;
        return 0;
    }
    return M2C_FIELD(arg0, u32 *, 0x6C) != 0U;
}

void method_setAmbientCorrection(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u8 *, 0x184) = (u8) M2C_FIELD(arg1, u8 *, 0);
    M2C_FIELD(arg0, u8 *, 0x185) = (u8) M2C_FIELD(arg1, u8 *, 1);
    M2C_FIELD(arg0, u8 *, 0x186) = (u8) M2C_FIELD(arg1, u8 *, 2);
    M2C_FIELD(arg0, u8 *, 0x187) = 0xFF;
}

s32 fn_80075CC4(void *arg0) {
    return M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x5C), void **, 8), s32 *, 4);
}

s32 fn_80075CD4(void *arg0, s32 arg1, void *arg2) {
    s32 sp10;
    s32 sp14;
    s32 sp20;
    f32 sp18;
    f32 spC;
    f32 sp8;

    if (M2C_FIELD(arg0, s32 *, 8) & 0x200000) {
        return 0;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), M2C_UNK (**)(f32 *), 0x3C)(&sp18);
    PSMTXMultVec(arg1, &sp18, &sp18);
    M2C_FIELD(arg0, f32 *, 0x48) = sp20;
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) (M2C_FIELD(arg0, f32 *, 0x48) + M2C_FIELD(arg0, f32 *, 0x1B0));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x68) == 0U) {
        return 1;
    }
    fn_80075574(arg0, &spC, &sp8);
    PSMTXMultVec(arg1, &spC, &spC);
    if ((sp8 + ((sp14 * -M2C_FIELD(arg2, f32 *, 0)) + (-M2C_FIELD(arg2, f32 *, 4) * (f32) fabs(spC)))) < lbl_80351938) {
        return 0;
    }
    return ((sp8 + ((sp14 * -M2C_FIELD(arg2, f32 *, 8)) + (-M2C_FIELD(arg2, f32 *, 0xC) * (f32) fabs(sp10)))) < lbl_80351938) == 0;
}

void fn_80075E18(void *arg0, u32 arg1, s32 arg3, M2C_UNK arg_sp0) {
    s32 saved_reg_r30;
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 temp_r31;
    s32 var_r30;
    u8 var_r29;

    var_r30 = saved_reg_r30;
    var_r29 = 0;
    if ((u8) M2C_FIELD(arg0, u8 *, 0x187) != 0) {
        var_r30 = HSD_LObjGetCurrentByType(0);
        if (var_r30 != 0) {
            HSD_LObjGetColor(&sp10);
        } else {
            var_r30 = HSD_LObjLoadDesc(&lbl_80223BC8);
            fn_800F0480();
            var_r29 = 1;
        }
        spC = M2C_FIELD(arg0, s32 *, 0x184);
        HSD_LObjSetColor(var_r30, &spC);
        HSD_CObjGetCurrent();
        fn_800EF7E4();
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x6C) != 0U) {
        if (arg3 & 4) {
            fn_80027144((unsigned long)(arg1), (unsigned long)(1U), (long)(0), (long)(0));
        } else {
            fn_80027144((unsigned long)(arg1), (unsigned long)(4U), (long)(0), (long)(0));
            fn_80027144(M2C_FIELD(arg0, u32 *, 0x6C), arg1, 2, 0);
        }
    } else {
        if ((void *) M2C_FIELD(arg0, void **, 0x64) == NULL) {
            __assert(&lbl_8034EAA8, 0x351, &lbl_8034EAB0);
        }
        temp_r31 = (u32) M2C_ERROR(/* unknown instruction: mfcr $r0 */) >> 0x1FU;
        if (temp_r31 != 0) {
            fn_800E1D1C(1);
        }
        if (arg3 & 4) {
            fn_800FAEF0(M2C_FIELD(arg0, void **, 0x64), arg1, 1, 0);
        } else {
            fn_800FAEF0(M2C_FIELD(arg0, void **, 0x64), arg1, 4, 0);
            fn_800FAEF0(M2C_FIELD(arg0, void **, 0x64), arg1, 2, 0);
        }
        if (temp_r31 != 0) {
            HSD_StateInvalidate(1);
        }
    }
    if ((u8) M2C_FIELD(arg0, u8 *, 0x187) != 0) {
        if (var_r29 != 0) {
            HSD_LObjRemoveAll(var_r30);
        } else {
            sp8 = sp10;
            HSD_LObjSetColor(var_r30, &sp8);
        }
        HSD_CObjGetCurrent();
        fn_800EF7E4();
    }
}

void fn_80075FE0(void) {
    fn_80075778();
}

void fn_80076000(void *arg0) {
    void *sp10;
    s32 spC;
    M2C_UNK sp8;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r7;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x64) != 0U) {
        HSD_JObjUnref();
    }
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    fn_800270E0((long)(M2C_FIELD(arg0, s32 *, 0x6C)));
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    M2C_FIELD(arg0, s32 *, 0x15C) = 0;
    M2C_FIELD(arg0, u32 *, 0x64) = 0U;
    /* draft: did not compile: fn_80076DE8(arg0 + 0x164); */
    /* draft: did not compile: fn_80076E84(arg0 + 0x170); */
    temp_r4 = M2C_FIELD(arg0, void **, 0x148);
    if (temp_r4 != NULL) {
        M2C_FIELD(temp_r4, s32 *, 0) = (s32) (M2C_FIELD(temp_r4, s32 *, 0) - 1);
        if ((s32) M2C_FIELD(temp_r4, s32 *, 0) == 0) {
            temp_r3 = M2C_FIELD(arg0, void **, 0x148);
            if (temp_r3 != NULL) {
                M2C_FIELD(M2C_FIELD(temp_r3, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
        }
    }
    /* draft: did not compile: temp_r7 = arg0 + 0x13C; */
    M2C_FIELD(arg0, void **, 0x148) = NULL;
    sp10 = temp_r7;
    spC = M2C_FIELD(arg0, s32 *, 0x140);
    /* draft: did not compile: fn_80076A64(&sp8, arg0 + 0x138, &spC, &sp10, temp_r7); */
    temp_r4_2 = M2C_FIELD(arg0, void **, 0x5C);
    if (temp_r4_2 != NULL) {
        M2C_FIELD(temp_r4_2, s32 *, 0) = (s32) (M2C_FIELD(temp_r4_2, s32 *, 0) - 1);
        if ((s32) M2C_FIELD(temp_r4_2, s32 *, 0) == 0) {
            temp_r3_2 = M2C_FIELD(arg0, void **, 0x5C);
            if (temp_r3_2 != NULL) {
                M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
        }
    }
    M2C_FIELD(arg0, void **, 0x5C) = NULL;
    M2C_FIELD(arg0, s32 *, 0x14C) = 0;
    M2C_FIELD(arg0, s32 *, 0x150) = 0;
    M2C_FIELD(arg0, s32 *, 0x188) = 0;
}

void method_setItemName(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        fn_80012CF8(arg0 + 0x17C, arg1, strlen(arg1));
        return;
    }
    fn_80012D5C(arg0 + 0x17C, 0, 0);
}

void method_setItemDesc(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        fn_80012CF8(arg0 + 0x180, arg1, strlen(arg1));
        return;
    }
    fn_80012D5C(arg0 + 0x180, 0, 0);
}

M2C_UNK *method_getItemName(void *arg0) {
    M2C_UNK *temp_r3;
    void *temp_r3_2;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x17C);
    if ((u32) M2C_FIELD(temp_r4, u32 *, 0) != 0U) {
        return M2C_FIELD(temp_r4, M2C_UNK **, 0xC);
    }
    temp_r3_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x5C), void **, 8);
    if ((u32) M2C_FIELD(temp_r3_2, u32 *, 0x28) != 0U) {
        return fn_80034370(M2C_FIELD(temp_r3_2, s32 *, 0x24));
    }
    temp_r3 = M2C_FIELD(temp_r3_2, M2C_UNK **, 8);
    if (temp_r3 != NULL) {
        return temp_r3;
    }
    return &lbl_8034EAC8;
}

M2C_UNK *method_getItemDesc(void *arg0) {
    void *temp_r3;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x180);
    if ((u32) M2C_FIELD(temp_r4, u32 *, 0) != 0U) {
        return M2C_FIELD(temp_r4, M2C_UNK **, 0xC);
    }
    temp_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x5C), void **, 8);
    if ((u32) M2C_FIELD(temp_r3, u32 *, 0x30) != 0U) {
        return fn_80034370(M2C_FIELD(temp_r3, s32 *, 0x2C));
    }
    return &lbl_8034EAC8;
}

M2C_UNK *fn_800762BC(void *arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x5C), void **, 8);
    if ((u32) M2C_FIELD(temp_r3, u32 *, 0x38) != 0U) {
        return fn_80034370(M2C_FIELD(temp_r3, s32 *, 0x34));
    }
    return &lbl_8034EAC8;
}

void method_setManpuObject(void *arg0, u32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0) {
    void *temp_r3;
    void *temp_r3_2;

    if (arg1 != (u32) M2C_FIELD(arg0, u32 *, 0x188)) {
        temp_r3 = fn_800A713C((long)(M2C_FIELD(arg0, s32 *, 0x24)), (unsigned long)(0));
        if (temp_r3 != NULL) {
            fn_800A7008(M2C_FIELD(temp_r3, s32 *, 0x24));
        }
        M2C_FIELD(arg0, u32 *, 0x188) = arg1;
    }
    M2C_FIELD(arg0, s32 *, 0x18C) = (s32) (lbl_80351954 * farg0);
    M2C_FIELD(arg0, s32 *, 0x190) = arg2;
    M2C_FIELD(arg0, s32 *, 0x194) = arg3;
    M2C_FIELD(arg0, s32 *, 0x198) = arg4;
    temp_r3_2 = fn_800A713C(M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, u32 *, 0x188));
    if (temp_r3_2 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x19C) = method_requestMotionUrgently(M2C_FIELD(arg0, s32 *, 0x190), lbl_80351938);
        if ((u32) (M2C_FIELD(arg0, s32 *, 0x194) + 0xC8000000) != 0U) {
            M2C_FIELD(arg0, s32 *, 0x19C) = method_requestNextMotion(temp_r3_2);
        }
    }
}

void method_playSound(void *arg0, s32 arg1, s32 arg2, f32 farg0) {
    method_stopSound((void *)(0));
    /* draft: did not compile: M2C_FIELD(arg0, s32 *, 0x1B4) = method_playSoundEnv(arg0, arg1, arg2, farg0); */
}

void fn_80076448(void *arg0, void *arg1, void *arg2) {
    s32 spC;
    s32 sp10;
    f32 sp8;
    s32 temp_r31;

    temp_r31 = fn_800A71F8(M2C_FIELD(arg0, s32 *, 0x24), 1);
    fn_80016FAC(&sp8);
    fn_80016FC8(temp_r31, arg1);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), M2C_UNK (**)(void *, void *), 0x3C)(arg0, arg2);
    M2C_FIELD(arg1, f32 *, 0) = (f32) (M2C_FIELD(arg1, f32 *, 0) - sp8);
    M2C_FIELD(arg1, f32 *, 8) = (f32) (M2C_FIELD(arg1, f32 *, 8) - sp10);
    M2C_FIELD(arg2, f32 *, 0) = (f32) (M2C_FIELD(arg2, f32 *, 0) - sp8);
    M2C_FIELD(arg2, f32 *, 4) = (f32) (M2C_FIELD(arg2, f32 *, 4) - spC);
    M2C_FIELD(arg2, f32 *, 8) = (f32) (M2C_FIELD(arg2, f32 *, 8) - sp10);
}

s32 fn_8007651C(void *arg1, void *arg2) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f6;
    f32 temp_f7;
    s32 var_r3;
    s32 var_r4;

    temp_f0 = M2C_FIELD(arg1, f32 *, 0);
    temp_f2 = M2C_FIELD(arg1, f32 *, 8);
    temp_f1 = M2C_FIELD(arg2, f32 *, 0);
    temp_f3 = temp_f0 * temp_f0;
    temp_f0_2 = M2C_FIELD(arg2, f32 *, 8);
    temp_f2_2 = (temp_f2 * temp_f2);
    temp_f2_2 += temp_f3;
    temp_f1_2 = fn_8007119C(temp_f2_2 * ((temp_f1 * temp_f1) + (temp_f0_2 * temp_f0_2)), temp_f2_2, temp_f3);
    temp_f6 = M2C_FIELD(arg2, f32 *, 0);
    temp_f4 = M2C_FIELD(arg1, f32 *, 8);
    temp_f7 = M2C_FIELD(arg1, f32 *, 0);
    temp_f5 = M2C_FIELD(arg2, f32 *, 8);
    var_r3 = (s32) (lbl_80351958 * ((temp_f1_2 * ((temp_f7 * temp_f5) - (temp_f6 * temp_f4))) + lbl_8035193C));
    if (var_r3 > 0x7F) {
        var_r3 = 0x7F;
    }
    var_r4 = (s32) (lbl_80351958 * ((temp_f1_2 * ((temp_f7 * temp_f6) - (temp_f5 * temp_f4))) + lbl_8035193C));
    if (var_r4 > 0x7F) {
        var_r4 = 0x7F;
    }
    return var_r3 + (((var_r4 - 0x40) << 8) & 0xFF00);
}

s32 fn_800765FC(void *arg1, s32 arg2, f32 farg0) {
    f32 temp_f0;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    s32 var_r31;

    temp_f2 = M2C_FIELD(arg1, f32 *, 0);
    temp_f0 = M2C_FIELD(arg1, f32 *, 4);
    temp_f2_2 = M2C_FIELD(arg1, f32 *, 8);
    temp_f2_3 = temp_f2_2 * temp_f2_2;
    var_r31 = (s32) ((f32) arg2 * (lbl_8035193C - (fn_80071174(temp_f2_3 + ((temp_f2 * temp_f2) + (temp_f0 * temp_f0)), temp_f2_3) / farg0)));
    if (var_r31 < 0x14) {
        var_r31 = 0x14;
    }
    return var_r31;
}

void method_playSoundEnv(void *arg0, s32 arg1, s32 arg2, f32 farg0) {
    s32 sp4C;
    s32 sp48;
    s32 sp40;
    s32 sp3C;
    s32 sp44;
    s32 sp38;
    s32 sp34;
    s32 sp30;
    s32 sp2C;
    s32 sp28;
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 temp_r30;
    s32 temp_r31;
    void *temp_r6;

    fn_80076448((void *)(&sp44), (void *)(&sp38), (void *)(0));
    sp14 = sp38;
    sp18 = sp3C;
    sp1C = sp40;
    sp20 = sp44;
    sp24 = sp48;
    sp28 = sp4C;
    sp2C = sp38;
    sp30 = sp3C;
    sp34 = sp40;
    temp_r6 = M2C_FIELD(arg0, void **, 0x24);
    sp8 = sp38;
    temp_r30 = M2C_FIELD(temp_r6, s32 *, 0x38);
    spC = sp3C;
    sp10 = sp40;
    temp_r31 = fn_8007651C((void *)(arg0), (void *)(&sp20));
    /* draft: did not compile: PlaySound(temp_r30, arg1, fn_800765FC(arg0, &sp2C, arg2, farg0), temp_r31); */
}

void method_stopSound(void *arg0) {
    if ((u32) (M2C_FIELD(arg0, s32 *, 0x1B4) + 0x10000) != -1U) {
        StopSound(M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0x38));
        M2C_FIELD(arg0, s32 *, 0x1B4) = -1;
    }
}

void method_recalcSound(void *arg0, s32 arg1, f32 farg0) { } /* draft: stub */

s32 method_getPlayingMotId(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x138) >= 1U) {
        return *M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x140), void **, 0xC), s32 **, 0xC);
    }
    return 0x38000000;
}

s32 method_getPlayingMPID(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x138) >= 1U) {
        return M2C_FIELD(M2C_FIELD(arg0, void **, 0x140), s32 *, 8);
    }
    return 0;
}

s32 fn_8007690C(void) {
    return 1;
}

void fn_80076914(void *arg0, void *arg1, s32 arg2, void *arg3, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_800769BC(void *arg0, void *arg1, s32 arg2, void *arg3, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80076A64(void ***arg0, s32 *arg1, void ***arg2, void ***arg3, M2C_UNK arg_sp0) {
    void **temp_r0;
    void **temp_r3_2;
    void **temp_r3_4;
    void *temp_r27;
    void *temp_r3_3;
    void *temp_r4_2;

    if ((*arg2) == (*arg3)) {
        *arg0 = (*arg3);
        return;
    }
    M2C_FIELD(*(*arg2), void ***, 4) = (void **) M2C_FIELD((*(*arg3)), void ***, 4);
    *M2C_FIELD((*(*arg3)), void ***, 4) = *(*arg2);
loop_11:
    temp_r3_2 = *arg2;
    if (temp_r3_2 != (temp_r0 = *arg3)) {
        temp_r27 = temp_r3_2 + 8;
        if (0 /* draft: did not compile */) {
            temp_r4_2 = M2C_FIELD(temp_r27, void **, 4);
            if (temp_r4_2 != NULL) {
                M2C_FIELD(temp_r4_2, s32 *, 0) = (s32) (M2C_FIELD(temp_r4_2, s32 *, 0) - 1);
                if ((s32) M2C_FIELD(temp_r4_2, s32 *, 0) == 0) {
                    temp_r3_3 = M2C_FIELD(temp_r27, void **, 4);
                    if (temp_r3_3 != NULL) {
                        M2C_FIELD(M2C_FIELD(temp_r3_3, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                    }
                }
            }
            M2C_FIELD(temp_r27, void **, 4) = NULL;
        }
        *arg1 -= 1;
        temp_r3_4 = *arg2;
        fn_80005888(temp_r3_4);
        *arg2 = M2C_FIELD(temp_r3_4, void ***, 4);
        goto loop_11;
    }
    *arg0 = temp_r0;
}

void fn_80076B64(void ***arg0, s32 *arg1, void ***arg2) {
    void **temp_r5;
    void *temp_r3;
    void *temp_r4;

    temp_r5 = *arg2;
    *arg2 = M2C_FIELD(temp_r5, void ***, 4);
    M2C_FIELD(M2C_FIELD(temp_r5, void **, 0), void ***, 4) = (void **) M2C_FIELD(temp_r5, void ***, 4);
    *M2C_FIELD(temp_r5, void ***, 4) = M2C_FIELD(temp_r5, void **, 0);
    if (((temp_r5 + 8) != NULL) && ((temp_r5 + 0xC) != NULL)) {
        temp_r4 = M2C_FIELD(temp_r5, void **, 0xC);
        if (temp_r4 != NULL) {
            M2C_FIELD(temp_r4, s32 *, 0) = (s32) (M2C_FIELD(temp_r4, s32 *, 0) - 1);
            if ((s32) M2C_FIELD(temp_r4, s32 *, 0) == 0) {
                temp_r3 = M2C_FIELD(temp_r5, void **, 0xC);
                if (temp_r3 != NULL) {
                    M2C_FIELD(M2C_FIELD(temp_r3, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                }
            }
        }
        M2C_FIELD(temp_r5, void **, 0xC) = NULL;
    }
    fn_80005888(temp_r5);
    *arg1 -= 1;
    *arg0 = *arg2;
}

#pragma push
#pragma peephole off
void fn_80076C4C(void **arg0, s32 *arg1, void ***arg2, void *arg3, M2C_UNK arg_sp0) {
    void *spC;
    s32 sp8;
    s32 *temp_r4;
    void **temp_r4_2;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r5;

    /* draft: did not compile: temp_r3 = get_up_vector_for_viewing_mtx(0x10); */
    if (temp_r3 == NULL) {
        fn_8014F858(&__files + 0xA0, &lbl_80223C64, &__files);
        fn_8014BB10();
    }
    /* draft: did not compile: temp_r3_2 = temp_r3 + 8; */
    /* draft: did not compile: sp8 = arg1 + 4; */
    spC = temp_r3;
    if (temp_r3_2 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 8) = (s32) M2C_FIELD(arg3, s32 *, 0);
        M2C_FIELD(temp_r3_2, s32 **, 4) = (s32 *) M2C_FIELD(arg3, s32 **, 4);
        temp_r4 = M2C_FIELD(temp_r3_2, s32 **, 4);
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
#pragma pop

void fn_80076D34(void *arg0) {
    void *temp_r4;

    /* draft: did not compile: temp_r4 = arg0 + 4; */
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(temp_r4, void **, 4) = temp_r4;
    M2C_FIELD(arg0, void **, 4) = temp_r4;
}
