/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK OSReport(M2C_UNK *);
M2C_UNK HSD_JObjSetupMatrixSub(void *);
M2C_UNK fn_80104500();
M2C_UNK fn_8010483C();
s32 HSD_GetNbBits(s32);
f32 *HSD_Alloc(s32);
M2C_UNK __assert(M2C_UNK *, M2C_UNK, M2C_UNK *);
M2C_UNK HSD_Panic(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_802AA0DC;
extern M2C_UNK lbl_80350218;
extern M2C_UNK lbl_80350220;
extern M2C_UNK lbl_80350228;
extern M2C_UNK lbl_80350238;
extern f32 *lbl_80350CE8;
extern u32 lbl_80350CEC;
extern f32 lbl_80352110;
extern f32 lbl_80352114;
extern f32 lbl_803520FC;
M2C_UNK HSD_JObjUnrefThis();
M2C_UNK HSD_ObjFree(M2C_UNK *, void *);
extern M2C_UNK lbl_8031EC2C;
M2C_UNK *fn_80105930(M2C_UNK *);
extern M2C_UNK lbl_8035023C;
extern M2C_UNK lbl_802AA018;
M2C_UNK HSD_ObjAllocInit(M2C_UNK *, M2C_UNK, M2C_UNK);
extern M2C_UNK lbl_8031EC58;
extern M2C_UNK lbl_8031EC84;
extern M2C_UNK lbl_80350248;
extern M2C_UNK lbl_80350250;
M2C_UNK HSD_AObjRemove(s32);
M2C_UNK HSD_RObjRemoveAnimAll(s32);
M2C_UNK HSD_AObjReqAnim(s32);
M2C_UNK HSD_RObjReqAnimAll(s32, f32);
u32 HSD_AObjLoadDesc(s32);
M2C_UNK HSD_RObjAddAnimAll(s32, s32);
M2C_UNK splArcLengthPoint(M2C_UNK *, u32, f32);
extern M2C_UNK lbl_802AA1C4;
extern M2C_UNK lbl_802AA1D0;
extern M2C_UNK lbl_80350258;
extern M2C_UNK lbl_80350260;
extern f64 lbl_80352118;
extern f32 lbl_80352120;
extern f64 lbl_80352128;
extern f32 lbl_80352130;
M2C_UNK HSD_AObjInterpretAnim(s32, void *, s32);
M2C_UNK HSD_RObjAnimAll(s32);
M2C_UNK HSD_RObjResolveRefsAll(u32, s32);
u32 HSD_RObjLoadDesc(s32);
M2C_UNK HSD_RObjRemoveAll();
void **hsdNew();
u32 hsdSearchClassInfo();
extern M2C_UNK lbl_80350264;
M2C_UNK PSMTXMultVec();
extern M2C_UNK lbl_8035026C;
extern M2C_UNK lbl_80350274;
extern M2C_UNK lbl_802AA180;
extern M2C_UNK *lbl_80350CF0;
M2C_UNK hsdInitClassInfo(M2C_UNK *, M2C_UNK *, void *, void *, M2C_UNK, M2C_UNK);
extern M2C_UNK lbl_802AA3D0;
M2C_UNK fn_800E4B80(s32, s32 *, f32, f32, f32, f32);
M2C_UNK fn_800E4D9C(M2C_UNK *, u16, f32 *);
M2C_UNK fn_800E4F64(M2C_UNK, u16, M2C_UNK *);
M2C_UNK fn_800E5568(f32 *);
M2C_UNK GXGetViewportv();
f32 fn_800F39E8(s32);
f32 fn_800F3A10(s32);
s32 HSD_CObjGetCurrent();
s32 fn_80108D98(void *);
extern M2C_UNK lbl_802AA2A4;
extern M2C_UNK lbl_80350280;
extern f32 lbl_80352138;
extern f32 lbl_8035213C;
extern f32 lbl_80352140;
extern f32 lbl_80352144;
extern f32 lbl_80352148;
extern s32 lbl_80352A80;
extern M2C_UNK lbl_802AA228;
extern M2C_UNK lbl_80350288;
s32 HSD_FogAdjLoadDesc();

void fn_8010748C(void *arg0, u32 arg1, s32 arg2, M2C_UNK (*arg3)(s32, u32, f32 *), M2C_UNK arg_sp0);
f32 fn_80107928(void);
void HSD_RvalueRemoveAll(void *arg0);
void expLoadDesc(void *arg0, void *arg1, M2C_UNK arg_sp0);
void bcexpLoadDesc(void *arg0, void *arg1, M2C_UNK arg_sp0);
void HSD_RvalueResolveRefsAll(void *arg0, void *arg1);
void HSD_IDInitAllocData(void);
void fn_80107CA4(void);
void HSD_IDInsertToTable(M2C_UNK *arg0, u32 arg1, s32 arg2, M2C_UNK arg_sp0);
void HSD_IDRemoveByIDFromTable(M2C_UNK *arg0, u32 arg1);
s32 HSD_IDGetDataFromTable(M2C_UNK *arg0, u32 arg1, s32 *arg2);
void HSD_WObjRemoveAnim(void *arg0);
void HSD_WObjReqAnim(void *arg0, f32 farg0);
void HSD_WObjAddAnim(void *arg0, void *arg1);
void WObjUpdateFunc(void *arg0, s32 arg1, f32 *arg2);
void HSD_WObjInterpretAnim(void *arg0);
s32 WObjLoad(void *arg0, void *arg1);
void HSD_WObjInit(void *arg0, void *arg1);
void **HSD_WObjLoadDesc(u32 *arg0);
void HSD_WObjSetPosition(void *arg0, void *arg1);
void HSD_WObjSetPositionX(void *arg0, f32 farg0);
void HSD_WObjSetPositionY(void *arg0, f32 farg0);
void HSD_WObjSetPositionZ(void *arg0, f32 farg0);
void HSD_WObjGetPosition(void *arg0, void *arg1);
s32 HSD_WObjAlloc(void);
void WObjRelease(void *arg0);
void fn_80108748(u32 arg0);
void fn_80108790(void);
void fn_80108810(void *arg0);
s32 fn_80108ACC(void);
void *HSD_FogLoadDesc(void *arg0);
void HSD_FogInit(void *arg0, void *arg1);

void fn_8010748C(void *arg0, u32 arg1, s32 arg2, M2C_UNK (*arg3)(s32, u32, f32 *), M2C_UNK arg_sp0) {
    s32 sp2C;
    s32 sp28;
    s32 sp1C;
    s32 sp18;
    f32 sp24;
    f32 sp14;
    f32 sp8;
    f32 *var_r30;
    f32 var_f1;
    s32 temp_cr0_eq;
    s32 temp_r3;
    s32 temp_r4;
    s32 var_r29_2;
    s32 var_r3;
    u32 temp_r0;
    u32 var_r28;
    void *temp_r28;
    void *temp_r29;
    void *var_r29;
    void *var_r31;

    if ((u32) (M2C_FIELD(arg0, u32 *, 8) + 0x10000) == -1U) {
        var_r29 = M2C_FIELD(arg0, void **, 4);
        var_r28 = 0U;
loop_3:
        if (var_r29 != NULL) {
            var_r28 += HSD_GetNbBits(M2C_FIELD(var_r29, s32 *, 4));
            var_r29 = M2C_FIELD(var_r29, void **, 0);
            goto loop_3;
        }
        M2C_FIELD(arg0, u32 *, 8) = var_r28;
    }
    if ((f32 *) lbl_80350CE8 == NULL) {
        if ((u32) lbl_80350CEC == 0) {
            lbl_80350CEC = 0x64;
        }
        lbl_80350CE8 = HSD_Alloc(lbl_80350CEC * 4);
    }
    if ((u32) lbl_80350CEC < (u32) M2C_FIELD(arg0, u32 *, 8)) {
        OSReport(&lbl_802AA0DC);
        HSD_Panic(&lbl_80350218, 0x41B, &lbl_80350238);
    }
    var_r30 = lbl_80350CE8;
    var_r31 = M2C_FIELD(arg0, void **, 4);
loop_87:
    if (var_r31 != NULL) {
        temp_r28 = M2C_FIELD(var_r31, void **, 8);
        if (temp_r28 == NULL) {
            __assert(&lbl_80350218, 0x424, &lbl_80350228);
        }
        temp_r29 = M2C_FIELD(var_r31, void **, 8);
        temp_cr0_eq = temp_r29 == NULL;
        if (temp_cr0_eq == 0) {
            if (temp_cr0_eq != 0) {
                __assert(&lbl_80350220, 0x25D, &lbl_80350228);
            }
            temp_r4 = M2C_FIELD(temp_r29, s32 *, 0x14);
            var_r3 = 0;
            if (!(temp_r4 & 0x800000) && (temp_r4 & 0x40)) {
                var_r3 = 1;
            }
            if (var_r3 != 0) {
                HSD_JObjSetupMatrixSub(temp_r29);
            }
        }
        var_r29_2 = 1;
loop_84:
        if (var_r29_2 != 0) {
            temp_r0 = M2C_FIELD(var_r31, u32 *, 4);
            if ((u32) var_r29_2 <= temp_r0) {
                temp_r3 = temp_r0 & var_r29_2;
                switch (temp_r3) {                  /* irregular */
                case 0x1:
                    *var_r30 = lbl_80352114 * M2C_FIELD(temp_r28, f32 *, 0x1C);
                    var_r30 += 4;
                    break;
                case 0x2:
                    *var_r30 = lbl_80352114 * M2C_FIELD(temp_r28, f32 *, 0x20);
                    var_r30 += 4;
                    break;
                case 0x4:
                    *var_r30 = lbl_80352114 * M2C_FIELD(temp_r28, f32 *, 0x24);
                    var_r30 += 4;
                    break;
                case 0x10:
                    *var_r30 = M2C_FIELD(temp_r28, f32 *, 0x38);
                    var_r30 += 4;
                    break;
                case 0x20:
                    *var_r30 = M2C_FIELD(temp_r28, f32 *, 0x3C);
                    var_r30 += 4;
                    break;
                case 0x40:
                    *var_r30 = M2C_FIELD(temp_r28, f32 *, 0x40);
                    var_r30 += 4;
                    break;
                case 0x80:
                    *var_r30 = M2C_FIELD(temp_r28, f32 *, 0x2C);
                    var_r30 += 4;
                    break;
                case 0x100:
                    *var_r30 = M2C_FIELD(temp_r28, f32 *, 0x30);
                    var_r30 += 4;
                    break;
                case 0x200:
                    *var_r30 = M2C_FIELD(temp_r28, f32 *, 0x34);
                    var_r30 += 4;
                    break;
                case 0x10000:
                    /* draft: did not compile: fn_80104500(temp_r28 + 0x44, &sp14); */
                    *var_r30 = lbl_80352114 * sp14;
                    var_r30 += 4;
                    break;
                case 0x20000:
                    /* draft: did not compile: fn_80104500(temp_r28 + 0x44, &sp14); */
                    *var_r30 = lbl_80352114 * sp18;
                    var_r30 += 4;
                    break;
                case 0x40000:
                    /* draft: did not compile: fn_80104500(temp_r28 + 0x44, &sp14); */
                    *var_r30 = lbl_80352114 * sp1C;
                    var_r30 += 4;
                    break;
                case 0x100000:
                    *var_r30 = M2C_FIELD(temp_r28, f32 *, 0x50);
                    var_r30 += 4;
                    break;
                case 0x200000:
                    *var_r30 = M2C_FIELD(temp_r28, f32 *, 0x60);
                    var_r30 += 4;
                    break;
                case 0x400000:
                    *var_r30 = M2C_FIELD(temp_r28, f32 *, 0x70);
                    var_r30 += 4;
                    break;
                case 0x800000:
                    /* draft: did not compile: fn_8010483C(temp_r28 + 0x44, &sp24); */
                    *var_r30 = sp24;
                    var_r30 += 4;
                    break;
                case 0x1000000:
                    /* draft: did not compile: fn_8010483C(temp_r28 + 0x44, &sp24); */
                    *var_r30 = sp28;
                    var_r30 += 4;
                    break;
                case 0x2000000:
                    /* draft: did not compile: fn_8010483C(temp_r28 + 0x44, &sp24); */
                    *var_r30 = sp2C;
                    var_r30 += 4;
                    break;
                }
                var_r29_2 *= 2;
                goto loop_84;
            }
        }
        var_r31 = M2C_FIELD(var_r31, void **, 0);
        goto loop_87;
    }
    if ((u8) M2C_FIELD(arg0, u8 *, 0xC) != 0) {
        var_f1 = HSD_ByteCodeEval(M2C_FIELD(arg0, f32 (**)(f32 *), 0), lbl_80350CE8, M2C_FIELD(arg0, u32 *, 8));
    } else {
        var_f1 = M2C_FIELD(arg0, f32 (**)(f32 *), 0)(lbl_80350CE8);
    }
    sp8 = var_f1;
    if (((u32) (arg1 - 1) <= 1U) || (arg1 == 3U)) {
        sp8 *= lbl_80352110;
    }
    arg3(arg2, arg1, &sp8);
}

f32 fn_80107928(void) {
    return lbl_803520FC;
}

void HSD_RvalueRemoveAll(void *arg0) {
    void *temp_r30;
    void *var_r29;

    var_r29 = arg0;
loop_4:
    if (var_r29 != NULL) {
        temp_r30 = M2C_FIELD(var_r29, void **, 0);
        if (var_r29 != NULL) {
            HSD_JObjUnrefThis(M2C_FIELD(var_r29, s32 *, 8));
            HSD_ObjFree(&lbl_8031EC2C, var_r29);
        }
        var_r29 = temp_r30;
        goto loop_4;
    }
}

void expLoadDesc(void *arg0, void *arg1, M2C_UNK arg_sp0) {
    M2C_UNK *sp8;
    M2C_UNK (*temp_r0)();
    M2C_UNK *temp_r3;
    M2C_UNK *var_r0;
    M2C_UNK *var_r30;
    s32 temp_r0_2;
    void *var_r29;

    memset((void *)(NULL), (int)(0x10), (unsigned long)(0));
    if (arg1 != NULL) {
        temp_r0 = M2C_FIELD(arg1, M2C_UNK (**)(), 0);
        if (temp_r0 != NULL) {
            M2C_FIELD(arg0, M2C_UNK (**)(), 0) = temp_r0;
        } else {
            /* draft: did not compile: M2C_FIELD(arg0, M2C_UNK (**)(), 0) = fn_80107928; */
        }
        var_r29 = M2C_FIELD(arg1, void **, 4);
        var_r0 = NULL;
        /* draft: did not compile: var_r30 = &sp8; */
        sp8 = NULL;
        if (var_r29 == NULL) {

        } else {
loop_10:
            if ((u32) M2C_FIELD(var_r29, u32 *, 4) != 0U) {
                temp_r3 = fn_80105930(&lbl_8031EC2C);
                if (temp_r3 == NULL) {
                    __assert(&lbl_80350218, 0x485, &lbl_8035023C);
                }
                memset(temp_r3, 0, 0xC);
                /* draft: did not compile: *var_r30 = temp_r3; */
                temp_r0_2 = M2C_FIELD(var_r29, s32 *, 0);
                /* draft: did not compile: var_r29 += 8; */
                M2C_FIELD(*var_r30, s32 *, 4) = temp_r0_2;
                /* draft: did not compile: var_r30 = *var_r30; */
                goto loop_10;
            }
            var_r0 = sp8;
        }
        M2C_FIELD(arg0, M2C_UNK **, 4) = var_r0;
        M2C_FIELD(arg0, s32 *, 8) = -1;
    }
}

void bcexpLoadDesc(void *arg0, void *arg1, M2C_UNK arg_sp0) {
    M2C_UNK *sp8;
    M2C_UNK *temp_r3;
    M2C_UNK *var_r0;
    M2C_UNK *var_r30;
    s32 temp_r0_2;
    u32 temp_r0;
    void *var_r29;

    memset((void *)(NULL), (int)(0x10), (unsigned long)(0));
    if (arg1 != NULL) {
        temp_r0 = M2C_FIELD(arg1, u32 *, 0);
        if (temp_r0 != 0U) {
            M2C_FIELD(arg0, u32 *, 0) = temp_r0;
        } else {
            M2C_FIELD(arg0, u32 *, 0) = 0U;
        }
        var_r29 = M2C_FIELD(arg1, void **, 4);
        var_r0 = NULL;
        /* draft: did not compile: var_r30 = &sp8; */
        sp8 = NULL;
        if (var_r29 == NULL) {

        } else {
loop_10:
            if ((u32) M2C_FIELD(var_r29, u32 *, 4) != 0U) {
                temp_r3 = fn_80105930(&lbl_8031EC2C);
                if (temp_r3 == NULL) {
                    __assert(&lbl_80350218, 0x485, &lbl_8035023C);
                }
                memset(temp_r3, 0, 0xC);
                /* draft: did not compile: *var_r30 = temp_r3; */
                temp_r0_2 = M2C_FIELD(var_r29, s32 *, 0);
                /* draft: did not compile: var_r29 += 8; */
                M2C_FIELD(*var_r30, s32 *, 4) = temp_r0_2;
                /* draft: did not compile: var_r30 = *var_r30; */
                goto loop_10;
            }
            var_r0 = sp8;
        }
        M2C_FIELD(arg0, M2C_UNK **, 4) = var_r0;
        M2C_FIELD(arg0, s32 *, 8) = -1;
        M2C_FIELD(arg0, s8 *, 0xC) = 1;
    }
}

void HSD_RvalueResolveRefsAll(void *arg0, void *arg1) { } /* draft: stub */

void HSD_IDInitAllocData(void) {
    HSD_ObjAllocInit(&lbl_8031EC58, 0xC, 4);
}

void fn_80107CA4(void) {
    memset(&lbl_8031EC84, 0, 0x194);
}

void HSD_IDInsertToTable(M2C_UNK *arg0, u32 arg1, s32 arg2, M2C_UNK arg_sp0) {
    void *temp_r3_2;
    s32 temp_r28;
    s32 temp_r3;
    M2C_UNK *var_r29;
    void *var_r3;

    var_r29 = arg0;
    var_r29 = var_r29 != NULL ? var_r29 : &lbl_8031EC84;
    temp_r3 = MULTU_HI(0x446F8657, arg1);
    temp_r28 = (arg1 - (((u32) (((u32) (arg1 - temp_r3) >> 1U) + temp_r3) >> 6U) * 0x65)) * 4;
    /* draft: did not compile: var_r3 = *(var_r29 + temp_r28); */
loop_5:
    if (var_r3 != NULL) {
        if ((u32) M2C_FIELD(var_r3, u32 *, 4) != arg1) {
            var_r3 = M2C_FIELD(var_r3, void **, 0);
            goto loop_5;
        }
    }
    if (var_r3 != NULL) {
        M2C_FIELD(var_r3, u32 *, 4) = arg1;
        M2C_FIELD(var_r3, s32 *, 8) = arg2;
        return;
    }
    temp_r3_2 = fn_80105930(&lbl_8031EC58);
    if (temp_r3_2 == NULL) {
        __assert(&lbl_80350248, 0x43, &lbl_80350250);
    }
    memset(temp_r3_2, 0, 0xC);
    M2C_FIELD(temp_r3_2, u32 *, 4) = arg1;
    M2C_FIELD(temp_r3_2, s32 *, 8) = arg2;
    M2C_FIELD(temp_r3_2, s32 *, 0) = (s32) *(var_r29 + temp_r28);
    /* draft: did not compile: *(var_r29 + temp_r28) = temp_r3_2; */
}

void HSD_IDRemoveByIDFromTable(M2C_UNK *arg0, u32 arg1) {
    M2C_UNK *var_r3;
    M2C_UNK *var_r6;
    M2C_UNK *var_r7;
    s32 temp_r5;
    s32 temp_r5_2;

    var_r3 = arg0;
    if (var_r3 == NULL) {
        var_r3 = &lbl_8031EC84;
    }
    var_r7 = NULL;
    temp_r5 = MULTU_HI(0x446F8657, arg1);
    temp_r5_2 = (arg1 - (((u32) (((u32) (arg1 - temp_r5) >> 1U) + temp_r5) >> 6U) * 0x65)) * 4;
    /* draft: did not compile: var_r6 = *(var_r3 + temp_r5_2); */
loop_9:
    if (var_r6 == NULL) {
        return;
    }
    if ((u32) M2C_FIELD(var_r6, u32 *, 4) == arg1) {
        if (var_r7 != NULL) {
            /* draft: did not compile: *var_r7 = M2C_FIELD(var_r6, M2C_UNK **, 0); */
        } else {
            /* draft: did not compile: *(var_r3 + temp_r5_2) = M2C_FIELD(var_r6, M2C_UNK **, 0); */
        }
        HSD_ObjFree(&lbl_8031EC58, var_r6);
        return;
    }
    var_r7 = var_r6;
    var_r6 = M2C_FIELD(var_r6, M2C_UNK **, 0);
    goto loop_9;
}

s32 HSD_IDGetDataFromTable(M2C_UNK *arg0, u32 arg1, s32 *arg2) { return 0; } /* draft: stub */

void HSD_WObjRemoveAnim(void *arg0) {
    if (arg0 != NULL) {
        HSD_AObjRemove(M2C_FIELD(arg0, s32 *, 0x18));
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        HSD_RObjRemoveAnimAll(M2C_FIELD(arg0, s32 *, 0x1C));
    }
}

void HSD_WObjReqAnim(void *arg0, f32 farg0) {
    if (arg0 != NULL) {
        HSD_AObjReqAnim(M2C_FIELD(arg0, s32 *, 0x18));
        HSD_RObjReqAnimAll(M2C_FIELD(arg0, s32 *, 0x1C), farg0);
    }
}

void HSD_WObjAddAnim(void *arg0, void *arg1) {
    if ((arg0 != NULL) && (arg1 != NULL)) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x18) != 0U) {
            HSD_AObjRemove((long)(0));
        }
        M2C_FIELD(arg0, u32 *, 0x18) = HSD_AObjLoadDesc(M2C_FIELD(arg1, s32 *, 0));
        HSD_RObjAddAnimAll(M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(arg1, s32 *, 4));
    }
}

