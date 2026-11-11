/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_80016044(M2C_UNK *);
M2C_UNK fn_800160BC(M2C_UNK *, s32, s32, s32, M2C_UNK *, f32);
M2C_UNK fn_80019D1C();
extern f32 lbl_803513B4;
M2C_UNK fn_80019BF0();
extern f32 lbl_80351428;
s32 get_up_vector_for_viewing_mtx(M2C_UNK);
s32 fn_8007C884();
M2C_UNK fn_8007CB84(s32, s32);
M2C_UNK fn_8007CBE0(s32);
M2C_UNK fn_8007CC38(s32, u8, f32);
f32 fn_8007C9E4(s32, s32);
f32 fn_8009D520(void **, s32);
M2C_UNK HSD_AObjSetRate(f32);
M2C_UNK HSD_CObjAddAnim(void *, void *);
M2C_UNK HSD_CObjReqAnim(void *, f32);
extern f32 lbl_803513F8;
M2C_UNK fn_8007C8AC(s32, M2C_UNK);
M2C_UNK HSD_CObjRemoveAnim(s32);
M2C_UNK fn_80016178(f32 *);
M2C_UNK fn_800161A8();
M2C_UNK fn_80016468();
M2C_UNK fn_800165B0();
f32 fn_8007154C(f32);
u8 fn_800715D4(M2C_UNK, f32, f32, f32);
M2C_UNK PSVECAdd();
M2C_UNK PSVECSubtract();
M2C_UNK PSVECScale();
f32 PSVECMag(s32 *, s32, s32);
extern f32 lbl_803513CC;
extern f32 lbl_803513D0;
extern f32 lbl_803513DC;
extern f32 lbl_803513E0;
void *fn_800A713C(s32);
M2C_UNK PSMTXTranspose(M2C_UNK *);
M2C_UNK PSMTXMultVecSR(M2C_UNK *, f32 *, f32 *);
M2C_UNK PSVECNormalize(f32 *, f32 *);
M2C_UNK HSD_CObjGetEyePosition();
M2C_UNK HSD_CObjGetEyePosition_800F2B24();
M2C_UNK HSD_CObjGetViewingMtxPtr(s32);
extern f32 lbl_80351430;
M2C_UNK fn_800794C0(s32, s32);
extern f64 lbl_80351438;
M2C_UNK fn_80016140();
u8 fn_8001615C();
M2C_UNK fn_8001652C(void *, M2C_UNK *, f32);
M2C_UNK fn_80019CA0();
M2C_UNK fn_80070D60();
M2C_UNK fn_8007D660(M2C_UNK *, M2C_UNK *, f32);
M2C_UNK PSMTXTransApply(void *, void *, f32, f32, f32);
M2C_UNK HSD_CObjAnim(s32);
M2C_UNK fn_8001798C();
f32 fn_80019B9C(void *);
M2C_UNK fn_80019F34();
M2C_UNK fn_80019FB0();
M2C_UNK fn_8007D7FC();
extern f32 lbl_80351440;
M2C_UNK fn_80016E78();
M2C_UNK fn_80016FAC();
M2C_UNK fn_80016CB8(void *);
M2C_UNK PSMTXMultVec();
f32 HSD_CObjGetFov();
f32 method_getAspect();
f64 Tan(f32, f32);
extern f32 lbl_803513FC;
extern f32 lbl_80351414;
extern f64 lbl_80351448;
extern f32 lbl_80351450;
M2C_UNK PSMTXInverse(M2C_UNK *);
extern f32 lbl_80351454;
M2C_UNK HSD_CObjSetInterest();
M2C_UNK HSD_CObjSetEyePosition();
extern f32 lbl_803513B8;

