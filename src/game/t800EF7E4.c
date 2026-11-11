/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK PSMTXMultVec(s32, f32 *, f32 *, f32, f32, f32);
M2C_UNK PSMTXMultVecSR(s32, f32 *, f32 *);
M2C_UNK PSVECSubtract(s32 *, f32 *, f32 *);
M2C_UNK PSVECNormalize(f32 *, f32 *);
M2C_UNK GXInitLightAttn();
M2C_UNK GXInitLightSpot(void *, f32, f32);
M2C_UNK GXInitLightDistAttn(void *, f32, f32, f32);
M2C_UNK fn_800E2A08();
M2C_UNK fn_800E2A18(void *, f32, f32, f32);
M2C_UNK GXInitLightColor(void *, s32 *);
M2C_UNK GXLoadLightObjImm(void *, s32);
M2C_UNK __assert(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_801DA898;
extern M2C_UNK lbl_801DA8A4;
extern void *lbl_8031D268;
extern M2C_UNK lbl_803500F0;
extern M2C_UNK lbl_803500F8;
extern void *lbl_80350C2C;
extern s32 lbl_80350C30;
extern s32 lbl_80350C34;
extern s32 lbl_80350C38;
extern s32 lbl_80350C3C;
extern s32 lbl_80350C40;
extern f32 lbl_80351E70;
extern f32 lbl_80351E74;
extern f64 lbl_80351E80;
extern f32 lbl_80351E88;
extern f32 lbl_80351E90;
extern f32 lbl_80351E94;
M2C_UNK *HSD_SListAllocAndAppend();
extern M2C_UNK lbl_802A91E4;
extern M2C_UNK lbl_802A91F0;
extern M2C_UNK lbl_803500FC;
extern M2C_UNK lbl_80350104;
M2C_UNK *HSD_SListRemove(M2C_UNK *);
M2C_UNK HSD_WObjSetPosition(u32, s32);
u32 HSD_WObjAlloc();
extern M2C_UNK lbl_802A923C;
M2C_UNK HSD_WObjGetPosition();
extern M2C_UNK lbl_802A924C;
M2C_UNK OSReport(M2C_UNK *);
void *HSD_WObjLoadDesc(s32);
M2C_UNK HSD_Panic(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_802A9280;
extern M2C_UNK lbl_80350110;
M2C_UNK *hsdNew(M2C_UNK *);
u32 hsdSearchClassInfo();
extern M2C_UNK lbl_802A9168;
extern M2C_UNK lbl_8035010C;
extern M2C_UNK lbl_80350114;
extern M2C_UNK *lbl_80350C28;

void fn_800EF7E4(s32 arg0);
void HSD_LObjAddCurrent(void *arg0);
void fn_800F0480(void *arg0);
void HSD_LObjDeleteCurrent(void *arg0);
void HSD_LObjDeleteCurrentAll(void *arg0);
void fn_800F0984(void *arg0);
void *HSD_LObjGetCurrentByType(s32 arg0);
s32 HSD_LightID2Index(s32 arg0);
void HSD_Index2LightID();
void HSD_LObjRemoveAll(void *arg0);
void HSD_LObjSetColor(void *arg0, s32 *arg1);
void HSD_LObjGetColor(void *arg0, s32 *arg1);
void HSD_LObjSetSpot(void *arg0, s32 arg1, f32 farg0);
void HSD_LObjSetDistAttn(void *arg0, s32 arg1, f32 farg0, f32 farg1);
void HSD_LObjSetPosition(void *arg0, s32 arg1);
s32 HSD_LObjGetPosition(void *arg0);
void fn_800F116C(void *arg0, s32 arg1);
s32 HSD_LObjGetInterest(void *arg0);
s32 HSD_AObjGetFlags(void *arg0);
s32 HSD_LObjGetInterestWObj(void *arg0);
s32 LObjLoad(void *arg0, void *arg1);
M2C_UNK *HSD_LObjLoadDesc(void *arg0);

void fn_800EF7E4(s32 arg0) { } /* draft: stub */

void HSD_LObjAddCurrent(void *arg0) {
    void *temp_r31;
    M2C_UNK *var_r3;
    u8 temp_r30;
    M2C_UNK *var_r29;

    if (arg0 != NULL) {
        var_r3 = lbl_80350C2C;
loop_5:
        if (var_r3 != NULL) {
            if (0 /* draft: did not compile */) {
                HSD_LObjDeleteCurrent(arg0);
            } else {
                var_r3 = M2C_FIELD(var_r3, M2C_UNK **, 0);
                goto loop_5;
            }
        }
        if (arg0 != NULL) {
            M2C_FIELD(arg0, u16 *, 4) = (u16) (M2C_FIELD(arg0, u16 *, 4) + 1);
            if ((u16) M2C_FIELD(arg0, u16 *, 4) == -1U) {
                __assert(&lbl_802A91E4, 0x5D, &lbl_802A91F0);
            }
        }
        /* draft: did not compile: var_r29 = &lbl_80350C2C; */
loop_16:
        if ((M2C_UNK *) *var_r29 != NULL) {
            if (arg0 == NULL) {
                __assert(&lbl_803500FC, 0x163, &lbl_80350104);
            }
            temp_r31 = M2C_FIELD(*var_r29, void **, 4);
            temp_r30 = (u8) M2C_FIELD(arg0, u16 *, 0xA);
            if (temp_r31 == NULL) {
                __assert(&lbl_803500FC, 0x163, &lbl_80350104);
            }
            if ((u8) M2C_FIELD(temp_r31, u16 *, 0xA) <= temp_r30) {
                /* draft: did not compile: var_r29 = *var_r29; */
                goto loop_16;
            }
        }
        /* draft: did not compile: *var_r29 = HSD_SListAllocAndAppend(*var_r29, arg0); */
    }
}

void fn_800F0480(void *arg0) {
    M2C_UNK *var_r31;
    M2C_UNK *var_r3;
    u8 temp_r29;
    void *temp_r30;
    void *var_r28;

    var_r28 = arg0;
loop_20:
    if (var_r28 != NULL) {
        if (var_r28 != NULL) {
            var_r3 = lbl_80350C2C;
loop_6:
            if (var_r3 != NULL) {
                if (0 /* draft: did not compile */) {
                    HSD_LObjDeleteCurrent(var_r28);
                } else {
                    var_r3 = M2C_FIELD(var_r3, M2C_UNK **, 0);
                    goto loop_6;
                }
            }
            if (var_r28 != NULL) {
                M2C_FIELD(var_r28, u16 *, 4) = (u16) (M2C_FIELD(var_r28, u16 *, 4) + 1);
                if ((u16) M2C_FIELD(var_r28, u16 *, 4) == -1U) {
                    __assert(&lbl_802A91E4, 0x5D, &lbl_802A91F0);
                }
            }
            /* draft: did not compile: var_r31 = &lbl_80350C2C; */
loop_17:
            if ((M2C_UNK *) *var_r31 != NULL) {
                if (var_r28 == NULL) {
                    __assert(&lbl_803500FC, 0x163, &lbl_80350104);
                }
                temp_r30 = M2C_FIELD(*var_r31, void **, 4);
                temp_r29 = (u8) M2C_FIELD(var_r28, u16 *, 0xA);
                if (temp_r30 == NULL) {
                    __assert(&lbl_803500FC, 0x163, &lbl_80350104);
                }
                if ((u8) M2C_FIELD(temp_r30, u16 *, 0xA) <= temp_r29) {
                    /* draft: did not compile: var_r31 = *var_r31; */
                    goto loop_17;
                }
            }
            /* draft: did not compile: *var_r31 = HSD_SListAllocAndAppend(*var_r31, var_r28); */
        }
        var_r28 = M2C_FIELD(var_r28, void **, 0xC);
        goto loop_20;
    }
}

void HSD_LObjDeleteCurrent(void *arg0) { } /* draft: stub */

void HSD_LObjDeleteCurrentAll(void *arg0) { } /* draft: stub */

void fn_800F0984(void *arg0) { } /* draft: stub */

void *HSD_LObjGetCurrentByType(s32 arg0) {
    void *temp_r3;
    void *var_r5;

    var_r5 = lbl_80350C2C;
loop_3:
    if (var_r5 == NULL) {
        return NULL;
    }
    temp_r3 = M2C_FIELD(var_r5, void **, 4);
    if ((u32) (arg0 & 3) != (u32) (M2C_FIELD(temp_r3, u16 *, 8) & 3)) {
        var_r5 = M2C_FIELD(var_r5, void **, 0);
        goto loop_3;
    }
    return temp_r3;
}

s32 HSD_LightID2Index(s32 arg0) {
    s32 saved_reg_r31;
    s32 var_r31;

    var_r31 = saved_reg_r31;
    switch (arg0) {                                 /* irregular */
    case 0x1:
        var_r31 = 0;
        break;
    case 0x2:
        var_r31 = 1;
        break;
    case 0x4:
        var_r31 = 2;
        break;
    case 0x8:
        var_r31 = 3;
        break;
    case 0x10:
        var_r31 = 4;
        break;
    case 0x20:
        var_r31 = 5;
        break;
    case 0x40:
        var_r31 = 6;
        break;
    case 0x80:
        var_r31 = 7;
        break;
    case 0x100:
        var_r31 = 8;
        break;
    default:
        __assert(&lbl_803500F0, 0x49C, &lbl_803500F8);
        break;
    }
    return var_r31;
}

void HSD_Index2LightID() { } /* draft: stub */

void HSD_LObjRemoveAll(void *arg0) { } /* draft: stub */

void HSD_LObjSetColor(void *arg0, s32 *arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) *arg1;
}

void HSD_LObjGetColor(void *arg0, s32 *arg1) {
    *arg1 = M2C_FIELD(arg0, s32 *, 0x10);
}

void HSD_LObjSetSpot(void *arg0, s32 arg1, f32 farg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x20) = farg0;
        M2C_FIELD(arg0, s32 *, 0x24) = arg1;
    }
}

