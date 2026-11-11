/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK PSMTXConcat(M2C_UNK *, void *, void *);
M2C_UNK PSMTXTrans();
M2C_UNK PSMTXScale(M2C_UNK *, f32, f32, f32);
M2C_UNK HSD_MkRotationMtx(M2C_UNK *, f32 *);
M2C_UNK __assert(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_802A8378;
extern M2C_UNK lbl_80350078;
extern f32 lbl_80351E10;
extern f32 lbl_80351E14;
extern f32 lbl_80351E1C;
M2C_UNK PSMTXMultVecSR(s32, M2C_UNK *, M2C_UNK *);
M2C_UNK PSVECNormalize(M2C_UNK *, f32 *, f32);
M2C_UNK GXLoadTexMtxImm(f32 *, s32, M2C_UNK, f32, f32, f32, f32, f32, f32, f32, f32, f32);
M2C_UNK HSD_LObjGetLightVector(s32, M2C_UNK *);
s32 HSD_LObjGetCurrentByType(M2C_UNK);
s32 HSD_CObjGetInvViewingMtxPtrDirect();
s32 HSD_CObjGetCurrent();
extern f32 lbl_802A839C;
extern M2C_UNK lbl_80350088;
extern f32 lbl_80351E28;
extern f32 lbl_80351E2C;
extern f32 lbl_80351E30;
extern f64 lbl_80351E38;
M2C_UNK GXSetTexCoordGen2(s32, s32, s32, s32, M2C_UNK, s32);
s32 HSD_LObjGetLightMaskDiffuse();
extern M2C_UNK lbl_802A83CC;
s32 HSD_StateAssignTev();
M2C_UNK HSD_SetupTevStage(M2C_UNK *, s32);
extern M2C_UNK lbl_802A83EC;
extern M2C_UNK lbl_802A8460;
s32 HSD_TExpTev(s32, s32);
s32 HSD_TExpCnst();
M2C_UNK HSD_TExpColorOp(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK HSD_TExpAlphaOp(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK HSD_TExpColorIn(s32, M2C_UNK, s32, M2C_UNK, s32, M2C_UNK, s32, M2C_UNK);
M2C_UNK HSD_TExpAlphaIn(s32, M2C_UNK, s32, M2C_UNK, s32, M2C_UNK, s32, M2C_UNK);
M2C_UNK HSD_TExpOrder(s32, void *, M2C_UNK);
extern M2C_UNK lbl_80350090;
M2C_UNK GXInitTexObj(M2C_UNK *, u32, u16, u16, s32, s32, s32, s32);
M2C_UNK GXInitTexObjCI(M2C_UNK *, u32, u16, u16, s32, s32, s32, s32);
M2C_UNK GXInitTexObjLOD(M2C_UNK *, s32, s32, u8, u8, s32, f32, f32, f32);
M2C_UNK GXLoadTexObj(M2C_UNK *, s32);
M2C_UNK GXInitTlutObj(M2C_UNK *, s32, s32, u16);
M2C_UNK GXLoadTlut(M2C_UNK *, s32);
M2C_UNK HSD_StateRegisterTexGen();
extern M2C_UNK lbl_802A8280;
extern M2C_UNK lbl_80350094;
extern void *lbl_80350B9C;

void MakeTextureMtx(void *arg0);
void TObjSetupMtx(void *arg0);
void HSD_TObjSetupTextureCoordGen(void *arg0);
void HSD_TObjSetupVolatileTev(void *arg0);
void MakeColorGenTExp();
void TObjMakeTExp(void *arg0, s32 arg1, s32 arg2, s32 *arg3, s32 *arg4, s32 arg5, M2C_UNK arg_sp0);
void HSD_TObjAssignResources();
void HSD_TObjSetup(void *arg0, M2C_UNK arg_sp0);
void HSD_TGTex2Index();
void HSD_TexCoordID2TexGenSrc();
void HSD_Index2TexMap();
void HSD_Index2TexCoord();
void HSD_TexMtx2Index();

void MakeTextureMtx(void *arg0) { } /* draft: stub */

void TObjSetupMtx(void *arg0) { } /* draft: stub */

void HSD_TObjSetupTextureCoordGen(void *arg0) { } /* draft: stub */

void HSD_TObjSetupVolatileTev(void *arg0) {
    s32 temp_r4;
    s32 temp_r4_2;
    void *var_r30;
    void *var_r31;

    var_r31 = arg0;
loop_11:
    if (var_r31 == NULL) {

    } else {
        if ((s32) M2C_FIELD(var_r31, s32 *, 0xC) != 0xFF) {
            if (M2C_FIELD(var_r31, s32 *, 0x4C) & 0x01000000) {
                M2C_FIELD(&lbl_802A8460, s32 *, 8) = HSD_StateAssignTev();
                M2C_FIELD(&lbl_802A8460, s32 *, 0xC) = (s32) M2C_FIELD(var_r31, s32 *, 0xA4);
                temp_r4 = M2C_FIELD(var_r31, s32 *, 0xC);
                M2C_FIELD(&lbl_802A8460, s32 *, 0x10) = temp_r4;
                M2C_FIELD(&lbl_802A8460, s32 *, 0x18) = 0;
                M2C_FIELD(&lbl_802A8460, s32 *, 0x3C) = 0;
                M2C_FIELD(&lbl_802A8460, s8 *, 0x34) = 0;
                HSD_SetupTevStage(&lbl_802A8460, temp_r4);
                M2C_FIELD(&lbl_802A8460, s32 *, 8) = HSD_StateAssignTev();
                temp_r4_2 = M2C_FIELD(var_r31, s32 *, 0xA4) + 1;
                M2C_FIELD(&lbl_802A8460, s32 *, 0x18) = 1;
                M2C_FIELD(&lbl_802A8460, s32 *, 0xC) = temp_r4_2;
                M2C_FIELD(&lbl_802A8460, s32 *, 0x3C) = 1;
                M2C_FIELD(&lbl_802A8460, s8 *, 0x34) = 1;
                HSD_SetupTevStage(&lbl_802A8460, temp_r4_2);
            }
            if (M2C_FIELD(var_r31, s32 *, 0x4C) & 0x100) {
                var_r30 = var_r31;
loop_7:
                if (var_r30 != NULL) {
                    if ((u32) (M2C_FIELD(var_r30, s32 *, 0x4C) & 0xF) != 3) {
                        return;
                    }
                    M2C_FIELD(&lbl_802A83EC, s32 *, 8) = HSD_StateAssignTev();
                    M2C_FIELD(&lbl_802A83EC, s32 *, 0xC) = (s32) M2C_FIELD(var_r30, s32 *, 0xA4);
                    M2C_FIELD(&lbl_802A83EC, s32 *, 0x10) = (s32) M2C_FIELD(var_r30, s32 *, 0xC);
                    HSD_SetupTevStage((long *)(&lbl_802A83EC), (long)(0));
                    var_r30 = M2C_FIELD(var_r30, void **, 8);
                    goto loop_7;
                }
                return;
            }
            goto block_10;
        }
block_10:
        var_r31 = M2C_FIELD(var_r31, void **, 8);
        goto loop_11;
    }
}

void MakeColorGenTExp() { } /* draft: stub */

#pragma push
#pragma dont_inline on
void TObjMakeTExp(void *arg0, s32 arg1, s32 arg2, s32 *arg3, s32 *arg4, s32 arg5, M2C_UNK arg_sp0) {
    s32 temp_r31;
    s8 temp_r30;
    s32 sp8;
    s32 temp_r25;
    u8 temp_r26;
    s32 sp10;
    s32 sp14;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r4;
    void *temp_r4_2;

    temp_r4 = arg2 & (M2C_FIELD(arg0, s32 *, 0x4C) & 0x1F0);
    temp_r30 = temp_r4 != 0;
    sp14 = -1;
    sp10 = -1;
    temp_r31 = HSD_TExpTev(arg5, temp_r4);
    temp_r4_2 = M2C_FIELD(arg0, void **, 0xA8);
    if ((temp_r4_2 != NULL) && (M2C_FIELD(temp_r4_2, s32 *, 0x1C) & 0xC0000000)) {
        MakeColorGenTExp(arg1, arg0, &sp14, &sp10, arg5, temp_r30);
    }
    HSD_TExpOrder(temp_r31, arg0, 0xFF);
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x4C) & 0xF0000;
    switch (temp_r3) {                              /* switch 1; irregular */
    case 0x10000:                                   /* switch 1 */
        HSD_TExpColorOp(temp_r31, 0, 0, 0, 1);
        sp8 = 0;
        HSD_TExpColorIn(temp_r31, 1, *arg3, 1, sp14, 5, sp10, 7);
        break;
    case 0x20000:                                   /* switch 1 */
        HSD_TExpColorOp(temp_r31, 0, 0, 0, 1);
        sp8 = 0;
        HSD_TExpColorIn(temp_r31, 1, *arg3, 1, sp14, 1, sp14, 7);
        break;
    case 0x30000:                                   /* switch 1 */
        /* draft: did not compile: temp_r25 = HSD_TExpCnst(arg0 + 0x50, 6, 3, arg5); */
        HSD_TExpColorOp(temp_r31, 0, 0, 0, 1);
        sp8 = 0;
        HSD_TExpColorIn(temp_r31, 1, *arg3, 1, sp14, 6, temp_r25, 7);
        break;
    case 0x40000:                                   /* switch 1 */
        HSD_TExpColorOp(temp_r31, 0, 0, 0, 1);
        sp8 = 0;
        HSD_TExpColorIn(temp_r31, 7, 0, 1, *arg3, 1, sp14, 7);
        break;
    case 0x50000:                                   /* switch 1 */
        HSD_TExpColorOp(temp_r31, 0, 0, 0, 1);
        sp8 = sp14;
        HSD_TExpColorIn(temp_r31, 7, 0, 7, 0, 7, 0, 1);
        break;
    case 0x60000:                                   /* switch 1 */
    case 0x0:                                       /* switch 1 */
        HSD_TExpColorOp(temp_r31, 0, 0, 0, 1);
        sp8 = *arg3;
        HSD_TExpColorIn(temp_r31, 7, 0, 7, 0, 7, 0, 1);
        break;
    case 0x70000:                                   /* switch 1 */
        HSD_TExpColorOp(temp_r31, 0, 0, 0, 1);
        sp8 = *arg3;
        HSD_TExpColorIn(temp_r31, 1, sp14, 7, 0, 7, 0, 1);
        break;
    case 0x80000:                                   /* switch 1 */
        HSD_TExpColorOp(temp_r31, 1, 0, 0, 1);
        sp8 = *arg3;
        HSD_TExpColorIn(temp_r31, 1, sp14, 7, 0, 7, 0, 1);
        break;
    default:                                        /* switch 1 */
        __assert(&lbl_80350078, 0x576, &lbl_80350090);
        break;
    }
    *arg3 = temp_r31;
    if (temp_r30 == 0) {
        temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x4C) & 0xF00000;
        switch (temp_r3_2) {                        /* switch 2; irregular */
        case 0x100000:                              /* switch 2 */
            HSD_TExpAlphaOp(temp_r31, 0, 0, 0, 1);
            sp8 = 0;
            HSD_TExpAlphaIn(temp_r31, 5, *arg4, 5, sp10, 5, sp10, 7);
            break;
        case 0x200000:                              /* switch 2 */
            /* draft: did not compile: temp_r26 = HSD_TExpCnst(arg0 + 0x50, 6, 3, arg5); */
            HSD_TExpAlphaOp(temp_r31, 0, 0, 0, 1);
            sp8 = 0;
            HSD_TExpAlphaIn(temp_r31, 5, *arg4, 5, sp10, 6, temp_r26, 7);
            break;
        case 0x300000:                              /* switch 2 */
            HSD_TExpAlphaOp(temp_r31, 0, 0, 0, 1);
            sp8 = 0;
            HSD_TExpAlphaIn(temp_r31, 7, 0, 5, *arg4, 5, sp10, 7);
            break;
        case 0x400000:                              /* switch 2 */
            HSD_TExpAlphaOp(temp_r31, 0, 0, 0, 1);
            sp8 = sp10;
            HSD_TExpAlphaIn(temp_r31, 7, 0, 7, 0, 7, 0, 5);
            break;
        case 0x500000:                              /* switch 2 */
        case 0x0:                                   /* switch 2 */
            HSD_TExpAlphaOp(temp_r31, 0, 0, 0, 1);
            sp8 = *arg4;
            HSD_TExpAlphaIn(temp_r31, 7, 0, 7, 0, 7, 0, 5);
            break;
        case 0x600000:                              /* switch 2 */
            HSD_TExpAlphaOp(temp_r31, 0, 0, 0, 1);
            sp8 = *arg4;
            HSD_TExpAlphaIn(temp_r31, 5, sp10, 7, 0, 7, 0, 5);
            break;
        case 0x700000:                              /* switch 2 */
            HSD_TExpAlphaOp(temp_r31, 1, 0, 0, 1);
            sp8 = *arg4;
            HSD_TExpAlphaIn(temp_r31, 5, sp10, 7, 0, 7, 0, 5);
            break;
        default:                                    /* switch 2 */
            __assert(&lbl_80350078, 0x5B0, &lbl_80350090);
            break;
        }
        *arg4 = temp_r31;
    }
}
#pragma pop

void HSD_TObjAssignResources() { } /* draft: stub */

void HSD_TObjSetup(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void HSD_TGTex2Index() { } /* draft: stub */

void HSD_TexCoordID2TexGenSrc() { } /* draft: stub */

void HSD_Index2TexMap() { } /* draft: stub */

void HSD_Index2TexCoord() { } /* draft: stub */

void HSD_TexMtx2Index() { } /* draft: stub */
