/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

s32 fn_80010758(s32, s32, s32);
M2C_UNK HSD_ForeachAnim(s32, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, f64);
M2C_UNK HSD_LObjReqAnim(s32, f32);
M2C_UNK HSD_LObjAddAnim(s32, s32);
extern M2C_UNK HSD_AObjSetRate;
extern f32 lbl_80351008;
extern f64 lbl_80351010;
M2C_UNK HSD_LObjAnim(s32);
M2C_UNK HSD_LObjAddCurrent(s32);
s32 fn_800105CC(s32, s32, M2C_UNK *);
s32 HSD_JObjLoadJoint(s32);
extern M2C_UNK lbl_801DB4D8;
extern f64 lbl_80351018;
M2C_UNK fn_80005888(void *);
M2C_UNK HSD_JObjUnref(s32);
M2C_UNK fn_800105E8(s32, s32, s32, s32 *, s32 *, s32 *);
M2C_UNK HSD_FogReqAnim(s32, f32);
M2C_UNK HSD_JObjAddAnimAll(s32, s32, s32, s32);
extern f32 lbl_80351020;
M2C_UNK fn_80010640(s32, s32, s32, s32 *, s32 *, s32 *);
M2C_UNK HSD_JObjAnimAll(s32);
M2C_UNK fn_800FAEF0(s32, M2C_UNK, M2C_UNK, M2C_UNK);
s32 fn_80010E3C(s32);
extern M2C_UNK lbl_802BF0E0;
extern M2C_UNK lbl_802B0FC0;
s32 PadGetButton(M2C_UNK, void *);
f32 PadGetStickX(M2C_UNK);
f32 PadGetStickY(M2C_UNK, M2C_UNK *);
f32 PadGetSubStickX(M2C_UNK, void *);
f32 PadGetSubStickY(M2C_UNK, void *);
M2C_UNK PSVECNormalize(f32 *, f32 *);
f64 PSVECMag(f32 *, f32, f32);
f32 PSVECDotProduct(f32 *, s32 *);
f64 ArcCos();
extern M2C_UNK lbl_8015E9A0;
extern M2C_UNK lbl_802BF0C0;
extern s32 lbl_802BFD60;
extern s32 lbl_80350424;
extern f32 lbl_80351028;
extern f64 lbl_80351030;
extern f32 lbl_80351038;
extern f64 lbl_80351040;
extern f32 lbl_80351048;
extern f64 lbl_80351050;
extern f32 lbl_80351058;
extern void *lbl_803503F8;
extern s32 lbl_803503FC;
extern s32 lbl_803503F0;

void fn_800089A0(void *arg0, s32 arg1);
void fn_80008A18(void *arg0);
void fn_80008A3C(void *arg0);
void *fn_80008A60(void *arg0, s32 arg1, s32 arg2);
void *fn_80008AE4(void *arg0, s16 arg1);
void fn_80008B44(void *arg0, s32 arg1, f32 farg0);
void fn_80008BC8(void *arg0, s32 arg1, f32 farg0, f32 farg1);
void fn_80008C50(void *arg0);
void fn_80008C90(void *arg0);
void fn_80008CB4(void *arg0);
s32 fn_80008D18(void *arg0, void *arg1, void *arg2, M2C_UNK arg_sp0);
void fn_80008DBC(void);
void fn_80008DE4(s32 arg0);
void _hsdClassRelease(void);
void fn_80008E0C(void *arg0, s8 arg1);
void fn_80008EA4(void);
s32 fn_8000946C(s32 arg0, s32 arg1, s32 arg2, s32 arg4);
void fn_800094B4(s32 arg0, s32 arg1, s32 arg2, s32 arg4, s32 arg5);
void fn_80009510(s32 arg0, s32 arg1, s32 arg2, s32 arg4, s16 arg5);
u16 fn_80009544(s32 arg0, s32 arg1, s32 arg2, s32 arg4);
s32 fn_80009578(s32 arg0, s32 arg1, s32 arg2, s32 arg4);
u16 fn_800095D8(s32 arg0);
void fn_8000960C(s32 arg0);
s32 fn_80009634(s32 arg0, s32 *arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0);
s32 fn_80009850(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80009904(s32 arg0, s32 arg1, s32 arg2, s8 *arg3, s32 *arg4, M2C_UNK arg_sp0);
u16 fn_80009E5C(void *arg0, s16 arg1, s16 arg2);
s32 fn_80009F5C(void *arg0, s16 arg1, s16 arg2);
void fn_80009FB8(void *arg0, s16 arg1, s16 arg2, M2C_UNK arg_sp0);

void fn_800089A0(void *arg0, s32 arg1) {
    HSD_LObjAddAnim(M2C_FIELD(arg0, s32 *, 8), fn_80010758(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 0xC), arg1));
    HSD_LObjReqAnim(M2C_FIELD(arg0, s32 *, 8), lbl_80351008);
    HSD_ForeachAnim(M2C_FIELD(arg0, s32 *, 8), 7, 0xFFFF, &HSD_AObjSetRate, 1, lbl_80351010);
}

