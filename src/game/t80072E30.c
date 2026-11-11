/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_8007170C(void *);
M2C_UNK HSD_FObjRemoveAll(s32);
M2C_UNK HSD_FObjReqAnimAll(f32);
s32 HSD_FObjLoadDesc(s32);
extern f32 lbl_80351914;
M2C_UNK fn_80015F5C();
M2C_UNK fn_800716AC();
M2C_UNK fn_80071748();
M2C_UNK fn_80076914(void *, s32, s32, void *);
M2C_UNK fn_800769BC(void *, s32, s32, void *);
M2C_UNK fn_80076D34();
M2C_UNK fn_80076DC8();
M2C_UNK PSMTXIdentity();
M2C_UNK PSVECScale(f32 *, f32 *, void *, f32);
void *HSD_JObjLoadJoint(s32);
M2C_UNK __assert(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_80221B10;
extern M2C_UNK lbl_80223C1C;
extern M2C_UNK lbl_80223D70;
extern M2C_UNK lbl_8034EAA8;
extern M2C_UNK lbl_8034EAB0;
extern f32 lbl_80351938;
extern f32 lbl_8035193C;
s32 *get_up_vector_for_viewing_mtx(M2C_UNK);
s32 *fn_8009DD68(s32);
M2C_UNK fn_80005888(void *);
M2C_UNK fn_800146F0();
M2C_UNK fn_80076A64();
M2C_UNK fn_80076D4C();
M2C_UNK fn_80076E24();
M2C_UNK fn_80076EC0();
M2C_UNK fn_80079FFC(void *, M2C_UNK);
void *fn_8009E1D0();
u32 HSD_TlutAlloc();
M2C_UNK HSD_TlutRemove();
s32 fn_8001331C();
void *fn_8009E228(void *);
u32 fn_8009E28C(s32);
M2C_UNK fn_8009DFA0(void **, s32, s32);
M2C_UNK HSD_JObjRemoveAnimAllByFlags(s32, M2C_UNK);
M2C_UNK fn_800749C8(M2C_UNK, M2C_UNK, s32, M2C_UNK);
M2C_UNK fn_80074B04(M2C_UNK, M2C_UNK, f32);
M2C_UNK method_seekMotion(void *, f32);
M2C_UNK fn_80076C4C();
M2C_UNK fn_8007518C();
M2C_UNK HSD_JObjResetRST(s32, s32);

void fn_80072E30();
void fn_800730BC();
void fn_80073220(void *arg0, void *arg1, f32 farg0);
u32 fn_800732D4(void *arg0);
u32 fn_8007333C(void *arg0);
u32 fn_800733BC(void *arg0);
u32 fn_8007341C(void *arg0);
u32 fn_80073490(void *arg0);
u32 fn_80073500(void *arg0);
u32 fn_8007354C(void *arg0);
void fn_800735A0();
u32 fn_80073760(void *arg0);
u32 fn_8007378C(void *arg0);
u32 fn_800737B8(void *arg0);
u32 fn_800737E4(void *arg0);
void *fn_80073810(void *arg0, void **arg1);
void fn_80073B14(s32 **arg0, s32 arg1);
void *fn_80073B80(void *arg0, s16 arg1);
s32 fn_80073D4C(void *arg0);
s32 method_setTexture(void *arg0);
void method_setAnitex(void *arg0);
void method_resetAnitex(void *arg0);
void method_setAnishape(void *arg0);
void method_resetAnishape(void *arg0);
s32 fn_80074024(void *arg0, void *arg2);
s32 fn_80074084(void *arg1, void *arg2);
void method_setShapeMotion(void *arg0, s32 arg1, f32 farg0);
void fn_800742B4(void *arg0);
s32 method_requestMotionUrgently(void *arg0, s32 arg1, f32 farg0);
void method_requestMotion(void *arg0, s32 arg1);
s32 method_requestNextMotion(void *arg0, s32 arg1);
void method_resetMotion(void *arg0);

void fn_80072E30() { } /* draft: stub */

void fn_800730BC() { } /* draft: stub */

void fn_80073220(void *arg0, void *arg1, f32 farg0) {
    void *spC;
    void *sp8;
    f32 var_f31;
    s32 temp_r31;

    var_f31 = farg0;
    fn_8007170C(arg1);
    M2C_FIELD(arg1, s32 *, 0x28) = 0x1FF;
    if (arg0 != NULL) {
        spC = arg0;
        temp_r31 = HSD_FObjLoadDesc(M2C_FIELD(arg0, s32 *, 8));
        HSD_FObjReqAnimAll(lbl_80351914);
        if (var_f31 < lbl_80351914) {
            var_f31 = M2C_FIELD(arg0, f32 *, 4);
        }
        sp8 = arg1;
        HSD_FObjInterpretAnimAll(temp_r31, &sp8, fn_800730BC, var_f31);
        HSD_FObjRemoveAll(temp_r31);
    }
}

u32 fn_800732D4(void *arg0) {
    u32 temp_r3;
    u32 temp_r3_2;
    void *var_r31;

    var_r31 = arg0;
    temp_r3_2 = M2C_FIELD(arg0, u32 *, 0x7C);
    if (temp_r3_2 != 0U) {
        return temp_r3_2;
    }
loop_7:
    if (var_r31 == NULL) {
        return 0U;
    }
    if ((u32) M2C_FIELD(var_r31, u32 *, 0x10) != 0U) {
        temp_r3 = fn_800732D4((void *)(0));
        if (temp_r3 != 0U) {
            return temp_r3;
        }
    }
    var_r31 = M2C_FIELD(var_r31, void **, 8);
    goto loop_7;
}

u32 fn_8007333C(void *arg0) {
    u32 temp_r3;
    u32 temp_r3_2;
    u32 temp_r3_3;
    void *var_r31;

    var_r31 = arg0;
    if (var_r31 == NULL) {
        return 0U;
    }
    temp_r3_3 = M2C_FIELD(var_r31, u32 *, 8);
    if (temp_r3_3 != 0U) {
        return temp_r3_3;
    }
    /* draft: did not compile: temp_r3_2 = fn_800737E4(M2C_FIELD(var_r31, s32 *, 0xC)); */
    if (temp_r3_2 != 0U) {
        return temp_r3_2;
    }
loop_10:
    if (var_r31 == NULL) {
        return 0U;
    }
    temp_r3 = fn_8007333C(M2C_FIELD(var_r31, void **, 0));
    if (temp_r3 != 0U) {
        return temp_r3;
    }
    var_r31 = M2C_FIELD(var_r31, void **, 4);
    goto loop_10;
}

u32 fn_800733BC(void *arg0) {
    u32 temp_r3;
    u32 temp_r3_2;

    if (arg0 == NULL) {
        return 0U;
    }
    /* draft: did not compile: temp_r3_2 = fn_800737B8(M2C_FIELD(arg0, s32 *, 0)); */
    if (temp_r3_2 != 0U) {
        return temp_r3_2;
    }
    /* draft: did not compile: temp_r3 = fn_8007378C(M2C_FIELD(arg0, s32 *, 4)); */
    if (temp_r3 != 0U) {
        return temp_r3;
    }
    return 0U;
}

u32 fn_8007341C(void *arg0) {
    u32 temp_r3;
    u32 temp_r3_2;
    u32 temp_r3_3;
    void *var_r31;

    var_r31 = arg0;
loop_8:
    if (var_r31 == NULL) {
        return 0U;
    }
    temp_r3_3 = M2C_FIELD(var_r31, u32 *, 4);
    if (temp_r3_3 != 0U) {
        return temp_r3_3;
    }
    /* draft: did not compile: temp_r3_2 = fn_80073760(M2C_FIELD(var_r31, s32 *, 8)); */
    if (temp_r3_2 != 0U) {
        return temp_r3_2;
    }
    /* draft: did not compile: temp_r3 = fn_800733BC(M2C_FIELD(var_r31, s32 *, 0xC)); */
    if (temp_r3 != 0U) {
        return temp_r3;
    }
    var_r31 = M2C_FIELD(var_r31, void **, 0);
    goto loop_8;
}

u32 fn_80073490(void *arg0) {
    u32 temp_r3;
    u32 temp_r3_2;
    void *var_r31;

    var_r31 = arg0;
    if (var_r31 == NULL) {
        return 0U;
    }
    /* draft: did not compile: temp_r3_2 = fn_8007341C(M2C_FIELD(var_r31, s32 *, 8)); */
    if (temp_r3_2 != 0U) {
        return temp_r3_2;
    }
loop_8:
    if (var_r31 == NULL) {
        return 0U;
    }
    temp_r3 = fn_80073490(M2C_FIELD(var_r31, void **, 0));
    if (temp_r3 != 0U) {
        return temp_r3;
    }
    var_r31 = M2C_FIELD(var_r31, void **, 4);
    goto loop_8;
}

u32 fn_80073500(void *arg0) {
    u32 var_r0;

    if (arg0 == NULL) {
        return 0U;
    }
    var_r0 = M2C_FIELD(arg0, u32 *, 0);
    if (var_r0 != 0U) {

    } else {
        /* draft: did not compile: var_r0 = fn_800737E4(M2C_FIELD(arg0, s32 *, 4)); */
    }
    return var_r0;
}

u32 fn_8007354C(void *arg0) {
    u32 temp_r3;
    u32 temp_r3_2;

    /* draft: did not compile: temp_r3_2 = fn_80073500(M2C_FIELD(arg0, s32 *, 4)); */
    if (temp_r3_2 != 0U) {
        return temp_r3_2;
    }
    /* draft: did not compile: temp_r3 = fn_80073500(M2C_FIELD(arg0, s32 *, 8)); */
    if (temp_r3 != 0U) {
        return temp_r3;
    }
    return M2C_FIELD(arg0, u32 *, 0);
}

void fn_800735A0() { } /* draft: stub */

u32 fn_80073760(void *arg0) {
    u32 temp_r0;
    void *var_r3;

    var_r3 = arg0;
loop_4:
    if (var_r3 == NULL) {
        return 0U;
    }
    temp_r0 = M2C_FIELD(var_r3, u32 *, 8);
    if (temp_r0 != 0U) {
        return temp_r0;
    }
    var_r3 = M2C_FIELD(var_r3, void **, 0);
    goto loop_4;
}

u32 fn_8007378C(void *arg0) {
    u32 temp_r0;
    void *var_r3;

    var_r3 = arg0;
loop_4:
    if (var_r3 == NULL) {
        return 0U;
    }
    temp_r0 = M2C_FIELD(var_r3, u32 *, 4);
    if (temp_r0 != 0U) {
        return temp_r0;
    }
    var_r3 = M2C_FIELD(var_r3, void **, 0);
    goto loop_4;
}

u32 fn_800737B8(void *arg0) {
    u32 temp_r0;
    void *var_r3;

    var_r3 = arg0;
loop_4:
    if (var_r3 == NULL) {
        return 0U;
    }
    temp_r0 = M2C_FIELD(var_r3, u32 *, 4);
    if (temp_r0 != 0U) {
        return temp_r0;
    }
    var_r3 = M2C_FIELD(var_r3, void **, 0);
    goto loop_4;
}

u32 fn_800737E4(void *arg0) {
    u32 temp_r0;
    void *var_r3;

    var_r3 = arg0;
loop_4:
    if (var_r3 == NULL) {
        return 0U;
    }
    temp_r0 = M2C_FIELD(var_r3, u32 *, 4);
    if (temp_r0 != 0U) {
        return temp_r0;
    }
    var_r3 = M2C_FIELD(var_r3, void **, 0);
    goto loop_4;
}

void *fn_80073810(void *arg0, void **arg1) { } /* draft: stub */

void fn_80073B14(s32 **arg0, s32 arg1) {
    s32 *temp_r4;
    s32 *var_r0;

    var_r0 = get_up_vector_for_viewing_mtx(0x3C);
    if (var_r0 != NULL) {
        var_r0 = fn_8009DD68(arg1);
    }
    *arg0 = var_r0;
    temp_r4 = *arg0;
    if (temp_r4 != NULL) {
        *temp_r4 += 1;
    }
}

void *fn_80073B80(void *arg0, s16 arg1) { } /* draft: stub */

s32 fn_80073D4C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x64);
}

