/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_8009DD10(void *, M2C_UNK);
void *get_up_vector_for_viewing_mtx(s32);
M2C_UNK fn_8009F56C(u32 *, M2C_UNK);
M2C_UNK fn_8014BB10();
M2C_UNK fn_8014F858(void *, M2C_UNK *, M2C_UNK *);
extern M2C_UNK __files;
extern M2C_UNK lbl_8022A6B4;
extern M2C_UNK lbl_8022A6D4;
extern M2C_UNK lbl_801DB8B0;
extern M2C_UNK lbl_8022A728;
M2C_UNK fn_800A3890(s32, M2C_UNK *, M2C_UNK, void *);
M2C_UNK fn_80005888(void *);
M2C_UNK fn_80020694();
M2C_UNK ReadBmp(s32, s32);
s32 strncmp(s32, M2C_UNK *, M2C_UNK);
extern M2C_UNK lbl_8034FD48;
extern M2C_UNK lbl_8034FD50;
M2C_UNK fn_800E6288(s32);
M2C_UNK fn_80015F5C();
extern M2C_UNK lbl_801CB330;
extern f32 lbl_80351B48;
extern f32 lbl_80351B4C;
extern f32 lbl_80351B50;
M2C_UNK fn_800058A8();
M2C_UNK fn_800146F0();
s32 *fn_80005868(s32);
u8 *fn_80015E5C(s32, M2C_UNK, s32 *);
M2C_UNK fn_80015934(s32, M2C_UNK, M2C_UNK);
void *fn_80015C88(s32, void *, u32 *, s32 *, s32 *, s32 *);
s32 fn_80015ECC(s32);
s32 fn_80015EFC();
s32 fn_80015F2C();
M2C_UNK PSMTXIdentity(M2C_UNK *);
M2C_UNK C_MTXOrtho(M2C_UNK *, f32, f32, f32, f32, f32, f32);
M2C_UNK GXSetVtxDesc(M2C_UNK, M2C_UNK);
M2C_UNK fn_800E0804();
M2C_UNK GXSetVtxAttrFmt(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXSetTexCoordGen2(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_800E1314(M2C_UNK);
u64 GXBegin(M2C_UNK, M2C_UNK, s32);
M2C_UNK fn_800E2CA4(M2C_UNK, f32, f32);
M2C_UNK GXSetChanCtrl(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXSetTevColorIn(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXSetTevAlphaIn(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXSetTevColorOp(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXSetTevAlphaOp(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_800E4580(M2C_UNK, s32 *);
M2C_UNK GXSetTevOrder(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_800E4B50(M2C_UNK);
M2C_UNK GXSetBlendMode(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXSetZMode(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXSetProjection(M2C_UNK *, M2C_UNK);
M2C_UNK GXLoadPosMtxImm(M2C_UNK *, M2C_UNK);
M2C_UNK GXSetCurrentMtx(M2C_UNK);
M2C_UNK HSD_StateInvalidate(M2C_UNK, u32);
extern M2C_UNK lbl_801DA508;
extern M2C_UNK lbl_802B0898;
extern s32 lbl_8035050C;
extern f32 lbl_80351B54;
extern f32 lbl_80351B58;
extern f32 lbl_80351B5C;
extern f32 lbl_80351B60;
extern f32 lbl_80351B64;
extern f32 lbl_80351B68;
extern f32 lbl_80351B6C;
extern f32 lbl_80351B70;
M2C_UNK GetMotionEndFrame(void **, s32);

void *fn_800A0D48(void *arg0, void *arg1, void *arg2, M2C_UNK arg_sp0);
void fn_800A0ECC(void *arg0, void *arg1, u32 arg2, void *arg3, M2C_UNK arg_sp0);
void *fn_800A13DC(void *arg0);
void *fn_800A1444(void *arg0, s32 arg1);
void *fn_800A14BC(void *arg0, s16 arg1);
s32 fn_800A1534(void *arg0);
void fn_800A15A4(s32 arg0, s32 arg1);
void fn_800A1618(void *arg0);
void *fn_800A163C(void *arg0, s32 arg1, s32 arg2);
void *fn_800A1720(void *arg0, s16 arg1);
void method_setTTColSpacing(void *arg0, s32 arg1);
void fn_800A17A8(void *arg0);
s32 fn_800A1950(void *arg0);
void fn_800A1984(void *arg0, s32 arg1, s32 arg2, u8 arg3, f32 farg0, f32 farg1, f32 farg2);
s32 fn_800A2C18(s32 arg0);

void *fn_800A0D48(void *arg0, void *arg1, void *arg2, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_800A0ECC(void *arg0, void *arg1, u32 arg2, void *arg3, M2C_UNK arg_sp0) { } /* draft: stub */

void *fn_800A13DC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_801DB8B0;
    M2C_FIELD(arg0, s16 *, 4) = 0;
    M2C_FIELD(arg0, s16 *, 6) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_8022A728;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    /* draft: did not compile: fn_800A15A4(&lbl_8022A728, &lbl_801DB8B0, 0, arg0); */
    return arg0;
}

void *fn_800A1444(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    M2C_FIELD(arg0, s16 *, 4) = 0;
    M2C_FIELD(arg0, u16 *, 6) = 0U;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_8022A728;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_801DB8B0;
    fn_800A3890(M2C_FIELD(arg0, s32 *, 0x14), &lbl_801DB8B0, 0, arg0);
    M2C_FIELD(arg0, u16 *, 6) = (u16) (M2C_FIELD(arg0, u16 *, 6) | 3);
    return arg0;
}

void *fn_800A14BC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_8022A728;
        /* draft: did not compile: fn_80020694(arg0 + 0xC, -1); */
        if (arg0 != NULL) {
            M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_801DB8B0;
        }
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

s32 fn_800A1534(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 6) & 1) {
        return 1;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0xC) == 0U) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
    fn_800A3890((long)(M2C_FIELD(arg0, s32 *, 0x14)), (long *)(0), (long)(0), (void *)(0));
    M2C_FIELD(arg0, u16 *, 6) = (u16) (M2C_FIELD(arg0, u16 *, 6) | 1);
    return 1;
}

void fn_800A15A4(s32 arg0, s32 arg1) {
    s32 var_r31;

    var_r31 = arg1;
    if ((strncmp(var_r31, &lbl_8034FD48, 4) == 0) || (strncmp(var_r31, &lbl_8034FD50, 4) == 0)) {
        var_r31 += 4;
    }
    ReadBmp(arg0 + 0xC, var_r31);
}

void fn_800A1618(void *arg0) {
    fn_800E6288(M2C_FIELD(arg0, s32 *, 0x14));
}

void *fn_800A163C(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK sp8;

    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(&lbl_801CB330, s32 *, 0x3C);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(&lbl_801CB330, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(&lbl_801CB330, s32 *, 4);
    M2C_FIELD(arg0, s8 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) lbl_80351B48;
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) lbl_80351B48;
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) lbl_80351B4C;
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) lbl_80351B4C;
    /* draft: did not compile: fn_80015F5C(arg0 + 0x50, &sp8, M2C_FIELD(&lbl_801CB330, s32 *, 4), lbl_80351B48); */
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = -1;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, f32 *, 0x60) = (f32) lbl_80351B50;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    M2C_FIELD(arg0, s32 *, 0x7C) = 4;
    M2C_FIELD(arg0, s32 *, 0x80) = 5;
    M2C_FIELD(arg0, s32 *, 0x84) = arg1;
    M2C_FIELD(arg0, s32 *, 0) = arg2;
    return arg0;
}

void *fn_800A1720(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        fn_800058A8(M2C_FIELD(arg0, s32 *, 0x28));
        /* draft: did not compile: fn_800146F0(arg0 + 0x50, -1); */
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

void method_setTTColSpacing(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x7C) = (s32) (arg1 + 4);
    fn_800A17A8((void *)(0));
}

void fn_800A17A8(void *arg0) {
    u8 *var_r3;
    s32 temp_r4;
    s32 temp_r5;
    s32 var_r31;
    s8 var_r4;
    s32 sp8;
    u8 *var_r4_2;
    u8 temp_r0_2;
    u8 temp_r0_3;

    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    fn_800058A8(M2C_FIELD(arg0, s32 **, 0x28));
    var_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x50), u8 **, 0xC);
    if ((s8) *var_r3 == 0) {
        M2C_FIELD(arg0, s32 **, 0x28) = fn_80005868(4);
        *M2C_FIELD(arg0, s32 **, 0x28) = 0;
        return;
    }
    var_r4 = 0;
loop_5:
    var_r3 += 1;
    if ((s8) (*var_r3) != 0) {
        if ((s8) (*var_r3) == 0xA) {
            var_r4 += 1;
        }
        goto loop_5;
    }
    M2C_FIELD(arg0, s32 **, 0x28) = fn_80005868((var_r4 + 1) * 4);
    var_r31 = 0;
    var_r4_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x50), u8 **, 0xC);
loop_21:
    temp_r0_2 = M2C_FIELD(var_r4_2, u8 *, 0);
    switch (temp_r0_2) {                       /* switch 2; irregular */
    case 0x0:                                       /* switch 2 */
        break;
    case 0xA:                                       /* switch 2 */
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x30);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (temp_r5 + 1);
        M2C_FIELD(arg0, s32 **, 0x28)[temp_r5] = var_r31;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x2C) < var_r31) {
            M2C_FIELD(arg0, s32 *, 0x2C) = var_r31;
        }
        var_r31 = 0;
        var_r4_2 += 1;
        goto loop_21;
    case 0x5E:                                      /* switch 2 */
        var_r4_2 += 2;
        goto loop_21;
    case 0x1B:                                      /* switch 2 */
        temp_r0_3 = M2C_FIELD(var_r4_2, u8 *, 1);
        var_r4_2 += 2;
        switch ((s8) temp_r0_3) {                   /* switch 1; irregular */
        case 0x5C:                                  /* switch 1 */
            break;
        case 0x5D:                                  /* switch 1 */
            var_r4_2 += 2;
            break;
        }
        goto loop_21;
    default:                                        /* switch 2 */
        var_r4_2 = fn_80015E5C(M2C_FIELD(arg0, s32 *, 0), 0, &sp8);
        var_r31 = sp8 + (M2C_FIELD(arg0, s32 *, 0x7C) + var_r31);
        goto loop_21;
    }
    if (var_r31 > 0) {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x30);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (temp_r4 + 1);
        M2C_FIELD(arg0, s32 **, 0x28)[temp_r4] = var_r31;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x2C) < var_r31) {
            M2C_FIELD(arg0, s32 *, 0x2C) = var_r31;
        }
    }
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
}