void fn_80008A18(void *arg0) {
    HSD_LObjAnim(M2C_FIELD(arg0, s32 *, 8));
}

void fn_80008A3C(void *arg0) {
    HSD_LObjAddCurrent(M2C_FIELD(arg0, s32 *, 8));
}

void *fn_80008A60(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 0xC) = arg2;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &lbl_801DB4D8;
    M2C_FIELD(arg0, s32 *, 4) = fn_800105CC(arg1, arg2, &lbl_801DB4D8);
    M2C_FIELD(arg0, s32 *, 8) = HSD_JObjLoadJoint(M2C_FIELD(arg0, s32 *, 4));
    HSD_ForeachAnim(M2C_FIELD(arg0, s32 *, 8), 6, 0xFFFF, &HSD_AObjSetRate, 1, lbl_80351018);
    return arg0;
}

void *fn_80008AE4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x10) = &lbl_801DB4D8;
        HSD_JObjUnref(M2C_FIELD(arg0, s32 *, 8));
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma peephole off
void fn_80008B44(void *arg0, s32 arg1, f32 farg0) {
    s32 sp10;
    s32 spC;
    s32 sp8;

    fn_800105E8(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 0xC), arg1, &sp10, &spC, &sp8);
    HSD_JObjAddAnimAll(M2C_FIELD(arg0, s32 *, 8), sp10, spC, sp8);
    HSD_FogReqAnim(M2C_FIELD(arg0, s32 *, 8), lbl_80351020);
    fn_80008C50((void *)(arg0));
}
#pragma pop

void fn_80008BC8(void *arg0, s32 arg1, f32 farg0, f32 farg1) {
    s32 sp10;
    s32 spC;
    s32 sp8;

    fn_80010640(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 0xC), arg1, &sp10, &spC, &sp8);
    HSD_JObjAddAnimAll(M2C_FIELD(arg0, s32 *, 8), sp10, spC, sp8);
    HSD_FogReqAnim(M2C_FIELD(arg0, s32 *, 8), farg1);
    fn_80008C50((void *)(arg0));
}

void fn_80008C50(void *arg0) {
    HSD_ForeachAnim((long)(M2C_FIELD(arg0, s32 *, 8)), (long)(6), (long)(0xFFFF), (long *)(&HSD_AObjSetRate), (long)(1), (double)(0));
}

void fn_80008C90(void *arg0) {
    HSD_JObjAnimAll(M2C_FIELD(arg0, s32 *, 8));
}

void fn_80008CB4(void *arg0) {
    fn_800FAEF0(M2C_FIELD(arg0, s32 *, 8), 0, 1, 0);
    fn_800FAEF0(M2C_FIELD(arg0, s32 *, 8), 0, 2, 0);
    fn_800FAEF0(M2C_FIELD(arg0, s32 *, 8), 0, 4, 0);
}

