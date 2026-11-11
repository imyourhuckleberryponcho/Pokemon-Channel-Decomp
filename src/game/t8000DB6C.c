/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

u32 get_up_vector_for_viewing_mtx();
s32 fn_8000FE64(u32);
M2C_UNK fn_8000FEA0(M2C_UNK);
extern f32 lbl_80351068;
extern f32 lbl_803510A8;
extern f32 lbl_803510B0;
M2C_UNK fn_800EF7E4();
M2C_UNK HSD_LObjDeleteCurrentAll();
M2C_UNK HSD_CObjGetCurrent();
M2C_UNK fn_80005888(void *);
extern M2C_UNK lbl_801DB5B0;
M2C_UNK FreePictureSD(s32);
extern M2C_UNK lbl_801DB58C;
extern M2C_UNK lbl_801DB5A4;
M2C_UNK fn_80008850(M2C_UNK);
extern M2C_UNK lbl_801DB5CC;
M2C_UNK ReadBmp(void *, M2C_UNK *);
void *fn_800A13DC(void *);
extern M2C_UNK lbl_801DB600;
M2C_UNK fn_80020694(s32, M2C_UNK);
M2C_UNK VIWaitForRetrace();
M2C_UNK GXBegin(M2C_UNK, M2C_UNK, u16);
M2C_UNK fn_800EA0F8(u8, M2C_UNK);
f64 Cos(f32);
f64 Sin(f32);
extern s32 lbl_80351110;
extern s32 lbl_80351114;
extern f64 lbl_80351118;
extern f64 lbl_80351120;
extern f32 lbl_80351128;
M2C_UNK GXSetVtxDesc(M2C_UNK, M2C_UNK);
M2C_UNK fn_800E0804();
M2C_UNK GXSetVtxAttrFmt(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXSetTexCoordGen2(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_800E1314(M2C_UNK);
M2C_UNK fn_800E2CA4(M2C_UNK);
M2C_UNK GXLoadTexObj(s32, M2C_UNK);
M2C_UNK GXInvalidateTexAll();
M2C_UNK fn_800E41D8(M2C_UNK);
M2C_UNK GXSetTevDirect(M2C_UNK);
M2C_UNK GXSetTevOp(M2C_UNK, M2C_UNK);
M2C_UNK GXSetTevOrder(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_800E4B50(M2C_UNK);
M2C_UNK GXSetBlendMode(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern f32 lbl_80351138;
M2C_UNK PSMTXIdentity();
M2C_UNK GXSetChanMatColor(M2C_UNK, s32 *);
M2C_UNK GXSetChanCtrl(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_800E3DE8(M2C_UNK, s32 *, M2C_UNK, s32, s32, s32, s32, s32);
M2C_UNK fn_800E3F48(M2C_UNK, s16, s16);
M2C_UNK fn_800E40C4(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_800E4248(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s16);
M2C_UNK GXLoadTexMtxImm(M2C_UNK *, M2C_UNK, M2C_UNK);
extern M2C_UNK lbl_8015EAC0;
extern M2C_UNK lbl_8015EAD8;
extern s32 lbl_80350410;
extern s32 lbl_80350414;
void *fn_80005868(M2C_UNK);
M2C_UNK GXInitTexObj();
M2C_UNK GXInitTexObjLOD();
extern f32 lbl_80351140;

void fn_8000DB6C(void *arg0, u8 arg1, u8 arg2);
void fn_8000DDD0(void *arg0, s32 arg1);
void *fn_8000DFB4(void *arg0, s16 arg1, M2C_UNK arg_sp0);
void *fn_8000E228(void *arg0, s16 arg1);
void *fn_8000E2A4(void *arg0, s16 arg1, M2C_UNK arg_sp0);
void *fn_8000E3BC(void *arg0, s16 arg1);
void *fn_8000E428(void *arg0);
void *fn_8000E508(void *arg0, s16 arg1);
u8 fn_8000E5B0(void *arg0);
void fn_8000E664(s32 arg0, s32 *arg1, u16 arg2, void *arg3, u8 arg4);
void fn_8000E7D4(f32 *arg0, s32 arg1, s32 arg2);
void fn_8000E9F4(void *arg0, s32 arg1, s32 arg2);
void fn_8000EBBC(void *arg0, s32 arg1, s32 arg2, s32 *arg3, s16 arg4, s16 arg5, s16 arg6, s16 arg7, M2C_UNK arg_sp0);
void fn_8000EEFC(void *arg0, void *arg2);
void fn_8000F0D8(void *arg0, void *arg1);
void fn_8000F204(void);
void _HSD_ZListSort(void);
s32 fn_8000F258(void *arg0, void *arg1, s32 arg2, s32 arg3);
void fn_8000F358(void);
void fn_8000F40C();
void *fn_8000F9C0(void *arg0, u16 arg1, u16 arg2, s32 arg3, s32 arg4, s16 arg5, s16 arg6, f32 farg0, f32 farg1, f32 farg2, f32 farg3);

void fn_8000DB6C(void *arg0, u8 arg1, u8 arg2) { } /* draft: stub */

void fn_8000DDD0(void *arg0, s32 arg1) {
    s16 temp_r0;
    s32 var_r30;
    void *temp_r29;
    void *temp_r3;
    void *temp_r3_10;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r3_6;
    void *temp_r3_7;
    void *temp_r3_8;
    void *temp_r3_9;
    void *var_r28;

    if (arg1 != 0) {
        temp_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x2E068), void **, 8);
        M2C_FIELD(M2C_FIELD(temp_r3, void **, 0xC), M2C_UNK (**)(void *), 0x18)(temp_r3);
        temp_r29 = M2C_FIELD(arg0, void **, 0x2E068);
        /* draft: did not compile: HSD_LObjDeleteCurrentAll(0, arg0 + 0x30000); */
        var_r28 = temp_r29;
        var_r30 = 0;
loop_3:
        if (var_r30 < (s32) M2C_FIELD(temp_r29, s32 *, 0xC)) {
            temp_r3_2 = M2C_FIELD(var_r28, void **, 0x10);
            M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 0x10), M2C_UNK (**)(void *), 0x14)(temp_r3_2);
            /* draft: did not compile: var_r28 += 4; */
            var_r30 += 1;
            goto loop_3;
        }
        HSD_CObjGetCurrent();
        fn_800EF7E4();
        temp_r0 = M2C_FIELD(arg0, s16 *, 0x2E046);
        switch (temp_r0) {                          /* irregular */
        case 2:
            temp_r3_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x2E070), void **, 4);
            M2C_FIELD(M2C_FIELD(temp_r3_3, void **, 0x10), M2C_UNK (**)(void *), 0x18)(temp_r3_3);
            break;
        case 0:
            temp_r3_4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x2E068), void **, 4);
            M2C_FIELD(M2C_FIELD(temp_r3_4, void **, 0x10), M2C_UNK (**)(void *), 0x18)(temp_r3_4);
            if ((s16) M2C_FIELD(arg0, s16 *, 0x2E04A) == 1) {
                if ((s16) M2C_FIELD(arg0, s16 *, 0x2E040) != 0) {
                    temp_r3_5 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x2E078), void **, 4);
                    M2C_FIELD(M2C_FIELD(temp_r3_5, void **, 0x10), M2C_UNK (**)(void *), 0x18)(temp_r3_5);
                }
                temp_r3_6 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x2E074), void **, 4);
                M2C_FIELD(M2C_FIELD(temp_r3_6, void **, 0x10), M2C_UNK (**)(void *), 0x18)(temp_r3_6);
            }
            break;
        case 1:
            temp_r3_7 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x2E06C), void **, 4);
            M2C_FIELD(M2C_FIELD(temp_r3_7, void **, 0x10), M2C_UNK (**)(void *), 0x18)(temp_r3_7);
            if ((s16) M2C_FIELD(arg0, s16 *, 0x2E04A) == 1) {
                if ((s16) M2C_FIELD(arg0, s16 *, 0x2E040) != 0) {
                    temp_r3_8 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x2E078), void **, 4);
                    M2C_FIELD(M2C_FIELD(temp_r3_8, void **, 0x10), M2C_UNK (**)(void *), 0x18)(temp_r3_8);
                }
                temp_r3_9 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x2E074), void **, 4);
                M2C_FIELD(M2C_FIELD(temp_r3_9, void **, 0x10), M2C_UNK (**)(void *), 0x18)(temp_r3_9);
            }
            break;
        }
        temp_r3_10 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x2E068), void **, 8);
        M2C_FIELD(M2C_FIELD(temp_r3_10, void **, 0xC), M2C_UNK (**)(void *), 0x1C)(temp_r3_10);
    }
}

