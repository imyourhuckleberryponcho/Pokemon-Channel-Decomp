/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

extern M2C_UNK lbl_8033BE10;
M2C_UNK DCFlushRangeNoSync(s32, M2C_UNK);
extern u8 lbl_80350E74;
extern u8 lbl_80350E76;
u32 __cvt_fp2unsigned(f32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
f64 fn_80156E70(f32, f64);
extern M2C_UNK lbl_802AB94C;
extern M2C_UNK lbl_802ABB68;
extern f32 lbl_803522A0;
extern f32 lbl_803522A4;
extern f32 lbl_803522A8;
extern f32 lbl_803522B8;
extern f64 lbl_803522C0;
extern f32 lbl_803522C8;
extern f32 lbl_803522CC;
extern f32 lbl_803522D0;
M2C_UNK fn_80118C64(s32);
M2C_UNK fn_80119DDC(u8, M2C_UNK, M2C_UNK);
M2C_UNK fn_80119E84(u8);
extern u8 lbl_80350E4C;
extern u8 lbl_80350E4D;
extern s32 lbl_80350E50;
extern void *lbl_80350E58;
extern M2C_UNK *lbl_80350E5C;
extern void *lbl_80350E60;
extern f32 lbl_803522D8;
extern f32 lbl_803522E8;
extern f32 lbl_803522EC;
extern f64 lbl_803522F0;
M2C_UNK salApplyMatrix();
M2C_UNK salNormalizeVector(f32 *);
extern f32 lbl_803522FC;
extern f64 lbl_80352300;
extern f32 lbl_80352308;
M2C_UNK hwEnableIrq();
M2C_UNK hwDisableIrq();
extern u8 lbl_80350D30;
extern u32 lbl_8033C4F0;
extern M2C_UNK lbl_8033CBF0;
extern u8 lbl_80350E49;
extern u8 lbl_80350E4A;
s32 fn_80118950(u16, M2C_UNK, M2C_UNK, u8, s32);
M2C_UNK fn_80118A18(s32, u8, s32);
M2C_UNK fn_80118AFC(s32, u16, u16);
extern u8 lbl_80350E4B;
extern f32 lbl_803522F8;
extern f32 lbl_8035230C;
extern f32 lbl_80352310;
extern f32 lbl_80352314;
extern f32 lbl_80352318;
extern s32 lbl_80350E40;

s32 salSynthSendMessage(void *arg0, s32 arg1);
void salActivateVoice(void *arg0, u8 arg1);
void salDeactivateVoice(void *arg0);
s32 fn_80129C00(void *arg0, void *arg1);
s32 fn_80129CA8(void *arg0, u32 arg1);
void salHandleAuxProcessing(void);
void salCalcVolume(u8 arg0, void *arg1, s32 arg2, s32 arg3, u32 arg4, u32 arg5, f32 farg0, f32 farg1, f32 farg2);
void fn_8012A574(void);
void fn_8012AA28(void *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4, f32 *arg5);
void fn_8012AF44(u16 *arg0, u32 arg1);
s32 fn_8012B040(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4);
void fn_8012B18C(void);

#pragma push
#pragma peephole off
s32 salSynthSendMessage(void *arg0, s32 arg1) {
    if (((s32 (*)(s32, s32)) lbl_80350E40) == NULL) {
        return 0;
    }
    return 0;
}
#pragma pop

void salActivateVoice(void *arg0, u8 arg1) {
    void *temp_r0;
    void *temp_r4;

    if ((u8) M2C_FIELD(arg0, u8 *, 0xEC) != 0) {
        salDeactivateVoice((void *)(0));
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) | 0x20);
    }
    M2C_FIELD(arg0, s8 *, 0xED) = 0;
    temp_r4 = &lbl_8033BE10 + (arg1 * 0xBC);
    temp_r0 = M2C_FIELD((s32)temp_r4, void **, 0x48);
    M2C_FIELD(arg0, void **, 0xC) = temp_r0;
    if (temp_r0 != NULL) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 0x10) = arg0;
    }
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(temp_r4, void **, 0x48) = arg0;
    M2C_FIELD(arg0, s8 *, 0xEE) = 0;
    M2C_FIELD(arg0, u8 *, 0xEC) = 1U;
    M2C_FIELD(arg0, u8 *, 0xEF) = arg1;
}

void salDeactivateVoice(void *arg0) {
    void *temp_r4;
    void *temp_r4_2;

    if ((u8) M2C_FIELD(arg0, u8 *, 0xEC) != 0) {
        temp_r4 = M2C_FIELD(arg0, void **, 0x10);
        if (temp_r4 != NULL) {
            M2C_FIELD(temp_r4, void **, 0xC) = (void *) M2C_FIELD(arg0, void **, 0xC);
        } else {
            M2C_FIELD((&lbl_8033BE10 + (M2C_FIELD(arg0, u8 *, 0xEF) * 0xBC)), void **, 0x48) = (void *) M2C_FIELD(arg0, void **, 0xC);
        }
        temp_r4_2 = M2C_FIELD(arg0, void **, 0xC);
        if (temp_r4_2 != NULL) {
            M2C_FIELD(temp_r4_2, void **, 0x10) = (void *) M2C_FIELD(arg0, void **, 0x10);
        }
        M2C_FIELD(arg0, u8 *, 0xEC) = 0U;
    }
}

s32 fn_80129C00(void *arg0, void *arg1) { return 0; } /* draft: stub */