s32 fn_80008D18(void *arg0, void *arg1, void *arg2, M2C_UNK arg_sp0) {
    void *var_r31;
    void *var_r30;

    var_r31 = M2C_FIELD(arg2, void **, 0x10);
    var_r30 = M2C_FIELD(arg1, void **, 0x18);
loop_5:
    if (var_r31 == NULL) {
        return 0;
    }
    if (((u32) M2C_FIELD(var_r31, u32 *, -4) != 0U) && (fn_80010E3C(M2C_FIELD(arg0, s32 *, 0)) != 0)) {
        M2C_FIELD(arg0, void **, 4) = arg1;
        M2C_FIELD(arg0, void **, 8) = arg2;
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(var_r30, s32 *, 8);
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(var_r31, s32 *, 8);
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(var_r30, s32 *, 0xC);
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(var_r31, s32 *, 0xC);
        return 2;
    }
    var_r30 = M2C_FIELD(var_r30, void **, 4);
    var_r31 = M2C_FIELD(var_r31, void **, 4);
    goto loop_5;
}

void fn_80008DBC(void) {
    M2C_FIELD(&lbl_802BF0E0, s32 *, 0) = 0;
    M2C_FIELD(&lbl_802BF0E0, s32 *, 4) = 0;
    M2C_FIELD(&lbl_802BF0E0, s8 *, 8) = 0x50;
    M2C_FIELD(&lbl_802BF0E0, s8 *, 9) = 0x14;
}

void fn_80008DE4(s32 arg0) {
    M2C_FIELD(&lbl_802B0FC0, s8 *, 0) = 0;
    M2C_FIELD(&lbl_802BF0E0, s32 *, 0xC) = arg0;
    M2C_FIELD(&lbl_802B0FC0, s8 *, 1) = 0;
    M2C_FIELD(&lbl_802B0FC0, s32 *, 4) = 0;
}

void _hsdClassRelease(void) {

}

void fn_80008E0C(void *arg0, s8 arg1) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r5;

    temp_r5 = M2C_FIELD(arg0, u8 *, 0);
    var_r0 = (s8) temp_r5;
    if ((s8) temp_r5 < 0) {
        var_r0 = -var_r0;
    }
    if (var_r0 < arg1) {
        M2C_FIELD(arg0, u8 *, 0) = 0U;
    }
    temp_r4 = M2C_FIELD(arg0, u8 *, 1);
    var_r0_2 = (s8) temp_r4;
    if ((s8) temp_r4 < 0) {
        var_r0_2 = -var_r0_2;
    }
    if (var_r0_2 < arg1) {
        M2C_FIELD(arg0, u8 *, 1) = 0U;
    }
    temp_r4_2 = M2C_FIELD(arg0, u8 *, 2);
    var_r0_3 = (s8) temp_r4_2;
    if ((s8) temp_r4_2 < 0) {
        var_r0_3 = -var_r0_3;
    }
    if (var_r0_3 < arg1) {
        M2C_FIELD(arg0, u8 *, 2) = 0U;
    }
    temp_r4_3 = M2C_FIELD(arg0, u8 *, 3);
    var_r0_4 = (s8) temp_r4_3;
    if ((s8) temp_r4_3 < 0) {
        var_r0_4 = -var_r0_4;
    }
    if (var_r0_4 < arg1) {
        M2C_FIELD(arg0, u8 *, 3) = 0U;
    }
}

