/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_80019AE8();
M2C_UNK HSD_CObjGetViewingMtxPtr(s32);
f32 fn_8007119C(f32);
M2C_UNK fn_80071234(f32);
f32 HSD_CObjGetFov(s32);
f32 method_getAspect(s32, f32, f32);
extern f32 lbl_803513D0;
extern f32 lbl_803513F8;
extern f32 lbl_803513FC;
M2C_UNK HSD_CObjGetViewportf(s32, M2C_UNK *);
M2C_UNK HSD_CObjSetViewportf(s32, M2C_UNK *);
M2C_UNK HSD_CObjSetViewportfx4(s32);
M2C_UNK HSD_CObjGetScissor(s32, M2C_UNK *);
M2C_UNK HSD_CObjSetScissor(s32, M2C_UNK *);
M2C_UNK HSD_CObjSetScissorx4(s32, u16, u16, u16, u16);
M2C_UNK fn_8001652C();
extern f32 lbl_803513B4;
M2C_UNK fn_800165B0();
M2C_UNK HSD_CObjGetEyePosition(s32, void *);
M2C_UNK fn_800161A8();
M2C_UNK fn_80016468();
f32 fn_80019B9C(void *);
f32 fn_8007154C(f32, f32);
M2C_UNK fn_8007D660(void *, M2C_UNK *, M2C_UNK *, f32);
M2C_UNK PSVECAdd(M2C_UNK *, M2C_UNK *, s32 *);
extern f32 lbl_803513B0;
M2C_UNK fn_80070FF0(s32, s32);
M2C_UNK PSVECNormalize();
u32 fn_800A713C();
M2C_UNK fn_800335C0(void *, void *);
M2C_UNK fn_800794C0(s32, s32);
M2C_UNK fn_800794E8(s32, s32);
M2C_UNK PSVECScale(M2C_UNK *, M2C_UNK *, f32);
M2C_UNK HSD_CObjGetEyePosition_800F2B24(s32, M2C_UNK *);
extern f32 lbl_803513B8;
extern f32 lbl_80351400;
extern f64 lbl_80351408;
extern f32 lbl_80351410;
extern f32 lbl_80351414;
extern f32 lbl_80351418;
extern f64 lbl_80351420;
M2C_UNK fn_80019E84(M2C_UNK *, s32, s32 *, void **, void *);
M2C_UNK fn_80019F34();
M2C_UNK fn_80016178(M2C_UNK *);
M2C_UNK fn_80019FB0();
extern f32 lbl_803513E0;
u8 fn_80070CFC(s32 *, s32, s32);
M2C_UNK PSVECSubtract();
M2C_UNK fn_80070D60(M2C_UNK *, f32, f32, f32);
M2C_UNK PSMTXMultVecSR();
M2C_UNK HSD_JObjSetupMatrixSub(void *);
M2C_UNK HSD_MtxGetTranslate();
M2C_UNK __assert(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_8034E6D8;
extern M2C_UNK lbl_8034E6E0;
M2C_UNK fn_80017D3C(void *, s32, s32, f32);
M2C_UNK fn_80019BF0();

void fn_80016CB8(void *arg0);
void *fn_80016CEC(void *arg0);
void fn_80016DA0(void *arg0, void *arg1);
void method_setViewport(void *arg0);
void fn_80016E04(void *arg0, void *arg1);
void method_setScissor(void *arg0, u16 arg1, u16 arg2, u16 arg3, u16 arg4);
void fn_80016E78(void *arg0);
void method_setInterest(void *arg0);
void fn_80016FAC(void *arg0, void *arg1);
void fn_80016FC8(void *arg0, void *arg1);
void fn_80017034(void *arg0, f32 *arg1, f32 *arg2);
void fn_800173C4(s32 arg0, s32 arg1);
s32 fn_8001741C(void *arg0);
void method_setHoldObject(void *arg0, void *arg1);
void method_releaseHoldObject(void *arg0);
void fn_8001750C(void *arg0);
s32 fn_80017690(void);
void method_releaseThrowingObject(void *arg0);
s32 method_getThrowingObject(void *arg0);
s32 method_getApproachingObject(void *arg0);
s32 fn_800176F4(void *arg0);
void method_clearRecedeStack(s32 arg0);
void method_popRecedeStack(void *arg0);
void method_pushRecedeStack(void *arg0, s32 arg1, s32 arg2);
void fn_80017814(void *arg0, s32 arg1);
void method_setCameraGoal(void *arg0, s32 *arg1, s32 arg2);
void method_setCameraGoalRel(void *arg0);
void method_setCameraGoalDistance(void *arg0, f32 farg0);
s32 fn_8001798C(void *arg0, void *arg1, void *arg2, u32 *arg3, M2C_UNK arg_sp0);
s32 fn_80017CA8(void);
s32 fn_80017CB0(void);
void fn_80017CB8(void *arg0, s32 arg1, s32 arg2, f32 farg0);

void fn_80016CB8(void *arg0) {
    fn_80019AE8();
    HSD_CObjGetViewingMtxPtr(M2C_FIELD(arg0, s32 *, 0x60));
}

void *fn_80016CEC(void *arg0) {
    f32 temp_f31_2;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f30;
    f32 temp_f30_2;
    f32 temp_f31;
    f32 temp_f0;
    f32 temp_f3;

    fn_80019AE8();
    temp_f3 = HSD_CObjGetFov(M2C_FIELD(arg0, s32 *, 0x60));
    temp_f3 *= lbl_803513F8;
    temp_f2 = temp_f3 * lbl_803513D0;
    temp_f30 = temp_f2 / lbl_803513FC;
    temp_f31 = method_getAspect(M2C_FIELD(arg0, s32 *, 0x60), temp_f2, temp_f3);
    fn_80071234(temp_f30);
    temp_f0 = M2C_ERROR(/* unknown instruction: ps_mr $f0, $f1 */);
    temp_f30_2 = M2C_ERROR(/* unknown instruction: ps_merge11 $f30, $f0, $f0 */);
    M2C_FIELD(arg0, f32 *, 0x70) = temp_f0;
    temp_f31_2 = temp_f0 * temp_f31;
    M2C_FIELD(arg0, f32 *, 0x74) = temp_f30_2;
    temp_f1 = fn_8007119C((temp_f31_2 * temp_f31_2) + (temp_f30_2 * temp_f30_2));
    M2C_FIELD(arg0, f32 *, 0x68) = (f32) (temp_f31_2 * temp_f1);
    M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (temp_f30_2 * temp_f1);
    return;
}

void fn_80016DA0(void *arg0, void *arg1) {
    M2C_UNK sp8;

    HSD_CObjGetViewportf(M2C_FIELD(arg1, s32 *, 0x60), &sp8);
    HSD_CObjSetViewportf(M2C_FIELD(arg0, s32 *, 0x60), &sp8);
}

void method_setViewport(void *arg0) {
    HSD_CObjSetViewportfx4(M2C_FIELD(arg0, s32 *, 0x60));
}

void fn_80016E04(void *arg0, void *arg1) {
    M2C_UNK sp8;

    HSD_CObjGetScissor(M2C_FIELD(arg1, s32 *, 0x60), &sp8);
    HSD_CObjSetScissor(M2C_FIELD(arg0, s32 *, 0x60), &sp8);
}

void method_setScissor(void *arg0, u16 arg1, u16 arg2, u16 arg3, u16 arg4) {
    HSD_CObjSetScissorx4(M2C_FIELD(arg0, s32 *, 0x60), (s32)arg1, (s32)arg2, (s32)arg3, (u16)arg4);
}

void fn_80016E78(void *arg0) {
    /* draft: did not compile: fn_8001652C(arg0 + 0x10C, lbl_803513B4); */
    M2C_FIELD(arg0, s32 *, 0x168) = (s32) M2C_FIELD(arg0, s32 *, 0x114);
    M2C_FIELD(arg0, s32 *, 0x160) = (s32) M2C_FIELD(arg0, s32 *, 0x10C);
    M2C_FIELD(arg0, s32 *, 0x164) = (s32) M2C_FIELD(arg0, s32 *, 0x110);
    M2C_FIELD(arg0, s8 *, 0x108) = 1;
    M2C_FIELD(arg0, s32 *, 0x16C) = (s32) M2C_FIELD(arg0, s32 *, 0x118);
    M2C_FIELD(arg0, s32 *, 0x170) = (s32) M2C_FIELD(arg0, s32 *, 0x11C);
    M2C_FIELD(arg0, s32 *, 0x174) = (s32) M2C_FIELD(arg0, s32 *, 0x120);
    M2C_FIELD(arg0, u8 *, 0x178) = (u8) M2C_FIELD(arg0, u8 *, 0x124);
    M2C_FIELD(arg0, s32 *, 0x180) = (s32) M2C_FIELD(arg0, s32 *, 0x12C);
    M2C_FIELD(arg0, s32 *, 0x18C) = 0;
    M2C_FIELD(arg0, s32 *, 0x184) = (s32) M2C_FIELD(arg0, s32 *, 0x130);
    M2C_FIELD(arg0, f32 *, 0x188) = (f32) M2C_FIELD(arg0, f32 *, 0x134);
    M2C_FIELD(arg0, s32 *, 0x17C) = (s32) M2C_FIELD(arg0, s32 *, 0x128);
}

void method_setInterest(void *arg0) {
    /* draft: did not compile: fn_800165B0(arg0 + 0x10C); */
    M2C_FIELD(arg0, s32 *, 0x16C) = (s32) M2C_FIELD(arg0, s32 *, 0x118);
    M2C_FIELD(arg0, s8 *, 0x108) = 1;
    M2C_FIELD(arg0, s32 *, 0x160) = (s32) M2C_FIELD(arg0, s32 *, 0x10C);
    M2C_FIELD(arg0, s32 *, 0x164) = (s32) M2C_FIELD(arg0, s32 *, 0x110);
    M2C_FIELD(arg0, s32 *, 0x168) = (s32) M2C_FIELD(arg0, s32 *, 0x114);
    M2C_FIELD(arg0, s32 *, 0x170) = (s32) M2C_FIELD(arg0, s32 *, 0x11C);
    M2C_FIELD(arg0, s32 *, 0x174) = (s32) M2C_FIELD(arg0, s32 *, 0x120);
    M2C_FIELD(arg0, u8 *, 0x178) = (u8) M2C_FIELD(arg0, u8 *, 0x124);
    M2C_FIELD(arg0, s32 *, 0x180) = (s32) M2C_FIELD(arg0, s32 *, 0x12C);
    M2C_FIELD(arg0, s32 *, 0x18C) = 0;
    M2C_FIELD(arg0, s32 *, 0x184) = (s32) M2C_FIELD(arg0, s32 *, 0x130);
    M2C_FIELD(arg0, f32 *, 0x188) = (f32) M2C_FIELD(arg0, f32 *, 0x134);
    M2C_FIELD(arg0, s32 *, 0x17C) = (s32) M2C_FIELD(arg0, s32 *, 0x128);
}

void fn_80016FAC(void *arg0, void *arg1) {
    M2C_FIELD(arg1, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0x118);
    M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x11C);
    M2C_FIELD(arg1, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x120);
}

