/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

extern f32 lbl_803514B4;
extern f32 lbl_803514B8;
M2C_UNK fn_80017034(void *, f32 *, f32 *);
u8 fn_8002BB24(s32);
f32 fn_800711C0(f32, f32);
f32 method_getAspect(s32);
f64 Tan(f32);
extern s32 lbl_8031EA64;
extern s32 lbl_803504F0;
extern f32 lbl_803514A8;
extern f64 lbl_803514C0;
extern f64 lbl_803514C8;
extern f32 lbl_803514D0;
extern f32 lbl_803514D4;
extern f64 lbl_803514D8;
extern f64 lbl_803514E0;
extern f32 lbl_803514E8;
f32 *fn_80016CB8(void *);
M2C_UNK fn_80016FAC(void *, f32 *);
f32 fn_8007119C(f32, f32, f32);
M2C_UNK fn_80075574(s32 *, f32 *, f32 *);
s32 *fn_8007B144();
s32 *fn_800A716C(s32, M2C_UNK);
M2C_UNK PSMTXMultVec();
M2C_UNK PSVECSubtract(f32 *, f32 *, M2C_UNK *, f32, f32, f32, f32);
M2C_UNK PSVECNormalize(M2C_UNK *, M2C_UNK *);
f32 fn_800CC960(f32 *);
f32 PSVECDotProduct(f32 *, f32 *);
extern f32 lbl_803514EC;
extern f32 lbl_803514F0;
extern f32 lbl_803514F4;
extern f32 lbl_803514F8;
extern f32 lbl_80351500;
extern f32 lbl_80351504;
extern f32 lbl_80351508;
extern f32 lbl_8035150C;
extern f32 lbl_80351510;
extern f32 lbl_80351514;
extern f32 lbl_80351518;
extern f32 lbl_8035151C;
extern f32 lbl_80351520;
extern f32 lbl_80351524;
extern f32 lbl_80351528;
extern f32 lbl_8035152C;
extern f32 lbl_80351530;
extern f32 lbl_80351534;
extern f32 lbl_80351538;
extern f32 lbl_8035153C;
extern f32 lbl_80351540;
extern f32 lbl_80351544;
extern f32 lbl_80351548;
extern f32 lbl_8035154C;
extern f32 lbl_80351550;
extern f32 lbl_80351554;
extern f32 lbl_80351558;
extern f32 lbl_8035155C;
s32 fn_8001741C(void *);
u8 IsDialogShown(s32);
f32 PadGetNormalStickX(M2C_UNK);
f32 PadGetNormalStickY(M2C_UNK);
f32 PadGetSubStickX(M2C_UNK);
f32 PadGetSubStickY(M2C_UNK);
f32 HSD_CObjGetFov(s32);
extern f32 lbl_80351560;
extern f32 lbl_80351564;
s32 get_up_vector_for_viewing_mtx();
M2C_UNK fn_80020B20(M2C_UNK *, M2C_UNK *);
M2C_UNK fn_80020B40(s32, M2C_UNK *, M2C_UNK *);
M2C_UNK fn_80020D4C(s32, M2C_UNK *, M2C_UNK *);
M2C_UNK fn_80020F58(s32, M2C_UNK *, M2C_UNK *);
extern s32 lbl_803504B8;
extern s32 lbl_803504BC;
extern s32 lbl_803504C0;
extern s8 lbl_803504C4;
M2C_UNK fn_80020700();
M2C_UNK fn_80020A64(M2C_UNK *, s32, s32 *);
M2C_UNK fn_80005888(void **);
M2C_UNK fn_800146F0(void **, M2C_UNK);
M2C_UNK fn_80014798(void **, M2C_UNK *, M2C_UNK *);
M2C_UNK fn_8001D708(void **, s32, s32);
M2C_UNK fn_8002082C(void **, s32, void **);
M2C_UNK fn_800208F4(void **, void **);
M2C_UNK fn_80020E54(void **, s32, void **);
s32 *fn_800A13DC(s32);
s32 strlen(s32);
extern M2C_UNK lbl_80221D48;
M2C_UNK fn_80020764(void **, s32, void **);
M2C_UNK fn_80020C48(void **, s32, void **);
s32 *fn_8009A314(s32);
M2C_UNK fn_80020A10(void **);
M2C_UNK fn_80020B60();
M2C_UNK fn_80020D6C();
M2C_UNK fn_800CDD74(s32, M2C_UNK *);
extern M2C_UNK lbl_802C0208;
M2C_UNK DVDClose(void *, s32 *);
M2C_UNK OSDisableInterrupts();
M2C_UNK OSRestoreInterrupts();
M2C_UNK *get_up_vector_for_viewing_mtx_inner(M2C_UNK);
s32 fn_80025444(s32);
s32 fn_80038264(s32);
M2C_UNK fn_800C5B7C(M2C_UNK *, M2C_UNK, M2C_UNK *);
s32 strncmp(s32, M2C_UNK *, M2C_UNK);
extern M2C_UNK lbl_80221D54;
extern M2C_UNK lbl_8034E778;
extern M2C_UNK lbl_8034E780;
extern s32 arg_sp14;