void fn_80008EA4(void) {
    s32 sp24;
    s32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f31;
    f32 temp_f31_2;
    f32 temp_f7;
    f32 temp_f8;
    f32 var_f0;
    f64 temp_f1;
    f64 temp_f5;
    s32 temp_r0_2;
    s32 temp_r30_2;
    s32 temp_r31;
    s32 temp_r4;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r5_3;
    s32 temp_r6;
    s32 var_r29;
    s8 *temp_r30;
    u8 temp_r0;
    void *temp_r3;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r5;
    void *temp_r5_2;

    temp_f31 = lbl_80351028 / (f32) (u8) M2C_FIELD(&lbl_802BF0E0, u8 *, 8);
    var_r29 = lbl_80350424;
    M2C_FIELD(&lbl_802BF0E0, s32 *, 0) = (s32) lbl_80350424;
    sp8 = M2C_FIELD(&lbl_8015E9A0, s32 *, 0);
    spC = M2C_FIELD(&lbl_8015E9A0, s32 *, 4);
    sp10 = M2C_FIELD(&lbl_8015E9A0, s32 *, 8);
    if ((u32) M2C_FIELD(&lbl_802BF0E0, u32 *, 0xC) == 0U) {
        var_r29 = lbl_80350424 % 7200;
        if ((u32) var_r29 < 0x1C20U) {
            if (((s32) lbl_802BFD60 != 1) && (var_r29 >= 0x1337)) {
                temp_r4 = var_r29 * 8;
                *(&lbl_802B0FC0 + temp_r4) = 0;
                temp_r3 = &lbl_802B0FC0 + temp_r4;
                M2C_FIELD(temp_r3, u8 *, 1) = 0;
                M2C_FIELD(temp_r3, u8 *, 2) = 0;
                M2C_FIELD(temp_r3, u8 *, 3) = 0;
                M2C_FIELD(temp_r3, s32 *, 4) = 0;
            } else {
                temp_r31 = var_r29 * 8;
                /* draft: did not compile: temp_r30 = &lbl_802B0FC0 + temp_r31; */
                *temp_r30 = (u8) PadGetStickX(0);
                temp_r4_2 = &lbl_802B0FC0 + temp_r31;
                M2C_FIELD(temp_r4_2, u8 *, 1) = (u8) PadGetStickY(0, &lbl_802B0FC0);
                temp_r4_3 = &lbl_802B0FC0 + temp_r31;
                M2C_FIELD(temp_r4_3, u8 *, 2) = (u8) PadGetSubStickX(0, temp_r4_2);
                temp_r4_4 = &lbl_802B0FC0 + temp_r31;
                M2C_FIELD(temp_r4_4, u8 *, 3) = (u8) PadGetSubStickY(0, temp_r4_3);
                temp_r5 = &lbl_802B0FC0 + temp_r31;
                M2C_FIELD(temp_r5, s32 *, 4) = PadGetButton(0, temp_r4_4);
                fn_80008E0C((void *)(temp_r30), (signed char)(M2C_FIELD(&lbl_802BF0E0, u8 *, 9)));
            }
        }
    }
    temp_r30_2 = var_r29 * 8;
    temp_r5_2 = &lbl_802B0FC0 + temp_r30_2;
    temp_r0 = M2C_FIELD(temp_r5_2, u8 *, 3);
    temp_f8 = temp_f31 * (f32) (u8) *(&lbl_802B0FC0 + temp_r30_2);
    temp_f5 = (((f32) lbl_80351030 - temp_f8) >= 0.0f) ? temp_f8 : lbl_80351028;
    temp_f7 = temp_f31 * (f32) (u8) M2C_FIELD(temp_r5_2, u8 *, 1);
    temp_f2 = (f32) temp_f5;
    sp24 = (u8) temp_r0 ^ 0x80000000;
    sp20 = 0x43300000;
    M2C_FIELD(&lbl_802BF0C0, f32 *, 0) = temp_f8;
    M2C_FIELD(&lbl_802BF0C0, f32 *, 0) = (f32) temp_f5;
    M2C_FIELD(&lbl_802BF0C0, f32 *, 4) = temp_f7;
    M2C_FIELD(&lbl_802BF0C0, f32 *, 8) = (f32) (temp_f31 * (f32) (u8) M2C_FIELD(temp_r5_2, u8 *, 2));
    M2C_FIELD(&lbl_802BF0C0, f32 *, 0xC) = (f32) (temp_f31 * (f32) (u8) temp_r0);
    M2C_FIELD(&lbl_802BF0C0, f32 *, 0) = (f32) (((temp_f2 - (f32) lbl_80351040) >= 0.0f) ? temp_f2 : lbl_80351038);
    if (temp_f7 > (f32) lbl_80351030) {
        M2C_FIELD(&lbl_802BF0C0, f32 *, 4) = (f32) lbl_80351028;
    }
    if (M2C_FIELD(&lbl_802BF0C0, f32 *, 4) < (f32) lbl_80351040) {
        M2C_FIELD(&lbl_802BF0C0, f32 *, 4) = (f32) lbl_80351038;
    }
    sp1C = M2C_FIELD(&lbl_802BF0C0, f32 *, 4);
    temp_f31_2 = M2C_FIELD(&lbl_802BF0C0, f32 *, 0x10);
    sp14 = M2C_FIELD(&lbl_802BF0C0, f32 *, 0);
    sp18 = lbl_80351048;
    temp_f1 = PSVECMag(&sp14, M2C_FIELD(&lbl_802BF0C0, f32 *, 4), M2C_FIELD(&lbl_802BF0C0, f32 *, 0));
    M2C_FIELD(&lbl_802BF0C0, f32 *, 0x10) = (f32) temp_f1;
    if ((f32) temp_f1 > (f32) lbl_80351030) {
        M2C_FIELD(&lbl_802BF0C0, f32 *, 0x10) = (f32) lbl_80351028;
    }
    M2C_FIELD(&lbl_802BF0C0, f32 *, 0x14) = (f32) (M2C_FIELD(&lbl_802BF0C0, f32 *, 0x10) - temp_f31_2);
    if (M2C_FIELD(&lbl_802BF0C0, f32 *, 0x10) > (f32) lbl_80351050) {
        PSVECNormalize(&sp14, &sp14);
        temp_f1_2 = PSVECDotProduct(&sp14, &sp8);
        M2C_ERROR(/* unknown instruction: cror eq, gt, eq */);
        if (temp_f1_2 == lbl_80351028) {
            var_f0 = lbl_80351048;
        } else {
            M2C_ERROR(/* unknown instruction: cror eq, lt, eq */);
            if (temp_f1_2 == lbl_80351038) {
                var_f0 = lbl_80351058;
            } else {
                var_f0 = (f32) ArcCos();
            }
        }
        M2C_FIELD(&lbl_802BF0C0, f32 *, 0x18) = var_f0;
    } else {
        M2C_FIELD(&lbl_802BF0C0, f32 *, 0x18) = (f32) lbl_80351048;
    }
    temp_r0_2 = M2C_FIELD((&lbl_802B0FC0 + temp_r30_2), s32 *, 4);
    M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) = 0;
    M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) = 0;
    if (temp_r0_2 & 0x100) {
        M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) = 0x10;
    }
    if (temp_r0_2 & 0x200) {
        M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) = (s32) (M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) | 0x20);
    }
    if (temp_r0_2 & 0x400) {
        M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) = (s32) (M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) | 0x40);
    }
    if (temp_r0_2 & 0x800) {
        M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) = (s32) (M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) | 0x80);
    }
    if (temp_r0_2 & 0x10000) {
        M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) = (s32) (M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) | 0x1000);
    }
    if (temp_r0_2 & 0x20000) {
        M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) = (s32) (M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) | 0x2000);
    }
    if (temp_r0_2 & 0x40000) {
        M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) = (s32) (M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) | 0x4000);
    }
    if (temp_r0_2 & 0x80000) {
        M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) = (s32) (M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) | 0x8000);
    }
    if (var_r29 > 0) {
        temp_r4_5 = M2C_FIELD((&lbl_802B0FC0 + temp_r30_2), s32 *, -4);
        temp_r5_3 = ~(temp_r4_5 | temp_r4_5);
        temp_r6 = temp_r5_3 & temp_r0_2;
        if (temp_r6 & 0x100) {
            M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) = (s32) (M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) | 1);
        }
        if (temp_r6 & 0x200) {
            M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) = (s32) (M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) | 2);
        }
        if (temp_r6 & 0x400) {
            M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) = (s32) (M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) | 4);
        }
        if (temp_r6 & 0x800) {
            M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) = (s32) (M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) | 8);
        }
        if (temp_r6 & 0x10000) {
            M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) = (s32) (M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) | 0x10000);
        }
        if (temp_r6 & 0x20000) {
            M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) = (s32) (M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) | 0x20000);
        }
        if (temp_r6 & 0x40000) {
            M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) = (s32) (M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) | 0x40000);
        }
        if (temp_r6 & 0x80000) {
            M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) = (s32) (M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) | 0x80000);
        }
        temp_r4_6 = temp_r5_3 | temp_r0_2;
        if (!(temp_r4_6 & 0x100)) {
            M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) = (s32) (M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) | 0x100);
        }
        if (!(temp_r4_6 & 0x200)) {
            M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) = (s32) (M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) | 0x200);
        }
        if (!(temp_r4_6 & 0x400)) {
            M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) = (s32) (M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) | 0x400);
        }
        if (!(temp_r4_6 & 0x800)) {
            M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) = (s32) (M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) | 0x800);
        }
        if (!(temp_r4_6 & 0x10000)) {
            M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) = (s32) (M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) | 0x100000);
        }
        if (!(temp_r4_6 & 0x20000)) {
            M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) = (s32) (M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) | 0x200000);
        }
        if (!(temp_r4_6 & 0x40000)) {
            M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) = (s32) (M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) | 0x400000);
        }
        if (!(temp_r4_6 & 0x80000)) {
            M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) = (s32) (M2C_FIELD(&lbl_802BF0C0, s32 *, 0x1C) | 0x800000);
        }
    }
}

