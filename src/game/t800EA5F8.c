/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK HSD_ObjAllocInit(M2C_UNK *, M2C_UNK, M2C_UNK);
extern M2C_UNK lbl_8031D1B0;
M2C_UNK GXSetChanAmbColor(s32, u32 *);
M2C_UNK GXSetChanMatColor(s32, u32 *);
M2C_UNK GXSetChanCtrl(s32, s32, s32, s32, s32, s32);
extern M2C_UNK lbl_802A88E0;
extern M2C_UNK lbl_80350BF0;
extern M2C_UNK lbl_80350BF8;
M2C_UNK fn_800E2CA4(u8);
extern s32 lbl_80350BEC;
extern s32 lbl_80350BE8;
M2C_UNK fn_800E1314(u8);
extern s32 lbl_80350C00;
M2C_UNK fn_800E4B50(u8);
M2C_UNK GXSetTevOp(s32, s32);
M2C_UNK GXSetTevColorIn(s32, s32, s32, s32, s32);
M2C_UNK GXSetTevAlphaIn(s32, s32, s32, s32, s32);
M2C_UNK GXSetTevColorOp(s32, s32, s32, s32, u8, s32);
M2C_UNK GXSetTevAlphaOp(s32, s32, s32, s32, u8, s32);
M2C_UNK GXSetTevKColorSel(s32, s32);
M2C_UNK GXSetTevKAlphaSel(s32, s32);
M2C_UNK GXSetTevSwapMode(s32, s32, s32);
M2C_UNK GXSetTevOrder(s32, s32, s32, s32);
M2C_UNK GXSetTevColorS10(M2C_UNK, s32 *);
extern M2C_UNK lbl_802A88B0;
M2C_UNK __assert(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_803500B0;
extern M2C_UNK lbl_803500B8;
extern M2C_UNK lbl_802A89E0;
extern s32 lbl_80350C0C;
M2C_UNK HSD_TObjRemoveAnimAll(s32);
M2C_UNK HSD_AObjRemove(s32);
M2C_UNK HSD_TObjAddAnimAll(s32, s32);
u32 HSD_AObjLoadDesc(s32);
M2C_UNK HSD_TObjReqAnimAllByFlags(s32, s32, f32);
M2C_UNK HSD_AObjReqAnim(s32);
M2C_UNK HSD_DObjAnimAll_800E7190(s32);
M2C_UNK HSD_AObjInterpretAnim(s32, void *, s32);
s32 HSD_TObjLoadDesc(s32);
s32 HSD_MaterialAlloc();
s32 hsdAllocMemPiece(M2C_UNK);
void **HSD_MObjAlloc();
void **hsdNew();
u32 hsdSearchClassInfo();
extern M2C_UNK lbl_803500C0;
extern M2C_UNK lbl_803500C8;
s32 HSD_TExpGetType(void *);
void *HSD_TExpTev(s32 *);
void *HSD_TExpCnst();
M2C_UNK HSD_TExpColorOp(void *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK HSD_TExpAlphaOp(void *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK HSD_TExpColorIn(void *, M2C_UNK, void *, M2C_UNK, void *, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK HSD_TExpAlphaIn(void *, M2C_UNK, void *, M2C_UNK, void *, M2C_UNK, void *, M2C_UNK);
M2C_UNK HSD_TExpOrder(void *, void *, M2C_UNK);
extern M2C_UNK lbl_803500CD;
extern M2C_UNK lbl_803500D0;
M2C_UNK HSD_TObjAssignResources(void *);
M2C_UNK HSD_TExpFreeList(M2C_UNK, M2C_UNK);
M2C_UNK HSD_TExpCompile(void *, void *);
M2C_UNK HSD_TExpFreeTevDesc();
extern void *lbl_80350C10;
extern void *lbl_80350C14;
M2C_UNK HSD_TObjSetupVolatileTev(s32, s32);
M2C_UNK HSD_TExpSetupTev(u32, s32);
extern M2C_UNK lbl_802A8B50;
M2C_UNK HSD_TObjSetupTextureCoordGen(void *);
M2C_UNK HSD_TObjSetup(void *);
M2C_UNK HSD_SetupRenderModeWithCustomPE(s32, s32);
M2C_UNK HSD_SetMaterialColor(s32 *, s32 *, s32 *, void *, f32);
M2C_UNK HSD_SetMaterialShininess(void *, f32);

void HSD_RenderInitAllocData(void);
void HSD_SetupChannel(void *arg0);
void HSD_DisableChannelLighting(s32 arg0);
void HSD_StateSetNumChans(s32 arg0);
void HSD_StateRegisterTexGen(void);
void fn_800EAB60(void);
void HSD_StateInitTev(void);
s32 fn_800EAB9C(void);
void HSD_StateAssignTev(void);
void fn_800EABD0(void);
void HSD_SetupTevStage(void *arg0);
void HSD_TevStage2Num();
void HSD_SetTevRegAll(void);
s32 HSD_TexCoordID2Num(s32 arg0);
void _HSD_StateInvalidateColorChannel(void);
void fn_800EAFA8(void);
void _HSD_StateInvalidateTevRegister(void);
void fn_800EAFD4(void);
void HSD_MObjSetCurrent(s32 arg0);
void HSD_MObjRemoveAnimByFlags(void *arg0, s32 arg1);
void HSD_MObjAddAnim(void *arg0, void *arg1);
void HSD_MObjReqAnimByFlags(void *arg0, s32 arg1, f32 farg0);
void MObjUpdateFunc();
void fn_800EB5B0(void *arg0);
s32 MObjLoad(void *arg0, void *arg1);
void **HSD_MObjLoadDesc(u32 *arg0);
void *fn_800EB738(void *arg0, void *arg1, s32 *arg2, M2C_UNK arg_sp0);
void HSD_MObjCompileTev(void *arg0);
void MObjSetupTev(void *arg0, s32 arg1, s32 arg2);
void HSD_MObjSetup(void *arg0);
void HSD_MObjUnset(void);
void fn_800EC404(void *arg0, s8 arg1, s8 arg2, s8 arg3);

void HSD_RenderInitAllocData(void) {
    HSD_ObjAllocInit(&lbl_8031D1B0, 0x1C, 4);
    HSD_ObjAllocInit(&lbl_8031D1B0 + 0x2C, 0x14, 4);
    HSD_ObjAllocInit(&lbl_8031D1B0 + 0x58, 0x30, 4);
}

void HSD_SetupChannel(void *arg0) {
    u32 sp14;
    u32 sp10;
    u32 spC;
    u32 sp8;
    s32 temp_r31;
    s32 temp_r31_2;
    s32 temp_r3;
    s32 temp_r3_4;
    s32 temp_r3_8;
    s32 temp_r4;
    s32 temp_r4_4;
    u32 temp_r4_2;
    u32 temp_r4_5;
    u32 temp_r5;
    u32 temp_r5_2;
    u8 temp_r4_3;
    u8 temp_r4_6;
    void *temp_r30;
    void *temp_r3_10;
    void *temp_r3_11;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_5;
    void *temp_r3_6;
    void *temp_r3_7;
    void *temp_r3_9;
    void *temp_r5_3;

    if (arg0 != NULL) {
        temp_r3 = M2C_FIELD(arg0, s32 *, 4);
        if (temp_r3 == 0xFF) {
            return;
        }
        temp_r31 = temp_r3 & 1;
        if (((u8) M2C_FIELD(arg0, u8 *, 0x14) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x18) == 0)) {
            temp_r4 = temp_r31 * 4;
            if ((s32) *(&lbl_80350BF8 + temp_r4) != 0) {
                *(&lbl_80350BF8 + temp_r4) = 0;
                sp14 = M2C_FIELD(arg0, u32 *, 0xC);
                GXSetChanAmbColor(temp_r31 + 4, &sp14);
                M2C_FIELD((&lbl_802A88E0 + (temp_r31 * 0x30)), u32 *, 0xC) = (u32) M2C_FIELD(arg0, u32 *, 0xC);
            } else {
                switch (temp_r3) {                  /* switch 1; irregular */
                case 4:                             /* switch 1 */
                case 5:                             /* switch 1 */
                    temp_r4_2 = M2C_FIELD(arg0, u32 *, 0xC);
                    temp_r3_2 = &lbl_802A88E0 + (temp_r31 * 0x30);
                    if (temp_r4_2 != (u32) M2C_FIELD(temp_r3_2, u32 *, 0xC)) {
                        M2C_FIELD(temp_r3_2, u32 *, 0xC) = temp_r4_2;
block_17:
                        sp10 = M2C_FIELD(arg0, u32 *, 0xC);
                        GXSetChanAmbColor(temp_r3, &sp10);
                    }
                    break;
                case 0:                             /* switch 1 */
                case 1:                             /* switch 1 */
                    temp_r5 = M2C_FIELD(arg0, u32 *, 0xC);
                    temp_r3_3 = &lbl_802A88E0 + (temp_r31 * 0x30);
                    temp_r3_4 = M2C_FIELD((s32)temp_r3_3, s32 *, 0xC);
                    if ((temp_r5 ^ temp_r3_4) & 0xFFFFFF00) {
                        M2C_FIELD(temp_r3_3, s32 *, 0xC) = (s32) ((temp_r5 & ~0xFF) | (temp_r3_4 & 0xFF));
                        goto block_17;
                    }
                    break;
                default:                            /* switch 1 */
                    temp_r4_3 = M2C_FIELD(arg0, u8 *, 0xF);
                    temp_r3_5 = &lbl_802A88E0 + (temp_r31 * 0x30);
                    if (temp_r4_3 != (u8) M2C_FIELD(temp_r3_5, u8 *, 0xF)) {
                        M2C_FIELD(temp_r3_5, u8 *, 0xF) = temp_r4_3;
                        goto block_17;
                    }
                    break;
                }
            }
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
            temp_r4_4 = temp_r31 * 4;
            if ((s32) *(&lbl_80350BF0 + temp_r4_4) != 0) {
                *(&lbl_80350BF0 + temp_r4_4) = 0;
                spC = M2C_FIELD(arg0, u32 *, 0x10);
                GXSetChanMatColor(temp_r31 + 4, &spC);
                M2C_FIELD((&lbl_802A88E0 + (temp_r31 * 0x30)), u32 *, 0x10) = (u32) M2C_FIELD(arg0, u32 *, 0x10);
            } else {
                switch (temp_r3) {                  /* switch 2; irregular */
                case 4:                             /* switch 2 */
                case 5:                             /* switch 2 */
                    temp_r4_5 = M2C_FIELD(arg0, u32 *, 0x10);
                    temp_r3_6 = &lbl_802A88E0 + (temp_r31 * 0x30);
                    if (temp_r4_5 != (u32) M2C_FIELD(temp_r3_6, u32 *, 0x10)) {
                        M2C_FIELD(temp_r3_6, u32 *, 0x10) = temp_r4_5;
block_31:
                        sp8 = M2C_FIELD(arg0, u32 *, 0x10);
                        GXSetChanMatColor(temp_r3, &sp8);
                    }
                    break;
                case 0:                             /* switch 2 */
                case 1:                             /* switch 2 */
                    temp_r5_2 = M2C_FIELD(arg0, u32 *, 0x10);
                    temp_r3_7 = &lbl_802A88E0 + (temp_r31 * 0x30);
                    temp_r3_8 = M2C_FIELD(temp_r3_7, s32 *, 0x10);
                    if ((temp_r5_2 ^ temp_r3_8) & 0xFFFFFF00) {
                        M2C_FIELD(temp_r3_7, s32 *, 0x10) = (s32) ((temp_r5_2 & ~0xFF) | (temp_r3_8 & 0xFF));
                        goto block_31;
                    }
                    break;
                default:                            /* switch 2 */
                    temp_r4_6 = M2C_FIELD(arg0, u8 *, 0x13);
                    temp_r3_9 = &lbl_802A88E0 + (temp_r31 * 0x30);
                    if (temp_r4_6 != (u8) M2C_FIELD(temp_r3_9, u8 *, 0x13)) {
                        M2C_FIELD(temp_r3_9, u8 *, 0x13) = temp_r4_6;
                        goto block_31;
                    }
                    break;
                }
            }
        }
        temp_r31_2 = (temp_r3 & 3) * 0x30;
        temp_r30 = &lbl_802A88E0 + temp_r31_2;
        if ((((u8) M2C_FIELD(arg0, u8 *, 0x14) != (u8) M2C_FIELD(temp_r30, u8 *, 0x14)) || (temp_r5_3 = &lbl_802A88E0 + temp_r31_2, (((s32) M2C_FIELD(arg0, s32 *, 0x18) == (s32) M2C_FIELD(temp_r5_3, s32 *, 0x18)) == 0)) || ((s32) M2C_FIELD(arg0, s32 *, 0x1C) != (s32) M2C_FIELD(temp_r5_3, s32 *, 0x1C)) || ((s32) M2C_FIELD(arg0, s32 *, 0x20) != (s32) M2C_FIELD(temp_r5_3, s32 *, 0x20)) || ((s32) M2C_FIELD(arg0, s32 *, 0x24) != (s32) M2C_FIELD(temp_r5_3, s32 *, 0x24)) || ((s32) M2C_FIELD(arg0, s32 *, 0x28) != (s32) M2C_FIELD(temp_r5_3, s32 *, 0x28))) && ((GXSetChanCtrl(temp_r3, M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, s32 *, 0x28)), M2C_FIELD(temp_r30, u8 *, 0x14) = (u8) M2C_FIELD(arg0, u8 *, 0x14), temp_r3_10 = &lbl_802A88E0 + temp_r31_2, M2C_FIELD(temp_r3_10, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(temp_r3_10, s32 *, 0x1C) = (s32) M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(temp_r3_10, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(temp_r3_10, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(temp_r3_10, s32 *, 0x28) = (s32) M2C_FIELD(arg0, s32 *, 0x28), ((temp_r3 == 4) != 0)) || (temp_r3 == 5))) {
            temp_r3_11 = &lbl_802A88E0 + temp_r31_2;
            M2C_FIELD(temp_r3_11, u8 *, 0x74) = (u8) M2C_FIELD(arg0, u8 *, 0x14);
            M2C_FIELD(temp_r3_11, s32 *, 0x78) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
            M2C_FIELD(temp_r3_11, s32 *, 0x7C) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
            M2C_FIELD(temp_r3_11, s32 *, 0x80) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
            M2C_FIELD(temp_r3_11, s32 *, 0x84) = (s32) M2C_FIELD(arg0, s32 *, 0x24);
            M2C_FIELD(temp_r3_11, s32 *, 0x88) = (s32) M2C_FIELD(arg0, s32 *, 0x28);
        }
    }
}

void HSD_DisableChannelLighting(s32 arg0) {
    s32 temp_r0;
    int temp_r5;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 temp_r6_3;
    s32 temp_r8_2;
    s32 temp_r9;
    void *temp_r10;
    void *temp_r5_2;
    void *temp_r8;
    void *temp_r9_2;

    temp_r0 = arg0 & 3;
    if (arg0 < 6) {
        if (arg0 < 4) {
            goto block_6;
        }
        temp_r6 = temp_r0;
        temp_r6 *= 0x30;
        temp_r8 = &lbl_802A88E0 + temp_r6;
        if (((u8) M2C_FIELD(temp_r8, u8 *, 0x14) != 0) || ((u8) M2C_FIELD((&lbl_802A88E0 + temp_r6), u8 *, 0x74) != 0)) {
            temp_r10 = &lbl_802A88E0 + temp_r6;
            M2C_FIELD(temp_r10, s8 *, 0x74) = 0;
            M2C_FIELD(temp_r8, u8 *, 0x14) = 0U;
            M2C_FIELD(temp_r10, s32 *, 0x80) = 0;
            M2C_FIELD(temp_r10, s32 *, 0x20) = 0;
            temp_r5 = M2C_FIELD(temp_r10, s32 *, 0x18);
            temp_r6_2 = M2C_FIELD(temp_r10, s32 *, 0x1C);
            temp_r8_2 = M2C_FIELD(temp_r10, s32 *, 0x24);
            temp_r9 = M2C_FIELD(temp_r10, s32 *, 0x28);
            M2C_FIELD(temp_r10, s32 *, 0x78) = temp_r5;
            M2C_FIELD(temp_r10, s32 *, 0x7C) = temp_r6_2;
            M2C_FIELD(temp_r10, s32 *, 0x84) = temp_r8_2;
            M2C_FIELD(temp_r10, s32 *, 0x88) = temp_r9;
            GXSetChanCtrl((long)(0), (long)(temp_r5), (long)(temp_r6_2), (long)(0), (long)(temp_r8_2), (long)(temp_r9));
        }
    } else {
block_6:
        temp_r6_3 = temp_r0;
        temp_r6_3 *= 0x30;
        temp_r5_2 = &lbl_802A88E0 + temp_r6_3;
        if ((u8) M2C_FIELD(temp_r5_2, u8 *, 0x14) != 0) {
            temp_r9_2 = &lbl_802A88E0 + temp_r6_3;
            M2C_FIELD(temp_r5_2, u8 *, 0x14) = 0U;
            M2C_FIELD(temp_r9_2, s32 *, 0x20) = 0;
            GXSetChanCtrl(0, M2C_FIELD(temp_r9_2, s32 *, 0x18), M2C_FIELD(temp_r9_2, s32 *, 0x1C), 0, M2C_FIELD(temp_r9_2, s32 *, 0x24), M2C_FIELD(temp_r9_2, s32 *, 0x28));
        }
    }
}

void HSD_StateSetNumChans(s32 arg0) {
    if ((s32) lbl_80350BEC != arg0) {
        fn_800E2CA4((u8) arg0);
        lbl_80350BEC = arg0;
    }
}

void HSD_StateRegisterTexGen(void) {
    s32 temp_r3;

    temp_r3 = HSD_TexCoordID2Num((long)(0));
    if (temp_r3 > (s32) lbl_80350BE8) {
        lbl_80350BE8 = temp_r3;
    }
}

void fn_800EAB60(void) {
    fn_800E1314((u8) lbl_80350BE8);
    lbl_80350BE8 = 0;
}

void HSD_StateInitTev(void) {
    lbl_80350C00 = 0;
}

s32 fn_800EAB9C(void) {
    return lbl_80350C00;
}

void HSD_StateAssignTev(void) {
    s32 temp_r3;

    temp_r3 = lbl_80350C00;
    lbl_80350C00 = temp_r3 + 1;
    HSD_TevStage2Num(temp_r3);
}

void fn_800EABD0(void) {
    fn_800E4B50((u8) lbl_80350C00);
    lbl_80350C00 = 0;
}

void HSD_SetupTevStage(void *arg0) {
    GXSetTevOrder(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 0x14));
    if ((u32) M2C_FIELD(arg0, u32 *, 4) == 0U) {
        GXSetTevOp(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0x18));
        GXSetTevSwapMode(M2C_FIELD(arg0, s32 *, 8), 0, 0);
        return;
    }
    GXSetTevColorOp(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, s32 *, 0x30), M2C_FIELD(arg0, s32 *, 0x2C), M2C_FIELD(arg0, u8 *, 0x34), M2C_FIELD(arg0, s32 *, 0x38));
    GXSetTevColorIn(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, s32 *, 0x28));
    GXSetTevAlphaOp(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0x3C), M2C_FIELD(arg0, s32 *, 0x54), M2C_FIELD(arg0, s32 *, 0x50), M2C_FIELD(arg0, u8 *, 0x58), M2C_FIELD(arg0, s32 *, 0x5C));
    GXSetTevAlphaIn(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0x40), M2C_FIELD(arg0, s32 *, 0x44), M2C_FIELD(arg0, s32 *, 0x48), M2C_FIELD(arg0, s32 *, 0x4C));
    GXSetTevSwapMode(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0x64), M2C_FIELD(arg0, s32 *, 0x68));
    GXSetTevKColorSel(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0x6C));
    GXSetTevKAlphaSel(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0x70));
}