void HSD_LObjSetDistAttn(void *arg0, s32 arg1, f32 farg0, f32 farg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x2C) = farg0;
        M2C_FIELD(arg0, f32 *, 0x28) = farg1;
        M2C_FIELD(arg0, s32 *, 0x30) = arg1;
    }
}

void HSD_LObjSetPosition(void *arg0, s32 arg1) {
    if (arg0 == NULL) {
        __assert(&lbl_803500F0, 0x563, &lbl_80350104);
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x18) == 0U) {
        M2C_FIELD(arg0, u32 *, 0x18) = HSD_WObjAlloc();
        if ((u32) M2C_FIELD(arg0, u32 *, 0x18) == 0U) {
            __assert(&lbl_803500F0, 0x566, &lbl_802A923C);
        }
    }
    HSD_WObjSetPosition(M2C_FIELD(arg0, u32 *, 0x18), arg1);
}

s32 HSD_LObjGetPosition(void *arg0) {
    if ((arg0 != NULL) && ((u32) M2C_FIELD(arg0, u32 *, 0x18) != 0U)) {
        HSD_WObjGetPosition();
        return 1;
    }
    return 0;
}

void fn_800F116C(void *arg0, s32 arg1) {
    if (arg0 == NULL) {
        __assert(&lbl_803500F0, 0x587, &lbl_80350104);
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) == 0U) {
        M2C_FIELD(arg0, u32 *, 0x1C) = HSD_WObjAlloc();
        if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) == 0U) {
            __assert(&lbl_803500F0, 0x58A, &lbl_802A924C);
        }
    }
    HSD_WObjSetPosition(M2C_FIELD(arg0, u32 *, 0x1C), arg1);
}