s32 fn_80129CA8(void *arg0, u32 arg1) {
    s32 var_r5;
    u8 temp_r0;
    u8 temp_r3;
    u8 var_ctr;
    void *temp_r6;
    void *var_r3;
    void *var_r4;

    var_r3 = arg0;
    temp_r0 = M2C_FIELD(var_r3, u8 *, 0x52);
    temp_r6 = var_r3;
    var_r5 = 0;
    var_ctr = temp_r0;
    if ((s32) temp_r0 > 0) {
loop_1:
        if ((u32) M2C_FIELD(var_r3, u32 *, 0x60) == arg1) {
            /* draft: did not compile: var_r4 = temp_r6 + (var_r5 * 0xC); */
loop_4:
            temp_r3 = M2C_FIELD(temp_r6, u8 *, 0x52);
            if (var_r5 <= (s32) (temp_r3 - 2)) {
                var_r5 += 1;
                M2C_FIELD(var_r4, s32 *, 0x58) = (s32) M2C_FIELD(var_r4, s32 *, 0x64);
                M2C_FIELD(var_r4, s32 *, 0x5C) = (s32) M2C_FIELD(var_r4, s32 *, 0x68);
                M2C_FIELD(var_r4, s32 *, 0x60) = (s32) M2C_FIELD(var_r4, s32 *, 0x6C);
                /* draft: did not compile: var_r4 += 0xC; */
                goto loop_4;
            }
            M2C_FIELD(temp_r6, u8 *, 0x52) = (u8) (temp_r3 - 1);
            return 1;
        }
        /* draft: did not compile: var_r3 += 0xC; */
        var_r5 += 1;
        var_ctr -= 1;
        if (var_ctr == 0) {
            /* Duplicate return node #7. Try simplifying control flow for better match */
            return 0;
        }
        goto loop_1;
    }
    return 0;
}

void salHandleAuxProcessing(void) {
    s32 sp10;
    s32 spC;
    s32 sp8;
    M2C_UNK (*temp_r12)(M2C_UNK, s32 *, s32, s32, s32);
    M2C_UNK (*temp_r12_2)(M2C_UNK, s32 *, s32, s32, s32);
    M2C_UNK *var_r30;
    s32 temp_r29;
    s32 temp_r29_2;
    s32 temp_r6;
    s32 temp_r6_2;
    u8 var_r31;

    var_r31 = 0;
    var_r30 = &lbl_8033BE10;
loop_8:
    if (var_r31 < (u8) lbl_80350E74) {
        if ((u8) M2C_FIELD(var_r30, u8 *, 0x50) == 1) {
            temp_r12 = M2C_FIELD(var_r30, M2C_UNK (**)(M2C_UNK, s32 *, s32, s32, s32), 0xAC);
            if (temp_r12 != NULL) {
                temp_r29 = *(var_r30 + ((((lbl_80350E76 + 2) % 3) * 4) + 0x30));
                temp_r6 = temp_r29 + 0x280;
                sp8 = temp_r29;
                spC = temp_r6;
                sp10 = temp_r29 + 0x500;
                temp_r12(0, &sp8, M2C_FIELD(var_r30, s32 *, 0xB4), temp_r6, lbl_80350E76 + 2);
                DCFlushRangeNoSync(temp_r29, 0x780);
            }
            if ((s32) M2C_FIELD(var_r30, s32 *, 0x54) == 0) {
                temp_r12_2 = M2C_FIELD(var_r30, M2C_UNK (**)(M2C_UNK, s32 *, s32, s32, s32), 0xB0);
                if (temp_r12_2 != NULL) {
                    temp_r29_2 = *(var_r30 + ((((lbl_80350E76 + 2) % 3) * 4) + 0x3C));
                    temp_r6_2 = temp_r29_2 + 0x280;
                    sp8 = temp_r29_2;
                    spC = temp_r6_2;
                    sp10 = temp_r29_2 + 0x500;
                    temp_r12_2(0, &sp8, M2C_FIELD(var_r30, s32 *, 0xB8), temp_r6_2, lbl_80350E76 + 2);
                    DCFlushRangeNoSync(temp_r29_2, 0x780);
                }
            }
        }
        var_r31 += 1;
        var_r30 += 0xBC;
        goto loop_8;
    }
}

void salCalcVolume(u8 arg0, void *arg1, s32 arg2, s32 arg3, u32 arg4, u32 arg5, f32 farg0, f32 farg1, f32 farg2) { } /* draft: stub */