#pragma push
#pragma peephole off
void WObjUpdateFunc(void *arg0, s32 arg1, f32 *arg2) {
    M2C_UNK sp8;
    void *temp_r30;

    if (arg0 != NULL) {
        switch (arg1) {                             /* irregular */
        case 4:
            if (*arg2 < lbl_80352118) {
                *arg2 = lbl_80352120;
            }
            if (lbl_80352128 < *arg2) {
                *arg2 = lbl_80352130;
            }
            if ((void *) M2C_FIELD(arg0, void **, 0x18) == NULL) {
                __assert(&lbl_80350258, 0x98, &lbl_802AA1C4);
            }
            temp_r30 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0x18);
            if (temp_r30 == NULL) {
                __assert(&lbl_80350258, 0x9A, &lbl_80350260);
            }
            if ((u32) M2C_FIELD(temp_r30, u32 *, 0x18) == 0U) {
                __assert(&lbl_80350258, 0x9B, &lbl_802AA1D0);
            }
            splArcLengthPoint(&sp8, M2C_FIELD(temp_r30, u32 *, 0x18), *arg2);
            HSD_WObjSetPosition(arg0, &sp8);
            M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 1);
            return;
        case 5:
            /* draft: did not compile: HSD_WObjSetPositionX(*arg2); */
            return;
        case 6:
            /* draft: did not compile: HSD_WObjSetPositionY(*arg2); */
            return;
        case 7:
            /* draft: did not compile: HSD_WObjSetPositionZ(*arg2); */
            break;
        }
    }
}
#pragma pop

