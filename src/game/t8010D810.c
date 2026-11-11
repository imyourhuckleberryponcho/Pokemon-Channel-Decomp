/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

s32 AssignColorReg(void *, s32, s32);
s32 AssignColorKonst(void *, s32, s32);
s32 AssignAlphaKonst(void *, s32, s32);
M2C_UNK __assert(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_802AA91C;
extern M2C_UNK lbl_802AA9BC;
extern M2C_UNK lbl_80350300;
extern M2C_UNK lbl_802AA6E0;
extern M2C_UNK lbl_80350308;
extern M2C_UNK lbl_80350314;
M2C_UNK GXPixModeSync();
M2C_UNK fn_800E4580(s32, s32 *);
M2C_UNK fn_800E4668(s32, u32 *);
M2C_UNK HSD_StateInvalidate(M2C_UNK);
extern f32 lbl_803521B0;
extern f64 lbl_803521B8;
M2C_UNK HSD_StateAssignTev();
M2C_UNK HSD_SetupTevStage(void *);
s32 HSD_TevStage2Num(s32);
void *hsdAllocMemPiece(M2C_UNK);
s32 HSD_TExpFreeList(s32, M2C_UNK, M2C_UNK);
M2C_UNK HSD_TExpSimplify(void *);
M2C_UNK HSD_TExpSimplify2(s32);
extern M2C_UNK lbl_8035031C;
M2C_UNK hsdFreeMemPiece(M2C_UNK);
s32 HSD_TExpGetType(void *);
extern s32 lbl_80352A88;
extern s32 lbl_80352A8C;
extern M2C_UNK lbl_802AAA48;
extern M2C_UNK lbl_80350328;

s32 TExpAssignReg(void *arg0, s32 arg1, M2C_UNK arg_sp0);
void TExp2TevDesc(void *arg0, void *arg1, s32 *arg2, s32 *arg3, M2C_UNK arg_sp0);
void HSD_TExpSetReg(void *arg0, M2C_UNK arg_sp0);
void HSD_TExpSetupTev(void *arg0, s32 arg1);
s32 HSD_TExpCompile(void *arg0, void **arg1, s32 *arg2, M2C_UNK arg_sp0);
void HSD_TExpFreeTevDesc(M2C_UNK *arg0);
s32 assign_reg(s32 arg0, s32 arg2, s32 arg3, M2C_UNK arg_sp0);
void order_dag(s32 arg0, s32 arg1, s32 *arg2, s32 arg3, s32 arg4, u8 arg5, s32 arg6, s32 arg7, M2C_UNK arg_sp0, void *arg_sp8, s32 *arg_spC, void *arg_sp10);
void CalcDistance(u32 *arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0);
s32 HSD_TExpMakeDag(void *arg0, s32 arg1, M2C_UNK arg_sp0);

s32 TExpAssignReg(void *arg0, s32 arg1, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

void TExp2TevDesc(void *arg0, void *arg1, s32 *arg2, s32 *arg3, M2C_UNK arg_sp0) {
    s32 var_r0;
    u32 temp_r0;
    u32 temp_r0_2;
    s32 var_r0_10;
    s32 var_r0_11;
    s32 var_r0_12;
    u32 var_r0_13;
    s32 var_r0_14;
    s32 var_r0_15;
    s32 var_r0_16;
    s32 var_r0_17;
    s32 var_r0_18;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;
    s32 var_r0_6;
    s32 var_r0_7;
    s32 var_r0_8;
    s32 var_r0_9;

    if (arg0 == NULL) {
        __assert(&lbl_80350300, 0x509, &lbl_80350308);
    }
    if (arg1 == NULL) {
        __assert(&lbl_80350300, 0x50A, &lbl_80350314);
    }
    if (arg0 == NULL) {
        var_r0 = 0;
    } else {
        /* draft: did not compile: temp_r0 = arg0 + 0x10000; */
        if (temp_r0 == -1U) {
            var_r0 = 2;
        } else if (temp_r0 == -2U) {
            var_r0 = 3;
        } else {
            var_r0 = M2C_FIELD(arg0, s32 *, 0);
        }
    }
    if (var_r0 != 1) {
        __assert(&lbl_80350300, 0x50B, &lbl_802AA6E0 + 0x28);
    }
    M2C_FIELD(arg1, s32 *, 0) = 0;
    M2C_FIELD(arg1, s32 *, 4) = 1;
    M2C_FIELD(arg1, u32 *, 0x74) = (u32) M2C_FIELD(arg0, u32 *, 0x64);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x64) == 0U) {
        M2C_FIELD(arg1, s32 *, 0xC) = 0xFF;
        M2C_FIELD(arg1, s32 *, 0x10) = 0xFF;
    }
    var_r0_2 = M2C_FIELD(arg0, u8 *, 0x68);
    if (var_r0_2 == 0xFF) {
        var_r0_2 = 0xFF;
    }
    M2C_FIELD(arg1, s32 *, 0x14) = (s32) var_r0_2;
    var_r0_3 = M2C_FIELD(arg0, u8 *, 0x1F);
    if (var_r0_3 == 0xFF) {
        var_r0_3 = 0;
    }
    M2C_FIELD(arg1, s32 *, 0x64) = (s32) var_r0_3;
    var_r0_4 = M2C_FIELD(arg0, u8 *, 0x1E);
    if (var_r0_4 == 0xFF) {
        var_r0_4 = 0;
    }
    M2C_FIELD(arg1, s32 *, 0x68) = (s32) var_r0_4;
    var_r0_5 = M2C_FIELD(arg0, u8 *, 0x20);
    if (var_r0_5 == 0xFF) {
        var_r0_5 = 0;
    }
    M2C_FIELD(arg1, s32 *, 0x6C) = (s32) var_r0_5;
    var_r0_6 = M2C_FIELD(arg0, u8 *, 0x21);
    if (var_r0_6 == 0xFF) {
        var_r0_6 = 0;
    }
    M2C_FIELD(arg1, s32 *, 0x70) = (s32) var_r0_6;
    if (((M2C_FIELD(arg0, u8 *, 0xD)) == 0xFF) || (((s32) M2C_FIELD(arg0, s32 *, 8) == 0) && (temp_r0_2 = M2C_FIELD(arg0, u8 *, 0x19), ((temp_r0_2 == 8) == 0)) && (temp_r0_2 != 9) && (temp_r0_2 != 0xA) && (temp_r0_2 != 0xB) && (temp_r0_2 != 0xC) && (temp_r0_2 != 0xD))) {
        M2C_FIELD(arg1, s32 *, 0x18) = 0;
        M2C_FIELD(arg1, s32 *, 0x1C) = 0xF;
        M2C_FIELD(arg1, s32 *, 0x20) = 0xF;
        M2C_FIELD(arg1, s32 *, 0x24) = 0xF;
        if ((s32) *arg2 != 0) {
            *arg2 = 0;
            M2C_FIELD(arg1, s32 *, 0x28) = 0xF;
        } else {
            M2C_FIELD(arg1, s32 *, 0x28) = 0;
        }
        M2C_FIELD(arg1, s32 *, 0x2C) = 0;
        M2C_FIELD(arg1, s32 *, 0x30) = 0;
        M2C_FIELD(arg1, s8 *, 0x34) = 0;
        M2C_FIELD(arg1, s32 *, 0x38) = 0;
    } else {
        M2C_FIELD(arg1, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, u8 *, 0xD));
        var_r0_7 = M2C_FIELD(arg0, u8 *, 0x26);
        if (var_r0_7 == 0xFF) {
            var_r0_7 = 0xF;
        }
        M2C_FIELD(arg1, s32 *, 0x1C) = (s32) var_r0_7;
        var_r0_8 = M2C_FIELD(arg0, u8 *, 0x2E);
        if (var_r0_8 == 0xFF) {
            var_r0_8 = 0xF;
        }
        M2C_FIELD(arg1, s32 *, 0x20) = (s32) var_r0_8;
        var_r0_9 = M2C_FIELD(arg0, u8 *, 0x36);
        if (var_r0_9 == 0xFF) {
            var_r0_9 = 0xF;
        }
        M2C_FIELD(arg1, s32 *, 0x24) = (s32) var_r0_9;
        var_r0_10 = M2C_FIELD(arg0, u8 *, 0x3E);
        if (var_r0_10 == 0xFF) {
            var_r0_10 = 0xF;
        }
        M2C_FIELD(arg1, s32 *, 0x28) = (s32) var_r0_10;
        var_r0_11 = M2C_FIELD(arg0, u8 *, 0x10);
        if (var_r0_11 == 0xFF) {
            var_r0_11 = 0;
        }
        M2C_FIELD(arg1, s32 *, 0x2C) = (s32) var_r0_11;
        var_r0_12 = M2C_FIELD(arg0, u8 *, 0xF);
        if (var_r0_12 == 0xFF) {
            var_r0_12 = 0;
        }
        M2C_FIELD(arg1, s32 *, 0x30) = (s32) var_r0_12;
        M2C_FIELD(arg1, s8 *, 0x34) = (s8) (M2C_FIELD(arg0, u8 *, 0xE) != 0);
        if ((u8) M2C_FIELD(arg0, u8 *, 0xC) == 0xFF) {
            __assert(&lbl_80350300, 0x54A, &lbl_802AA6E0 + 0x2F8);
        }
        M2C_FIELD(arg1, s32 *, 0x38) = (s32) *(&lbl_802AA6E0 + 0x2E8 + (M2C_FIELD(arg0, u8 *, 0xC) * 4));
        if ((s32) M2C_FIELD(arg1, s32 *, 0x38) == 0) {
            *arg2 = 0;
        }
    }
    if (((M2C_FIELD(arg0, u8 *, 0x19)) == 0xFF) || ((s32) M2C_FIELD(arg0, s32 *, 0x14) == 0)) {
        M2C_FIELD(arg1, s32 *, 0x3C) = 0;
        M2C_FIELD(arg1, s32 *, 0x40) = 7;
        M2C_FIELD(arg1, s32 *, 0x44) = 7;
        M2C_FIELD(arg1, s32 *, 0x48) = 7;
        if ((s32) *arg3 != 0) {
            *arg3 = 0;
            M2C_FIELD(arg1, s32 *, 0x4C) = 7;
        } else {
            M2C_FIELD(arg1, s32 *, 0x4C) = 0;
        }
        M2C_FIELD(arg1, s32 *, 0x50) = 0;
        M2C_FIELD(arg1, s32 *, 0x54) = 0;
        M2C_FIELD(arg1, s8 *, 0x58) = 0;
        M2C_FIELD(arg1, s32 *, 0x5C) = 0;
    } else {
        M2C_FIELD(arg1, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, u8 *, 0x19));
        var_r0_13 = M2C_FIELD(arg0, u8 *, 0x46);
        if (var_r0_13 == 0xFF) {
            var_r0_13 = 7;
        }
        M2C_FIELD(arg1, s32 *, 0x40) = (s32) var_r0_13;
        var_r0_14 = M2C_FIELD(arg0, u8 *, 0x4E);
        if (var_r0_14 == 0xFF) {
            var_r0_14 = 7;
        }
        M2C_FIELD(arg1, s32 *, 0x44) = (s32) var_r0_14;
        var_r0_15 = M2C_FIELD(arg0, u8 *, 0x56);
        if (var_r0_15 == 0xFF) {
            var_r0_15 = 7;
        }
        M2C_FIELD(arg1, s32 *, 0x48) = (s32) var_r0_15;
        var_r0_16 = M2C_FIELD(arg0, u8 *, 0x5E);
        if (var_r0_16 == 0xFF) {
            var_r0_16 = 7;
        }
        M2C_FIELD(arg1, s32 *, 0x4C) = (s32) var_r0_16;
        var_r0_17 = M2C_FIELD(arg0, u8 *, 0x1C);
        if (var_r0_17 == 0xFF) {
            var_r0_17 = 0;
        }
        M2C_FIELD(arg1, s32 *, 0x50) = (s32) var_r0_17;
        var_r0_18 = M2C_FIELD(arg0, u8 *, 0x1B);
        if (var_r0_18 == 0xFF) {
            var_r0_18 = 0;
        }
        M2C_FIELD(arg1, s32 *, 0x54) = (s32) var_r0_18;
        M2C_FIELD(arg1, s8 *, 0x58) = (s8) (M2C_FIELD(arg0, u8 *, 0x1A) != 0);
        if ((u8) M2C_FIELD(arg0, u8 *, 0x18) == 0xFF) {
            __assert(&lbl_80350300, 0x56E, &lbl_802AA6E0 + 0x314);
        }
        M2C_FIELD(arg1, s32 *, 0x5C) = (s32) *(&lbl_802AA6E0 + 0x2E8 + (M2C_FIELD(arg0, u8 *, 0x18) * 4));
        if ((s32) M2C_FIELD(arg1, s32 *, 0x5C) == 0) {
            *arg3 = 0;
        }
    }
    M2C_FIELD(arg1, s32 *, 0x60) = 0;
}