s32 method_setTexture(void *arg0) {
    s32 temp_r0;
    u8 temp_r29;
    void *temp_r30;
    void *temp_r3;

    temp_r3 = fn_8009E1D0(M2C_FIELD(arg0, s32 *, 0x5C));
    if (temp_r3 == NULL) {
        return 0;
    }
    temp_r29 = (M2C_FIELD(M2C_FIELD(temp_r3, void **, 0), s32 *, 0x10) & 0xFFF) * 0x1C;
    /* draft: did not compile: temp_r30 = *(M2C_FIELD(arg0, s32 *, 0x16C) + temp_r29); */
    if (temp_r30 == NULL) {
        return 0;
    }
    /* draft: did not compile: M2C_FIELD(temp_r30, void **, 0x58) = (void *) (temp_r3 + 8); */
    temp_r0 = M2C_FIELD(temp_r3, s32 *, 0x10);
    if (temp_r0 < 0xB) {
        if (temp_r0 < 8) {
            goto block_10;
        }
        if ((u32) M2C_FIELD(temp_r30, u32 *, 0x5C) == 0U) {
            M2C_FIELD(temp_r30, u32 *, 0x5C) = HSD_TlutAlloc();
        }
        /* draft: did not compile: memcpy(M2C_FIELD(temp_r30, u32 *, 0x5C), temp_r3 + 0x20, 0x10); */
    } else {
block_10:
        if ((u32) M2C_FIELD(temp_r30, u32 *, 0x5C) != 0U) {
            M2C_FIELD(temp_r30, u32 *, 0x5C) = 0U;
            HSD_TlutRemove();
        }
    }
    /* draft: did not compile: M2C_FIELD(temp_r30, void **, 0x60) = (void *) (temp_r3 + 0x30); */
    return M2C_FIELD(arg0, s32 *, 0x16C) + temp_r29;
}