void HSD_WObjInterpretAnim(void *arg0) {
    if (arg0 != NULL) {
        HSD_AObjInterpretAnim(M2C_FIELD(arg0, s32 *, 0x18), arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x40));
        HSD_RObjAnimAll(M2C_FIELD(arg0, s32 *, 0x1C));
    }
}

s32 WObjLoad(void *arg0, void *arg1) {
    /* draft: did not compile: HSD_WObjSetPosition(arg1 + 4); */
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) != 0U) {
        HSD_RObjRemoveAll();
    }
    M2C_FIELD(arg0, u32 *, 0x1C) = HSD_RObjLoadDesc(M2C_FIELD(arg1, s32 *, 0x10));
    HSD_RObjResolveRefsAll(M2C_FIELD(arg0, u32 *, 0x1C), M2C_FIELD(arg1, s32 *, 0x10));
    return 0;
}

void HSD_WObjInit(void *arg0, void *arg1) {
    if (arg0 != NULL) {
        if (arg1 == NULL) {
            return;
        }
        /* draft: did not compile: HSD_WObjSetPosition(arg1 + 4); */
        if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) != 0U) {
            HSD_RObjRemoveAll();
        }
        M2C_FIELD(arg0, u32 *, 0x1C) = HSD_RObjLoadDesc(M2C_FIELD(arg1, s32 *, 0x10));
        HSD_RObjResolveRefsAll(M2C_FIELD(arg0, u32 *, 0x1C), M2C_FIELD(arg1, s32 *, 0x10));
    }
}