void fn_80016FC8(void *arg0, void *arg1) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x124) != 0) {
        M2C_FIELD(arg1, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0x128);
        M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x12C);
        M2C_FIELD(arg1, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x130);
        return;
    }
    fn_80019AE8();
    HSD_CObjGetEyePosition(M2C_FIELD(arg0, s32 *, 0x60), arg1);
}

void fn_80017034(void *arg0, f32 *arg1, f32 *arg2) { } /* draft: stub */

void fn_800173C4(s32 arg0, s32 arg1) {
    fn_80019AE8();
    /* draft: did not compile: fn_80016CB8(arg0); */
    fn_80070FF0(arg0 + 0x1D0, arg1);
    PSVECNormalize(arg1, arg1);
}

s32 fn_8001741C(void *arg0) {
    if (fn_800A713C(M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, s32 *, 0x1E0)) == 0U) {
        M2C_FIELD(arg0, s32 *, 0x1E0) = 0;
    }
    return M2C_FIELD(arg0, s32 *, 0x1E0);
}

void method_setHoldObject(void *arg0, void *arg1) {
    if (arg1 != NULL) {
        M2C_FIELD(arg1, s32 *, 8) = (s32) (M2C_FIELD(arg1, s32 *, 8) | 0x80000);
        M2C_FIELD(arg1, s32 *, 8) = (s32) (M2C_FIELD(arg1, s32 *, 8) | 0x200000);
        M2C_FIELD(arg0, s32 *, 0x1E0) = (s32) M2C_FIELD(arg1, s32 *, 0);
        return;
    }
    method_releaseHoldObject((void *)(0));
}