void *fn_8000DFB4(void *arg0, s16 arg1, M2C_UNK arg_sp0) {
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    s32 temp_cr0_eq_3;
    s32 temp_cr0_eq_4;
    s32 temp_cr0_eq_5;
    s32 var_r26;
    s32 var_r27;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *var_r27_2;
    void *var_r29;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x2E108) = &lbl_801DB5B0;
        temp_r3 = M2C_FIELD(arg0, void **, 0x2E068);
        temp_cr0_eq = temp_r3 == NULL;
        if (temp_cr0_eq == 0) {
            if (temp_cr0_eq == 0) {
                M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x30), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
            M2C_FIELD(arg0, void **, 0x2E068) = NULL;
        }
        temp_r3_2 = M2C_FIELD(arg0, void **, 0x2E06C);
        temp_cr0_eq_2 = temp_r3_2 == NULL;
        if (temp_cr0_eq_2 == 0) {
            if (temp_cr0_eq_2 == 0) {
                M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 0x30), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
            M2C_FIELD(arg0, void **, 0x2E06C) = NULL;
        }
        temp_r3_3 = M2C_FIELD(arg0, void **, 0x2E070);
        temp_cr0_eq_3 = temp_r3_3 == NULL;
        if (temp_cr0_eq_3 == 0) {
            if (temp_cr0_eq_3 == 0) {
                M2C_FIELD(M2C_FIELD(temp_r3_3, void **, 0x30), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
            M2C_FIELD(arg0, void **, 0x2E070) = NULL;
        }
        var_r29 = arg0;
        var_r27 = 0;
        do {
            temp_r3_4 = M2C_FIELD(var_r29, void **, 0x2E07C);
            temp_cr0_eq_4 = temp_r3_4 == NULL;
            if (temp_cr0_eq_4 == 0) {
                if (temp_cr0_eq_4 == 0) {
                    M2C_FIELD(M2C_FIELD(temp_r3_4, void **, 0x30), M2C_UNK (**)(M2C_UNK), 8)(1);
                }
                M2C_FIELD(var_r29, void **, 0x2E07C) = NULL;
            }
            var_r27 += 1;
            /* draft: did not compile: var_r29 += 4; */
        } while (var_r27 < 3);
        var_r27_2 = arg0;
        var_r26 = 0;
loop_25:
        if (var_r26 < (s32) M2C_FIELD(arg0, s32 *, 0x2E0D0)) {
            temp_r3_5 = M2C_FIELD(var_r27_2, void **, 0x2E0A8);
            temp_cr0_eq_5 = temp_r3_5 == NULL;
            if (temp_cr0_eq_5 == 0) {
                if (temp_cr0_eq_5 == 0) {
                    M2C_FIELD(M2C_FIELD(temp_r3_5, void **, 0x1C), M2C_UNK (**)(M2C_UNK), 8)(1);
                }
                M2C_FIELD(var_r27_2, void **, 0x2E0A8) = NULL;
            }
            /* draft: did not compile: var_r27_2 += 4; */
            var_r26 += 1;
            goto loop_25;
        }
        if ((fn_8000FE64(M2C_FIELD(arg0, u32 *, 0x2C010)) != 0) && ((u32) M2C_FIELD(arg0, u32 *, 0x2C010) != 0U)) {
            fn_8000FEA0(1);
            M2C_FIELD(arg0, u32 *, 0x2C010) = 0U;
        }
        if ((fn_8000FE64(M2C_FIELD(arg0, u32 *, 0x2C014)) != 0) && ((u32) M2C_FIELD(arg0, u32 *, 0x2C014) != 0U)) {
            fn_8000FEA0(1);
            M2C_FIELD(arg0, u32 *, 0x2C014) = 0U;
        }
        if ((fn_8000FE64(M2C_FIELD(arg0, u32 *, 0x2C018)) != 0) && ((u32) M2C_FIELD(arg0, u32 *, 0x2C018) != 0U)) {
            fn_8000FEA0(1);
            M2C_FIELD(arg0, u32 *, 0x2C018) = 0U;
        }
        if ((fn_8000FE64(M2C_FIELD(arg0, u32 *, 0x2C01C)) != 0) && ((u32) M2C_FIELD(arg0, u32 *, 0x2C01C) != 0U)) {
            fn_8000FEA0(1);
            M2C_FIELD(arg0, u32 *, 0x2C01C) = 0U;
        }
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

void *fn_8000E228(void *arg0, s16 arg1) {
    s32 temp_cr0_eq;

    temp_cr0_eq = arg0 == NULL;
    switch (temp_cr0_eq) {
    case 0:
            M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &lbl_801DB5A4;
            switch (temp_cr0_eq) {
            case 0:
                    M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_801DB58C;
                    if ((u8) M2C_FIELD(arg0, u8 *, 4) != 0) {
                        FreePictureSD(M2C_FIELD(arg0, s32 *, 0));
                    }
                break;
            }
            if (arg1 > 0) {
                fn_80005888(arg0);
            }
        break;
    }
    return arg0;
}

void *fn_8000E2A4(void *arg0, s16 arg1, M2C_UNK arg_sp0) {
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    s32 temp_cr0_eq_3;
    s32 var_r29;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *var_r30;

    if (arg0 != NULL) {
        var_r30 = arg0;
        var_r29 = 0;
        M2C_FIELD(arg0, M2C_UNK **, 0x30) = &lbl_801DB5CC;
loop_5:
        if (var_r29 < (s32) M2C_FIELD(arg0, s32 *, 0xC)) {
            if ((u32) M2C_FIELD(var_r30, u32 *, 0x10) != 0U) {
                fn_80008850(1);
                M2C_FIELD(var_r30, u32 *, 0x10) = 0U;
            }
            /* draft: did not compile: var_r30 += 4; */
            var_r29 += 1;
            goto loop_5;
        }
        temp_r3 = M2C_FIELD(arg0, void **, 4);
        temp_cr0_eq = temp_r3 == NULL;
        if (temp_cr0_eq == 0) {
            if (temp_cr0_eq == 0) {
                M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x10), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
            M2C_FIELD(arg0, void **, 4) = NULL;
        }
        temp_r3_2 = M2C_FIELD(arg0, void **, 8);
        temp_cr0_eq_2 = temp_r3_2 == NULL;
        if (temp_cr0_eq_2 == 0) {
            if (temp_cr0_eq_2 == 0) {
                M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 0xC), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
            M2C_FIELD(arg0, void **, 8) = NULL;
        }
        temp_r3_3 = M2C_FIELD(arg0, void **, 0);
        temp_cr0_eq_3 = temp_r3_3 == NULL;
        if (temp_cr0_eq_3 == 0) {
            if (temp_cr0_eq_3 == 0) {
                M2C_FIELD(M2C_FIELD(temp_r3_3, void **, 0xD8), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
            M2C_FIELD(arg0, void **, 0) = NULL;
        }
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

void *fn_8000E3BC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_801DB58C;
        if ((u8) M2C_FIELD(arg0, u8 *, 4) != 0) {
            FreePictureSD(M2C_FIELD(arg0, s32 *, 0));
        }
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma peephole off
void *fn_8000E428(void *arg0) {
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *var_r0;

    /* draft: did not compile: temp_r3 = get_up_vector_for_viewing_mtx(8, &lbl_801DB600); */
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 0) = 0;
        M2C_FIELD(temp_r3, s32 *, 4) = 0;
    }
    M2C_FIELD(arg0, void **, 0) = temp_r3;
    /* draft: did not compile: temp_r3_2 = get_up_vector_for_viewing_mtx(8); */
    if (temp_r3_2 != NULL) {
        M2C_FIELD(temp_r3_2, s32 *, 0) = 0;
        M2C_FIELD(temp_r3_2, s32 *, 4) = 0;
    }
    M2C_FIELD(arg0, void **, 4) = temp_r3_2;
    /* draft: did not compile: temp_r3_3 = get_up_vector_for_viewing_mtx(8); */
    if (temp_r3_3 != NULL) {
        M2C_FIELD(temp_r3_3, s32 *, 0) = 0;
        M2C_FIELD(temp_r3_3, s32 *, 4) = 0;
    }
    M2C_FIELD(arg0, void **, 8) = temp_r3_3;
    ReadBmp(M2C_FIELD(arg0, void **, 8), &lbl_801DB600 + 0x1C);
    ReadBmp(M2C_FIELD(arg0, void **, 0), &lbl_801DB600);
    ReadBmp(M2C_FIELD(arg0, void **, 4), &lbl_801DB600 + 0x10);
    /* draft: did not compile: var_r0 = get_up_vector_for_viewing_mtx(0x18); */
    if (var_r0 != NULL) {
        var_r0 = fn_800A13DC(&lbl_801DB600 + 0x34);
    }
    M2C_FIELD(arg0, void **, 0xC) = var_r0;
    return arg0;
}
#pragma pop

void *fn_8000E508(void *arg0, s16 arg1) {
    void *temp_r3;

    if (arg0 != NULL) {
loop_3:
        if (fn_8000E5B0(arg0) == 0) {
            VIWaitForRetrace();
            goto loop_3;
        }
        fn_80020694(M2C_FIELD(arg0, s32 *, 0), 1);
        fn_80020694(M2C_FIELD(arg0, s32 *, 4), 1);
        fn_80020694(M2C_FIELD(arg0, s32 *, 8), 1);
        temp_r3 = M2C_FIELD(arg0, void **, 0xC);
        if (temp_r3 != NULL) {
            M2C_FIELD(M2C_FIELD(temp_r3, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
        }
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

u8 fn_8000E5B0(void *arg0) {
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    u8 var_r31;
    u8 var_r5;
    u8 var_r6;
    void *temp_r3;

    var_r31 = 0;
    var_r5 = 0;
    var_r6 = 0;
    temp_r4 = *M2C_FIELD(arg0, s32 **, 0);
    if (((u32) (-temp_r4 | temp_r4) >> 0x1FU) != 0) {
        temp_r4_2 = *M2C_FIELD(arg0, s32 **, 4);
        if (((u32) (-temp_r4_2 | temp_r4_2) >> 0x1FU) != 0) {
            var_r6 = 1;
        }
    }
    if (var_r6 != 0) {
        temp_r4_3 = *M2C_FIELD(arg0, s32 **, 8);
        if (((u32) (-temp_r4_3 | temp_r4_3) >> 0x1FU) != 0) {
            var_r5 = 1;
        }
    }
    if (var_r5 != 0) {
        temp_r3 = M2C_FIELD(arg0, void **, 0xC);
        if (M2C_FIELD(M2C_FIELD(temp_r3, void **, 8), u8 (**)(void *), 0xC)(temp_r3) != 0) {
            var_r31 = 1;
        }
    }
    return var_r31;
}

void fn_8000E664(s32 arg0, s32 *arg1, u16 arg2, void *arg3, u8 arg4) {
    s32 *var_r8;
    s32 temp_r0_2;
    s32 temp_r0_3;
    u16 var_ctr_2;
    u16 var_r3;
    u32 temp_r0;
    u32 var_ctr;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;

    fn_800EA0F8(arg4, 5);
    GXBegin(0xB0, 0, arg2);
    var_r8 = arg1;
    var_r3 = arg2;
    if (arg2 > 0U) {
        temp_r0 = arg2 >> 1U;
        var_ctr = temp_r0;
        if (temp_r0 != 0) {
            do {
                /* draft: did not compile: temp_r4 = arg0 + (M2C_FIELD(var_r8, s32 *, 0) * 0xC); */
                *(f32 *)0xCC008000 = M2C_FIELD(temp_r4, f32 *, 0);
                *(f32 *)0xCC008000 = M2C_FIELD(temp_r4, f32 *, 4);
                *(f32 *)0xCC008000 = M2C_FIELD(temp_r4, f32 *, 8);
                *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg3, u8 *, 0);
                *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg3, u8 *, 1);
                *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg3, u8 *, 2);
                *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg3, u8 *, 3);
                temp_r0_2 = M2C_FIELD(var_r8, s32 *, 4);
                var_r8 += 8;
                /* draft: did not compile: temp_r4_2 = arg0 + (temp_r0_2 * 0xC); */
                *(f32 *)0xCC008000 = M2C_FIELD(temp_r4_2, f32 *, 0);
                *(f32 *)0xCC008000 = M2C_FIELD(temp_r4_2, f32 *, 4);
                *(f32 *)0xCC008000 = M2C_FIELD(temp_r4_2, f32 *, 8);
                *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg3, u8 *, 0);
                *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg3, u8 *, 1);
                *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg3, u8 *, 2);
                *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg3, u8 *, 3);
                var_ctr -= 1;
            } while (var_ctr != 0);
            var_r3 &= 1;
            if (var_r3 != 0) {
                goto block_4;
            }
        } else {
block_4:
            var_ctr_2 = var_r3;
            do {
                temp_r0_3 = *var_r8;
                var_r8 += 4;
                /* draft: did not compile: temp_r4_3 = arg0 + (temp_r0_3 * 0xC); */
                *(f32 *)0xCC008000 = M2C_FIELD(temp_r4_3, f32 *, 0);
                *(f32 *)0xCC008000 = M2C_FIELD(temp_r4_3, f32 *, 4);
                *(f32 *)0xCC008000 = M2C_FIELD(temp_r4_3, f32 *, 8);
                *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg3, u8 *, 0);
                *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg3, u8 *, 1);
                *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg3, u8 *, 2);
                *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg3, u8 *, 3);
                var_ctr_2 -= 1;
            } while (var_ctr_2 != 0);
        }
    }
}