void method_setAnitex(void *arg0) { } /* draft: stub */

void method_resetAnitex(void *arg0) { } /* draft: stub */

void method_setAnishape(void *arg0) {
    s32 temp_r31;
    u32 temp_r3;

    temp_r3 = fn_8009E28C(M2C_FIELD(arg0, s32 *, 0x5C));
    if ((temp_r3 != 0U) && ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U)) {
        temp_r31 = M2C_FIELD(arg0, s32 *, 0x178);
        /* draft: did not compile: fn_80074084(arg0, temp_r31 + 4, fn_8001331C(temp_r31 + 4, temp_r3, -1, -1)); */
    }
}

void method_resetAnishape(void *arg0) { } /* draft: stub */

s32 fn_80074024(void *arg0, void *arg2) { return 0; } /* draft: stub */

s32 fn_80074084(void *arg1, void *arg2) {
    if (arg2 != NULL) {
        if ((s32) M2C_FIELD(arg1, s32 *, 0x10) != (s32) M2C_FIELD(arg1, s32 *, 8)) {
            /* draft: did not compile: method_setShapeMotion(M2C_FIELD(arg2, s32 *, 0), M2C_FIELD(arg2, f32 *, 4)); */
        } else {
            /* draft: did not compile: fn_800742B4(M2C_FIELD(arg2, f32 *, 4)); */
        }
        return 1;
    }
    /* draft: did not compile: method_setShapeMotion(0x38000000, lbl_80351938); */
    return 0;
}

