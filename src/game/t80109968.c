/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK OSReport(void *, u32);
void *HSD_SListAllocAndAppend();
void *HSD_SListRemove(void *);
f32 HSD_Randf();
s32 HSD_Randi(s32);
M2C_UNK __assert(M2C_UNK *, M2C_UNK, M2C_UNK *);
M2C_UNK HSD_Panic(M2C_UNK *, M2C_UNK, M2C_UNK *);
f64 ArcTan(f32);
f64 Cos(f32);
f64 Sin(f32);
f64 Tan(f32);
f64 ArcCos(f32);
f64 ArcSin(f32);
f64 ArcTan2();
f64 fn_80156E50(f32);
f64 fn_80156E70(f32, f32);
f64 fn_80156E90(f32);
f64 Pow(f32, f32);
extern M2C_UNK lbl_802AA498;
extern M2C_UNK lbl_803502D8;
extern M2C_UNK lbl_803502DC;
extern f32 lbl_80352178;
extern f64 lbl_80352180;
extern f64 lbl_80352188;
extern f64 lbl_80352190;
extern f64 lbl_80352198;
extern f32 lbl_803521A0;
extern f32 lbl_803521A4;
extern M2C_UNK lbl_802AA574;
extern M2C_UNK lbl_802AA5AC;
extern M2C_UNK lbl_803502E8;
void *fn_80109570(s32, M2C_UNK, M2C_UNK);
extern M2C_UNK lbl_802AA640;
extern void *lbl_80350CF8;
extern s32 lbl_80350CFC;
extern M2C_UNK lbl_802AA538;
extern s32 lbl_80350D00;
extern M2C_UNK lbl_802AA670;
extern M2C_UNK lbl_803502F0;
s32 HSD_HashSearch(u32, M2C_UNK);

f32 HSD_ByteCodeEval(u8 *arg0, s32 arg1, u32 arg2, M2C_UNK arg_sp0);
void hsdInitClassInfo(void *arg0, void *arg1, s32 arg2, s32 arg3, s16 arg4, s16 arg5);
s32 GetMemoryEntry(s32 arg0);
M2C_UNK *hsdAllocMemPiece(s32 arg0);
void hsdFreeMemPiece(M2C_UNK *arg0, s32 arg1);
void _hsdClassAlloc(void *arg0);
s32 fn_8010B4F4(void);
void fn_8010B4FC(void);
void _hsdClassDestroy(M2C_UNK *arg0);
void _hsdClassAmnesia(void *arg0);
void _hsdClassInfoInit(void);
void **hsdNew(void *arg0);
s32 fn_8010B6FC(void **arg0, void *arg1);
s32 hsdSearchClassInfo(s32 arg0);