void fn_8000E7D4(f32 *arg0, s32 arg1, s32 arg2) {
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    f32 sp10;
    s32 spC;
    s32 sp8;
    f32 temp_f0;
    f32 temp_f23;
    f32 temp_f24;
    f32 temp_f25;
    f32 temp_f25_2;
    f32 temp_f26;
    f32 temp_f26_2;
    f32 temp_f30;
    f32 temp_f31;
    f64 temp_f27;
    f64 temp_f29;
    s32 var_r29;

    temp_f31 = *arg0;
    var_r29 = 0;
    sp8 = lbl_80351110;
    temp_f27 = lbl_80351118;
    spC = lbl_80351114;
    temp_f29 = lbl_80351120;
    temp_f30 = lbl_80351128;
    do {
        temp_f26 = (f32) (temp_f27 * (f64) var_r29 * temp_f29);
        temp_f25 = (f32) (temp_f27 * (f64) (var_r29 + 1) * temp_f29);
        temp_f26_2 = temp_f31 * (f32) Cos(temp_f26);
        temp_f24 = temp_f31 * (f32) Sin((u16)temp_f26);
        temp_f25_2 = temp_f31 * (f32) Cos(temp_f25);
        temp_f0 = (f32) Sin((u16)temp_f25);
        sp10 = temp_f26_2;
        sp14 = temp_f24;
        temp_f23 = temp_f31 * temp_f0;
        sp18 = temp_f30;
        sp1C = temp_f25_2;
        sp20 = temp_f23;
        sp24 = temp_f30;
        /* draft: did not compile: fn_8000E664(&sp10, &sp8, 2, arg1, arg2); */
        sp10 = temp_f30;
        sp14 = temp_f24;
        sp18 = temp_f26_2;
        sp1C = temp_f30;
        sp20 = temp_f23;
        sp24 = temp_f25_2;
        /* draft: did not compile: fn_8000E664(&sp10, &sp8, 2, arg1, arg2); */
        sp10 = temp_f26_2;
        sp14 = temp_f30;
        sp18 = temp_f24;
        sp1C = temp_f25_2;
        sp20 = temp_f30;
        sp24 = temp_f23;
        /* draft: did not compile: fn_8000E664(&sp10, &sp8, 2, arg1, arg2); */
        var_r29 += 1;
    } while (var_r29 < 0x10);
}