void fn_8012A574(void) {
    s32 saved_reg_r31;
    M2C_UNK (*temp_r12)(u8);
    M2C_UNK (*temp_r12_2)(u8, s32);
    M2C_UNK *var_r3_2;
    M2C_UNK *var_r3_3;
    M2C_UNK *var_r4;
    M2C_UNK *var_r4_3;
    M2C_UNK *var_r5;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f31;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f4;
    f32 temp_f5;
    f32 var_f1;
    f32 var_f31;
    f32 var_f4;
    s32 temp_r0;
    s32 var_r6;
    u32 temp_r3;
    u32 var_r29;
    u32 var_r3;
    u8 var_ctr;
    u8 var_r28;
    void *var_r26;
    void *var_r30;
    void *var_r31;
    void *var_r3_4;
    void *var_r4_2;

    /* draft: did not compile: var_r31 = saved_reg_r31; */
    var_r4 = lbl_80350E5C;
    var_r3 = 0;
loop_2:
    if (var_r4 != NULL) {
        /* draft: did not compile: var_r4 = *var_r4; */
        var_r3 += 1;
        goto loop_2;
    }
    if (var_r3 != 0) {
        var_r4_2 = lbl_80350E58;
loop_11:
        if (var_r4_2 != NULL) {
            if ((u8) M2C_FIELD(var_r4_2, u8 *, 0x1C) != 0xFF) {
                var_f4 = lbl_803522D8;
                var_r5 = lbl_80350E5C;
loop_8:
                if (var_r5 != NULL) {
                    temp_f3 = M2C_FIELD(var_r4_2, f32 *, 0xC) - M2C_FIELD(var_r5, f32 *, 0x10);
                    temp_f0 = M2C_FIELD(var_r5, f32 *, 0x18);
                    temp_f5 = M2C_FIELD(var_r4_2, f32 *, 0x10) - M2C_FIELD(var_r5, f32 *, 0x14);
                    temp_f1 = temp_f3 * temp_f3;
                    var_r5 = M2C_FIELD(var_r5, M2C_UNK **, 0);
                    temp_f2 = M2C_FIELD(var_r4_2, f32 *, 0x14) - temp_f0;
                    var_f4 += (temp_f2 * temp_f2) + (temp_f1 + (temp_f5 * temp_f5));
                    goto loop_8;
                }
                M2C_FIELD(var_r4_2, f32 *, 0x18) = (f32) (var_f4 / (f32) var_r3);
            }
            var_r4_2 = M2C_FIELD(var_r4_2, void **, 0);
            goto loop_11;
        }
    }
    var_r3_2 = lbl_80350E5C;
    var_r29 = 0;
loop_14:
    if (var_r3_2 != NULL) {
        /* draft: did not compile: var_r3_2 = *var_r3_2; */
        var_r29 += 1;
        goto loop_14;
    }
    if (var_r29 != 0) {
        var_r30 = lbl_80350E58;
loop_65:
        if (var_r30 != NULL) {
            if ((u8) M2C_FIELD(var_r30, u8 *, 0x1C) == 0xFF) {
                var_r3_3 = lbl_80350E5C;
                var_f31 = lbl_803522D8;
                var_r4_3 = var_r3_3;
loop_20:
                if (var_r4_3 != NULL) {
                    temp_f3_2 = M2C_FIELD(var_r30, f32 *, 0xC) - M2C_FIELD(var_r4_3, f32 *, 0x10);
                    temp_f0_2 = M2C_FIELD(var_r4_3, f32 *, 0x18);
                    temp_f4 = M2C_FIELD(var_r30, f32 *, 0x10) - M2C_FIELD(var_r4_3, f32 *, 0x14);
                    temp_f1_2 = temp_f3_2 * temp_f3_2;
                    var_r4_3 = M2C_FIELD(var_r4_3, M2C_UNK **, 0);
                    temp_f2_2 = M2C_FIELD(var_r30, f32 *, 0x14) - temp_f0_2;
                    var_f31 += (temp_f2_2 * temp_f2_2) + (temp_f1_2 + (temp_f4 * temp_f4));
                    goto loop_20;
                }
                var_r28 = 0;
                temp_f31 = var_f31 / (f32) var_r29;
loop_25:
                if (var_r3_3 != NULL) {
                    if (0 /* draft: did not compile */) {
                        var_r28 = 1;
                    } else {
                        var_r3_3 = M2C_FIELD(var_r3_3, M2C_UNK **, 0);
                        goto loop_25;
                    }
                }
                temp_r0 = -1 << lbl_80350E4C;
                temp_r3 = ~(temp_r0 | temp_r0);
                if (temp_r3 != (u32) (temp_r3 & lbl_80350E50)) {
                    var_r6 = 0;
                    var_ctr = lbl_80350E4C;
                    if ((u8) lbl_80350E4C > 0U) {
loop_28:
                        if (lbl_80350E50 & (1 << var_r6)) {
                            var_r6 += 1;
                            var_ctr -= 1;
                            if (var_ctr != 0) {
                                goto loop_28;
                            }
                        }
                    }
                    lbl_80350E50 |= 1 << var_r6;
                    M2C_FIELD(var_r30, u8 *, 0x1C) = (u8) (var_r6 + lbl_80350E4D);
                    goto block_47;
                }
                var_f1 = lbl_803522E8;
                var_r3_4 = lbl_80350E58;
loop_36:
                if (var_r3_4 != NULL) {
                    if ((u8) M2C_FIELD(var_r3_4, u8 *, 0x1C) != 0xFF) {
                        temp_f0_3 = M2C_FIELD(var_r3_4, f32 *, 0x18);
                        if (var_f1 < temp_f0_3) {
                            var_f1 = temp_f0_3;
                            var_r31 = var_r3_4;
                        }
                    }
                    var_r3_4 = M2C_FIELD(var_r3_4, void **, 0);
                    goto loop_36;
                }
                if ((var_r28 != 0) || (var_f1 > temp_f31)) {
                    var_r26 = lbl_80350E60;
loop_43:
                    if (var_r26 != NULL) {
                        if (0 /* draft: did not compile */) {
                            fn_80118C64(M2C_FIELD(var_r26, s32 *, 0x3C));
                            M2C_FIELD(var_r26, s32 *, 0x10) = (s32) (M2C_FIELD(var_r26, s32 *, 0x10) | 0x80000);
                            M2C_FIELD(var_r26, s32 *, 0x3C) = -1;
                        }
                        var_r26 = M2C_FIELD(var_r26, void **, 0);
                        goto loop_43;
                    }
                    temp_r12 = M2C_FIELD(var_r31, M2C_UNK (**)(u8), 0x24);
                    if (temp_r12 != NULL) {
                        temp_r12(M2C_FIELD(var_r31, u8 *, 0x1C));
                    }
                    fn_80119E84(M2C_FIELD(var_r31, u8 *, 0x1C));
                    M2C_FIELD(var_r30, u8 *, 0x1C) = (u8) M2C_FIELD(var_r31, u8 *, 0x1C);
                    M2C_FIELD(var_r31, u8 *, 0x1C) = 0xFFU;
                    M2C_FIELD(var_r31, s32 *, 8) = 0;
block_47:
                    M2C_FIELD(var_r30, f32 *, 0x18) = temp_f31;
                    M2C_FIELD(var_r30, u32 *, 0x2C) = (u32) (0x7F0000 & ((s32) (-(s32) var_r28 | var_r28) >> 0x1F));
                    if ((lbl_803522EC * (f32) M2C_FIELD(var_r30, u32 *, 0x2C)) >= (f32) lbl_803522F0) {
                        fn_80119DDC(M2C_FIELD(var_r30, u8 *, 0x1C), 1, 0);
                    } else {
                        fn_80119DDC(M2C_FIELD(var_r30, u8 *, 0x1C), 0, 0);
                    }
                    temp_r12_2 = M2C_FIELD(var_r30, M2C_UNK (**)(u8, s32), 0x20);
                    if (temp_r12_2 != NULL) {
                        temp_r12_2(M2C_FIELD(var_r30, u8 *, 0x1C), M2C_FIELD(var_r30, s32 *, 0x28));
                    }
                }
            } else {
                if (M2C_FIELD(var_r30, s32 *, 8) & 0x80000000) {
                    M2C_FIELD(var_r30, u32 *, 0x2C) = (u32) (M2C_FIELD(var_r30, u32 *, 0x2C) + 0x40000);
                    if ((u32) M2C_FIELD(var_r30, u32 *, 0x2C) >= 0x7F0000U) {
                        M2C_FIELD(var_r30, u32 *, 0x2C) = 0x7F0000U;
                        M2C_FIELD(var_r30, s32 *, 8) = (s32) (M2C_FIELD(var_r30, s32 *, 8) & 0x7FFFFFFF);
                    }
                    if ((lbl_803522EC * (f32) M2C_FIELD(var_r30, u32 *, 0x2C)) >= (f32) lbl_803522F0) {
                        fn_80119DDC(M2C_FIELD(var_r30, u8 *, 0x1C), 1, 0);
                    } else {
                        fn_80119DDC(M2C_FIELD(var_r30, u8 *, 0x1C), 0, 0);
                    }
                }
                if (M2C_FIELD(var_r30, s32 *, 8) & 0x40000000) {
                    M2C_FIELD(var_r30, u32 *, 0x2C) = (u32) (M2C_FIELD(var_r30, u32 *, 0x2C) + 0xFFFC0000);
                    if ((s32) M2C_FIELD(var_r30, u32 *, 0x2C) >= 0) {
                        M2C_FIELD(var_r30, u32 *, 0x2C) = 0U;
                        M2C_FIELD(var_r30, s32 *, 8) = (s32) (M2C_FIELD(var_r30, s32 *, 8) & 0xBFFFFFFF);
                    }
                    if ((lbl_803522EC * (f32) M2C_FIELD(var_r30, u32 *, 0x2C)) >= (f32) lbl_803522F0) {
                        fn_80119DDC(M2C_FIELD(var_r30, u8 *, 0x1C), 1, 0);
                    } else {
                        fn_80119DDC(M2C_FIELD(var_r30, u8 *, 0x1C), 0, 0);
                    }
                }
            }
            var_r30 = M2C_FIELD(var_r30, void **, 0);
            goto loop_65;
        }
    }
}