void method_setShapeMotion(void *arg0, s32 arg1, f32 farg0) {
    void *spC;
    void *sp8;
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r4;
    void *temp_r4_2;

    fn_8009DFA0(&sp8, M2C_FIELD(arg0, s32 *, 0x5C), arg1);
    spC = sp8;
    if (sp8 != NULL) {
        M2C_FIELD(sp8, s32 *, 0) = (s32) (M2C_FIELD(sp8, s32 *, 0) + 1);
    }
    if (sp8 != NULL) {
        M2C_FIELD(sp8, s32 *, 0) = (s32) (M2C_FIELD(sp8, s32 *, 0) - 1);
        if (((s32) M2C_FIELD(sp8, s32 *, 0) == 0) && (sp8 != NULL)) {
            M2C_FIELD(M2C_FIELD(sp8, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
        }
    }
    temp_cr0_eq = spC == NULL;
    sp8 = NULL;
    if (temp_cr0_eq != 0) {
        temp_r4 = M2C_FIELD(arg0, void **, 0x148);
        temp_cr0_eq_2 = temp_r4 == NULL;
        if (temp_cr0_eq_2 == 0) {
            if (temp_cr0_eq_2 == 0) {
                M2C_FIELD(temp_r4, s32 *, 0) = (s32) (M2C_FIELD(temp_r4, s32 *, 0) - 1);
                if ((s32) M2C_FIELD(temp_r4, s32 *, 0) == 0) {
                    temp_r3 = M2C_FIELD(arg0, void **, 0x148);
                    if (temp_r3 != NULL) {
                        M2C_FIELD(M2C_FIELD(temp_r3, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                    }
                }
            }
            M2C_FIELD(arg0, void **, 0x148) = NULL;
            HSD_JObjRemoveAnimAllByFlags(M2C_FIELD(arg0, s32 *, 0x64), 8);
        }
    } else {
        if (temp_cr0_eq == 0) {
            M2C_FIELD(spC, s32 *, 0) = (s32) (M2C_FIELD(spC, s32 *, 0) + 1);
        }
        temp_r4_2 = M2C_FIELD(arg0, void **, 0x148);
        if (temp_r4_2 != NULL) {
            M2C_FIELD(temp_r4_2, s32 *, 0) = (s32) (M2C_FIELD(temp_r4_2, s32 *, 0) - 1);
            if ((s32) M2C_FIELD(temp_r4_2, s32 *, 0) == 0) {
                temp_r3_2 = M2C_FIELD(arg0, void **, 0x148);
                if (temp_r3_2 != NULL) {
                    M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                }
            }
        }
        M2C_FIELD(arg0, void **, 0x148) = spC;
        fn_800742B4((void *)(arg0));
    }
    if (spC != NULL) {
        M2C_FIELD(spC, s32 *, 0) = (s32) (M2C_FIELD(spC, s32 *, 0) - 1);
        if (((s32) M2C_FIELD(spC, s32 *, 0) == 0) && (spC != NULL)) {
            M2C_FIELD(M2C_FIELD(spC, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
        }
    }
    spC = NULL;
}

void fn_800742B4(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x148);
    if (temp_r4 != NULL) {
        fn_800749C8(0, 0, M2C_FIELD(temp_r4, s32 *, 0x1C), 8);
    }
}

s32 method_requestMotionUrgently(void *arg0, s32 arg1, f32 farg0) {
    void *sp24;
    s32 sp20;
    void *sp1C;
    void *sp18;
    s32 sp14;
    M2C_UNK sp10;
    void *spC;
    M2C_UNK sp8;
    s32 temp_r30;
    s32 temp_r6;
    void *temp_r30_2;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x14C) != 0U) {
        fn_80074B04(0x10000000, 0x10000000, lbl_80351938);
    }
    temp_r6 = M2C_FIELD(arg0, s32 *, 0x138);
    fn_8009DFA0((void **)(&sp1C), (long)(M2C_FIELD(arg0, s32 *, 0x5C)), (long)(arg1));
    sp20 = M2C_FIELD(arg0, s32 *, 0x144);
    sp24 = sp1C;
    if (sp1C != NULL) {
        M2C_FIELD(sp1C, s32 *, 0) = (s32) (M2C_FIELD(sp1C, s32 *, 0) + 1);
    }
    if (sp1C != NULL) {
        M2C_FIELD(sp1C, s32 *, 0) = (s32) (M2C_FIELD(sp1C, s32 *, 0) - 1);
        if (((s32) M2C_FIELD(sp1C, s32 *, 0) == 0) && (sp1C != NULL)) {
            M2C_FIELD(M2C_FIELD(sp1C, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
        }
    }
    /* draft: did not compile: temp_r30_2 = arg0 + 0x13C; */
    sp1C = NULL;
    sp18 = temp_r30_2;
    sp14 = M2C_FIELD(arg0, s32 *, 0x140);
    /* draft: did not compile: fn_80076A64(&sp10, arg0 + 0x138, &sp14, &sp18); */
    if (sp24 != NULL) {
        spC = temp_r30_2;
        /* draft: did not compile: fn_80076C4C(&sp8, arg0 + 0x138, &spC, &sp20); */
        method_seekMotion(arg0, farg0);
        temp_r30 = M2C_FIELD(arg0, s32 *, 0x144);
        M2C_FIELD(arg0, s32 *, 0x144) = (s32) (temp_r30 + 1);
        if (&sp24 != NULL) {
            if (sp24 != NULL) {
                M2C_FIELD(sp24, s32 *, 0) = (s32) (M2C_FIELD(sp24, s32 *, 0) - 1);
                if (((s32) M2C_FIELD(sp24, s32 *, 0) == 0) && (sp24 != NULL)) {
                    M2C_FIELD(M2C_FIELD(sp24, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                }
            }
            sp24 = NULL;
        }
        return temp_r30;
    }
    if ((u32) (temp_r6 != 0) != 0) {
        HSD_JObjRemoveAnimAllByFlags(M2C_FIELD(arg0, s32 *, 0x64), 0x7F7);
    }
    M2C_FIELD(arg0, s32 *, 0x15C) = 0;
    if (&sp24 != NULL) {
        if (sp24 != NULL) {
            M2C_FIELD(sp24, s32 *, 0) = (s32) (M2C_FIELD(sp24, s32 *, 0) - 1);
            if (((s32) M2C_FIELD(sp24, s32 *, 0) == 0) && (sp24 != NULL)) {
                M2C_FIELD(M2C_FIELD(sp24, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
        }
        sp24 = NULL;
    }
    return -1;
}

void method_requestMotion(void *arg0, s32 arg1) {
    M2C_UNK sp10;
    s32 spC;
    void *sp8;
    void *temp_r7;
    void *temp_r8;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x138) != 0U) {
        /* draft: did not compile: temp_r8 = arg0 + 0x13C; */
        temp_r7 = M2C_FIELD(arg0, void **, 0x140);
        sp8 = temp_r8;
        spC = M2C_FIELD(temp_r7, s32 *, 4);
        /* draft: did not compile: fn_80076A64(&sp10, arg0 + 0x138, &spC, &sp8, temp_r7, temp_r8); */
    }
    method_requestNextMotion(arg0, arg1);
}

s32 method_requestNextMotion(void *arg0, s32 arg1) {
    void *sp18;
    s32 sp14;
    void *sp10;
    void *spC;
    M2C_UNK sp8;
    s32 temp_r30;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x138) == 0U) {
        return 0;
    }
    fn_8009DFA0((void **)(&sp10), (long)(M2C_FIELD(arg0, s32 *, 0x5C)), (long)(0));
    sp14 = M2C_FIELD(arg0, s32 *, 0x144);
    sp18 = sp10;
    if (sp10 != NULL) {
        M2C_FIELD(sp10, s32 *, 0) = (s32) (M2C_FIELD(sp10, s32 *, 0) + 1);
    }
    if (sp10 != NULL) {
        M2C_FIELD(sp10, s32 *, 0) = (s32) (M2C_FIELD(sp10, s32 *, 0) - 1);
        if (((s32) M2C_FIELD(sp10, s32 *, 0) == 0) && (sp10 != NULL)) {
            M2C_FIELD(M2C_FIELD(sp10, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
        }
    }
    sp10 = NULL;
    if (sp18 == NULL) {
        if (&sp18 != NULL) {
            if (sp18 != NULL) {
                M2C_FIELD(sp18, s32 *, 0) = (s32) (M2C_FIELD(sp18, s32 *, 0) - 1);
                if (((s32) M2C_FIELD(sp18, s32 *, 0) == 0) && (sp18 != NULL)) {
                    M2C_FIELD(M2C_FIELD(sp18, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                }
            }
            sp18 = NULL;
        }
        return -1;
    }
    /* draft: did not compile: spC = arg0 + 0x13C; */
    /* draft: did not compile: fn_80076C4C(&sp8, arg0 + 0x138, &spC, &sp14); */
    temp_r30 = M2C_FIELD(arg0, s32 *, 0x144);
    M2C_FIELD(arg0, s32 *, 0x144) = (s32) (temp_r30 + 1);
    if (&sp18 != NULL) {
        if (sp18 != NULL) {
            M2C_FIELD(sp18, s32 *, 0) = (s32) (M2C_FIELD(sp18, s32 *, 0) - 1);
            if (((s32) (u16)M2C_FIELD(sp18, s32 *, 0) == 0) && (sp18 != NULL)) {
                M2C_FIELD(M2C_FIELD(sp18, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
        }
        sp18 = NULL;
    }
    return temp_r30;
}

void method_resetMotion(void *arg0) {
    /* draft: did not compile: method_requestMotionUrgently(0x38000000, lbl_80351938); */
    HSD_JObjResetRST(M2C_FIELD(arg0, s32 *, 0x64), M2C_FIELD(M2C_FIELD(arg0, void **, 0x5C), s32 *, 0x10));
    /* draft: did not compile: fn_80071748(arg0 + 0xAC, M2C_FIELD(arg0, s32 *, 0x64)); */
    /* draft: did not compile: fn_8007518C(arg0, arg0 + 0xAC); */
}
