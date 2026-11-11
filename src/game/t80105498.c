/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

extern M2C_UNK lbl_8031EBA8;
extern M2C_UNK lbl_8031EBD4;
extern M2C_UNK lbl_802A9FC0;
u32 fn_80109570(s32, M2C_UNK);
M2C_UNK __assert(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_802A9FD0;
extern M2C_UNK lbl_80350210;
u32 fn_8010959C();
extern void *lbl_80350CE0;
extern M2C_UNK lbl_8031EC00;
extern M2C_UNK lbl_8031EC2C;
extern f64 lbl_803520E0;
M2C_UNK HSD_AObjRemove();
M2C_UNK HSD_AObjReqAnim(f32);
u32 HSD_AObjLoadDesc(s32);
M2C_UNK HSD_JObjSetupMatrixSub(void *);
extern M2C_UNK lbl_801DA8F8;
extern M2C_UNK lbl_802AA018;
extern M2C_UNK lbl_80350218;
extern M2C_UNK lbl_80350220;
extern M2C_UNK lbl_80350228;
extern f32 lbl_803520E8;
M2C_UNK PSVECSubtract(f32 *, f32 *, f32 *);
M2C_UNK PSVECScale(f32 *, f32 *, f32);
f32 PSVECDotProduct(f32 *, f32 *);
M2C_UNK PSVECCrossProduct(f32 *, f32 *, f32 *);
extern f32 lbl_803520F8;
extern f32 lbl_803520FC;
extern f64 lbl_80352100;
extern f64 lbl_80352108;
M2C_UNK PSMTXCopy();
f32 PSVECMag(f32 *, f32, f32);
extern s32 lbl_802AA024;
extern M2C_UNK lbl_80350230;
M2C_UNK HSD_JObjUnrefThis();
M2C_UNK HSD_RvalueResolveRefsAll(s32, s32);
void *HSD_IDGetDataFromTable(M2C_UNK, void *, M2C_UNK);
M2C_UNK expLoadDesc(void *, void *);
M2C_UNK bcexpLoadDesc(void *, void *);
M2C_UNK HSD_Panic(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_802AA0A8;
extern f32 lbl_80352110;
M2C_UNK HSD_RvalueRemoveAll(s32);
extern M2C_UNK lbl_80350234;

void HSD_VecInitAllocData(void);
void HSD_MtxInitAllocData(void);
void HSD_MulColor(void *arg0, void *arg1, void *arg2);
s32 HSD_GetNbBits(s32 arg0);
void HSD_Index2PosNrmMtx();
void HSD_ObjSetHeap(s32 arg0, s32 arg1);
u32 fn_801056E0(void *arg0, u32 arg1);
M2C_UNK *fn_80105930(void *arg0);
void HSD_ObjFree(void *arg0, M2C_UNK *arg1);
void HSD_ObjAllocInit(void *arg0, s32 arg1, u32 arg2);
void HSD_ListInitAllocData(void);
void *HSD_RObjGetByType(void *arg0, u32 arg1, u32 arg2);
void RObjUpdateFunc(void *arg0, s32 arg1, f32 *arg2);
void HSD_RObjAnimAll(void *arg0);
void HSD_RObjRemoveAnimAllByFlags(void *arg0, s32 arg1);
void HSD_RObjRemoveAnimAll(void *arg0);
void HSD_RObjReqAnimAllByFlags(void *arg0, s32 arg1, f32 farg0);
void HSD_RObjReqAnimAll(void *arg0, f32 farg0);
void HSD_RObjAddAnimAll(void *arg0, void *arg1);
s32 HSD_RObjGetGlobalPosition(void *arg0, u32 arg1, void *arg2, M2C_UNK arg_sp0);
void resolveCnsDirUp(void *arg0, void *arg1, M2C_UNK (*arg2)(void *, M2C_UNK, f32 *, f32, f32, f32), M2C_UNK arg_sp0);
void resolveLimits();
void HSD_RObjUpdateAll(void *arg0, u32 arg1, M2C_UNK (*arg2)(u32, s32, f32 *, f32, f32, f32));
void HSD_RObjResolveRefsAll(void *arg0, void *arg1);
void *HSD_RObjLoadDesc(void *arg0, M2C_UNK arg_sp0);
void HSD_RObjRemoveAll(void *arg0);
s32 HSD_RObjAlloc(void);
void HSD_RObjFree(s32 arg0);

void HSD_VecInitAllocData(void) {
    HSD_ObjAllocInit(&lbl_8031EBA8, 0xC, 4);
}

void HSD_MtxInitAllocData(void) {
    HSD_ObjAllocInit(&lbl_8031EBD4, 0x30, 4);
}

void HSD_MulColor(void *arg0, void *arg1, void *arg2) {
    M2C_FIELD(arg2, u8 *, 0) = (u8) ((M2C_FIELD(arg0, u8 *, 0) * M2C_FIELD(arg1, u8 *, 0)) / 255);
    M2C_FIELD(arg2, u8 *, 1) = (u8) ((M2C_FIELD(arg0, u8 *, 1) * M2C_FIELD(arg1, u8 *, 1)) / 255);
    M2C_FIELD(arg2, u8 *, 2) = (u8) ((M2C_FIELD(arg0, u8 *, 2) * M2C_FIELD(arg1, u8 *, 2)) / 255);
    M2C_FIELD(arg2, u8 *, 3) = (u8) ((M2C_FIELD(arg0, u8 *, 3) * M2C_FIELD(arg1, u8 *, 3)) / 255);
}

s32 HSD_GetNbBits(s32 arg0) {
    s32 temp_r6;
    s32 temp_r6_2;
    s32 temp_r6_3;
    s32 temp_r6_4;
    s32 temp_r6_5;
    s32 temp_r6_6;
    s32 temp_r6_7;
    s32 var_ctr;
    s32 var_r5;
    s32 var_r6;

    var_ctr = 4;
    var_r5 = 0;
    var_r6 = 0;
    do {
        if (arg0 & (1 << var_r6)) {
            var_r5 += 1;
        }
        temp_r6 = var_r6 + 1;
        if (arg0 & (1 << temp_r6)) {
            var_r5 += 1;
        }
        temp_r6_2 = temp_r6 + 1;
        if (arg0 & (1 << temp_r6_2)) {
            var_r5 += 1;
        }
        temp_r6_3 = temp_r6_2 + 1;
        if (arg0 & (1 << temp_r6_3)) {
            var_r5 += 1;
        }
        temp_r6_4 = temp_r6_3 + 1;
        if (arg0 & (1 << temp_r6_4)) {
            var_r5 += 1;
        }
        temp_r6_5 = temp_r6_4 + 1;
        if (arg0 & (1 << temp_r6_5)) {
            var_r5 += 1;
        }
        temp_r6_6 = temp_r6_5 + 1;
        if (arg0 & (1 << temp_r6_6)) {
            var_r5 += 1;
        }
        temp_r6_7 = temp_r6_6 + 1;
        if (arg0 & (1 << temp_r6_7)) {
            var_r5 += 1;
        }
        var_r6 = temp_r6_7 + 1;
        var_ctr -= 1;
    } while (var_ctr != 0);
    return var_r5;
}

void HSD_Index2PosNrmMtx() { } /* draft: stub */

void HSD_ObjSetHeap(s32 arg0, s32 arg1) {
    M2C_FIELD(&lbl_802A9FC0, s32 *, 4) = arg1;
    M2C_FIELD(&lbl_802A9FC0, s32 *, 0) = arg1;
    M2C_FIELD(&lbl_802A9FC0, s32 *, 0xC) = arg0;
    M2C_FIELD(&lbl_802A9FC0, s32 *, 8) = arg0;
}

u32 fn_801056E0(void *arg0, u32 arg1) { return 0; } /* draft: stub */

#pragma push
#pragma dont_inline on
M2C_UNK *fn_80105930(void *arg0) {
    M2C_UNK *temp_r3;
    u32 temp_r4;
    u32 var_r3;
    u32 var_r3_2;

    if ((((u8) M2C_FIELD((s32)arg0, u8 *, 0) >> 7U) & 1) && ((u32) M2C_FIELD(arg0, u32 *, 8) >= (u32) M2C_FIELD(arg0, u32 *, 0x14))) {
        return NULL;
    }
    if (((u8) M2C_FIELD(arg0, u8 *, 0) >> 6U) & 1) {
        if ((u32) (M2C_FIELD(arg0, u32 *, 0x1C) + 0x10000) == -1U) {
            if ((u32) M2C_FIELD(&lbl_802A9FC0, u32 *, 0) != 0U) {
                var_r3 = M2C_FIELD(&lbl_802A9FC0, u32 *, 0xC);
            } else {
                var_r3 = fn_8010959C();
            }
            if (var_r3 <= (u32) M2C_FIELD(arg0, u32 *, 0x18)) {
                M2C_FIELD(arg0, u32 *, 0x1C) = (u32) (M2C_FIELD(arg0, u32 *, 8) + M2C_FIELD(arg0, u32 *, 0xC));
            }
        } else {
            if ((u32) M2C_FIELD(&lbl_802A9FC0, u32 *, 0) != 0U) {
                var_r3_2 = M2C_FIELD(&lbl_802A9FC0, u32 *, 0xC);
            } else {
                var_r3_2 = fn_8010959C();
            }
            if (var_r3_2 > (u32) M2C_FIELD(arg0, u32 *, 0x18)) {
                M2C_FIELD(arg0, u32 *, 0x1C) = -1U;
            }
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 8) >= (u32) M2C_FIELD(arg0, u32 *, 0x1C)) {
            return NULL;
        }
        goto block_17;
    }
block_17:
    if ((u32) M2C_FIELD(arg0, u32 *, 0xC) == 0U) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x20) > 0x2000U) {
            __assert(&lbl_802A9FC0 + 0x10, 0x147, &lbl_802A9FC0 + 0x1C);
        }
        fn_801056E0(arg0, 0x2000U / (u32) M2C_FIELD(arg0, u32 *, 0x20));
        if ((u32) M2C_FIELD(arg0, u32 *, 0xC) == 0U) {
            return NULL;
        }
        goto block_22;
    }