void **HSD_WObjLoadDesc(u32 *arg0) {
    void **var_r31;
    void *temp_r5;

    if (arg0 != NULL) {
        if (((u32) *arg0 == 0U) || (hsdSearchClassInfo() == 0U)) {
            /* draft: did not compile: var_r31 = HSD_WObjAlloc(); */
        } else {
            var_r31 = hsdNew();
            if (var_r31 == NULL) {
                __assert(&lbl_80350258, 0x104, &lbl_80350264);
            }
        }
        temp_r5 = *var_r31;
        M2C_FIELD(temp_r5, M2C_UNK (**)(void **, u32 *, void *), 0x3C)(var_r31, arg0, temp_r5);
        return var_r31;
    }
    return NULL;
}

void HSD_WObjSetPosition(void *arg0, void *arg1) {
    if (arg0 != NULL) {
        if (arg1 == NULL) {
            return;
        }
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 0);
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 4);
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 8);
        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 2);
        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) & 0xFFFFFFFE);
    }
}

void HSD_WObjSetPositionX(void *arg0, f32 farg0) {
    s32 var_r3;
    s32 temp_r4;
    s32 temp_cr0_eq;
    void *temp_r31;
    void *temp_r3;
    void *temp_r4_2;

    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 8) & 1) {
            temp_r3 = M2C_FIELD(arg0, void **, 0x18);
            if (temp_r3 != NULL) {
                temp_r31 = M2C_FIELD(temp_r3, void **, 0x18);
                temp_cr0_eq = temp_r31 == NULL;
                if (temp_cr0_eq == 0) {
                    if (temp_cr0_eq == 0) {
                        if (temp_cr0_eq != 0) {
                            __assert(&lbl_8035026C, 0x25D, &lbl_80350274);
                        }
                        temp_r4 = M2C_FIELD(temp_r31, s32 *, 0x14);
                        var_r3 = 0;
                        if (!(temp_r4 & 0x800000) && (temp_r4 & 0x40)) {
                            var_r3 = 1;
                        }
                        if (var_r3 != 0) {
                            HSD_JObjSetupMatrixSub(temp_r31);
                        }
                    }
                    /* draft: did not compile: temp_r4_2 = arg0 + 0xC; */
                    /* draft: did not compile: PSMTXMultVec(temp_r31 + 0x44, temp_r4_2, temp_r4_2); */
                }
            }
            M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) & 0xFFFFFFFE);
        }
        M2C_FIELD(arg0, f32 *, 0xC) = farg0;
        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 2);
    }
}