s32 fn_8000946C(s32 arg0, s32 arg1, s32 arg2, s32 arg4) { return 0; } /* draft: stub */

void fn_800094B4(s32 arg0, s32 arg1, s32 arg2, s32 arg4, s32 arg5) {
    s32 temp_r3;
    s32 temp_r4;
    u8 temp_r5;

    temp_r4 = (arg0 >> 3) << 5;
    temp_r3 = ((arg1 >> 3) * ((s32) (arg2 << 5) >> 3)) + ((s32) (arg0 & 7) >> 1) + ((arg1 * 4) & 0x1C) + arg4;
    /* draft: did not compile: temp_r5 = *(temp_r4 + temp_r3); */
    if (arg0 & 1) {
        /* draft: did not compile: *(temp_r4 + temp_r3) = (temp_r5 & 0xF0) | arg5; */
        return;
    }
    /* draft: did not compile: *(temp_r4 + temp_r3) = ((arg5 * 0x10) & 0xFF0 & ~0xF) | (temp_r5 & 0xF); */
}

void fn_80009510(s32 arg0, s32 arg1, s32 arg2, s32 arg4, s16 arg5) { } /* draft: stub */

u16 fn_80009544(s32 arg0, s32 arg1, s32 arg2, s32 arg4) { return 0; } /* draft: stub */