block_22:
    temp_r3 = M2C_FIELD(arg0, M2C_UNK **, 4);
    M2C_FIELD(arg0, M2C_UNK **, 4) = (M2C_UNK *) *temp_r3;
    M2C_FIELD(arg0, u32 *, 8) = (u32) (M2C_FIELD(arg0, u32 *, 8) + 1);
    M2C_FIELD(arg0, u32 *, 0xC) = (u32) (M2C_FIELD(arg0, u32 *, 0xC) - 1);
    temp_r4 = M2C_FIELD(arg0, u32 *, 8);
    if (temp_r4 > (u32) M2C_FIELD(arg0, u32 *, 0x10)) {
        M2C_FIELD(arg0, u32 *, 0x10) = temp_r4;
    }
    return temp_r3;
}
#pragma pop

void HSD_ObjFree(void *arg0, M2C_UNK *arg1) {
    /* draft: did not compile: *arg1 = M2C_FIELD(arg0, M2C_UNK **, 4); */
    M2C_FIELD(arg0, M2C_UNK **, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) - 1);
}

void HSD_ObjAllocInit(void *arg0, s32 arg1, u32 arg2) {
    s32 temp_r3;
    void **var_r3;
    void *temp_r4;

    if (arg0 == NULL) {
        __assert(&lbl_802A9FC0 + 0x10, 0x183, &lbl_80350210);
    }
    if (arg0 != NULL) {
        var_r3 = &lbl_80350CE0;
loop_7:
        temp_r4 = *var_r3;
        if (temp_r4 != NULL) {
            if (temp_r4 == arg0) {
                *var_r3 = M2C_FIELD(temp_r4, void **, 0x28);
            } else {
                /* draft: did not compile: var_r3 = temp_r4 + 0x28; */
            }
            goto loop_7;
        }
    } else {
        lbl_80350CE0 = NULL;
    }
    memset(arg0, 0, 0x2C);
    M2C_FIELD(arg0, s32 *, 0x14) = -1;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = -1;
    if (arg2 > 0x20U) {
        __assert(&lbl_802A9FC0 + 0x10, 0x18E, &lbl_802A9FC0 + 0x30);
    }
    if (HSD_GetNbBits(arg2) != 1) {
        __assert(&lbl_802A9FC0 + 0x10, 0x18F, &lbl_802A9FC0 + 0x3C);
    }
    M2C_FIELD(arg0, u32 *, 0x24) = arg2;
    temp_r3 = M2C_FIELD(arg0, u32 *, 0x24) - 1;
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) ((arg1 + temp_r3) & ~temp_r3);
    M2C_FIELD(arg0, void **, 0x28) = (void *) lbl_80350CE0;
    lbl_80350CE0 = arg0;
}