void fn_8000E9F4(void *arg0, s32 arg1, s32 arg2) {
    GXInvalidateTexAll();
    GXLoadTexObj(arg1, 0);
    fn_800E0804();
    if (arg2 != 0) {
        GXSetBlendMode(1, 4, 5, 0);
    } else {
        GXSetBlendMode(0, 4, 5, 0);
    }
    GXSetVtxAttrFmt(0, 9, 0, 4, 0);
    GXSetVtxDesc(9, 1);
    GXSetVtxAttrFmt(0, 0xD, 1, 4, 0);
    GXSetVtxDesc(0xD, 1);
    fn_800E4B50(1);
    fn_800E1314(1);
    fn_800E2CA4(0);
    fn_800E41D8(0);
    GXSetTevDirect(0);
    GXSetTexCoordGen2(0, 1, 4, 0x3C, 0, 0x7D);
    GXSetTevOrder(0, 0, 0, 0xFF);
    GXSetTevOp(0, 3);
    GXBegin(0x80, 0, 4);
    *(f32 *)0xCC008000 = M2C_FIELD(arg0, f32 *, 0);
    *(f32 *)0xCC008000 = M2C_FIELD(arg0, f32 *, 4);
    *(f32 *)0xCC008000 = lbl_80351128;
    *(f32 *)0xCC008000 = lbl_80351128;
    *(f32 *)0xCC008000 = M2C_FIELD(arg0, f32 *, 0xC);
    *(f32 *)0xCC008000 = M2C_FIELD(arg0, f32 *, 0x10);
    *(f32 *)0xCC008000 = lbl_80351138;
    *(f32 *)0xCC008000 = lbl_80351128;
    *(f32 *)0xCC008000 = M2C_FIELD(arg0, f32 *, 0x18);
    *(f32 *)0xCC008000 = M2C_FIELD(arg0, f32 *, 0x1C);
    *(f32 *)0xCC008000 = lbl_80351138;
    *(f32 *)0xCC008000 = lbl_80351138;
    *(f32 *)0xCC008000 = M2C_FIELD(arg0, f32 *, 0x24);
    *(f32 *)0xCC008000 = M2C_FIELD(arg0, f32 *, 0x28);
    *(f32 *)0xCC008000 = lbl_80351128;
    *(f32 *)0xCC008000 = lbl_80351138;
}