s32 fn_80017D3C(void *arg0, s32 arg1, s32 arg2, f32 farg0);
void fn_80017FD8(void *arg0, s32 arg1, s32 arg2, f32 farg0);
s32 fn_80018060(void *arg0, s32 arg1);
s32 fn_800180A8(void *arg0, s32 arg1);
void method_setMaxSpeed(void *arg0, f32 farg0);
void method_setMaxElevSpeed(void *arg0, f32 farg0);
void method_setMaxDirSpeed(void *arg0, f32 farg0);
void method_setElevLimit(void *arg0, f32 farg0, f32 farg1);
void method_setDirLimit(void *arg0, f32 farg0, f32 farg1);
void fn_80018140(void *arg0, s32 arg1);
void method_beginCreatePath(void *arg0, s32 arg1);
void method_addPathPoint(void *arg0);
void method_endCreatePath(void *arg0, f32 farg2);
f32 method_setPath(void *arg0, s32 arg1);
s32 method_getPath(void *arg0);
void method_resetPath(void *arg0);
s32 fn_800184F0(void *arg0, void *arg1);
void fn_80018834(void *arg0);
void fn_80018994(void *arg0);
s32 fn_80018AE4(void);
s32 fn_80018AEC(void *arg0);
void fn_80018F78(void *arg0);
void fn_80019760(s32 arg0);
s32 fn_80019784(void);
void fn_8001978C(void);
s32 fn_80019790(void);
s32 fn_800197B4(void);
s32 fn_800197D8(void *arg0, void *arg1);
void fn_80019808(void *arg0, void *arg1, s32 arg2);
void fn_8001990C(void *arg0, void *arg1, void *arg2);
void fn_80019A08(void *arg0, u8 arg1);
void fn_80019AE8(void *arg0);

s32 fn_80017D3C(void *arg0, s32 arg1, s32 arg2, f32 farg0) { return 0; } /* draft: stub */

void fn_80017FD8(void *arg0, s32 arg1, s32 arg2, f32 farg0) {
    s32 sp10;
    s32 spC;
    M2C_UNK sp8;
    s32 temp_r7;

    fn_80019760((long)(0));
    /* draft: did not compile: temp_r7 = arg0 + 0xC4; */
    sp10 = temp_r7;
    spC = M2C_FIELD(arg0, s32 *, 0xC8);
    /* draft: did not compile: fn_80019BF0(&sp8, arg0 + 0xC0, &spC, &sp10, temp_r7); */
    fn_80017D3C(arg0, arg1, arg2, farg0);
}

s32 fn_80018060(void *arg0, s32 arg1) {
    void *var_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x78) == arg1) {
        return 1;
    }
    var_r3 = M2C_FIELD(arg0, void **, 0xC8);
loop_6:
    if (0 /* draft: did not compile */) {
        return 1;
    }
    if (arg1 == (s32) M2C_FIELD(var_r3, s32 *, 8)) {
        return 0;
    }
    var_r3 = M2C_FIELD(var_r3, void **, 4);
    goto loop_6;
}

s32 fn_800180A8(void *arg0, s32 arg1) {
    void *var_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x78) == arg1) {
        return 0;
    }
    var_r3 = M2C_FIELD(arg0, void **, 0xC8);
loop_6:
    if (0 /* draft: did not compile */) {
        return 1;
    }
    if (arg1 == (s32) M2C_FIELD(var_r3, s32 *, 8)) {
        return 0;
    }
    var_r3 = M2C_FIELD(var_r3, void **, 4);
    goto loop_6;
}

void method_setMaxSpeed(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x138) = (f32) (farg0 / lbl_80351428);
}

void method_setMaxElevSpeed(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x13C) = (f32) (farg0 / lbl_80351428);
}

void method_setMaxDirSpeed(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x140) = (f32) (farg0 / lbl_80351428);
}

void method_setElevLimit(void *arg0, f32 farg0, f32 farg1) {
    M2C_FIELD(arg0, f32 *, 0x144) = (f32) -farg1;
    M2C_FIELD(arg0, f32 *, 0x148) = (f32) -farg0;
}

void method_setDirLimit(void *arg0, f32 farg0, f32 farg1) {
    M2C_FIELD(arg0, f32 *, 0x14C) = farg0;
    M2C_FIELD(arg0, f32 *, 0x150) = farg1;
}

void fn_80018140(void *arg0, s32 arg1) {
    s32 temp_r5;

    temp_r5 = M2C_FIELD(arg0, s32 *, 0x190);
    M2C_FIELD(arg0, s32 *, 0x190) = arg1;
    if (temp_r5 != (s32) M2C_FIELD(arg0, s32 *, 0x190)) {
        M2C_FIELD(arg0, s8 *, 0x1DC) = 1;
    }
}

void method_beginCreatePath(void *arg0, s32 arg1) {
    s32 var_r0;

    method_resetPath((void *)(0));
    var_r0 = get_up_vector_for_viewing_mtx(0x1C);
    var_r0 = var_r0 == 0 ? var_r0 : fn_8007C884();
    M2C_FIELD(arg0, s32 *, 0x194) = var_r0;
    fn_8007CB84(M2C_FIELD(arg0, s32 *, 0x194), arg1);
}

