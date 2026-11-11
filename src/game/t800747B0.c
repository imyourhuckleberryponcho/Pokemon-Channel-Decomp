/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

extern f32 lbl_80351940;
extern f32 lbl_80351938;
u32 fn_800732D4(s32);
M2C_UNK HSD_JObjRemoveAnimAllByFlags(s32, s32);
M2C_UNK HSD_FogReqAnimByFlags(s32, s32, f32);
M2C_UNK HSD_JObjAddAnimAll(s32, s32, s32, s32);
extern f32 lbl_8035193C;
M2C_UNK HSD_ForeachAnim(s32, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, f32);
extern M2C_UNK HSD_AObjSetRate;
extern f32 lbl_80351944;
M2C_UNK method_requestMotionUrgently(M2C_UNK, f32);
u32 fn_8009E178(s32, s32);
M2C_UNK fn_800716AC(M2C_UNK *);
M2C_UNK fn_80071C00(M2C_UNK *, void *);
M2C_UNK fn_80072010();
M2C_UNK fn_800716DC(M2C_UNK *, s32);
M2C_UNK fn_80071748();
M2C_UNK fn_8007198C();
M2C_UNK HSD_JObjAnimAll(s32);
M2C_UNK PSVECScale();
M2C_UNK fn_800FD7C8(void *);
M2C_UNK __assert(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_80223BE4;
extern M2C_UNK lbl_8034EAA8;
extern M2C_UNK lbl_8034EAB0;
M2C_UNK fn_80070D60(M2C_UNK *, f32, f32, f32);
M2C_UNK PSMTXConcat();
M2C_UNK fn_80104500(M2C_UNK *, f32 *);
M2C_UNK fn_800717C8();
M2C_UNK fn_80070EA8(M2C_UNK *, f32, f32, f32);
M2C_UNK fn_80071928(M2C_UNK *, M2C_UNK *);
M2C_UNK fn_80071A64(M2C_UNK *, s32);
M2C_UNK fn_80071E60();
M2C_UNK PSMTXTrans(M2C_UNK *, f32, f32, f32);
extern M2C_UNK lbl_8034EAB8;
extern M2C_UNK lbl_8034EAC0;
f32 fn_80071054(void *);
M2C_UNK HSD_JObjSetupMatrixSub(void *);
M2C_UNK HSD_MtxGetTranslate(void *, u32);
f32 fn_800710E4(s32, M2C_UNK *);
u32 PSMTXInverse(void *, M2C_UNK *);
s32 fn_80013390(s32, f32);
M2C_UNK fn_80074024(void *, s32, s32);
M2C_UNK fn_80074084(void *, s32, s32);
M2C_UNK fn_80076B64();
M2C_UNK fn_800A7008(s32, void *);
void *fn_800A713C(s32, s32);
extern f32 lbl_80351948;
extern f32 lbl_8035194C;

s32 method_isMotionStarted(void *arg0, s32 arg1);
s32 method_isMotionCompleted(void *arg0, s32 arg1, u8 arg2);
u32 method_isNoMoreMotion(void *arg0);
s32 method_isMotionLooped(void *arg0);
s32 fn_80074904(void *arg0);
f32 method_getCurrentFrame(void *arg0);
f32 method_getBeginFrame(void *arg0);
f32 method_getEndFrame(void *arg0);
void fn_800749B4(u32 arg0, u32 *arg1);
void fn_800749C8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0);
void method_setAnimRate(void *arg0, f32 farg0);
void fn_80074B04(void *arg0, s32 arg1, s32 arg2, f32 farg0);
void fn_80074BC4(void *arg0, void *arg1, void *arg2, f32 farg0);
void fn_80074C78(void *arg0);
void method_seekMotion(void *arg0, f32 farg0);
s32 fn_80074DBC(void *arg0, f32 farg0);
s32 fn_80074DD8(void *arg0, s32 arg1);
s32 fn_80074E28(void *arg0);
s32 fn_80074E64(void *arg0, void *arg1);
s32 fn_80074F54(void *arg0, void *arg1);
s32 fn_80074FD8(void *arg0, void *arg1);
void method_setRotateRel(void *arg0, void *arg1);
void fn_800750E0(void *arg0, void *arg1);
void fn_8007518C(void *arg0, void *arg1);
void fn_800752E8(void *arg0, void *arg1);
s32 fn_800753DC(void *arg0, void *arg1);
s32 fn_800754E4(void *arg0, void *arg1);
s32 fn_8007554C(void *arg0, void *arg1);
void fn_80075574(void *arg0, u32 arg1, f32 *arg2);
f32 method_getCollSize(void *arg0, s32 arg1, u32 arg2);
void fn_80075778(void *arg0);
s32 fn_80075AFC(void *arg0);