void fn_8012AA28(void *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4, f32 *arg5) {
    f32 var_f2;
    u8 sp1C;
    f32 sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f31;
    f32 temp_f3;
    f32 temp_f3_10;
    f32 temp_f3_2;
    f32 temp_f3_9;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f6;
    f32 temp_f7;
    f32 temp_f7_2;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 temp_f9;
    f32 temp_f9_2;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f1;
    f32 var_f28;
    f32 var_f29;
    s32 sp18;
    f32 var_f30;
    f32 var_f6;
    f64 temp_f2_2;
    f64 temp_f2_3;
    f64 temp_f2_4;
    f64 temp_f3_3;
    f64 temp_f3_4;
    f64 temp_f3_5;
    f64 temp_f3_6;
    f64 temp_f3_7;
    f64 temp_f3_8;
    s32 temp_r3;
    u32 var_r30;
    void *var_r31;

    temp_f31 = lbl_803522D8;
    *arg1 = temp_f31;
    var_f30 = temp_f31;
    var_f29 = temp_f31;
    *arg2 = lbl_803522FC;
    var_f28 = temp_f31;
    var_r31 = lbl_80350E5C;
    var_r30 = 0;
loop_34:
    if (var_r31 != NULL) {
        temp_f6 = M2C_FIELD(var_r31, f32 *, 0x1C);
        temp_f4 = M2C_FIELD(arg0, f32 *, 0x14) - (M2C_FIELD(var_r31, f32 *, 0x10) + (M2C_FIELD(var_r31, f32 *, 0x2C) * temp_f6));
        temp_f2 = M2C_FIELD(arg0, f32 *, 0x18) - (M2C_FIELD(var_r31, f32 *, 0x14) + (M2C_FIELD(var_r31, f32 *, 0x30) * temp_f6));
        temp_f3 = M2C_FIELD(arg0, f32 *, 0x1C) - (M2C_FIELD(var_r31, f32 *, 0x18) + (M2C_FIELD(var_r31, f32 *, 0x34) * temp_f6));
        var_f1 = (temp_f3 * temp_f3) + ((temp_f4 * temp_f4) + (temp_f2 * temp_f2));
        if (var_f1 > temp_f31) {
            temp_f2_2 = __frsqrte(var_f1);
            temp_f2_3 = lbl_803522F0 * temp_f2_2 * (lbl_80352300 - ((f64) var_f1 * (temp_f2_2 * temp_f2_2)));
            temp_f2_4 = lbl_803522F0 * temp_f2_3 * (lbl_80352300 - ((f64) var_f1 * (temp_f2_3 * temp_f2_3)));
            sp10 = (f32) ((f64) var_f1 * (lbl_803522F0 * temp_f2_4 * (lbl_80352300 - ((f64) var_f1 * (temp_f2_4 * temp_f2_4)))));
            var_f1 = sp10;
        }
        temp_f0 = M2C_FIELD(arg0, f32 *, 0x2C);
        M2C_ERROR(/* unknown instruction: cror eq, gt, eq */);
        if (temp_f0 == var_f1) {
            temp_f10 = var_f1 / temp_f0;
            temp_f7 = M2C_FIELD(arg0, f32 *, 0x38);
            M2C_ERROR(/* unknown instruction: cror eq, gt, eq */);
            if (temp_f7 == lbl_803522D8) {
                temp_f8 = M2C_FIELD(arg0, f32 *, 0x34);
                *arg1 += M2C_FIELD(var_r31, f32 *, 0x8C) * (temp_f8 + ((M2C_FIELD(arg0, f32 *, 0x30) - temp_f8) * (lbl_803522FC - (((lbl_803522FC - temp_f7) * temp_f10) + (temp_f10 * (temp_f7 * temp_f10))))));
            } else {
                temp_f9 = M2C_FIELD(arg0, f32 *, 0x34);
                temp_f8_2 = lbl_803522FC - temp_f10;
                *arg1 += M2C_FIELD(var_r31, f32 *, 0x8C) * (temp_f9 + ((M2C_FIELD(arg0, f32 *, 0x30) - temp_f9) * (lbl_803522FC - (((lbl_803522FC + temp_f7) * temp_f10) - (temp_f7 * (lbl_803522FC - (temp_f8_2 * temp_f8_2)))))));
            }
            temp_r3 = M2C_FIELD(arg0, s32 *, 0x10);
            if (!(temp_r3 & 0x80000)) {
                if ((temp_r3 & 8) || (M2C_FIELD(var_r31, s32 *, 0xC) & 1)) {
                    temp_f3_2 = M2C_FIELD(var_r31, f32 *, 0x20) - M2C_FIELD(arg0, f32 *, 0x20);
                    temp_f5 = M2C_FIELD(var_r31, f32 *, 0x24) - M2C_FIELD(arg0, f32 *, 0x24);
                    temp_f4_2 = M2C_FIELD(var_r31, f32 *, 0x28) - M2C_FIELD(arg0, f32 *, 0x28);
                    var_f2 = (temp_f4_2 * temp_f4_2) + ((temp_f3_2 * temp_f3_2) + (temp_f5 * temp_f5));
                    if (var_f2 > lbl_803522D8) {
                        temp_f3_3 = __frsqrte(var_f2);
                        temp_f3_4 = lbl_803522F0 * temp_f3_3 * (lbl_80352300 - ((f64) var_f2 * (temp_f3_3 * temp_f3_3)));
                        temp_f3_5 = lbl_803522F0 * temp_f3_4 * (lbl_80352300 - ((f64) var_f2 * (temp_f3_4 * temp_f3_4)));
                        spC = (f32) ((f64) var_f2 * (lbl_803522F0 * temp_f3_5 * (lbl_80352300 - ((f64) var_f2 * (temp_f3_5 * temp_f3_5)))));
                        var_f2 = spC;
                    }
                    if (var_f2 > lbl_803522D8) {
                        temp_f9_2 = (M2C_FIELD(arg0, f32 *, 0x14) + (M2C_FIELD(arg0, f32 *, 0x20) * lbl_80352308)) - (M2C_FIELD(var_r31, f32 *, 0x10) + (M2C_FIELD(var_r31, f32 *, 0x20) * lbl_80352308));
                        temp_f7_2 = (M2C_FIELD(arg0, f32 *, 0x18) + (M2C_FIELD(arg0, f32 *, 0x24) * lbl_80352308)) - (M2C_FIELD(var_r31, f32 *, 0x14) + (M2C_FIELD(var_r31, f32 *, 0x24) * lbl_80352308));
                        temp_f5_2 = (M2C_FIELD(arg0, f32 *, 0x1C) + (M2C_FIELD(arg0, f32 *, 0x28) * lbl_80352308)) - (M2C_FIELD(var_r31, f32 *, 0x18) + (M2C_FIELD(var_r31, f32 *, 0x28) * lbl_80352308));
                        var_f6 = (temp_f5_2 * temp_f5_2) + ((temp_f9_2 * temp_f9_2) + (temp_f7_2 * temp_f7_2));
                        if (var_f6 > lbl_803522D8) {
                            temp_f3_6 = __frsqrte(var_f6);
                            temp_f3_7 = lbl_803522F0 * temp_f3_6 * (lbl_80352300 - ((f64) var_f6 * (temp_f3_6 * temp_f3_6)));
                            temp_f3_8 = lbl_803522F0 * temp_f3_7 * (lbl_80352300 - ((f64) var_f6 * (temp_f3_7 * temp_f3_7)));
                            sp8 = (f32) ((f64) var_f6 * (lbl_803522F0 * temp_f3_8 * (lbl_80352300 - ((f64) var_f6 * (temp_f3_8 * temp_f3_8)))));
                            var_f6 = sp8;
                        }
                        if (var_f6 < var_f1) {
                            temp_f3_9 = M2C_FIELD(var_r31, f32 *, 0x88);
                            *arg2 = temp_f3_9 / (temp_f3_9 - var_f2);
                        } else {
                            temp_f3_10 = M2C_FIELD(var_r31, f32 *, 0x88);
                            *arg2 = temp_f3_10 / (temp_f3_10 + var_f2);
                        }
                    }
                }
                if (lbl_803522D8 != var_f1) {
                    /* draft: did not compile: salApplyMatrix(var_r31 + 0x50, arg0 + 0x14, &sp14); */
                    M2C_ERROR(/* unknown instruction: cror eq, lt, eq */);
                    if (sp1C == lbl_803522D8) {
                        temp_f1 = M2C_FIELD(var_r31, f32 *, 0x80);
                        if (-temp_f1 < sp1C) {
                            var_f0 = -sp1C / temp_f1;
                        } else {
                            var_f0 = lbl_803522FC;
                        }
                        var_f30 += var_f0;
                    } else {
                        temp_f1_2 = M2C_FIELD(var_r31, f32 *, 0x84);
                        if (temp_f1_2 > sp1C) {
                            var_f0_2 = -sp1C / temp_f1_2;
                        } else {
                            var_f0_2 = lbl_803522E8;
                        }
                        var_f30 += var_f0_2;
                    }
                    if ((lbl_803522D8 != sp14) || (lbl_803522D8 != sp18) || (lbl_803522D8 != sp1C)) {
                        salNormalizeVector(&sp14);
                    }
                    var_f28 += sp14;
                    var_f29 -= sp18;
                }
            }
        }
        var_r31 = M2C_FIELD(var_r31, void **, 0);
        var_r30 += 1;
        goto loop_34;
    }
    if (var_r30 != 0) {
        *arg3 = var_f28 / (f32) var_r30;
        *arg4 = var_f29 / (f32) var_r30;
        *arg5 = var_f30 / (f32) var_r30;
    }
}