s32 HSD_LObjGetInterest(void *arg0) {
    if ((arg0 != NULL) && ((u32) M2C_FIELD(arg0, u32 *, 0x1C) != 0U)) {
        HSD_WObjGetPosition();
        return 1;
    }
    return 0;
}

s32 HSD_AObjGetFlags(void *arg0) {
    if (arg0 != NULL) {
        return M2C_FIELD(arg0, s32 *, 0x18);
    }
    return 0;
}

s32 HSD_LObjGetInterestWObj(void *arg0) {
    if (arg0 != NULL) {
        return M2C_FIELD(arg0, s32 *, 0x1C);
    }
    return 0;
}

s32 LObjLoad(void *arg0, void *arg1) {
    s32 temp_r0;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    u16 temp_r4;
    u16 temp_r4_10;
    u16 temp_r4_4;
    u16 temp_r4_7;
    void *temp_r28;
    void *temp_r28_2;
    void *temp_r28_3;
    void *temp_r29;
    void *temp_r29_2;
    void *temp_r29_3;
    void *temp_r29_4;
    void *temp_r31;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r4_11;
    void *temp_r4_12;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r4_8;
    void *temp_r4_9;

    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    if (arg0 != NULL) {
        M2C_FIELD(arg0, u16 *, 8) = (u16) (M2C_FIELD(arg0, u16 *, 8) | M2C_FIELD(arg1, u16 *, 8));
    }
    temp_r0 = M2C_FIELD(arg1, u16 *, 8) & 3;
    switch (temp_r0) {                              /* irregular */
    case 0:
        break;
    case 1:
        temp_r29 = HSD_WObjLoadDesc(M2C_FIELD(arg1, s32 *, 0x10));
        if (arg0 != NULL) {
            temp_r31 = M2C_FIELD(arg0, void **, 0x18);
            if (temp_r31 != NULL) {
                temp_r4 = M2C_FIELD(temp_r31, u16 *, 4);
                var_r0 = temp_r4 == 0xFFFF;
                if (var_r0 != 0) {

                } else {
                    M2C_FIELD(temp_r31, u16 *, 4) = (u16) (temp_r4 - 1);
                    var_r0 = temp_r4 == 0;
                }
                if ((var_r0 != 0) && (temp_r31 != NULL)) {
                    temp_r4_2 = M2C_FIELD(temp_r31, void **, 0);
                    M2C_FIELD(temp_r4_2, M2C_UNK (**)(void *, void *), 0x30)(temp_r31, temp_r4_2);
                    temp_r4_3 = M2C_FIELD(temp_r31, void **, 0);
                    M2C_FIELD(temp_r4_3, M2C_UNK (**)(void *, void *), 0x34)(temp_r31, temp_r4_3);
                }
            }
            M2C_FIELD(arg0, void **, 0x18) = temp_r29;
        }
        break;
    case 2:
        temp_r29_2 = HSD_WObjLoadDesc(M2C_FIELD(arg1, s32 *, 0x10));
        if (arg0 != NULL) {
            temp_r28 = M2C_FIELD(arg0, void **, 0x18);
            if (temp_r28 != NULL) {
                temp_r4_4 = M2C_FIELD(temp_r28, u16 *, 4);
                var_r0_2 = temp_r4_4 == 0xFFFF;
                if (var_r0_2 != 0) {

                } else {
                    M2C_FIELD(temp_r28, u16 *, 4) = (u16) (temp_r4_4 - 1);
                    var_r0_2 = temp_r4_4 == 0;
                }
                if ((var_r0_2 != 0) && (temp_r28 != NULL)) {
                    temp_r4_5 = M2C_FIELD(temp_r28, void **, 0);
                    M2C_FIELD(temp_r4_5, M2C_UNK (**)(void *, void *), 0x30)(temp_r28, temp_r4_5);
                    temp_r4_6 = M2C_FIELD(temp_r28, void **, 0);
                    M2C_FIELD(temp_r4_6, M2C_UNK (**)(void *, void *), 0x34)(temp_r28, temp_r4_6);
                }
            }
            M2C_FIELD(arg0, void **, 0x18) = temp_r29_2;
        }
        if (M2C_FIELD(arg1, u16 *, 0xA) & 1) {
            if (arg0 != NULL) {
                M2C_FIELD(arg0, u16 *, 8) = (u16) (M2C_FIELD(arg0, u16 *, 8) | 0x40);
            }
            temp_r3 = M2C_FIELD(arg1, void **, 0x18);
            if (arg0 != NULL) {
                M2C_FIELD(arg0, f32 *, 0x2C) = (f32) M2C_FIELD(temp_r3, f32 *, 0xC);
                M2C_FIELD(arg0, f32 *, 0x30) = (f32) M2C_FIELD(temp_r3, f32 *, 0x10);
                M2C_FIELD(arg0, f32 *, 0x34) = (f32) M2C_FIELD(temp_r3, f32 *, 0x14);
            }
        } else {
            temp_r3_2 = M2C_FIELD(arg1, void **, 0x18);
            if (arg0 != NULL) {
                M2C_FIELD(arg0, f32 *, 0x2C) = (f32) M2C_FIELD(temp_r3_2, f32 *, 4);
                M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_FIELD(temp_r3_2, f32 *, 0);
                M2C_FIELD(arg0, f32 *, 0x30) = (f32) M2C_FIELD(temp_r3_2, f32 *, 8);
            }
        }
        break;
    case 3:
        temp_r29_3 = HSD_WObjLoadDesc(M2C_FIELD(arg1, s32 *, 0x10));
        if (arg0 != NULL) {
            temp_r28_2 = M2C_FIELD(arg0, void **, 0x18);
            if (temp_r28_2 != NULL) {
                temp_r4_7 = M2C_FIELD(temp_r28_2, u16 *, 4);
                var_r0_3 = temp_r4_7 == 0xFFFF;
                if (var_r0_3 != 0) {

                } else {
                    M2C_FIELD(temp_r28_2, u16 *, 4) = (u16) (temp_r4_7 - 1);
                    var_r0_3 = temp_r4_7 == 0;
                }
                if ((var_r0_3 != 0) && (temp_r28_2 != NULL)) {
                    temp_r4_8 = M2C_FIELD(temp_r28_2, void **, 0);
                    M2C_FIELD(temp_r4_8, M2C_UNK (**)(void *, void *), 0x30)(temp_r28_2, temp_r4_8);
                    temp_r4_9 = M2C_FIELD(temp_r28_2, void **, 0);
                    M2C_FIELD(temp_r4_9, M2C_UNK (**)(void *, void *), 0x34)(temp_r28_2, temp_r4_9);
                }
            }
            M2C_FIELD(arg0, void **, 0x18) = temp_r29_3;
        }
        temp_r29_4 = HSD_WObjLoadDesc(M2C_FIELD(arg1, s32 *, 0x14));
        if (arg0 != NULL) {
            temp_r28_3 = M2C_FIELD(arg0, void **, 0x1C);
            if (temp_r28_3 != NULL) {
                temp_r4_10 = M2C_FIELD(temp_r28_3, u16 *, 4);
                var_r0_4 = temp_r4_10 == 0xFFFF;
                if (var_r0_4 != 0) {

                } else {
                    M2C_FIELD(temp_r28_3, u16 *, 4) = (u16) (temp_r4_10 - 1);
                    var_r0_4 = temp_r4_10 == 0;
                }
                if ((var_r0_4 != 0) && (temp_r28_3 != NULL)) {
                    temp_r4_11 = M2C_FIELD(temp_r28_3, void **, 0);
                    M2C_FIELD(temp_r4_11, M2C_UNK (**)(void *, void *), 0x30)(temp_r28_3, temp_r4_11);
                    temp_r4_12 = M2C_FIELD(temp_r28_3, void **, 0);
                    M2C_FIELD(temp_r4_12, M2C_UNK (**)(void *, void *), 0x34)(temp_r28_3, temp_r4_12);
                }
            }
            M2C_FIELD(arg0, void **, 0x1C) = temp_r29_4;
        }
        if (M2C_FIELD(arg1, u16 *, 0xA) & 1) {
            if (arg0 != NULL) {
                M2C_FIELD(arg0, u16 *, 8) = (u16) (M2C_FIELD(arg0, u16 *, 8) | 0x40);
            }
            temp_r3_3 = M2C_FIELD(arg1, void **, 0x18);
            if (arg0 != NULL) {
                M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(temp_r3_3, f32 *, 0);
                M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_FIELD(temp_r3_3, f32 *, 4);
                M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_FIELD(temp_r3_3, f32 *, 8);
            }
            if (arg0 != NULL) {
                M2C_FIELD(arg0, f32 *, 0x2C) = (f32) M2C_FIELD(temp_r3_3, f32 *, 0xC);
                M2C_FIELD(arg0, f32 *, 0x30) = (f32) M2C_FIELD(temp_r3_3, f32 *, 0x10);
                M2C_FIELD(arg0, f32 *, 0x34) = (f32) M2C_FIELD(temp_r3_3, f32 *, 0x14);
            }
        } else {
            temp_r3_4 = M2C_FIELD(arg1, void **, 0x18);
            if (arg0 != NULL) {
                M2C_FIELD(arg0, f32 *, 0x2C) = (f32) M2C_FIELD(temp_r3_4, f32 *, 0xC);
                M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_FIELD(temp_r3_4, f32 *, 8);
                M2C_FIELD(arg0, f32 *, 0x30) = (f32) M2C_FIELD(temp_r3_4, f32 *, 0x10);
            }
            temp_r3_5 = M2C_FIELD(arg1, void **, 0x18);
            if (arg0 != NULL) {
                M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(temp_r3_5, f32 *, 0);
                M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_FIELD(temp_r3_5, f32 *, 4);
            }
        }
        break;
    default:
        OSReport(&lbl_802A9280);
        HSD_Panic(&lbl_803500F0, 0x654, &lbl_80350110);
        break;
    }
    return 0;
}