void method_addPathPoint(void *arg0) {
    fn_8007CBE0(M2C_FIELD(arg0, s32 *, 0x194));
}

void method_endCreatePath(void *arg0, f32 farg2) {
    fn_8007CC38(M2C_FIELD(arg0, s32 *, 0x194), (u8) ((((u32) M2C_ERROR(/* unknown instruction: mfcr $r0 */) >> 0x1DU) & 1) ^ 1), M2C_FIELD(arg0, f32 *, 0x138));
}

f32 method_setPath(void *arg0, s32 arg1) {
    void *sp8;
    f32 var_f1;
    s32 *temp_r5;
    s32 var_r0;
    u32 temp_r3_2;
    u32 temp_r3_3;
    u32 temp_r3_4;
    void *temp_r3;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;

    /* draft: did not compile: var_f1 = method_resetPath((void *)(0)); */
    if ((void *) M2C_FIELD(arg0, void **, 0x64) != NULL) {
        var_f1 = fn_8009D520(&sp8, arg1);
        if (0 /* draft: did not compile */) {
            if (sp8 != NULL) {
                M2C_FIELD(sp8, s32 *, 0) = (s32) (M2C_FIELD(sp8, s32 *, 0) + 1);
            }
            temp_r4 = M2C_FIELD(arg0, void **, 0x198);
            if (temp_r4 != NULL) {
                M2C_FIELD(temp_r4, s32 *, 0) = (s32) (M2C_FIELD(temp_r4, s32 *, 0) - 1);
                if ((s32) M2C_FIELD(temp_r4, s32 *, 0) == 0) {
                    temp_r3 = M2C_FIELD(arg0, void **, 0x198);
                    if (temp_r3 != NULL) {
                        var_f1 = M2C_FIELD(M2C_FIELD(temp_r3, void **, 8), f32 (**)(M2C_UNK), 8)(1);
                    }
                }
            }
            M2C_FIELD(arg0, void **, 0x198) = sp8;
        }
        if (sp8 != NULL) {
            M2C_FIELD(sp8, s32 *, 0) = (s32) (M2C_FIELD(sp8, s32 *, 0) - 1);
            var_f1 = !(((s32) M2C_FIELD(sp8, s32 *, 0) == 0) && (sp8 != NULL)) ? var_f1 : M2C_FIELD(M2C_FIELD(sp8, void **, 8), f32 (**)(M2C_UNK), 8)(1);
        }
        sp8 = NULL;
    }
    temp_r4_2 = M2C_FIELD(arg0, void **, 0x198);
    if (temp_r4_2 != NULL) {
        temp_r3_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x60), u32 *, 0x84);
        HSD_CObjAddAnim(M2C_FIELD(arg0, void **, 0x60), M2C_FIELD(temp_r4_2, void **, 0x14));
        if (temp_r3_2 != 0U) {
            M2C_FIELD(arg0, u32 *, 0x19C) = temp_r3_2;
            HSD_AObjSetRate(lbl_803513F8);
        }
        temp_r3_3 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x60), void **, 0x24), u32 *, 0x18);
        if (temp_r3_3 != 0U) {
            M2C_FIELD(arg0, u32 *, 0x19C) = temp_r3_3;
            HSD_AObjSetRate(lbl_803513F8);
        }
        temp_r3_4 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x60), void **, 0x28), u32 *, 0x18);
        if (temp_r3_4 != 0U) {
            M2C_FIELD(arg0, u32 *, 0x19C) = temp_r3_4;
            HSD_AObjSetRate(lbl_803513F8);
        }
        HSD_CObjReqAnim(M2C_FIELD(arg0, void **, 0x60), lbl_803513B4);
        var_r0 = get_up_vector_for_viewing_mtx(0x1C);
        if (var_r0 != 0) {
            var_r0 = fn_8007C884();
        }
        M2C_FIELD(arg0, s32 *, 0x194) = var_r0;
        temp_r4_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x198), void **, 0x14);
        temp_r5 = M2C_FIELD(temp_r4_3, s32 **, 4);
        var_f1 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x64), void **, 8), f32 *, 0x14);
        if (temp_r5 != NULL) {
            return fn_8007C9E4(M2C_FIELD(arg0, s32 *, 0x194), *temp_r5);
        }
        if ((u32) M2C_FIELD(temp_r4_3, u32 *, 0) != 0U) {
            var_f1 = fn_8007C9E4((long)(M2C_FIELD(arg0, s32 *, 0x194)), (long)(0));
        }
        /* Duplicate return node #28. Try simplifying control flow for better match */
        return var_f1;
    }
    return var_f1;
}