s32 method_isMotionStarted(void *arg0, s32 arg1) {
    if (((u32) M2C_FIELD(arg0, u32 *, 0x138) >= 1U) && (arg1 == (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x140), s32 *, 8))) {
        return 1;
    }
    return method_isMotionCompleted((void *)(0), (long)(0), (unsigned char)(0));
}

s32 method_isMotionCompleted(void *arg0, s32 arg1, u8 arg2) {
    void *temp_r6;
    void *var_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x138) == 0U) {
        return 1;
    }
    temp_r6 = M2C_FIELD(arg0, void **, 0x140);
    if (arg1 == (s32) M2C_FIELD(temp_r6, s32 *, 8)) {
        if ((arg2 != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x160) > 0)) {
            return 1;
        }
        return fn_80075AFC((void *)(0));
    }
    var_r3 = M2C_FIELD(temp_r6, void **, 4);
loop_11:
    if (0 /* draft: did not compile */) {
        return 1;
    }
    if (arg1 == (s32) M2C_FIELD(var_r3, s32 *, 8)) {
        return 0;
    }
    var_r3 = M2C_FIELD(var_r3, void **, 4);
    goto loop_11;
}

u32 method_isNoMoreMotion(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x138);
    return (u32) ((1 | ~temp_r4) - ((u32) (1 - temp_r4) >> 1U)) >> 0x1FU;
}

#pragma push
#pragma peephole off
s32 method_isMotionLooped(void *arg0) {
    u32 *temp_r3_2;
    u32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x14C) != 0U) {
        if (M2C_FIELD(arg0, f32 *, 0x158) <= M2C_FIELD(arg0, f32 *, 0x154)) {
            return 1;
        }
    }
    temp_r3_2 = M2C_FIELD(arg0, u32 **, 0x15C);
    if (temp_r3_2 == NULL) {
        return 0;
    }
    temp_r3 = *temp_r3_2;
    if (temp_r3 & 0x04000000) {
        return 1;
    }
    return (temp_r3 >> 0x1EU) & 1;
}
#pragma pop

s32 fn_80074904(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x160);
}

f32 method_getCurrentFrame(void *arg0) {
    void *temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x14C) != 0U) {
        return M2C_FIELD(arg0, f32 *, 0x154);
    }
    temp_r3 = M2C_FIELD(arg0, void **, 0x15C);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, f32 *, 4) / M2C_FIELD(temp_r3, f32 *, 0x10);
    }
    return lbl_80351940;
}

f32 method_getBeginFrame(void *arg0) {
    void *temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x14C) != 0U) {
        return lbl_80351938;
    }
    temp_r3 = M2C_FIELD(arg0, void **, 0x15C);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, f32 *, 8) / M2C_FIELD(temp_r3, f32 *, 0x10);
    }
    return lbl_80351940;
}

f32 method_getEndFrame(void *arg0) {
    void *temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x14C) != 0U) {
        return M2C_FIELD(arg0, f32 *, 0x158);
    }
    temp_r3 = M2C_FIELD(arg0, void **, 0x15C);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, f32 *, 0xC) / M2C_FIELD(temp_r3, f32 *, 0x10);
    }
    return lbl_80351940;
}

void fn_800749B4(u32 arg0, u32 *arg1) {
    if ((u32) *arg1 == 0U) {
        *arg1 = arg0;
    }
}

void fn_800749C8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0) { } /* draft: stub */

void method_setAnimRate(void *arg0, f32 farg0) {
    HSD_ForeachAnim(M2C_FIELD(arg0, s32 *, 0x64), 6, 0xFFFF, &HSD_AObjSetRate, 1, lbl_80351944 * farg0);
}