void HSD_WObjSetPositionY(void *arg0, f32 farg0) {
    s32 var_r3;
    s32 temp_r4;
    s32 temp_cr0_eq;
    void *temp_r31;
    void *temp_r3;
    void *temp_r4_2;

    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 8) & 1) {
            temp_r3 = M2C_FIELD(arg0, void **, 0x18);
            if (temp_r3 != NULL) {
                temp_r31 = M2C_FIELD(temp_r3, void **, 0x18);
                temp_cr0_eq = temp_r31 == NULL;
                if (temp_cr0_eq == 0) {
                    if (temp_cr0_eq == 0) {
                        if (temp_cr0_eq != 0) {
                            __assert(&lbl_8035026C, 0x25D, &lbl_80350274);
                        }
                        temp_r4 = M2C_FIELD(temp_r31, s32 *, 0x14);
                        var_r3 = 0;
                        if (!(temp_r4 & 0x800000) && (temp_r4 & 0x40)) {
                            var_r3 = 1;
                        }
                        if (var_r3 != 0) {
                            HSD_JObjSetupMatrixSub(temp_r31);
                        }
                    }
                    /* draft: did not compile: temp_r4_2 = arg0 + 0xC; */
                    /* draft: did not compile: PSMTXMultVec(temp_r31 + 0x44, temp_r4_2, temp_r4_2); */
                }
            }
            M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) & 0xFFFFFFFE);
        }
        M2C_FIELD(arg0, f32 *, 0x10) = farg0;
        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 2);
    }
}

