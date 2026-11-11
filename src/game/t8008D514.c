/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_8008D410(M2C_UNK);
M2C_UNK fn_8008065C();
s8 fn_80080738();
f32 fn_80080764();
M2C_UNK fn_800A7CC4(s32, void *);
void *fn_80108ACC();
void *fn_80108C34();
M2C_UNK HSD_DObjModifyFlags(M2C_UNK, M2C_UNK);
M2C_UNK fn_80080698();
void *fn_8007B144();
f64 Sin();
f64 Cos();
f64 Tan();
f64 ArcSin();
f64 ArcCos();
f64 ArcTan();
f64 ArcTan2(f32);
u8 fn_8007F61C(s32);
u8 fn_8007F65C();
s32 Abs();
extern f32 lbl_80351A60;
extern f64 lbl_80351A68;
extern f64 lbl_80351A70;
M2C_UNK HSD_Randf();
s32 HSD_Randi();
s32 OSGetTick();
extern s32 *lbl_803502D0;
s32 fn_8007FC40();
f64 Ceil();
f64 Floor();
s32 RanzakI(s32);
f64 Log10();
f64 Pow(f32);
s32 get_up_vector_for_viewing_mtx(M2C_UNK);
s32 CreateMCard(s32);

void scr_method_setSpotAttnRing1(void);
void scr_method_setSpotAttnRing2(void);
s32 fn_8008D55C(void *arg0, s32 arg1);
void scr_SetFogExp(void);
void scr_SetFogExp2(void);
s32 scr_method_getShadowDepth(s32 arg0);
s32 scr_method_setShadowDepth(s32 arg0);
s32 scr_method_setShadowY(s32 arg0);
void *fn_8008D824(void *arg0);
s32 scr_Sin(s32 arg0);
s32 scr_Cos(s32 arg0);
s32 scr_Tan(s32 arg0);
s32 scr_ArcSin(s32 arg0);
s32 scr_ArcCos(s32 arg0);
s32 scr_ArcTan(s32 arg0);
s32 scr_ArcTan2(s32 arg0);
s32 scr_Abs(s32 arg0);
s32 scr_Int(s32 arg0);
s32 scr_Float(s32 arg0);
s32 scr_Sqrt(s32 arg0);
s32 scr_RandomF(s32 arg0);
s32 scr_RandomI(s32 arg0);
s32 scr_SetRandomSeed(s32 arg0);
s32 scr_Max(s32 arg0);
s32 scr_Min(s32 arg0);
s32 scr_Clamp(s32 arg0);
s32 scr_Ceil(s32 arg0);
s32 scr_Floor(s32 arg0);
s32 scr_RanzakI(s32 arg0);
s32 scr_Log10(s32 arg0);
s32 scr_Pow(s32 arg0);
s32 scr_CreateMCard(s32 arg0);

void scr_method_setSpotAttnRing1(void) {
    fn_8008D410(5);
}

void scr_method_setSpotAttnRing2(void) {
    fn_8008D410(6);
}

s32 fn_8008D55C(void *arg0, s32 arg1) {
    s32 unkspB;
    s32 unkspA;
    s32 unksp9;
    s8 spE;
    s8 spD;
    s32 sp8;
    f32 temp_f30;
    f32 temp_f31;
    u16 temp_r4;
    u8 var_r0;
    void *temp_r28;
    void *temp_r31;
    void *temp_r3;
    void *temp_r4_2;
    void *temp_r4_3;
    u16 spC;

    spD = fn_80080738(arg0);
    spC = fn_80080738(arg0);
    spE = fn_80080738((void *)(0));
    temp_f30 = fn_80080764(arg0);
    temp_f31 = fn_80080764(arg0);
    temp_r31 = fn_80108C34();
    HSD_DObjModifyFlags(1, -1);
    temp_r3 = fn_80108ACC();
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 8) = arg1;
    }
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, f32 *, 0x10) = temp_f31;
    }
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, f32 *, 0x14) = temp_f30;
    }
    sp8 = (s32) spC;
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, u8 *, 0x19) = unksp9;
        M2C_FIELD(temp_r3, u8 *, 0x18) = (u8) sp8;
        M2C_FIELD(temp_r3, u8 *, 0x1A) = unkspA;
        M2C_FIELD(temp_r3, u8 *, 0x1B) = unkspB;
    }
    if (temp_r3 != NULL) {
        temp_r28 = M2C_FIELD(temp_r3, void **, 0xC);
        if (temp_r28 != NULL) {
            temp_r4 = M2C_FIELD(temp_r28, u16 *, 4);
            var_r0 = temp_r4 == 0xFFFF;
            if (var_r0 != 0) {

            } else {
                M2C_FIELD(temp_r28, u16 *, 4) = (u16) (temp_r4 - 1);
                var_r0 = temp_r4 == 0;
            }
            if (((s32) var_r0 != 0) && (temp_r28 != NULL)) {
                temp_r4_2 = M2C_FIELD(temp_r28, void **, 0);
                M2C_FIELD(temp_r4_2, M2C_UNK (**)(void *, void *), 0x30)(temp_r28, temp_r4_2);
                temp_r4_3 = M2C_FIELD(temp_r28, void **, 0);
                M2C_FIELD(temp_r4_3, M2C_UNK (**)(void *, void *), 0x34)(temp_r28, temp_r4_3);
            }
        }
        M2C_FIELD(temp_r3, void **, 0xC) = temp_r31;
    }
    fn_800A7CC4(M2C_FIELD(arg0, s32 *, 0x2E0), temp_r3);
    fn_8008065C(arg0, 0);
    return 0;
}