void fn_8012AF44(u16 *arg0, u32 arg1) {
    u16 *var_r4;
    u32 var_ctr;
    void **temp_r3_2;
    void *temp_r31;
    void *temp_r3;
    void *var_r28;

    var_r28 = lbl_80350E60;
loop_15:
    if (var_r28 != NULL) {
        var_r4 = arg0;
        temp_r31 = M2C_FIELD(var_r28, void **, 0);
        var_ctr = arg1;
        if (arg1 > 0U) {
loop_2:
            if ((u16) M2C_FIELD(var_r28, u16 *, 0x44) == (u16) *var_r4) {
                if ((u8) lbl_80350D30 != 0) {
                    hwDisableIrq();
                    if (M2C_FIELD(var_r28, s32 *, 0x10) & 0x10000) {
                        temp_r3 = M2C_FIELD(var_r28, void **, 0);
                        if (temp_r3 != NULL) {
                            M2C_FIELD(temp_r3, void ***, 4) = (void **) M2C_FIELD(var_r28, void ***, 4);
                        }
                        temp_r3_2 = M2C_FIELD(var_r28, void ***, 4);
                        if (temp_r3_2 != NULL) {
                            *temp_r3_2 = M2C_FIELD(var_r28, void **, 0);
                        } else {
                            lbl_80350E60 = M2C_FIELD(var_r28, void **, 0);
                        }
                        M2C_FIELD(var_r28, s32 *, 0x10) = (s32) (u16) M2C_FIELD(var_r28, s32 *, 0x10);
                        if ((u32) (M2C_FIELD(var_r28, s32 *, 0x3C) + 0x10000) != -1U) {
                            fn_80118C64((long)(0));
                        }
                    }
                    hwEnableIrq();
                }
            } else {
                var_r4 += 0xA;
                var_ctr -= 1;
                if (var_ctr != 0U) {
                    goto loop_2;
                }
            }
        }
        var_r28 = temp_r31;
        goto loop_15;
    }
}