void fn_8000EBBC(void *arg0, s32 arg1, s32 arg2, s32 *arg3, s16 arg4, s16 arg5, s16 arg6, s16 arg7, M2C_UNK arg_sp0) {
    M2C_UNK sp3C;
    s32 sp38;
    s32 sp34;
    s32 sp30;
    s32 sp2C;
    s32 sp28;
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    f32 temp_f1;

    GXInvalidateTexAll();
    GXLoadTexObj(arg1, 0);
    GXLoadTexObj(arg2, 1);
    fn_800E0804();
    if (arg7 != 0) {
        GXSetBlendMode(1, 4, 5, 0);
    } else {
        GXSetBlendMode(0, 4, 5, 0);
    }
    GXSetVtxAttrFmt(0, 9, 0, 4, 0);
    GXSetVtxDesc(9, 1);
    GXSetVtxAttrFmt(0, 0xD, 1, 4, 0);
    GXSetVtxDesc(0xD, 1);
    sp8 = *arg3;
    GXSetChanMatColor(4, &sp8);
    GXSetChanCtrl(4, 0, 0, 0, 0, 0, 2);
    fn_800E2CA4(1);
    GXSetTexCoordGen2(0, 1, 4, 0x1E, 0, 0x7D);
    fn_800E4B50(1);
    fn_800E1314(1);
    GXSetTevOrder(0, 0, 0, 4);
    GXSetTevOp(0, 0);
    PSMTXIdentity(&sp3C);
    GXLoadTexMtxImm(&sp3C, 0x1E, 1);
    fn_800E41D8(1);
    fn_800E40C4(0, 0, 1);
    fn_800E3F48(0, arg4, arg5);
    if (arg6 == 3) {
        sp24 = M2C_FIELD(&lbl_8015EAC0, s32 *, 0);
        sp28 = M2C_FIELD(&lbl_8015EAC0, s32 *, 4);
        sp2C = M2C_FIELD(&lbl_8015EAC0, s32 *, 8);
        sp30 = M2C_FIELD(&lbl_8015EAC0, s32 *, 0xC);
        sp34 = M2C_FIELD(&lbl_8015EAC0, s32 *, 0x10);
        sp38 = M2C_FIELD(&lbl_8015EAC0, s32 *, 0x14);
        fn_800E3DE8(3, &sp24, 0x20, M2C_FIELD(&lbl_8015EAC0, s32 *, 0x10), M2C_FIELD(&lbl_8015EAC0, s32 *, 0xC), M2C_FIELD(&lbl_8015EAC0, s32 *, 8), M2C_FIELD(&lbl_8015EAC0, s32 *, 4), M2C_FIELD(&lbl_8015EAC0, s32 *, 0));
        fn_800E4248(0, 0, 1, 0, arg6);
    } else if (arg6 == 2) {
        spC = M2C_FIELD(&lbl_8015EAD8, s32 *, 0);
        sp10 = M2C_FIELD(&lbl_8015EAD8, s32 *, 4);
        sp14 = M2C_FIELD(&lbl_8015EAD8, s32 *, 8);
        sp18 = M2C_FIELD(&lbl_8015EAD8, s32 *, 0xC);
        sp1C = M2C_FIELD(&lbl_8015EAD8, s32 *, 0x10);
        sp20 = M2C_FIELD(&lbl_8015EAD8, s32 *, 0x14);
        fn_800E3DE8(3, &spC, 0x1C, M2C_FIELD(&lbl_8015EAD8, s32 *, 0x10), M2C_FIELD(&lbl_8015EAD8, s32 *, 0xC), M2C_FIELD(&lbl_8015EAD8, s32 *, 8), M2C_FIELD(&lbl_8015EAD8, s32 *, 4), M2C_FIELD(&lbl_8015EAD8, s32 *, 0));
        fn_800E4248(0, 0, 1, 0, 3);
    } else {
        fn_800E4248(0, 0, 1, 0, 1);
    }
    GXBegin(0x80, 0, 4);
    *(f32 *)0xCC008000 = M2C_FIELD(arg0, f32 *, 0);
    *(f32 *)0xCC008000 = M2C_FIELD(arg0, f32 *, 4);
    *(f32 *)0xCC008000 = lbl_80351128;
    *(f32 *)0xCC008000 = lbl_80351128;
    *(f32 *)0xCC008000 = M2C_FIELD(arg0, f32 *, 0xC);
    *(f32 *)0xCC008000 = M2C_FIELD(arg0, f32 *, 0x10);
    *(f32 *)0xCC008000 = lbl_80351138;
    *(f32 *)0xCC008000 = lbl_80351128;
    *(f32 *)0xCC008000 = M2C_FIELD(arg0, f32 *, 0x18);
    *(f32 *)0xCC008000 = M2C_FIELD(arg0, f32 *, 0x1C);
    *(f32 *)0xCC008000 = lbl_80351138;
    *(f32 *)0xCC008000 = lbl_80351138;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x28);
    *(f32 *)0xCC008000 = M2C_FIELD(arg0, f32 *, 0x24);
    *(f32 *)0xCC008000 = temp_f1;
    *(f32 *)0xCC008000 = lbl_80351128;
    *(f32 *)0xCC008000 = lbl_80351138;
    GXSetTevDirect((long)(0));
}