void fn_8001E644(void *arg0, f32 *arg1, f32 *arg2);
void fn_8001E658(void *arg0, u8 arg1, u8 arg2);
void fn_8001E6D0(void *arg0);
void fn_8001E6DC(f32 *arg1, f32 *arg2);
void fn_8001E6F0(void *arg0, void *arg1, f32 farg0, f32 farg1);
s32 fn_8001EB5C(void *arg0, s32 arg1, void *arg2, f32 farg0, f32 farg1);
void fn_8001F5D8(void *arg0, s32 arg1);
void fn_8001F818(void);
s32 fn_8001F89C(void *arg0);
void **fn_8001FA14(void **arg0, s16 arg1);
void fn_8001FAAC(s32 arg0, s32 arg1);
void fn_8001FAE8(s32 **arg0, s32 arg2, s32 arg3);
void fn_8001FCC0(s32 arg0, s32 arg1);
void fn_8001FCFC(s32 **arg0, s32 arg2, s32 arg3);
void GetMotionEndFrame(s32 arg0, s32 arg1);
void fn_8001FF08(s32 **arg0, s32 arg1, s32 arg2);
void fn_8001FFF4(s32 **arg0, s32 arg1);
void fn_80020054(s32 arg0);
void fn_8002007C(s32 arg0, s32 arg1);
void fn_80020108(void *arg0);
s32 IsModelLoaded(s32 arg0);
void fn_800202C0(void);
void fn_800202E4(void *arg0);
void fn_80020358(s32 arg0, void *arg1);
void ReadBmp(void *arg0, s32 arg1);

void fn_8001E644(void *arg0, f32 *arg1, f32 *arg2) {
    *arg1 = M2C_FIELD(arg0, f32 *, 0x20);
    *arg2 = M2C_FIELD(arg0, f32 *, 0x24);
}

void fn_8001E658(void *arg0, u8 arg1, u8 arg2) {
    if ((((u8) M2C_FIELD(arg0, u8 *, 0x3C) == 0) && (arg1 != 0)) || (((u8) M2C_FIELD(arg0, u8 *, 0x3D) == 0) && (arg2 != 0))) {
        fn_8001E6D0(arg0);
    }
    M2C_FIELD(arg0, u8 *, 0x3C) = arg1;
    M2C_FIELD(arg0, u8 *, 0x3D) = arg2;
}

void fn_8001E6D0(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x40) = 1;
}

void fn_8001E6DC(f32 *arg1, f32 *arg2) {
    *arg1 = lbl_803514B4;
    *arg2 = lbl_803514B8;
}