s32 method_getPath(void *arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x198);
    if (temp_r3 != NULL) {
        return *M2C_FIELD(temp_r3, s32 **, 0xC);
    }
    return 0x38000000;
}

void method_resetPath(void *arg0) {
    void *temp_r3;
    void *temp_r4;

    fn_8007C8AC(M2C_FIELD(arg0, s32 *, 0x194), 1);
    M2C_FIELD(arg0, s32 *, 0x194) = 0;
    if ((void *) M2C_FIELD(arg0, void **, 0x198) != NULL) {
        HSD_CObjRemoveAnim(M2C_FIELD(arg0, s32 *, 0x60));
        temp_r4 = M2C_FIELD(arg0, void **, 0x198);
        if (temp_r4 != NULL) {
            M2C_FIELD(temp_r4, s32 *, 0) = (s32) (M2C_FIELD(temp_r4, s32 *, 0) - 1);
            if ((s32) M2C_FIELD(temp_r4, s32 *, 0) == 0) {
                temp_r3 = M2C_FIELD(arg0, void **, 0x198);
                if (temp_r3 != NULL) {
                    M2C_FIELD(M2C_FIELD(temp_r3, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                }
            }
        }
        M2C_FIELD(arg0, void **, 0x198) = NULL;
        M2C_FIELD(arg0, s32 *, 0x19C) = 0;
    }
}

s32 fn_800184F0(void *arg0, void *arg1) {
    s32 sp14;
    s32 sp10;
    s32 spC;
    f32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp24;
    s32 sp8;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    u8 var_r31;
    f32 temp_f2;
    f32 temp_f3;
    f32 var_f2;
    f32 var_f30;
    f32 var_f31;
    f32 var_f31_2;
    s32 temp_r0;
    s32 var_r3;
    u8 var_r30;
    f32 temp_f1_4;
    void *temp_r27;

    M2C_FIELD(arg0, s8 *, 0x108) = 1;
    /* draft: did not compile: temp_r27 = arg0 + 0x118; */
    var_r31 = 1;
    var_r30 = 1;
    /* draft: did not compile: PSVECSubtract(arg1 + 0xC, temp_r27, &sp8); */
    sp14 = sp8;
    sp18 = spC;
    sp1C = sp10;
    temp_f1 = PSVECMag(&sp14, spC, sp8);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x138);
    if (temp_f1 <= temp_f0) {
        M2C_FIELD(arg0, f32 *, 0x118) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
        M2C_FIELD(temp_r27, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
        M2C_FIELD(temp_r27, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 0x14);
    } else {
        PSVECScale(&sp14, &sp14, temp_f0 / temp_f1);
        PSVECAdd(temp_r27, &sp14, temp_r27);
        var_r31 = 0;
    }
    if (var_r31 != 0) {
        M2C_FIELD(arg0, f32 *, 0x134) = (f32) M2C_FIELD(arg1, f32 *, 0x28);
    }
    var_f30 = M2C_FIELD(arg1, f32 *, 0);
    var_f31 = M2C_FIELD(arg1, f32 *, 4);
    if (((s32) M2C_FIELD(arg0, s32 *, 0x190) == 1) && (M2C_ERROR(/* unknown instruction: cror eq, lt, eq */), ((lbl_803513B4 == M2C_FIELD(arg1, f32 *, 0x28)) != 0))) {
        temp_f0_2 = M2C_FIELD(arg0, f32 *, 0x144);
        temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x10C);
        if (temp_f0_2 < temp_f1_2) {
            var_f30 = temp_f0_2;
        } else {
            temp_f0_3 = M2C_FIELD(arg0, f32 *, 0x148);
            if (temp_f1_2 < temp_f0_3) {
                var_f30 = temp_f0_3;
            } else {
                var_f30 = temp_f1_2;
            }
        }
        if (fn_800715D4(0, M2C_FIELD(arg0, f32 *, 0x110), var_f31 - lbl_803513D0, var_f31 + M2C_FIELD(arg0, f32 *, 0x150)) != 0) {
            var_f31_2 = var_f31 + M2C_FIELD(arg0, f32 *, 0x150);
        } else if (fn_800715D4(0, M2C_FIELD(arg0, f32 *, 0x110), var_f31 + M2C_FIELD(arg0, f32 *, 0x14C), lbl_803513D0 + var_f31) != 0) {
            var_f31_2 = var_f31 + M2C_FIELD(arg0, f32 *, 0x14C);
        } else {
            var_f31_2 = M2C_FIELD(arg0, f32 *, 0x110);
        }
        var_f31 = fn_8007154C(var_f31_2);
    } else if ((u8) M2C_FIELD(arg1, u8 *, 0x18) != 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x18C);
        switch (temp_r0) {                          /* irregular */
        case 0:
            fn_80016178(&sp20);
            /* draft: did not compile: fn_80016468(&sp20, temp_r27, arg1 + 0x1C, 1, lbl_803513E0); */
            var_f30 = sp20;
            var_f31 = sp24;
            break;
        case 1:
            /* draft: did not compile: fn_800165B0(arg0 + 0x10C, arg1 + 0x1C); */
            break;
        }
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x18C) == 0) {
        temp_f1_3 = M2C_FIELD(arg0, f32 *, 0x10C);
        temp_f2 = M2C_FIELD(arg0, f32 *, 0x13C);
        temp_f3 = var_f30 - temp_f1_3;
        if (temp_f2 < temp_f3) {
            var_r30 = 0;
            M2C_FIELD(arg0, f32 *, 0x10C) = (f32) (temp_f1_3 + temp_f2);
        } else if (temp_f3 < -temp_f2) {
            var_r30 = 0;
            M2C_FIELD(arg0, f32 *, 0x10C) = (f32) (temp_f1_3 - temp_f2);
        } else {
            M2C_FIELD(arg0, f32 *, 0x10C) = var_f30;
        }
        var_f2 = var_f31 - M2C_FIELD(arg0, f32 *, 0x110);
        if (lbl_803513D0 < var_f2) {
            var_f2 -= lbl_803513CC;
        } else if (var_f2 < lbl_803513DC) {
            var_f2 += lbl_803513CC;
        }
        temp_f1_4 = M2C_FIELD(arg0, f32 *, 0x140);
        if (temp_f1_4 < var_f2) {
            var_r30 = 0;
            M2C_FIELD(arg0, f32 *, 0x110) = (f32) (M2C_FIELD(arg0, f32 *, 0x110) + temp_f1_4);
        } else if (var_f2 < -temp_f1_4) {
            var_r30 = 0;
            M2C_FIELD(arg0, f32 *, 0x110) = (f32) (M2C_FIELD((s32)arg0, f32 *, 0x110) - temp_f1_4);
        } else {
            M2C_FIELD(arg0, f32 *, 0x110) = var_f31;
        }
        /* draft: did not compile: fn_800161A8(arg0 + 0x10C); */
        M2C_FIELD(arg0, s8 *, 0x124) = 0;
    }
    if ((var_r30 != 0) && ((u8) M2C_FIELD(arg1, u8 *, 0x18) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x18C) == 0)) {
        M2C_FIELD(arg0, s32 *, 0x18C) = 1;
    }
    fn_80019AE8(arg0);
    var_r3 = 0;
    if ((var_r31 != 0) && (var_r30 != 0)) {
        var_r3 = 1;
    }
    return var_r3;
}

