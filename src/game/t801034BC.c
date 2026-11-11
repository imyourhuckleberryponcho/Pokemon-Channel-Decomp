/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

extern M2C_UNK lbl_802A9F58;
extern M2C_UNK lbl_8031E920;
extern M2C_UNK lbl_8031EB78;
extern f32 lbl_80352048;
extern f32 lbl_8035204C;
extern f32 lbl_80352050;
extern f32 lbl_80352054;
extern f32 lbl_80352058;
extern f32 lbl_8035205C;
extern f32 lbl_80352060;
extern f32 lbl_80352070;
extern f64 lbl_80352078;
extern f64 lbl_80352080;
extern f32 lbl_80352088;
extern f32 lbl_8035208C;
extern f32 lbl_80352090;
M2C_UNK PSMTXCopy(f32 *, void *, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 lbl_80352098;
extern f32 lbl_8035209C;
f64 Cos(f32);
f64 ArcSin();
f64 ArcTan2();
extern f64 lbl_803520A0;
extern f64 lbl_803520A8;
extern f32 lbl_803520B0;
extern f32 lbl_803520B4;
extern f32 lbl_803520B8;
extern f32 lbl_803520BC;
M2C_UNK PSVECSubtract(f32 *, f32 *, f32 *);
M2C_UNK PSVECScale(f32 *, f32 *);
f32 fn_800CC960(f32 *);
f32 PSVECMag(f32 *);
f32 PSVECDotProduct(f32 *, f32 *);
M2C_UNK PSVECCrossProduct(f32 *, f32 *, f32 *);
extern f32 lbl_803520C0;
extern f64 lbl_803520C8;
extern f64 lbl_803520D0;
f64 Sin(f32);
extern f32 lbl_803520D8;
M2C_UNK PSMTXConcat(M2C_UNK *, void *, void *);
M2C_UNK PSMTXScale(f32, f32, f32);
M2C_UNK PSMTXQuat(M2C_UNK *, s32);
s32 fn_80105930(M2C_UNK *);
M2C_UNK __assert(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_8031EBA8;
extern M2C_UNK lbl_803501F0;
extern M2C_UNK lbl_803501F8;
M2C_UNK HSD_ObjFree(M2C_UNK *, u32, M2C_UNK *);
extern M2C_UNK lbl_8031EBD4;
extern M2C_UNK lbl_803501FC;

void fn_801034BC(u16 arg0, s32 arg1);
f32 fn_80103690(f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5);
void fn_801036F0(void *arg0, void *arg1, f32 farg0);
f32 fn_80103B80(void *arg0, f32 farg0, f32 farg1);
f32 fn_80103E88(void *arg0, f32 farg0);
void splArcLengthPoint(s32 arg0, s32 arg1);
s32 HSD_MtxInverseConcat(void *arg0, void *arg1, void *arg2);
void fn_80104500(void *arg0, void *arg1);
void HSD_MtxGetTranslate(void *arg0, void *arg1);
void fn_8010483C(void *arg0, void *arg1);
void HSD_MkRotationMtx(void *arg0, void *arg1);
void HSD_MtxSRT(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void HSD_MtxSRTQuat(void *arg0, void *arg1, s32 arg2, void *arg3, void *arg4);
void HSD_MtxScaledAdd(void *arg0, void *arg1, void *arg2, f32 farg0);
s32 HSD_FogAlloc(void);
void HSD_VecFree(u32 arg0);
s32 HSD_MtxAlloc(void);
void HSD_MtxFree(u32 arg0);

void fn_801034BC(u16 arg0, s32 arg1) { } /* draft: stub */

f32 fn_80103690(f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5) {
    f32 temp_f10_2;
    f32 temp_f11;
    f32 temp_f11_2;
    f32 temp_f1;
    f32 temp_f9;
    f32 temp_f9_2;
    f32 temp_f10;

    temp_f11_2 = farg1 * farg1;
    temp_f10_2 = farg0 * farg0;
    temp_f11 = temp_f11_2 * farg0;
    temp_f9_2 = temp_f10_2 * (temp_f11_2 * farg1);
    temp_f9 = temp_f9_2 - temp_f11;
    temp_f1 = lbl_80352048 * temp_f9_2 * farg0;
    temp_f10 = lbl_8035204C * temp_f11_2 * temp_f10_2;
    return (farg5 * temp_f9) + ((farg4 * (farg1 + (temp_f9 - temp_f11))) + ((farg2 * (lbl_80352050 + (temp_f1 - temp_f10))) + (farg3 * (-temp_f1 + temp_f10))));
}

void fn_801036F0(void *arg0, void *arg1, f32 farg0) { } /* draft: stub */

f32 fn_80103B80(void *arg0, f32 farg0, f32 farg1) {
    f32 var_f0;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f0;
    f32 temp_f11;
    f32 temp_f11_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f13;
    f32 temp_f13_2;
    f32 temp_f3;
    f32 sp14;
    f32 var_f0_2;
    f32 var_f4;
    f32 var_f7;
    f32 var_f9;
    f32 var_f9_2;
    f64 temp_f2;
    f64 temp_f2_2;
    f64 temp_f2_3;
    f64 temp_f5;
    f64 temp_f5_2;
    f64 temp_f5_3;
    f64 temp_f6;
    f64 temp_f6_2;
    f64 temp_f6_3;
    f64 temp_f6_4;
    f64 temp_f6_5;
    f64 temp_f6_6;
    s32 var_r4;
    s32 var_ctr;

    var_f4 = lbl_80352060;
    temp_f3 = (farg1 - farg0);
    temp_f3 *= lbl_80352088;
    var_f0_2 = farg0 + temp_f3;
    var_ctr = 7;
    var_r4 = 2;
    do {
        if (!(var_r4 & 1)) {
            temp_f13 = var_f0_2 * var_f0_2;
            temp_f12 = temp_f13 * var_f0_2;
            var_f9 = M2C_FIELD(arg0, f32 *, 0x10) + ((M2C_FIELD(arg0, f32 *, 0xC) * var_f0_2) + ((M2C_FIELD(arg0, f32 *, 8) * temp_f13) + ((M2C_FIELD(arg0, f32 *, 0) * (temp_f12 * var_f0_2)) + (M2C_FIELD(arg0, f32 *, 4) * temp_f12))));
            if ((var_f9 < lbl_80352060) && (var_f9 > lbl_80352070)) {
                var_f9 = lbl_80352060;
            }
            if (var_f9 > lbl_80352060) {
                temp_f6 = __frsqrte(var_f9);
                temp_f6_2 = lbl_80352078 * temp_f6 * -(((f64) var_f9 * (temp_f6 * temp_f6)) - lbl_80352080);
                temp_f6_3 = lbl_80352078 * temp_f6_2 * -(((f64) var_f9 * (temp_f6_2 * temp_f6_2)) - lbl_80352080);
                sp14 = (f32) ((f64) var_f9 * (lbl_80352078 * temp_f6_3 * -(((f64) var_f9 * (temp_f6_3 * temp_f6_3)) - lbl_80352080)));
                var_f9 = sp14;
            }
            var_f4 += lbl_80352058 * var_f9;
        } else {
            temp_f13_2 = var_f0_2 * var_f0_2;
            temp_f12_2 = temp_f13_2 * var_f0_2;
            var_f9_2 = M2C_FIELD(arg0, f32 *, 0x10) + ((M2C_FIELD(arg0, f32 *, 0xC) * var_f0_2) + ((M2C_FIELD(arg0, f32 *, 8) * temp_f13_2) + ((M2C_FIELD(arg0, f32 *, 0) * (temp_f12_2 * var_f0_2)) + (M2C_FIELD(arg0, f32 *, 4) * temp_f12_2))));
            if ((var_f9_2 < lbl_80352060) && (var_f9_2 > lbl_80352070)) {
                var_f9_2 = lbl_80352060;
            }
            if (var_f9_2 > lbl_80352060) {
                temp_f6_4 = __frsqrte(var_f9_2);
                temp_f6_5 = lbl_80352078 * temp_f6_4 * -(((f64) var_f9_2 * (temp_f6_4 * temp_f6_4)) - lbl_80352080);
                temp_f6_6 = lbl_80352078 * temp_f6_5 * -(((f64) var_f9_2 * (temp_f6_5 * temp_f6_5)) - lbl_80352080);
                sp10 = (f32) ((f64) var_f9_2 * (lbl_80352078 * temp_f6_6 * -(((f64) var_f9_2 * (temp_f6_6 * temp_f6_6)) - lbl_80352080)));
                var_f9_2 = sp10;
            }
            var_f4 += lbl_80352048 * var_f9_2;
        }
        var_f0_2 += temp_f3;
        var_r4 += 1;
        var_ctr -= 1;
    } while (var_ctr != 0);
    temp_f12_3 = farg0 * farg0;
    temp_f11 = temp_f12_3 * farg0;
    var_f0 = ((M2C_FIELD(arg0, f32 *, 0xC) * farg0) + ((M2C_FIELD(arg0, f32 *, 8) * temp_f12_3) + ((M2C_FIELD(arg0, f32 *, 0) * (temp_f11 * farg0)) + (M2C_FIELD(arg0, f32 *, 4) * temp_f11))));
    var_f0 += M2C_FIELD(arg0, f32 *, 0x10);
    if ((var_f0 < lbl_80352060) && (var_f0 > lbl_80352070)) {
        var_f0 = lbl_80352060;
    }
    if (var_f0 > lbl_80352060) {
        temp_f5 = __frsqrte(var_f0);
        temp_f5_2 = lbl_80352078 * temp_f5 * -(((f64) var_f0 * (temp_f5 * temp_f5)) - lbl_80352080);
        temp_f5_3 = lbl_80352078 * temp_f5_2 * -(((f64) var_f0 * (temp_f5_2 * temp_f5_2)) - lbl_80352080);
        temp_f0 = (f32) ((f64) var_f0 * (lbl_80352078 * temp_f5_3 * -(((f64) var_f0 * (temp_f5_3 * temp_f5_3)) - lbl_80352080)));
        spC = temp_f0;
        var_f0 = temp_f0;
    }
    temp_f12_4 = farg1 * farg1;
    temp_f11_2 = temp_f12_4 * farg1;
    var_f7 = M2C_FIELD(arg0, f32 *, 0x10) + ((M2C_FIELD(arg0, f32 *, 0xC) * farg1) + ((M2C_FIELD(arg0, f32 *, 8) * temp_f12_4) + ((M2C_FIELD(arg0, f32 *, 0) * (temp_f11_2 * farg1)) + (M2C_FIELD(arg0, f32 *, 4) * temp_f11_2))));
    if ((var_f7 < lbl_80352060) && (var_f7 > lbl_80352070)) {
        var_f7 = lbl_80352060;
    }
    if (var_f7 > lbl_80352060) {
        temp_f2 = __frsqrte(var_f7);
        temp_f2_2 = lbl_80352078 * temp_f2 * -(((f64) var_f7 * (temp_f2 * temp_f2)) - lbl_80352080);
        temp_f2_3 = lbl_80352078 * temp_f2_2 * -(((f64) var_f7 * (temp_f2_2 * temp_f2_2)) - lbl_80352080);
        sp8 = (f32) ((f64) var_f7 * (lbl_80352078 * temp_f2_3 * -(((f64) var_f7 * (temp_f2_3 * temp_f2_3)) - lbl_80352080)));
        var_f7 = sp8;
    }
    return (temp_f3 * (var_f4 + var_f0 + var_f7)) / lbl_8035204C;
}

f32 fn_80103E88(void *arg0, f32 farg0) { return 0; } /* draft: stub */

void splArcLengthPoint(s32 arg0, s32 arg1) {
    /* draft: did not compile: fn_80103E88(arg1); */
    /* draft: did not compile: fn_801036F0(arg0, arg1); */
}

s32 HSD_MtxInverseConcat(void *arg0, void *arg1, void *arg2) {
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
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f10_3;
    f32 temp_f10_4;
    f32 temp_f10_5;
    f32 temp_f11;
    f32 temp_f11_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f13;
    f32 temp_f13_2;
    f32 temp_f13_3;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f23;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f24_3;
    f32 temp_f24_4;
    f32 temp_f25;
    f32 temp_f25_2;
    f32 temp_f25_3;
    f32 temp_f25_4;
    f32 temp_f26;
    f32 temp_f26_2;
    f32 temp_f28;
    f32 temp_f29;
    f32 temp_f29_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f30;
    f32 temp_f31;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f4_3;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f5_3;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f7;
    f32 temp_f7_2;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 temp_f9;
    f32 temp_f9_2;
    f32 temp_f9_3;

    temp_f7 = M2C_FIELD(arg0, f32 *, 0x18);
    temp_f23 = M2C_FIELD(arg0, f32 *, 4);
    temp_f3 = M2C_FIELD(arg0, f32 *, 0x10);
    temp_f8 = temp_f23 * temp_f7;
    temp_f24 = M2C_FIELD(arg0, f32 *, 0x20);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x14);
    temp_f10 = temp_f3 * temp_f23;
    temp_f6 = M2C_FIELD(arg0, f32 *, 0);
    temp_f2 = M2C_FIELD(arg0, f32 *, 8);
    temp_f11 = temp_f6 * temp_f1;
    temp_f4 = M2C_FIELD(arg0, f32 *, 0x28);
    temp_f5 = M2C_FIELD(arg0, f32 *, 0x24);
    temp_f0 = temp_f2 * temp_f3;
    temp_f9 = temp_f24 * temp_f1;
    temp_f29 = temp_f6 * temp_f5;
    temp_f25 = -((temp_f7 * temp_f29) - -((temp_f4 * temp_f10) - -((temp_f2 * temp_f9) - ((temp_f5 * temp_f0) + ((temp_f4 * temp_f11) + (temp_f24 * temp_f8))))));
    if (lbl_80352098 == temp_f25) {
        return 0;
    }
    temp_f12 = M2C_FIELD(arg0, f32 *, 0x1C);
    temp_f30 = lbl_8035209C / temp_f25;
    temp_f13 = M2C_FIELD(arg0, f32 *, 0xC);
    temp_f31 = M2C_FIELD(arg0, f32 *, 0x2C);
    temp_f4_2 = temp_f30 * -((temp_f23 * temp_f4) - (temp_f5 * temp_f2));
    temp_f3_2 = temp_f30 * ((temp_f1 * temp_f4) - (temp_f5 * temp_f7));
    temp_f5_2 = temp_f30 * -((temp_f3 * temp_f4) - (temp_f24 * temp_f7));
    temp_f9_2 = temp_f30 * ((temp_f6 * temp_f4) - (temp_f24 * temp_f2));
    temp_f29_2 = temp_f30 * ((temp_f3 * temp_f5) - temp_f9);
    /* draft: did not compile: temp_f28 = temp_f30 * --((temp_f24 * temp_f23) - temp_f29); */
    temp_f0_2 = temp_f30 * -((temp_f1 * temp_f2) - temp_f8);
    temp_f1_2 = temp_f30 * -((temp_f6 * temp_f7) - temp_f0);
    temp_f2_2 = temp_f30 * (temp_f11 - temp_f10);
    temp_f6_2 = -((temp_f0_2 * temp_f31) - ((-temp_f3_2 * temp_f13) - (temp_f4_2 * temp_f12)));
    temp_f8_2 = -((temp_f2_2 * temp_f31) - ((-temp_f29_2 * temp_f13) - (temp_f28 * temp_f12)));
    temp_f7_2 = -((temp_f1_2 * temp_f31) - ((-temp_f5_2 * temp_f13) - (temp_f9_2 * temp_f12)));
    if ((arg0 == arg2) || (arg1 == arg2)) {
        temp_f10_2 = M2C_FIELD(arg1, f32 *, 0x10);
        temp_f13_2 = M2C_FIELD(arg1, f32 *, 0);
        temp_f24_2 = M2C_FIELD(arg1, f32 *, 0x20);
        temp_f12_2 = (temp_f2_2 * temp_f24_2) + ((temp_f29_2 * temp_f13_2) + (temp_f28 * temp_f10_2));
        sp8 = (temp_f0_2 * temp_f24_2) + ((temp_f3_2 * temp_f13_2) + (temp_f4_2 * temp_f10_2));
        temp_f10_3 = M2C_FIELD(arg1, f32 *, 0x14);
        temp_f24_3 = M2C_FIELD(arg1, f32 *, 4);
        temp_f25_2 = M2C_FIELD(arg1, f32 *, 0x24);
        temp_f11_2 = (temp_f2_2 * temp_f25_2);
        temp_f11_2 += ((temp_f29_2 * temp_f24_3) + (temp_f28 * temp_f10_3));
        spC = (temp_f0_2 * temp_f25_2) + ((temp_f3_2 * temp_f24_3) + (temp_f4_2 * temp_f10_3));
        temp_f10_4 = M2C_FIELD(arg1, f32 *, 0x18);
        temp_f25_3 = M2C_FIELD(arg1, f32 *, 8);
        temp_f26 = M2C_FIELD(arg1, f32 *, 0x28);
        temp_f13_3 = (temp_f1_2 * temp_f26) + ((temp_f5_2 * temp_f25_3) + (temp_f9_2 * temp_f10_4));
        temp_f10_5 = (temp_f2_2 * temp_f26) + ((temp_f29_2 * temp_f25_3) + (temp_f28 * temp_f10_4));
        sp10 = (temp_f0_2 * temp_f26) + ((temp_f3_2 * temp_f25_3) + (temp_f4_2 * temp_f10_4));
        temp_f26_2 = M2C_FIELD(arg1, f32 *, 0x1C);
        temp_f25_4 = M2C_FIELD(arg1, f32 *, 0xC);
        temp_f24_4 = M2C_FIELD(arg1, f32 *, 0x2C);
        temp_f9_3 = temp_f9_2 * temp_f26_2;
        sp18 = (temp_f1_2 * temp_f24_2) + ((temp_f5_2 * temp_f13_2) + (temp_f9_2 * temp_f10_2));
        sp1C = (temp_f1_2 * temp_f25_2) + ((temp_f5_2 * temp_f24_3) + (temp_f9_2 * temp_f10_3));
        temp_f5_3 = (temp_f5_2 * temp_f25_4) + temp_f9_3;
        temp_f3_3 = (temp_f29_2 * temp_f25_4) + (temp_f28 * temp_f26_2);
        sp20 = temp_f13_3;
        temp_f4_3 = (temp_f0_2 * temp_f24_4) + ((temp_f3_2 * temp_f25_4) + (temp_f4_2 * temp_f26_2));
        sp28 = temp_f12_2;
        temp_f2_3 = temp_f6_2 + temp_f4_3;
        sp2C = temp_f11_2;
        temp_f1_3 = temp_f7_2;
        temp_f1_3 += ((temp_f1_2 * temp_f24_4) + temp_f5_3);
        sp30 = temp_f10_5;
        sp14 = temp_f2_3;
        sp24 = temp_f1_3;
        sp34 = temp_f8_2 + ((temp_f2_2 * temp_f24_4) + temp_f3_3);
        PSMTXCopy(&sp8, arg2, temp_f1_3, temp_f2_3, temp_f3_3, temp_f4_3, temp_f5_3, temp_f9_3, temp_f10_5, temp_f11_2, temp_f12_2, temp_f13_3);
    } else {
        M2C_FIELD(arg2, f32 *, 0) = (f32) ((temp_f0_2 * M2C_FIELD(arg1, f32 *, 0x20)) + ((temp_f3_2 * M2C_FIELD(arg1, f32 *, 0)) + (temp_f4_2 * M2C_FIELD(arg1, f32 *, 0x10))));
        M2C_FIELD(arg2, f32 *, 4) = (f32) ((temp_f0_2 * M2C_FIELD(arg1, f32 *, 0x24)) + ((temp_f3_2 * M2C_FIELD(arg1, f32 *, 4)) + (temp_f4_2 * M2C_FIELD(arg1, f32 *, 0x14))));
        M2C_FIELD(arg2, f32 *, 8) = (f32) ((temp_f0_2 * M2C_FIELD(arg1, f32 *, 0x28)) + ((temp_f3_2 * M2C_FIELD(arg1, f32 *, 8)) + (temp_f4_2 * M2C_FIELD(arg1, f32 *, 0x18))));
        M2C_FIELD(arg2, f32 *, 0xC) = (f32) (temp_f6_2 + ((temp_f0_2 * M2C_FIELD(arg1, f32 *, 0x2C)) + ((temp_f3_2 * M2C_FIELD(arg1, f32 *, 0xC)) + (temp_f4_2 * M2C_FIELD(arg1, f32 *, 0x1C)))));
        M2C_FIELD(arg2, f32 *, 0x10) = (f32) ((temp_f1_2 * M2C_FIELD(arg1, f32 *, 0x20)) + ((temp_f5_2 * M2C_FIELD(arg1, f32 *, 0)) + (temp_f9_2 * M2C_FIELD(arg1, f32 *, 0x10))));
        M2C_FIELD(arg2, f32 *, 0x14) = (f32) ((temp_f1_2 * M2C_FIELD(arg1, f32 *, 0x24)) + ((temp_f5_2 * M2C_FIELD(arg1, f32 *, 4)) + (temp_f9_2 * M2C_FIELD(arg1, f32 *, 0x14))));
        M2C_FIELD(arg2, f32 *, 0x18) = (f32) ((temp_f1_2 * M2C_FIELD(arg1, f32 *, 0x28)) + ((temp_f5_2 * M2C_FIELD(arg1, f32 *, 8)) + (temp_f9_2 * M2C_FIELD(arg1, f32 *, 0x18))));
        M2C_FIELD(arg2, f32 *, 0x1C) = (f32) (temp_f7_2 + ((temp_f1_2 * M2C_FIELD(arg1, f32 *, 0x2C)) + ((temp_f5_2 * M2C_FIELD(arg1, f32 *, 0xC)) + (temp_f9_2 * M2C_FIELD(arg1, f32 *, 0x1C)))));
        M2C_FIELD(arg2, f32 *, 0x20) = (f32) ((temp_f2_2 * M2C_FIELD(arg1, f32 *, 0x20)) + ((temp_f29_2 * M2C_FIELD(arg1, f32 *, 0)) + (temp_f28 * M2C_FIELD(arg1, f32 *, 0x10))));
        M2C_FIELD(arg2, f32 *, 0x24) = (f32) ((temp_f2_2 * M2C_FIELD(arg1, f32 *, 0x24)) + ((temp_f29_2 * M2C_FIELD(arg1, f32 *, 4)) + (temp_f28 * M2C_FIELD(arg1, f32 *, 0x14))));
        M2C_FIELD(arg2, f32 *, 0x28) = (f32) ((temp_f2_2 * M2C_FIELD(arg1, f32 *, 0x28)) + ((temp_f29_2 * M2C_FIELD(arg1, f32 *, 8)) + (temp_f28 * M2C_FIELD(arg1, f32 *, 0x18))));
        M2C_FIELD(arg2, f32 *, 0x2C) = (f32) (temp_f8_2 + ((temp_f2_2 * M2C_FIELD(arg1, f32 *, 0x2C)) + ((temp_f29_2 * M2C_FIELD(arg1, f32 *, 0xC)) + (temp_f28 * M2C_FIELD(arg1, f32 *, 0x1C)))));
    }
    return 1;
}

void fn_80104500(void *arg0, void *arg1) {
    f32 var_f31;
    f32 spC;
    f32 sp8;
    f32 temp_f0_2;
    f32 temp_f1_3;
    f32 temp_f2;
    f32 temp_f2_5;
    f32 temp_f2_9;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f0_4;
    f32 var_f0_5;
    f32 var_f30;
    f32 sp10;
    f64 temp_f2_10;
    f64 temp_f2_11;
    f64 temp_f2_12;
    f64 temp_f2_2;
    f64 temp_f2_3;
    f64 temp_f2_4;
    f64 temp_f2_6;
    f64 temp_f2_7;
    f64 temp_f2_8;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;

    temp_f2 = M2C_FIELD(arg0, f32 *, 0);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x10);
    temp_f3 = M2C_FIELD(arg0, f32 *, 0x20);
    var_f0 = (temp_f3 * temp_f3);
    var_f0 += ((temp_f2 * temp_f2) + (temp_f0 * temp_f0));
    if (var_f0 > lbl_80352098) {
        temp_f2_2 = __frsqrte(var_f0);
        temp_f2_3 = lbl_803520A0 * temp_f2_2 * -(((f64) var_f0 * (temp_f2_2 * temp_f2_2)) - lbl_803520A8);
        temp_f2_4 = lbl_803520A0 * temp_f2_3 * -(((f64) var_f0 * (temp_f2_3 * temp_f2_3)) - lbl_803520A8);
        temp_f0_2 = (f32) ((f64) var_f0 * (lbl_803520A0 * temp_f2_4 * -(((f64) var_f0 * (temp_f2_4 * temp_f2_4)) - lbl_803520A8)));
        sp10 = temp_f0_2;
        var_f0 = temp_f0_2;
    }
    if (!(var_f0 < lbl_803520B0)) {
        temp_f2_5 = M2C_FIELD(arg0, f32 *, 4);
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x14);
        temp_f4 = M2C_FIELD(arg0, f32 *, 0x24);
        var_f31 = (temp_f4 * temp_f4);
        var_f31 += ((temp_f2_5 * temp_f2_5) + (temp_f1 * temp_f1));
        if (var_f31 > lbl_80352098) {
            temp_f2_6 = __frsqrte(var_f31);
            temp_f2_7 = lbl_803520A0 * temp_f2_6 * -(((f64) var_f31 * (temp_f2_6 * temp_f2_6)) - lbl_803520A8);
            temp_f2_8 = lbl_803520A0 * temp_f2_7 * -(((f64) var_f31 * (temp_f2_7 * temp_f2_7)) - lbl_803520A8);
            spC = (f32) ((f64) var_f31 * (lbl_803520A0 * temp_f2_8 * -(((f64) var_f31 * (temp_f2_8 * temp_f2_8)) - lbl_803520A8)));
            var_f31 = spC;
        }
        if (!(var_f31 < lbl_803520B0)) {
            temp_f2_9 = M2C_FIELD(arg0, f32 *, 8);
            temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x18);
            temp_f4_2 = M2C_FIELD(arg0, f32 *, 0x28);
            var_f30 = (temp_f4_2 * temp_f4_2);
            var_f30 += ((temp_f2_9 * temp_f2_9) + (temp_f1_2 * temp_f1_2));
            if (var_f30 > lbl_80352098) {
                temp_f2_10 = __frsqrte(var_f30);
                temp_f2_11 = lbl_803520A0 * temp_f2_10 * -(((f64) var_f30 * (temp_f2_10 * temp_f2_10)) - lbl_803520A8);
                temp_f2_12 = lbl_803520A0 * temp_f2_11 * -(((f64) var_f30 * (temp_f2_11 * temp_f2_11)) - lbl_803520A8);
                sp8 = (f32) ((f64) var_f30 * (lbl_803520A0 * temp_f2_12 * -(((f64) var_f30 * (temp_f2_12 * temp_f2_12)) - lbl_803520A8)));
                var_f30 = sp8;
            }
            if (!(var_f30 < lbl_803520B0)) {
                temp_f1_3 = -M2C_FIELD(arg0, f32 *, 0x20) / var_f0;
                if (temp_f1_3 >= lbl_8035209C) {
                    var_f0_2 = lbl_803520B4;
                } else {
                    if (temp_f1_3 <= lbl_803520B8) {
                        var_f0_2 = lbl_803520BC;
                    } else {
                        var_f0_2 = (f32) ArcSin();
                    }
                }
                M2C_FIELD(arg1, f32 *, 4) = var_f0_2;
                if ((f32) Cos(M2C_FIELD(arg1, f32 *, 4)) >= lbl_803520B0) {
                    if (lbl_80352098 == (M2C_FIELD(arg0, f32 *, 0x28) / var_f30)) {
                        if ((M2C_FIELD(arg0, f32 *, 0x24) / var_f31) >= lbl_80352098) {
                            var_f0_3 = lbl_803520B4;
                        } else {
                            var_f0_3 = lbl_803520BC;
                        }
                    } else {
                        var_f0_3 = (f32) ArcTan2();
                    }
                    M2C_FIELD(arg1, f32 *, 0) = var_f0_3;
                    if (lbl_80352098 == M2C_FIELD(arg0, f32 *, 0)) {
                        if (M2C_FIELD(arg0, f32 *, 0x10) >= lbl_80352098) {
                            var_f0_4 = lbl_803520B4;
                        } else {
                            var_f0_4 = lbl_803520BC;
                        }
                    } else {
                        var_f0_4 = (f32) ArcTan2();
                    }
                    M2C_FIELD(arg1, f32 *, 8) = var_f0_4;
                    return;
                }
                if (lbl_80352098 == M2C_FIELD(arg0, f32 *, 0x14)) {
                    if (M2C_FIELD(arg0, f32 *, 4) >= lbl_80352098) {
                        var_f0_5 = lbl_803520B4;
                    } else {
                        var_f0_5 = lbl_803520BC;
                    }
                } else {
                    var_f0_5 = (f32) ArcTan2();
                }
                M2C_FIELD(arg1, f32 *, 0) = var_f0_5;
                M2C_FIELD(arg1, f32 *, 8) = (f32) lbl_80352098;
                return;
            }
            goto block_32;
        }
        goto block_32;
    }
