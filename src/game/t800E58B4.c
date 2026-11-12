/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

extern void *gx;
extern void *__cpReg;
extern s32 lbl_80350B94;
M2C_UNK HSD_MObjRemoveAnimByFlags(s32, s32);
M2C_UNK HSD_AObjRemove(s32);
M2C_UNK HSD_PObjRemoveAnimAllByFlags(s32, s32);
M2C_UNK HSD_MObjAddAnim(s32, M2C_UNK *);
M2C_UNK HSD_PObjAddAnimAll(s32, s32);
M2C_UNK HSD_MObjReqAnimByFlags(s32, s32, f32);
M2C_UNK HSD_PObjReqAnimAllByFlags(s32, s32, f32);
M2C_UNK fn_800EB5B0(s32);
M2C_UNK HSD_AObjInterpretAnim(s32, void *, s32);
M2C_UNK fn_800F6168(s32);
M2C_UNK OSReport(M2C_UNK *);
void *HSD_MObjLoadDesc(s32);
s32 HSD_PObjLoadDesc(s32);
M2C_UNK HSD_Panic(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_802A81A8;
extern M2C_UNK lbl_80350060;
extern M2C_UNK lbl_80350068;
void **hsdNew();
u32 hsdSearchClassInfo();
M2C_UNK __assert(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_8035006C;
extern M2C_UNK lbl_802A8160;
extern M2C_UNK *lbl_80350B90;
M2C_UNK HSD_PObjResolveRefsAll(s32, s32);
M2C_UNK HSD_MObjSetCurrent(void **);
M2C_UNK HSD_DObjRemove(s32);
M2C_UNK HSD_PObjRemoveAll(s32);
M2C_UNK hsdInitClassInfo(M2C_UNK *, M2C_UNK *, void *, void *, M2C_UNK, M2C_UNK);
extern M2C_UNK lbl_802AA538;
M2C_UNK HSD_TlutRemove();
u32 HSD_AObjLoadDesc(s32);
M2C_UNK HSD_Free_801095FC(u32);
u32 HSD_Alloc(s32);
M2C_UNK HSD_AObjReqAnim(s32, f32);
M2C_UNK fn_8010019C(M2C_UNK);
void **HSD_TObjAlloc();
extern M2C_UNK lbl_80350078;
extern M2C_UNK lbl_80350080;
s32 HSD_TlutAlloc();
s32 HSD_TObjTevAlloc();
extern void *lbl_80350B9C;

void fn_800E58B4(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_800E5944(s32 arg0, s32 arg1);
void GXSetClipMode(s32 arg0);
void __GXSetMatrixIndex(s32 arg0);
void fn_800E5A30();
void fn_800E6278(void);
s32 fn_800E6288(void *arg0, s32 arg1);
void HSD_DObjSetCurrent(s32 arg0);
void HSD_DObjRemoveAnimAllByFlags(void *arg0, s32 arg1);
void HSD_DObjAddAnimAll(void *arg0, M2C_UNK *arg1, void *arg2);
void HSD_DObjReqAnimAllByFlags(void *arg0, s32 arg1, f32 farg0);
void HSD_DObjAnimAll(void *arg0);
s32 DObjLoad(void *arg0, void *arg1);
void **HSD_DObjLoadDesc(u32 *arg0);
void HSD_DObjRemoveAll(void *arg0);
s32 HSD_CObjAlloc(void);
void HSD_DObjResolveRefsAll(void *arg0, void *arg1);
void HSD_DObjDisp(void *arg0, s32 arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0);
void DObjRelease(void *arg0);
void DObjAmnesia(u32 arg0);
void CObjInfoInit(void);
void HSD_TObjRemoveAnimAll(void *arg0);
void HSD_TObjAddAnimAll(void *arg0, void *arg1, M2C_UNK arg_sp0);
void HSD_TObjReqAnimAllByFlags(void *arg0, s32 arg1, f32 farg0);
void fn_800E6BC4();
void HSD_DObjAnimAll_800E7190(void *arg0);
s32 TObjLoad(void *arg0, void *arg1);
void **HSD_TObjLoadDesc(u32 *arg0);
s32 HSD_TlutLoadDesc(s32 arg0);
s32 HSD_TObjTevLoadDesc(s32 arg0);
void *_HSD_TObjGetCurrentByType(void *arg0, u32 arg1);
void HSD_TexMapID2PTTexMtx();

void fn_800E58B4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r9;
    s32 temp_r10;

    temp_r9 = arg0 + 0x156;
    temp_r10 = arg1 + 0x156;
    M2C_FIELD(gx, s32 *, 0xF8) = (s32) ((temp_r9 << 0xC) | (M2C_FIELD(gx, s32 *, 0xF8) & 0xFF800FFF));
    M2C_FIELD(gx, s32 *, 0xFC) = (s32) ((M2C_FIELD(gx, s32 *, 0xFC) & 0xFFFFF800) | (temp_r10 + (arg3 - 1)));
    M2C_FIELD(gx, s32 *, 0xFC) = (s32) ((M2C_FIELD(gx, s32 *, 0xFC) & 0xFF800FFF) | ((temp_r9 + (arg2 - 1)) << 0xC));
    *(s8 *)0xCC008000 = 0x61;
    M2C_FIELD(gx, s32 *, 0xF8) = (s32) ((M2C_FIELD(gx, s32 *, 0xF8) & 0xFFFFF800) | temp_r10);
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = (s32) M2C_FIELD(gx, s32 *, 0xF8);
    *(s8 *)0xCC008000 = (s32) M2C_FIELD(gx, s32 *, 0xFC);
    M2C_FIELD(gx, s16 *, 2) = 0;
}

void fn_800E5944(s32 arg0, s32 arg1) {
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = (s32) ((((((u32) (arg0 + 0x156) >> 1U) & 0xFFF003FF) | (((arg1 + 0x156) << 9) & 0xFFFFFC00)) & 0xFFFFFF) | 0x59000000);
    M2C_FIELD(gx, s16 *, 2) = 0;
}

void GXSetClipMode(s32 arg0) {
    *(s8 *)0xCC008000 = 0x10;
    *(s8 *)0xCC008000 = 0x1005;
    M2C_FIELD(gx, s16 *, 2) = 1;
    *(s8 *)0xCC008000 = arg0;
}

void __GXSetMatrixIndex(s32 arg0) {
    s32 temp_r4_2;

    if (arg0 < 5) {
        *(s8 *)0xCC008000 = 8;
        *(s8 *)0xCC008000 = 0x30;
        *(s8 *)0xCC008000 = 0x10;
        *(s8 *)0xCC008000 = (M2C_FIELD(gx, s32 *, 0x80));
        *(s8 *)0xCC008000 = 0x1018;
        *(s8 *)0xCC008000 = (M2C_FIELD(gx, s32 *, 0x80));
    } else {
        /* draft: did not compile: *(void *)0xCC008000 = 8; */
        /* draft: did not compile: *(void *)0xCC008000 = 0x40; */
        temp_r4_2 = M2C_FIELD(gx, s32 *, 0x84);
        /* draft: did not compile: *(void *)0xCC008000 = temp_r4_2; */
        /* draft: did not compile: *(void *)0xCC008000 = 0x10; */
        /* draft: did not compile: *(void *)0xCC008000 = 0x1019; */
        /* draft: did not compile: *(void *)0xCC008000 = temp_r4_2; */
    }
    M2C_FIELD(gx, s16 *, 2) = 1;
}

void fn_800E5A30() { } /* draft: stub */

void fn_800E6278(void) {
    M2C_FIELD(__cpReg, s16 *, 4) = 4;
}

s32 fn_800E6288(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 8) + (arg1 * 8);
}

void HSD_DObjSetCurrent(s32 arg0) {
    lbl_80350B94 = arg0;
}

void HSD_DObjRemoveAnimAllByFlags(void *arg0, s32 arg1) {
    void *var_r29;

    if (arg0 != NULL) {
        var_r29 = arg0;
loop_7:
        if (var_r29 != NULL) {
            if (var_r29 != NULL) {
                if ((u32) (arg1 & 2) != 0) {
                    HSD_AObjRemove(M2C_FIELD(var_r29, s32 *, 0x10));
                    M2C_FIELD(var_r29, s32 *, 0x10) = 0;
                }
                HSD_PObjRemoveAnimAllByFlags(M2C_FIELD(var_r29, s32 *, 0xC), arg1);
                HSD_MObjRemoveAnimByFlags(M2C_FIELD(var_r29, s32 *, 8), arg1);
            }
            var_r29 = M2C_FIELD(var_r29, void **, 4);
            goto loop_7;
        }
    }
}

void HSD_DObjAddAnimAll(void *arg0, M2C_UNK *arg1, void *arg2) {
    M2C_UNK *var_r30;
    s32 var_r4;
    void *var_r29;
    void *var_r31;

    if (arg0 != NULL) {
        var_r31 = arg0;
        var_r30 = arg1;
        var_r29 = arg2;
loop_13:
        if (var_r31 != NULL) {
            if (var_r31 != NULL) {
                if (var_r29 != NULL) {
                    var_r4 = M2C_FIELD(var_r29, s32 *, 4);
                } else {
                    var_r4 = 0;
                }
                HSD_PObjAddAnimAll(M2C_FIELD(var_r31, s32 *, 0xC), var_r4);
                HSD_MObjAddAnim(M2C_FIELD(var_r31, s32 *, 8), var_r30);
            }
            var_r31 = M2C_FIELD(var_r31, void **, 4);
            if (var_r30 != NULL) {
                /* draft: did not compile: var_r30 = *var_r30; */
            } else {
                var_r30 = NULL;
            }
            if (var_r29 != NULL) {
                var_r29 = M2C_FIELD(var_r29, void **, 0);
            } else {
                var_r29 = NULL;
            }
            goto loop_13;
        }
    }
}

void HSD_DObjReqAnimAllByFlags(void *arg0, s32 arg1, f32 farg0) {
    void *var_r31;

    if (arg0 != NULL) {
        var_r31 = arg0;
loop_5:
        if (var_r31 != NULL) {
            if (var_r31 != NULL) {
                HSD_PObjReqAnimAllByFlags(M2C_FIELD(var_r31, s32 *, 0xC), arg1, farg0);
                HSD_MObjReqAnimByFlags(M2C_FIELD(var_r31, s32 *, 8), arg1, farg0);
            }
            var_r31 = M2C_FIELD(var_r31, void **, 4);
            goto loop_5;
        }
    }
}

void HSD_DObjAnimAll(void *arg0) {
    void *var_r31;

    if (arg0 != NULL) {
        var_r31 = arg0;
loop_5:
        if (var_r31 != NULL) {
            if (var_r31 != NULL) {
                HSD_AObjInterpretAnim(M2C_FIELD(var_r31, s32 *, 0x10), var_r31, M2C_FIELD(M2C_FIELD(var_r31, void **, 0), s32 *, 0x44));
                fn_800F6168(M2C_FIELD(var_r31, s32 *, 0xC));
                fn_800EB5B0(M2C_FIELD(var_r31, s32 *, 8));
            }
            var_r31 = M2C_FIELD(var_r31, void **, 4);
            goto loop_5;
        }
    }
}

s32 DObjLoad(void *arg0, void *arg1) {
    s32 temp_r3_2;
    void *temp_r3;

    /* draft: did not compile: M2C_FIELD(arg0, s32 *, 4) = HSD_DObjLoadDesc(M2C_FIELD(arg1, s32 *, 4)); */
    M2C_FIELD(arg0, s32 *, 0xC) = HSD_PObjLoadDesc(M2C_FIELD(arg1, s32 *, 0xC));
    M2C_FIELD(arg0, void **, 8) = HSD_MObjLoadDesc(M2C_FIELD(arg1, s32 *, 8));
    temp_r3 = M2C_FIELD(arg0, void **, 8);
    if (temp_r3 != NULL) {
        temp_r3_2 = M2C_FIELD(temp_r3, s32 *, 4) & 0x60000000;
        switch (temp_r3_2) {                        /* irregular */
        case 0x0:
            if (arg0 != NULL) {
                M2C_FIELD(arg0, s32 *, 0x14) = (s32) ((M2C_FIELD(arg0, s32 *, 0x14) & 0xFFFFFFF1) | 2);
            }
            break;
        case 0x40000000:
            if (arg0 != NULL) {
                M2C_FIELD(arg0, s32 *, 0x14) = (s32) ((M2C_FIELD(arg0, s32 *, 0x14) & 0xFFFFFFF1) | 8);
            }
            break;
        case 0x60000000:
            if (arg0 != NULL) {
                M2C_FIELD(arg0, s32 *, 0x14) = (s32) ((M2C_FIELD(arg0, s32 *, 0x14) & 0xFFFFFFF1) | 4);
            }
            break;
        default:
            OSReport(&lbl_802A81A8);
            HSD_Panic(&lbl_80350060, 0x13F, &lbl_80350068);
            break;
        }
    }
    return 0;
}

void **HSD_DObjLoadDesc(u32 *arg0) {
    void **var_r31;
    void *temp_r5;

    if (arg0 == NULL) {
        return NULL;
    }
    if (((u32) *arg0 == 0U) || (hsdSearchClassInfo() == 0U)) {
        /* draft: did not compile: var_r31 = HSD_CObjAlloc(); */
    } else {
        var_r31 = hsdNew();
        if (var_r31 == NULL) {
            __assert(&lbl_80350060, 0x181, &lbl_8035006C);
        }
    }
    temp_r5 = *var_r31;
    M2C_FIELD(temp_r5, M2C_UNK (**)(void **, u32 *, void *), 0x40)(var_r31, arg0, temp_r5);
    return var_r31;
}

void HSD_DObjRemoveAll(void *arg0) {
    void *temp_r31;
    void *temp_r4;
    void *temp_r4_2;
    void *var_r30;

    var_r30 = arg0;
loop_4:
    if (var_r30 != NULL) {
        temp_r31 = M2C_FIELD(var_r30, void **, 4);
        if (var_r30 != NULL) {
            temp_r4 = M2C_FIELD(var_r30, void **, 0);
            M2C_FIELD(temp_r4, M2C_UNK (**)(void *, void *), 0x30)(var_r30, temp_r4);
            temp_r4_2 = M2C_FIELD(var_r30, void **, 0);
            M2C_FIELD(temp_r4_2, M2C_UNK (**)(void *, void *), 0x34)(var_r30, temp_r4_2);
        }
        var_r30 = temp_r31;
        goto loop_4;
    }
}

s32 HSD_CObjAlloc(void) {
    M2C_UNK *var_r3;
    s32 temp_r3;

    var_r3 = lbl_80350B90;
    if (var_r3 != NULL) {

    } else {
        var_r3 = &lbl_802A8160;
    }
    /* draft: did not compile: temp_r3 = hsdNew(var_r3); */
    switch (temp_r3) {
    case 0:
            __assert(&lbl_80350060, 0x214, &lbl_8035006C);
        break;
    }
    return temp_r3;
}

void HSD_DObjResolveRefsAll(void *arg0, void *arg1) {
    void *var_r30;
    void *var_r31;

    var_r31 = arg1;
    var_r30 = arg0;
loop_5:
    if ((var_r30 != NULL) && (var_r31 != NULL)) {
        if ((var_r30 != NULL) && (var_r31 != NULL)) {
            HSD_PObjResolveRefsAll(M2C_FIELD(var_r30, s32 *, 0xC), M2C_FIELD(var_r31, s32 *, 0xC));
        }
        var_r30 = M2C_FIELD(var_r30, void **, 4);
        var_r31 = M2C_FIELD(var_r31, void **, 4);
        goto loop_5;
    }
}

void HSD_DObjDisp(void *arg0, s32 arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0) {
    u32 temp_r31;
    void **temp_r3;
    void **temp_r3_2;
    void *temp_r5;
    void *temp_r5_2;
    void *var_r30;

    HSD_MObjSetCurrent(M2C_FIELD(arg0, void ***, 8));
    temp_r31 = arg3 & 0x04000000;
    if (temp_r31 == 0) {
        temp_r3 = M2C_FIELD(arg0, void ***, 8);
        temp_r5 = *temp_r3;
        M2C_FIELD(temp_r5, M2C_UNK (**)(void **, s32, void *), 0x3C)(temp_r3, arg3, temp_r5);
    }
    var_r30 = M2C_FIELD(arg0, void **, 0xC);
loop_4:
    if (var_r30 != NULL) {
        M2C_FIELD(M2C_FIELD(var_r30, void **, 0), M2C_UNK (**)(void *, s32, s32, s32), 0x3C)(var_r30, arg1, arg2, arg3);
        var_r30 = M2C_FIELD(var_r30, void **, 4);
        goto loop_4;
    }
    if (temp_r31 == 0) {
        temp_r3_2 = M2C_FIELD(arg0, void ***, 8);
        temp_r5_2 = *temp_r3_2;
        M2C_FIELD(temp_r5_2, M2C_UNK (**)(void **, s32, void *), 0x50)(temp_r3_2, arg3, temp_r5_2);
    }
    HSD_MObjSetCurrent(NULL);
}

void DObjRelease(void *arg0) {
    HSD_DObjRemove(M2C_FIELD(arg0, s32 *, 8));
    HSD_PObjRemoveAll(M2C_FIELD(arg0, s32 *, 0xC));
    HSD_AObjRemove(M2C_FIELD(arg0, s32 *, 0x10));
    M2C_FIELD(M2C_FIELD(&lbl_802A8160, void **, 0x14), M2C_UNK (**)(void *, void *), 0x30)(arg0, M2C_FIELD(&lbl_802A8160, void **, 0x14));
}

void DObjAmnesia(u32 arg0) {
    if (arg0 == (u32) lbl_80350B90) {
        lbl_80350B90 = 0U;
    }
    M2C_FIELD(M2C_FIELD(&lbl_802A8160, void **, 0x14), M2C_UNK (**)(void *), 0x38)(M2C_FIELD(&lbl_802A8160, void **, 0x14));
}

#pragma push
#pragma peephole off
void CObjInfoInit(void) {
    hsdInitClassInfo(&lbl_802A8160, &lbl_802AA538, &lbl_802A8160 + 0xFC, &lbl_802A8160 + 0x114, 0x48, 0x18);
    /* draft: did not compile: M2C_FIELD(&lbl_802A8160, M2C_UNK (**)(), 0x30) = DObjRelease; */
    /* draft: did not compile: M2C_FIELD(&lbl_802A8160, M2C_UNK (**)(), 0x38) = DObjAmnesia; */
    /* draft: did not compile: M2C_FIELD(&lbl_802A8160, M2C_UNK (**)(), 0x3C) = HSD_DObjDisp; */
    M2C_FIELD(&lbl_802A8160, M2C_UNK (**)(), 0x40) = DObjLoad;
}
#pragma pop

void HSD_TObjRemoveAnimAll(void *arg0) {
    void *var_r30;

    if (arg0 != NULL) {
        var_r30 = arg0;
loop_5:
        if (var_r30 != NULL) {
            if (var_r30 != NULL) {
                HSD_AObjRemove(M2C_FIELD(var_r30, s32 *, 0x64));
                M2C_FIELD(var_r30, s32 *, 0x64) = 0;
            }
            var_r30 = M2C_FIELD(var_r30, void **, 8);
            goto loop_5;
        }
    }
}

void HSD_TObjAddAnimAll(void *arg0, void *arg1, M2C_UNK arg_sp0) { } /* draft: stub */

void HSD_TObjReqAnimAllByFlags(void *arg0, s32 arg1, f32 farg0) {
    void *var_r30;

    if (arg0 != NULL) {
        var_r30 = arg0;
loop_6:
        if (var_r30 != NULL) {
            if ((var_r30 != NULL) && ((u32) (arg1 & 0x10) != 0)) {
                HSD_AObjReqAnim(M2C_FIELD(var_r30, s32 *, 0x64), farg0);
            }
            var_r30 = M2C_FIELD(var_r30, void **, 8);
            goto loop_6;
        }
    }
}

void fn_800E6BC4() { } /* draft: stub */

void HSD_DObjAnimAll_800E7190(void *arg0) {
    void *var_r31;

    if (arg0 != NULL) {
        var_r31 = arg0;
loop_5:
        if (var_r31 != NULL) {
            if (var_r31 != NULL) {
                HSD_AObjInterpretAnim(M2C_FIELD(var_r31, s32 *, 0x64), var_r31, M2C_FIELD(M2C_FIELD(var_r31, void **, 0), s32 *, 0x48));
            }
            var_r31 = M2C_FIELD(var_r31, void **, 8);
            goto loop_5;
        }
    }
}

s32 TObjLoad(void *arg0, void *arg1) { return 0; } /* draft: stub */

void **HSD_TObjLoadDesc(u32 *arg0) {
    void **var_r31;
    void *temp_r5;

    if (arg0 != NULL) {
        if (((u32) *arg0 == 0U) || (hsdSearchClassInfo() == 0U)) {
            var_r31 = HSD_TObjAlloc();
        } else {
            var_r31 = hsdNew();
            if (var_r31 == NULL) {
                __assert(&lbl_80350078, 0x1ED, &lbl_80350080);
            }
        }
        temp_r5 = *var_r31;
        M2C_FIELD(temp_r5, M2C_UNK (**)(void **, u32 *, void *), 0x40)(var_r31, arg0, temp_r5);
        return var_r31;
    }
    return NULL;
}

#pragma push
#pragma peephole off
s32 HSD_TlutLoadDesc(s32 arg0) {
    u8 temp_r31;

    if (arg0 != 0) {
        temp_r31 = HSD_TlutAlloc();
        /* draft: did not compile: memcpy(arg0, 0x10); */
        return temp_r31;
    }
    return 0;
}
#pragma pop

s32 HSD_TObjTevLoadDesc(s32 arg0) {
    u8 temp_r31;

    if (arg0 != 0) {
        temp_r31 = HSD_TObjTevAlloc();
        /* draft: did not compile: memcpy(arg0, 0x20); */
        return temp_r31;
    }
    return 0;
}

void *_HSD_TObjGetCurrentByType(void *arg0, u32 arg1) {
    void *var_r3;

    if (arg0 == NULL) {
        var_r3 = lbl_80350B9C;
    } else {
        var_r3 = M2C_FIELD(arg0, void **, 8);
    }
loop_5:
    if (var_r3 == NULL) {
        return NULL;
    }
    if ((u32) (M2C_FIELD(var_r3, s32 *, 0x4C) & 0xF) != arg1) {
        var_r3 = M2C_FIELD(var_r3, void **, 8);
        goto loop_5;
    }
    return var_r3;
}

void HSD_TexMapID2PTTexMtx() { } /* draft: stub */