void HSD_ListInitAllocData(void) {
    HSD_ObjAllocInit(&lbl_8031EC00, 0x1C, 4);
    HSD_ObjAllocInit(&lbl_8031EC2C, 0xC, 4);
}

void *HSD_RObjGetByType(void *arg0, u32 arg1, u32 arg2) {
    u32 temp_r6;
    void *var_r3;

    var_r3 = arg0;
    if (var_r3 == NULL) {
        return NULL;
    }
loop_9:
    if (var_r3 == NULL) {
        return NULL;
    }
    temp_r6 = M2C_FIELD(var_r3, u32 *, 4);
    if (((temp_r6 >> 0x1FU) != 0) && ((u32) (temp_r6 & 0x70000000) == arg1)) {
        if (arg2 != 0U) {
            if (arg2 == (u32) (temp_r6 & 0x0FFFFFFF)) {
                return var_r3;
            }
            goto block_8;
        }
        return var_r3;
    }
block_8:
    var_r3 = M2C_FIELD(var_r3, void **, 0);
    goto loop_9;
}

void RObjUpdateFunc(void *arg0, s32 arg1, f32 *arg2) {
    if ((arg0 != NULL) && (arg1 == 1)) {
        if (*arg2 >= lbl_803520E0) {
            M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) | 0x80000000);
            return;
        }
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) & 0x7FFFFFFF);
    }
}

void HSD_RObjAnimAll(void *arg0) {
    void *var_r30;

    if (arg0 != NULL) {
        var_r30 = arg0;
loop_5:
        if (var_r30 != NULL) {
            if (var_r30 != NULL) {
                HSD_AObjInterpretAnim(M2C_FIELD(var_r30, s32 *, 0x18), var_r30, RObjUpdateFunc);
            }
            var_r30 = M2C_FIELD(var_r30, void **, 0);
            goto loop_5;
        }
    }
}

void HSD_RObjRemoveAnimAllByFlags(void *arg0, s32 arg1) {
    void *var_r29;

    var_r29 = arg0;
    if (var_r29 == NULL) {
        return;
    }
loop_8:
    if (var_r29 != NULL) {
        if ((var_r29 != NULL) && ((u32) M2C_FIELD(var_r29, u32 *, 0x18) != 0U) && ((u32) (arg1 & 0x80) != 0)) {
            HSD_AObjRemove();
            M2C_FIELD(var_r29, u32 *, 0x18) = 0U;
        }
        var_r29 = M2C_FIELD(var_r29, void **, 0);
        goto loop_8;
    }
}

void HSD_RObjRemoveAnimAll(void *arg0) {
    void *var_r30;

    var_r30 = arg0;
    if (arg0 == NULL) {
        return;
    }
loop_7:
    if (var_r30 != NULL) {
        if ((var_r30 != NULL) && ((u32) M2C_FIELD(var_r30, u32 *, 0x18) != 0U)) {
            HSD_AObjRemove();
            M2C_FIELD(var_r30, u32 *, 0x18) = 0U;
        }
        var_r30 = M2C_FIELD(var_r30, void **, 0);
        goto loop_7;
    }
}