f32 HSD_ByteCodeEval(u8 *arg0, s32 arg1, u32 arg2, M2C_UNK arg_sp0) {
    s32 saved_reg_r30;
    s32 saved_reg_r29;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f0;
    f32 temp_f0_10;
    f32 temp_f0_11;
    f32 temp_f0_12;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f0_8;
    f32 temp_f0_9;
    f32 temp_f1;
    f32 var_f1;
    f32 var_f4;
    f64 temp_f1_2;
    f64 temp_f1_3;
    f64 temp_f1_4;
    s32 temp_r0_10;
    s32 temp_r0_11;
    s32 temp_r0_12;
    s32 temp_r0_13;
    s32 temp_r0_14;
    s32 temp_r0_15;
    s32 temp_r0_16;
    s32 temp_r0_17;
    s32 temp_r0_18;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r0_7;
    s32 temp_r0_8;
    s32 temp_r0_9;
    s32 temp_r22;
    s32 temp_r22_10;
    s32 temp_r22_11;
    s32 temp_r22_12;
    s32 temp_r22_13;
    s32 temp_r22_14;
    s32 temp_r22_15;
    s32 temp_r22_16;
    s32 temp_r22_17;
    s32 temp_r22_18;
    s32 temp_r22_19;
    s32 temp_r22_20;
    s32 temp_r22_2;
    s32 temp_r22_3;
    s32 temp_r22_4;
    s32 temp_r22_5;
    s32 temp_r22_6;
    s32 temp_r22_7;
    s32 temp_r22_8;
    s32 temp_r22_9;
    s32 temp_r23;
    s32 temp_r3_23;
    s32 temp_r4;
    s32 var_r0;
    s32 var_r27;
    s32 var_r30;
    s32 var_r4_2;
    s32 var_r4_3;
    u32 temp_r0_6;
    u32 var_r22;
    u32 var_r29;
    u32 var_r3;
    u8 *var_r28;
    u8 temp_r0;
    void *temp_r3;
    void *temp_r3_10;
    void *temp_r3_11;
    void *temp_r3_12;
    void *temp_r3_13;
    void *temp_r3_14;
    void *temp_r3_15;
    void *temp_r3_16;
    void *temp_r3_17;
    void *temp_r3_18;
    void *temp_r3_19;
    void *temp_r3_20;
    void *temp_r3_21;
    void *temp_r3_22;
    void *temp_r3_24;
    void *temp_r3_25;
    void *temp_r3_26;
    void *temp_r3_27;
    void *temp_r3_28;
    void *temp_r3_29;
    void *temp_r3_2;
    void *temp_r3_30;
    void *temp_r3_31;
    void *temp_r3_32;
    void *temp_r3_33;
    void *temp_r3_34;
    void *temp_r3_35;
    void *temp_r3_36;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r3_6;
    void *temp_r3_7;
    void *temp_r3_8;
    void *temp_r3_9;
    void *var_r24;
    void *var_r4;

    var_r29 = saved_reg_r29;
    var_r30 = saved_reg_r30;
    var_r28 = arg0;
    var_r24 = NULL;
    var_r27 = 0;
    if (var_r28 == NULL) {
        return lbl_80352178;
    }
loop_2:
    if (var_r27 > 0) {
        temp_r0 = *var_r28;
        var_r27 -= 1;
        var_r28 += 1;
        var_r29 = ((var_r29 << 8) & ~0xFF) | (temp_r0 & 0xFF);
        if (var_r27 == 0) {
            switch (var_r30) {                      /* switch 1; irregular */
            case 0x2:                               /* switch 1 */
                if (var_r29 >= arg2) {
                    __assert(&lbl_802AA498, 0x119, &lbl_802AA498 + 0xC);
                }
                /* draft: did not compile: var_r24 = HSD_SListAllocAndAppend(var_r24, *(arg1 + (var_r29 * 4))); */
                break;
            case 0x5:                               /* switch 1 */
                var_r22 = 0U;
loop_21:
                if (var_r22 < var_r29) {
                    var_r24 = HSD_SListRemove(var_r24);
                    var_r22 += 1;
                    goto loop_21;
                }
                break;
            case 0x3C:                              /* switch 1 */
                var_r4 = var_r24;
                var_r3 = 0U;
loop_25:
                if ((var_r4 != NULL) && (var_r3 < var_r29)) {
                    var_r4 = M2C_FIELD(var_r4, void **, 0);
                    var_r3 += 1;
                    goto loop_25;
                }
                if (var_r4 == NULL) {
                    OSReport(&lbl_802AA498 + 0x20, var_r29);
                    HSD_Panic(&lbl_802AA498, 0x12B, &lbl_803502D8);
                } else {
                    var_r24 = HSD_SListAllocAndAppend(var_r24, M2C_FIELD(var_r4, u32 *, 4));
                }
                break;
            case 0x3:                               /* switch 1 */
                if (var_r24 == NULL) {
                    __assert(&lbl_802AA498, 0x133, &lbl_803502DC);
                }
                if ((s32) M2C_FIELD(var_r24, s32 *, 4) != 0) {
                    var_r28 += var_r29;
                }
                var_r24 = HSD_SListRemove(var_r24);
                break;
            case 0x4:                               /* switch 1 */
                var_r28 += var_r29;
                break;
            case 0x6:                               /* switch 1 */
                var_r24 = HSD_SListAllocAndAppend(var_r24, var_r29);
                break;
            case 0xFF:                              /* switch 1 */
                HSD_Panic(&lbl_802AA498, 0x143, &lbl_802AA498 + 0x48);
                /* fallthrough */
            default:                                /* switch 1 */
                HSD_Panic(&lbl_802AA498, 0x146, &lbl_802AA498 + 0x60);
                break;
            }
        }
        goto loop_2;
    }
    var_r30 = (s32) *var_r28;
    var_r28 += 1;
    if (var_r30 == 0x20) {
        if (var_r24 == NULL) {
            __assert(&lbl_802AA498, 0x227, &lbl_803502DC);
        }
        if ((u32) M2C_FIELD(var_r24, u32 *, 0) == 0U) {
            __assert(&lbl_802AA498, 0x227, &lbl_802AA498 + 0x78);
        }
        temp_r22 = M2C_FIELD(var_r24, s32 *, 4);
        temp_r3 = HSD_SListRemove(var_r24);
        var_r24 = temp_r3;
        M2C_FIELD(var_r24, s32 *, 4) = (s32) (M2C_FIELD(temp_r3, s32 *, 4) % temp_r22);
        goto loop_2;
    }
    if (var_r30 >= 0x20) {
        switch (var_r30) {                          /* switch 2; irregular */
        case 0x3C:                                  /* switch 2 */
        case 0xFF:                                  /* switch 2 */
block_122:
            var_r27 = 1;
            var_r29 = 0;
            break;
        case 0x28:                                  /* switch 2 */
            if (var_r24 == NULL) {
                __assert(&lbl_802AA498, 0x1D3, &lbl_803502DC);
            }
            temp_r0_2 = M2C_FIELD(var_r24, s32 *, 4);
            if (temp_r0_2 < 0) {
                M2C_FIELD(var_r24, s32 *, 4) = (s32) -temp_r0_2;
            }
            break;
        case 0x31:                                  /* switch 2 */
            if (var_r24 == NULL) {
                __assert(&lbl_802AA498, 0x1E0, &lbl_803502DC);
            }
            M2C_FIELD(var_r24, s32 *, 4) = (s32) (M2C_FIELD(var_r24, s32 *, 4) == 0);
            break;
        default:                                    /* switch 2 */
            if (var_r24 == NULL) {
                __assert(&lbl_802AA498, 0x22C, &lbl_803502DC);
            }
            if ((u32) M2C_FIELD(var_r24, u32 *, 0) == 0U) {
                __assert(&lbl_802AA498, 0x22C, &lbl_802AA498 + 0x78);
            }
            spC = M2C_BITWISE(f32, M2C_FIELD(var_r24, s32 *, 4));
            temp_r3_2 = HSD_SListRemove(var_r24);
            var_r24 = temp_r3_2;
            sp10 = (f32) Pow(M2C_FIELD(temp_r3_2, f32 *, 4), spC);
            M2C_FIELD(var_r24, f32 *, 4) = sp10;
            break;
        case 0x22:                                  /* switch 2 */
            if (var_r24 == NULL) {
                __assert(&lbl_802AA498, 0x232, &lbl_803502DC);
            }
            if ((u32) M2C_FIELD(var_r24, u32 *, 0) == 0U) {
                __assert(&lbl_802AA498, 0x232, &lbl_802AA498 + 0x78);
            }
            temp_f0 = M2C_BITWISE(f32, M2C_FIELD(var_r24, s32 *, 4));
            spC = temp_f0;
            temp_r3_3 = HSD_SListRemove(var_r24);
            var_r24 = temp_r3_3;
            if (M2C_FIELD(temp_r3_3, f32 *, 4) > temp_f0) {
                M2C_FIELD(var_r24, f32 *, 4) = spC;
            }
            break;
        case 0x23:                                  /* switch 2 */
            if (var_r24 == NULL) {
                __assert(&lbl_802AA498, 0x239, &lbl_803502DC);
            }
            if ((u32) M2C_FIELD(var_r24, u32 *, 0) == 0U) {
                __assert(&lbl_802AA498, 0x239, &lbl_802AA498 + 0x78);
            }
            temp_f0_2 = M2C_BITWISE(f32, M2C_FIELD(var_r24, s32 *, 4));
            spC = temp_f0_2;
            temp_r3_4 = HSD_SListRemove(var_r24);
            var_r24 = temp_r3_4;
            if (M2C_FIELD(temp_r3_4, f32 *, 4) < temp_f0_2) {
                M2C_FIELD(var_r24, f32 *, 4) = spC;
            }
            break;
        case 0x24:                                  /* switch 2 */
            if (var_r24 == NULL) {
                __assert(&lbl_802AA498, 0x240, &lbl_803502DC);
            }
            if ((u32) M2C_FIELD(var_r24, u32 *, 0) == 0U) {
                __assert(&lbl_802AA498, 0x240, &lbl_802AA498 + 0x78);
            }
            temp_r22_2 = M2C_FIELD(var_r24, s32 *, 4);
            temp_r3_5 = HSD_SListRemove(var_r24);
            temp_r0_3 = M2C_FIELD(temp_r3_5, s32 *, 4);
            var_r24 = temp_r3_5;
            if (temp_r0_3 > temp_r22_2) {
                M2C_FIELD(var_r24, s32 *, 4) = temp_r22_2;
            }
            break;
        case 0x25:                                  /* switch 2 */
            if (var_r24 == NULL) {
                __assert(&lbl_802AA498, 0x247, &lbl_803502DC);
            }
            if ((u32) M2C_FIELD(var_r24, u32 *, 0) == 0U) {
                __assert(&lbl_802AA498, 0x247, &lbl_802AA498 + 0x78);
            }
            temp_r22_3 = M2C_FIELD(var_r24, s32 *, 4);
            temp_r3_6 = HSD_SListRemove(var_r24);
            temp_r0_4 = M2C_FIELD(temp_r3_6, s32 *, 4);
            var_r24 = temp_r3_6;
            if (temp_r0_4 < temp_r22_3) {
                M2C_FIELD(var_r24, s32 *, 4) = temp_r22_3;
            }
            break;
        case 0x26:                                  /* switch 2 */
            if (var_r24 == NULL) {
                __assert(&lbl_802AA498, 0x24E, &lbl_803502DC);
            }
            if ((u32) M2C_FIELD(var_r24, u32 *, 0) == 0U) {
                __assert(&lbl_802AA498, 0x24E, &lbl_802AA498 + 0x78);
            }
            spC = M2C_BITWISE(f32, M2C_FIELD(var_r24, s32 *, 4));
            temp_r3_7 = HSD_SListRemove(var_r24);
            var_r24 = temp_r3_7;
            if (lbl_80352178 == spC) {
                M2C_ERROR(/* unknown instruction: cror eq, gt, eq */);
                if (M2C_FIELD(temp_r3_7, f32 *, 4) == lbl_80352178) {
                    var_f1 = lbl_803521A0;
                } else {
                    var_f1 = lbl_803521A4;
                }
            } else {
                var_f1 = (f32) ArcTan2();
            }
            sp10 = (f32) (lbl_80352188 * (f64) var_f1);
            M2C_FIELD(var_r24, f32 *, 4) = sp10;
            break;
        case 0x33:                                  /* switch 2 */
            if (var_r24 == NULL) {
                __assert(&lbl_802AA498, 0x254, &lbl_803502DC);
            }
            if ((u32) M2C_FIELD(var_r24, u32 *, 0) == 0U) {
                __assert(&lbl_802AA498, 0x254, &lbl_802AA498 + 0x78);
            }
            temp_f0_3 = M2C_BITWISE(f32, M2C_FIELD(var_r24, s32 *, 4));
            spC = temp_f0_3;
            temp_r3_8 = HSD_SListRemove(var_r24);
            var_r24 = temp_r3_8;
            M2C_FIELD(temp_r3_8, f32 *, 4) = M2C_BITWISE(f32, (M2C_FIELD(temp_r3_8, f32 *, 4) < temp_f0_3));
            break;
        case 0x34:                                  /* switch 2 */
            if (var_r24 == NULL) {
                __assert(&lbl_802AA498, 0x259, &lbl_803502DC);
            }
            if ((u32) M2C_FIELD(var_r24, u32 *, 0) == 0U) {
                __assert(&lbl_802AA498, 0x259, &lbl_802AA498 + 0x78);
            }
            temp_f0_4 = M2C_BITWISE(f32, M2C_FIELD(var_r24, s32 *, 4));
            spC = temp_f0_4;
            temp_r3_9 = HSD_SListRemove(var_r24);
            var_r24 = temp_r3_9;
            M2C_FIELD(temp_r3_9, f32 *, 4) = M2C_BITWISE(f32, (M2C_FIELD(temp_r3_9, f32 *, 4) > temp_f0_4));
            break;
        case 0x35:                                  /* switch 2 */
            if (var_r24 == NULL) {
                __assert(&lbl_802AA498, 0x25E, &lbl_803502DC);
            }
            if ((u32) M2C_FIELD(var_r24, u32 *, 0) == 0U) {
                __assert(&lbl_802AA498, 0x25E, &lbl_802AA498 + 0x78);
            }
            temp_f0_5 = M2C_BITWISE(f32, M2C_FIELD(var_r24, s32 *, 4));
            spC = temp_f0_5;
            temp_r3_10 = HSD_SListRemove(var_r24);
            var_r24 = temp_r3_10;
            M2C_ERROR(/* unknown instruction: cror eq, lt, eq */);
            M2C_FIELD(temp_r3_10, f32 *, 4) = M2C_BITWISE(f32, (M2C_FIELD(temp_r3_10, f32 *, 4) == temp_f0_5));
            break;
        case 0x36:                                  /* switch 2 */
            if (var_r24 == NULL) {
                __assert(&lbl_802AA498, 0x263, &lbl_803502DC);
            }
            if ((u32) M2C_FIELD(var_r24, u32 *, 0) == 0U) {
                __assert(&lbl_802AA498, 0x263, &lbl_802AA498 + 0x78);
            }
            temp_f0_6 = M2C_BITWISE(f32, M2C_FIELD(var_r24, s32 *, 4));
            spC = temp_f0_6;
            temp_r3_11 = HSD_SListRemove(var_r24);
            var_r24 = temp_r3_11;
            M2C_ERROR(/* unknown instruction: cror eq, gt, eq */);
            M2C_FIELD(temp_r3_11, f32 *, 4) = M2C_BITWISE(f32, (M2C_FIELD(temp_r3_11, f32 *, 4) == temp_f0_6));
            break;
        case 0x37:                                  /* switch 2 */
            if (var_r24 == NULL) {
                __assert(&lbl_802AA498, 0x268, &lbl_803502DC);
            }
            if ((u32) M2C_FIELD(var_r24, u32 *, 0) == 0U) {
                __assert(&lbl_802AA498, 0x268, &lbl_802AA498 + 0x78);
            }
            temp_f0_7 = M2C_BITWISE(f32, M2C_FIELD(var_r24, s32 *, 4));
            spC = temp_f0_7;
            temp_r3_12 = HSD_SListRemove(var_r24);
            var_r24 = temp_r3_12;
            M2C_FIELD(temp_r3_12, f32 *, 4) = M2C_BITWISE(f32, (M2C_FIELD(temp_r3_12, f32 *, 4) == temp_f0_7));
            break;
        case 0x38:                                  /* switch 2 */
            if (var_r24 == NULL) {
                __assert(&lbl_802AA498, 0x26D, &lbl_803502DC);
            }
            if ((u32) M2C_FIELD(var_r24, u32 *, 0) == 0U) {
                __assert(&lbl_802AA498, 0x26D, &lbl_802AA498 + 0x78);
            }
            temp_f0_8 = M2C_BITWISE(f32, M2C_FIELD(var_r24, s32 *, 4));
            spC = temp_f0_8;
            temp_r3_13 = HSD_SListRemove(var_r24);
            var_r24 = temp_r3_13;
            M2C_FIELD(temp_r3_13, f32 *, 4) = M2C_BITWISE(f32, (M2C_FIELD(temp_r3_13, f32 *, 4) != temp_f0_8));
            break;
        case 0x29:                                  /* switch 2 */
            if (var_r24 == NULL) {
                __assert(&lbl_802AA498, 0x272, &lbl_803502DC);
            }
            if ((u32) M2C_FIELD(var_r24, u32 *, 0) == 0U) {
                __assert(&lbl_802AA498, 0x272, &lbl_802AA498 + 0x78);
            }
            temp_r22_4 = M2C_FIELD(var_r24, s32 *, 4);
            temp_r3_14 = HSD_SListRemove(var_r24);
            temp_r0_5 = M2C_FIELD(temp_r3_14, s32 *, 4);
            var_r24 = temp_r3_14;
            M2C_FIELD(var_r24, s32 *, 4) = (s32) (temp_r0_5 < temp_r22_4);
            break;
        case 0x2A:                                  /* switch 2 */
            if (var_r24 == NULL) {
                __assert(&lbl_802AA498, 0x277, &lbl_803502DC);
            }
            if ((u32) M2C_FIELD(var_r24, u32 *, 0) == 0U) {
                __assert(&lbl_802AA498, 0x277, &lbl_802AA498 + 0x78);
            }
            temp_r22_5 = M2C_FIELD(var_r24, s32 *, 4);
            temp_r3_15 = HSD_SListRemove(var_r24);
            temp_r4 = M2C_FIELD(temp_r3_15, s32 *, 4);
            var_r24 = temp_r3_15;
            M2C_FIELD(var_r24, s32 *, 4) = (s32) (temp_r22_5 < temp_r4);
            break;
        case 0x2B:                                  /* switch 2 */
            if (var_r24 == NULL) {
                __assert(&lbl_802AA498, 0x27C, &lbl_803502DC);
            }
            if ((u32) M2C_FIELD(var_r24, u32 *, 0) == 0U) {
                __assert(&lbl_802AA498, 0x27C, &lbl_802AA498 + 0x78);
            }
            temp_r22_6 = M2C_FIELD(var_r24, s32 *, 4);
            temp_r3_16 = HSD_SListRemove(var_r24);
            temp_r0_6 = M2C_FIELD(temp_r3_16, u32 *, 4);
            var_r24 = temp_r3_16;
            M2C_FIELD(var_r24, s32 *, 4) = (s32) ((s32) temp_r0_6 <= temp_r22_6);
            break;
        case 0x2C:                                  /* switch 2 */
            if (var_r24 == NULL) {
                __assert(&lbl_802AA498, 0x281, &lbl_803502DC);
            }
            if ((u32) M2C_FIELD(var_r24, u32 *, 0) == 0U) {
                __assert(&lbl_802AA498, 0x281, &lbl_802AA498 + 0x78);
            }
            temp_r22_7 = M2C_FIELD(var_r24, s32 *, 4);
            temp_r3_17 = HSD_SListRemove(var_r24);
            temp_r0_7 = M2C_FIELD(temp_r3_17, s32 *, 4);
            var_r24 = temp_r3_17;
            M2C_FIELD(var_r24, s32 *, 4) = (s32) (temp_r22_7 <= temp_r0_7);
            break;
        case 0x2D:                                  /* switch 2 */
            if (var_r24 == NULL) {
                __assert(&lbl_802AA498, 0x286, &lbl_803502DC);
            }
            if ((u32) M2C_FIELD(var_r24, u32 *, 0) == 0U) {
                __assert(&lbl_802AA498, 0x286, &lbl_802AA498 + 0x78);
            }
            temp_r22_8 = M2C_FIELD(var_r24, s32 *, 4);
            temp_r3_18 = HSD_SListRemove(var_r24);
            temp_r0_8 = M2C_FIELD(temp_r3_18, s32 *, 4);
            var_r24 = temp_r3_18;
            M2C_FIELD(temp_r3_18, s32 *, 4) = (s32) (temp_r0_8 == temp_r22_8);
            break;
        case 0x2E:                                  /* switch 2 */
            if (var_r24 == NULL) {
                __assert(&lbl_802AA498, 0x28B, &lbl_803502DC);
            }
            if ((u32) M2C_FIELD(var_r24, u32 *, 0) == 0U) {
                __assert(&lbl_802AA498, 0x28B, &lbl_802AA498 + 0x78);
            }
            temp_r22_9 = M2C_FIELD(var_r24, s32 *, 4);
            temp_r3_19 = HSD_SListRemove(var_r24);
            temp_r0_9 = M2C_FIELD(temp_r3_19, s32 *, 4);
            var_r24 = temp_r3_19;
            M2C_FIELD(var_r24, s32 *, 4) = (s32) (temp_r0_9 != temp_r22_9);
            break;
        case 0x2F:                                  /* switch 2 */
            if (var_r24 == NULL) {
                __assert(&lbl_802AA498, 0x290, &lbl_803502DC);
            }
            if ((u32) M2C_FIELD(var_r24, u32 *, 0) == 0U) {
                __assert(&lbl_802AA498, 0x290, &lbl_802AA498 + 0x78);
            }
            temp_r22_10 = M2C_FIELD(var_r24, s32 *, 4);
            temp_r3_20 = HSD_SListRemove(var_r24);
            temp_r0_10 = M2C_FIELD(temp_r3_20, s32 *, 4);
            var_r4_2 = 0;
            var_r24 = temp_r3_20;
            if ((temp_r0_10 != 0) && (temp_r22_10 != 0)) {
                var_r4_2 = 1;
            }
            M2C_FIELD(var_r24, s32 *, 4) = var_r4_2;
            break;
        case 0x30:                                  /* switch 2 */
            if (var_r24 == NULL) {
                __assert(&lbl_802AA498, 0x295, &lbl_803502DC);
            }
            if ((u32) M2C_FIELD(var_r24, u32 *, 0) == 0U) {
                __assert(&lbl_802AA498, 0x295, &lbl_802AA498 + 0x78);
            }
            temp_r22_11 = M2C_FIELD(var_r24, s32 *, 4);
            temp_r3_21 = HSD_SListRemove(var_r24);
            temp_r0_11 = M2C_FIELD(temp_r3_21, s32 *, 4);
            var_r4_3 = 0;
            var_r24 = temp_r3_21;
            if ((temp_r0_11 != 0) || (temp_r22_11 != 0)) {
                var_r4_3 = 1;
            }
            M2C_FIELD(var_r24, s32 *, 4) = var_r4_3;
            break;
        case 0x32:                                  /* switch 2 */
            if (var_r24 == NULL) {
                __assert(&lbl_802AA498, 0x29A, &lbl_803502DC);
            }
            if ((u32) M2C_FIELD(var_r24, u32 *, 0) == 0U) {
                __assert(&lbl_802AA498, 0x29A, &lbl_802AA498 + 0x78);
            }
            temp_r22_12 = M2C_FIELD(var_r24, s32 *, 4);
            temp_r3_22 = HSD_SListRemove(var_r24);
            var_r24 = temp_r3_22;
            temp_r3_23 = M2C_FIELD(temp_r3_22, s32 *, 4);
            var_r0 = 0;
            if (((temp_r3_23 == 0) && (temp_r22_12 != 0)) || ((temp_r3_23 != 0) && (temp_r22_12 == 0))) {
                var_r0 = 1;
            }
            M2C_FIELD(var_r24, s32 *, 4) = var_r0;
            break;
        case 0x39:                                  /* switch 2 */
            if (var_r24 == NULL) {
                __assert(&lbl_802AA498, 0x29F, &lbl_803502DC);
            }
            if ((u32) M2C_FIELD(var_r24, u32 *, 0) == 0U) {
                __assert(&lbl_802AA498, 0x29F, &lbl_802AA498 + 0x78);
            }
            temp_r22_13 = M2C_FIELD(var_r24, s32 *, 4);
            temp_r3_24 = HSD_SListRemove(var_r24);
            temp_r0_12 = M2C_FIELD(temp_r3_24, s32 *, 4);
            var_r24 = temp_r3_24;
            M2C_FIELD(temp_r3_24, s32 *, 4) = (s32) (temp_r0_12 & temp_r22_13);
            break;
        case 0x3A:                                  /* switch 2 */
            if (var_r24 == NULL) {
                __assert(&lbl_802AA498, 0x2A4, &lbl_803502DC);
            }
            if ((u32) M2C_FIELD(var_r24, u32 *, 0) == 0U) {
                __assert(&lbl_802AA498, 0x2A4, &lbl_802AA498 + 0x78);
            }
            temp_r22_14 = M2C_FIELD(var_r24, s32 *, 4);
            temp_r3_25 = HSD_SListRemove(var_r24);
            temp_r0_13 = M2C_FIELD(temp_r3_25, s32 *, 4);
            var_r24 = temp_r3_25;
            M2C_FIELD(temp_r3_25, s32 *, 4) = (s32) (temp_r0_13 | temp_r22_14);
            break;
        case 0x3B:                                  /* switch 2 */
            if (var_r24 == NULL) {
                __assert(&lbl_802AA498, 0x2A9, &lbl_803502DC);
            }
            if ((u32) M2C_FIELD(var_r24, u32 *, 0) == 0U) {
                __assert(&lbl_802AA498, 0x2A9, &lbl_802AA498 + 0x78);
            }
            temp_r22_15 = M2C_FIELD(var_r24, s32 *, 4);
            temp_r3_26 = HSD_SListRemove(var_r24);
            temp_r0_14 = M2C_FIELD(temp_r3_26, s32 *, 4);
            var_r24 = temp_r3_26;
            M2C_FIELD(temp_r3_26, s32 *, 4) = (s32) (temp_r0_14 ^ temp_r22_15);
            break;
        case 0x27:                                  /* switch 2 */
            if (var_r24 == NULL) {
                __assert(&lbl_802AA498, 0x2AF, &lbl_803502DC);
            }
            if ((u32) M2C_FIELD(var_r24, u32 *, 0) == 0U) {
                __assert(&lbl_802AA498, 0x2AF, &lbl_802AA498 + 0x78);
            }
            temp_r22_16 = M2C_FIELD(var_r24, s32 *, 4);
            temp_r3_27 = HSD_SListRemove(var_r24);
            temp_r23 = M2C_FIELD(temp_r3_27, s32 *, 4);
            var_r24 = temp_r3_27;
            M2C_FIELD(var_r24, s32 *, 4) = (s32) (temp_r23 + HSD_Randi((temp_r22_16 - temp_r23) + 1));
            break;
        }
        goto loop_2;
    }
    if (var_r30 == 0x10) {
        if (var_r24 == NULL) {
            __assert(&lbl_802AA498, 0x1AD, &lbl_803502DC);
        }
        sp10 = (f32) (lbl_80352188 * (f64) (f32) ArcSin(M2C_BITWISE(f32, M2C_FIELD(var_r24, s32 *, 4))));
        M2C_FIELD(var_r24, s32 *, 4) = M2C_BITWISE(s32, sp10);
        goto loop_2;
    }
    if (var_r30 >= 0x10) {
        if (var_r30 != 0x18) {
            if (var_r30 < 0x18) {
                if (var_r30 != 0x14) {
                    if (var_r30 < 0x14) {
                        if (var_r30 != 0x12) {
                            if (var_r30 < 0x12) {
                                if (var_r24 == NULL) {
                                    __assert(&lbl_802AA498, 0x1B3, &lbl_803502DC);
                                }
                                sp10 = (f32) (lbl_80352188 * (f64) (f32) ArcCos(M2C_BITWISE(f32, M2C_FIELD(var_r24, s32 *, 4))));
                                M2C_FIELD(var_r24, s32 *, 4) = M2C_BITWISE(s32, sp10);
                            } else {
                                if (var_r24 == NULL) {
                                    __assert(&lbl_802AA498, 0x1BF, &lbl_803502DC);
                                }
                                sp10 = (f32) fn_80156E90(M2C_BITWISE(f32, M2C_FIELD(var_r24, s32 *, 4)));
                                M2C_FIELD(var_r24, s32 *, 4) = M2C_BITWISE(s32, sp10);
                            }
                        } else {
                            if (var_r24 == NULL) {
                                __assert(&lbl_802AA498, 0x1B9, &lbl_803502DC);
                            }
                            sp10 = (f32) (lbl_80352188 * (f64) (f32) ArcTan(M2C_BITWISE(f32, M2C_FIELD(var_r24, s32 *, 4))));
                            M2C_FIELD(var_r24, s32 *, 4) = M2C_BITWISE(s32, sp10);
                        }
                    } else if (var_r30 != 0x16) {
                        if (var_r30 < 0x16) {
                            if (var_r24 == NULL) {
                                __assert(&lbl_802AA498, 0x1CB, &lbl_803502DC);
                            }
                            temp_f1 = M2C_BITWISE(f32, M2C_FIELD(var_r24, s32 *, 4));
                            if (temp_f1 < lbl_80352178) {
                                sp10 = -temp_f1;
                                M2C_FIELD(var_r24, s32 *, 4) = M2C_BITWISE(s32, sp10);
                            }
                        } else {
                            if (var_r24 == NULL) {
                                __assert(&lbl_802AA498, 0x1F5, &lbl_803502DC);
                            }
                            if ((u32) M2C_FIELD(var_r24, u32 *, 0) == 0U) {
                                __assert(&lbl_802AA498, 0x1F5, &lbl_802AA498 + 0x78);
                            }
                            temp_f0_9 = M2C_BITWISE(f32, M2C_FIELD(var_r24, s32 *, 4));
                            spC = temp_f0_9;
                            temp_r3_28 = HSD_SListRemove(var_r24);
                            var_r24 = temp_r3_28;
                            sp10 = M2C_FIELD(temp_r3_28, f32 *, 4) + temp_f0_9;
                            M2C_FIELD(temp_r3_28, f32 *, 4) = sp10;
                        }
                    } else {
                        if (var_r24 == NULL) {
                            __assert(&lbl_802AA498, 0x1DA, &lbl_803502DC);
                        }
                        var_f4 = M2C_BITWISE(f32, M2C_FIELD(var_r24, s32 *, 4));
                        if (var_f4 > lbl_80352178) {
                            temp_f1_2 = __frsqrte(var_f4);
                            temp_f1_3 = lbl_80352190 * temp_f1_2 * -(((f64) var_f4 * (temp_f1_2 * temp_f1_2)) - lbl_80352198);
                            temp_f1_4 = lbl_80352190 * temp_f1_3 * -(((f64) var_f4 * (temp_f1_3 * temp_f1_3)) - lbl_80352198);
                            sp8 = (f32) ((f64) var_f4 * (lbl_80352190 * temp_f1_4 * -(((f64) var_f4 * (temp_f1_4 * temp_f1_4)) - lbl_80352198)));
                            var_f4 = sp8;
                        }
                        sp10 = var_f4;
                        M2C_FIELD(var_r24, s32 *, 4) = M2C_BITWISE(s32, sp10);
                    }
                } else {
                    if (var_r24 == NULL) {
                        __assert(&lbl_802AA498, 0x1C5, &lbl_803502DC);
                    }
                    sp10 = (f32) fn_80156E50(M2C_BITWISE(f32, M2C_FIELD(var_r24, s32 *, 4)));
                    M2C_FIELD(var_r24, s32 *, 4) = M2C_BITWISE(s32, sp10);
                }
            } else if (var_r30 != 0x1C) {
                if (var_r30 < 0x1C) {
                    if (var_r30 != 0x1A) {
                        if (var_r30 < 0x1A) {
                            if (var_r24 == NULL) {
                                __assert(&lbl_802AA498, 0x201, &lbl_803502DC);
                            }
                            if ((u32) M2C_FIELD(var_r24, u32 *, 0) == 0U) {
                                __assert(&lbl_802AA498, 0x201, &lbl_802AA498 + 0x78);
                            }
                            temp_f0_10 = M2C_BITWISE(f32, M2C_FIELD(var_r24, s32 *, 4));
                            spC = temp_f0_10;
                            temp_r3_29 = HSD_SListRemove(var_r24);
                            var_r24 = temp_r3_29;
                            sp10 = M2C_FIELD(temp_r3_29, f32 *, 4) * temp_f0_10;
                            M2C_FIELD(temp_r3_29, f32 *, 4) = sp10;
                        } else {
                            if (var_r24 == NULL) {
                                __assert(&lbl_802AA498, 0x20D, &lbl_803502DC);
                            }
                            if ((u32) M2C_FIELD(var_r24, u32 *, 0) == 0U) {
                                __assert(&lbl_802AA498, 0x20D, &lbl_802AA498 + 0x78);
                            }
                            spC = M2C_BITWISE(f32, M2C_FIELD(var_r24, s32 *, 4));
                            temp_r3_30 = HSD_SListRemove(var_r24);
                            var_r24 = temp_r3_30;
                            sp10 = (f32) fn_80156E70(M2C_FIELD(temp_r3_30, f32 *, 4), spC);
                            M2C_FIELD(var_r24, f32 *, 4) = sp10;
                        }
                    } else {
                        if (var_r24 == NULL) {
                            __assert(&lbl_802AA498, 0x207, &lbl_803502DC);
                        }
                        if ((u32) M2C_FIELD(var_r24, u32 *, 0) == 0U) {
                            __assert(&lbl_802AA498, 0x207, &lbl_802AA498 + 0x78);
                        }
                        temp_f0_11 = M2C_BITWISE(f32, M2C_FIELD(var_r24, s32 *, 4));
                        spC = temp_f0_11;
                        temp_r3_31 = HSD_SListRemove(var_r24);
                        var_r24 = temp_r3_31;
                        sp10 = M2C_FIELD(temp_r3_31, f32 *, 4) / temp_f0_11;
                        M2C_FIELD(temp_r3_31, f32 *, 4) = sp10;
                    }
                } else if (var_r30 != 0x1E) {
                    if (var_r30 < 0x1E) {
                        if (var_r24 == NULL) {
                            __assert(&lbl_802AA498, 0x218, &lbl_803502DC);
                        }
                        if ((u32) M2C_FIELD(var_r24, u32 *, 0) == 0U) {
                            __assert(&lbl_802AA498, 0x218, &lbl_802AA498 + 0x78);
                        }
                        temp_r22_17 = M2C_FIELD(var_r24, s32 *, 4);
                        temp_r3_32 = HSD_SListRemove(var_r24);
                        temp_r0_15 = M2C_FIELD(temp_r3_32, s32 *, 4);
                        var_r24 = temp_r3_32;
                        M2C_FIELD(temp_r3_32, s32 *, 4) = (s32) (temp_r0_15 - temp_r22_17);
                    } else {
                        if (var_r24 == NULL) {
                            __assert(&lbl_802AA498, 0x222, &lbl_803502DC);
                        }
                        if ((u32) M2C_FIELD(var_r24, u32 *, 0) == 0U) {
                            __assert(&lbl_802AA498, 0x222, &lbl_802AA498 + 0x78);
                        }
                        temp_r22_18 = M2C_FIELD(var_r24, s32 *, 4);
                        temp_r3_33 = HSD_SListRemove(var_r24);
                        temp_r0_16 = M2C_FIELD(temp_r3_33, s32 *, 4);
                        var_r24 = temp_r3_33;
                        M2C_FIELD(temp_r3_33, s32 *, 4) = (s32) (temp_r0_16 / temp_r22_18);
                    }
                } else {
                    if (var_r24 == NULL) {
                        __assert(&lbl_802AA498, 0x21D, &lbl_803502DC);
                    }
                    if ((u32) M2C_FIELD(var_r24, u32 *, 0) == 0U) {
                        __assert(&lbl_802AA498, 0x21D, &lbl_802AA498 + 0x78);
                    }
                    temp_r22_19 = M2C_FIELD(var_r24, s32 *, 4);
                    temp_r3_34 = HSD_SListRemove(var_r24);
                    temp_r0_17 = M2C_FIELD(temp_r3_34, s32 *, 4);
                    var_r24 = temp_r3_34;
                    M2C_FIELD(temp_r3_34, s32 *, 4) = (s32) (temp_r0_17 * temp_r22_19);
                }
            } else {
                if (var_r24 == NULL) {
                    __assert(&lbl_802AA498, 0x213, &lbl_803502DC);
                }
                if ((u32) M2C_FIELD(var_r24, u32 *, 0) == 0U) {
                    __assert(&lbl_802AA498, 0x213, &lbl_802AA498 + 0x78);
                }
                temp_r22_20 = M2C_FIELD(var_r24, s32 *, 4);
                temp_r3_35 = HSD_SListRemove(var_r24);
                temp_r0_18 = M2C_FIELD(temp_r3_35, s32 *, 4);
                var_r24 = temp_r3_35;
                M2C_FIELD(temp_r3_35, s32 *, 4) = (s32) (temp_r0_18 + temp_r22_20);
            }
        } else {
            if (var_r24 == NULL) {
                __assert(&lbl_802AA498, 0x1FB, &lbl_803502DC);
            }
            if ((u32) M2C_FIELD(var_r24, u32 *, 0) == 0U) {
                __assert(&lbl_802AA498, 0x1FB, &lbl_802AA498 + 0x78);
            }
            temp_f0_12 = M2C_BITWISE(f32, M2C_FIELD(var_r24, s32 *, 4));
            spC = temp_f0_12;
            temp_r3_36 = HSD_SListRemove(var_r24);
            var_r24 = temp_r3_36;
            sp10 = M2C_FIELD(temp_r3_36, f32 *, 4) - temp_f0_12;
            M2C_FIELD(temp_r3_36, f32 *, 4) = sp10;
        }
        goto loop_2;
    }
    if (var_r30 == 8) {
        if (var_r24 == NULL) {
            __assert(&lbl_802AA498, 0x17D, &lbl_803502DC);
        }
        sp10 = (f32) M2C_FIELD(var_r24, s32 *, 4);
        M2C_FIELD(var_r24, s32 *, 4) = M2C_BITWISE(s32, sp10);
        goto loop_2;
    }
    if (var_r30 >= 8) {
        if (var_r30 != 0xC) {
            if (var_r30 < 0xC) {
                if (var_r30 != 0xA) {
                    if (var_r30 < 0xA) {
                        if (var_r24 == NULL) {
                            __assert(&lbl_802AA498, 0x183, &lbl_803502DC);
                        }
                        sp10 = -M2C_BITWISE(f32, M2C_FIELD(var_r24, s32 *, 4));
                        M2C_FIELD(var_r24, s32 *, 4) = M2C_BITWISE(s32, sp10);
                    } else {
                        if (var_r24 == NULL) {
                            __assert(&lbl_802AA498, 0x18F, &lbl_803502DC);
                        }
                        M2C_FIELD(var_r24, s32 *, 4) = HSD_Randi(2);
                    }
                } else {
                    if (var_r24 == NULL) {
                        __assert(&lbl_802AA498, 0x189, &lbl_803502DC);
                    }
                    M2C_FIELD(var_r24, s32 *, 4) = (s32) -M2C_FIELD(var_r24, s32 *, 4);
                }
            } else if (var_r30 != 0xE) {
                if (var_r30 < 0xE) {
                    if (var_r24 == NULL) {
                        __assert(&lbl_802AA498, 0x19B, &lbl_803502DC);
                    }
                    sp10 = (f32) Sin((f32) (lbl_80352180 * (f64) M2C_BITWISE(f32, M2C_FIELD(var_r24, s32 *, 4))));
                    M2C_FIELD(var_r24, s32 *, 4) = M2C_BITWISE(s32, sp10);
                } else {
                    if (var_r24 == NULL) {
                        __assert(&lbl_802AA498, 0x1A7, &lbl_803502DC);
                    }
                    sp10 = (f32) Tan((f32) (lbl_80352180 * (f64) M2C_BITWISE(f32, M2C_FIELD(var_r24, s32 *, 4))));
                    M2C_FIELD(var_r24, s32 *, 4) = M2C_BITWISE(s32, sp10);
                }
            } else {
                if (var_r24 == NULL) {
                    __assert(&lbl_802AA498, 0x1A1, &lbl_803502DC);
                }
                sp10 = (f32) Cos((f32) (lbl_80352180 * (f64) M2C_BITWISE(f32, M2C_FIELD(var_r24, s32 *, 4))));
                M2C_FIELD(var_r24, s32 *, 4) = M2C_BITWISE(s32, sp10);
            }
        } else {
            if (var_r24 == NULL) {
                __assert(&lbl_802AA498, 0x195, &lbl_803502DC);
            }
            sp10 = HSD_Randf();
            M2C_FIELD(var_r24, s32 *, 4) = M2C_BITWISE(s32, sp10);
        }
        goto loop_2;
    }
    if (var_r30 == 5) {
        goto block_122;
    }
    if (var_r30 >= 5) {
        if (var_r30 < 7) {
            var_r27 = 4;
            var_r29 = 0;
        } else {
            if (var_r24 == NULL) {
                __assert(&lbl_802AA498, 0x178, &lbl_803502DC);
            }
            M2C_FIELD(var_r24, s32 *, 4) = (s32) M2C_BITWISE(f32, M2C_FIELD(var_r24, s32 *, 4));
        }
        goto loop_2;
    }
    if (var_r30 != 1) {
        if (var_r30 < 1) {
            if (var_r30 < 0) {
                OSReport((void *)(&lbl_802AA498 + 0x84), (unsigned long)(0));
                HSD_Panic(&lbl_802AA498, 0x2B5, &lbl_803502D8);
            }
        } else {
            var_r27 = 2;
            var_r29 = 0;
        }
        goto loop_2;
    }
    if (var_r24 == NULL) {
        __assert(&lbl_802AA498, 0x153, &lbl_803502DC);
    }
    spC = M2C_BITWISE(f32, M2C_FIELD(var_r24, s32 *, 4));
loop_120:
    if (var_r24 != NULL) {
        var_r24 = HSD_SListRemove(var_r24);
        goto loop_120;
    }
    return spC;
}