block_32:
    M2C_FIELD(arg1, f32 *, 0) = (f32) lbl_80352098;
    M2C_FIELD(arg1, f32 *, 4) = (f32) lbl_80352098;
    M2C_FIELD(arg1, f32 *, 8) = (f32) lbl_80352098;
}

void HSD_MtxGetTranslate(void *arg0, void *arg1) {
    M2C_FIELD(arg1, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
    M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x1C);
    M2C_FIELD(arg1, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x2C);
}

void fn_8010483C(void *arg0, void *arg1) {
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    f32 var_f1_4;
    f32 var_f1_5;
    f64 temp_f2;
    f64 temp_f2_10;
    f64 temp_f2_11;
    f64 temp_f2_12;
    f64 temp_f2_13;
    f64 temp_f2_14;
    f64 temp_f2_15;
    f64 temp_f2_2;
    f64 temp_f2_3;
    f64 temp_f2_4;
    f64 temp_f2_5;
    f64 temp_f2_6;
    f64 temp_f2_7;
    f64 temp_f2_8;
    f64 temp_f2_9;

    sp40 = M2C_FIELD(arg0, f32 *, 0);
    sp44 = M2C_FIELD(arg0, f32 *, 0x10);
    sp48 = M2C_FIELD(arg0, f32 *, 0x20);
    temp_f1 = fn_800CC960(&sp40);
    if (temp_f1 > lbl_803520C0) {
        var_f1 = lbl_8035209C / temp_f1;
        if (var_f1 > lbl_80352098) {
            temp_f2 = __frsqrte(var_f1);
            temp_f2_2 = lbl_803520A0 * temp_f2 * -(((f64) var_f1 * (temp_f2 * temp_f2)) - lbl_803520A8);
            temp_f2_3 = lbl_803520A0 * temp_f2_2 * -(((f64) var_f1 * (temp_f2_2 * temp_f2_2)) - lbl_803520A8);
            sp18 = (f32) ((f64) var_f1 * (lbl_803520A0 * temp_f2_3 * -(((f64) var_f1 * (temp_f2_3 * temp_f2_3)) - lbl_803520A8)));
            var_f1 = sp18;
        }
        M2C_FIELD(arg1, f32 *, 0) = (f32) (lbl_8035209C / var_f1);
        PSVECScale(&sp40, &sp40);
        sp34 = M2C_FIELD(arg0, f32 *, 4);
        sp38 = M2C_FIELD(arg0, f32 *, 0x14);
        sp3C = M2C_FIELD(arg0, f32 *, 0x24);
        PSVECDotProduct(&sp40, &sp34);
        PSVECScale(&sp40, &sp1C);
        PSVECSubtract(&sp34, &sp1C, &sp34);
        temp_f1_2 = fn_800CC960(&sp34);
        if (temp_f1_2 > lbl_803520C0) {
            var_f1_2 = lbl_8035209C / temp_f1_2;
            if (var_f1_2 > lbl_80352098) {
                temp_f2_4 = __frsqrte(var_f1_2);
                temp_f2_5 = lbl_803520A0 * temp_f2_4 * -(((f64) var_f1_2 * (temp_f2_4 * temp_f2_4)) - lbl_803520A8);
                temp_f2_6 = lbl_803520A0 * temp_f2_5 * -(((f64) var_f1_2 * (temp_f2_5 * temp_f2_5)) - lbl_803520A8);
                sp14 = (f32) ((f64) var_f1_2 * (lbl_803520A0 * temp_f2_6 * -(((f64) var_f1_2 * (temp_f2_6 * temp_f2_6)) - lbl_803520A8)));
                var_f1_2 = sp14;
            }
            M2C_FIELD(arg1, f32 *, 4) = (f32) (lbl_8035209C / var_f1_2);
            PSVECScale(&sp34, &sp34);
            sp28 = M2C_FIELD(arg0, f32 *, 8);
            sp2C = M2C_FIELD(arg0, f32 *, 0x18);
            sp30 = M2C_FIELD(arg0, f32 *, 0x28);
            PSVECDotProduct(&sp34, &sp28);
            PSVECScale(&sp34, &sp1C);
            PSVECSubtract(&sp28, &sp1C, &sp28);
            PSVECDotProduct(&sp40, &sp28);
            PSVECScale(&sp40, &sp1C);
            PSVECSubtract(&sp28, &sp1C, &sp28);
            var_f1_3 = fn_800CC960(&sp28);
            if (var_f1_3 > lbl_803520C0) {
                if (var_f1_3 > lbl_80352098) {
                    temp_f2_7 = __frsqrte(var_f1_3);
                    temp_f2_8 = lbl_803520A0 * temp_f2_7 * -(((f64) var_f1_3 * (temp_f2_7 * temp_f2_7)) - lbl_803520A8);
                    temp_f2_9 = lbl_803520A0 * temp_f2_8 * -(((f64) var_f1_3 * (temp_f2_8 * temp_f2_8)) - lbl_803520A8);
                    sp10 = (f32) ((f64) var_f1_3 * (lbl_803520A0 * temp_f2_9 * -(((f64) var_f1_3 * (temp_f2_9 * temp_f2_9)) - lbl_803520A8)));
                    var_f1_3 = sp10;
                }
                M2C_FIELD(arg1, f32 *, 8) = var_f1_3;
                PSVECCrossProduct(&sp34, &sp28, &sp1C);
                if (PSVECDotProduct(&sp40, &sp1C) < lbl_803520C8) {
                    M2C_FIELD(arg1, f32 *, 0) = (f32) ((f64) M2C_FIELD(arg1, f32 *, 0) * lbl_803520D0);
                    M2C_FIELD(arg1, f32 *, 4) = (f32) ((f64) M2C_FIELD(arg1, f32 *, 4) * lbl_803520D0);
                    M2C_FIELD(arg1, f32 *, 8) = (f32) ((f64) M2C_FIELD(arg1, f32 *, 8) * lbl_803520D0);
                }
            } else {
                M2C_FIELD(arg1, f32 *, 8) = (f32) lbl_80352098;
            }
        } else {
            M2C_FIELD(arg1, f32 *, 4) = (f32) lbl_80352098;
            sp28 = M2C_FIELD(arg0, f32 *, 8);
            sp2C = M2C_FIELD(arg0, f32 *, 0x18);
            sp30 = M2C_FIELD(arg0, f32 *, 0x28);
            PSVECDotProduct(&sp40, &sp28);
            PSVECScale(&sp40, &sp1C);
            PSVECSubtract(&sp28, &sp1C, &sp28);
            var_f1_4 = fn_800CC960(&sp28);
            if (var_f1_4 > lbl_803520C0) {
                if (var_f1_4 > lbl_80352098) {
                    temp_f2_10 = __frsqrte(var_f1_4);
                    temp_f2_11 = lbl_803520A0 * temp_f2_10 * -(((f64) var_f1_4 * (temp_f2_10 * temp_f2_10)) - lbl_803520A8);
                    temp_f2_12 = lbl_803520A0 * temp_f2_11 * -(((f64) var_f1_4 * (temp_f2_11 * temp_f2_11)) - lbl_803520A8);
                    spC = (f32) ((f64) var_f1_4 * (lbl_803520A0 * temp_f2_12 * -(((f64) var_f1_4 * (temp_f2_12 * temp_f2_12)) - lbl_803520A8)));
                    var_f1_4 = spC;
                }
                M2C_FIELD(arg1, f32 *, 8) = var_f1_4;
                return;
            }
            M2C_FIELD(arg1, f32 *, 8) = (f32) lbl_80352098;
        }
    } else {
        M2C_FIELD(arg1, f32 *, 0) = (f32) lbl_80352098;
        sp34 = M2C_FIELD(arg0, f32 *, 4);
        sp38 = M2C_FIELD(arg0, f32 *, 0x14);
        sp3C = M2C_FIELD(arg0, f32 *, 0x24);
        temp_f1_3 = fn_800CC960(&sp34);
        if (temp_f1_3 > lbl_803520C0) {
            var_f1_5 = lbl_8035209C / temp_f1_3;
            if (var_f1_5 > lbl_80352098) {
                temp_f2_13 = __frsqrte(var_f1_5);
                temp_f2_14 = lbl_803520A0 * temp_f2_13 * -(((f64) var_f1_5 * (temp_f2_13 * temp_f2_13)) - lbl_803520A8);
                temp_f2_15 = lbl_803520A0 * temp_f2_14 * -(((f64) var_f1_5 * (temp_f2_14 * temp_f2_14)) - lbl_803520A8);
                sp8 = (f32) ((f64) var_f1_5 * (lbl_803520A0 * temp_f2_15 * -(((f64) var_f1_5 * (temp_f2_15 * temp_f2_15)) - lbl_803520A8)));
                var_f1_5 = sp8;
            }
            M2C_FIELD(arg1, f32 *, 4) = (f32) (lbl_8035209C / var_f1_5);
            PSVECScale(&sp34, &sp34);
            sp28 = M2C_FIELD(arg0, f32 *, 8);
            sp2C = M2C_FIELD(arg0, f32 *, 0x18);
            sp30 = M2C_FIELD(arg0, f32 *, 0x28);
            PSVECDotProduct(&sp34, &sp28);
            PSVECScale(&sp34, &sp1C);
            PSVECSubtract(&sp28, &sp1C, &sp28);
            M2C_FIELD(arg1, f32 *, 8) = PSVECMag(&sp28);
            return;
        }
        M2C_FIELD(arg1, f32 *, 4) = (f32) lbl_80352098;
        sp28 = M2C_FIELD(arg0, f32 *, 8);
        sp2C = M2C_FIELD(arg0, f32 *, 0x18);
        sp30 = M2C_FIELD(arg0, f32 *, 0x28);
        M2C_FIELD(arg1, f32 *, 8) = PSVECMag(&sp28);
    }
}