void HSD_RObjReqAnimAllByFlags(void *arg0, s32 arg1, f32 farg0) {
    void *var_r30;

    var_r30 = arg0;
    if (var_r30 == NULL) {
        return;
    }
loop_8:
    if (var_r30 != NULL) {
        if ((var_r30 != NULL) && ((u32) M2C_FIELD(var_r30, u32 *, 0x18) != 0U) && ((u32) (arg1 & 0x80) != 0)) {
            HSD_AObjReqAnim(farg0);
        }
        var_r30 = M2C_FIELD(var_r30, void **, 0);
        goto loop_8;
    }
}

void HSD_RObjReqAnimAll(void *arg0, f32 farg0) {
    void *var_r31;

    var_r31 = arg0;
    if (arg0 == NULL) {
        return;
    }
loop_7:
    if (var_r31 != NULL) {
        if ((var_r31 != NULL) && ((u32) M2C_FIELD(var_r31, u32 *, 0x18) != 0U)) {
            HSD_AObjReqAnim(farg0);
        }
        var_r31 = M2C_FIELD(var_r31, void **, 0);
        goto loop_7;
    }
}

void HSD_RObjAddAnimAll(void *arg0, void *arg1) {
    void *var_r30;
    void *var_r31;

    if (arg0 != NULL) {
        if (arg1 == NULL) {
            return;
        }
        var_r31 = arg0;
        var_r30 = arg1;
loop_10:
        if ((var_r31 != NULL) && (var_r30 != NULL)) {
            if ((var_r31 != NULL) && (var_r30 != NULL)) {
                if ((u32) M2C_FIELD(var_r31, u32 *, 0x18) != 0U) {
                    HSD_AObjRemove();
                }
                M2C_FIELD(var_r31, u32 *, 0x18) = HSD_AObjLoadDesc(M2C_FIELD(var_r30, s32 *, 4));
            }
            var_r31 = M2C_FIELD(var_r31, void **, 0);
            var_r30 = M2C_FIELD(var_r30, void **, 0);
            goto loop_10;
        }
    }
}

s32 HSD_RObjGetGlobalPosition(void *arg0, u32 arg1, void *arg2, M2C_UNK arg_sp0) {
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f3;
    s32 temp_cr0_eq;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 var_r29;
    s32 var_r3;
    void *temp_r26;
    void *temp_r3;
    void *var_r30;

    var_r29 = 0;
    sp8 = M2C_FIELD(&lbl_801DA8F8, f32 *, 0);
    spC = M2C_FIELD(&lbl_801DA8F8, f32 *, 4);
    sp10 = M2C_FIELD(&lbl_801DA8F8, f32 *, 8);
    if (arg0 == NULL) {
        return 0;
    }
    var_r30 = arg0;
loop_18:
    if (var_r30 != NULL) {
        temp_r4 = M2C_FIELD(var_r30, s32 *, 4);
        if (((temp_r4 & 0x70000000) == 0x10000000) && (temp_r4 & 0x80000000) && (arg1 == (u32) (temp_r4 & 0x0FFFFFFF & ~-((var_r30 == NULL) & 1)))) {
            if ((void *) M2C_FIELD(var_r30, void **, 8) == NULL) {
                __assert(&lbl_80350218, 0x1F2, &lbl_802AA018);
            }
            temp_r26 = M2C_FIELD(var_r30, void **, 8);
            temp_cr0_eq = temp_r26 == NULL;
            if (temp_cr0_eq == 0) {
                if (temp_cr0_eq != 0) {
                    __assert(&lbl_80350220, 0x25D, &lbl_80350228);
                }
                temp_r4_2 = M2C_FIELD(temp_r26, s32 *, 0x14);
                var_r3 = 0;
                if (!(temp_r4_2 & 0x800000) && (temp_r4_2 & 0x40)) {
                    var_r3 = 1;
                }
                if (var_r3 != 0) {
                    HSD_JObjSetupMatrixSub(temp_r26);
                }
            }
            temp_r3 = M2C_FIELD(var_r30, void **, 8);
            var_r29 += 1;
            sp8 += M2C_FIELD(temp_r3, f32 *, 0x50);
            spC += M2C_FIELD(temp_r3, f32 *, 0x60);
            sp10 += M2C_FIELD(temp_r3, f32 *, 0x70);
        }
        var_r30 = M2C_FIELD(var_r30, void **, 0);
        goto loop_18;
    }
    if (var_r29 != 0) {
        temp_f3 = lbl_803520E8 / (f32) var_r29;
        M2C_FIELD(arg2, f32 *, 0) = (f32) (temp_f3 * sp8);
        M2C_FIELD(arg2, f32 *, 4) = (f32) (temp_f3 * spC);
        M2C_FIELD(arg2, f32 *, 8) = (f32) (temp_f3 * sp10);
    }
    return var_r29;
}

