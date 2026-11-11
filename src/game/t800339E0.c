/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_80005888(void *);
M2C_UNK fn_80079FFC(void *, M2C_UNK);
M2C_UNK HSD_LObjRemoveAll();
extern M2C_UNK lbl_802232C4;
M2C_UNK HSD_LObjSetColor(s32, s32 *);
s32 HSD_LObjLoadDesc(M2C_UNK *, s32, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, f32);
extern M2C_UNK lbl_80221B10;
extern M2C_UNK lbl_80222FC0;
extern M2C_UNK lbl_80223270;
extern M2C_UNK lbl_80223D70;
extern f32 lbl_803517E0;
extern f32 lbl_803517E4;
extern M2C_UNK lbl_80222FF0;
extern M2C_UNK lbl_802231F0;
M2C_UNK HSD_LObjSetPosition(s32);
M2C_UNK HSD_LObjGetPosition(s32);
extern M2C_UNK lbl_8022302C;
extern M2C_UNK lbl_80223170;
M2C_UNK HSD_LObjSetDistAttn(s32);
M2C_UNK fn_80033814();
void *fn_800A713C(s32);
extern M2C_UNK lbl_80223084;
extern M2C_UNK lbl_802230F4;
M2C_UNK fn_800F116C(s32);
M2C_UNK HSD_LObjGetInterest(s32);
M2C_UNK HSD_LObjSetSpot(s32);
u32 fn_800386D8(u16);
extern M2C_UNK lbl_802C0280;
extern M2C_UNK lbl_8034E950;
extern M2C_UNK *lbl_80350528;
extern u8 lbl_8035052C;
void *get_up_vector_for_viewing_mtx(M2C_UNK);
M2C_UNK fn_80020694();
s32 fn_80038694(void *);
extern M2C_UNK lbl_80223360;
extern s32 lbl_80350524;
M2C_UNK fn_800383BC(void *);
u8 fn_800383F0();
M2C_UNK strncpy(u32, M2C_UNK);
extern M2C_UNK lbl_8022339C;
extern u32 lbl_8034E94C;
extern s32 lbl_80350520;
extern s32 lbl_80350530;
extern u8 lbl_80350534;
extern void *lbl_80350538;
extern u8 lbl_8035053C;
extern s32 lbl_80350540;
extern s32 lbl_80350544;
extern u8 lbl_80350548;
M2C_UNK fn_80038398(s32 *, M2C_UNK *);

void *fn_800339E0(void *arg0, s16 arg1);
void *CreateAmbientLight(void *arg0, s32 *arg1);
s32 fn_80033B68(void);
s32 fn_80033B70(void *arg1);
void *fn_80033B88(void *arg0, s16 arg1);
void *CreateInfiniteLight(void *arg0, s32 *arg1);
s32 fn_80033D00(void *arg0);
s32 fn_80033D28(void *arg0);
void *fn_80033D50(void *arg0, s16 arg1);
void *CreatePointLight(void *arg0, s32 *arg1, f32 farg0, f32 farg1, f32 farg2);
s32 fn_80033F24(void *arg0);
s32 fn_80033F60(void *arg0);
s32 fn_80033F88(void *arg0);
void *fn_80033FB0(void *arg0, s16 arg1);
void fn_80034010(void *arg0);
void *CreateSpotLight(void *arg0, s32 *arg1, f32 farg0, f32 farg1, f32 farg2);
s32 fn_800341EC(void *arg0);
s32 fn_80034228(void *arg0);
s32 fn_80034250(void *arg0);
s32 fn_80034278(void *arg0);
s32 fn_800342A0(void *arg0);
s32 fn_800342C8(void *arg0);
void *fn_800342F0(void *arg0, s16 arg1);
s32 fn_80034350(void);
s32 fn_80034358(void);
s32 fn_80034360(void);
s32 fn_80034368(void);
u32 fn_80034370(s32 arg0, u32 arg1);
void fn_80034404(void);
s32 fn_80034554(void);
void fn_800346C8(s32 arg0);
s32 fn_80034700(void);

void *fn_800339E0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x20) = &lbl_802232C4;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U) {
            HSD_LObjRemoveAll();
        }
        fn_80079FFC(arg0, 0);
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