void HSD_TevStage2Num() { } /* draft: stub */

void HSD_SetTevRegAll(void) {
    s32 spC;
    s32 sp8;
    M2C_UNK *var_r31;
    M2C_UNK var_r3;
    s32 var_r30;

    var_r31 = &lbl_802A88B0;
    var_r30 = 0;
    do {
        if ((s32) M2C_FIELD(var_r31, s32 *, 8) != 0) {
            sp8 = M2C_FIELD(var_r31, s32 *, 0);
            spC = M2C_FIELD(var_r31, s32 *, 4);
            switch (var_r30) {                      /* irregular */
            case 0:
                var_r3 = 1;
                break;
            case 1:
                var_r3 = 2;
                break;
            case 2:
                var_r3 = 3;
                break;
            case 3:
                var_r3 = 0;
                break;
            default:
                var_r3 = 1;
                break;
            }
            GXSetTevColorS10(var_r3, &sp8);
            M2C_FIELD(var_r31, s32 *, 8) = 0;
        }
        var_r30 += 1;
        var_r31 += 0xC;
    } while ((u32) var_r30 < 4U);
}

s32 HSD_TexCoordID2Num(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0x0:
        return 1;
    case 0x2:
        return 3;
    case 0x5:
        return 6;
    case 0x7:
        return 8;
    case 0xFF:
        return 0;
    default:
        __assert(&lbl_803500B0, 0x434, &lbl_803500B8);
        return 0;
    case 0x6:
        return 7;
    case 0x4:
        return 5;
    case 0x3:
        return 4;
    case 0x1:
        return 2;
    }
}