void method_releaseHoldObject(void *arg0) { } /* draft: stub */

void fn_8001750C(void *arg0) { } /* draft: stub */

s32 fn_80017690(void) {
    return 0;
}

void method_releaseThrowingObject(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0;
}

s32 method_getThrowingObject(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1E8);
}

s32 method_getApproachingObject(void *arg0) {
    if (fn_800A713C(M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, s32 *, 0x1E4)) == 0U) {
        M2C_FIELD(arg0, s32 *, 0x1E4) = 0;
    }
    return M2C_FIELD(arg0, s32 *, 0x1E4);
}

s32 fn_800176F4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x154);
}

void method_clearRecedeStack(s32 arg0) {
    void *sp10;
    s32 spC;
    M2C_UNK sp8;
    void *temp_r7;

    /* draft: did not compile: temp_r7 = arg0 + 0x158; */
    sp10 = temp_r7;
    spC = M2C_FIELD(temp_r7, s32 *, 4);
    fn_80019E84(&sp8, arg0 + 0x154, &spC, &sp10, temp_r7);
}

void method_popRecedeStack(void *arg0) {
    s32 spC;
    M2C_UNK sp8;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x154) != 0U) {
        spC = M2C_FIELD(arg0, s32 *, 0x15C);
        /* draft: did not compile: fn_80019F34(&sp8, arg0 + 0x154, &spC); */
    }
}