M2C_UNK *HSD_LObjLoadDesc(void *arg0) {
    M2C_UNK *sp8;
    M2C_UNK **var_r30;
    M2C_UNK *temp_r3;
    M2C_UNK *temp_r3_2;
    M2C_UNK *var_r3;
    void *var_r29;
    M2C_UNK *temp_r5;

    var_r30 = &sp8;
    var_r29 = arg0;
loop_12:
    if (var_r29 != NULL) {
        if (((u32) M2C_FIELD(var_r29, u32 *, 0) == 0U) || (hsdSearchClassInfo() == 0U)) {
            var_r3 = lbl_80350C28;
            var_r3 = var_r3 != NULL ? var_r3 : &lbl_802A9168;
            temp_r3 = hsdNew(var_r3);
            if (temp_r3 == NULL) {
                __assert(&lbl_803500F0, 0x5D0, &lbl_8035010C);
            }
            *var_r30 = temp_r3;
        } else {
            *var_r30 = hsdNew((long *)(0));
            if ((M2C_UNK *) *var_r30 == NULL) {
                __assert(&lbl_803500F0, 0x676, &lbl_80350114);
            }
        }
        temp_r3_2 = *var_r30;
        /* draft: did not compile: temp_r5 = *temp_r3_2; */
        M2C_FIELD(temp_r5, M2C_UNK (**)(M2C_UNK *, void *, M2C_UNK *), 0x3C)(temp_r3_2, var_r29, temp_r5);
        var_r29 = M2C_FIELD(var_r29, void **, 4);
        /* draft: did not compile: var_r30 = &*(*var_r30 + 0xC); */
        goto loop_12;
    }
    *var_r30 = NULL;
    return sp8;
}