void fn_80018834(void *arg0) {
    M2C_UNK sp44;
    M2C_UNK sp38;
    M2C_UNK sp14;
    f32 sp20;
    M2C_UNK sp2C;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f2;
    void *temp_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x1E0) != 0) {
        temp_r3 = fn_800A713C(M2C_FIELD(arg0, s32 *, 0x24));
        if (temp_r3 == NULL) {
            M2C_FIELD(arg0, s32 *, 0x1E0) = 0;
            return;
        }
        fn_80019AE8(arg0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x1D8) == 0U) {
            HSD_CObjGetEyePosition_800F2B24(M2C_FIELD(arg0, s32 *, 0x60), &sp38);
            HSD_CObjGetEyePosition(M2C_FIELD(arg0, s32 *, 0x60), &sp2C);
            PSVECSubtract(&sp2C, &sp38, &sp20);
            PSVECNormalize(&sp20, &sp20);
            PSVECScale(&sp20, &sp20, lbl_80351430);
            PSVECAdd(&sp38, &sp20, &sp20);
            M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(void *, f32 *), 0x38)(temp_r3, &sp20);
            return;
        }
        HSD_CObjGetViewingMtxPtr(M2C_FIELD(arg0, s32 *, 0x60));
        PSMTXTranspose(&sp44);
        sp8 = M2C_FIELD(arg0, f32 *, 0x1D0);
        spC = M2C_FIELD(arg0, f32 *, 0x1D4);
        temp_f2 = M2C_BITWISE(f32, M2C_FIELD(arg0, u32 *, 0x1D8));
        sp10 = temp_f2;
        PSVECScale(&sp8, &sp8, lbl_80351430 / -temp_f2, temp_f2);
        PSMTXMultVecSR(&sp44, &sp8, &sp8);
        HSD_CObjGetEyePosition_800F2B24(M2C_FIELD(arg0, s32 *, 0x60), &sp14);
        PSVECAdd(&sp14, &sp8, &sp8);
        M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(void *, f32 *), 0x38)(temp_r3, &sp8);
    }
}

