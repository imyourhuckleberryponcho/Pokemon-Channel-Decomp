/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_80005888(void **);
M2C_UNK fn_800146F0(void *, M2C_UNK);
void *get_up_vector_for_viewing_mtx();
M2C_UNK fn_800208F4(void *, void *);
M2C_UNK fn_8014BB10();
M2C_UNK fn_8014F858(void *, M2C_UNK *, M2C_UNK *);
extern M2C_UNK __files;
extern M2C_UNK lbl_80222E30;
M2C_UNK fn_80073810();
extern M2C_UNK lbl_80222EC0;
M2C_UNK fn_8009DD68(s32);
extern M2C_UNK lbl_80222F84;
u8 fn_80070CFC(M2C_UNK **);
M2C_UNK PSMTXTranspose(void *, s32, f32);
M2C_UNK PSVECNormalize(M2C_UNK **, M2C_UNK **);
M2C_UNK PSVECCrossProduct();
extern M2C_UNK lbl_801CC048;
extern M2C_UNK lbl_801CC054;
extern f32 lbl_80351750;
M2C_UNK fn_80075FE0();
M2C_UNK method_playSound(void *, M2C_UNK, M2C_UNK, f32);
extern s32 lbl_8034EB30;
extern f32 lbl_80351758;
extern f32 lbl_8035175C;
extern f32 lbl_80351760;
extern f32 lbl_80351764;
extern f32 lbl_80351768;
extern f32 lbl_8035176C;
extern f64 lbl_80351770;
extern f64 lbl_80351778;
extern f32 lbl_80351780;
extern f64 lbl_80351788;
extern f64 lbl_80351790;
extern f32 lbl_80351798;
extern f32 lbl_8035179C;
u32 fn_8001D46C(void *, void *);
u32 fn_8001D474(void *, void *);
f32 fn_80071054(M2C_UNK *);
f32 fn_800710E4();
void *fn_8007AEC4(M2C_UNK, M2C_UNK);
void *fn_8007AF20(void *);
M2C_UNK fn_8007B1B0();
M2C_UNK fn_8007B1C0();
s32 GetFloorRegionId(u32, void *);
f32 fn_800A8984(u32, void *, s32);
M2C_UNK fn_800A89EC(f32 *, u32, s32);
u32 PSMTXInverse();
M2C_UNK PSMTXMultVecSR(M2C_UNK *, f32 *, f32 *, f32, f32, f32, f32, f32, f32, f32, f32, f32);
M2C_UNK PSVECAdd();
M2C_UNK PSVECSubtract();
M2C_UNK PSVECScale();
f32 PSVECMag(s32 *, s32, s32);
M2C_UNK HSD_JObjSetupMatrixSub(void *);
M2C_UNK HSD_MtxGetTranslate();
M2C_UNK __assert(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_801CC060;
extern M2C_UNK lbl_801CC06C;
extern f32 lbl_801CC078;
extern M2C_UNK lbl_8034E890;
extern M2C_UNK lbl_8034E898;
extern f32 lbl_803517A0;
extern f32 lbl_803517A4;
extern f32 lbl_803517A8;
extern f32 lbl_803517AC;
extern f32 lbl_803517B0;
extern f32 lbl_803517B4;
extern f32 lbl_803517B8;
extern M2C_UNK lbl_801CC09C;
extern f32 lbl_80351754;
extern f32 lbl_803517C8;
void *fn_80073D4C();
f32 fn_800A891C(s32, void *);
M2C_UNK fn_8010483C(void *, M2C_UNK *);
extern f32 lbl_803517CC;
s32 HSD_Randi(M2C_UNK);
extern M2C_UNK lbl_801CC0A8;
M2C_UNK fn_80073B80(M2C_UNK, M2C_UNK *);
M2C_UNK fn_8009DDC8(M2C_UNK, M2C_UNK *);
M2C_UNK HSD_LObjSetColor(s32, s32 *, s8, u8, f32, f32);
M2C_UNK HSD_LObjGetColor();

void fn_800319F0(void ***arg0, s32 *arg1, void ***arg2);
void fn_80031A90(void **arg0, s32 *arg1, void ***arg2, void *arg3, M2C_UNK arg_sp0);
void fn_80031B74(void *arg0);
void *fn_80031B8C(void *arg0);
void fn_80031BE4(s32 **arg0, s32 arg1);
void fn_80031C60(M2C_UNK **arg0, void *arg1, s32 arg2);
void fn_80031D8C(void *arg0);
void fn_800321F4(void *arg0);
s32 fn_800330C0(void *arg0);
s32 fn_800333C4(void *arg0);
void fn_8003345C(void *arg0, void *arg1);
void fn_800335C0(void *arg0, void *arg1);
void fn_800335EC(void *arg0, u8 arg1, u8 arg2);
void *fn_80033684(void *arg0, s16 arg1);
void *fn_800336E4(void *arg0, s16 arg1);
u32 fn_80033744(s32 *arg0);
s32 fn_80033808(void);
void fn_80033810(void);
void fn_80033814(void *arg0);
void fn_80033964(void *arg0, s32 arg1, void *arg2);

void fn_800319F0(void ***arg0, s32 *arg1, void ***arg2) {
    void **temp_r5;

    temp_r5 = *arg2;
    *arg2 = M2C_FIELD(temp_r5, void ***, 4);
    M2C_FIELD(M2C_FIELD(temp_r5, void **, 0), void ***, 4) = (void **) M2C_FIELD(temp_r5, void ***, 4);
    *M2C_FIELD(temp_r5, void ***, 4) = M2C_FIELD(temp_r5, void **, 0);
    if ((temp_r5 + 8) != NULL) {
        fn_800146F0(temp_r5 + 8, -1);
    }
    fn_80005888(temp_r5);
    *arg1 -= 1;
    *arg0 = *arg2;
}

void fn_80031A90(void **arg0, s32 *arg1, void ***arg2, void *arg3, M2C_UNK arg_sp0) {
    void *spC;
    s32 sp8;
    void **temp_r4;
    void *temp_r28;
    void *temp_r3;
    void *temp_r5;

    temp_r3 = get_up_vector_for_viewing_mtx(0x18);
    if (temp_r3 == NULL) {
        fn_8014F858(&__files + 0xA0, &lbl_80222E30, &__files);
        fn_8014BB10();
    }
    /* draft: did not compile: temp_r28 = temp_r3 + 8; */
    /* draft: did not compile: sp8 = arg1 + 4; */
    spC = temp_r3;
    if (temp_r28 != NULL) {
        fn_800208F4(temp_r28, arg3);
        M2C_FIELD(temp_r28, f32 *, 4) = (f32) M2C_FIELD(arg3, f32 *, 4);
        M2C_FIELD(temp_r28, f32 *, 8) = (f32) M2C_FIELD(arg3, f32 *, 8);
        M2C_FIELD(temp_r28, s32 *, 0xC) = (s32) M2C_FIELD(arg3, s32 *, 0xC);
    }
    temp_r4 = *arg2;
    temp_r5 = spC;
    spC = NULL;
    M2C_FIELD(*temp_r4, void **, 4) = temp_r5;
    M2C_FIELD(temp_r5, void **, 0) = (void *) *temp_r4;
    *temp_r4 = temp_r5;
    M2C_FIELD(temp_r5, void ***, 4) = temp_r4;
    *arg1 += 1;
    *arg0 = temp_r5;
}

void fn_80031B74(void *arg0) {
    void *temp_r4;

    /* draft: did not compile: temp_r4 = arg0 + 4; */
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(temp_r4, void **, 4) = temp_r4;
    M2C_FIELD(arg0, void **, 4) = temp_r4;
}

void *fn_80031B8C(void *arg0) {
    fn_80073810();
    M2C_FIELD(arg0, s32 *, 4) = 0x60000;
    M2C_FIELD(arg0, s32 *, 0x1B8) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &lbl_80222EC0;
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 0x8000);
    return arg0;
}

