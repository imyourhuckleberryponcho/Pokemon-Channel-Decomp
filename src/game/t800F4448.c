/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK __assert(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_802A9438;
extern M2C_UNK lbl_80350138;
extern f32 lbl_80351F00;
f32 fn_80103690(f32, f32, f32, f32, f32, f32);
extern M2C_UNK lbl_802A9420;
extern f64 lbl_80351F10;
extern f64 lbl_80351F18;
extern f64 lbl_80351F20;
s32 fn_80105930(M2C_UNK *);
extern M2C_UNK lbl_8031D290;
extern M2C_UNK lbl_80350140;
M2C_UNK HSD_ObjFree(M2C_UNK *, s32, M2C_UNK *);
M2C_UNK HSD_AObjRemove(s32);
u32 HSD_AObjLoadDesc(s32);
M2C_UNK HSD_AObjReqAnim(s32, f32);
M2C_UNK HSD_AObjInterpretAnim(s32, void *, s32);
s32 HSD_PObjLoadDesc(s32, M2C_UNK *);
M2C_UNK fn_8010019C(M2C_UNK);
M2C_UNK *fn_801091F4();
s32 HSD_Alloc(s32);
M2C_UNK *hsdAllocMemPiece(M2C_UNK);
M2C_UNK HSD_Panic(M2C_UNK *, M2C_UNK, void *);
extern M2C_UNK lbl_802A9468;
extern M2C_UNK lbl_80350148;
extern f32 lbl_80351F28;

void HSD_FObjStopAnimAll(void *arg0, s32 arg1, s32 arg2, f32 farg0);
s32 FObjLoadData(void *arg0);
void HSD_FObjInterpretAnim(void *arg0, s32 arg1, f32 (*arg2)(s32, u8, f32 *, f32), f32 farg0);
void HSD_FObjInterpretAnimAll(M2C_UNK *arg0, s32 arg1, s32 arg2, f32 farg0);
void *HSD_FObjLoadDesc(void *arg0, M2C_UNK arg_sp0);
s32 HSD_FObjAlloc(void);
void HSD_ZListFree(s32 arg0);
void HSD_PObjRemoveAnimAllByFlags(void *arg0, s32 arg1);
void HSD_PObjAddAnimAll(void *arg0, void *arg1);
void HSD_PObjReqAnimAllByFlags(void *arg0, s32 arg1, f32 farg0);
void PObjUpdateFunc(void *arg0, s32 arg1, f32 *arg2);
void fn_800F6168(void *arg0);
s32 fn_800F61C4(void *arg0, void *arg1, M2C_UNK arg_sp0);

void HSD_FObjStopAnimAll(void *arg0, s32 arg1, s32 arg2, f32 farg0) {
    void *var_r29;

    var_r29 = arg0;
loop_7:
    if (var_r29 != NULL) {
        if (var_r29 != NULL) {
            if ((u8) M2C_FIELD(var_r29, u8 *, 0x12) == 6) {
                /* draft: did not compile: HSD_FObjInterpretAnim(var_r29, arg1, arg2, farg0); */
            }
            if (var_r29 != NULL) {
                M2C_FIELD(var_r29, u8 *, 0x10) = (u8) (M2C_FIELD(var_r29, u8 *, 0x10) & 0xF0);
            }
        }
        var_r29 = M2C_FIELD(var_r29, void **, 0);
        goto loop_7;
    }
}

s32 FObjLoadData(void *arg0) { return 0; } /* draft: stub */

void HSD_FObjInterpretAnim(void *arg0, s32 arg1, f32 (*arg2)(s32, u8, f32 *, f32), f32 farg0) { } /* draft: stub */

void HSD_FObjInterpretAnimAll(M2C_UNK *arg0, s32 arg1, s32 arg2, f32 farg0) {
    M2C_UNK *var_r31;

    var_r31 = arg0;
loop_2:
    if (var_r31 != NULL) {
        /* draft: did not compile: HSD_FObjInterpretAnim(var_r31, arg1, arg2, farg0); */
        /* draft: did not compile: var_r31 = *var_r31; */
        goto loop_2;
    }
}

void *HSD_FObjLoadDesc(void *arg0, M2C_UNK arg_sp0) {
    void *temp_r23;
    void *temp_r24;
    void *var_r30;
    void *temp_r29;
    void *var_r28;
    void *temp_r27;
    void *var_r22;
    void *var_r26;
    void *temp_r25;

    if (arg0 != NULL) {
        temp_r29 = M2C_FIELD(arg0, void **, 0);
        /* draft: did not compile: temp_r23 = HSD_FObjAlloc(); */
        if (temp_r29 != NULL) {
            temp_r27 = M2C_FIELD(temp_r29, void **, 0);
            /* draft: did not compile: var_r30 = HSD_FObjAlloc(); */
            if (temp_r27 != NULL) {
                temp_r25 = M2C_FIELD(temp_r27, void **, 0);
                /* draft: did not compile: var_r28 = HSD_FObjAlloc(); */
                if (temp_r25 != NULL) {
                    temp_r24 = M2C_FIELD(temp_r25, void **, 0);
                    /* draft: did not compile: var_r26 = HSD_FObjAlloc(); */
                    if (temp_r24 != NULL) {
                        /* draft: did not compile: var_r22 = HSD_FObjAlloc(); */
                        M2C_FIELD(var_r22, void **, 0) = HSD_FObjLoadDesc((void *)(M2C_FIELD(temp_r24, void **, 0)), (long)(0));
                        M2C_FIELD(var_r22, s16 *, 0x18) = (s16) M2C_FIELD(temp_r24, f32 *, 8);
                        M2C_FIELD(var_r22, u8 *, 0x13) = (u8) M2C_FIELD(temp_r24, u8 *, 0xC);
                        M2C_FIELD(var_r22, u8 *, 0x14) = (u8) M2C_FIELD(temp_r24, u8 *, 0xD);
                        M2C_FIELD(var_r22, u8 *, 0x15) = (u8) M2C_FIELD(temp_r24, u8 *, 0xE);
                        M2C_FIELD(var_r22, s32 *, 8) = (s32) M2C_FIELD(temp_r24, s32 *, 0x10);
                        M2C_FIELD(var_r22, s32 *, 0xC) = (s32) M2C_FIELD(temp_r24, s32 *, 4);
                        M2C_FIELD(var_r22, s8 *, 0x10) = 0;
                    } else {
                        var_r22 = NULL;
                    }
                    M2C_FIELD(var_r26, void **, 0) = var_r22;
                    M2C_FIELD(var_r26, s16 *, 0x18) = (s16) M2C_FIELD(temp_r25, f32 *, 8);
                    M2C_FIELD(var_r26, u8 *, 0x13) = (u8) M2C_FIELD(temp_r25, u8 *, 0xC);
                    M2C_FIELD(var_r26, u8 *, 0x14) = (u8) M2C_FIELD(temp_r25, u8 *, 0xD);
                    M2C_FIELD(var_r26, u8 *, 0x15) = (u8) M2C_FIELD(temp_r25, u8 *, 0xE);
                    M2C_FIELD(var_r26, s32 *, 8) = (s32) M2C_FIELD(temp_r25, s32 *, 0x10);
                    M2C_FIELD(var_r26, s32 *, 0xC) = (s32) M2C_FIELD(temp_r25, s32 *, 4);
                    M2C_FIELD(var_r26, s8 *, 0x10) = 0;
                } else {
                    var_r26 = NULL;
                }
                M2C_FIELD(var_r28, void **, 0) = var_r26;
                M2C_FIELD(var_r28, s16 *, 0x18) = (s16) M2C_FIELD(temp_r27, f32 *, 8);
                M2C_FIELD(var_r28, u8 *, 0x13) = (u8) M2C_FIELD(temp_r27, u8 *, 0xC);
                M2C_FIELD(var_r28, u8 *, 0x14) = (u8) M2C_FIELD(temp_r27, u8 *, 0xD);
                M2C_FIELD(var_r28, u8 *, 0x15) = (u8) M2C_FIELD(temp_r27, u8 *, 0xE);
                M2C_FIELD(var_r28, s32 *, 8) = (s32) M2C_FIELD(temp_r27, s32 *, 0x10);
                M2C_FIELD(var_r28, s32 *, 0xC) = (s32) M2C_FIELD(temp_r27, s32 *, 4);
                M2C_FIELD(var_r28, s8 *, 0x10) = 0;
            } else {
                var_r28 = NULL;
            }
            M2C_FIELD(var_r30, void **, 0) = var_r28;
            M2C_FIELD(var_r30, s16 *, 0x18) = (s16) M2C_FIELD(temp_r29, f32 *, 8);
            M2C_FIELD(var_r30, u8 *, 0x13) = (u8) M2C_FIELD(temp_r29, u8 *, 0xC);
            M2C_FIELD(var_r30, u8 *, 0x14) = (u8) M2C_FIELD(temp_r29, u8 *, 0xD);
            M2C_FIELD(var_r30, u8 *, 0x15) = (u8) M2C_FIELD(temp_r29, u8 *, 0xE);
            M2C_FIELD(var_r30, s32 *, 8) = (s32) M2C_FIELD(temp_r29, s32 *, 0x10);
            M2C_FIELD(var_r30, s32 *, 0xC) = (s32) M2C_FIELD(temp_r29, s32 *, 4);
            M2C_FIELD(var_r30, s8 *, 0x10) = 0;
        } else {
            var_r30 = NULL;
        }
        M2C_FIELD(temp_r23, void **, 0) = var_r30;
        M2C_FIELD(temp_r23, s16 *, 0x18) = (s16) M2C_FIELD(arg0, f32 *, 8);
        M2C_FIELD(temp_r23, u8 *, 0x13) = (u8) M2C_FIELD(arg0, u8 *, 0xC);
        M2C_FIELD(temp_r23, u8 *, 0x14) = (u8) M2C_FIELD(arg0, u8 *, 0xD);
        M2C_FIELD(temp_r23, u8 *, 0x15) = (u8) M2C_FIELD(arg0, u8 *, 0xE);
        M2C_FIELD(temp_r23, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
        M2C_FIELD(temp_r23, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 4);
        M2C_FIELD(temp_r23, s8 *, 0x10) = 0;
        return temp_r23;
    }
    return NULL;
}

s32 HSD_FObjAlloc(void) {
    s32 temp_r3;

    temp_r3 = fn_80105930(&lbl_8031D290);
    if (temp_r3 == 0) {
        __assert(&lbl_80350138, 0x2F3, &lbl_80350140);
    }
    /* draft: did not compile: memset(temp_r3, 0, 0x30); */
    return temp_r3;
}

void HSD_ZListFree(s32 arg0) {
    HSD_ObjFree(&lbl_8031D290, arg0, &lbl_8031D290);
}

void HSD_PObjRemoveAnimAllByFlags(void *arg0, s32 arg1) {
    void *var_r29;

    if (arg0 != NULL) {
        var_r29 = arg0;
loop_6:
        if (var_r29 != NULL) {
            if ((var_r29 != NULL) && ((u32) (arg1 & 8) != 0)) {
                HSD_AObjRemove(M2C_FIELD(var_r29, s32 *, 0x18));
                M2C_FIELD(var_r29, s32 *, 0x18) = 0;
            }
            var_r29 = M2C_FIELD(var_r29, void **, 4);
            goto loop_6;
        }
    }
}

void HSD_PObjAddAnimAll(void *arg0, void *arg1) {
    void *var_r30;
    void *var_r31;

    if (arg0 != NULL) {
        if (arg1 == NULL) {
            return;
        }
        var_r31 = arg0;
        var_r30 = arg1;
loop_11:
        if (var_r31 != NULL) {
            if (var_r31 != NULL) {
                if ((u32) M2C_FIELD(var_r31, u32 *, 0x18) != 0U) {
                    HSD_AObjRemove((long)(0));
                }
                M2C_FIELD(var_r31, u32 *, 0x18) = HSD_AObjLoadDesc(M2C_FIELD(var_r30, s32 *, 4));
            }
            var_r31 = M2C_FIELD(var_r31, void **, 4);
            if (var_r30 != NULL) {
                var_r30 = M2C_FIELD(var_r30, void **, 0);
            } else {
                var_r30 = NULL;
            }
            goto loop_11;
        }
    }
}

void HSD_PObjReqAnimAllByFlags(void *arg0, s32 arg1, f32 farg0) {
    void *var_r30;

    if (arg0 != NULL) {
        var_r30 = arg0;
loop_6:
        if (var_r30 != NULL) {
            if ((var_r30 != NULL) && ((u32) (arg1 & 8) != 0)) {
                HSD_AObjReqAnim(M2C_FIELD(var_r30, s32 *, 0x18), farg0);
            }
            var_r30 = M2C_FIELD(var_r30, void **, 4);
            goto loop_6;
        }
    }
}

void PObjUpdateFunc(void *arg0, s32 arg1, f32 *arg2) {
    void *temp_r3;

    if ((arg0 != NULL) && ((s32) (M2C_FIELD(arg0, u16 *, 0xC) & 0x3000) == 0x1000)) {
        temp_r3 = M2C_FIELD(arg0, void **, 0x14);
        if (M2C_FIELD(temp_r3, u16 *, 0) & 2) {
            M2C_FIELD((M2C_FIELD(temp_r3, s32 *, 0x1C) + (arg1 * 4)), f32 *, -8) = (f32) *arg2;
            return;
        }
        M2C_FIELD(temp_r3, s32 *, 0x1C) = (f32) *arg2;
    }
}

void fn_800F6168(void *arg0) {
    void *var_r31;

    if (arg0 != NULL) {
        var_r31 = arg0;
loop_5:
        if (var_r31 != NULL) {
            if (var_r31 != NULL) {
                HSD_AObjInterpretAnim(M2C_FIELD(var_r31, s32 *, 0x18), var_r31, M2C_FIELD(M2C_FIELD(var_r31, void **, 0), s32 *, 0x48));
            }
            var_r31 = M2C_FIELD(var_r31, void **, 4);
            goto loop_5;
        }
    }
}

s32 fn_800F61C4(void *arg0, void *arg1, M2C_UNK arg_sp0) {
    M2C_UNK *spC;
    M2C_UNK *sp8;
    M2C_UNK *temp_r3;
    M2C_UNK *temp_r3_2;
    M2C_UNK *var_r0;
    M2C_UNK *var_r27;
    M2C_UNK *var_r28;
    f32 temp_f0;
    s32 temp_r0;
    s32 var_r4;
    s32 var_r5;
    void **temp_r29;
    void **var_r26;
    void *var_r29;

    M2C_FIELD(arg0, s32 *, 4) = HSD_PObjLoadDesc(M2C_FIELD(arg1, s32 *, 4), &lbl_802A9468);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, u16 *, 0xC) = (u16) M2C_FIELD(arg1, u16 *, 0xC);
    M2C_FIELD(arg0, u16 *, 0xE) = (u16) M2C_FIELD(arg1, u16 *, 0xE);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    temp_r0 = M2C_FIELD(arg0, u16 *, 0xC) & 0x3000;
    switch (temp_r0) {                              /* irregular */
    case 0x0:
        break;
    case 0x1000:
        temp_r29 = M2C_FIELD(arg1, void ***, 0x14);
        temp_r3 = hsdAllocMemPiece(0x20);
        if (temp_r3 == NULL) {
            __assert(&lbl_80350148, 0x1E2, &lbl_802A9468 + 0x58);
        }
        memset(temp_r3, 0, 0x20);
        M2C_FIELD(temp_r3, u16 *, 0) = (u16) M2C_FIELD(temp_r29, u16 *, 0);
        M2C_FIELD(temp_r3, u16 *, 2) = (u16) M2C_FIELD(temp_r29, u16 *, 2);
        M2C_FIELD(temp_r3, s32 *, 4) = (s32) M2C_FIELD(temp_r29, s32 *, 4);
        M2C_FIELD(temp_r3, s32 *, 8) = (s32) M2C_FIELD(temp_r29, s32 *, 8);
        M2C_FIELD(temp_r3, s32 *, 0xC) = (s32) M2C_FIELD(temp_r29, s32 *, 0xC);
        M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) M2C_FIELD(temp_r29, s32 *, 0x10);
        M2C_FIELD(temp_r3, s32 *, 0x14) = (s32) M2C_FIELD(temp_r29, s32 *, 0x14);
        M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) M2C_FIELD(temp_r29, s32 *, 0x18);
        if (M2C_FIELD(temp_r3, u16 *, 0) & 2) {
            var_r4 = 0;
            M2C_FIELD(temp_r3, s32 *, 0x1C) = HSD_Alloc(M2C_FIELD(temp_r3, u16 *, 2) * 4);
            var_r5 = 0;
loop_11:
            if (var_r4 < (s32) M2C_FIELD(temp_r3, u16 *, 2)) {
                var_r4 += 1;
                /* draft: did not compile: *(M2C_FIELD(temp_r3, s32 *, 0x1C) + var_r5) = lbl_80351F28; */
                var_r5 += 4;
                goto loop_11;
            }
        } else {
            M2C_FIELD(temp_r3, s32 *, 0x1C) = (f32) lbl_80351F28;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x14) = temp_r3;
        break;
    case 0x2000:
        var_r26 = M2C_FIELD(arg1, void ***, 0x14);
        var_r0 = NULL;
        /* draft: did not compile: var_r27 = &sp8; */
        sp8 = NULL;
        if (var_r26 == NULL) {

        } else {
loop_24:
            if ((void *) *var_r26 != NULL) {
                /* draft: did not compile: var_r28 = &spC; */
                spC = NULL;
                var_r29 = *var_r26;
loop_22:
                if ((u32) M2C_FIELD(var_r29, u32 *, 0) != 0U) {
                    temp_r3_2 = hsdAllocMemPiece(0xC);
                    if (temp_r3_2 == NULL) {
                        __assert(&lbl_80350148, 0x1A9, &lbl_802A9468 + 0x4C);
                    }
                    memset(temp_r3_2, 0, 0xC);
                    /* draft: did not compile: *var_r28 = temp_r3_2; */
                    temp_f0 = M2C_FIELD(var_r29, f32 *, 4);
                    /* draft: did not compile: var_r29 += 8; */
                    M2C_FIELD(*var_r28, f32 *, 8) = temp_f0;
                    /* draft: did not compile: var_r28 = *var_r28; */
                    goto loop_22;
                }
                /* draft: did not compile: *var_r27 = fn_801091F4(); */
                var_r26 += 4;
                M2C_FIELD(*var_r27, M2C_UNK **, 4) = spC;
                /* draft: did not compile: var_r27 = *var_r27; */
                goto loop_24;
            }
            var_r0 = sp8;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x14) = var_r0;
        break;
    default:
        HSD_Panic(&lbl_80350148, 0x22A, &lbl_802A9468 + 0x64);
        break;
    }
    fn_8010019C(1);
    return 0;
}