void hsdInitClassInfo(void *arg0, void *arg1, s32 arg2, s32 arg3, s16 arg4, s16 arg5) {
    M2C_FIELD(arg0, s32 *, 4) = 1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = arg3;
    M2C_FIELD(arg0, s16 *, 0x10) = arg5;
    M2C_FIELD(arg0, s16 *, 0x12) = arg4;
    M2C_FIELD(arg0, void **, 0x14) = arg1;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, void **, 0x18) = NULL;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    if (arg1 != NULL) {
        if (!(M2C_FIELD(arg1, s32 *, 4) & 1)) {
            M2C_FIELD(arg1, M2C_UNK (**)(), 0)();
        }
        if ((s16) M2C_FIELD(arg0, s16 *, 0x10) < (s16) M2C_FIELD(arg1, s16 *, 0x10)) {
            __assert(&lbl_803502E8, 0x5F, &lbl_802AA574);
        }
        if ((s16) M2C_FIELD(arg0, s16 *, 0x12) < (s16) M2C_FIELD(arg1, s16 *, 0x12)) {
            __assert(&lbl_803502E8, 0x60, &lbl_802AA5AC);
        }
        /* draft: did not compile: memcpy(arg0 + 0x28, arg1 + 0x28, M2C_FIELD(arg1, s16 *, 0x12) - 0x28); */
        M2C_FIELD(arg1, void **, 0x1C) = arg0;
        M2C_FIELD(arg0, void **, 0x18) = (void *) M2C_FIELD(arg1, void **, 0x1C);
    }
}