void fn_80031BE4(s32 **arg0, s32 arg1) {
    s32 *temp_r3;
    s32 *temp_r4;

    temp_r3 = get_up_vector_for_viewing_mtx(0x3C);
    if (temp_r3 != NULL) {
        fn_8009DD68(arg1);
        M2C_FIELD(temp_r3, M2C_UNK **, 4) = &lbl_80222F84;
    }
    *arg0 = temp_r3;
    temp_r4 = *arg0;
    if (temp_r4 != NULL) {
        *temp_r4 += 1;
    }
}

void fn_80031C60(M2C_UNK **arg0, void *arg1, s32 arg2) { } /* draft: stub */

void fn_80031D8C(void *arg0) { } /* draft: stub */

void fn_800321F4(void *arg0) { } /* draft: stub */

s32 fn_800330C0(void *arg0) { return 0; } /* draft: stub */

s32 fn_800333C4(void *arg0) {
    M2C_UNK sp8;
    s32 temp_r3;

    M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), M2C_UNK (**)(M2C_UNK *), 0x3C)(&sp8);
    fn_8003345C(arg0, &sp8);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), M2C_UNK (**)(void *, M2C_UNK *), 0x38)(arg0, &sp8);
    temp_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 (**)(void *), 0xC)(arg0);
    if ((temp_r3 >= 0x155A) && (temp_r3 <= 0x158E)) {
        M2C_FIELD(arg0, f32 *, 0x1C8) = (f32) lbl_803517C8;
        M2C_FIELD(arg0, s32 *, 0x1B8) = 2;
    }
    return 1;
}