void HSD_MkRotationMtx(void *arg0, void *arg1) {
    f32 temp_f31;
    f32 temp_f30;
    f32 temp_f29;
    f32 temp_f28;
    f32 temp_f27;
    f32 temp_f7;
    f32 temp_f6;
    f32 temp_f7_2;

    temp_f31 = (f32) Sin(M2C_FIELD(arg1, f32 *, 0));
    temp_f30 = (f32) Cos(M2C_FIELD(arg1, f32 *, 0));
    temp_f29 = (f32) Sin(M2C_FIELD(arg1, f32 *, 4));
    temp_f28 = (f32) Cos(M2C_FIELD(arg1, f32 *, 4));
    temp_f27 = (f32) Sin(M2C_FIELD(arg1, f32 *, 8));
    temp_f6 = (f32) Cos(M2C_FIELD(arg1, f32 *, 8));
    temp_f7 = temp_f31 * temp_f29;
    M2C_FIELD(arg0, f32 *, 0) = (f32) (temp_f28 * temp_f6);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) (temp_f28 * temp_f27);
    temp_f7_2 = temp_f30 * temp_f29;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) -temp_f29;
    M2C_FIELD(arg0, f32 *, 4) = (f32) ((temp_f6 * temp_f7) - (temp_f30 * temp_f27));
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) ((temp_f27 * temp_f7) + (temp_f30 * temp_f6));
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) lbl_80352098;
    M2C_FIELD(arg0, f32 *, 8) = (f32) ((temp_f6 * temp_f7_2) + (temp_f31 * temp_f27));
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) (temp_f31 * temp_f28);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) ((temp_f27 * temp_f7_2) - (temp_f31 * temp_f6));
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) (temp_f30 * temp_f28);
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_80352098;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_80352098;
}

