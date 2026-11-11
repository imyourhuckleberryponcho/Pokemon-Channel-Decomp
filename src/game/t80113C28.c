/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK synthVolume(u8, u16, u8, M2C_UNK);
M2C_UNK sndSeqSpeed(s32, u16);
M2C_UNK fn_80119924();
M2C_UNK sndSeqMute(s32, s32, s32);
M2C_UNK sndSeqVolume(u8, u16, s32, M2C_UNK);
s32 fn_801269B0(u16, u16, s32, s32 *, M2C_UNK, u8);
s32 fn_80126AFC(u16, u16, s32, s32 *, u8);
extern M2C_UNK lbl_80320580;
extern void *lbl_80350D28;
extern void *lbl_80350D2C;
extern void *lbl_80350D20;
M2C_UNK synthSetBpm(u32, u8, u8);
s32 __cvt_fp2unsigned(f32);
f64 Floor(s32, f32);
f64 fn_80156E70(u32, f32, f64, f32, f32, f32, f32);
extern s32 lbl_80350D18;
extern f32 lbl_803521C0;
extern f32 lbl_803521C4;
extern f32 lbl_803521C8;
extern f64 lbl_803521D0;

void fn_80113C28(void *arg0, s32 *arg1, u8 arg2, M2C_UNK arg_sp0);
void *GenerateNextTrackEvent(u8 arg0);
void fn_80114998();
void InitTrackEvents(void);
s32 HandleTrackEvents(u8 arg0, u32 arg1);