void fn_8003345C(void *arg0, void *arg1) {
    u32 spC;
    M2C_UNK sp8;
    f32 temp_f30;
    f32 temp_f31;
    s32 temp_cr0_eq;
    s32 temp_r4;
    u8 var_r3;
    void *temp_r30_2;
    void *temp_r31;

    temp_r31 = fn_80073D4C();
    temp_f31 = fn_800A891C(M2C_FIELD(arg0, s32 *, 0x24), arg1);
    if ((M2C_FIELD(arg0, void **, 0x68)) != NULL) {
        if ((M2C_FIELD(arg0, void **, 0x68)) == temp_r31) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), M2C_UNK (**)(void *, M2C_UNK *), 0x2C)(arg0, &sp8);
            M2C_FIELD(arg1, f32 *, 4) = (f32) (temp_f31 + spC);
            return;
        }
        if ((M2C_FIELD(arg0, void **, 0x68)) == NULL) {
            __assert(&lbl_8034E890, 0x47C, &lbl_8034E898);
        }
        temp_cr0_eq = (M2C_FIELD(arg0, void **, 0x68)) == NULL;
        if (temp_cr0_eq == 0) {
            if (temp_cr0_eq != 0) {
                __assert(&lbl_8034E890, 0x25D, &lbl_8034E898);
            }
            temp_r4 = M2C_FIELD((M2C_FIELD((s32)arg0, void **, 0x68)), s32 *, 0x14);
            var_r3 = 0;
            var_r3 = !(!(temp_r4 & 0x800000) && (temp_r4 & 0x40)) ? var_r3 : 1;
            if (var_r3 != 0) {
                HSD_JObjSetupMatrixSub((M2C_FIELD(arg0, void **, 0x68)));
            }
        }
        /* draft: did not compile: temp_r30_2 = (M2C_FIELD(arg0, void **, 0x68)) + 0x44; */
        if (temp_r31 == NULL) {
            __assert(&lbl_8034E890, 0x3E4, &lbl_8034E898);
        }
        temp_f30 = M2C_FIELD(temp_r31, f32 *, 0x3C);
        fn_8010483C(temp_r30_2, &sp8);
        M2C_FIELD(arg1, f32 *, 4) = (f32) ((spC + temp_f31) - (M2C_FIELD(temp_r30_2, f32 *, 0x1C) - temp_f30));
        return;
    }
    M2C_FIELD(arg1, f32 *, 4) = temp_f31;
}

void fn_800335C0(void *arg0, void *arg1) {
    M2C_FIELD(arg0, f32 *, 0x1BC) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x1C8) = (f32) lbl_803517CC;
    M2C_FIELD(arg0, f32 *, 0x1C0) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x1C4) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x1B8) = 1;
}