void fn_80074B04(void *arg0, s32 arg1, s32 arg2, f32 farg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x138) != 0U) {
        method_requestMotionUrgently(0x38000000, lbl_80351938);
    }
    M2C_FIELD(arg0, u32 *, 0x14C) = fn_8009E178(M2C_FIELD(arg0, s32 *, 0x5C), arg1);
    M2C_FIELD(arg0, u32 *, 0x150) = fn_8009E178(M2C_FIELD(arg0, s32 *, 0x5C), arg2);
    if (((u32) M2C_FIELD(arg0, u32 *, 0x14C) == 0U) || ((u32) M2C_FIELD(arg0, u32 *, 0x150) == 0U)) {
        M2C_FIELD(arg0, u32 *, 0x150) = 0U;
        M2C_FIELD(arg0, u32 *, 0x14C) = 0U;
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x154) = (f32) lbl_80351938;
    M2C_FIELD(arg0, f32 *, 0x158) = farg0;
}

void fn_80074BC4(void *arg0, void *arg1, void *arg2, f32 farg0) {
    M2C_UNK sp8;

    if ((arg0 != NULL) && (arg1 != NULL)) {
        if (arg2 == NULL) {
            return;
        }
        fn_800716AC(&sp8);
        /* draft: did not compile: fn_80072010(&sp8, arg1 + 8, arg2 + 8, farg0); */
        fn_80071C00(&sp8, arg0);
        fn_80074BC4(M2C_FIELD(arg0, void **, 0x10), M2C_FIELD(arg1, void **, 0), M2C_FIELD(arg2, void **, 0), farg0);
        fn_80074BC4(M2C_FIELD(arg0, void **, 8), M2C_FIELD(arg1, void **, 4), M2C_FIELD(arg2, void **, 4), farg0);
    }
}

void fn_80074C78(void *arg0) { } /* draft: stub */

#pragma push
#pragma dont_inline on
void method_seekMotion(void *arg0, f32 farg0) {
    M2C_UNK sp8;
    void *temp_r5;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x138) != 0U) {
        fn_800716DC(&sp8, M2C_FIELD(arg0, s32 *, 0x64));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x14C) != 0U) {
            /* draft: did not compile: fn_8007198C(arg0 + 0xAC, M2C_FIELD(arg0, s32 *, 0x64)); */
            M2C_FIELD(arg0, f32 *, 0x154) = farg0;
            fn_80074C78(arg0);
        } else {
            temp_r5 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x140), void **, 0xC);
            fn_800749C8(arg0, M2C_FIELD(temp_r5, s32 *, 0x14), M2C_FIELD(temp_r5, s32 *, 0x18), 0, 5, farg0);
            /* draft: did not compile: fn_8007198C(arg0 + 0xAC, M2C_FIELD(arg0, s32 *, 0x64)); */
            HSD_JObjAnimAll(M2C_FIELD(arg0, s32 *, 0x64));
        }
        /* draft: did not compile: fn_80071748(arg0 + 0xAC, M2C_FIELD(arg0, s32 *, 0x64)); */
        fn_8007198C(&sp8, M2C_FIELD(arg0, s32 *, 0x64));
        /* draft: did not compile: fn_800750E0(arg0, arg0 + 0xAC); */
        if (M2C_FIELD(arg0, s32 *, 0x60) & 4) {
            /* draft: did not compile: fn_8007518C(arg0, arg0 + 0xAC); */
        }
    }
}
#pragma pop

s32 fn_80074DBC(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0xD8) = (f32) (farg0 * M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x5C), void **, 8), f32 *, 0x14));
    return 1;
}

s32 fn_80074DD8(void *arg0, s32 arg1) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x5C), void **, 8);
    /* draft: did not compile: PSVECScale(arg1, arg0 + 0xA0, temp_r5, M2C_FIELD(temp_r5, f32 *, 0x14)); */
    /* draft: did not compile: fn_800752E8(arg0, arg0 + 0xAC); */
    return 1;
}