void fn_8001E6F0(void *arg0, void *arg1, f32 farg0, f32 farg1) {
    f32 spC;
    f32 sp8;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f23;
    f32 temp_f26_2;
    f32 temp_f27;
    f32 temp_f28;
    f32 temp_f29;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f30;
    f32 temp_f31;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    f32 var_f1;
    f32 var_f22;
    f32 var_f23;
    f32 var_f24;
    f32 var_f25;
    f32 temp_f26;

    temp_f31 = lbl_803514B8 * method_getAspect(M2C_FIELD(arg1, s32 *, 0x60));
    temp_f29 = (f32) -((((f64) M2C_FIELD(arg0, f32 *, 0x24) / lbl_803514C8) * (f64) lbl_803514B8) - (f64) lbl_803514B8);
    temp_f30 = (f32) -(((f64) M2C_FIELD(arg0, f32 *, 0x20) * lbl_803514C0 * (f64) temp_f31) - (f64) temp_f31);
    if ((u8) M2C_FIELD(arg0, u8 *, 0x40) != 0) {
        temp_f0 = -temp_f30;
        M2C_FIELD(arg0, u8 *, 0x40) = 0U;
        temp_f1 = M2C_FIELD(arg0, f32 *, 8);
        if (temp_f1 < temp_f0) {
            M2C_FIELD(arg0, f32 *, 8) = temp_f0;
        } else if (temp_f30 < temp_f1) {
            M2C_FIELD(arg0, f32 *, 8) = temp_f30;
        }
        temp_f0_2 = -temp_f29;
        temp_f1_2 = M2C_FIELD(arg0, f32 *, 0xC);
        if (temp_f1_2 < temp_f0_2) {
            M2C_FIELD(arg0, f32 *, 0xC) = temp_f0_2;
        } else if (temp_f29 < temp_f1_2) {
            M2C_FIELD(arg0, f32 *, 0xC) = temp_f29;
        }
    }
    temp_f27 = M2C_FIELD(arg0, f32 *, 8);
    temp_f26 = M2C_FIELD(arg0, f32 *, 0xC);
    var_f25 = temp_f27;
    var_f24 = temp_f26;
    temp_f28 = M2C_FIELD(arg0, f32 *, 0x1C);
    if ((f32) fabs(farg0) > lbl_803514D4) {
        var_f25 = (farg0 * lbl_803514D0) + temp_f27;
    }
    if ((f32) fabs(farg1) > lbl_803514D4) {
        var_f24 += farg1 * lbl_803514D0;
    }
    if (lbl_8031EA64 & 8) {
        var_f24 = (f32) ((f64) var_f24 + lbl_803514D8);
    }
    if (lbl_8031EA64 & 4) {
        var_f24 = (f32) ((f64) var_f24 - lbl_803514D8);
    }
    if (lbl_8031EA64 & 2) {
        var_f25 = (f32) ((f64) var_f25 + lbl_803514E0);
    }
    if (lbl_8031EA64 & 1) {
        var_f25 = (f32) ((f64) var_f25 - lbl_803514E0);
    }
    var_f22 = lbl_803514A8;
    var_f23 = var_f22;
    if (fn_8002BB24(lbl_803504F0) == 0) {
        M2C_ERROR(/* unknown instruction: cror eq, lt, eq */);
        if (((f32) fabs(temp_f27) == temp_f30) && ((f32) fabs(var_f25) > temp_f30)) {
            if (var_f25 > temp_f27) {
                var_f23 = var_f25 - temp_f30;
                var_f25 = temp_f30;
            } else {
                var_f23 = var_f25 + temp_f30;
                var_f25 = -temp_f30;
            }
        }
        M2C_ERROR(/* unknown instruction: cror eq, lt, eq */);
        if (((f32) fabs(temp_f26) == temp_f29) && ((f32) fabs(var_f24) > temp_f29)) {
            if (var_f24 > temp_f26) {
                var_f22 = var_f24 - temp_f29;
                var_f24 = temp_f29;
            } else {
                var_f22 = var_f24 + temp_f29;
                var_f24 = -temp_f29;
            }
        }
    }
    if (lbl_803514A8 == var_f23) {
        sp8 = lbl_803514A8;
    } else {
        temp_f26_2 = fn_800711C0(temp_f30, temp_f28);
        temp_f1_3 = fn_800711C0(var_f23 + var_f25, temp_f28);
        sp8 = temp_f1_3;
        if (var_f23 > lbl_803514A8) {
            var_f1 = (f32) temp_f1_3 - temp_f26_2;
        } else {
            var_f1 = (f32) temp_f1_3 + temp_f26_2;
        }
        sp8 = var_f1;
        sp8 = -(f32) var_f1;
    }
    if (lbl_803514A8 == var_f22) {
        spC = lbl_803514A8;
    } else {
        temp_f23 = fn_800711C0(temp_f29, temp_f28);
        temp_f1_4 = fn_800711C0(var_f22 + var_f24, temp_f28);
        spC = temp_f1_4;
        if (var_f22 > lbl_803514A8) {
            spC = (f32) temp_f1_4 - temp_f23;
        } else {
            spC = (f32) temp_f1_4 + temp_f23;
        }
    }
    if ((lbl_803514A8 != spC) || (lbl_803514A8 != sp8)) {
        if ((u8) M2C_FIELD(arg0, u8 *, 0x3D) == 0) {
            fn_80017034(arg1, &spC, &sp8);
        }
        temp_f22 = (f32) fabs(sp8);
        if (temp_f22 > lbl_803514E8) {
            temp_f2 = (f32) (((f64) temp_f28 * Tan(temp_f22 + fn_800711C0(temp_f30, temp_f28))) - (f64) temp_f30);
            var_f25 += (-sp8 >= 0.0f) ? temp_f2 : -temp_f2;
        }
        temp_f22_2 = (f32) fabs(spC);
        if (temp_f22_2 > lbl_803514E8) {
            temp_f2_2 = (f32) (((f64) temp_f28 * Tan(temp_f22_2 + fn_800711C0(temp_f29, temp_f28))) - (f64) temp_f29);
            var_f24 += (-spC >= 0.0f) ? -temp_f2_2 : temp_f2_2;
        }
    }
    temp_f4 = -temp_f31;
    temp_f2_3 = ((var_f25 - temp_f31) >= 0.0f) ? temp_f31 : var_f25;
    M2C_FIELD(arg0, f32 *, 8) = (f32) (((temp_f4 - temp_f2_3) >= 0.0f) ? temp_f4 : temp_f2_3);
    temp_f5 = -lbl_803514B8;
    temp_f3 = ((var_f24 - lbl_803514B8) >= 0.0f) ? lbl_803514B8 : var_f24;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) (((temp_f5 - temp_f3) >= 0.0f) ? temp_f5 : temp_f3);
}