void resolveCnsDirUp(void *arg0, void *arg1, M2C_UNK (*arg2)(void *, M2C_UNK, f32 *, f32, f32, f32), M2C_UNK arg_sp0) {
    s32 sp18;
    s32 sp14;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f2_7;
    f32 temp_f2_8;
    f32 temp_f2_9;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 var_f1;
    f32 var_f1_2;
    f64 temp_f2;
    f64 temp_f2_2;
    f64 temp_f2_3;
    f64 temp_f2_4;
    f64 temp_f2_5;
    f64 temp_f2_6;
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 var_r28_2;
    u8 var_r29;
    s32 var_r3;
    s32 var_r3_2;
    void *temp_r24;
    void *temp_r24_2;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r5;
    void *var_r28;
    void *var_r29_2;

    var_r29 = 0;
    sp64 = M2C_FIELD(&lbl_801DA8F8, f32 *, 0xC);
    sp68 = M2C_FIELD(&lbl_801DA8F8, f32 *, 0x10);
    sp6C = M2C_FIELD(&lbl_801DA8F8, f32 *, 0x14);
    sp58 = M2C_FIELD(&lbl_801DA8F8, f32 *, 0x18);
    sp5C = M2C_FIELD(&lbl_801DA8F8, f32 *, 0x1C);
    sp60 = M2C_FIELD(&lbl_801DA8F8, f32 *, 0x20);
    sp34 = M2C_FIELD(&lbl_801DA8F8, f32 *, 0);
    sp38 = M2C_FIELD(&lbl_801DA8F8, f32 *, 4);
    sp3C = M2C_FIELD(&lbl_801DA8F8, f32 *, 8);
    if (arg0 == NULL) {

    } else {
        var_r28 = arg0;
loop_18:
        if (var_r28 != NULL) {
            temp_r4 = M2C_FIELD(var_r28, s32 *, 4);
            if (((temp_r4 & 0x70000000) == 0x10000000) && (temp_r4 & 0x80000000) && ((u32) (temp_r4 & 0x0FFFFFFF & ~-((var_r28 == NULL) & 1)) == 2)) {
                if ((void *) M2C_FIELD(var_r28, void **, 8) == NULL) {
                    __assert(&lbl_80350218, 0x1F2, &lbl_802AA018);
                }
                temp_r24 = M2C_FIELD(var_r28, void **, 8);
                temp_cr0_eq = temp_r24 == NULL;
                if (temp_cr0_eq == 0) {
                    if (temp_cr0_eq != 0) {
                        __assert(&lbl_80350220, 0x25D, &lbl_80350228);
                    }
                    temp_r4_2 = M2C_FIELD(temp_r24, s32 *, 0x14);
                    var_r3 = 0;
                    if (!(temp_r4_2 & 0x800000) && (temp_r4_2 & 0x40)) {
                        var_r3 = 1;
                    }
                    if (var_r3 != 0) {
                        HSD_JObjSetupMatrixSub(temp_r24);
                    }
                }
                temp_r3 = M2C_FIELD(var_r28, void **, 8);
                var_r29 += 1;
                sp34 += M2C_FIELD(temp_r3, f32 *, 0x50);
                sp38 += M2C_FIELD(temp_r3, f32 *, 0x60);
                sp3C += M2C_FIELD(temp_r3, f32 *, 0x70);
            }
            var_r28 = M2C_FIELD(var_r28, void **, 0);
            goto loop_18;
        }
        if (var_r29 != 0) {
            temp_f3 = lbl_803520E8 / (f32) var_r29;
            sp4C = temp_f3 * sp34;
            sp50 = temp_f3 * sp38;
            sp54 = temp_f3 * sp3C;
        }
    }
    if (var_r29 != 0) {
        sp40 = M2C_FIELD(arg1, f32 *, 0x50);
        sp44 = M2C_FIELD(arg1, f32 *, 0x60);
        sp48 = M2C_FIELD(arg1, f32 *, 0x70);
        PSVECSubtract(&sp4C, &sp40, &sp4C);
        var_r28_2 = 0;
        sp28 = M2C_FIELD(&lbl_801DA8F8, f32 *, 0);
        sp2C = M2C_FIELD(&lbl_801DA8F8, f32 *, 4);
        sp30 = M2C_FIELD(&lbl_801DA8F8, f32 *, 8);
        if (arg0 == NULL) {

        } else {
            var_r29_2 = arg0;
loop_40:
            if (var_r29_2 != NULL) {
                temp_r4_3 = M2C_FIELD(var_r29_2, s32 *, 4);
                if (((temp_r4_3 & 0x70000000) == 0x10000000) && (temp_r4_3 & 0x80000000) && ((u32) (temp_r4_3 & 0x0FFFFFFF & ~-((var_r29_2 == NULL) & 1)) == 3)) {
                    if ((void *) M2C_FIELD(var_r29_2, void **, 8) == NULL) {
                        __assert(&lbl_80350218, 0x1F2, &lbl_802AA018);
                    }
                    temp_r24_2 = M2C_FIELD(var_r29_2, void **, 8);
                    temp_cr0_eq_2 = temp_r24_2 == NULL;
                    if (temp_cr0_eq_2 == 0) {
                        if (temp_cr0_eq_2 != 0) {
                            __assert(&lbl_80350220, 0x25D, &lbl_80350228);
                        }
                        temp_r4_4 = M2C_FIELD(temp_r24_2, s32 *, 0x14);
                        var_r3_2 = 0;
                        if (!(temp_r4_4 & 0x800000) && (temp_r4_4 & 0x40)) {
                            var_r3_2 = 1;
                        }
                        if (var_r3_2 != 0) {
                            HSD_JObjSetupMatrixSub(temp_r24_2);
                        }
                    }
                    temp_r3_2 = M2C_FIELD(var_r29_2, void **, 8);
                    var_r28_2 += 1;
                    sp28 += M2C_FIELD(temp_r3_2, f32 *, 0x50);
                    sp2C += M2C_FIELD(temp_r3_2, f32 *, 0x60);
                    sp30 += M2C_FIELD(temp_r3_2, f32 *, 0x70);
                }
                var_r29_2 = M2C_FIELD(var_r29_2, void **, 0);
                goto loop_40;
            }
            if (var_r28_2 != 0) {
                temp_f3_2 = lbl_803520E8 / (f32) var_r28_2;
                sp58 = temp_f3_2 * sp28;
                sp5C = temp_f3_2 * sp2C;
                sp60 = temp_f3_2 * sp30;
            }
        }
        if (var_r28_2 != 0) {
            PSVECSubtract(&sp58, &sp40, &sp58);
        } else if (fabs(lbl_803520E8 - PSVECDotProduct(&sp4C, &sp58)) < (f32) lbl_80352108) {
            sp60 = lbl_803520E8;
            sp58 = lbl_803520FC;
            sp5C = lbl_803520FC;
        }
        temp_r5 = M2C_FIELD(arg1, void **, 0x74);
        if (temp_r5 != NULL) {
            sp64 = M2C_FIELD(temp_r5, f32 *, 0);
            sp68 = M2C_FIELD(temp_r5, f32 *, 4);
            sp6C = M2C_FIELD(temp_r5, f32 *, 8);
        }
        PSVECCrossProduct(&sp4C, &sp58, &sp10);
        var_f1 = lbl_803520E8 / (lbl_803520F8 + PSVECDotProduct(&sp4C, &sp4C));
        if (var_f1 > lbl_803520FC) {
            temp_f2 = __frsqrte(var_f1);
            temp_f2_2 = lbl_803520E0 * temp_f2 * -(((f64) var_f1 * (temp_f2 * temp_f2)) - lbl_80352100);
            temp_f2_3 = lbl_803520E0 * temp_f2_2 * -(((f64) var_f1 * (temp_f2_2 * temp_f2_2)) - lbl_80352100);
            spC = (f32) ((f64) var_f1 * (lbl_803520E0 * temp_f2_3 * -(((f64) var_f1 * (temp_f2_3 * temp_f2_3)) - lbl_80352100)));
            var_f1 = spC;
        }
        PSVECScale(&sp4C, &sp4C, var_f1);
        var_f1_2 = lbl_803520E8 / (lbl_803520F8 + PSVECDotProduct(&sp10, &sp10));
        if (var_f1_2 > lbl_803520FC) {
            temp_f2_4 = __frsqrte(var_f1_2);
            temp_f2_5 = lbl_803520E0 * temp_f2_4 * -(((f64) var_f1_2 * (temp_f2_4 * temp_f2_4)) - lbl_80352100);
            temp_f2_6 = lbl_803520E0 * temp_f2_5 * -(((f64) var_f1_2 * (temp_f2_5 * temp_f2_5)) - lbl_80352100);
            sp8 = (f32) ((f64) var_f1_2 * (lbl_803520E0 * temp_f2_6 * -(((f64) var_f1_2 * (temp_f2_6 * temp_f2_6)) - lbl_80352100)));
            var_f1_2 = sp8;
        }
        PSVECScale(&sp10, &sp10, var_f1_2);
        PSVECCrossProduct(&sp10, &sp4C, &sp58);
        temp_f2_7 = sp4C * sp64;
        temp_f1 = sp50 * sp64;
        sp1C = temp_f2_7;
        sp20 = temp_f1;
        sp24 = sp54 * sp64;
        arg2(arg1, 0x32, &sp1C, temp_f1, temp_f2_7, sp64);
        temp_f2_8 = sp58 * sp68;
        temp_f1_2 = sp5C * sp68;
        sp1C = temp_f2_8;
        sp20 = temp_f1_2;
        sp24 = sp60 * sp68;
        arg2(arg1, 0x33, &sp1C, temp_f1_2, temp_f2_8, sp68);
        temp_f2_9 = sp10 * sp6C;
        temp_f1_3 = sp14 * sp6C;
        sp1C = temp_f2_9;
        sp20 = temp_f1_3;
        sp24 = sp18 * sp6C;
        arg2(arg1, 0x34, &sp1C, temp_f1_3, temp_f2_9, sp6C);
        /* draft: did not compile: arg2(arg1, 0x37, NULL); */
    }
}

