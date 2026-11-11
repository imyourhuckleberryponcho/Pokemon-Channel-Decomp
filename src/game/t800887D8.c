/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_80016FC8(M2C_UNK *);
M2C_UNK fn_80080698();
M2C_UNK fn_800896C0();
s32 fn_8001741C();
M2C_UNK fn_8008065C();
M2C_UNK fn_80079B1C(s32, s32, M2C_UNK);
M2C_UNK fn_800A7008(void *, void *);
void *fn_800A713C(s32, s32);
M2C_UNK method_releaseHoldObject();
M2C_UNK method_setHoldObject(s32);
s32 fn_80089738();
M2C_UNK method_releaseThrowingObject();
s32 method_getThrowingObject();
s32 fn_800176F4();
s32 method_getApproachingObject();
M2C_UNK method_clearRecedeStack();
M2C_UNK method_popRecedeStack();
M2C_UNK method_pushRecedeStack(f32 *, f32 *);
f32 fn_80080764(s32, f32, f32);
M2C_UNK method_setMaxSpeed(f32);
M2C_UNK method_setMaxElevSpeed(f32);
M2C_UNK method_setMaxDirSpeed(f32);
M2C_UNK method_setElevLimit(f32, f32);
M2C_UNK method_setDirLimit(f32, f32);
extern f32 lbl_80351A34;
M2C_UNK fn_80019808();
M2C_UNK fn_8001990C();

s32 scr_method_getInterestZ(s32 arg0);
s32 scr_method_isHoldingObject(s32 arg0);
s32 scr_method_removeHoldingObject(void *arg0);
s32 scr_method_releaseHoldObject(s32 arg0);
s32 scr_method_getHoldObject(s32 arg0);
s32 scr_method_setHoldObject(s32 arg0);
s32 scr_method_releaseThrowingObject(s32 arg0);
s32 scr_method_getThrowingObject(s32 arg0);
s32 scr_method_isApproaching(s32 arg0);
s32 scr_method_getApproachingObject(s32 arg0);
s32 scr_method_getRecedeStackSize(s32 arg0);
s32 scr_method_clearRecedeStack(s32 arg0);
s32 scr_method_popRecedeStack(s32 arg0);
s32 scr_method_pushRecedeStack(s32 arg0);
s32 scr_method_setMaxSpeed(s32 arg0);
s32 scr_method_setMaxElevSpeed(s32 arg0);
s32 scr_method_setMaxDirSpeed(s32 arg0);
s32 scr_method_setElevLimit(s32 arg0);
s32 scr_method_setDirLimit(s32 arg0);
s32 scr_method_getMaxSpeed(s32 arg0);
s32 scr_method_getMaxElevSpeed(s32 arg0);
s32 scr_method_getMaxDirSpeed(s32 arg0);
s32 scr_method_getMaxElevLimit(s32 arg0);
s32 scr_method_getMinElevLimit(s32 arg0);
s32 scr_method_getMaxDirLimit(s32 arg0);
s32 scr_method_getMinDirLimit(s32 arg0);
s32 scr_method_worldToTelopX(s32 arg0);
s32 scr_method_worldToTelopY(s32 arg0);
s32 scr_method_worldToTelopZ(s32 arg0);
s32 scr_method_telopToWorldX(s32 arg0);
s32 scr_method_telopToWorldY(s32 arg0);
s32 scr_method_telopToWorldZ(s32 arg0);

s32 scr_method_getInterestZ(s32 arg0) {
    s32 sp10;
    M2C_UNK sp8;

    fn_800896C0();
    fn_80016FC8(&sp8);
    fn_80080698(arg0, sp10);
    return 0;
}

s32 scr_method_isHoldingObject(s32 arg0) {
    fn_800896C0();
    fn_8008065C(arg0, fn_8001741C());
    return 0;
}