void method_pushRecedeStack(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK sp14;
    s32 sp10;
    s32 spC;
    M2C_UNK sp8;

    fn_80016178(&sp14);
    sp10 = M2C_FIELD(arg0, s32 *, 0x190);
    fn_80016468(&sp14, arg1, arg2, 1, lbl_803513E0);
    spC = M2C_FIELD(arg0, s32 *, 0x15C);
    /* draft: did not compile: fn_80019FB0(&sp8, arg0 + 0x154, &spC, &sp10); */
}

void fn_80017814(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x100) = arg1;
}

void method_setCameraGoal(void *arg0, s32 *arg1, s32 arg2) { } /* draft: stub */

void method_setCameraGoalRel(void *arg0) {
    /* draft: did not compile: fn_80016468(arg0 + 0xD4, 1, lbl_803513E0); */
    M2C_FIELD(arg0, s32 *, 0xD0) = 2;
}

void method_setCameraGoalDistance(void *arg0, f32 farg0) {
    if (!(farg0 < lbl_803513B0)) {
        M2C_FIELD(arg0, s32 *, 0xD0) = 3;
        M2C_FIELD(arg0, f32 *, 0x104) = farg0;
    }
}

s32 fn_8001798C(void *arg0, void *arg1, void *arg2, u32 *arg3, M2C_UNK arg_sp0) {
    s32 sp1C;
    s32 sp18;
    s32 sp10;
    s32 spC;
    s32 sp34;
    s32 sp30;
    s32 sp28;
    s32 sp24;
    s32 sp88;
    s32 sp84;
    M2C_UNK sp98;
    s32 sp8C;
    f32 sp80;
    M2C_UNK sp74;
    M2C_UNK sp68;
    s32 sp64;
    s32 sp60;
    s32 sp5C;
    s32 sp58;
    s32 sp54;
    s32 sp50;
    s32 sp4C;
    s32 sp48;
    s32 sp44;
    s32 sp40;
    s32 sp3C;
    s32 sp38;
    s32 sp2C;
    s32 sp20;
    s32 sp14;
    s32 sp8;
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    s32 temp_r0;
    s32 temp_r4;
    u8 var_r3;
    void *temp_r28;
    void *temp_r3;

    if (arg3 != NULL) {
        *arg3 = 0U;
    }
    temp_r0 = M2C_FIELD(arg1, s32 *, 0);
    if (temp_r0 != 1) {
        if ((temp_r0 >= 1) && (temp_r0 < 4)) {
            if ((u32) M2C_FIELD(arg1, u32 *, 0x30) == 0U) {
                M2C_FIELD(arg1, s32 *, 0) = 0;
                return 0;
            }
            /* draft: did not compile: temp_r3 = fn_800A713C(M2C_FIELD(arg0, s32 *, 0x24)); */
            if (temp_r3 == NULL) {
                M2C_FIELD(arg1, s32 *, 0) = 0;
                M2C_FIELD(arg1, u32 *, 0x30) = 0U;
                return 0;
            }
            if (arg3 != NULL) {
                *arg3 = M2C_FIELD(arg1, u32 *, 0x30);
            }
            if ((M2C_FIELD(temp_r3, s32 *, 8) & 0x400) && (temp_r28 = M2C_FIELD(temp_r3, void **, 0x68), temp_cr0_eq = temp_r28 == NULL, (temp_cr0_eq == 0))) {
                if (temp_cr0_eq != 0) {
                    __assert(&lbl_8034E6D8, 0x47C, &lbl_8034E6E0);
                }
                temp_cr0_eq_2 = temp_r28 == NULL;
                if (temp_cr0_eq_2 == 0) {
                    if (temp_cr0_eq_2 != 0) {
                        __assert(&lbl_8034E6D8, 0x25D, &lbl_8034E6E0);
                    }
                    temp_r4 = M2C_FIELD(temp_r28, s32 *, 0x14);
                    var_r3 = 0;
                    if (!(temp_r4 & 0x800000) && (temp_r4 & 0x40)) {
                        var_r3 = 1;
                    }
                    if (var_r3 != 0) {
                        HSD_JObjSetupMatrixSub(temp_r28);
                    }
                }
                /* draft: did not compile: HSD_MtxGetTranslate(temp_r28 + 0x44, &sp8C); */
            } else {
                M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(void *, s32 *), 0x3C)(temp_r3, &sp8C);
            }
            if ((s32) M2C_FIELD(arg1, s32 *, 0) == 2) {
                M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(void *, f32 *), 0x34)(temp_r3, &sp80);
                fn_80070D60(&sp98, sp80, sp84, sp88);
                /* draft: did not compile: PSMTXMultVecSR(&sp98, arg1 + 0x10, &sp74); */
                /* draft: did not compile: PSMTXMultVecSR(&sp98, arg1 + 0x20, &sp68); */
                PSVECAdd(&sp68, &sp8C, &sp20);
                sp44 = sp20;
                sp48 = sp24;
                sp4C = sp28;
                PSVECAdd((long *)(&sp74), (long *)(&sp8C), (long *)(&sp2C));
                sp50 = sp2C;
                sp54 = sp30;
                sp58 = sp34;
                fn_80016468(arg2, &sp50, &sp44, 1, sp30, lbl_803513E0);
                goto block_33;
            }
            /* draft: did not compile: PSVECSubtract(&sp8C, arg0 + 0x118, &sp8); */
            sp5C = sp8;
            sp60 = spC;
            sp64 = sp10;
            if (fn_80070CFC(&sp5C, spC, sp8) != 0) {
                return 0;
            }
            PSVECNormalize(&sp5C, &sp5C);
            PSVECScale(&sp5C, &sp5C, M2C_FIELD(arg1, f32 *, 0x34));
            /* draft: did not compile: PSVECSubtract(arg0 + 0x118, &sp5C, &sp14); */
            sp38 = sp14;
            sp3C = sp18;
            sp40 = sp1C;
            fn_80016468(arg2, &sp38, &sp8C, 1, sp18, lbl_803513E0);
block_33:
            return 1;
        }
        return 0;
    }
    M2C_FIELD(arg2, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg2, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg2, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    M2C_FIELD(arg2, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    M2C_FIELD(arg2, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
    M2C_FIELD(arg2, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
    M2C_FIELD(arg2, u8 *, 0x18) = (u8) M2C_FIELD(arg1, u8 *, 0x1C);
    M2C_FIELD(arg2, s32 *, 0x1C) = (s32) M2C_FIELD(arg1, s32 *, 0x20);
    M2C_FIELD(arg2, s32 *, 0x20) = (s32) M2C_FIELD(arg1, s32 *, 0x24);
    M2C_FIELD(arg2, s32 *, 0x24) = (s32) M2C_FIELD(arg1, s32 *, 0x28);
    M2C_FIELD(arg2, f32 *, 0x28) = (f32) M2C_FIELD(arg1, f32 *, 0x2C);
    return 1;
}

s32 fn_80017CA8(void) {
    return 0;
}

s32 fn_80017CB0(void) {
    return 0;
}

void fn_80017CB8(void *arg0, s32 arg1, s32 arg2, f32 farg0) {
    s32 sp10;
    s32 spC;
    M2C_UNK sp8;

    /* draft: did not compile: sp10 = arg0 + 0xC4; */
    spC = M2C_FIELD(arg0, s32 *, 0xC8);
    /* draft: did not compile: fn_80019BF0(&sp8, arg0 + 0xC0, &spC, &sp10); */
    fn_80017D3C(arg0, arg1, arg2, (u16)farg0);
}