void HSD_MtxSRT(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    f32 temp_f10;
    f32 temp_f3;
    f32 temp_f13;
    f32 temp_f1;
    f32 var_f23;
    f32 temp_f31;
    f32 temp_f30;
    f32 temp_f29;
    f32 temp_f2;
    f32 temp_f28;
    f32 temp_f27;
    f32 var_f0;
    f32 temp_f4;
    f32 var_f5;
    f32 temp_f12;
    f32 var_f7;
    f32 var_f22;
    f32 temp_f21;
    f32 temp_f8;
    f32 var_f9;
    f32 var_f10;
    f32 var_f11;
    f32 var_f6;

    temp_f31 = (f32) Sin(M2C_FIELD(arg2, f32 *, 0));
    temp_f30 = (f32) Cos(M2C_FIELD(arg2, f32 *, 0));
    temp_f29 = (f32) Sin(M2C_FIELD(arg2, f32 *, 4));
    temp_f28 = (f32) Cos(M2C_FIELD(arg2, f32 *, 4));
    temp_f27 = (f32) Sin(M2C_FIELD(arg2, f32 *, 8));
    temp_f1 = (f32) Cos(M2C_FIELD(arg2, f32 *, 8));
    var_f10 = M2C_FIELD(arg1, f32 *, 0);
    var_f11 = M2C_FIELD(arg1, f32 *, 4);
    temp_f12 = M2C_FIELD(arg1, f32 *, 8);
    var_f7 = var_f10;
    temp_f4 = var_f10;
    var_f5 = temp_f8 = var_f11;
    var_f9 = temp_f12;
    var_f6 = temp_f12;
    if (arg4 != NULL) {
        temp_f3 = M2C_FIELD(arg4, f32 *, 0);
        if (temp_f3 >= lbl_80352098) {
            var_f0 = lbl_8035209C / (temp_f3 + lbl_803520D8);
        } else {
            var_f0 = lbl_8035209C / (temp_f3 - lbl_803520D8);
        }
        temp_f2 = M2C_FIELD(arg4, f32 *, 4);
        if (temp_f2 >= lbl_80352098) {
            var_f23 = lbl_8035209C / (lbl_803520D8 + temp_f2);
        } else {
            var_f23 = lbl_8035209C / (temp_f2 - lbl_803520D8);
        }
        temp_f21 = M2C_FIELD(arg4, f32 *, 8);
        if (temp_f21 >= lbl_80352098) {
            var_f22 = lbl_8035209C / (lbl_803520D8 + temp_f21);
        } else {
            var_f22 = lbl_8035209C / (temp_f21 - lbl_803520D8);
        }
        var_f5 *= temp_f2 * var_f0;
        var_f6 *= temp_f21 * var_f0;
        var_f7 *= temp_f3 * var_f23;
        var_f9 *= temp_f21 * var_f23;
        var_f10 *= temp_f3 * var_f22;
        var_f11 *= temp_f2 * var_f22;
    }
    temp_f13 = temp_f31 * temp_f29;
    M2C_FIELD(arg0, f32 *, 0) = (f32) (temp_f1 * (temp_f4 * temp_f28));
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) (temp_f27 * (var_f7 * temp_f28));
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) (-var_f10 * temp_f29);
    M2C_FIELD(arg0, f32 *, 4) = (f32) (var_f5 * ((temp_f1 * temp_f13) - (temp_f30 * temp_f27)));
    temp_f10 = temp_f30 * temp_f29;
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) (temp_f8 * ((temp_f27 * temp_f13) + (temp_f30 * temp_f1)));
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) (temp_f28 * (var_f11 * temp_f31));
    M2C_FIELD(arg0, f32 *, 8) = (f32) (var_f6 * ((temp_f1 * temp_f10) + (temp_f31 * temp_f27)));
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) (var_f9 * ((temp_f27 * temp_f10) - (temp_f31 * temp_f1)));
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) (temp_f28 * (temp_f12 * temp_f30));
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg3, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_FIELD(arg3, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) M2C_FIELD(arg3, f32 *, 8);
}