s32 fn_8001EB5C(void *arg0, s32 arg1, void *arg2, f32 farg0, f32 farg1) { return 0; } /* draft: stub */

#pragma push
#pragma dont_inline on
void fn_8001F5D8(void *arg0, s32 arg1) {
    f32 temp_f31;
    f32 temp_f30;
    f32 temp_f29;
    f32 temp_f1_2;
    f32 temp_f1;
    s32 temp_cr0_eq;
    void *temp_r3;

    if (((s32) M2C_FIELD(arg0, s32 *, 0) != 0) && (temp_r3 = fn_8007B144(), ((temp_r3 == NULL) == 0))) {
        temp_cr0_eq = (u8) M2C_FIELD(temp_r3, u8 *, 0x1DC) == 0;
        M2C_FIELD(temp_r3, u8 *, 0x1DC) = 0U;
        if (temp_cr0_eq == 0) {
            fn_8001E6D0(arg0);
        }
        if ((u8) M2C_FIELD(arg0, u8 *, 0x3C) == 0) {
            M2C_FIELD(temp_r3, f32 *, 0x1D8) = 0.0f;
            return;
        }
        temp_f1 = HSD_CObjGetFov(M2C_FIELD(temp_r3, s32 *, 0x60));
        if (temp_f1 != M2C_FIELD(arg0, f32 *, 0x18)) {
            M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (lbl_803514B8 / (f32) Tan(lbl_80351560 * temp_f1 * lbl_8035150C));
            M2C_FIELD(arg0, f32 *, 0x18) = temp_f1;
        }
        temp_f31 = PadGetNormalStickX(0);
        temp_f30 = PadGetNormalStickY(0);
        temp_f29 = PadGetSubStickX(0);
        temp_f1_2 = PadGetSubStickY(0);
        if ((((temp_f29 * temp_f29) + (temp_f1_2 * temp_f1_2)) > lbl_80351564) && ((u8) M2C_FIELD(arg0, u8 *, 0x3E) == 0) && ((u8) M2C_FIELD(arg0, u8 *, 0x41) != 0)) {
            M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_803514A8;
            M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_803514A8;
            M2C_FIELD(arg0, u8 *, 0x3E) = 1U;
            M2C_FIELD(arg0, s8 *, 0x3F) = 0;
        }
        if (((temp_f31 * temp_f31) + (temp_f30 * temp_f30)) > lbl_80351510) {
            M2C_FIELD(arg0, u8 *, 0x3E) = 0U;
        }
        if (IsDialogShown(lbl_803504F0) != 0) {
            M2C_FIELD(arg0, u8 *, 0x3E) = 0U;
        }
        if (fn_8001741C(temp_r3) != 0) {
            M2C_FIELD(arg0, u8 *, 0x3E) = 0U;
        }
        M2C_FIELD(arg0, f32 *, 0x14) = (f32) lbl_803514A8;
        M2C_FIELD(arg0, f32 *, 0x10) = (f32) lbl_803514A8;
        if ((u8) M2C_FIELD(arg0, u8 *, 0x3E) != 0) {
            if ((u8)fn_8001EB5C(arg0, arg1, temp_r3, temp_f29, temp_f1_2) == 0) {
                M2C_FIELD(arg0, u8 *, 0x3E) = 0U;
            }
        } else {
            fn_8001E6F0(arg0, temp_r3, temp_f31, temp_f30);
        }
        M2C_FIELD(temp_r3, f32 *, 0x1D4) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
        M2C_FIELD(temp_r3, f32 *, 0x1D8) = (f32) -M2C_FIELD(arg0, f32 *, 0x1C);
        M2C_FIELD(temp_r3, f32 *, 0x1D0) = (f32) M2C_FIELD(arg0, f32 *, 8);
    }
}
#pragma pop