void fn_800335EC(void *arg0, u8 arg1, u8 arg2) {
    void *temp_r3;

    if (((s32) M2C_FIELD(arg0, s32 *, 0x1B8) != 1) || (arg2 != 0)) {
        if (arg1 != 0) {
            temp_r3 = &lbl_801CC0A8 + (HSD_Randi(4) * 0xC);
            M2C_FIELD(arg0, f32 *, 0x1BC) = (f32) M2C_FIELD(temp_r3, f32 *, 0);
            M2C_FIELD(arg0, f32 *, 0x1C0) = (f32) M2C_FIELD(temp_r3, f32 *, 4);
            M2C_FIELD(arg0, f32 *, 0x1C4) = (f32) M2C_FIELD(temp_r3, f32 *, 8);
        } else {
            M2C_FIELD(arg0, f32 *, 0x1BC) = (f32) lbl_80351750;
            M2C_FIELD(arg0, f32 *, 0x1C0) = (f32) lbl_80351750;
            M2C_FIELD(arg0, f32 *, 0x1C4) = (f32) lbl_80351750;
        }
        M2C_FIELD(arg0, f32 *, 0x1C8) = (f32) lbl_80351750;
        M2C_FIELD(arg0, s32 *, 0x1B8) = 1;
    }
}

void *fn_80033684(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x20) = &lbl_80222EC0;
        fn_80073B80(0, &lbl_80222EC0);
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

void *fn_800336E4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_80222F84;
        fn_8009DDC8(0, &lbl_80222F84);
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma peephole off
u32 fn_80033744(s32 *arg0) {
    s32 *sp8;
    s8 var_r30;
    u8 var_r3;

    var_r30 = 0;
    /* draft: did not compile: var_r3 = get_up_vector_for_viewing_mtx(0x1CC); */
    if (var_r3 != 0U) {
        sp8 = arg0;
        if (arg0 != NULL) {
            *arg0 += 1;
        }
        var_r30 = 1;
        /* draft: did not compile: var_r3 = fn_80031B8C(&sp8); */
    }
    if (var_r30 != 0) {
        if (sp8 != NULL) {
            M2C_FIELD(sp8, s32 *, 0) -= 1;
            if (((s32) (u16)M2C_FIELD(sp8, s32 *, 0) == 0) && (sp8 != NULL)) {
                M2C_FIELD(M2C_FIELD(sp8, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
        }
        sp8 = NULL;
    }
    return var_r3;
}
#pragma pop

s32 fn_80033808(void) {
    return 0;
}

void fn_80033810(void) {

}

void fn_80033814(void *arg0) {
    s8 spE;
    s8 spD;
    u16 spC;
    s32 sp8;
    f32 temp_f1;
    f32 temp_f5;
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r5;
    s32 temp_r7;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x5C);
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x60);
    if (temp_r0 < temp_r3) {
        temp_r7 = M2C_FIELD(arg0, u8 *, 0x64);
        temp_f5 = (f32) temp_r0 / (f32) temp_r3;
        temp_f1 = (f32) M2C_FIELD(arg0, s32 *, 0x70);
        temp_r5 = (s8) (((f32) M2C_FIELD(arg0, s32 *, 0x68) * temp_f5) + (f32) temp_r7);
        spC = temp_r5;
        spD = (s8) (((f32) M2C_FIELD(arg0, s32 *, 0x6C) * temp_f5) + (f32) M2C_FIELD(arg0, u8 *, 0x65));
        spE = (s8) ((temp_f1 * temp_f5) + (f32) M2C_FIELD(arg0, u8 *, 0x66));
        sp8 = (s32) spC;
        HSD_LObjSetColor(M2C_FIELD(arg0, s32 *, 0x7C), &sp8, temp_r5, temp_r7, temp_f1, (s32)temp_f5);
        M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (M2C_FIELD(arg0, s32 *, 0x5C) + 1);
    }
}

void fn_80033964(void *arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = arg1;
    /* draft: did not compile: HSD_LObjGetColor(M2C_FIELD(arg0, s32 *, 0x7C), arg0 + 0x64); */
    M2C_FIELD(arg0, s32 *, 0x68) = (s32) (M2C_FIELD(arg2, u8 *, 0) - M2C_FIELD(arg0, u8 *, 0x64));
    M2C_FIELD(arg0, s32 *, 0x6C) = (s32) (M2C_FIELD(arg2, u8 *, 1) - M2C_FIELD(arg0, u8 *, 0x65));
    M2C_FIELD(arg0, s32 *, 0x70) = (s32) (M2C_FIELD(arg2, u8 *, 2) - M2C_FIELD(arg0, u8 *, 0x66));
}