void fn_8000EEFC(void *arg0, void *arg2) {
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;

    fn_800E0804();
    GXSetBlendMode(0, 4, 5, 0);
    GXSetVtxAttrFmt(0, 9, 1, 4, 0);
    GXSetVtxDesc(9, 1);
    GXSetVtxAttrFmt(0, 0xB, 1, 5, 0);
    GXSetVtxDesc(0xB, 1);
    GXSetChanCtrl(4, 0, 1, 1, 0, 0, 2);
    fn_800E2CA4(1);
    GXSetTevOrder(0, 0xFF, 0xFF, 4);
    GXSetTevOp(0, 4);
    fn_800E4B50(1);
    GXBegin(0x80, 0, 4);
    temp_r3 = M2C_FIELD(arg0, void **, 0);
    *(f32 *)0xCC008000 = M2C_FIELD(temp_r3, f32 *, 0);
    *(f32 *)0xCC008000 = M2C_FIELD(temp_r3, f32 *, 4);
    *(f32 *)0xCC008000 = M2C_FIELD(temp_r3, f32 *, 8);
    *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg2, u8 *, 0);
    *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg2, u8 *, 1);
    *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg2, u8 *, 2);
    *(f32 *)0xCC008000 = 0xFF;
    temp_r3_2 = M2C_FIELD(arg0, void **, 4);
    *(f32 *)0xCC008000 = M2C_FIELD(temp_r3_2, f32 *, 0);
    *(f32 *)0xCC008000 = M2C_FIELD(temp_r3_2, f32 *, 4);
    *(f32 *)0xCC008000 = 0xFF;
    *(f32 *)0xCC008000 = M2C_FIELD(temp_r3_2, f32 *, 8);
    *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg2, u8 *, 4);
    *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg2, u8 *, 5);
    *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg2, u8 *, 6);
    temp_r3_3 = M2C_FIELD(arg0, void **, 8);
    *(f32 *)0xCC008000 = M2C_FIELD(temp_r3_3, f32 *, 0);
    *(f32 *)0xCC008000 = M2C_FIELD(temp_r3_3, f32 *, 4);
    *(f32 *)0xCC008000 = M2C_FIELD(temp_r3_3, f32 *, 8);
    *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg2, u8 *, 8);
    *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg2, u8 *, 9);
    *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg2, u8 *, 0xA);
    temp_r3_4 = M2C_FIELD(arg0, void **, 0xC);
    *(f32 *)0xCC008000 = M2C_FIELD(temp_r3_4, f32 *, 0);
    *(f32 *)0xCC008000 = M2C_FIELD(temp_r3_4, f32 *, 4);
    *(f32 *)0xCC008000 = M2C_FIELD(temp_r3_4, f32 *, 8);
    *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg2, u8 *, 0xC);
    *(f32 *)0xCC008000 = 0xFF;
    *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg2, u8 *, 0xD);
    *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg2, u8 *, 0xE);
    *(f32 *)0xCC008000 = 0xFF;
}