s32 fn_80074E28(void *arg0) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x5C), void **, 8);
    /* draft: did not compile: PSVECScale(arg0 + 0xA0, temp_r5, lbl_8035193C / M2C_FIELD(temp_r5, f32 *, 0x14)); */
    return 1;
}

s32 fn_80074E64(void *arg0, void *arg1) {
    s32 temp_cr0_eq;
    s32 temp_r4;
    u8 var_r3;
    void *temp_r31;

    temp_r31 = M2C_FIELD(arg0, void **, 0x64);
    if (temp_r31 == NULL) {
        __assert(&lbl_8034EAA8, 0x3A9, &lbl_8034EAB0);
    }
    if (arg1 == NULL) {
        __assert(&lbl_8034EAA8, 0x3AA, &lbl_80223BE4);
    }
    M2C_FIELD(temp_r31, f32 *, 0x38) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(temp_r31, f32 *, 0x3C) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(temp_r31, f32 *, 0x40) = (f32) M2C_FIELD(arg1, f32 *, 8);
    if (!(M2C_FIELD(temp_r31, s32 *, 0x14) & 0x02000000)) {
        temp_cr0_eq = temp_r31 == NULL;
        if (temp_cr0_eq == 0) {
            if (temp_cr0_eq != 0) {
                __assert(&lbl_8034EAA8, 0x25D, &lbl_8034EAB0);
            }
            temp_r4 = M2C_FIELD(temp_r31, s32 *, 0x14);
            var_r3 = 0;
            if (!(temp_r4 & 0x800000) && (temp_r4 & 0x40)) {
                var_r3 = 1;
            }
            if (var_r3 == 0) {
                fn_800FD7C8(temp_r31);
            }
        }
    }
    /* draft: did not compile: fn_800750E0(arg0, arg0 + 0xAC); */
    return 1;
}

s32 fn_80074F54(void *arg0, void *arg1) {
    void *temp_r31;

    temp_r31 = M2C_FIELD(arg0, void **, 0x64);
    if (temp_r31 == NULL) {
        __assert(&lbl_8034EAA8, 0x3E4, &lbl_8034EAB0);
    }
    if (arg1 == NULL) {
        __assert(&lbl_8034EAA8, 0x3E5, &lbl_80223BE4);
    }
    M2C_FIELD(arg1, f32 *, 0) = (f32) M2C_FIELD(temp_r31, f32 *, 0x38);
    M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(temp_r31, f32 *, 0x3C);
    M2C_FIELD(arg1, f32 *, 8) = (f32) M2C_FIELD(temp_r31, f32 *, 0x40);
    return 1;
}

s32 fn_80074FD8(void *arg0, void *arg1) {
    void *temp_r5;
    void *temp_r5_2;

    temp_r5 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x5C), void **, 0x10);
    M2C_FIELD(arg1, f32 *, 0) = (f32) M2C_FIELD(temp_r5, f32 *, 0x2C);
    M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(temp_r5, f32 *, 0x30);
    M2C_FIELD(arg1, f32 *, 8) = (f32) M2C_FIELD(temp_r5, f32 *, 0x34);
    temp_r5_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x5C), void **, 8);
    PSVECScale(arg1, temp_r5_2, arg0, M2C_FIELD(temp_r5_2, f32 *, 0x14));
    return 1;
}

void method_setRotateRel(void *arg0, void *arg1) {
    s32 sp1C;
    u32 sp18;
    s32 sp2C;
    s32 sp28;
    M2C_UNK sp60;
    f32 sp14;
    M2C_UNK sp30;
    f32 sp24;
    f32 sp10;
    f32 spC;
    f32 sp8;

    fn_800754E4((void *)(&sp24), (void *)(0));
    fn_80070D60(&sp60, M2C_FIELD(arg1, f32 *, 0), M2C_FIELD(arg1, f32 *, 4), M2C_FIELD(arg1, f32 *, 8));
    fn_80070D60(&sp30, sp24, sp28, sp2C);
    PSMTXConcat(&sp60, &sp30, &sp30);
    fn_80104500(&sp30, &sp14);
    sp8 = sp14;
    spC = sp18;
    sp10 = sp1C;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), M2C_UNK (**)(void *, f32 *, f32, f32), 0x30)(arg0, &sp8, sp18, sp14);
}