s32 fn_8012B040(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4) {
    M2C_UNK *temp_r4;
    M2C_UNK *temp_r4_2;
    M2C_UNK *temp_r6;
    M2C_UNK *temp_r6_2;
    M2C_UNK *var_r8;
    s32 temp_r6_3;
    s32 temp_r8;
    s32 var_r9;
    u32 *var_r5;
    s32 var_ctr;
    void *temp_r4_3;
    void *temp_r5;
    void *temp_r7;

    var_r5 = &lbl_8033C4F0;
    var_r9 = 0;
    var_ctr = lbl_80350E4A;
    if (lbl_80350E4A > 0) {
loop_1:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != (u32) *var_r5) {
            var_r5 += 0x10;
            var_r9 += 1;
            var_ctr -= 1;
            if (var_ctr != 0) {
                goto loop_1;
            }
        }
    }
    if (var_r9 == (s32) lbl_80350E4A) {
        if ((u8) lbl_80350E4A == 0x40) {
            return 0;
        }
        temp_r8 = var_r9 * 0x10;
        temp_r5 = &lbl_8033C4F0 + temp_r8;
        M2C_FIELD(temp_r5, s32 *, 4) = 0;
        *(&lbl_8033C4F0 + temp_r8) = M2C_FIELD(arg0, u32 *, 0x40);
        M2C_FIELD(temp_r5, s32 *, 8) = 0;
        M2C_FIELD(temp_r5, s16 *, 0xC) = 0;
        lbl_80350E4A += 1;
        goto block_7;
    }