void fn_80113C28(void *arg0, s32 *arg1, u8 arg2, M2C_UNK arg_sp0) {
    s8 sp20;
    u8 sp18;
    u16 sp16;
    u16 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 temp_r25;
    s32 temp_r25_2;
    s32 temp_r25_3;
    s32 temp_r26;
    s32 temp_r3_12;
    s32 temp_r3_15;
    s32 temp_r3_16;
    s32 temp_r3_18;
    s32 temp_r3_5;
    s32 temp_r3_9;
    s32 temp_r4_8;
    s32 temp_r5_3;
    s32 temp_r7_2;
    s32 var_r3_10;
    s32 var_r3_3;
    s32 var_r3_5;
    s32 var_r3_6;
    s32 var_r3_7;
    s32 var_r4_10;
    s32 var_r4_13;
    s32 var_r4_6;
    s32 var_r4_7;
    s32 var_r6_5;
    u16 temp_r0;
    u16 temp_r30;
    u16 temp_r5_4;
    u16 var_r3_4;
    u32 temp_r3;
    u32 temp_r3_2;
    u32 temp_r3_3;
    u32 temp_r4;
    u32 temp_r4_5;
    u32 temp_r4_7;
    u32 temp_r5_2;
    u32 temp_r5_5;
    u32 temp_r6;
    u32 temp_r7_3;
    u32 var_r27;
    u32 var_r27_2;
    u32 var_r27_3;
    u32 var_r27_4;
    u8 *temp_r26_2;
    u8 *temp_r26_3;
    u8 *temp_r26_4;
    u8 *temp_r26_5;
    u8 temp_r28;
    u8 temp_r3_4;
    u8 temp_r4_2;
    void **temp_r3_6;
    void *temp_r3_10;
    void *temp_r3_11;
    void *temp_r3_13;
    void *temp_r3_14;
    void *temp_r3_17;
    void *temp_r3_7;
    void *temp_r3_8;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_6;
    void *temp_r4_9;
    void *temp_r5;
    void *var_r25;
    void *var_r25_2;
    void *var_r25_3;
    void *var_r25_4;
    void *var_r3;
    void *var_r3_2;
    void *var_r3_8;
    void *var_r3_9;
    void *var_r4;
    void *var_r4_11;
    void *var_r4_12;
    void *var_r4_2;
    void *var_r4_3;
    void *var_r4_4;
    void *var_r4_5;
    void *var_r4_8;
    void *var_r4_9;
    void *var_r5;
    void *var_r6;
    void *var_r6_2;
    void *var_r6_3;
    void *var_r6_4;

    var_r6 = lbl_80350D2C;
    var_r3 = var_r6;
    temp_r4 = (M2C_FIELD(arg0, s32 *, 0)) & 0x7FFFFFFF;
loop_4:
    if (var_r3 == NULL) {
        var_r3_2 = lbl_80350D28;
loop_9:
        if (var_r3_2 == NULL) {
            var_r3_3 = -1;
        } else if ((u32) M2C_FIELD(var_r3_2, u32 *, 0xC) == temp_r4) {
            var_r3_3 = (M2C_FIELD(var_r3_2, u8 *, 9) & ~0x80000000) | ((M2C_FIELD(arg0, s32 *, 0)) & 0x80000000);
        } else {
            var_r3_2 = M2C_FIELD(var_r3_2, void **, 0);
            goto loop_9;
        }
    } else if ((u32) M2C_FIELD(var_r3, u32 *, 0xC) == temp_r4) {
        var_r3_3 = (M2C_FIELD(var_r3, u8 *, 9) & ~0x80000000) | ((M2C_FIELD(arg0, s32 *, 0)) & 0x80000000);
    } else {
        var_r3 = M2C_FIELD(var_r3, void **, 0);
        goto loop_4;
    }
    temp_r4_2 = M2C_FIELD(arg0, u8 *, 0x26);
    if (temp_r4_2 & 4) {
        temp_r5 = &lbl_80320580 + (var_r3_3 * 0x1868);
        M2C_FIELD(temp_r5, s32 *, 0xEB4) = (s32) M2C_FIELD(arg0, s32 *, 0);
        M2C_FIELD(temp_r5, s32 *, 0xEB8) = (s32) M2C_FIELD(arg0, s32 *, 4);
        M2C_FIELD(temp_r5, s32 *, 0xEBC) = (s32) M2C_FIELD(arg0, s32 *, 8);
        M2C_FIELD(temp_r5, s32 *, 0xEC0) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
        M2C_FIELD(temp_r5, s32 *, 0xEC4) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
        M2C_FIELD(temp_r5, s32 *, 0xEC8) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
        M2C_FIELD(temp_r5, s32 *, 0xECC) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
        M2C_FIELD(temp_r5, s32 *, 0xED0) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
        M2C_FIELD(temp_r5, s32 *, 0xED4) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
        M2C_FIELD(temp_r5, s32 *, 0xED8) = (s32) M2C_FIELD(arg0, s32 *, 0x24);
        M2C_FIELD(temp_r5, s8 *, 0xEE0) = 1;
        M2C_FIELD(temp_r5, s32 **, 0xEDC) = arg1;
        M2C_FIELD(temp_r5, u8 *, 0xEDA) = (u8) (M2C_FIELD(temp_r5, u8 *, 0xEDA) & 0xFFFFFFFB);
        *arg1 = M2C_FIELD(arg0, s32 *, 0) | 0x80000000;
        return;
    }
    if (arg2 != 0) {
        temp_r0 = (u16) M2C_FIELD(arg0, s32 *, 4);
        var_r3_4 = 5;
        if (temp_r0 >= 5U) {
            var_r3_4 = temp_r0;
        }
        if (temp_r4_2 & 1) {
            temp_r3 = (M2C_FIELD(arg0, s32 *, 0)) & 0x7FFFFFFF;
loop_21:
            if (var_r6 == NULL) {
                var_r4 = lbl_80350D28;
loop_26:
                if (var_r4 == NULL) {
                    var_r3_5 = -1;
                } else if ((u32) M2C_FIELD(var_r4, u32 *, 0xC) == temp_r3) {
                    var_r3_5 = (M2C_FIELD(var_r4, u8 *, 9) & ~0x80000000) | ((M2C_FIELD(arg0, s32 *, 0)) & 0x80000000);
                } else {
                    var_r4 = M2C_FIELD(var_r4, void **, 0);
                    goto loop_26;
                }
            } else if ((u32) M2C_FIELD(var_r6, u32 *, 0xC) == temp_r3) {
                var_r3_5 = (M2C_FIELD(var_r6, u8 *, 9) & ~0x80000000) | ((M2C_FIELD(arg0, s32 *, 0)) & 0x80000000);
            } else {
                var_r6 = M2C_FIELD(var_r6, void **, 0);
                goto loop_21;
            }
            if ((u32) (var_r3_5 + 0x10000) != -1U) {
                if (!(var_r3_5 & 0x80000000)) {
                    temp_r26 = var_r3_5;
                    temp_r26 *= 0x1868;
                    synthVolume(0U, var_r3_4, M2C_FIELD((&lbl_80320580 + temp_r26), u8 *, 0xEB0), 2);
                    var_r27 = 0U;
                    var_r25 = &lbl_80320580 + temp_r26;
                    /* draft: did not compile: temp_r26_2 = var_r25 + 0xEB0; */
                    do {
                        if ((u8) M2C_FIELD(var_r25, u8 *, 0x324) != (u8) *temp_r26_2) {
                            synthVolume(0U, var_r3_4, 0U, -1);
                        }
                        var_r27 += 1;
                        /* draft: did not compile: var_r25 += 1; */
                    } while (var_r27 < 0x40U);
                } else {
                    temp_r4_3 = &lbl_80320580 + ((var_r3_5 & 0x7FFFFFFF) * 0x1868);
                    M2C_FIELD(temp_r4_3, u8 *, 0xEDA) = (u8) (M2C_FIELD(temp_r4_3, u8 *, 0xEDA) | 8);
                    M2C_FIELD(temp_r4_3, s8 *, 0xECC) = 0;
                }
            }
        } else if (temp_r4_2 & 0x40) {
            temp_r3_2 = (M2C_FIELD(arg0, s32 *, 0)) & 0x7FFFFFFF;
loop_41:
            if (var_r6 == NULL) {
                var_r4_2 = lbl_80350D28;
loop_46:
                if (var_r4_2 == NULL) {
                    var_r3_6 = -1;
                } else if ((u32) M2C_FIELD(var_r4_2, u32 *, 0xC) == temp_r3_2) {
                    var_r3_6 = (M2C_FIELD(var_r4_2, u8 *, 9) & ~0x80000000) | ((M2C_FIELD(arg0, s32 *, 0)) & 0x80000000);
                } else {
                    var_r4_2 = M2C_FIELD(var_r4_2, void **, 0);
                    goto loop_46;
                }
            } else if ((u32) M2C_FIELD(var_r6, u32 *, 0xC) == temp_r3_2) {
                var_r3_6 = (M2C_FIELD(var_r6, u8 *, 9) & ~0x80000000) | ((M2C_FIELD(arg0, s32 *, 0)) & 0x80000000);
            } else {
                var_r6 = M2C_FIELD(var_r6, void **, 0);
                goto loop_41;
            }
            if ((u32) (var_r3_6 + 0x10000) != -1U) {
                if (!(var_r3_6 & 0x80000000)) {
                    temp_r25 = var_r3_6 * 0x1868;
                    synthVolume(0U, var_r3_4, M2C_FIELD((&lbl_80320580 + temp_r25), u8 *, 0xEB0), 3);
                    var_r27_2 = 0U;
                    var_r25_2 = &lbl_80320580 + temp_r25;
                    /* draft: did not compile: temp_r26_3 = var_r25_2 + 0xEB0; */
                    do {
                        if ((u8) M2C_FIELD(var_r25_2, u8 *, 0x324) != (u8) *temp_r26_3) {
                            synthVolume(0U, var_r3_4, 0U, -1);
                        }
                        var_r27_2 += 1;
                        /* draft: did not compile: var_r25_2 += 1; */
                    } while (var_r27_2 < 0x40U);
                } else {
                    temp_r4_4 = &lbl_80320580 + ((var_r3_6 & 0x7FFFFFFF) * 0x1868);
                    M2C_FIELD(temp_r4_4, u8 *, 0xEDA) = (u8) (M2C_FIELD(temp_r4_4, u8 *, 0xEDA) | 0x80);
                    M2C_FIELD(temp_r4_4, s8 *, 0xECC) = 0;
                }
            }
        } else {
            temp_r3_3 = (M2C_FIELD(arg0, s32 *, 0)) & 0x7FFFFFFF;
loop_60:
            if (var_r6 == NULL) {
                var_r4_3 = lbl_80350D28;
loop_65:
                if (var_r4_3 == NULL) {
                    var_r3_7 = -1;
                } else if ((u32) M2C_FIELD(var_r4_3, u32 *, 0xC) == temp_r3_3) {
                    var_r3_7 = (M2C_FIELD(var_r4_3, u8 *, 9) & ~0x80000000) | ((M2C_FIELD(arg0, s32 *, 0)) & 0x80000000);
                } else {
                    var_r4_3 = M2C_FIELD(var_r4_3, void **, 0);
                    goto loop_65;
                }
            } else if ((u32) M2C_FIELD(var_r6, u32 *, 0xC) == temp_r3_3) {
                var_r3_7 = (M2C_FIELD(var_r6, u8 *, 9) & ~0x80000000) | ((M2C_FIELD(arg0, s32 *, 0)) & 0x80000000);
            } else {
                var_r6 = M2C_FIELD(var_r6, void **, 0);
                goto loop_60;
            }
            if ((u32) (var_r3_7 + 0x10000) != -1U) {
                if (!(var_r3_7 & 0x80000000)) {
                    temp_r25_2 = var_r3_7 * 0x1868;
                    synthVolume(0U, var_r3_4, M2C_FIELD((&lbl_80320580 + temp_r25_2), u8 *, 0xEB0), 1);
                    var_r27_3 = 0U;
                    var_r25_3 = &lbl_80320580 + temp_r25_2;
                    /* draft: did not compile: temp_r26_4 = var_r25_3 + 0xEB0; */
                    do {
                        if ((u8) M2C_FIELD(var_r25_3, u8 *, 0x324) != (u8) *temp_r26_4) {
                            synthVolume(0U, var_r3_4, 0U, -1);
                        }
                        var_r27_3 += 1;
                        /* draft: did not compile: var_r25_3 += 1; */
                    } while (var_r27_3 < 0x40U);
                } else {
                    M2C_FIELD((&lbl_80320580 + ((var_r3_7 & 0x7FFFFFFF) * 0x1868)), s32 *, 0xEDC) = 0;
                }
            }
        }
    } else if (temp_r4_2 & 1) {
        sndSeqVolume(0U, (u16) M2C_FIELD(arg0, s32 *, 4), (M2C_FIELD(arg0, s32 *, 0)), 2);
    } else if (temp_r4_2 & 0x40) {
        sndSeqVolume(0U, (u16) M2C_FIELD(arg0, s32 *, 4), (M2C_FIELD(arg0, s32 *, 0)), 3);
    } else {
        sndSeqVolume(0U, (u16) M2C_FIELD(arg0, s32 *, 4), (M2C_FIELD(arg0, s32 *, 0)), 1);
    }
    if (arg1 != NULL) {
        temp_r3_4 = M2C_FIELD(arg0, u8 *, 0x26);
        if (temp_r3_4 & 2) {
            temp_r3_5 = M2C_FIELD(arg0, s32 *, 8);
            var_r6_2 = lbl_80350D2C;
            temp_r5_2 = temp_r3_5 & 0x7FFFFFFF;
            var_r4_4 = var_r6_2;
loop_86:
            if (var_r4_4 == NULL) {
                var_r4_5 = lbl_80350D28;
loop_91:
                if (var_r4_5 == NULL) {
                    var_r4_6 = -1;
                } else if ((u32) M2C_FIELD(var_r4_5, u32 *, 0xC) == temp_r5_2) {
                    var_r4_6 = (M2C_FIELD(var_r4_5, u8 *, 9) & ~0x80000000) | (temp_r3_5 & 0x80000000);
                } else {
                    var_r4_5 = M2C_FIELD(var_r4_5, void **, 0);
                    goto loop_91;
                }
            } else if ((u32) M2C_FIELD(var_r4_4, u32 *, 0xC) == temp_r5_2) {
                var_r4_6 = (M2C_FIELD(var_r4_4, u8 *, 9) & ~0x80000000) | (temp_r3_5 & 0x80000000);
            } else {
                var_r4_4 = M2C_FIELD(var_r4_4, void **, 0);
                goto loop_86;
            }
            if ((u32) (var_r4_6 + 0x10000) != -1U) {
                if (arg2 != 0) {
                    temp_r4_5 = temp_r3_5 & 0x7FFFFFFF;
loop_99:
                    if (var_r6_2 == NULL) {
                        var_r5 = lbl_80350D28;
loop_104:
                        if (var_r5 == NULL) {
                            var_r4_7 = -1;
                        } else if ((u32) M2C_FIELD(var_r5, u32 *, 0xC) == temp_r4_5) {
                            var_r4_7 = (M2C_FIELD(var_r5, u8 *, 9) & ~0x80000000) | (temp_r3_5 & 0x80000000);
                        } else {
                            var_r5 = M2C_FIELD(var_r5, void **, 0);
                            goto loop_104;
                        }
                    } else if ((u32) M2C_FIELD(var_r6_2, u32 *, 0xC) == temp_r4_5) {
                        var_r4_7 = (M2C_FIELD(var_r6_2, u8 *, 9) & ~0x80000000) | (temp_r3_5 & 0x80000000);
                    } else {
                        var_r6_2 = M2C_FIELD(var_r6_2, void **, 0);
                        goto loop_99;
                    }
                    if (!(var_r4_7 & 0x80000000)) {
                        temp_r4_6 = &lbl_80320580 + (var_r4_7 * 0x1868);
                        if ((u8) M2C_FIELD(temp_r4_6, u8 *, 8) == 2) {
                            temp_r3_6 = M2C_FIELD(temp_r4_6, void ***, 4);
                            if (temp_r3_6 != NULL) {
                                *temp_r3_6 = M2C_FIELD(temp_r4_6, void **, 0);
                            } else {
                                lbl_80350D28 = M2C_FIELD(temp_r4_6, void **, 0);
                            }
                            temp_r3_7 = M2C_FIELD(temp_r4_6, void **, 0);
                            if (temp_r3_7 != NULL) {
                                M2C_FIELD(temp_r3_7, void ***, 4) = (void **) M2C_FIELD(temp_r4_6, void ***, 4);
                            }
                            M2C_FIELD(temp_r4_6, void **, 0) = (void *) lbl_80350D2C;
                            if ((void *) lbl_80350D2C != NULL) {
                                M2C_FIELD(lbl_80350D2C, void **, 4) = temp_r4_6;
                            }
                            M2C_FIELD(temp_r4_6, void ***, 4) = NULL;
                            lbl_80350D2C = temp_r4_6;
                            M2C_FIELD(temp_r4_6, u8 *, 8) = 1U;
                        }
                    } else {
                        temp_r3_8 = &lbl_80320580 + ((var_r4_7 & 0x7FFFFFFF) * 0x1868);
                        M2C_FIELD(temp_r3_8, u8 *, 0xEDA) = (u8) (M2C_FIELD(temp_r3_8, u8 *, 0xEDA) & 0xFFFFFFF7);
                    }
                    temp_r7_2 = M2C_FIELD(arg0, s32 *, 8);
                    temp_r30 = (u16) M2C_FIELD(arg0, s32 *, 0xC);
                    temp_r28 = (u8) M2C_FIELD(arg0, s32 *, 0x18);
                    temp_r4_7 = temp_r7_2 & 0x7FFFFFFF;
                    var_r3_8 = lbl_80350D2C;
loop_121:
                    if (var_r3_8 == NULL) {
                        var_r3_9 = lbl_80350D28;
loop_126:
                        if (var_r3_9 == NULL) {
                            var_r3_10 = -1;
                        } else if ((u32) M2C_FIELD(var_r3_9, u32 *, 0xC) == temp_r4_7) {
                            var_r3_10 = (M2C_FIELD(var_r3_9, u8 *, 9) & ~0x80000000) | (temp_r7_2 & 0x80000000);
                        } else {
                            var_r3_9 = M2C_FIELD(var_r3_9, void **, 0);
                            goto loop_126;
                        }
                    } else if ((u32) M2C_FIELD(var_r3_8, u32 *, 0xC) == temp_r4_7) {
                        var_r3_10 = (M2C_FIELD(var_r3_8, u8 *, 9) & ~0x80000000) | (temp_r7_2 & 0x80000000);
                    } else {
                        var_r3_8 = M2C_FIELD(var_r3_8, void **, 0);
                        goto loop_121;
                    }
                    if ((u32) (var_r3_10 + 0x10000) != -1U) {
                        if (!(var_r3_10 & 0x80000000)) {
                            temp_r25_3 = var_r3_10 * 0x1868;
                            synthVolume(temp_r28, temp_r30, M2C_FIELD((&lbl_80320580 + temp_r25_3), u8 *, 0xEB0), 0);
                            var_r27_4 = 0U;
                            var_r25_4 = &lbl_80320580 + temp_r25_3;
                            /* draft: did not compile: temp_r26_5 = var_r25_4 + 0xEB0; */
                            do {
                                if ((u8) M2C_FIELD(var_r25_4, u8 *, 0x324) != (u8) *temp_r26_5) {
                                    synthVolume(temp_r28, temp_r30, 0U, -1);
                                }
                                var_r27_4 += 1;
                                /* draft: did not compile: var_r25_4 += 1; */
                            } while (var_r27_4 < 0x40U);
                        } else {
                            M2C_FIELD((&lbl_80320580 + ((var_r3_10 & 0x7FFFFFFF) * 0x1868)), u8 *, 0xECC) = temp_r28;
                        }
                    }
                    if (M2C_FIELD(arg0, u8 *, 0x26) & 0x10) {
                        temp_r3_9 = M2C_FIELD(arg0, s32 *, 8);
                        temp_r5_3 = M2C_FIELD(arg0, s32 *, 0x20);
                        temp_r4_8 = M2C_FIELD(arg0, s32 *, 0x1C);
                        temp_r7_3 = temp_r3_9 & 0x7FFFFFFF;
                        var_r6_3 = lbl_80350D2C;
loop_141:
                        if (var_r6_3 == NULL) {
                            var_r6_4 = lbl_80350D28;
loop_146:
                            if (var_r6_4 == NULL) {
                                var_r6_5 = -1;
                            } else if ((u32) M2C_FIELD(var_r6_4, u32 *, 0xC) == temp_r7_3) {
                                var_r6_5 = (M2C_FIELD(var_r6_4, u8 *, 9) & ~0x80000000) | (temp_r3_9 & 0x80000000);
                            } else {
                                var_r6_4 = M2C_FIELD(var_r6_4, void **, 0);
                                goto loop_146;
                            }
                        } else if ((u32) M2C_FIELD(var_r6_3, u32 *, 0xC) == temp_r7_3) {
                            var_r6_5 = (M2C_FIELD(var_r6_3, u8 *, 9) & ~0x80000000) | (temp_r3_9 & 0x80000000);
                        } else {
                            var_r6_3 = M2C_FIELD(var_r6_3, void **, 0);
                            goto loop_141;
                        }
                        if ((u32) (var_r6_5 + 0x10000) != -1U) {
                            if (!(var_r6_5 & 0x80000000)) {
                                temp_r3_10 = &lbl_80320580 + (var_r6_5 * 0x1868);
                                M2C_FIELD(temp_r3_10, s32 *, 0x11C) = temp_r4_8;
                                M2C_FIELD(temp_r3_10, s32 *, 0x120) = temp_r5_3;
                            } else {
                                temp_r3_11 = &lbl_80320580 + ((var_r6_5 & 0x7FFFFFFF) * 0x1868);
                                M2C_FIELD(temp_r3_11, u8 *, 0xEDA) = (u8) (M2C_FIELD(temp_r3_11, u8 *, 0xEDA) | 0x10);
                                M2C_FIELD(temp_r3_11, s32 *, 0xED0) = temp_r4_8;
                                M2C_FIELD(temp_r3_11, s32 *, 0xED4) = temp_r5_3;
                            }
                        }
                    }
                    if (M2C_FIELD(arg0, u8 *, 0x26) & 0x20) {
                        temp_r3_12 = M2C_FIELD(arg0, s32 *, 8);
                        temp_r5_4 = (u16) M2C_FIELD(arg0, s32 *, 0x24);
                        var_r4_8 = lbl_80350D2C;
                        temp_r6 = temp_r3_12 & 0x7FFFFFFF;
loop_157:
                        if (var_r4_8 == NULL) {
                            var_r4_9 = lbl_80350D28;
loop_162:
                            if (var_r4_9 == NULL) {
                                var_r4_10 = -1;
                            } else if ((u32) M2C_FIELD(var_r4_9, u32 *, 0xC) == temp_r6) {
                                var_r4_10 = (M2C_FIELD(var_r4_9, u8 *, 9) & ~0x80000000) | (temp_r3_12 & 0x80000000);
                            } else {
                                var_r4_9 = M2C_FIELD(var_r4_9, void **, 0);
                                goto loop_162;
                            }
                        } else if ((u32) M2C_FIELD(var_r4_8, u32 *, 0xC) == temp_r6) {
                            var_r4_10 = (M2C_FIELD(var_r4_8, u8 *, 9) & ~0x80000000) | (temp_r3_12 & 0x80000000);
                        } else {
                            var_r4_8 = M2C_FIELD(var_r4_8, void **, 0);
                            goto loop_157;
                        }
                        if (!(var_r4_10 & 0x80000000)) {
                            temp_r3_13 = &lbl_80320580 + (var_r4_10 * 0x1868);
                            M2C_FIELD(temp_r3_13, u16 *, 0x151A) = temp_r5_4;
                            M2C_FIELD(temp_r3_13, u16 *, 0x1552) = temp_r5_4;
                            M2C_FIELD(temp_r3_13, u16 *, 0x158A) = temp_r5_4;
                            M2C_FIELD(temp_r3_13, u16 *, 0x15C2) = temp_r5_4;
                            M2C_FIELD(temp_r3_13, u16 *, 0x15FA) = temp_r5_4;
                            M2C_FIELD(temp_r3_13, u16 *, 0x1632) = temp_r5_4;
                            M2C_FIELD(temp_r3_13, u16 *, 0x166A) = temp_r5_4;
                            M2C_FIELD(temp_r3_13, u16 *, 0x16A2) = temp_r5_4;
                            M2C_FIELD(temp_r3_13, u16 *, 0x16DA) = temp_r5_4;
                            M2C_FIELD(temp_r3_13, u16 *, 0x1712) = temp_r5_4;
                            M2C_FIELD(temp_r3_13, u16 *, 0x174A) = temp_r5_4;
                            M2C_FIELD(temp_r3_13, u16 *, 0x1782) = temp_r5_4;
                            M2C_FIELD(temp_r3_13, u16 *, 0x17BA) = temp_r5_4;
                            M2C_FIELD(temp_r3_13, u16 *, 0x17F2) = temp_r5_4;
                            M2C_FIELD(temp_r3_13, u16 *, 0x182A) = temp_r5_4;
                            M2C_FIELD(temp_r3_13, u16 *, 0x1862) = temp_r5_4;
                        } else {
                            temp_r3_14 = &lbl_80320580 + ((var_r4_10 & 0x7FFFFFFF) * 0x1868);
                            M2C_FIELD(temp_r3_14, u8 *, 0xEDA) = (u8) (M2C_FIELD(temp_r3_14, u8 *, 0xEDA) | 0x20);
                            M2C_FIELD(temp_r3_14, u16 *, 0xED8) = temp_r5_4;
                        }
                    }
                } else {
                    fn_80119924();
                    sndSeqVolume((u8) M2C_FIELD(arg0, s32 *, 0x18), (u16) M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 8), 0);
                    if (M2C_FIELD(arg0, u8 *, 0x26) & 0x10) {
                        sndSeqMute(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(arg0, s32 *, 0x20));
                    }
                    if (M2C_FIELD(arg0, u8 *, 0x26) & 0x20) {
                        sndSeqSpeed(M2C_FIELD(arg0, s32 *, 8), (u16) M2C_FIELD(arg0, s32 *, 0x24));
                    }
                }
                *arg1 = M2C_FIELD(arg0, s32 *, 8);
                return;
            }
            *arg1 = -1;
            return;
        }
        sp8 = 4;
        if (temp_r3_4 & 8) {
            sp8 = 4 | 0x10;
        }
        if (M2C_FIELD(arg0, u8 *, 0x26) & 0x20) {
            sp8 |= 2;
            sp14 = (u16) M2C_FIELD(arg0, s32 *, 0x24);
        }
        if (M2C_FIELD(arg0, u8 *, 0x26) & 0x10) {
            sp8 |= 1;
            spC = M2C_FIELD(arg0, s32 *, 0x1C);
            sp10 = M2C_FIELD(arg0, s32 *, 0x20);
        }
        sp16 = (u16) M2C_FIELD(arg0, s32 *, 0xC);
        sp18 = (u8) M2C_FIELD(arg0, s32 *, 0x18);
        sp20 = 0;
        if (arg2 != 0) {
            temp_r3_15 = fn_801269B0((u16) M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, u16 *, 0x16), M2C_FIELD(arg0, s32 *, 0x10), &sp8, 1, M2C_FIELD(arg0, u8 *, 0x19));
            *arg1 = temp_r3_15;
            if (((u32) (temp_r3_15 + 0x10000) != -1U) && (M2C_FIELD(arg0, u8 *, 0x26) & 0x80)) {
                temp_r3_16 = *arg1;
                var_r4_11 = lbl_80350D2C;
                temp_r5_5 = temp_r3_16 & 0x7FFFFFFF;
loop_186:
                if (var_r4_11 == NULL) {
                    var_r4_12 = lbl_80350D28;
loop_191:
                    if (var_r4_12 == NULL) {
                        var_r4_13 = -1;
                    } else if ((u32) M2C_FIELD(var_r4_12, u32 *, 0xC) == temp_r5_5) {
                        var_r4_13 = (M2C_FIELD(var_r4_12, u8 *, 9) & ~0x80000000) | (temp_r3_16 & 0x80000000);
                    } else {
                        var_r4_12 = M2C_FIELD(var_r4_12, void **, 0);
                        goto loop_191;
                    }
                } else if ((u32) M2C_FIELD(var_r4_11, u32 *, 0xC) == temp_r5_5) {
                    var_r4_13 = (M2C_FIELD(var_r4_11, u8 *, 9) & ~0x80000000) | (temp_r3_16 & 0x80000000);
                } else {
                    var_r4_11 = M2C_FIELD(var_r4_11, void **, 0);
                    goto loop_186;
                }
                if ((u32) (var_r4_13 + 0x10000) != -1U) {
                    if (!(var_r4_13 & 0x80000000)) {
                        temp_r3_17 = &lbl_80320580 + (var_r4_13 * 0x1868);
                        M2C_FIELD(temp_r3_17, s32 *, 0x11C) = 0;
                        M2C_FIELD(temp_r3_17, s32 *, 0x120) = 0;
                        return;
                    }
                    temp_r4_9 = &lbl_80320580 + ((var_r4_13 & 0x7FFFFFFF) * 0x1868);
                    M2C_FIELD(temp_r4_9, u8 *, 0xEDA) = (u8) (M2C_FIELD(temp_r4_9, u8 *, 0xEDA) | 0x10);
                    M2C_FIELD(temp_r4_9, s32 *, 0xED0) = 0;
                    M2C_FIELD(temp_r4_9, s32 *, 0xED4) = 0;
                }
            }
        } else {
            temp_r3_18 = fn_80126AFC((u16) M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, u16 *, 0x16), M2C_FIELD(arg0, s32 *, 0x10), &sp8, M2C_FIELD(arg0, u8 *, 0x19));
            *arg1 = temp_r3_18;
            if (((u32) (temp_r3_18 + 0x10000) != -1U) && (M2C_FIELD(arg0, u8 *, 0x26) & 0x80)) {
                sndSeqMute(*arg1, 0, 0);
            }
        }
    }
}

void *GenerateNextTrackEvent(u8 arg0) { } /* draft: stub */

void fn_80114998() { } /* draft: stub */

void InitTrackEvents(void) { } /* draft: stub */

s32 HandleTrackEvents(u8 arg0, u32 arg1) { return 0; } /* draft: stub */