void HSD_WObjSetPositionZ(void *arg0, f32 farg0) {
    s32 var_r3;
    s32 temp_r4;
    s32 temp_cr0_eq;
    void *temp_r31;
    void *temp_r3;
    void *temp_r4_2;

    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 8) & 1) {
            temp_r3 = M2C_FIELD(arg0, void **, 0x18);
            if (temp_r3 != NULL) {
                temp_r31 = M2C_FIELD(temp_r3, void **, 0x18);
                temp_cr0_eq = temp_r31 == NULL;
                if (temp_cr0_eq == 0) {
                    if (temp_cr0_eq == 0) {
                        if (temp_cr0_eq != 0) {
                            __assert(&lbl_8035026C, 0x25D, &lbl_80350274);
                        }
                        temp_r4 = M2C_FIELD(temp_r31, s32 *, 0x14);
                        var_r3 = 0;
                        if (!(temp_r4 & 0x800000) && (temp_r4 & 0x40)) {
                            var_r3 = 1;
                        }
                        if (var_r3 != 0) {
                            HSD_JObjSetupMatrixSub(temp_r31);
                        }
                    }
                    /* draft: did not compile: temp_r4_2 = arg0 + 0xC; */
                    /* draft: did not compile: PSMTXMultVec(temp_r31 + 0x44, temp_r4_2, temp_r4_2); */
                }
            }
            M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) & 0xFFFFFFFE);
        }
        M2C_FIELD(arg0, f32 *, 0x14) = farg0;
        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 2);
    }
}