s32 scr_method_removeHoldingObject(void *arg0) {
    void *temp_r3;

    fn_800896C0();
    temp_r3 = fn_800A713C(M2C_FIELD(arg0, s32 *, 0x2E0), fn_8001741C());
    if (temp_r3 != NULL) {
        fn_80079B1C(M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x24), s32 *, 0x38), M2C_FIELD(temp_r3, s32 *, 0), 1);
        fn_800A7008(M2C_FIELD(temp_r3, void **, 0x24), temp_r3);
    }
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_releaseHoldObject(s32 arg0) {
    fn_800896C0();
    method_releaseHoldObject();
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_getHoldObject(s32 arg0) {
    fn_800896C0();
    fn_8008065C(arg0, fn_8001741C());
    return 0;
}

s32 scr_method_setHoldObject(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_80089738();
    fn_800896C0(arg0);
    method_setHoldObject(temp_r31);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_releaseThrowingObject(s32 arg0) {
    fn_800896C0();
    method_releaseThrowingObject();
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_getThrowingObject(s32 arg0) {
    fn_800896C0();
    fn_8008065C(arg0, method_getThrowingObject());
    return 0;
}

s32 scr_method_isApproaching(s32 arg0) {
    fn_800896C0();
    fn_8008065C(arg0, fn_800176F4() != 0);
    return 0;
}

s32 scr_method_getApproachingObject(s32 arg0) {
    fn_800896C0();
    fn_8008065C(arg0, method_getApproachingObject());
    return 0;
}

s32 scr_method_getRecedeStackSize(s32 arg0) {
    fn_800896C0();
    fn_8008065C(arg0, fn_800176F4());
    return 0;
}

s32 scr_method_clearRecedeStack(s32 arg0) {
    fn_800896C0();
    method_clearRecedeStack();
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_popRecedeStack(s32 arg0) {
    fn_800896C0();
    method_popRecedeStack();
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_pushRecedeStack(s32 arg0) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f30;
    f32 temp_f30_2;
    f32 temp_f31;
    f32 temp_f31_2;

    temp_f31 = fn_80080764((long)(0), (float)(0), (float)(0));
    temp_f30 = fn_80080764((long)(arg0), (float)(0), (float)(0));
    sp14 = fn_80080764((long)(arg0), (float)(0), (float)(0));
    sp18 = temp_f30;
    sp1C = temp_f31;
    sp2C = sp14;
    sp30 = sp18;
    sp34 = sp1C;
    temp_f30_2 = fn_80080764(arg0, sp18, sp14);
    temp_f31_2 = fn_80080764((long)(arg0), (float)(0), (float)(0));
    sp8 = fn_80080764((long)(arg0), (float)(0), (float)(0));
    spC = temp_f31_2;
    sp10 = temp_f30_2;
    sp20 = sp8;
    sp24 = spC;
    sp28 = sp10;
    fn_800896C0(arg0, spC, (s32)sp8);
    method_pushRecedeStack(&sp20, &sp2C);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_setMaxSpeed(s32 arg0) {
    f32 temp_f31;

    temp_f31 = fn_80080764((long)(0), (float)(0), (float)(0));
    fn_800896C0(arg0);
    method_setMaxSpeed(temp_f31);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_setMaxElevSpeed(s32 arg0) {
    f32 temp_f31;

    temp_f31 = fn_80080764((long)(0), (float)(0), (float)(0));
    fn_800896C0(arg0);
    method_setMaxElevSpeed(temp_f31);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_setMaxDirSpeed(s32 arg0) {
    f32 temp_f31;

    temp_f31 = fn_80080764((long)(0), (float)(0), (float)(0));
    fn_800896C0(arg0);
    method_setMaxDirSpeed(temp_f31);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_setElevLimit(s32 arg0) {
    f32 temp_f30;
    f32 temp_f31;

    temp_f31 = fn_80080764((long)(0), (float)(0), (float)(0));
    temp_f30 = fn_80080764((long)(arg0), (float)(0), (float)(0));
    fn_800896C0(arg0);
    method_setElevLimit(temp_f30, temp_f31);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_setDirLimit(s32 arg0) {
    f32 temp_f30;
    f32 temp_f31;

    temp_f31 = fn_80080764((long)(0), (float)(0), (float)(0));
    temp_f30 = fn_80080764((long)(arg0), (float)(0), (float)(0));
    fn_800896C0(arg0);
    method_setDirLimit(temp_f30, temp_f31);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_getMaxSpeed(s32 arg0) {
    fn_80080698(arg0, lbl_80351A34 * M2C_FIELD(fn_800896C0(), f32 *, 0x138));
    return 0;
}

s32 scr_method_getMaxElevSpeed(s32 arg0) {
    fn_80080698(arg0, lbl_80351A34 * M2C_FIELD(fn_800896C0(), f32 *, 0x13C));
    return 0;
}

s32 scr_method_getMaxDirSpeed(s32 arg0) {
    fn_80080698(arg0, lbl_80351A34 * M2C_FIELD(fn_800896C0(), f32 *, 0x140));
    return 0;
}

s32 scr_method_getMaxElevLimit(s32 arg0) {
    void *temp_r3;

    /* draft: did not compile: temp_r3 = fn_800896C0(); */
    fn_80080698(arg0, temp_r3, -M2C_FIELD(temp_r3, f32 *, 0x148));
    return 0;
}

s32 scr_method_getMinElevLimit(s32 arg0) {
    void *temp_r3;

    /* draft: did not compile: temp_r3 = fn_800896C0(); */
    fn_80080698(arg0, temp_r3, -M2C_FIELD(temp_r3, f32 *, 0x144));
    return 0;
}

s32 scr_method_getMaxDirLimit(s32 arg0) {
    void *temp_r3;

    /* draft: did not compile: temp_r3 = fn_800896C0(); */
    fn_80080698(arg0, temp_r3, M2C_FIELD(temp_r3, f32 *, 0x14C));
    return 0;
}

s32 scr_method_getMinDirLimit(s32 arg0) {
    void *temp_r3;

    /* draft: did not compile: temp_r3 = fn_800896C0(); */
    fn_80080698(arg0, temp_r3, M2C_FIELD(temp_r3, f32 *, 0x150));
    return 0;
}

s32 scr_method_worldToTelopX(s32 arg0) {
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    f32 sp8;
    f32 temp_f30;
    f32 temp_f31;

    temp_f31 = fn_80080764((long)(arg0), (float)(0), (float)(0));
    sp14 = fn_80080764((long)(arg0), (float)(0), (float)(0));
    temp_f30 = fn_80080764((long)(0), (float)(0), (float)(0));
    sp18 = temp_f31;
    sp1C = temp_f30;
    sp20 = sp14;
    sp24 = sp18;
    sp28 = sp1C;
    fn_80019808(&sp8, fn_800896C0(arg0, (u16)sp18, (u16)sp14), &sp20);
    fn_80080698(arg0, sp8);
    return 0;
}

s32 scr_method_worldToTelopY(s32 arg0) {
    s32 spC;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    M2C_UNK sp8;
    f32 temp_f30;
    f32 temp_f31;

    temp_f30 = fn_80080764((long)(0), (float)(0), (float)(0));
    temp_f31 = fn_80080764((long)(arg0), (float)(0), (float)(0));
    sp14 = fn_80080764((long)(arg0), (float)(0), (float)(0));
    sp18 = temp_f31;
    sp1C = temp_f30;
    sp20 = sp14;
    sp24 = sp18;
    sp28 = sp1C;
    fn_80019808(&sp8, fn_800896C0(arg0, sp18, (s32)sp14), &sp20);
    fn_80080698(arg0, spC);
    return 0;
}

s32 scr_method_worldToTelopZ(s32 arg0) {
    s32 sp10;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    M2C_UNK sp8;
    f32 temp_f30;
    f32 temp_f31;

    temp_f30 = fn_80080764((long)(0), (float)(0), (float)(0));
    temp_f31 = fn_80080764((long)(arg0), (float)(0), (float)(0));
    sp14 = fn_80080764((long)(arg0), (float)(0), (float)(0));
    sp18 = temp_f31;
    sp1C = temp_f30;
    sp20 = sp14;
    sp24 = sp18;
    sp28 = sp1C;
    fn_80019808(&sp8, fn_800896C0(arg0, sp18, (s32)sp14), &sp20);
    fn_80080698(arg0, sp10);
    return 0;
}

s32 scr_method_telopToWorldX(s32 arg0) {
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    f32 sp8;
    f32 temp_f30;
    f32 temp_f31;

    temp_f31 = fn_80080764((long)(arg0), (float)(0), (float)(0));
    sp14 = fn_80080764((long)(arg0), (float)(0), (float)(0));
    temp_f30 = fn_80080764((long)(0), (float)(0), (float)(0));
    sp18 = temp_f31;
    sp1C = temp_f30;
    sp20 = sp14;
    sp24 = sp18;
    sp28 = sp1C;
    fn_8001990C(&sp8, fn_800896C0(arg0, (u16)sp18, (u16)sp14), &sp20);
    fn_80080698(arg0, sp8);
    return 0;
}

s32 scr_method_telopToWorldY(s32 arg0) {
    s32 spC;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    M2C_UNK sp8;
    f32 temp_f30;
    f32 temp_f31;

    temp_f30 = fn_80080764((long)(0), (float)(0), (float)(0));
    temp_f31 = fn_80080764((long)(arg0), (float)(0), (float)(0));
    sp14 = fn_80080764((long)(arg0), (float)(0), (float)(0));
    sp18 = temp_f31;
    sp1C = temp_f30;
    sp20 = sp14;
    sp24 = sp18;
    sp28 = sp1C;
    fn_8001990C(&sp8, fn_800896C0(arg0, sp18, (s32)sp14), &sp20);
    fn_80080698(arg0, spC);
    return 0;
}

s32 scr_method_telopToWorldZ(s32 arg0) {
    s32 sp10;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    M2C_UNK sp8;
    f32 temp_f30;
    f32 temp_f31;

    temp_f30 = fn_80080764((long)(0), (float)(0), (float)(0));
    temp_f31 = fn_80080764((long)(arg0), (float)(0), (float)(0));
    sp14 = fn_80080764((long)(arg0), (float)(0), (float)(0));
    sp18 = temp_f31;
    sp1C = temp_f30;
    sp20 = sp14;
    sp24 = sp18;
    sp28 = sp1C;
    fn_8001990C(&sp8, fn_800896C0(arg0, sp18, (s32)sp14), &sp20);
    fn_80080698(arg0, sp10);
    return 0;
}