void HSD_MtxSRTQuat(void *arg0, void *arg1, s32 arg2, void *arg3, void *arg4) {
    f32 sp2C;
    f32 sp28;
    f32 sp20;
    f32 sp18;
    f32 sp10;
    f32 spC;
    M2C_UNK sp8;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 var_f4;
    f32 var_f7;
    f32 var_f8;

    u32 tmp1 = M2C_FIELD(arg1, f32 *, 4);

    PSMTXScale(M2C_FIELD(arg1, f32 *, 0), (s32)tmp1, M2C_FIELD(arg1, f32 *, 8));
    PSMTXQuat(&sp8, arg2);
    if (arg4 != NULL) {
        temp_f2 = M2C_FIELD(arg4, f32 *, 0);
        M2C_ERROR(/* unknown instruction: cror eq, gt, eq */);
        if (temp_f2 == lbl_80352098) {
            var_f4 = lbl_8035209C / (lbl_803520D8 + temp_f2);
        } else {
            var_f4 = lbl_8035209C / (temp_f2 - lbl_803520D8);
        }
        temp_f3 = M2C_FIELD(arg4, f32 *, 4);
        M2C_ERROR(/* unknown instruction: cror eq, gt, eq */);
        if (temp_f3 == lbl_80352098) {
            var_f7 = lbl_8035209C / (lbl_803520D8 + temp_f3);
        } else {
            var_f7 = lbl_8035209C / (temp_f3 - lbl_803520D8);
        }
        temp_f2_2 = M2C_FIELD(arg4, f32 *, 8);
        M2C_ERROR(/* unknown instruction: cror eq, gt, eq */);
        if (temp_f2_2 == lbl_80352098) {
            var_f8 = lbl_8035209C / (lbl_803520D8 + temp_f2_2);
        } else {
            var_f8 = lbl_8035209C / (temp_f2_2 - lbl_803520D8);
        }
        spC *= temp_f3 * var_f4;
        temp_f0 = M2C_FIELD(arg4, f32 *, 4);
        sp10 *= temp_f0 * var_f4;
        temp_f1 = M2C_FIELD(arg4, f32 *, 0);
        sp18 *= temp_f1 * var_f7;
        sp28 *= temp_f1 * var_f8;
        sp2C *= temp_f0 * var_f8;
        sp20 *= M2C_FIELD(arg4, f32 *, 8) * var_f7;
    }
    PSMTXConcat(&sp8, arg0, arg0);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg3, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_FIELD(arg3, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) M2C_FIELD(arg3, f32 *, 8);
}