void _HSD_StateInvalidateColorChannel(void) {
    memcpy(&lbl_802A88E0, &lbl_802A89E0, 0xC0);
    M2C_FIELD(&lbl_80350BF8, s32 *, 0) = 1;
    M2C_FIELD(&lbl_80350BF8, s32 *, 4) = 1;
    M2C_FIELD(&lbl_80350BF0, s32 *, 0) = 1;
    M2C_FIELD(&lbl_80350BF0, s32 *, 4) = 1;
    lbl_80350BEC = -1;
}

void fn_800EAFA8(void) {
    lbl_80350C00 = 0;
}

void _HSD_StateInvalidateTevRegister(void) {
    M2C_FIELD(&lbl_802A88B0, s32 *, 8) = 0;
    M2C_FIELD(&lbl_802A88B0, s32 *, 0x14) = 0;
    M2C_FIELD(&lbl_802A88B0, s32 *, 0x20) = 0;
    M2C_FIELD(&lbl_802A88B0, s32 *, 0x2C) = 0;
}

void fn_800EAFD4(void) {
    lbl_80350BE8 = 0;
}

void HSD_MObjSetCurrent(s32 arg0) {
    lbl_80350C0C = arg0;
}

void HSD_MObjRemoveAnimByFlags(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        if (arg1 & 4) {
            HSD_AObjRemove(M2C_FIELD(arg0, s32 *, 0x14));
            M2C_FIELD(arg0, s32 *, 0x14) = 0;
        }
        if (arg1 & 0x10) {
            HSD_TObjRemoveAnimAll(M2C_FIELD(arg0, s32 *, 8));
        }
    }
}