void fn_800750E0(void *arg0, void *arg1) {
    /* draft: did not compile: fn_800717C8(arg0 + 0xDC, M2C_FIELD(arg0, s32 *, 0x64)); */
    M2C_FIELD(arg0, s32 *, 0x114) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x108) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x10C) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x110) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x118) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x120) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x128) = (s32) M2C_FIELD(arg1, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x12C) = (s32) M2C_FIELD(arg1, s32 *, 0x24);
    M2C_FIELD(arg0, s32 *, 0x130) = (s32) M2C_FIELD(arg1, s32 *, 0x28);
    M2C_FIELD(arg0, f32 *, 0x134) = (f32) M2C_FIELD(arg0, f32 *, 0xD8);
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) & 0xFFFFFFFD);
    M2C_FIELD(arg0, s32 *, 0x124) = (s32) M2C_FIELD(arg1, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x11C) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
}

void fn_8007518C(void *arg0, void *arg1) {
    M2C_UNK spF4;
    M2C_UNK spC4;
    M2C_UNK sp94;
    M2C_UNK sp64;
    M2C_UNK sp34;
    M2C_UNK sp8;
    M2C_UNK *temp_r31;
    f32 temp_f3;
    f32 temp_f3_2;
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x60);
    if (!(temp_r3 & 2)) {
        if (!(temp_r3 & 4)) {
            /* draft: did not compile: fn_80071E60(arg0 + 0xDC, &spF4); */
            fn_80070EA8(&spC4, M2C_FIELD(arg0, f32 *, 0x114), M2C_FIELD(arg0, f32 *, 0x118), M2C_FIELD(arg0, f32 *, 0x11C));
            /* draft: did not compile: temp_r31 = arg0 + 0x70; */
            temp_f3 = -M2C_FIELD(arg0, f32 *, 0x134);
            PSMTXTrans(temp_r31, temp_f3 * M2C_FIELD(arg0, f32 *, 0x124), temp_f3 * M2C_FIELD(arg0, f32 *, 0x128), temp_f3 * M2C_FIELD(arg0, f32 *, 0x12C));
            PSMTXConcat(&spC4, temp_r31, temp_r31);
            PSMTXConcat(&spF4, temp_r31, temp_r31);
        } else {
            /* draft: did not compile: fn_80071E60(arg0 + 0xDC, arg0 + 0x70); */
        }
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) | 2);
    }
    temp_f3_2 = M2C_FIELD(arg0, f32 *, 0xD8);
    PSMTXTrans(&sp94, temp_f3_2 * M2C_FIELD(arg1, f32 *, 0x1C), temp_f3_2 * M2C_FIELD(arg1, f32 *, 0x20), temp_f3_2 * M2C_FIELD(arg1, f32 *, 0x24));
    fn_80070D60(&sp64, M2C_FIELD(arg1, f32 *, 0xC), M2C_FIELD(arg1, f32 *, 0x10), M2C_FIELD(arg1, f32 *, 0x14));
    PSMTXConcat(&sp94, &sp64, &sp34);
    /* draft: did not compile: PSMTXConcat(arg0 + 0x70, &sp34, &sp34); */
    fn_800716AC(&sp8);
    fn_80071928(&sp8, &sp34);
    fn_80071A64(&sp8, M2C_FIELD(arg0, s32 *, 0x64));
    fn_800752E8(arg0, arg1);
}