void *CreateAmbientLight(void *arg0, s32 *arg1) {
    s32 sp8;
    s32 temp_r4;

    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &lbl_80221B10;
    M2C_FIELD(arg0, s32 *, 8) = 0x200000;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &lbl_80223D70;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 5;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &lbl_802232C4;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 2);
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, f32 *, 0x74) = (f32) lbl_803517E0;
    M2C_FIELD(arg0, f32 *, 0x78) = (f32) lbl_803517E4;
    M2C_FIELD(arg0, s32 *, 0x7C) = 0;
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 0x200);
    temp_r4 = M2C_FIELD(arg0, s32 *, 8) & 0xFFDFFFFF;
    M2C_FIELD(arg0, s32 *, 8) = temp_r4;
    M2C_FIELD(arg0, s32 *, 0x28) = 3;
    M2C_FIELD(arg0, s32 *, 0x38) = 2;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &lbl_80223270;
    M2C_FIELD(arg0, s32 *, 4) = 0x20000;
    M2C_FIELD(arg0, s32 *, 0x7C) = HSD_LObjLoadDesc(&lbl_80222FC0, temp_r4, &lbl_80223270, 2, 3, &lbl_802232C4, 5, &lbl_80223D70, lbl_803517E0);
    sp8 = *arg1;
    HSD_LObjSetColor(M2C_FIELD(arg0, s32 *, 0x7C), &sp8);
    return arg0;
}

s32 fn_80033B68(void) {
    return 0;
}

s32 fn_80033B70(void *arg1) {
    M2C_FIELD(arg1, f32 *, 8) = (f32) lbl_803517E4;
    M2C_FIELD(arg1, f32 *, 4) = (f32) lbl_803517E4;
    M2C_FIELD(arg1, f32 *, 0) = (f32) lbl_803517E4;
    return 0;
}

void *fn_80033B88(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x20) = &lbl_80223270;
        /* draft: did not compile: fn_800339E0(0, &lbl_80223270); */
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

void *CreateInfiniteLight(void *arg0, s32 *arg1) { } /* draft: stub */

s32 fn_80033D00(void *arg0) {
    HSD_LObjSetPosition(M2C_FIELD(arg0, s32 *, 0x7C));
    return 1;
}

s32 fn_80033D28(void *arg0) {
    HSD_LObjGetPosition(M2C_FIELD(arg0, s32 *, 0x7C));
    return 1;
}

void *fn_80033D50(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x20) = &lbl_802231F0;
        /* draft: did not compile: fn_800339E0(0, &lbl_802231F0); */
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

void *CreatePointLight(void *arg0, s32 *arg1, f32 farg0, f32 farg1, f32 farg2) { } /* draft: stub */

s32 fn_80033F24(void *arg0) {
    if ((u16) M2C_FIELD(arg0, s32 *, 4) == 0) {
        return 0;
    }
    HSD_LObjSetPosition(M2C_FIELD(arg0, s32 *, 0x7C));
    return 1;
}

s32 fn_80033F60(void *arg0) {
    HSD_LObjGetPosition(M2C_FIELD(arg0, s32 *, 0x7C));
    return 1;
}

s32 fn_80033F88(void *arg0) {
    HSD_LObjSetDistAttn(M2C_FIELD(arg0, s32 *, 0x7C));
    return 1;
}

void *fn_80033FB0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x20) = &lbl_80223170;
        /* draft: did not compile: fn_800339E0(0, &lbl_80223170); */
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

void fn_80034010(void *arg0) {
    M2C_UNK sp8;
    void *temp_r3;

    fn_80033814();
    if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
        temp_r3 = fn_800A713C(M2C_FIELD(arg0, s32 *, 0x24));
        if (temp_r3 == NULL) {
            M2C_FIELD(arg0, u32 *, 0x80) = 0U;
            return;
        }
        M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(M2C_UNK *), 0x3C)(&sp8);
    }
}

void *CreateSpotLight(void *arg0, s32 *arg1, f32 farg0, f32 farg1, f32 farg2) { } /* draft: stub */