block_7:
    if ((u8) lbl_80350E49 == 0x40) {
        return 0;
    }
    temp_r7 = &lbl_8033C4F0 + (var_r9 * 0x10);
    temp_r6 = M2C_FIELD((s32)temp_r7, M2C_UNK **, 4);
    var_r8 = temp_r6;
    if (temp_r6 != NULL) {
loop_13:
        temp_r6_2 = M2C_FIELD(var_r8, M2C_UNK **, 0);
        if (temp_r6_2 != NULL) {
            if (!(M2C_FIELD(var_r8, f32 *, 4) < farg0)) {
                var_r8 = temp_r6_2;
                goto loop_13;
            }
        }
        temp_r4 = &lbl_8033CBF0 + (lbl_80350E49 * 0x1C);
        /* draft: did not compile: *temp_r4 = temp_r6_2; */
        M2C_FIELD(var_r8, M2C_UNK **, 0) = temp_r4;
    } else {
        temp_r4_2 = &lbl_8033CBF0 + (lbl_80350E49 * 0x1C);
        /* draft: did not compile: *temp_r4_2 = temp_r6; */
        M2C_FIELD(temp_r7, M2C_UNK **, 4) = temp_r4_2;
    }
    temp_r6_3 = lbl_80350E49;
    lbl_80350E49 += 1;
    temp_r4_3 = &lbl_8033CBF0 + (temp_r6_3 * 0x1C);
    M2C_FIELD(temp_r4_3, void **, 0x18) = arg0;
    M2C_FIELD(temp_r4_3, f32 *, 0x14) = farg4;
    M2C_FIELD(temp_r4_3, f32 *, 8) = farg1;
    M2C_FIELD(temp_r4_3, f32 *, 0xC) = farg2;
    M2C_FIELD(temp_r4_3, f32 *, 0x10) = farg3;
    M2C_FIELD(temp_r4_3, f32 *, 4) = farg0;
    return 1;
}