void fn_80018994(void *arg0) {
    f32 spC;
    M2C_UNK sp8;
    s32 temp_r4;
    void *temp_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x1E8) != 0) {
        temp_r3 = fn_800A713C(M2C_FIELD(arg0, s32 *, 0x24));
        if ((temp_r3 == NULL) || (temp_r4 = M2C_FIELD(temp_r3, s32 *, 8), (((temp_r4 & 0x80000) == 0) == 0))) {
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0;
            return;
        }
        if (temp_r4 & 0x8000) {
            if ((s32) M2C_FIELD(temp_r3, s32 *, 0x1B8) != 1) {
                M2C_FIELD(temp_r3, s32 *, 8) = (s32) (temp_r4 & 0xFFF7FFFF);
                M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(), 0x40)();
                M2C_FIELD(arg0, s32 *, 0x1E8) = 0;
                fn_800794C0(M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(temp_r3, s32 *, 0));
            }
        } else {
            M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(M2C_UNK *), 0x3C)(&sp8);
            /* draft: did not compile: PSVECAdd(&sp8, arg0 + 0x1EC, &sp8); */
            if (spC < lbl_803513B4) {
                spC = lbl_803513B4;
            }
            M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(void *, M2C_UNK *), 0x38)(temp_r3, &sp8);
            M2C_FIELD(arg0, f32 *, 0x1F0) = (f32) ((f64) M2C_FIELD(arg0, f32 *, 0x1F0) - lbl_80351438);
            if (spC == lbl_803513B4) {
                M2C_FIELD(temp_r3, s32 *, 8) = (s32) (M2C_FIELD(temp_r3, s32 *, 8) & 0xFFF7FFFF);
                M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(void *), 0x40)(temp_r3);
                M2C_FIELD(arg0, s32 *, 0x1E8) = 0;
                fn_800794C0(M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(temp_r3, s32 *, 0));
            }
        }
    }
}

s32 fn_80018AE4(void) {
    return 0;
}

s32 fn_80018AEC(void *arg0) { return 0; } /* draft: stub */

void fn_80018F78(void *arg0) { } /* draft: stub */

void fn_80019760(s32 arg0) {
    fn_80016140(arg0 + 0x78);
}

s32 fn_80019784(void) {
    return 1;
}

void fn_8001978C(void) {

}

s32 fn_80019790(void) {
    fn_80016E78();
    return 1;
}

s32 fn_800197B4(void) {
    fn_80016FAC();
    return 1;
}

s32 fn_800197D8(void *arg0, void *arg1) {
    M2C_FIELD(arg1, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0x10C);
    M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x110);
    M2C_FIELD(arg1, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x114);
    M2C_FIELD(arg1, f32 *, 4) = (f32) (M2C_FIELD(arg1, f32 *, 4) + lbl_803513D0);
    return 1;
}