void fn_8000F0D8(void *arg0, void *arg1) {
    GXSetVtxDesc(9, 1);
    GXSetVtxAttrFmt(0, 9, 0, 4, 0);
    GXBegin(0x80, 0, 4);
    *(f32 *)0xCC008000 = M2C_FIELD(arg0, f32 *, 0);
    *(f32 *)0xCC008000 = M2C_FIELD(arg0, f32 *, 4);
    *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg1, u8 *, 0);
    *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg1, u8 *, 1);
    *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg1, u8 *, 2);
    *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg1, u8 *, 3);
    *(f32 *)0xCC008000 = M2C_FIELD(arg0, f32 *, 0xC);
    *(f32 *)0xCC008000 = M2C_FIELD(arg0, f32 *, 0x10);
    *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg1, u8 *, 0);
    *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg1, u8 *, 1);
    *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg1, u8 *, 2);
    *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg1, u8 *, 3);
    *(f32 *)0xCC008000 = M2C_FIELD(arg0, f32 *, 0x18);
    *(f32 *)0xCC008000 = M2C_FIELD(arg0, f32 *, 0x1C);
    *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg1, u8 *, 0);
    *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg1, u8 *, 1);
    *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg1, u8 *, 2);
    *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg1, u8 *, 3);
    *(f32 *)0xCC008000 = M2C_FIELD(arg0, f32 *, 0x24);
    *(f32 *)0xCC008000 = M2C_FIELD(arg0, f32 *, 0x28);
    *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg1, u8 *, 0);
    *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg1, u8 *, 1);
    *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg1, u8 *, 2);
    *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg1, u8 *, 3);
}

void fn_8000F204(void) {
    lbl_80350410 = 0;
    lbl_80350414 = 0;
}

void _HSD_ZListSort(void) {
    void *temp_r31;
    void *var_r3;

    /* draft: did not compile: var_r3 = lbl_80350410; */
loop_2:
    if (var_r3 != NULL) {
        temp_r31 = M2C_FIELD(var_r3, void **, 0xB0);
        fn_8000FEA0(1);
        var_r3 = temp_r31;
        goto loop_2;
    }
}

s32 fn_8000F258(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s8 spB;
    s8 spA;
    s8 sp9;
    s8 sp8;
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r5;
    s32 var_r10;
    s32 var_r7;
    s32 var_r8;
    s32 var_r9;
    u8 temp_r11;
    u8 temp_r12;
    u8 temp_r30;
    u8 temp_r31;

    var_r7 = 0xFF;
    temp_r11 = M2C_FIELD(arg0, u8 *, 0);
    temp_r12 = M2C_FIELD(arg0, u8 *, 1);
    temp_r31 = M2C_FIELD(arg0, u8 *, 2);
    temp_r30 = M2C_FIELD(arg0, u8 *, 3);
    temp_r5 = temp_r11 + ((s32) (arg2 * (M2C_FIELD(arg1, u8 *, 0) - temp_r11)) / arg3);
    temp_r4 = temp_r12 + ((s32) (arg2 * (M2C_FIELD(arg1, u8 *, 1) - temp_r12)) / arg3);
    temp_r3 = temp_r31 + ((s32) (arg2 * (M2C_FIELD(arg1, u8 *, 2) - temp_r31)) / arg3);
    temp_r0 = temp_r30 + ((s32) (arg2 * (M2C_FIELD(arg1, u8 *, 3) - temp_r30)) / arg3);
    if (temp_r5 <= 0xFF) {
        var_r7 = temp_r5;
    }
    var_r10 = 0xFF;
    if (temp_r4 <= 0xFF) {
        var_r10 = temp_r4;
    }
    var_r9 = 0xFF;
    if (temp_r3 <= 0xFF) {
        var_r9 = temp_r3;
    }
    var_r8 = 0xFF;
    if (temp_r0 <= 0xFF) {
        var_r8 = temp_r0;
    }
    sp8 = var_r7 & ~(var_r7 >> 0x1F);
    sp9 = var_r10 & ~(var_r10 >> 0x1F);
    spA = var_r9 & ~(var_r9 >> 0x1F);
    spB = var_r8 & ~((0 - ((u32) var_r8 >> 0x1FU)) - !M2C_CARRY);
    return (s32) sp8;
}