void fn_8012B18C(void) {
    M2C_UNK *var_r27;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f1;
    f32 temp_f29;
    f32 temp_f2;
    f32 temp_f30;
    f32 temp_f31;
    s32 temp_r31;
    s32 temp_r3_2;
    s32 temp_r6_2;
    s32 var_r26;
    s32 var_r5;
    s32 var_r5_2;
    s32 var_r5_3;
    s32 var_r5_4;
    u16 temp_r3;
    u16 temp_r3_4;
    u16 var_r5_5;
    u32 temp_r3_3;
    u32 temp_r3_7;
    u8 temp_r4_2;
    u8 var_r22;
    u8 var_r6;
    void *temp_r24;
    void *temp_r3_5;
    void *temp_r3_6;
    void *temp_r4;
    void *temp_r5;
    void *temp_r6;
    void *var_r23;
    void *var_r25;

    var_r26 = 0;
    /* draft: did not compile: var_r27 = &lbl_8033C4F0; */
loop_49:
    if (var_r26 < (s32) lbl_80350E4A) {
        var_r25 = M2C_FIELD(var_r27, void **, 4);
loop_47:
        if (var_r25 != NULL) {
            temp_r5 = M2C_FIELD(var_r27, void **, 8);
            if ((temp_r5 != NULL) && (((u8) lbl_80350E4B == 0) || !(M2C_FIELD(var_r27, s32 *, 0) & 0x80000000) || ((s32) M2C_FIELD(var_r27, u16 *, 0xC) >= (s32) M2C_FIELD(M2C_FIELD(M2C_FIELD(var_r27, void **, 4), void **, 0x18), u8 *, 0x47)))) {
                temp_f1 = M2C_FIELD(var_r25, f32 *, 4) - M2C_FIELD(temp_r5, f32 *, 4);
                M2C_ERROR(/* unknown instruction: cror eq, lt, eq */);
                if (temp_f1 != lbl_80352314) {
                    M2C_ERROR(/* unknown instruction: cror eq, lt, eq */);
                    if (temp_f1 == lbl_80352318) {
                        temp_r4 = M2C_FIELD(var_r25, void **, 0x18);
                        temp_r3 = M2C_FIELD(temp_r4, u16 *, 0x48) + 1;
                        M2C_FIELD(temp_r4, u16 *, 0x48) = temp_r3;
                        if (temp_r3 >= 0x14U) {
                            goto block_11;
                        }
                    } else {
                        M2C_FIELD(M2C_FIELD(var_r25, void **, 0x18), u16 *, 0x48) = 0U;
                        goto block_11;
                    }
                }
            } else {
block_11:
                temp_r24 = M2C_FIELD(var_r25, void **, 0x18);
                temp_r6 = M2C_FIELD(temp_r24, void **, 8);
                if ((temp_r6 == NULL) || ((u8) M2C_FIELD(temp_r6, u8 *, 0x1C) != 0xFF)) {
                    if (temp_r6 != NULL) {
                        var_r6 = M2C_FIELD(temp_r6, u8 *, 0x1C);
                    } else {
                        var_r6 = M2C_FIELD(temp_r24, u8 *, 0x46);
                    }
                    temp_r3_2 = fn_80118950(M2C_FIELD(temp_r24, u16 *, 0x44), 0x7F, 0x40, var_r6, ((u32) M2C_FIELD(temp_r24, u32 *, 0x10) >> 4U) & 1);
                    M2C_FIELD(temp_r24, s32 *, 0x3C) = temp_r3_2;
                    if ((u32) (temp_r3_2 + 0x10000) == -1U) {
                        goto block_17;
                    }
                    temp_r3_3 = M2C_FIELD(temp_r24, u32 *, 0x10);
                    if (!(temp_r3_3 & 0x20)) {
                        M2C_FIELD(temp_r24, u32 *, 0x10) = (u32) (temp_r3_3 | 0x100000);
                        M2C_FIELD(temp_r24, f32 *, 0x4C) = (f32) lbl_803522D8;
                    } else {
                        M2C_FIELD(temp_r24, f32 *, 0x4C) = (f32) lbl_803522FC;
                    }
                    temp_f31 = M2C_FIELD(var_r25, f32 *, 0x14);
                    temp_f29 = M2C_FIELD(var_r25, f32 *, 0x10);
                    temp_f30 = M2C_FIELD(var_r25, f32 *, 8);
                    temp_f2 = M2C_FIELD(var_r25, f32 *, 4);
                    temp_r31 = M2C_FIELD(temp_r24, s32 *, 0x3C);
                    if (M2C_FIELD(temp_r24, u32 *, 0x10) & 0x100000) {
                        var_r5 = 0x7F;
                        temp_r6_2 = (s32) (lbl_803522F8 * (M2C_FIELD(temp_r24, f32 *, 0x4C) * temp_f2));
                        if ((u8) temp_r6_2 <= 0x7FU) {
                            var_r5 = temp_r6_2;
                        }
                        fn_80118A18(temp_r31, 7U, var_r5);
                    } else {
                        var_r5_2 = 0x7F;
                        temp_f0 = lbl_803522F8 * temp_f2;
                        if ((u8) (s32) temp_f0 <= 0x7FU) {
                            var_r5_2 = (s32) temp_f0;
                        }
                        fn_80118A18(temp_r31, 7U, var_r5_2);
                    }
                    var_r5_3 = 0x7F;
                    temp_f0_2 = lbl_8035230C * (lbl_803522FC + temp_f30);
                    if ((u8) (s32) temp_f0_2 <= 0x7FU) {
                        var_r5_3 = (s32) temp_f0_2;
                    }
                    fn_80118A18(temp_r31, 0xAU, var_r5_3);
                    var_r5_4 = 0x7F;
                    temp_f0_3 = lbl_8035230C * (lbl_803522FC - temp_f29);
                    if ((u8) (s32) temp_f0_3 <= 0x7FU) {
                        var_r5_4 = (s32) temp_f0_3;
                    }
                    fn_80118A18(temp_r31, 0x83U, var_r5_4);
                    temp_r3_4 = __cvt_fp2unsigned((float)(lbl_80352310 * temp_f31), (long)(0), (float)(0), (float)(0), (float)(0), (float)(0), (float)(0), (float)(0), (float)(0), (float)(0), (float)(0), (float)(0), (float)(0));
                    var_r5_5 = 0x3FFF;
                    if (temp_r3_4 <= 0x3FFFU) {
                        var_r5_5 = temp_r3_4;
                    }
                    fn_80118AFC(temp_r31, 0x84U, var_r5_5);
                    temp_r3_5 = M2C_FIELD(temp_r24, void **, 0xC);
                    if (temp_r3_5 != NULL) {
                        var_r23 = M2C_FIELD(temp_r3_5, void **, 4);
                        var_r22 = 0;
loop_43:
                        if (var_r22 < (u8) M2C_FIELD(M2C_FIELD(temp_r24, void **, 0xC), u8 *, 0)) {
                            temp_r4_2 = M2C_FIELD(var_r23, u8 *, 0);
                            if ((temp_r4_2 < 0x40U) || (temp_r4_2 == 0x80) || (temp_r4_2 == 0x84)) {
                                fn_80118AFC((long)(temp_r31), (unsigned short)((u16) M2C_FIELD(var_r23, u8 *, 2)), (unsigned short)(0));
                            } else {
                                fn_80118A18((long)(temp_r31), (unsigned char)(M2C_FIELD(var_r23, u8 *, 2)), (long)(0));
                            }
                            /* draft: did not compile: var_r23 += 4; */
                            var_r22 += 1;
                            goto loop_43;
                        }
                    }
                    M2C_FIELD(temp_r24, u32 *, 0x10) = (u32) (M2C_FIELD(temp_r24, u32 *, 0x10) & 0xFFFDFFFF);
                    M2C_FIELD(var_r27, u16 *, 0xC) = (u16) (M2C_FIELD(var_r27, u16 *, 0xC) + 1);
                    temp_r3_6 = M2C_FIELD(var_r27, void **, 8);
                    if (temp_r3_6 != NULL) {
                        M2C_FIELD(var_r27, void **, 8) = (void *) M2C_FIELD(temp_r3_6, void **, 0);
                    }
                } else {
block_17:
                    temp_r3_7 = M2C_FIELD(temp_r24, u32 *, 0x10);
                    if (!(temp_r3_7 & 2)) {
                        M2C_FIELD(temp_r24, u32 *, 0x10) = (u32) (temp_r3_7 | 0x40000);
                        M2C_FIELD(temp_r24, u32 *, 0x10) = (u32) (M2C_FIELD(temp_r24, u32 *, 0x10) & 0xFFFDFFFF);
                    }
                }
            }
            var_r25 = M2C_FIELD(var_r25, void **, 0);
            goto loop_47;
        }
        var_r27 += 0x10;
        var_r26 += 1;
        goto loop_49;
    }
}