void fn_800752E8(void *arg0, void *arg1) {
    f32 sp10;
    f32 spC;
    f32 sp8;
    s32 temp_cr0_eq;
    s32 temp_r4;
    u8 var_r3;
    void *temp_r31;

    temp_r31 = M2C_FIELD(arg0, void **, 0x64);
    sp10 = M2C_FIELD(arg0, f32 *, 0xA8) * M2C_FIELD(arg1, f32 *, 8);
    spC = M2C_FIELD(arg0, f32 *, 0xA4) * M2C_FIELD(arg1, f32 *, 4);
    sp8 = M2C_FIELD(arg0, f32 *, 0xA0) * M2C_FIELD(arg1, f32 *, 0);
    if (temp_r31 == NULL) {
        __assert(&lbl_8034EAA8, 0x316, &lbl_8034EAB0);
    }
    if (&sp8 == NULL) {
        __assert(&lbl_8034EAA8, 0x317, &lbl_8034EAB8);
    }
    M2C_FIELD(temp_r31, f32 *, 0x2C) = sp8;
    M2C_FIELD(temp_r31, f32 *, 0x30) = spC;
    M2C_FIELD(temp_r31, f32 *, 0x34) = sp10;
    if (!(M2C_FIELD(temp_r31, s32 *, 0x14) & 0x02000000)) {
        temp_cr0_eq = temp_r31 == NULL;
        if (temp_cr0_eq == 0) {
            if (temp_cr0_eq != 0) {
                __assert(&lbl_8034EAA8, 0x25D, &lbl_8034EAB0);
            }
            temp_r4 = M2C_FIELD(temp_r31, s32 *, 0x14);
            var_r3 = 0;
            if (!(temp_r4 & 0x800000) && (temp_r4 & 0x40)) {
                var_r3 = 1;
            }
            if (var_r3 == 0) {
                fn_800FD7C8(temp_r31);
            }
        }
    }
}

s32 fn_800753DC(void *arg0, void *arg1) {
    f32 sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;
    s32 temp_cr0_eq;
    s32 temp_r4;
    u8 var_r3;
    void *temp_r31;

    temp_r31 = M2C_FIELD(arg0, void **, 0x64);
    spC = M2C_FIELD(arg1, f32 *, 4);
    sp8 = M2C_FIELD(arg1, f32 *, 0);
    sp10 = M2C_FIELD(arg1, f32 *, 8);
    sp14 = lbl_80351938;
    if (temp_r31 == NULL) {
        __assert(&lbl_8034EAA8, 0x290, &lbl_8034EAB0);
    }
    if (&sp8 == NULL) {
        __assert(&lbl_8034EAA8, 0x291, &lbl_8034EAC0);
    }
    M2C_FIELD(temp_r31, f32 *, 0x1C) = sp8;
    M2C_FIELD(temp_r31, f32 *, 0x20) = spC;
    M2C_FIELD(temp_r31, f32 *, 0x24) = sp10;
    M2C_FIELD(temp_r31, f32 *, 0x28) = sp14;
    if (!(M2C_FIELD(temp_r31, s32 *, 0x14) & 0x02000000)) {
        temp_cr0_eq = temp_r31 == NULL;
        if (temp_cr0_eq == 0) {
            if (temp_cr0_eq != 0) {
                __assert(&lbl_8034EAA8, 0x25D, &lbl_8034EAB0);
            }
            temp_r4 = M2C_FIELD(temp_r31, s32 *, 0x14);
            var_r3 = 0;
            if (!(temp_r4 & 0x800000) && (temp_r4 & 0x40)) {
                var_r3 = 1;
            }
            if (var_r3 == 0) {
                fn_800FD7C8(temp_r31);
            }
        }
    }
    /* draft: did not compile: fn_800750E0(arg0, arg0 + 0xAC); */
    return 1;
}

s32 fn_800754E4(void *arg0, void *arg1) {
    void *temp_r31;

    temp_r31 = M2C_FIELD(arg0, void **, 0x64);
    if (temp_r31 == NULL) {
        __assert(&lbl_8034EAA8, 0x2DD, &lbl_8034EAB0);
    }
    M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(temp_r31, f32 *, 0x20);
    M2C_FIELD(arg1, f32 *, 8) = (f32) M2C_FIELD(temp_r31, f32 *, 0x24);
    M2C_FIELD(arg1, f32 *, 0) = (f32) M2C_FIELD(temp_r31, f32 *, 0x1C);
    return 1;
}

s32 fn_8007554C(void *arg0, void *arg1) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x5C), void **, 0x10);
    M2C_FIELD(arg1, f32 *, 0) = (f32) M2C_FIELD(temp_r5, f32 *, 0x14);
    M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(temp_r5, f32 *, 0x18);
    M2C_FIELD(arg1, f32 *, 8) = (f32) M2C_FIELD(temp_r5, f32 *, 0x1C);
    return 1;
}