s32 GetMemoryEntry(s32 arg0) { return 0; } /* draft: stub */

M2C_UNK *hsdAllocMemPiece(s32 arg0) { return 0; } /* draft: stub */

void hsdFreeMemPiece(M2C_UNK *arg0, s32 arg1) {
    void *temp_r3;

    if (arg0 != NULL) {
        /* draft: did not compile: temp_r3 = GetMemoryEntry(((s32) (arg1 + 0x1F) / 32) - 1); */
        /* draft: did not compile: *arg0 = M2C_FIELD(temp_r3, M2C_UNK **, 0xC); */
        M2C_FIELD(temp_r3, M2C_UNK **, 0xC) = arg0;
        M2C_FIELD(temp_r3, s32 *, 8) = (s32) (M2C_FIELD(temp_r3, s32 *, 8) + 1);
    }
}

void _hsdClassAlloc(void *arg0) {
    u32 temp_r4;

    if (hsdAllocMemPiece(M2C_FIELD(arg0, s16 *, 0x10)) != 0U) {
        M2C_FIELD(arg0, u32 *, 0x20) = (u32) (M2C_FIELD(arg0, u32 *, 0x20) + 1);
        temp_r4 = M2C_FIELD(arg0, u32 *, 0x20);
        if (temp_r4 > (u32) M2C_FIELD(arg0, u32 *, 0x24)) {
            M2C_FIELD(arg0, u32 *, 0x24) = temp_r4;
        }
    }
}