void resolveLimits() { } /* draft: stub */

#pragma push
#pragma dont_inline on
void HSD_RObjUpdateAll(void *arg0, u32 arg1, M2C_UNK (*arg2)(u32, s32, f32 *, f32, f32, f32)) {
    M2C_UNK sp30;
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
    M2C_UNK *var_r25;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_6;
    f32 temp_f30;
    f32 temp_f31;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 var_f1;
    f32 var_f5;
    f64 temp_f2_3;
    f64 temp_f2_4;
    f64 temp_f2_5;
    s32 *var_r31;
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    s32 temp_cr0_eq_3;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 var_r29_2;
    s32 var_r30;
    s32 var_r30_2;
    s32 var_r3;
    s32 var_r3_2;
    u32 temp_r5;
    void *temp_r25;
    void *temp_r29;
    void *temp_r3;
    void *temp_r3_2;
    void *var_r25_2;
    void *var_r29;
    void *var_r4;

    temp_cr0_eq = arg0 == NULL;
    if (temp_cr0_eq == 0) {
        var_r30 = 0;
        spC = M2C_FIELD(&lbl_801DA8F8, f32 *, 0);
        sp10 = M2C_FIELD(&lbl_801DA8F8, f32 *, 4);
        sp14 = M2C_FIELD(&lbl_801DA8F8, f32 *, 8);
        if (temp_cr0_eq != 0) {

        } else {
            var_r29 = arg0;
loop_19:
            if (var_r29 != NULL) {
                temp_r4 = M2C_FIELD(var_r29, s32 *, 4);
                if (((temp_r4 & 0x70000000) == 0x10000000) && (temp_r4 & 0x80000000) && ((u32) (temp_r4 & 0x0FFFFFFF & ~-((var_r29 == NULL) & 1)) == 1)) {
                    if ((void *) M2C_FIELD(var_r29, void **, 8) == NULL) {
                        __assert(&lbl_80350218, 0x1F2, &lbl_802AA018);
                    }
                    temp_r25 = M2C_FIELD(var_r29, void **, 8);
                    temp_cr0_eq_2 = temp_r25 == NULL;
                    if (temp_cr0_eq_2 == 0) {
                        if (temp_cr0_eq_2 != 0) {
                            __assert(&lbl_80350220, 0x25D, &lbl_80350228);
                        }
                        temp_r4_2 = M2C_FIELD(temp_r25, s32 *, 0x14);
                        var_r3 = 0;
                        if (!(temp_r4_2 & 0x800000) && (temp_r4_2 & 0x40)) {
                            var_r3 = 1;
                        }
                        if (var_r3 != 0) {
                            HSD_JObjSetupMatrixSub(temp_r25);
                        }
                    }
                    temp_r3 = M2C_FIELD(var_r29, void **, 8);
                    var_r30 += 1;
                    spC += M2C_FIELD(temp_r3, f32 *, 0x50);
                    sp10 += M2C_FIELD(temp_r3, f32 *, 0x60);
                    sp14 += M2C_FIELD(temp_r3, f32 *, 0x70);
                }
                var_r29 = M2C_FIELD(var_r29, void **, 0);
                goto loop_19;
            }
            if (var_r30 != 0) {
                temp_f3 = lbl_803520E8 / (f32) var_r30;
                sp24 = temp_f3 * spC;
                sp28 = temp_f3 * sp10;
                sp2C = temp_f3 * sp14;
            }
        }
        if (var_r30 != 0) {
            /* draft: did not compile: arg2(arg1, 0x35, &sp24); */
            /* draft: did not compile: arg2(arg1, 0x38, NULL); */
        }
        /* draft: did not compile: resolveCnsDirUp(arg0, arg1, arg2); */
        if (arg1 == 0U) {
            __assert(&lbl_80350218, 0x276, &lbl_80350230);
        }
        if (arg0 == NULL) {
            var_r4 = NULL;
        } else {
            var_r4 = arg0;
loop_34:
            if (var_r4 == NULL) {
                var_r4 = NULL;
            } else {
                temp_r5 = M2C_FIELD(var_r4, u32 *, 4);
                if (((temp_r5 >> 0x1FU) != 0) && ((u32) ((temp_r5 & 0x70000000) + 0xF0000000) == 0U) && ((u32) (temp_r5 & 0x0FFFFFFF) == 4)) {

                } else {
                    var_r4 = M2C_FIELD(var_r4, void **, 0);
                    goto loop_34;
                }
            }
        }
        if (var_r4 != NULL) {
            temp_r29 = M2C_FIELD(var_r4, void **, 8);
            if (temp_r29 == NULL) {
                __assert(&lbl_80350220, 0x47C, &lbl_80350228);
            }
            temp_cr0_eq_3 = temp_r29 == NULL;
            if (temp_cr0_eq_3 == 0) {
                if (temp_cr0_eq_3 != 0) {
                    __assert(&lbl_80350220, 0x25D, &lbl_80350228);
                }
                temp_r4_3 = M2C_FIELD(temp_r29, s32 *, 0x14);
                var_r3_2 = 0;
                if (!(temp_r4_3 & 0x800000) && (temp_r4_3 & 0x40)) {
                    var_r3_2 = 1;
                }
                if (var_r3_2 != 0) {
                    HSD_JObjSetupMatrixSub(temp_r29);
                }
            }
            /* draft: did not compile: PSMTXCopy(temp_r29 + 0x44, &sp30); */
            var_r29_2 = 0;
            temp_f30 = lbl_803520F8;
            var_r31 = &lbl_802AA024;
            temp_f31 = lbl_803520FC;
            var_r30_2 = 0;
            var_r25 = &sp30;
            do {
                temp_f2 = M2C_FIELD(var_r25, f32 *, 0);
                temp_f1 = M2C_FIELD(var_r25, f32 *, 0x10);
                sp18 = temp_f2;
                sp1C = temp_f1;
                sp20 = M2C_FIELD(var_r25, f32 *, 0x20);
                var_f1 = PSVECMag(&sp18, temp_f1, temp_f2);
                if (var_f1 > temp_f30) {
                    var_f1 = lbl_803520E8 / var_f1;
                }
                /* draft: did not compile: temp_r3_2 = arg1 + var_r30_2; */
                temp_f2_2 = M2C_FIELD(temp_r3_2, f32 *, 0x54);
                temp_f0 = M2C_FIELD(temp_r3_2, f32 *, 0x44);
                temp_f3_2 = M2C_FIELD(temp_r3_2, f32 *, 0x64);
                var_f5 = (temp_f3_2 * temp_f3_2) + ((temp_f2_2 * temp_f2_2) + (temp_f0 * temp_f0));
                if (var_f5 > temp_f31) {
                    temp_f2_3 = __frsqrte(var_f5);
                    temp_f2_4 = lbl_803520E0 * temp_f2_3 * -(((f64) var_f5 * (temp_f2_3 * temp_f2_3)) - lbl_80352100);
                    temp_f2_5 = lbl_803520E0 * temp_f2_4 * -(((f64) var_f5 * (temp_f2_4 * temp_f2_4)) - lbl_80352100);
                    sp8 = (f32) ((f64) var_f5 * (lbl_803520E0 * temp_f2_5 * -(((f64) var_f5 * (temp_f2_5 * temp_f2_5)) - lbl_80352100)));
                    var_f5 = sp8;
                }
                temp_f1_2 = var_f1 * var_f5;
                temp_f3_3 = sp18 * temp_f1_2;
                temp_f2_6 = sp1C * temp_f1_2;
                sp18 = temp_f3_3;
                sp1C = temp_f2_6;
                sp20 *= temp_f1_2;
                arg2(arg1, *var_r31, &sp18, temp_f1_2, temp_f2_6, temp_f3_3);
                var_r29_2 += 1;
                var_r30_2 += 4;
                var_r31 += 4;
                var_r25 += 4;
            } while (var_r29_2 < 3);
            /* draft: did not compile: arg2(arg1, 0x37, NULL); */
        }
        resolveLimits(arg0, arg1, arg2);
        var_r25_2 = arg0;
loop_59:
        if (var_r25_2 != NULL) {
            temp_r4_4 = M2C_FIELD(var_r25_2, s32 *, 4);
            if (!(temp_r4_4 & 0x70000000) && (temp_r4_4 & 0x80000000)) {
                /* draft: did not compile: fn_8010748C(var_r25_2 + 8, temp_r4_4 & 0x0FFFFFFF, arg1, arg2); */
            }
            var_r25_2 = M2C_FIELD(var_r25_2, void **, 0);
            goto loop_59;
        }
    }
}
#pragma pop