void scr_SetFogExp(void) {
    /* draft: did not compile: fn_8008D55C(4); */
}

void scr_SetFogExp2(void) {
    /* draft: did not compile: fn_8008D55C(5); */
}

s32 scr_method_getShadowDepth(s32 arg0) {
    void *temp_r3;

    temp_r3 = fn_8008D824((void *)(0));
    fn_80080698(arg0, temp_r3, M2C_FIELD(temp_r3, f32 *, 0x74));
    return 0;
}

s32 scr_method_setShadowDepth(s32 arg0) { return 0; } /* draft: stub */

s32 scr_method_setShadowY(s32 arg0) { return 0; } /* draft: stub */

void *fn_8008D824(void *arg0) {
    s32 temp_r4;
    void *var_r3;

    fn_80080738((void *)(0));
    var_r3 = fn_8007B144();
    if (var_r3 == NULL) {
        return NULL;
    }
    temp_r4 = M2C_FIELD(var_r3, s32 *, 8);
    if (!(temp_r4 & 0x200)) {
        return NULL;
    }
    if ((temp_r4 & 2) && !(temp_r4 & 0x2000) && ((u32) M2C_FIELD(arg0, u32 *, 0x2E0) != (u32) M2C_FIELD(var_r3, u32 *, 0x24))) {
        var_r3 = NULL;
    }
    return var_r3;
}

s32 scr_Sin(s32 arg0) {
    fn_80080764((void *)(0));
    fn_80080698(arg0, (f32) Sin());
    return 0;
}

s32 scr_Cos(s32 arg0) {
    fn_80080764((void *)(0));
    fn_80080698(arg0, (f32) Cos());
    return 0;
}

s32 scr_Tan(s32 arg0) {
    fn_80080764((void *)(0));
    fn_80080698(arg0, (f32) Tan());
    return 0;
}

s32 scr_ArcSin(s32 arg0) {
    fn_80080764((void *)(0));
    fn_80080698(arg0, (f32) ArcSin());
    return 0;
}

s32 scr_ArcCos(s32 arg0) {
    fn_80080764((void *)(0));
    fn_80080698(arg0, (f32) ArcCos());
    return 0;
}

s32 scr_ArcTan(s32 arg0) {
    fn_80080764((void *)(0));
    fn_80080698(arg0, (f32) ArcTan());
    return 0;
}

s32 scr_ArcTan2(s32 arg0) {
    f32 temp_f31;

    temp_f31 = fn_80080764((void *)(0));
    fn_80080764(arg0);
    fn_80080698(arg0, (f32) ArcTan2(temp_f31));
    return 0;
}

s32 scr_Abs(s32 arg0) {
    if (fn_8007F65C() != 0) {
        fn_80080698(arg0, (f32) fabs(fn_80080764(arg0)));
    } else if (fn_8007F61C(arg0) != 0) {
        fn_80080738(arg0);
        fn_8008065C(arg0, Abs());
    }
    return 0;
}

s32 scr_Int(s32 arg0) {
    fn_8008065C(arg0, (s32) fn_80080764());
    return 0;
}

s32 scr_Float(s32 arg0) {
    fn_80080764();
    fn_80080698(arg0);
    return 0;
}