s32 fn_800341EC(void *arg0) {
    if ((u16) M2C_FIELD(arg0, s32 *, 4) == 0) {
        return 0;
    }
    HSD_LObjSetPosition(M2C_FIELD(arg0, s32 *, 0x7C));
    return 1;
}

s32 fn_80034228(void *arg0) {
    HSD_LObjGetPosition(M2C_FIELD(arg0, s32 *, 0x7C));
    return 1;
}

s32 fn_80034250(void *arg0) {
    fn_800F116C(M2C_FIELD(arg0, s32 *, 0x7C));
    return 1;
}

s32 fn_80034278(void *arg0) {
    HSD_LObjGetInterest(M2C_FIELD(arg0, s32 *, 0x7C));
    return 1;
}

s32 fn_800342A0(void *arg0) {
    HSD_LObjSetSpot(M2C_FIELD(arg0, s32 *, 0x7C));
    return 1;
}

s32 fn_800342C8(void *arg0) {
    HSD_LObjSetDistAttn(M2C_FIELD(arg0, s32 *, 0x7C));
    return 1;
}

void *fn_800342F0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x20) = &lbl_802230F4;
        /* draft: did not compile: fn_800339E0(0, &lbl_802230F4); */
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

s32 fn_80034350(void) {
    return 0;
}

s32 fn_80034358(void) {
    return 0;
}

s32 fn_80034360(void) {
    return 0;
}

s32 fn_80034368(void) {
    return 0;
}

u32 fn_80034370(s32 arg0, u32 arg1) {
    s32 temp_r0;
    u32 var_r3;

    if ((s8) lbl_8035052C == 0) {
        lbl_80350528 = &lbl_8034E950;
        lbl_8035052C = 1;
    }
    temp_r0 = arg0 >> 0x10;
    if ((temp_r0 < 0) || (temp_r0 >= 0x40)) {
        return arg1;
    }
    if ((u32) *(&lbl_802C0280 + (temp_r0 * 4)) == 0U) {
        return arg1;
    }
    var_r3 = fn_800386D8((u16) arg0);
    if (var_r3 == 0U) {
        var_r3 = arg1;
    }
    return var_r3;
}

void fn_80034404(void) {
    M2C_UNK *var_r4;
    s32 temp_r3_2;
    s32 temp_r5;
    u8 var_ctr;
    void *temp_r3;

    var_r4 = &lbl_802C0280;
    var_ctr = 2;
    do {
        M2C_FIELD(var_r4, s32 *, 0) = 0;
        M2C_FIELD(var_r4, s32 *, 4) = 0;
        M2C_FIELD(var_r4, s32 *, 8) = 0;
        M2C_FIELD(var_r4, s32 *, 0xC) = 0;
        M2C_FIELD(var_r4, s32 *, 0x10) = 0;
        M2C_FIELD(var_r4, s32 *, 0x14) = 0;
        M2C_FIELD(var_r4, s32 *, 0x18) = 0;
        M2C_FIELD(var_r4, s32 *, 0x1C) = 0;
        M2C_FIELD(var_r4, s32 *, 0x20) = 0;
        M2C_FIELD(var_r4, s32 *, 0x24) = 0;
        M2C_FIELD(var_r4, s32 *, 0x28) = 0;
        M2C_FIELD(var_r4, s32 *, 0x2C) = 0;
        M2C_FIELD(var_r4, s32 *, 0x30) = 0;
        M2C_FIELD(var_r4, s32 *, 0x34) = 0;
        M2C_FIELD(var_r4, s32 *, 0x38) = 0;
        M2C_FIELD(var_r4, s32 *, 0x3C) = 0;
        M2C_FIELD(var_r4, s32 *, 0x40) = 0;
        M2C_FIELD(var_r4, s32 *, 0x44) = 0;
        M2C_FIELD(var_r4, s32 *, 0x48) = 0;
        M2C_FIELD(var_r4, s32 *, 0x4C) = 0;
        M2C_FIELD(var_r4, s32 *, 0x50) = 0;
        M2C_FIELD(var_r4, s32 *, 0x54) = 0;
        M2C_FIELD(var_r4, s32 *, 0x58) = 0;
        M2C_FIELD(var_r4, s32 *, 0x5C) = 0;
        M2C_FIELD(var_r4, s32 *, 0x60) = 0;
        M2C_FIELD(var_r4, s32 *, 0x64) = 0;
        M2C_FIELD(var_r4, s32 *, 0x68) = 0;
        M2C_FIELD(var_r4, s32 *, 0x6C) = 0;
        M2C_FIELD(var_r4, s32 *, 0x70) = 0;
        M2C_FIELD(var_r4, s32 *, 0x74) = 0;
        M2C_FIELD(var_r4, s32 *, 0x78) = 0;
        M2C_FIELD(var_r4, s32 *, 0x7C) = 0;
        var_r4 += 0x80;
        var_ctr -= 1;
    } while (var_ctr != 0);
    temp_r3 = get_up_vector_for_viewing_mtx(0x110);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 0x104) = (s32) *(&lbl_80223360 + (lbl_80350524 * 4));
        M2C_FIELD(temp_r3, s32 *, 0x100) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x104) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x108) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x10C) = 0;
    }
    temp_r3_2 = fn_80038694(temp_r3);
    if ((temp_r3_2 >= 0) && (temp_r3_2 < 0x40)) {
        temp_r5 = temp_r3_2 * 4;
        if ((u32) *(&lbl_802C0280 + temp_r5) == 0U) {
            /* draft: did not compile: *(&lbl_802C0280 + temp_r5) = temp_r3; */
            return;
        }
    }
    if (temp_r3 != NULL) {
        /* draft: did not compile: fn_80020694(temp_r3 + 0x100, -1); */
        fn_80005888(temp_r3);
    }
}