void fn_8000F358(void) {
    s16 temp_r4;
    s16 temp_r5;
    s32 temp_r0;
    void *temp_r31;
    void *var_r3;

    /* draft: did not compile: var_r3 = lbl_80350410; */
    lbl_80350414 += 1;
loop_12:
    if (var_r3 != NULL) {
        temp_r0 = M2C_FIELD(var_r3, s32 *, 0);
        temp_r31 = M2C_FIELD(var_r3, void **, 0xB0);
        if (temp_r0 < 7) {
            if (temp_r0 < 5) {

            } else {
                temp_r4 = M2C_FIELD(var_r3, s16 *, 0xA2);
                temp_r5 = M2C_FIELD(var_r3, s16 *, 0xA0);
                if (temp_r4 <= temp_r5) {
                    if (temp_r0 == 5) {
                        fn_8000FEA0(1);
                    } else if ((s32) (M2C_FIELD(var_r3, s16 *, 0xA4) + temp_r4) < temp_r5) {
                        fn_8000FEA0(1);
                    } else {
                        M2C_FIELD(var_r3, s16 *, 0xA0) = (s16) (temp_r5 + 1);
                    }
                } else {
                    M2C_FIELD(var_r3, s16 *, 0xA0) = (s16) (temp_r5 + 1);
                }
            }
        }
        var_r3 = temp_r31;
        goto loop_12;
    }
}

void fn_8000F40C() { } /* draft: stub */

void *fn_8000F9C0(void *arg0, u16 arg1, u16 arg2, s32 arg3, s32 arg4, s16 arg5, s16 arg6, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    f32 temp_f1;
    f32 temp_f2;
    void *temp_r6;
    void *temp_r6_2;
    void *temp_r6_3;
    void *temp_r6_4;

    M2C_FIELD(arg0, void **, 0x78) = fn_80005868(0x30);
    temp_f1 = farg2 + farg0;
    temp_f2 = farg3 + farg1;
    temp_r6 = M2C_FIELD(arg0, void **, 0x78);
    M2C_FIELD(temp_r6, f32 *, 0) = farg2;
    M2C_FIELD(temp_r6, f32 *, 4) = farg3;
    M2C_FIELD(temp_r6, f32 *, 8) = (f32) lbl_80351128;
    temp_r6_2 = M2C_FIELD(arg0, void **, 0x78);
    M2C_FIELD(temp_r6_2, f32 *, 0xC) = temp_f1;
    M2C_FIELD(temp_r6_2, f32 *, 0x10) = farg3;
    M2C_FIELD(temp_r6_2, f32 *, 0x14) = (f32) lbl_80351128;
    temp_r6_3 = M2C_FIELD(arg0, void **, 0x78);
    M2C_FIELD(temp_r6_3, f32 *, 0x18) = temp_f1;
    M2C_FIELD(temp_r6_3, f32 *, 0x1C) = temp_f2;
    M2C_FIELD(temp_r6_3, f32 *, 0x20) = (f32) lbl_80351128;
    temp_r6_4 = M2C_FIELD(arg0, void **, 0x78);
    M2C_FIELD(temp_r6_4, f32 *, 0x24) = farg2;
    M2C_FIELD(temp_r6_4, f32 *, 0x28) = temp_f2;
    M2C_FIELD(temp_r6_4, f32 *, 0x2C) = (f32) lbl_80351128;
    M2C_FIELD(arg0, s32 *, 0x90) = 0;
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 7;
    M2C_FIELD(arg0, s16 *, 0x9C) = 1;
    M2C_FIELD(arg0, s16 *, 0xA6) = arg5;
    M2C_FIELD(arg0, s16 *, 0xAE) = 0;
    M2C_FIELD(arg0, s16 *, 0x9E) = arg6;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    /* draft: did not compile: PSMTXIdentity(arg0 + 4, 7, 0, temp_r6_4, temp_f1, temp_f2); */
    /* draft: did not compile: GXInitTexObj(arg0 + 0x38, arg3, arg1, arg2, arg4, 0, 0, 0); */
    /* draft: did not compile: GXInitTexObjLOD(arg0 + 0x38, 0, 0, 0, 0, 0, lbl_80351128, lbl_80351140, lbl_80351128); */
    if ((void *) lbl_80350410 == NULL) {
        /* draft: did not compile: lbl_80350410 = arg0; */
        M2C_FIELD(arg0, void **, 0xB0) = NULL;
    } else {
        M2C_FIELD(arg0, void **, 0xB0) = (void *) lbl_80350410;
        /* draft: did not compile: lbl_80350410 = arg0; */
    }
    return arg0;
}