void fn_8001F818(void) {
    M2C_UNK sp24;
    M2C_UNK sp20;
    M2C_UNK sp1C;
    M2C_UNK sp18;
    M2C_UNK sp14;
    M2C_UNK sp10;
    M2C_UNK spC;
    M2C_UNK sp8;
    s32 temp_r3;

    lbl_803504BC = 0;
    lbl_803504C0 = 0;
    lbl_803504C4 = 0;
    temp_r3 = get_up_vector_for_viewing_mtx(0x40);
    if (temp_r3 != 0) {
        fn_80020B20(&sp20, &sp24);
        fn_80020B40(temp_r3 + 0x10, &sp18, &sp1C);
        fn_80020D4C(temp_r3 + 0x20, &sp10, &sp14);
        fn_80020F58(temp_r3 + 0x30, &sp8, &spC);
    }
    lbl_803504B8 = temp_r3;
}

s32 fn_8001F89C(void *arg0) {
    void *sp1C;
    M2C_UNK sp10;
    void *spC;
    s32 sp18;
    u8 sp8;
    s32 temp_r31;

    temp_r31 = lbl_803504B8;
    if ((arg0 == NULL) || (((M2C_UNK (*)(void **, void *)) M2C_FIELD(arg0, M2C_UNK (**)(void **, void *), 0)) == NULL) || ((s32) M2C_FIELD(arg0, s32 *, 4) == 0)) {
        return 1;
    }
    /* draft: did not compile: fn_80020700(&sp8, temp_r31, arg0 + 4); */
    if (sp8 == (u32) (temp_r31 + 4)) {
        M2C_FIELD(arg0, M2C_UNK (**)(void **, void *), 0)(&spC, arg0);
        sp1C = spC;
        sp18 = M2C_FIELD(arg0, s32 *, 4);
        if (spC != NULL) {
            M2C_FIELD(spC, s32 *, 0) = (s32) (M2C_FIELD(spC, s32 *, 0) + 1);
        }
        fn_80020A64(&sp10, temp_r31, &sp18);
        if (&sp1C != NULL) {
            if (sp1C != NULL) {
                M2C_FIELD(sp1C, s32 *, 0) = (s32) (M2C_FIELD(sp1C, s32 *, 0) - 1);
                if (((s32) M2C_FIELD(sp1C, s32 *, 0) == 0) && (sp1C != NULL)) {
                    M2C_FIELD(M2C_FIELD(sp1C, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
                }
            }
            sp1C = NULL;
        }
        if (spC != NULL) {
            M2C_FIELD(spC, s32 *, 0) = (s32) (M2C_FIELD(spC, s32 *, 0) - 1);
            if (((s32) M2C_FIELD(spC, s32 *, 0) == 0) && (spC != NULL)) {
                M2C_FIELD(M2C_FIELD(spC, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
        }
        spC = NULL;
        return 1;
    }
    return 0;
}

void **fn_8001FA14(void **arg0, s16 arg1) {
    void *temp_r3;
    void *temp_r4;

    if (arg0 != NULL) {
        temp_r4 = *arg0;
        if (temp_r4 != NULL) {
            M2C_FIELD(temp_r4, s32 *, 0) = (s32) (M2C_FIELD(temp_r4, s32 *, 0) - 1);
            if ((s32) M2C_FIELD(temp_r4, s32 *, 0) == 0) {
                temp_r3 = *arg0;
                if (temp_r3 != NULL) {
                    M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
                }
            }
        }
        *arg0 = NULL;
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

void fn_8001FAAC(s32 arg0, s32 arg1) {
    /* draft: did not compile: fn_8001FAE8(lbl_803504B8, arg1, lbl_803504B8 + 0x30); */
}

void fn_8001FAE8(s32 **arg0, s32 arg2, s32 arg3) {
    void *sp20;
    s32 *sp1C;
    void *sp18;
    void *sp14;
    s32 *sp10;
    void *spC;
    M2C_UNK sp8;
    s32 *temp_r4;
    s32 *var_r4;
    void *var_r29;

    fn_80014798(&sp14, &lbl_80221D48, &sp8);
    fn_8001D708(&sp14, arg2, strlen(arg2));
    fn_8002082C(&spC, arg3, &sp14);
    var_r29 = spC;
    if (0 /* draft: did not compile */) {
        /* draft: did not compile: var_r4 = get_up_vector_for_viewing_mtx(0x18); */
        if (var_r4 != NULL) {
            var_r4 = fn_800A13DC(M2C_FIELD(sp14, s32 *, 0xC));
        }
        sp10 = var_r4;
        if (var_r4 != NULL) {
            *var_r4 += 1;
        }
        fn_800208F4(&sp18, &sp14);
        sp1C = sp10;
        if (sp10 != NULL) {
            M2C_FIELD(sp10, s32 *, 0) += 1;
        }
        fn_80020E54(&sp20, arg3, &sp18);
        var_r29 = sp20;
        if (&sp1C != NULL) {
            if (sp1C != NULL) {
                M2C_FIELD(sp1C, s32 *, 0) -= 1;
                if (((s32) M2C_FIELD(sp1C, s32 *, 0) == 0) && (sp1C != NULL)) {
                    M2C_FIELD(M2C_FIELD(sp1C, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                }
            }
            sp1C = NULL;
        }
        fn_800146F0(&sp18, -1);
        if (sp10 != NULL) {
            M2C_FIELD(sp10, s32 *, 0) -= 1;
            if (((s32) M2C_FIELD(sp10, s32 *, 0) == 0) && (sp10 != NULL)) {
                M2C_FIELD(M2C_FIELD(sp10, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
        }
        sp10 = NULL;
    }
    *arg0 = M2C_FIELD(var_r29, s32 **, 0x10);
    temp_r4 = *arg0;
    if (temp_r4 != NULL) {
        *temp_r4 += 1;
    }
    fn_800146F0(&sp14, -1);
}

void fn_8001FCC0(s32 arg0, s32 arg1) {
    /* draft: did not compile: fn_8001FCFC(lbl_803504B8, arg1, lbl_803504B8 + 0x20); */
}

void fn_8001FCFC(s32 **arg0, s32 arg2, s32 arg3) {
    void *sp20;
    s32 *sp1C;
    void *sp18;
    void *sp14;
    s32 *sp10;
    void *spC;
    M2C_UNK sp8;
    s32 *temp_r4;
    s32 *var_r4;
    void *var_r29;

    fn_80014798(&sp14, &lbl_80221D48, &sp8);
    fn_8001D708(&sp14, arg2, strlen(arg2));
    fn_80020764(&spC, arg3, &sp14);
    var_r29 = spC;
    if (0 /* draft: did not compile */) {
        /* draft: did not compile: var_r4 = get_up_vector_for_viewing_mtx(0x34); */
        if (var_r4 != NULL) {
            var_r4 = fn_8009A314(M2C_FIELD(sp14, s32 *, 0xC));
        }
        sp10 = var_r4;
        if (var_r4 != NULL) {
            *var_r4 += 1;
        }
        fn_800208F4(&sp18, &sp14);
        sp1C = sp10;
        if (sp10 != NULL) {
            M2C_FIELD(sp10, s32 *, 0) += 1;
        }
        fn_80020C48(&sp20, arg3, &sp18);
        var_r29 = sp20;
        if (&sp1C != NULL) {
            if (sp1C != NULL) {
                M2C_FIELD(sp1C, s32 *, 0) -= 1;
                if (((s32) M2C_FIELD(sp1C, s32 *, 0) == 0) && (sp1C != NULL)) {
                    M2C_FIELD(M2C_FIELD(sp1C, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                }
            }
            sp1C = NULL;
        }
        fn_800146F0(&sp18, -1);
        if (sp10 != NULL) {
            M2C_FIELD(sp10, s32 *, 0) -= 1;
            if (((s32) M2C_FIELD(sp10, s32 *, 0) == 0) && (sp10 != NULL)) {
                M2C_FIELD(M2C_FIELD(sp10, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
        }
        sp10 = NULL;
    }
    *arg0 = M2C_FIELD(var_r29, s32 **, 0x10);
    temp_r4 = *arg0;
    if (temp_r4 != NULL) {
        *temp_r4 += 1;
    }
    fn_800146F0(&sp14, -1);
}

void GetMotionEndFrame(s32 arg0, s32 arg1) {
    /* draft: did not compile: fn_8001FF08(lbl_803504B8, arg1); */
}

void fn_8001FF08(s32 **arg0, s32 arg1, s32 arg2) {
    void *spC;
    s32 sp8;
    s32 *temp_r3;
    s32 *temp_r3_2;
    s32 *temp_r3_3;
    s32 *temp_r4;
    s32 *temp_r4_2;

    sp8 = arg2;
    fn_80020700(&spC, &sp8);
    if (0 /* draft: did not compile */) {
        *arg0 = NULL;
        temp_r4 = *arg0;
        if (temp_r4 != NULL) {
            *temp_r4 += 1;
        }
    } else {
        if (M2C_FIELD(M2C_FIELD((temp_r3 = M2C_FIELD(spC, s32 **, 0x10)), void **, 4), s32 (**)(s32 *), 0x28)(temp_r3) != 2) {
            temp_r3_2 = M2C_FIELD(spC, s32 **, 0x10);
            M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 4), M2C_UNK (**)(s32 *), 0x20)(temp_r3_2);
            do {
                temp_r3_3 = M2C_FIELD(spC, s32 **, 0x10);
            } while (M2C_FIELD(M2C_FIELD(temp_r3_3, void **, 4), u8 (**)(s32 *), 0x24)(temp_r3_3) == 0);
        }
        *arg0 = M2C_FIELD(spC, s32 **, 0x10);
        temp_r4_2 = *arg0;
        if (temp_r4_2 != NULL) {
            *temp_r4_2 += 1;
        }
    }
}

void fn_8001FFF4(s32 **arg0, s32 arg1) {
    void *spC;
    s32 sp8;
    s32 *temp_r4;

    sp8 = arg1;
    fn_80020700(&spC, lbl_803504B8, &sp8);
    *arg0 = M2C_FIELD(spC, s32 **, 0x10);
    temp_r4 = *arg0;
    if (temp_r4 != NULL) {
        *temp_r4 += 1;
    }
}

void fn_80020054(s32 arg0) {
    fn_8002007C(lbl_803504B8, arg0);
}

void fn_8002007C(s32 arg0, s32 arg1) {
    void *spC;
    u8 sp8;
    void *temp_r3;
    void *temp_r3_2;

    sp8 = arg1;
    fn_80020700(&spC, arg0, &sp8);
    if (0 /* draft: did not compile */) {
        temp_r3 = M2C_FIELD(spC, void **, 0x10);
        if (M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), s32 (**)(void *), 0x28)(temp_r3) == 0) {
            /* draft: did not compile: fn_80020108(arg0); */
        }
        temp_r3_2 = M2C_FIELD(spC, void **, 0x10);
        M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 4), M2C_UNK (**)(void *), 0x20)(temp_r3_2);
    }
}

void fn_80020108(void *arg0) {
    void *sp20;
    void *sp1C;
    void *sp18;
    void *sp14;
    void *sp10;
    void *spC;
    void *sp8;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;

    sp20 = M2C_FIELD(arg0, void **, 0xC);
loop_2:
    if (0 /* draft: did not compile */) {
        temp_r3 = M2C_FIELD(sp20, void **, 0x10);
        M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), M2C_UNK (**)(void *), 0x14)(temp_r3);
        fn_80020A10(&sp20);
        goto loop_2;
    }
    sp18 = M2C_FIELD(arg0, void **, 0x2C);
loop_8:
    if (0 /* draft: did not compile */) {
        sp1C = sp18;
        fn_80020A10(&sp1C);
        temp_r3_2 = M2C_FIELD(sp18, void **, 0x10);
        if (((s32) M2C_FIELD(temp_r3_2, s32 *, 0) == 1) && (M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 8), u8 (**)(), 0xC)() != 0)) {
            spC = sp18;
            /* draft: did not compile: fn_80020B60(arg0 + 0x20, &spC); */
        }
        sp18 = sp1C;
        goto loop_8;
    }
    sp10 = M2C_FIELD(arg0, void **, 0x3C);
loop_14:
    if (0 /* draft: did not compile */) {
        sp14 = sp10;
        fn_80020A10(&sp14);
        temp_r3_3 = M2C_FIELD(sp10, void **, 0x10);
        if (((s32) M2C_FIELD(temp_r3_3, s32 *, 0) == 1) && (M2C_FIELD(M2C_FIELD(temp_r3_3, void **, 8), u8 (**)(), 0xC)() != 0)) {
            sp8 = sp10;
            /* draft: did not compile: fn_80020D6C(arg0 + 0x30, &sp8); */
        }
        sp10 = sp14;
        goto loop_14;
    }
}

s32 IsModelLoaded(s32 arg0) {
    void *spC;
    s32 sp8;
    u8 temp_r31;
    void *temp_r3;

    temp_r31 = lbl_803504B8;
    sp8 = arg0;
    fn_80020700(&spC, temp_r31, &sp8);
    if (0 /* draft: did not compile */) {
        return 1;
    }
    temp_r3 = M2C_FIELD(spC, void **, 0x10);
    sp8 = M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), s32 (**)(void *), 0x24)(temp_r3);
    return sp8;}

void fn_800202C0(void) {
    /* draft: did not compile: fn_80020108(lbl_803504B8); */
}

void fn_800202E4(void *arg0) {
    fn_800CDD74(M2C_FIELD(arg0, s32 *, 8), &lbl_802C0208);
    M2C_FIELD(&lbl_802C0208, void **, 0x2C) = arg0;
    lbl_803504C4 = 1;
    DVDReadAsyncPrio(&lbl_802C0208, M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 4), (M2C_FIELD(&lbl_802C0208, s32 *, 0x34) + 0x1F) & 0xFFFFFFE0, 0, fn_80020358, 2);
}

#pragma push
#pragma dont_inline on
void fn_80020358(s32 arg0, void *arg1) {
    void *sp8;
    void *temp_r31;
    M2C_UNK *temp_r3;

    temp_r31 = M2C_FIELD(arg1, void **, 0x2C);
    sp8 = arg1;
    if (temp_r31 == NULL) {
        lbl_803504C4 = 0;
        return;
    }
    if (arg0 < 0) {
        if (arg0 == -3) {
            lbl_803504C4 = 0;
        }
    } else {
        *(M2C_FIELD(temp_r31, s32 **, 4)) = M2C_FIELD(arg1, s32 *, 0x34);
        DVDClose(arg1, (M2C_FIELD(temp_r31, s32 **, 4)));
        M2C_FIELD(temp_r31, s32 **, 4) = NULL;
        M2C_FIELD(temp_r31, void **, 0) = (void *) lbl_803504C0;
        /* draft: did not compile: lbl_803504C0 = temp_r31; */
        if ((M2C_UNK *) lbl_803504BC != NULL) {
            /* draft: did not compile: temp_r3 = lbl_803504BC; */
            lbl_803504BC = *temp_r3;
            fn_800202E4(temp_r3);
            return;
        }
        arg_sp14 = 0;
        lbl_803504C4 = 0;
    }
}
#pragma pop

void ReadBmp(void *arg0, s32 arg1) {
    s32 var_r30;
    s32 sp3C;
    M2C_UNK sp8;
    M2C_UNK *var_r31;
    M2C_UNK *var_r4;
    M2C_UNK *var_r7;
    s32 sp38;
    u32 temp_r5;
    s16 temp_r30;
    u8 var_r6;

    var_r31 = NULL;
    var_r30 = arg1;
    OSDisableInterrupts();
    if ((M2C_UNK *) lbl_803504C0 != NULL) {
        /* draft: did not compile: var_r31 = lbl_803504C0; */
        lbl_803504C0 = *var_r31;
    }
    OSRestoreInterrupts();
    if (var_r31 == NULL) {
        var_r31 = get_up_vector_for_viewing_mtx_inner(0x10);
    }
    if (strncmp(var_r30, &lbl_8034E778, 4) == 0) {
        var_r30 += 4;
    }
    M2C_FIELD(var_r31, void **, 4) = arg0;
    M2C_FIELD(var_r31, s32 *, 8) = fn_80025444(var_r30);
    if ((s32) M2C_FIELD(var_r31, s32 *, 8) < 0) {
        fn_800C5B7C(&lbl_80221D54, 0x1C0, &lbl_8034E780);
    }
    fn_800CDD74(M2C_FIELD(var_r31, s32 *, 8), &sp8);
    M2C_FIELD(arg0, s32 *, 4) = fn_80038264(sp3C);
    M2C_FIELD(var_r31, u32 *, 0xC) = sp38;
    DVDClose((void *)(&sp8), (long *)(0));
    OSDisableInterrupts();
    temp_r30 = lbl_803504C4;
    if (temp_r30 != 0) {
        var_r6 = 1;
        if ((M2C_UNK *) lbl_803504BC != NULL) {
            temp_r5 = M2C_FIELD(var_r31, u32 *, 0xC);
            if (temp_r5 >= (u32) M2C_FIELD(lbl_803504BC, u32 *, 0xC)) {
                /* draft: did not compile: var_r4 = lbl_803504BC; */
                var_r6 = 0;
                var_r7 = M2C_FIELD(var_r4, M2C_UNK **, 0);
loop_13:
                if ((var_r7 != NULL) && (temp_r5 >= (u32) M2C_FIELD(var_r7, u32 *, 0xC))) {
                    var_r4 = var_r7;
                    var_r7 = M2C_FIELD(var_r7, M2C_UNK **, 0);
                    goto loop_13;
                }
                M2C_FIELD(var_r31, M2C_UNK **, 0) = var_r7;
                /* draft: did not compile: *var_r4 = var_r31; */
            }
        }
        if (var_r6 != 0) {
            /* draft: did not compile: M2C_FIELD(var_r31, M2C_UNK **, 0) = lbl_803504BC; */
            /* draft: did not compile: lbl_803504BC = var_r31; */
        }
    }
    OSRestoreInterrupts();
    if (temp_r30 == 0) {
        fn_800202E4(var_r31);
    }
}