void HSD_MObjAddAnim(void *arg0, void *arg1) {
    if ((arg0 != NULL) && (arg1 != NULL)) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x14) != 0U) {
            HSD_AObjRemove((long)(0));
        }
        M2C_FIELD(arg0, u32 *, 0x14) = HSD_AObjLoadDesc(M2C_FIELD(arg1, s32 *, 4));
        HSD_TObjAddAnimAll(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg1, s32 *, 8));
    }
}

void HSD_MObjReqAnimByFlags(void *arg0, s32 arg1, f32 farg0) {
    if (arg0 != NULL) {
        if (arg1 & 4) {
            HSD_AObjReqAnim(M2C_FIELD(arg0, s32 *, 0x14));
        }
        HSD_TObjReqAnimAllByFlags(M2C_FIELD(arg0, s32 *, 8), arg1, farg0);
    }
}

void MObjUpdateFunc() { } /* draft: stub */

void fn_800EB5B0(void *arg0) {
    if (arg0 != NULL) {
        HSD_AObjInterpretAnim(M2C_FIELD(arg0, s32 *, 0x14), arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x4C));
        HSD_DObjAnimAll_800E7190(M2C_FIELD(arg0, s32 *, 8));
    }
}

s32 MObjLoad(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 8) = HSD_TObjLoadDesc(M2C_FIELD(arg1, s32 *, 8));
    M2C_FIELD(arg0, s32 *, 0xC) = HSD_MaterialAlloc();
    /* draft: did not compile: memcpy(M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg1, u32 *, 0xC), 0x14); */
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) | 0x1000);
    if ((u32) M2C_FIELD(arg1, u32 *, 0x14) != 0U) {
        M2C_FIELD(arg0, s32 *, 0x10) = hsdAllocMemPiece(0xC);
        /* draft: did not compile: memcpy(M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg1, u32 *, 0x14), 0xC); */
    }
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    return 0;
}