void HSD_TExpSetReg(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void HSD_TExpSetupTev(void *arg0, s32 arg1) {
    void *temp_r3;
    void *var_r31;

    var_r31 = arg0;
    /* draft: did not compile: HSD_TExpSetReg(arg1); */
loop_4:
    if (var_r31 != NULL) {
        temp_r3 = M2C_FIELD(var_r31, void **, 0x74);
        if (temp_r3 != NULL) {
            M2C_FIELD(var_r31, s32 *, 0x10) = (s32) M2C_FIELD(temp_r3, s32 *, 0xC);
            M2C_FIELD(var_r31, s32 *, 0xC) = (s32) M2C_FIELD(M2C_FIELD(var_r31, void **, 0x74), s32 *, 0xA4);
        }
        HSD_StateAssignTev();
        HSD_SetupTevStage(var_r31);
        var_r31 = M2C_FIELD(var_r31, void **, 0);
        goto loop_4;
    }
}

s32 HSD_TExpCompile(void *arg0, void **arg1, s32 *arg2, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

void HSD_TExpFreeTevDesc(M2C_UNK *arg0) {
    M2C_UNK *temp_r31;
    M2C_UNK *var_r3;

    var_r3 = arg0;
loop_2:
    if (var_r3 != NULL) {
        /* draft: did not compile: temp_r31 = *var_r3; */
        hsdFreeMemPiece(0x78);
        var_r3 = temp_r31;
        goto loop_2;
    }
}

s32 assign_reg(s32 arg0, s32 arg2, s32 arg3, M2C_UNK arg_sp0) {
    s32 unkspB;
    s32 unkspF;
    u8 spC;
    u8 sp8;
    s32 *var_r29;
    s32 temp_r31;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 var_ctr;
    s32 var_ctr_2;
    s32 var_r27;
    s32 var_r28;
    s32 var_r25;
    s32 var_r26;
    s32 var_r5;
    s32 var_r5_2;
    u8 *var_r3;
    u8 *var_r3_2;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;
    void *temp_r6;
    void *var_r30;

    var_r28 = arg0 - 1;
    spC = lbl_80352A88;
    /* draft: did not compile: var_r29 = arg3 + (var_r28 * 4); */
    var_r26 = 4;
    sp8 = lbl_80352A8C;
    var_r25 = 4;
loop_22:
    if (var_r28 >= 0) {
        var_r27 = 0;
        temp_r31 = *var_r29 * 0x28;
        /* draft: did not compile: var_r30 = *(arg2 + temp_r31); */
        do {
            if (HSD_TExpGetType(M2C_FIELD(var_r30, void **, 0x28)) == 1) {
                if ((u8) M2C_FIELD(var_r30, u8 *, 0x25) == 1) {
                    temp_r5 = M2C_FIELD(M2C_FIELD(var_r30, void **, 0x28), u8 *, 0xC);
                    *(&spC + temp_r5) = *(&spC + temp_r5) - 1;
                } else {
                    temp_r5_2 = M2C_FIELD(M2C_FIELD(var_r30, void **, 0x28), u8 *, 0x18);
                    *(&sp8 + temp_r5_2) = *(&sp8 + temp_r5_2) - 1;
                }
            }
            if (HSD_TExpGetType(M2C_FIELD(var_r30, void **, 0x48)) == 1) {
                temp_r5_3 = M2C_FIELD(M2C_FIELD(var_r30, void **, 0x48), u8 *, 0x18);
                *(&sp8 + temp_r5_3) = *(&sp8 + temp_r5_3) - 1;
            }
            var_r27 += 1;
            /* draft: did not compile: var_r30 += 8; */
        } while (var_r27 < 4);
        /* draft: did not compile: temp_r6 = *(arg2 + temp_r31); */
        temp_r4 = M2C_FIELD(temp_r6, s32 *, 8);
        if (temp_r4 > 0) {
            /* draft: did not compile: var_r3 = &unkspF; */
            var_r5 = 3;
            var_ctr = 4;
loop_11:
            if ((u8) *var_r3 == 0) {
                *(&spC + var_r5) = (s8) temp_r4;
                M2C_FIELD(temp_r6, s8 *, 0xC) = var_r5;
                if (var_r26 > var_r5) {
                    var_r26 = var_r5;
                }
            } else {
                var_r3 -= 1;
                var_r5 -= 1;
                var_ctr -= 1;
                if (var_ctr != 0) {
                    goto loop_11;
                }
            }
        }
        temp_r4_2 = M2C_FIELD(temp_r6, s32 *, 0x14);
        if (temp_r4_2 > 0) {
            /* draft: did not compile: var_r3_2 = &unkspB; */
            var_r5_2 = 3;
            var_ctr_2 = 4;
loop_17:
            if ((u8) *var_r3_2 == 0) {
                *(&sp8 + var_r5_2) = (s8) temp_r4_2;
                M2C_FIELD(temp_r6, s8 *, 0x18) = var_r5_2;
                if (var_r25 > var_r5_2) {
                    var_r25 = var_r5_2;
                }
            } else {
                var_r3_2 -= 1;
                var_r5_2 -= 1;
                var_ctr_2 -= 1;
                if (var_ctr_2 != 0) {
                    goto loop_17;
                }
            }
        }
        var_r29 -= 4;
        var_r28 -= 1;
        goto loop_22;
    }
    return (4 - var_r26) + (4 - var_r25);
}

void order_dag(s32 arg0, s32 arg1, s32 *arg2, s32 arg3, s32 arg4, u8 arg5, s32 arg6, s32 arg7, M2C_UNK arg_sp0, void *arg_sp8, s32 *arg_spC, void *arg_sp10) { } /* draft: stub */

void CalcDistance(u32 *arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0) { } /* draft: stub */

s32 HSD_TExpMakeDag(void *arg0, s32 arg1, M2C_UNK arg_sp0) { return 0; } /* draft: stub */