s32 fn_80009578(s32 arg0, s32 arg1, s32 arg2, s32 arg4) { return 0; } /* draft: stub */

u16 fn_800095D8(s32 arg0) {
    return (u16) ((u32) ((((((M2C_FIELD(lbl_803503F8, u8 *, 1) << 0x10) & ~0xFF000000) | (M2C_FIELD(lbl_803503F8, u8 *, 0) << 0x18)) & ~0xFF00) | ((M2C_FIELD(lbl_803503F8, u8 *, 2) << 8) & 0xFF00)) << lbl_803503FC) >> (0x20 - arg0));
}

void fn_8000960C(s32 arg0) {
    u32 temp_r5;

    lbl_803503FC += arg0;
    /* draft: did not compile: lbl_803503F8 += lbl_803503FC >> 3U; */
    lbl_803503FC = lbl_803503FC & 7;
}

s32 fn_80009634(s32 arg0, s32 *arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

s32 fn_80009850(s32 arg0, s32 arg1, s32 arg2, s32 arg3) { return 0; } /* draft: stub */

void fn_80009904(s32 arg0, s32 arg1, s32 arg2, s8 *arg3, s32 *arg4, M2C_UNK arg_sp0) { } /* draft: stub */

u16 fn_80009E5C(void *arg0, s16 arg1, s16 arg2) { return 0; } /* draft: stub */

s32 fn_80009F5C(void *arg0, s16 arg1, s16 arg2) {
    s16 temp_r0;
    s32 var_ctr;
    void *var_r3;

    var_r3 = arg0;
    temp_r0 = M2C_FIELD(var_r3, s32 *, 0x2E050);
    var_ctr = temp_r0;
    if (temp_r0 > 0) {
loop_1:
        if ((M2C_FIELD(var_r3, s16 *, 0x8000) == arg2) && ((s16) M2C_FIELD(var_r3, s16 *, 0x8002) <= arg1) && ((s16) M2C_FIELD(var_r3, s16 *, 0x8004) >= arg1)) {
            return 0;
        }
        /* draft: did not compile: var_r3 += 6; */
        var_ctr -= 1;
        if (var_ctr == 0) {
            /* Duplicate return node #6. Try simplifying control flow for better match */
            return 1;
        }
        goto loop_1;
    }
    return 1;
}

void fn_80009FB8(void *arg0, s16 arg1, s16 arg2, M2C_UNK arg_sp0) { } /* draft: stub */