void **HSD_MObjLoadDesc(u32 *arg0) {
    void **var_r31;
    void *temp_r5;

    if (arg0 != NULL) {
        if (((u32) *arg0 == 0U) || (hsdSearchClassInfo() == 0U)) {
            var_r31 = HSD_MObjAlloc();
        } else {
            var_r31 = hsdNew();
            if (var_r31 == NULL) {
                __assert(&lbl_803500C0, 0x175, &lbl_803500C8);
            }
        }
        temp_r5 = *var_r31;
        M2C_FIELD(temp_r5, M2C_UNK (**)(void **, u32 *, void *), 0x40)(var_r31, arg0, temp_r5);
        HSD_MObjCompileTev(var_r31);
        return var_r31;
    }
    return NULL;
}

void *fn_800EB738(void *arg0, void *arg1, s32 *arg2, M2C_UNK arg_sp0) {
    void *sp1C;
    void *sp18;
    void *sp14;
    void *sp10;
    void *sp8;
    s32 temp_r0;
    s32 var_r24;
    s32 var_r28;
    s32 var_r29;
    u32 temp_r24_9;
    void *temp_r24;
    void *temp_r24_10;
    void *temp_r24_11;
    void *temp_r24_12;
    void *temp_r24_2;
    void *temp_r24_3;
    void *temp_r24_4;
    void *temp_r24_5;
    void *temp_r24_6;
    void *temp_r24_7;
    void *temp_r24_8;
    void *temp_r25;
    void *temp_r28;
    void *temp_r28_2;
    void *temp_r31;
    void *var_r0;
    void *var_r24_2;
    void *var_r24_3;
    void *var_r24_4;
    void *var_r30;
    void *var_r3;
    void *var_r5;

    var_r30 = NULL;
    if (arg2 == NULL) {
        __assert(&lbl_803500C0, 0x18B, &lbl_803500D0);
    }
    var_r3 = arg1;
    *arg2 = 0;
loop_6:
    if (var_r3 != NULL) {
        if ((u32) (M2C_FIELD(var_r3, s32 *, 0x4C) & 0xF) == 4) {
            var_r30 = var_r3;
        }
        var_r3 = M2C_FIELD(var_r3, void **, 8);
        goto loop_6;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    var_r24 = temp_r0 & 3;
    if (var_r24 == 0) {
        var_r24 = 1;
    }
    var_r28 = temp_r0 & 0x6000;
    if (var_r28 == 0) {
        var_r28 = var_r24 << 0xD;
    }
    temp_r31 = HSD_TExpTev(arg2);
    if (M2C_FIELD(arg0, s32 *, 4) & 4) {
        if (var_r24 != 2) {
            temp_r24_2 = HSD_TExpCnst(M2C_FIELD(arg0, s32 *, 0xC) + 4, 1, 0, arg2);
            HSD_TExpColorOp(temp_r31, 0, 0, 0, 1);
            sp8 = temp_r24_2;
            HSD_TExpColorIn(temp_r31, 7, NULL, 7, NULL, 7, 0, 1);
        } else {
            HSD_TExpColorOp((void *)(NULL), (long)(0), (long)(0), (long)(1), (long)(0));
            sp8 = NULL;
            HSD_TExpColorIn(temp_r31, 7, NULL, 7, NULL, 7, 0, 8);
        }
        if (var_r28 != 0x4000) {
            temp_r24_3 = HSD_TExpCnst(M2C_FIELD(arg0, s32 *, 0xC) + 0xC, 6, 3, arg2);
            HSD_TExpAlphaOp(temp_r31, 0, 0, 0, 1);
            sp8 = temp_r24_3;
            HSD_TExpAlphaIn(temp_r31, 7, NULL, 7, NULL, 7, NULL, 6);
        } else {
            temp_r24_4 = HSD_TExpCnst(&lbl_803500CD, 6, 0, arg2);
            HSD_TExpAlphaOp(temp_r31, 0, 0, 0, 1);
            sp8 = temp_r24_4;
            HSD_TExpAlphaIn(temp_r31, 7, NULL, 7, NULL, 7, NULL, 6);
        }
    } else {
        switch (var_r24) {                          /* switch 1; irregular */
        case 1:                                     /* switch 1 */
            temp_r24_5 = HSD_TExpCnst(M2C_FIELD(arg0, s32 *, 0xC) + 4, 1, 0, arg2);
            HSD_TExpColorOp(temp_r31, 0, 0, 0, 1);
            sp8 = temp_r24_5;
            HSD_TExpColorIn(temp_r31, 7, NULL, 7, NULL, 7, 0, 1);
            break;
        case 2:                                     /* switch 1 */
            HSD_TExpOrder((void *)(var_r30), (void *)4U, (long)(0));
            HSD_TExpColorOp(temp_r31, 0, 0, 0, 1);
            var_r0 = (void *)-2U;
            if (var_r30 != NULL) {
                var_r0 = (void *)-1U;
            }
            sp8 = var_r0;
            HSD_TExpColorIn(temp_r31, 7, NULL, 7, NULL, 7, 0, 1);
            break;
        default:                                    /* switch 1 */
            temp_r24_6 = HSD_TExpCnst(M2C_FIELD(arg0, s32 *, 0xC) + 4, 1, 0, arg2);
            HSD_TExpOrder(temp_r31, var_r30, 4);
            HSD_TExpColorOp(temp_r31, 0, 0, 0, 1);
            sp8 = temp_r24_6;
            var_r5 = (void *)-2U;
            if (var_r30 != NULL) {
                var_r5 = (void *)-1U;
            }
            HSD_TExpColorIn(temp_r31, 1, var_r5, 7, NULL, 7, 0, 1);
            break;
        }
        switch (var_r28) {                          /* switch 2; irregular */
        case 0x2000:                                /* switch 2 */
            temp_r24_7 = HSD_TExpCnst(M2C_FIELD(arg0, s32 *, 0xC) + 0xC, 6, 3, arg2);
            HSD_TExpAlphaOp(temp_r31, 0, 0, 0, 1);
            sp8 = temp_r24_7;
            HSD_TExpAlphaIn(temp_r31, 7, NULL, 7, NULL, 7, NULL, 6);
            break;
        case 0x4000:                                /* switch 2 */
            HSD_TExpOrder(temp_r31, var_r30, 4);
            HSD_TExpAlphaOp(temp_r31, 0, 0, 0, 1);
            sp8 = (void *)-2U;
            HSD_TExpAlphaIn(temp_r31, 7, NULL, 7, NULL, 7, NULL, 5);
            break;
        default:                                    /* switch 2 */
            temp_r24_8 = HSD_TExpCnst(M2C_FIELD(arg0, s32 *, 0xC) + 0xC, 6, 3, arg2);
            HSD_TExpOrder(temp_r31, var_r30, 4);
            HSD_TExpAlphaOp(temp_r31, 0, 0, 0, 1);
            sp8 = NULL;
            HSD_TExpAlphaIn(temp_r31, 7, NULL, 5, (void *)-2U, 6, temp_r24_8, 7);
            break;
        }
    }
    sp1C = temp_r31;
    var_r24_2 = arg1;
    sp10 = temp_r31;
loop_43:
    if (var_r24_2 != NULL) {
        if ((M2C_FIELD(var_r24_2, s32 *, 0x4C) & 0x50) && ((s32) M2C_FIELD(var_r24_2, s32 *, 0xC) != 0xFF)) {
            M2C_FIELD(M2C_FIELD(var_r24_2, void **, 0), M2C_UNK (**)(void *, M2C_UNK, M2C_UNK, void **, void **, s32 *), 0x44)(var_r24_2, 0x50, 0, &sp1C, &sp10, arg2);
        }
        var_r24_2 = M2C_FIELD(var_r24_2, void **, 8);
        goto loop_43;
    }
    var_r29 = 0x50;
    if (M2C_FIELD(arg0, s32 *, 4) & 4) {
        temp_r24_9 = var_r28 & 0x4000;
        if (temp_r24_9 != 0) {
            temp_r28 = HSD_TExpTev(arg2);
            HSD_TExpOrder((void *)(NULL), (void *)5U, (long)(0));
            HSD_TExpColorOp(temp_r28, 0, 0, 0, 1);
            sp8 = sp1C;
            HSD_TExpColorIn(temp_r28, 7, NULL, 7, NULL, 7, 0, 1);
            HSD_TExpAlphaOp(temp_r28, 0, 0, 0, 1);
            sp8 = NULL;
            HSD_TExpAlphaIn(temp_r28, 5, sp10, 7, NULL, 5, (void *)-2U, 7);
            sp1C = temp_r28;
            sp10 = temp_r28;
        }
        temp_r28_2 = HSD_TExpTev(arg2);
        if (var_r30 != NULL) {
            HSD_TExpOrder((void *)(var_r30), (void *)4U, (long)(0));
            HSD_TExpColorOp(temp_r28_2, 0, 0, 0, 1);
            sp8 = NULL;
            HSD_TExpColorIn(temp_r28_2, 7, NULL, 1, sp1C, 1, -1, 7);
        } else {
            HSD_TExpOrder((void *)(NULL), (void *)4U, (long)(0));
            HSD_TExpColorOp(temp_r28_2, 0, 0, 0, 1);
            sp8 = NULL;
            HSD_TExpColorIn(temp_r28_2, 7, NULL, 1, sp1C, 1, -2, 7);
        }
        sp1C = temp_r28_2;
        if (temp_r24_9 != 0) {
            HSD_TExpAlphaOp(temp_r28_2, 0, 0, 0, 1);
            sp8 = NULL;
            HSD_TExpAlphaIn(temp_r28_2, 7, NULL, 5, sp10, 5, (void *)-2U, 7);
        } else {
            HSD_TExpAlphaOp(temp_r28_2, 0, 0, 0, 1);
            sp8 = NULL;
            HSD_TExpAlphaIn(temp_r28_2, 5, sp10, 7, NULL, 5, (void *)-2U, 7);
        }
        sp10 = temp_r28_2;
    }
    if (M2C_FIELD(arg0, s32 *, 4) & 8) {
        temp_r25 = HSD_TExpCnst(M2C_FIELD(arg0, s32 *, 0xC) + 8, 1, 0, arg2);
        temp_r24_10 = HSD_TExpTev(arg2);
        HSD_TExpColorOp((void *)(NULL), (long)(0), (long)(0), (long)(1), (long)(0));
        sp8 = temp_r25;
        HSD_TExpColorIn(temp_r24_10, 7, NULL, 7, NULL, 7, 0, 1);
        sp18 = temp_r24_10;
        var_r24_3 = arg1;
loop_60:
        if (var_r24_3 != NULL) {
            if ((M2C_FIELD(var_r24_3, s32 *, 0x4C) & 0x20) && ((s32) M2C_FIELD(var_r24_3, s32 *, 0xC) != 0xFF)) {
                M2C_FIELD(M2C_FIELD(var_r24_3, void **, 0), M2C_UNK (**)(void *, M2C_UNK, M2C_UNK, void **, void **, s32 *), 0x44)(var_r24_3, 0x20, 0x50, &sp18, &sp10, arg2);
            }
            var_r24_3 = M2C_FIELD(var_r24_3, void **, 8);
            goto loop_60;
        }
        var_r29 = 0x50 | 0x20;
        temp_r24_11 = HSD_TExpTev(arg2);
        HSD_TExpOrder((void *)(NULL), (void *)5U, (long)(0));
        HSD_TExpColorOp(temp_r24_11, 0, 0, 0, 1);
        sp8 = NULL;
        HSD_TExpColorIn(temp_r24_11, 7, NULL, 1, sp18, 1, -2, 7);
        sp18 = temp_r24_11;
        temp_r24_12 = HSD_TExpTev(arg2);
        HSD_TExpColorOp((void *)(NULL), (long)(0), (long)(0), (long)(1), (long)(0));
        sp8 = sp1C;
        HSD_TExpColorIn(temp_r24_12, 1, sp18, 7, NULL, 7, 0, 1);
        sp1C = temp_r24_12;
    }
    var_r24_4 = arg1;
    sp14 = sp1C;
loop_67:
    if (var_r24_4 != NULL) {
        if ((M2C_FIELD(var_r24_4, s32 *, 0x4C) & 0x80) && ((s32) M2C_FIELD(var_r24_4, s32 *, 0xC) != 0xFF)) {
            M2C_FIELD(M2C_FIELD(var_r24_4, void **, 0), M2C_UNK (**)(void *, M2C_UNK, s32, void **, void **, s32 *), 0x44)(var_r24_4, 0x80, var_r29, &sp14, &sp10, arg2);
        }
        var_r24_4 = M2C_FIELD(var_r24_4, void **, 8);
        goto loop_67;
    }
    if ((sp14 != sp10) || (HSD_TExpGetType((void *)(0)) != 1) || (HSD_TExpGetType(sp10) != 1)) {
        temp_r24 = HSD_TExpTev(arg2);
        HSD_TExpColorOp((void *)(NULL), (long)(0), (long)(0), (long)(1), (long)(0));
        sp8 = sp14;
        HSD_TExpColorIn(temp_r24, 7, NULL, 7, NULL, 7, 0, 1);
        HSD_TExpAlphaOp(temp_r24, 0, 0, 0, 1);
        sp8 = sp10;
        HSD_TExpAlphaIn(temp_r24, 7, NULL, 7, NULL, 7, NULL, 5);
        return temp_r24;
    }
    return sp14;
}

void HSD_MObjCompileTev(void *arg0) { } /* draft: stub */

void MObjSetupTev(void *arg0, s32 arg1, s32 arg2) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x18) == 0U) {
        __assert(&lbl_803500C0, 0x31E, &lbl_802A8B50);
    }
    HSD_TExpSetupTev(M2C_FIELD(arg0, u32 *, 0x18), M2C_FIELD(arg0, s32 *, 0x1C));
    HSD_TObjSetupVolatileTev(arg1, arg2);
}