s32 fn_800A1950(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x58);
    if (temp_r4 == 0) {
        return 1;
    }
    if (temp_r4 > 0) {
        M2C_FIELD(arg0, s32 *, 0x58) = (s32) (temp_r4 - 1);
    }
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) (M2C_FIELD(arg0, s32 *, 0x64) + 1);
    return 0;
}

void fn_800A1984(void *arg0, s32 arg1, s32 arg2, u8 arg3, f32 farg0, f32 farg1, f32 farg2) { } /* draft: stub */

s32 fn_800A2C18(s32 arg0) {
    void *spC;
    void *sp8;
    s32 var_r3;

    GetMotionEndFrame(&sp8, arg0);
    spC = sp8;
    if (sp8 != NULL) {
        M2C_FIELD(sp8, s32 *, 0) = (s32) (M2C_FIELD(sp8, s32 *, 0) + 1);
    }
    if (sp8 != NULL) {
        M2C_FIELD(sp8, s32 *, 0) = (s32) (M2C_FIELD(sp8, s32 *, 0) - 1);
        if (((s32) M2C_FIELD(sp8, s32 *, 0) == 0) && (sp8 != NULL)) {
            M2C_FIELD(M2C_FIELD(sp8, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
        }
    }
    sp8 = NULL;
    if (spC != NULL) {
        var_r3 = M2C_FIELD(M2C_FIELD(spC, void **, 4), s32 (**)(), 0xC)();
    } else {
        var_r3 = 0;
    }
    if (spC != NULL) {
        M2C_FIELD(spC, s32 *, 0) = (s32) (M2C_FIELD(spC, s32 *, 0) - 1);
        if (((s32) M2C_FIELD(spC, s32 *, 0) == 0) && (spC != NULL)) {
            M2C_FIELD(M2C_FIELD(spC, void **, 4), M2C_UNK (**)(void *, M2C_UNK), 8)(spC, 1);
        }
    }
    spC = NULL;
    return var_r3;
}