void HSD_RObjResolveRefsAll(void *arg0, void *arg1) {
    s32 temp_r3;
    void *temp_r4;
    void *var_r29;
    void *var_r30;

    var_r30 = arg1;
    var_r29 = arg0;
loop_14:
    if ((var_r29 != NULL) && (var_r30 != NULL)) {
        if ((var_r29 != NULL) && (var_r30 != NULL)) {
            temp_r3 = M2C_FIELD(var_r29, s32 *, 4) & 0x70000000;
            switch (temp_r3) {                      /* irregular */
            case 0x10000000:
                HSD_JObjUnrefThis(M2C_FIELD(var_r29, void **, 8));
                M2C_FIELD(var_r29, void **, 8) = HSD_IDGetDataFromTable(0, M2C_FIELD(var_r30, void **, 8), 0);
                if ((void *) M2C_FIELD(var_r29, void **, 8) == NULL) {
                    __assert(&lbl_80350218, 0x330, &lbl_802AA018 + 0x4C);
                }
                temp_r4 = M2C_FIELD(var_r29, void **, 8);
                if (temp_r4 != NULL) {
                    M2C_FIELD(temp_r4, u16 *, 6) = (u16) (M2C_FIELD(temp_r4, u16 *, 6) + 1);
                    if ((u16) M2C_FIELD(temp_r4, u16 *, 6) == 0) {
                        __assert(&lbl_802AA018 + 0x5C, 0x9E, &lbl_802AA018 + 0x68);
                    }
                }
                break;
            case 0x0:
                HSD_RvalueResolveRefsAll(M2C_FIELD(var_r29, s32 *, 0xC), M2C_FIELD(M2C_FIELD(var_r30, void **, 8), s32 *, 4));
                break;
            }
        }
        var_r29 = M2C_FIELD(var_r29, void **, 0);
        var_r30 = M2C_FIELD(var_r30, void **, 0);
        goto loop_14;
    }
}