void fn_80075574(void *arg0, u32 arg1, f32 *arg2) {
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    s32 temp_r4;
    u8 var_r3;
    void *temp_r31;
    void *temp_r31_2;

    temp_r31 = M2C_FIELD(arg0, void **, 0x68);
    temp_cr0_eq = temp_r31 == NULL;
    if (temp_cr0_eq == 0) {
        if (temp_cr0_eq != 0) {
            __assert(&lbl_8034EAA8, 0x47C, &lbl_8034EAB0);
        }
        temp_cr0_eq_2 = temp_r31 == NULL;
        if (temp_cr0_eq_2 == 0) {
            if (temp_cr0_eq_2 != 0) {
                __assert(&lbl_8034EAA8, 0x25D, &lbl_8034EAB0);
            }
            temp_r4 = M2C_FIELD(temp_r31, s32 *, 0x14);
            var_r3 = 0;
            if (!(temp_r4 & 0x800000) && (temp_r4 & 0x40)) {
                var_r3 = 1;
            }
            if (var_r3 != 0) {
                HSD_JObjSetupMatrixSub(temp_r31);
            }
        }
        /* draft: did not compile: temp_r31_2 = temp_r31 + 0x44; */
        if (arg1 != 0U) {
            HSD_MtxGetTranslate(temp_r31_2, arg1);
        }
        if (arg2 != NULL) {
            *arg2 = fn_80071054(temp_r31_2);
        }
    } else {
        if (arg1 != 0U) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), M2C_UNK (**)(), 0x3C)();
        }
        if (arg2 != NULL) {
            *arg2 = lbl_80351938;
        }
    }
}

f32 method_getCollSize(void *arg0, s32 arg1, u32 arg2) {
    M2C_UNK sp8;
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    s32 temp_r4;
    u8 var_r3;
    void *temp_r31;
    void *temp_r31_2;

    temp_r31 = M2C_FIELD(arg0, void **, 0x68);
    temp_cr0_eq = temp_r31 == NULL;
    if (temp_cr0_eq == 0) {
        if (temp_cr0_eq != 0) {
            __assert(&lbl_8034EAA8, 0x47C, &lbl_8034EAB0);
        }
        temp_cr0_eq_2 = temp_r31 == NULL;
        if (temp_cr0_eq_2 == 0) {
            if (temp_cr0_eq_2 != 0) {
                __assert(&lbl_8034EAA8, 0x25D, &lbl_8034EAB0);
            }
            temp_r4 = M2C_FIELD(temp_r31, s32 *, 0x14);
            var_r3 = 0;
            if (!(temp_r4 & 0x800000) && (temp_r4 & 0x40)) {
                var_r3 = 1;
            }
            if (var_r3 != 0) {
                HSD_JObjSetupMatrixSub(temp_r31);
            }
        }
        /* draft: did not compile: temp_r31_2 = temp_r31 + 0x44; */
        if (arg2 != 0U) {
            HSD_MtxGetTranslate(temp_r31_2, arg2);
        }
        if (PSMTXInverse(temp_r31_2, &sp8) == 0U) {
            return lbl_80351938;
        }
        return fn_800710E4(arg1, &sp8);
    }
    if (arg2 != 0U) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), M2C_UNK (**)(u32), 0x3C)(arg2);
    }
    return lbl_80351938;
}

void fn_80075778(void *arg0) { } /* draft: stub */

#pragma push
#pragma optimize_for_size on
s32 fn_80075AFC(void *arg0) {
    void *temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x14C) != 0U) {
        M2C_ERROR(/* unknown instruction: cror eq, lt, eq */);
        return ((u32) M2C_ERROR(/* unknown instruction: mfcr $r0 */) >> 0x1DU) & 1;
    }
    temp_r3 = M2C_FIELD(arg0, void **, 0x15C);
    if (temp_r3 == NULL) {
        return 0;
    }
    if (M2C_FIELD(temp_r3, s32 *, 0) & 0x08000000) {

    }
    M2C_ERROR(/* unknown instruction: cror eq, lt, eq */);
    return ((u32) M2C_ERROR(/* unknown instruction: mfcr $r0 */) >> 0x1DU) & 1;
}
#pragma pop