void HSD_WObjGetPosition(void *arg0, void *arg1) {
    s32 var_r3;
    s32 temp_r4;
    s32 temp_cr0_eq;
    void *temp_r31;
    void *temp_r3;
    void *temp_r4_2;

    if (arg0 != NULL) {
        if (arg1 == NULL) {
            return;
        }
        if (M2C_FIELD(arg0, s32 *, 8) & 1) {
            temp_r3 = M2C_FIELD(arg0, void **, 0x18);
            if (temp_r3 != NULL) {
                temp_r31 = M2C_FIELD(temp_r3, void **, 0x18);
                temp_cr0_eq = temp_r31 == NULL;
                if (temp_cr0_eq == 0) {
                    if (temp_cr0_eq == 0) {
                        if (temp_cr0_eq != 0) {
                            __assert(&lbl_8035026C, 0x25D, &lbl_80350274);
                        }
                        temp_r4 = M2C_FIELD(temp_r31, s32 *, 0x14);
                        var_r3 = 0;
                        if (!(temp_r4 & 0x800000) && (temp_r4 & 0x40)) {
                            var_r3 = 1;
                        }
                        if (var_r3 != 0) {
                            HSD_JObjSetupMatrixSub(temp_r31);
                        }
                    }
                    /* draft: did not compile: temp_r4_2 = arg0 + 0xC; */
                    /* draft: did not compile: PSMTXMultVec(temp_r31 + 0x44, temp_r4_2, temp_r4_2); */
                }
            }
            M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) & 0xFFFFFFFE);
        }
        M2C_FIELD(arg1, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
        M2C_FIELD(arg1, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
        M2C_FIELD(arg1, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
    }
}

s32 HSD_WObjAlloc(void) {
    M2C_UNK *var_r3;
    s32 temp_r3;

    var_r3 = lbl_80350CF0;
    if (var_r3 != NULL) {

    } else {
        var_r3 = &lbl_802AA180;
    }
    /* draft: did not compile: temp_r3 = hsdNew(var_r3); */
    if (temp_r3 == 0) {
        __assert(&lbl_80350258, 0x257, &lbl_80350264);
    }
    return temp_r3;
}

void WObjRelease(void *arg0) {
    HSD_RObjRemoveAll(M2C_FIELD(arg0, s32 *, 0x1C));
    HSD_AObjRemove(M2C_FIELD(arg0, s32 *, 0x18));
    M2C_FIELD(M2C_FIELD(&lbl_802AA180, void **, 0x14), M2C_UNK (**)(void *, void *), 0x30)(arg0, M2C_FIELD(&lbl_802AA180, void **, 0x14));
}

void fn_80108748(u32 arg0) {
    if (arg0 == (u32) lbl_80350CF0) {
        lbl_80350CF0 = 0U;
    }
    M2C_FIELD(M2C_FIELD(&lbl_802AA180, void **, 0x14), M2C_UNK (**)(void *), 0x38)(M2C_FIELD(&lbl_802AA180, void **, 0x14));
}

void fn_80108790(void) {
    hsdInitClassInfo(&lbl_802AA180, &lbl_802AA3D0, &lbl_802AA180 + 0x84, &lbl_802AA180 + 0x9C, 0x44, 0x20);
    /* draft: did not compile: M2C_FIELD(&lbl_802AA180, M2C_UNK (**)(), 0x30) = WObjRelease; */
    /* draft: did not compile: M2C_FIELD(&lbl_802AA180, M2C_UNK (**)(), 0x38) = fn_80108748; */
    M2C_FIELD(&lbl_802AA180, M2C_UNK (**)(), 0x3C) = WObjLoad;
    /* draft: did not compile: M2C_FIELD(&lbl_802AA180, M2C_UNK (**)(), 0x40) = WObjUpdateFunc; */
}

void fn_80108810(void *arg0) {
    s32 sp28;
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp34;
    f32 sp94;
    f32 sp90;
    f32 sp84;
    f32 sp80;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp64;
    f32 sp60;
    f32 sp58;
    M2C_UNK sp44;
    f32 sp2C;
    f32 sp10;
    s32 spC;
    s32 sp8;
    f32 *var_r30_2;
    f32 temp_f31;
    s32 var_r3;
    s32 temp_r31;
    s32 temp_r3;
    s32 var_r29;
    s32 var_r28;
    void *var_r30;

    if (arg0 == NULL) {
        spC = lbl_80352A80;
        fn_800E4B80(0, &spC, lbl_80352138, lbl_80352138, lbl_80352138, lbl_80352138);
        return;
    }
    temp_r3 = HSD_CObjGetCurrent();
    if (temp_r3 == 0) {
        HSD_Panic(&lbl_80350280, 0x58, &lbl_802AA2A4);
    }
    sp8 = M2C_FIELD(arg0, s32 *, 0x18);
    temp_f31 = fn_800F3A10(temp_r3);
    fn_800E4B80(M2C_FIELD(arg0, s32 *, 8), &sp8, M2C_FIELD(arg0, f32 *, 0x10), M2C_FIELD(arg0, f32 *, 0x14), fn_800F39E8(temp_r3), temp_f31);
    if (arg0 != NULL) {
        var_r30 = M2C_FIELD(arg0, void **, 0xC);
    } else {
        var_r30 = NULL;
    }
    temp_r31 = fn_80108D98(var_r30);
    if ((var_r30 != NULL) && (temp_r31 & 7)) {
        GXGetViewportv(&sp2C);
        if (temp_r31 & 1) {
            if (var_r30 != NULL) {
                var_r3 = M2C_FIELD(var_r30, s16 *, 0xC);
            } else {
                var_r3 = -1;
            }
            var_r29 = (s32) (sp2C + ((sp34 * (f32) (var_r3 + 0x140)) / lbl_8035213C));
        } else {
            var_r29 = (s32) ((sp34 * lbl_80352140) + sp2C);
        }
        if (temp_r31 & 2) {
            if (var_r30 != NULL) {
                var_r28 = M2C_FIELD(var_r30, u16 *, 0xE);
            } else {
                var_r28 = -1U;
            }
        } else {
            var_r28 = (u16) (s32) sp34;
        }
        if (temp_r31 & 4) {
            if (var_r30 != NULL) {
                /* draft: did not compile: var_r30_2 = var_r30 + 0x10; */
            } else {
                var_r30_2 = NULL;
            }
        } else {
            var_r30_2 = &sp58;
            memset(var_r30_2, 0, 0x40);
            fn_800E5568(&sp10);
            if ((s32) sp10 != 0) {
                sp58 = sp14;
                sp64 = sp18;
                sp6C = sp1C;
                sp74 = sp20;
                sp80 = sp24;
                sp84 = sp28;
                sp94 = lbl_80352148;
            } else {
                sp58 = sp14;
                sp60 = sp18;
                sp6C = sp1C;
                sp70 = sp20;
                sp80 = sp24;
                sp84 = sp28;
                sp90 = lbl_80352144;
            }
        }
        fn_800E4D9C(&sp44, var_r28, var_r30_2);
        fn_800E4F64(1, (u16) var_r29, &sp44);
        return;
    }
    fn_800E4F64(0, 0U, NULL);
}

s32 fn_80108ACC(void) {
    s32 temp_r3;

    /* draft: did not compile: temp_r3 = hsdNew(&lbl_802AA228); */
    if (temp_r3 == 0) {
        __assert(&lbl_80350280, 0xA1, &lbl_80350288);
    }
    return temp_r3;
}

void *HSD_FogLoadDesc(void *arg0) {
    void *temp_r3;

    temp_r3 = hsdNew(&lbl_802AA228, &lbl_802AA228);
    if (temp_r3 == NULL) {
        __assert(&lbl_80350280, 0xA1, &lbl_80350288);
    }
    if (temp_r3 == NULL) {
        __assert(&lbl_80350280, 0xAE, &lbl_80350288);
    }
    HSD_FogInit(temp_r3, arg0);
    if ((u32) M2C_FIELD(arg0, u32 *, 4) != 0U) {
        M2C_FIELD(temp_r3, s32 *, 0xC) = HSD_FogAdjLoadDesc();
    }
    return temp_r3;
}

void HSD_FogInit(void *arg0, void *arg1) {
    s32 sp1C;
    s32 sp18;
    M2C_UNK sp8;

    if (arg0 != NULL) {
        if (arg1 != NULL) {
            M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 0);
            M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 8);
            M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
            M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
            return;
        }
        GXGetViewportv(&sp8);
        M2C_FIELD(arg0, s32 *, 8) = 2;
        M2C_FIELD(arg0, f32 *, 0x10) = sp18;
        M2C_FIELD(arg0, f32 *, 0x14) = sp1C;
        M2C_FIELD(arg0, s32 *, 0x18) = 0xFF;
        M2C_FIELD(arg0, s8 *, 0x19) = 0xFF;
        M2C_FIELD(arg0, s8 *, 0x1A) = 0xFF;
        M2C_FIELD(arg0, s8 *, 0x1B) = 0xFF;
    }
}