s32 fn_80034554(void) {
    s32 temp_r3;
    s32 temp_r5;
    void *temp_r31;
    void *temp_r3_2;
    u32 temp_r30;

    if ((s8) lbl_80350534 == 0) {
        lbl_80350530 = 0;
        lbl_80350534 = 1;
    }
    if ((s8) lbl_8035053C == 0) {
        lbl_80350538 = NULL;
        lbl_8035053C = 1;
    }
    if (((u32) lbl_8034E94C == 0U) || ((s32) lbl_80350520 == 0x100)) {
        return 1;
    }
    if ((void *) lbl_80350538 != NULL) {
        if (fn_800383F0() == 0) {
            return 0;
        }
        temp_r3 = fn_80038694(lbl_80350538);
        if ((temp_r3 >= 0) && (temp_r3 < 0x40) && (temp_r5 = temp_r3 * 4, (((u32) *(&lbl_802C0280 + temp_r5) == 0U) != 0))) {
            /* draft: did not compile: *(&lbl_802C0280 + temp_r5) = lbl_80350538; */
        } else {
            temp_r31 = lbl_80350538;
            if (temp_r31 != NULL) {
                /* draft: did not compile: fn_80020694(temp_r31 + 0x100, -1); */
                fn_80005888(temp_r31);
            }
        }
        lbl_80350538 = NULL;
        goto block_17;
    }
block_17:
    temp_r30 = *(&lbl_8022339C + (lbl_80350530 * 4));
    lbl_80350530 += 1;
    if (temp_r30 == 0U) {
        return 1;
    }
    temp_r3_2 = get_up_vector_for_viewing_mtx(0x110);
    if (temp_r3_2 != NULL) {
        M2C_FIELD(temp_r3_2, s32 *, 0x100) = 0;
        M2C_FIELD(temp_r3_2, s32 *, 0x104) = 0;
        M2C_FIELD(temp_r3_2, s32 *, 0x108) = 0;
        M2C_FIELD(temp_r3_2, s32 *, 0x10C) = 0;
        strncpy(temp_r30, 0x100);
    }
    lbl_80350538 = temp_r3_2;
    fn_800383BC(temp_r3_2);
    return 0;
}

void fn_800346C8(s32 arg0) {
    s32 temp_r0;

    if ((s8) lbl_80350548 == 0) {
        lbl_80350544 = 0;
        lbl_80350548 = 1;
    }
    temp_r0 = arg0 - lbl_80350544;
    lbl_80350540 += temp_r0;
    lbl_80350544 = arg0;
}

s32 fn_80034700(void) {
    s32 spC;
    M2C_UNK sp8;

    fn_80038398(&spC, &sp8);
    return spC;
}