#pragma push
#pragma dont_inline on
void HSD_MObjSetup(void *arg0) {
    void *sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 temp_r31;
    void **var_r29;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r6;
    void *temp_r6_2;

    HSD_StateInitTev();
    temp_r31 = M2C_FIELD(arg0, s32 *, 4);
    sp8 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 8);
    spC = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 4);
    sp10 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0);
    temp_r6 = M2C_FIELD(arg0, void **, 0xC);
    HSD_SetMaterialColor(&sp10, &spC, &sp8, temp_r6, M2C_FIELD(temp_r6, f32 *, 0xC));
    if (temp_r31 & 8) {
        temp_r3 = M2C_FIELD(arg0, void **, 0xC);
        HSD_SetMaterialShininess(temp_r3, M2C_FIELD(temp_r3, f32 *, 0x10));
    }
    var_r29 = NULL;
    sp14 = M2C_FIELD(arg0, void **, 8);
    if ((temp_r31 & 0x04000000) && ((void *) lbl_80350C14 != NULL)) {
        var_r29 = &sp14;
loop_6:
        temp_r3_2 = *var_r29;
        if (temp_r3_2 != NULL) {
            /* draft: did not compile: var_r29 = temp_r3_2 + 8; */
            goto loop_6;
        }
        *var_r29 = lbl_80350C14;
    }
    if ((temp_r31 & 0x1000) && ((void *) lbl_80350C10 != NULL) && ((u32) M2C_FIELD(lbl_80350C10, u32 *, 0x58) != 0U)) {
        M2C_FIELD(lbl_80350C10, void **, 8) = sp14;
        sp14 = lbl_80350C10;
    }
    HSD_TObjSetup(sp14);
    HSD_TObjSetupTextureCoordGen(sp14);
    temp_r6_2 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(temp_r6_2, M2C_UNK (**)(void *, void *, s32, void *), 0x48)(arg0, sp14, temp_r31, temp_r6_2);
    HSD_SetupRenderModeWithCustomPE(temp_r31, M2C_FIELD(arg0, s32 *, 0x10));
    if (var_r29 != NULL) {
        *var_r29 = NULL;
    }
}
#pragma pop

void HSD_MObjUnset(void) {
    HSD_TObjSetup(0);
}

void fn_800EC404(void *arg0, s8 arg1, s8 arg2, s8 arg3) {
    void *temp_r7;

    if (arg0 != NULL) {
        temp_r7 = M2C_FIELD(arg0, void **, 0xC);
        if (temp_r7 == NULL) {
            return;
        }
        M2C_FIELD(temp_r7, s8 *, 4) = arg1;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s8 *, 5) = arg2;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s8 *, 6) = arg3;
    }
}
