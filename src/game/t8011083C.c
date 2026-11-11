/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK HSD_TExpRef(void *, u8);
M2C_UNK HSD_TExpUnref(void *, u8);
s32 HSD_TExpGetType(void *);
s32 fn_8010FB64(s32);
s32 SimplifyThis(s32);
M2C_UNK OSFillFPUContext(M2C_UNK *, u16);
extern M2C_UNK lbl_8031EEB8;
M2C_UNK OSReport();
extern M2C_UNK lbl_802AAB00;
extern M2C_UNK lbl_80350338;
M2C_UNK fn_800C5B7C(s32, s32, s32);
extern M2C_UNK lbl_802AAB18;
extern s32 lbl_80350D08;

s32 fn_8011083C(void *arg0, M2C_UNK arg_sp0);
void CalcTevRange(void *arg0);
s32 HSD_TExpSimplify(s32 arg0);
s32 HSD_TExpSimplify2(void *arg0, M2C_UNK arg_sp0);
void HSD_SaveContext(void);
void __assert(s32 arg0, s32 arg1, s32 arg2);
void HSD_Panic(s32 arg0, s32 arg1, s32 arg2);

s32 fn_8011083C(void *arg0, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

void CalcTevRange(void *arg0) {
    s32 var_ctr;
    s32 var_ctr_2;
    u32 var_r4;
    u32 var_r4_2;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r0_3;
    u8 temp_r0_4;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *var_r3;
    void *var_r3_2;

    var_r4 = 0;
    if ((u8) M2C_FIELD(arg0, u8 *, 0x3D) != 7) {
        if (HSD_TExpGetType(M2C_FIELD(arg0, void **, 0x40)) != 1) {
            var_r4 = 0x100;
            goto block_13;
        }
        if ((u8) M2C_FIELD(arg0, u8 *, 0x3D) == 1) {
            temp_r3 = M2C_FIELD(arg0, void **, 0x40);
            if (((u8) M2C_FIELD(temp_r3, u8 *, 0xE) != 1) && ((u8) M2C_FIELD(temp_r3, u8 *, 0x11) == 1)) {
                M2C_FIELD(arg0, s8 *, 0x11) = 1;
            } else {
                var_r4 = 0x100;
                goto block_13;
            }
        } else {
            temp_r3_2 = M2C_FIELD(arg0, void **, 0x40);
            if (((u8) M2C_FIELD(temp_r3_2, u8 *, 0x1A) != 1) && ((u8) M2C_FIELD(temp_r3_2, u8 *, 0x1D) == 1)) {
                M2C_FIELD(arg0, s8 *, 0x11) = 1;
            } else {
                var_r4 = 0x100;
                goto block_13;
            }
        }
    } else {
block_13:
        var_r3 = arg0;
        var_ctr = 3;
loop_14:
        if (M2C_FIELD(var_r3, u8 *, 0x25) != 7) {
            if ((u8) M2C_FIELD(arg0, u8 *, 0xD) == 1) {
                M2C_FIELD(arg0, s8 *, 0x11) = 1;
            } else {
                var_r4 = var_r4 + 0x100;
                goto block_19;
            }
        } else {
            /* draft: did not compile: var_r3 += 8; */
            var_ctr = var_ctr - 1;
            if (var_ctr == 0) {
block_19:
                temp_r0 = M2C_FIELD(arg0, u8 *, 0xF);
                switch ((s32) temp_r0) {            /* switch 1; irregular */
                case 1:                             /* switch 1 */
                    var_r4 = var_r4 + 0x80;
                case 3:                default:                            /* switch 1 */
                    temp_r0_2 = M2C_FIELD(arg0, u8 *, 0x10);
                    switch ((s32) temp_r0_2) {      /* switch 2; irregular */
                    case 1:                         /* switch 2 */
                        var_r4 = var_r4 * 2;
                        break;
                    case 2:                         /* switch 2 */
                        var_r4 = var_r4 * 4;
                        break;
                    case 3:                         /* switch 2 */
                        var_r4 = (u32) ((s32) ((var_r4 >> 0x1FU) + var_r4) >> 1);
                        break;
                    }
                    M2C_FIELD(arg0, s8 *, 0x11) = (s8) ((s32) var_r4 > 0x100);
                    break;
                case 2:                             /* switch 1 */
                    M2C_FIELD(arg0, s8 *, 0x11) = 1;
                    break;
                }
            } else {
                goto loop_14;
            }
        }
    }
    var_r4_2 = 0;
    if ((u8) M2C_FIELD(arg0, u8 *, 0x5D) != 7) {
        if (HSD_TExpGetType(M2C_FIELD(arg0, void **, 0x60)) != 1) {
            var_r4_2 = 0x100;
            goto block_43;
        }
        temp_r3_3 = M2C_FIELD(arg0, void **, 0x60);
        if (((u8) M2C_FIELD(temp_r3_3, u8 *, 0x1A) != 1) && ((u8) M2C_FIELD(temp_r3_3, u8 *, 0x1D) == 1)) {
            M2C_FIELD(arg0, s8 *, 0x1D) = 1;
            return;
        }
        var_r4_2 = 0x100;
        goto block_43;
    }
block_43:
    var_r3_2 = arg0;
    var_ctr_2 = 3;
loop_44:
    if (M2C_FIELD(var_r3_2, u8 *, 0x45) != 7) {
        if ((u8) M2C_FIELD(arg0, u8 *, 0x19) == 1) {
            M2C_FIELD(arg0, s8 *, 0x1D) = 1;
            return;
        }
        var_r4_2 = var_r4_2 + 0x100;
        goto block_49;
    }
    /* draft: did not compile: var_r3_2 += 8; */
    var_ctr_2 = var_ctr_2 - 1;
    if (var_ctr_2 == 0) {
block_49:
        temp_r0_3 = M2C_FIELD(arg0, u8 *, 0x1B);
        switch ((s32) temp_r0_3) {                  /* switch 3; irregular */
        case 1:                                     /* switch 3 */
            var_r4_2 = var_r4_2 + 0x80;
        case 3:        default:                                    /* switch 3 */
            temp_r0_4 = M2C_FIELD(arg0, u8 *, 0x1C);
            switch ((s32) temp_r0_4) {              /* switch 4; irregular */
            case 1:                                 /* switch 4 */
                var_r4_2 = var_r4_2 * 2;
                break;
            case 2:                                 /* switch 4 */
                var_r4_2 = var_r4_2 * 4;
                break;
            case 3:                                 /* switch 4 */
                var_r4_2 = (u32) ((s32) ((var_r4_2 >> 0x1FU) + var_r4_2) >> 1);
                break;
            }
            M2C_FIELD(arg0, s8 *, 0x1D) = (s8) ((s32) var_r4_2 > 0x100);
            return;
        case 2:                                     /* switch 3 */
            M2C_FIELD(arg0, s8 *, 0x1D) = 1;
            return;
        }
    } else {
        goto loop_44;
    }
}

s32 HSD_TExpSimplify(s32 arg0) {
    s32 var_r30;

    var_r30 = 0;
    if (HSD_TExpGetType((void *)(0)) != 1) {
        return 0;
    }
    if (fn_8010FB64(arg0) != 0) {
        var_r30 = 1;
    }
    if (SimplifyThis(arg0) != 0) {
        var_r30 = 1;
    }
    if (0 /* draft: did not compile */) {
        var_r30 = 1;
    }
    /* draft: did not compile: CalcTevRange(arg0); */
    return var_r30;
}

s32 HSD_TExpSimplify2(void *arg0, M2C_UNK arg_sp0) {
    s32 var_r30;
    s32 var_r30_2;
    s32 var_r3;
    s32 var_r3_2;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r27_2;
    u8 temp_r28;
    u8 temp_r3;
    u8 temp_r3_2;
    void *temp_r27;
    void *temp_r28_2;
    void *var_r29;
    void *var_r29_2;

    var_r30 = 0;
    var_r29 = arg0;
    do {
        temp_r27 = M2C_FIELD(var_r29, void **, 0x28);
        temp_r28 = M2C_FIELD(var_r29, u8 *, 0x25);
        if (((u8) M2C_FIELD(var_r29, u8 *, 0x24) == 1) && (temp_r28 == 1)) {
            var_r3 = 0;
            if (((u8) M2C_FIELD(temp_r27, u8 *, 0xD) == 0) && ((u8) M2C_FIELD(temp_r27, u8 *, 0x25) == 7) && ((u8) M2C_FIELD(temp_r27, u8 *, 0x2D) == 7) && ((u8) M2C_FIELD(temp_r27, u8 *, 0xF) == 0) && ((u8) M2C_FIELD(temp_r27, u8 *, 0x10) == 0)) {
                var_r3 = 1;
            }
            if (var_r3 != 0) {
                temp_r0 = M2C_FIELD(temp_r27, u8 *, 0x3C);
                switch ((s32) temp_r0) {            /* switch 1; irregular */
                case 6:                             /* switch 1 */
                    temp_r3 = M2C_FIELD(arg0, u8 *, 0x20);
                    if (temp_r3 == 0xFF) {
                        M2C_FIELD(arg0, u8 *, 0x20) = (u8) M2C_FIELD(temp_r27, u8 *, 0x20);
                        goto block_17;
                    }
                    if (temp_r3 == (u8) M2C_FIELD(temp_r27, u8 *, 0x20)) {
                    case 5:                         /* switch 1 */
block_17:
                        M2C_FIELD(var_r29, u8 *, 0x24) = (s32) M2C_FIELD(temp_r27, u8 *, 0x3C);
                        M2C_FIELD(var_r29, void **, 0x28) = (void *) M2C_FIELD(temp_r27, void **, 0x40);
                        HSD_TExpRef(M2C_FIELD(var_r29, void **, 0x28), M2C_FIELD(var_r29, u8 *, 0x25));
                        HSD_TExpUnref(temp_r27, temp_r28);
                    }
                    break;
                }
            }
        }
        var_r30 += 1;
        /* draft: did not compile: var_r29 += 8; */
    } while (var_r30 < 4);
    var_r30_2 = 0;
    var_r29_2 = arg0;
    do {
        temp_r28_2 = M2C_FIELD(var_r29_2, void **, 0x48);
        temp_r27_2 = M2C_FIELD(var_r29_2, u8 *, 0x45);
        if ((u8) M2C_FIELD(var_r29_2, u8 *, 0x44) == 1) {
            var_r3_2 = 0;
            if (((u8) M2C_FIELD(temp_r28_2, u8 *, 0x19) == 0) && ((u8) M2C_FIELD(temp_r28_2, u8 *, 0x45) == 7) && ((u8) M2C_FIELD(temp_r28_2, u8 *, 0x4D) == 7) && ((u8) M2C_FIELD(temp_r28_2, u8 *, 0x1B) == 0) && ((u8) M2C_FIELD(temp_r28_2, u8 *, 0x1C) == 0)) {
                var_r3_2 = 1;
            }
            if (var_r3_2 != 0) {
                temp_r0_2 = M2C_FIELD(temp_r28_2, u8 *, 0x5C);
                switch ((s32) temp_r0_2) {          /* switch 2; irregular */
                case 6:                             /* switch 2 */
                    temp_r3_2 = M2C_FIELD(arg0, u8 *, 0x21);
                    if (temp_r3_2 == 0xFF) {
                        M2C_FIELD(arg0, u8 *, 0x21) = (u8) M2C_FIELD(temp_r28_2, u8 *, 0x21);
                        goto block_35;
                    }
                    if (temp_r3_2 == (u8) M2C_FIELD(temp_r28_2, u8 *, 0x21)) {
                    case 5:                         /* switch 2 */
block_35:
                        M2C_FIELD(var_r29_2, u8 *, 0x44) = (s32) M2C_FIELD(temp_r28_2, u8 *, 0x5C);
                        M2C_FIELD(var_r29_2, void **, 0x48) = (void *) M2C_FIELD(temp_r28_2, void **, 0x60);
                        HSD_TExpRef(M2C_FIELD(var_r29_2, void **, 0x48), M2C_FIELD(var_r29_2, u8 *, 0x45));
                        HSD_TExpUnref(temp_r28_2, temp_r27_2);
                    }
                    break;
                }
            }
        }
        var_r30_2 += 1;
        /* draft: did not compile: var_r29_2 += 8; */
    } while (var_r30_2 < 4);
    return 0;
}

void HSD_SaveContext(void) {
    s32 saved_reg_lr;
    u16 temp_r4;

    M2C_ERROR(/* unknown instruction: mtsprg 0x0, $r3 */);
    M2C_FIELD(&lbl_8031EEB8, s32 *, 0xC) = (s32) M2C_ERROR(/* unknown instruction: mfsprg $r4, 0x0 */);
    M2C_FIELD(&lbl_8031EEB8, s32 *, 0x1A4) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r4, GQR0 */);
    M2C_FIELD(&lbl_8031EEB8, s32 *, 0x1A8) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r4, GQR1 */);
    M2C_FIELD(&lbl_8031EEB8, s32 *, 0x1AC) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r4, GQR2 */);
    M2C_FIELD(&lbl_8031EEB8, s32 *, 0x1B0) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r4, GQR3 */);
    M2C_FIELD(&lbl_8031EEB8, s32 *, 0x1B4) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r4, GQR4 */);
    M2C_FIELD(&lbl_8031EEB8, s32 *, 0x1B8) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r4, GQR5 */);
    M2C_FIELD(&lbl_8031EEB8, s32 *, 0x1BC) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r4, GQR6 */);
    M2C_FIELD(&lbl_8031EEB8, s32 *, 0x1C0) = (s32) M2C_ERROR(/* unknown instruction: mfspr $r4, GQR7 */);
    M2C_FIELD(&lbl_8031EEB8, s32 *, 0x80) = (s32) M2C_ERROR(/* unknown instruction: mfcr $r4 */);
    M2C_FIELD(&lbl_8031EEB8, s32 *, 0x84) = (s32) saved_reg_lr;
    M2C_FIELD(&lbl_8031EEB8, s32 *, 0x88) = (s32) M2C_ERROR(/* Read from unset register $ctr */);
    M2C_FIELD(&lbl_8031EEB8, s32 *, 0x8C) = (s32) M2C_ERROR(/* unknown instruction: mfxer $r4 */);
    M2C_FIELD(&lbl_8031EEB8, s32 *, 0x198) = (s32) M2C_ERROR(/* unknown instruction: mfsrr0 $r4 */);
    M2C_FIELD(&lbl_8031EEB8, s32 *, 0x19C) = (s32) M2C_ERROR(/* unknown instruction: mfsrr1 $r4 */);
    temp_r4 = M2C_FIELD(&lbl_8031EEB8, u16 *, 0x1A2) | 1;
    M2C_FIELD(&lbl_8031EEB8, u16 *, 0x1A2) = temp_r4;
    OSFillFPUContext(&lbl_8031EEB8, temp_r4);
}

void __assert(s32 arg0, s32 arg1, s32 arg2) {
    OSReport(&lbl_802AAB00, arg2, &lbl_802AAB00);
    /* draft: did not compile: HSD_Panic(arg0, arg1, &lbl_80350338); */
}

void HSD_Panic(s32 arg0, s32 arg1, s32 arg2) {
    if (((M2C_UNK (*)(M2C_UNK *)) lbl_80350D08) != NULL) {
        HSD_SaveContext();
        OSReport(&lbl_802AAB18, arg2, arg0, arg1);
        /* draft: did not compile: lbl_80350D08(&lbl_8031EEB8); */
    }
    fn_800C5B7C(arg0, arg1, arg2);
}