s32 fn_8010B4F4(void) {
    return 0;
}

void fn_8010B4FC(void) {

}

void _hsdClassDestroy(M2C_UNK *arg0) { } /* draft: stub */

void _hsdClassAmnesia(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    if (arg0 == &lbl_802AA538) {
        lbl_80350CFC = 0;
        lbl_80350CF8 = 0;
        lbl_80350D00 = 0;
    }
}

void _hsdClassInfoInit(void) {
    M2C_FIELD(&lbl_802AA538, s32 *, 4) = 1;
    M2C_FIELD(&lbl_802AA538, void **, 8) = (void *) (&lbl_802AA538 + 0x114);
    M2C_FIELD(&lbl_802AA538, void **, 0xC) = (void *) (&lbl_802AA538 + 0x12C);
    M2C_FIELD(&lbl_802AA538, s16 *, 0x10) = 4;
    M2C_FIELD(&lbl_802AA538, s16 *, 0x12) = 0x3C;
    M2C_FIELD(&lbl_802AA538, s32 *, 0x14) = 0;
    M2C_FIELD(&lbl_802AA538, s32 *, 0x1C) = 0;
    M2C_FIELD(&lbl_802AA538, s32 *, 0x18) = 0;
    M2C_FIELD(&lbl_802AA538, s32 *, 0x20) = 0;
    M2C_FIELD(&lbl_802AA538, s32 *, 0x24) = 0;
    /* draft: did not compile: M2C_FIELD(&lbl_802AA538, M2C_UNK (**)(), 0x28) = _hsdClassAlloc; */
    M2C_FIELD(&lbl_802AA538, M2C_UNK (**)(), 0x2C) = fn_8010B4F4;
    /* draft: did not compile: M2C_FIELD(&lbl_802AA538, M2C_UNK (**)(), 0x30) = fn_8010B4FC; */
    /* draft: did not compile: M2C_FIELD(&lbl_802AA538, M2C_UNK (**)(), 0x34) = _hsdClassDestroy; */
    /* draft: did not compile: M2C_FIELD(&lbl_802AA538, M2C_UNK (**)(), 0x38) = _hsdClassAmnesia; */
}