s32 scr_Sqrt(s32 arg0) {
    f32 sp8;
    f32 var_f1;
    f64 temp_f2;
    f64 temp_f2_2;
    f64 temp_f2_3;

    var_f1 = fn_80080764();
    if (var_f1 < lbl_80351A60) {
        fn_80080698(arg0, lbl_80351A60);
    } else {
        if (var_f1 > lbl_80351A60) {
            temp_f2 = __frsqrte(var_f1);
            temp_f2_2 = lbl_80351A68 * temp_f2 * -(((f64) var_f1 * (temp_f2 * temp_f2)) - lbl_80351A70);
            temp_f2_3 = lbl_80351A68 * temp_f2_2 * -(((f64) var_f1 * (temp_f2_2 * temp_f2_2)) - lbl_80351A70);
            sp8 = (f32) ((f64) var_f1 * (lbl_80351A68 * temp_f2_3 * -(((f64) var_f1 * (temp_f2_3 * temp_f2_3)) - lbl_80351A70)));
            var_f1 = sp8;
        }
        fn_80080698(arg0, var_f1);
    }
    return 0;
}

s32 scr_RandomF(s32 arg0) {
    HSD_Randf();
    fn_80080698(arg0);
    return 0;
}

s32 scr_RandomI(s32 arg0) {
    fn_80080738();
    fn_8008065C(arg0, HSD_Randi());
    return 0;
}

s32 scr_SetRandomSeed(s32 arg0) {
    s32 var_r3;

    var_r3 = fn_80080738();
    if (var_r3 == 0) {
        var_r3 = OSGetTick();
    }
    *lbl_803502D0 = var_r3;
    HSD_Randf(lbl_803502D0);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_Max(s32 arg0) {
    f32 temp_f1;
    f32 var_f31;
    s32 var_r31;

    var_r31 = fn_8007FC40();
    if (var_r31 == 0) {
        fn_80080698(arg0, lbl_80351A60);
    } else {
        var_f31 = fn_80080764(arg0);
loop_5:
        var_r31 -= 1;
        if (var_r31 > 0) {
            temp_f1 = fn_80080764(arg0);
            if (var_f31 < temp_f1) {
                var_f31 = temp_f1;
            }
            goto loop_5;
        }
        fn_80080698(arg0, var_f31);
    }
    return 0;
}

s32 scr_Min(s32 arg0) {
    f32 temp_f1;
    f32 var_f31;
    s32 var_r31;

    var_r31 = fn_8007FC40();
    if (var_r31 == 0) {
        fn_80080698(arg0, lbl_80351A60);
    } else {
        var_f31 = fn_80080764(arg0);
loop_5:
        var_r31 -= 1;
        if (var_r31 > 0) {
            temp_f1 = fn_80080764(arg0);
            if (temp_f1 < var_f31) {
                var_f31 = temp_f1;
            }
            goto loop_5;
        }
        fn_80080698(arg0, var_f31);
    }
    return 0;
}

s32 scr_Clamp(s32 arg0) {
    f32 temp_f31;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f30;
    f32 temp_f1;
    f32 var_f1;

    temp_f1 = fn_80080764(arg0);
    temp_f31 = fn_80080764(arg0);
    temp_f30 = fn_80080764();
    if (temp_f1 < temp_f31) {
        temp_f2 = ((temp_f30 - temp_f31) >= 0.0f) ? temp_f31 : temp_f30;
        var_f1 = ((temp_f1 - temp_f2) >= 0.0f) ? temp_f1 : temp_f2;
    } else {
        temp_f1_2 = ((temp_f30 - temp_f1) >= 0.0f) ? temp_f1 : temp_f30;
        var_f1 = ((temp_f31 - temp_f1_2) >= 0.0f) ? temp_f31 : temp_f1_2;
    }
    fn_80080698(arg0, var_f1);
    return 0;
}

s32 scr_Ceil(s32 arg0) {
    fn_80080764();
    fn_8008065C(arg0, (s32) (f32) Ceil());
    return 0;
}

s32 scr_Floor(s32 arg0) {
    fn_80080764();
    fn_8008065C(arg0, (s32) (f32) Floor());
    return 0;
}

s32 scr_RanzakI(s32 arg0) {
    s8 temp_r31;

    temp_r31 = fn_80080738();
    fn_80080738(arg0);
    fn_8008065C(arg0, RanzakI(temp_r31));
    return 0;
}

s32 scr_Log10(s32 arg0) {
    fn_80080764();
    fn_80080698(arg0, (f32) Log10());
    return 0;
}

s32 scr_Pow(s32 arg0) {
    f32 temp_f31;

    temp_f31 = fn_80080764();
    fn_80080764(arg0);
    fn_80080698(arg0, (f32) Pow(temp_f31));
    return 0;
}

s32 scr_CreateMCard(s32 arg0) {
    s32 temp_r31;
    s32 var_r4;

    temp_r31 = fn_80080738();
    var_r4 = get_up_vector_for_viewing_mtx(0x4B4);
    if (var_r4 != 0) {
        var_r4 = CreateMCard(temp_r31);
    }
    fn_8008065C(arg0, var_r4);
    return 0;
}