void HSD_MtxScaledAdd(void *arg0, void *arg1, void *arg2, f32 farg0) {
    M2C_FIELD(arg2, f32 *, 0) = (f32) ((farg0 * M2C_FIELD(arg0, f32 *, 0)) + M2C_FIELD(arg1, f32 *, 0));
    M2C_FIELD(arg2, f32 *, 4) = (f32) ((farg0 * M2C_FIELD(arg0, f32 *, 4)) + M2C_FIELD(arg1, f32 *, 4));
    M2C_FIELD(arg2, f32 *, 8) = (f32) ((farg0 * M2C_FIELD(arg0, f32 *, 8)) + M2C_FIELD(arg1, f32 *, 8));
    M2C_FIELD(arg2, f32 *, 0xC) = (f32) ((farg0 * M2C_FIELD(arg0, f32 *, 0xC)) + M2C_FIELD(arg1, f32 *, 0xC));
    M2C_FIELD(arg2, f32 *, 0x10) = (f32) ((farg0 * M2C_FIELD(arg0, f32 *, 0x10)) + M2C_FIELD(arg1, f32 *, 0x10));
    M2C_FIELD(arg2, f32 *, 0x14) = (f32) ((farg0 * M2C_FIELD(arg0, f32 *, 0x14)) + M2C_FIELD(arg1, f32 *, 0x14));
    M2C_FIELD(arg2, f32 *, 0x18) = (f32) ((farg0 * M2C_FIELD(arg0, f32 *, 0x18)) + M2C_FIELD(arg1, f32 *, 0x18));
    M2C_FIELD(arg2, f32 *, 0x1C) = (f32) ((farg0 * M2C_FIELD(arg0, f32 *, 0x1C)) + M2C_FIELD(arg1, f32 *, 0x1C));
    M2C_FIELD(arg2, f32 *, 0x20) = (f32) ((farg0 * M2C_FIELD(arg0, f32 *, 0x20)) + M2C_FIELD(arg1, f32 *, 0x20));
    M2C_FIELD(arg2, f32 *, 0x24) = (f32) ((farg0 * M2C_FIELD(arg0, f32 *, 0x24)) + M2C_FIELD(arg1, f32 *, 0x24));
    M2C_FIELD(arg2, f32 *, 0x28) = (f32) ((farg0 * M2C_FIELD(arg0, f32 *, 0x28)) + M2C_FIELD(arg1, f32 *, 0x28));
    M2C_FIELD(arg2, f32 *, 0x2C) = (f32) ((farg0 * M2C_FIELD(arg0, f32 *, 0x2C)) + M2C_FIELD(arg1, f32 *, 0x2C));
}

s32 HSD_FogAlloc(void) {
    s32 temp_r3;

    temp_r3 = fn_80105930(&lbl_8031EBA8);
    if (temp_r3 == 0) {
        __assert(&lbl_803501F0, 0x377, &lbl_803501F8);
    }
    return temp_r3;
}

void HSD_VecFree(u32 arg0) {
    if (arg0 != 0U) {
        HSD_ObjFree(&lbl_8031EBA8, arg0, &lbl_8031EBA8);
    }
}

s32 HSD_MtxAlloc(void) {
    s32 temp_r3;

    temp_r3 = fn_80105930(&lbl_8031EBD4);
    if (temp_r3 == 0) {
        __assert(&lbl_803501F0, 0x396, &lbl_803501FC);
    }
    return temp_r3;
}

void HSD_MtxFree(u32 arg0) {
    if (arg0 != 0U) {
        HSD_ObjFree(&lbl_8031EBD4, arg0, &lbl_8031EBD4);
    }
}