void *HSD_RObjLoadDesc(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void HSD_RObjRemoveAll(void *arg0) {
    s32 temp_r0;
    void *temp_r30;
    void *var_r29;

    var_r29 = arg0;
loop_10:
    if (var_r29 != NULL) {
        temp_r30 = M2C_FIELD(var_r29, void **, 0);
        if (var_r29 != NULL) {
            temp_r0 = M2C_FIELD(var_r29, s32 *, 4) & 0x70000000;
            switch (temp_r0) {                      /* irregular */
            case 0x10000000:
                HSD_JObjUnrefThis(M2C_FIELD(var_r29, s32 *, 8));
                break;
            case 0x0:
                HSD_RvalueRemoveAll(M2C_FIELD(var_r29, s32 *, 0xC));
                break;
            }
            HSD_AObjRemove(M2C_FIELD(var_r29, s32 *, 0x18));
            /* draft: did not compile: HSD_RObjFree(var_r29); */
        }
        var_r29 = temp_r30;
        goto loop_10;
    }
}

s32 HSD_RObjAlloc(void) {
    s32 temp_r3;

    /* draft: did not compile: temp_r3 = fn_80105930(&lbl_8031EC00); */
    if (temp_r3 == 0) {
        __assert(&lbl_80350218, 0x3C5, &lbl_80350234);
    }
    /* draft: did not compile: memset(temp_r3, 0, 0x1C); */
    return temp_r3;
}

void HSD_RObjFree(s32 arg0) {
    /* draft: did not compile: HSD_ObjFree(&lbl_8031EC00, arg0, &lbl_8031EC00); */
}