void fn_80019808(void *arg0, void *arg1, s32 arg2) {
    s32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f31;

    fn_80016CB8(arg1);
    PSMTXMultVec(arg2, &sp8);
    temp_f31 = -sp10 * (f32) Tan((lbl_803513D0 * (HSD_CObjGetFov(M2C_FIELD(arg1, s32 *, 0x60)) * lbl_803513F8)) / lbl_803513FC, lbl_803513D0);
    if (fabs(temp_f31) < (f32) lbl_80351448) {
        sp8 = lbl_803513B4;
        spC = lbl_803513B4;
    } else {
        sp8 = lbl_80351414 * (sp8 / (temp_f31 * method_getAspect(M2C_FIELD(arg1, s32 *, 0x60))));
        spC = lbl_80351450 * (spC / temp_f31);
    }
    M2C_FIELD(arg0, f32 *, 0) = sp8;
    M2C_FIELD(arg0, f32 *, 4) = spC;
    M2C_FIELD(arg0, f32 *, 8) = sp10;
}

void fn_8001990C(void *arg0, void *arg1, void *arg2) {
    f32 temp_f31;
    M2C_UNK sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f3;
    f32 temp_r4;
    f32 temp_r6;

    temp_r6 = M2C_FIELD(arg2, f32 *, 0);
    temp_r4 = M2C_FIELD(arg2, f32 *, 4);
    spC = temp_r4;
    sp10 = M2C_FIELD(arg2, f32 *, 8);
    temp_f1 = (f32) Tan((lbl_803513D0 * (HSD_CObjGetFov(M2C_FIELD(arg1, s32 *, 0x60), temp_r4, temp_r6) * lbl_803513F8)) / lbl_803513FC, lbl_803513D0);
    sp8 = temp_r6;
    temp_f31 = -sp10 * temp_f1;
    temp_f3 = sp8;
    temp_f1_2 = (temp_f3 * lbl_80351454) * (temp_f31 * method_getAspect(M2C_FIELD(arg1, s32 *, 0x60), temp_f1));
    spC = (spC / lbl_80351450);
    M2C_FIELD(arg0, f32 *, 8) = sp10;
    M2C_FIELD(arg0, f32 *, 4) = (spC * temp_f31);
    sp8 = temp_f1_2;
    fn_80016CB8((void *)(arg1));
    PSMTXInverse(&sp14);
    PSMTXMultVec(&sp14, &sp8, &sp8);
    M2C_FIELD(arg0, f32 *, 0) = sp8;
}

void fn_80019A08(void *arg0, u8 arg1) {
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f6;

    HSD_CObjGetEyePosition_800F2B24(M2C_FIELD(arg0, s32 *, 0x60), &sp14);
    HSD_CObjGetEyePosition(M2C_FIELD(arg0, s32 *, 0x60), &sp8);
    temp_f6 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x64), void **, 8), f32 *, 0x14);
    sp14 *= temp_f6;
    sp18 *= temp_f6;
    sp1C *= temp_f6;
    sp8 *= temp_f6;
    spC *= temp_f6;
    sp10 *= temp_f6;
    if (arg1 != 0) {
        /* draft: did not compile: PSMTXMultVec(arg0 + 0x1A0, &sp14, &sp14); */
        /* draft: did not compile: PSMTXMultVec(arg0 + 0x1A0, &sp8, &sp8); */
    }
    HSD_CObjSetInterest(M2C_FIELD(arg0, s32 *, 0x60), &sp8);
    HSD_CObjSetEyePosition(M2C_FIELD(arg0, s32 *, 0x60), &sp14);
}

void fn_80019AE8(void *arg0) {
    s32 sp10;
    s32 spC;
    M2C_UNK sp2C;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    u8 sp8;

    if ((u8) M2C_FIELD(arg0, u8 *, 0x108) != 0) {
        /* draft: did not compile: HSD_CObjSetEyePosition(M2C_FIELD(arg0, s32 *, 0x60), arg0 + 0x118); */
        fn_80070D60(&sp2C, M2C_FIELD(arg0, f32 *, 0x10C), M2C_FIELD(arg0, f32 *, 0x110), M2C_FIELD(arg0, f32 *, 0x114));
        sp20 = lbl_803513B4;
        sp24 = lbl_803513B4;
        sp28 = lbl_803513B8;
        PSMTXMultVecSR((long *)(&sp2C), (float *)(&sp20), (float *)(&sp20));
        /* draft: did not compile: PSVECAdd(&sp20, arg0 + 0x118, &sp8); */
        sp14 = sp8;
        sp18 = spC;
        sp1C = sp10;
        HSD_CObjSetInterest(M2C_FIELD(arg0, s32 *, 0x60), &sp14, sp8);
        M2C_FIELD(arg0, u8 *, 0x108) = 0U;
    }
}