void **hsdNew(void *arg0) {
    void **temp_r3;

    if (!(M2C_FIELD(arg0, s32 *, 4) & 1)) {
        M2C_FIELD(arg0, M2C_UNK (**)(), 0)();
    }
    temp_r3 = M2C_FIELD(arg0, void **(**)(void *), 0x28)(arg0);
    if (temp_r3 == NULL) {
        return NULL;
    }
    if (!(M2C_FIELD(arg0, s32 *, 4) & 1)) {
        M2C_FIELD(arg0, M2C_UNK (**)(), 0)();
    }
    memset(temp_r3, 0, M2C_FIELD(arg0, s16 *, 0x10));
    *temp_r3 = arg0;
    if (M2C_FIELD(arg0, s32 (**)(void **), 0x2C)(temp_r3) < 0) {
        M2C_FIELD(arg0, M2C_UNK (**)(void **), 0x34)(temp_r3);
        return NULL;
    }
    return temp_r3;
}

s32 fn_8010B6FC(void **arg0, void *arg1) {
    u32 temp_r3;
    void *temp_r4;
    void *temp_r4_2;
    void *var_r29;
    void *var_r28;

    if (arg0 == NULL) {
        __assert(&lbl_803502E8, 0x24A, &lbl_803502F0);
    }
    if (arg1 == NULL) {
        __assert(&lbl_803502E8, 0x24B, &lbl_802AA670);
    }
    var_r28 = arg1;
    var_r29 = *arg0;
    if (!(M2C_FIELD(arg1, s32 *, 4) & 1)) {
        M2C_FIELD(arg1, M2C_UNK (**)(), 0)();
    }
    if ((s16) M2C_FIELD(var_r29, s16 *, 0x10) != (s16) M2C_FIELD(var_r28, s16 *, 0x10)) {
        return 0;
    }
loop_10:
    temp_r4 = M2C_FIELD(var_r29, void **, 0x14);
    if (temp_r4 != NULL) {
        if ((s16) M2C_FIELD(temp_r4, s16 *, 0x10) != (s16) M2C_FIELD(var_r29, s16 *, 0x10)) {

        } else {
            var_r29 = temp_r4;
            goto loop_10;
        }
    }
loop_14:
    temp_r4_2 = M2C_FIELD(var_r28, void **, 0x14);
    if ((temp_r4_2 != NULL) && ((s16) M2C_FIELD(temp_r4_2, s16 *, 0x10) == (s16) M2C_FIELD(var_r28, s16 *, 0x10))) {
        var_r28 = temp_r4_2;
        goto loop_14;
    }
    if (var_r29 == var_r28) {
        M2C_FIELD(var_r29, s32 *, 0x20) = (s32) (M2C_FIELD(var_r29, s32 *, 0x20) - 1);
        M2C_FIELD(arg1, u32 *, 0x20) = (u32) (M2C_FIELD(arg1, u32 *, 0x20) + 1);
        temp_r3 = M2C_FIELD(arg1, u32 *, 0x20);
        if (temp_r3 > (u32) M2C_FIELD(arg1, u32 *, 0x24)) {
            M2C_FIELD(arg1, u32 *, 0x24) = temp_r3;
        }
        *arg0 = arg1;
        return 1;
    }
    return 0;
}

s32 hsdSearchClassInfo(s32 arg0) {
    if ((u32) lbl_80350D00 != 0U) {
        return HSD_HashSearch(lbl_80350D00, 0);
    }
    return 0;
}
