/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_800806D4();
s32 GetPaintName();
s32 GetOldPaintName();
s32 fn_80080738();
u8 *fn_80080790();
M2C_UNK strncpy(M2C_UNK *, s32, M2C_UNK);
extern M2C_UNK lbl_8022A1B0;
extern M2C_UNK lbl_8022A2B4;
extern M2C_UNK lbl_802CF10C;
extern s32 lbl_80350520;
extern M2C_UNK *lbl_80350718;
extern u8 lbl_8035071C;
extern M2C_UNK *lbl_80350720;
extern u8 lbl_80350724;
M2C_UNK fn_8008065C();
s32 strcmp(s32);
extern u8 lbl_8034FCA4;
M2C_UNK fn_8014BB10();
M2C_UNK fn_8014F858(void *, M2C_UNK *, M2C_UNK *);
extern M2C_UNK __files;
extern M2C_UNK lbl_8022A338;
M2C_UNK fn_80005888();
u8 *get_up_vector_for_viewing_mtx();
extern M2C_UNK lbl_8022A36C;
extern u8 lbl_8034FCA3;
extern M2C_UNK lbl_8022A388;
extern u8 lbl_8034FCA5;
M2C_UNK fn_80080698(s32, f32);
extern f32 lbl_80351AF8;
extern M2C_UNK lbl_801DA4D0;
s32 GetRetraceCount();
M2C_UNK fn_8009D16C(s32);
void *fn_8007B144();
M2C_UNK fn_80084684(M2C_UNK *, s32, s32 *, s32 *);
s32 fn_800A163C(void *, s32);
extern M2C_UNK lbl_802C0270;
M2C_UNK fn_80012CF8(s32, s32, s32);
M2C_UNK fn_800146F0(void **, M2C_UNK);
M2C_UNK fn_80015F5C(void **, M2C_UNK *);
M2C_UNK fn_80031578(void **, void **, M2C_UNK, M2C_UNK);
s32 fn_8007FC40();
M2C_UNK fn_800866BC();
M2C_UNK fn_800A17A8(s32);
s32 strlen(s32, void *);
s32 fn_80015EFC(s32, s32, s32);
s32 fn_80015F2C(s32);
extern M2C_UNK lbl_801CB330;
f32 fn_80080764(s32);

s32 scr_GetPaintName(s32 arg0);
s32 scr_GetOldPaintName(s32 arg0);
s32 scr_StrUpr(s32 arg0);
s32 scr_StrCmp(s32 arg0);
s32 fn_800985A4(u8 *arg0);
void **fn_800985CC(void **arg0, u32 arg1, u8 arg2);
void **fn_800986FC(void **arg0, u8 *arg1, u32 arg2);
M2C_UNK *fn_80098810(M2C_UNK *arg0, s16 arg1);
u8 **fn_800988B8(u8 **arg0);
void fn_800989A0(u32 **arg0, u32 arg1, u8 arg2, M2C_UNK arg_sp0);
s32 scr_ResetTimer(void *arg0);
s32 scr_GetTimer(void *arg0);
s32 scr_GetTimerCount(void *arg0);
s32 scr_GetWorkingTime(void *arg0);
s32 MkTime(u32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 scr_MkTime(s32 arg0, M2C_UNK arg_sp0);
s32 scr_DiffTime(s32 arg0);
s32 scr_DiffTimeEx(s32 arg0);
s32 scr_SumTime(s32 arg0);
s32 scr_GetRetraceCount(s32 arg0);
s32 scr_method_setTelopOrder(s32 arg0);
void *fn_800992E8(void *arg0);
s32 scr_CreateTT(void *arg0);
s32 scr_method_setTTText(s32 arg0);
s32 scr_method_getTTWidth(s32 arg0);
s32 scr_method_getTTHeight(s32 arg0);
s32 scr_method_setTTColor(s32 arg0);
s32 scr_method_setTTFontStyle(s32 arg0);
s32 scr_method_setTTDecor(s32 arg0);
s32 scr_method_setTTScale(s32 arg0);
s32 scr_method_getTTScaleX(s32 arg0);
s32 scr_method_getTTScaleY(s32 arg0);

s32 scr_GetPaintName(s32 arg0) {
    fn_800806D4(arg0, GetPaintName());
    return 0;
}

s32 scr_GetOldPaintName(s32 arg0) {
    fn_800806D4(arg0, GetOldPaintName());
    return 0;
}

s32 scr_StrUpr(s32 arg0) {
    void *spC;
    M2C_UNK sp8;
    s32 temp_r31;
    u8 *var_r30;
    u32 temp_r28;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 var_r0;
    s32 var_r4;

    if ((s8) lbl_8035071C == 0) {
        lbl_8035071C = 1;
        lbl_80350718 = &lbl_8022A1B0;
    }
    if ((s8) lbl_80350724 == 0) {
        lbl_80350724 = 1;
        lbl_80350720 = &lbl_8022A2B4;
    }
    temp_r31 = lbl_80350520;
    temp_r28 = fn_80080738(arg0) != 0;
    var_r30 = fn_80080790(arg0);
    /* draft: did not compile: fn_800988B8(&spC, &sp8); */
loop_39:
    var_r4 = *var_r30;
    var_r30 += 1;
    if ((s32) var_r4 != 0) {
        switch (temp_r31) {                         /* irregular */
        case 0x2:
            if ((s32) var_r4 < 0x80) {
                var_r0 = *(lbl_80350718 + var_r4);
            } else {
                var_r0 = *(lbl_80350720 + (var_r4 - 0x80));
            }
            if ((s32) var_r0 != 0x20) {
                var_r4 = var_r0;
            }
            break;
        case 0x5:
            if (((s32) var_r4 == 0x69) && ((s32) *var_r30 == 0x6A)) {
                fn_800985CC(&spC, 1, 0x49U);
                var_r4 = 0x4A;
                var_r30 += 1;
            } else {
                temp_r0 = *(lbl_80350718 + var_r4);
                if ((s32) temp_r0 != 0x20) {
                    var_r4 = temp_r0;
                }
            }
            break;
        case 0x100:
            if (((((s32) var_r4 >= 0x81) && ((s32) var_r4 <= 0x9F)) || (((s32) var_r4 >= 0xE0) && ((s32) var_r4 <= 0xFC))) && (temp_r0_2 = *var_r30, ((temp_r0_2 < 0x40U) == 0)) && (temp_r0_2 <= 0xFCU)) {
                fn_800985CC(&spC, 1, var_r4);
                var_r4 = *var_r30;
                var_r30 += 1;
            } else {
                temp_r0_3 = *(lbl_80350718 + var_r4);
                if ((s32) temp_r0_3 != 0x20) {
                    var_r4 = temp_r0_3;
                }
            }
            break;
        case 0x1:
            if ((s32) var_r4 == 0xDF) {
                fn_800985CC(&spC, 1, 0x53U);
                var_r4 = 0x53;
            } else {
                temp_r0_4 = *(lbl_80350718 + var_r4);
                if ((s32) temp_r0_4 != 0x20) {
                    var_r4 = temp_r0_4;
                }
            }
            break;
        default:
            temp_r0_5 = *(lbl_80350718 + var_r4);
            if ((s32) temp_r0_5 != 0x20) {
                var_r4 = temp_r0_5;
            }
            break;
        }
        fn_800985CC(&spC, 1, var_r4);
        if (temp_r28 == 0) {
            goto loop_39;
        }
    }
    if (temp_r28 != 0) {
        fn_800986FC(&spC, var_r30, fn_800985A4(var_r30));
    }
    strncpy(&lbl_802CF10C, M2C_FIELD(spC, s32 *, 0xC), 0x3FF);
    M2C_FIELD(&lbl_802CF10C, s8 *, 0x3FF) = 0;
    fn_800806D4(arg0, &lbl_802CF10C);
    /* draft: did not compile: fn_80098810(&spC, -1); */
    return 0;
}

s32 scr_StrCmp(s32 arg0) {
    s32 temp_r31;

    /* draft: did not compile: temp_r31 = fn_80080790((long)(0)); */
    fn_80080790(arg0);
    fn_8008065C(arg0, strcmp(temp_r31));
    return 0;
}

s32 fn_800985A4(u8 *arg0) {
    s32 var_r5;
    u8 *var_r3;

    var_r3 = arg0;
    var_r5 = 0;
loop_2:
    if ((u8) *var_r3 != (u8) lbl_8034FCA4) {
        var_r3 += 1;
        var_r5 += 1;
        goto loop_2;
    }
    return var_r5;
}

void **fn_800985CC(void **arg0, u32 arg1, u8 arg2) {
    s32 var_ctr_2;
    u32 temp_r28;
    u32 temp_r5;
    s8 var_ctr;
    u32 var_r4;
    u8 *var_r3;

    if (arg1 != 0U) {
        if ((arg1 > -2U) || ((u32) M2C_FIELD(*arg0, u32 *, 0) > (u32) (-2 - arg1))) {
            fn_8014F858(&__files + 0xA0, &lbl_8022A338, &__files);
            fn_8014BB10();
        }
        temp_r28 = M2C_FIELD(*arg0, u32 *, 0);
        /* draft: did not compile: fn_800989A0(arg0, temp_r28 + arg1, 1); */
        var_r4 = 0U;
        /* draft: did not compile: var_r3 = M2C_FIELD(*arg0, s32 *, 0xC) + temp_r28; */
        if (arg1 > 0U) {
            temp_r5 = arg1 - 8;
            if (arg1 > 8U) {
                var_ctr = (u32) (temp_r5 + 7) >> 3U;
                if (temp_r5 > 0U) {
                    do {
                        M2C_FIELD(var_r3, u8 *, 0) = arg2;
                        var_r4 += 8;
                        M2C_FIELD(var_r3, u8 *, 1) = arg2;
                        M2C_FIELD(var_r3, u8 *, 2) = arg2;
                        M2C_FIELD(var_r3, u8 *, 3) = arg2;
                        M2C_FIELD(var_r3, u8 *, 4) = arg2;
                        M2C_FIELD(var_r3, u8 *, 5) = arg2;
                        M2C_FIELD(var_r3, u8 *, 6) = arg2;
                        M2C_FIELD(var_r3, u8 *, 7) = arg2;
                        var_r3 += 8;
                        var_ctr -= 1;
                    } while (var_ctr != 0);
                }
            }
            var_ctr_2 = arg1 - var_r4;
            if (var_r4 < arg1) {
                do {
                    var_r3 += 1;
                    *var_r3 = arg2;
                    var_ctr_2 -= 1;
                } while (var_ctr_2 != 0);
            }
        }
    }
    return arg0;
}

void **fn_800986FC(void **arg0, u8 *arg1, u32 arg2) {
    s32 temp_r29;
    s32 var_ctr_2;
    u32 temp_r6;
    u32 var_ctr;
    s8 var_r4;
    u8 *var_r3;
    u8 *var_r5;
    u8 temp_r0;
    u8 temp_r0_2;

    if (arg2 != 0U) {
        temp_r29 = M2C_FIELD(*arg0, s32 *, 0);
        /* draft: did not compile: fn_800989A0(temp_r29 + arg2, 1); */
        var_r5 = arg1;
        var_r4 = 0U;
        /* draft: did not compile: var_r3 = M2C_FIELD(*arg0, s32 *, 0xC) + temp_r29; */
        if (arg2 > 0U) {
            temp_r6 = arg2 - 8;
            if (arg2 > 8U) {
                var_ctr = (u32) (temp_r6 + 7) >> 3U;
                if (temp_r6 > 0U) {
                    do {
                        var_r4 += 8;
                        M2C_FIELD(var_r3, u8 *, 0) = M2C_FIELD(var_r5, u8 *, 0);
                        M2C_FIELD(var_r3, u8 *, 1) = (u8) M2C_FIELD(var_r5, u8 *, 1);
                        M2C_FIELD(var_r3, u8 *, 2) = (u8) M2C_FIELD(var_r5, u8 *, 2);
                        M2C_FIELD(var_r3, u8 *, 3) = (u8) M2C_FIELD(var_r5, u8 *, 3);
                        M2C_FIELD(var_r3, u8 *, 4) = (u8) M2C_FIELD(var_r5, u8 *, 4);
                        M2C_FIELD(var_r3, u8 *, 5) = (u8) M2C_FIELD(var_r5, u8 *, 5);
                        M2C_FIELD(var_r3, u8 *, 6) = (u8) M2C_FIELD(var_r5, u8 *, 6);
                        temp_r0 = M2C_FIELD(var_r5, u8 *, 7);
                        var_r5 += 8;
                        M2C_FIELD(var_r3, u8 *, 7) = temp_r0;
                        var_r3 += 8;
                        var_ctr -= 1;
                    } while (var_ctr != 0);
                }
            }
            var_ctr_2 = arg2 - var_r4;
            if (var_r4 < arg2) {
                do {
                    temp_r0_2 = *var_r5;
                    var_r5 += 1;
                    *var_r3 = temp_r0_2;
                    var_r3 += 1;
                    var_ctr_2 -= 1;
                } while (var_ctr_2 != 0);
            }
        }
    }
    return arg0;
}

M2C_UNK *fn_80098810(M2C_UNK *arg0, s16 arg1) {
    M2C_UNK *temp_r3_2;
    M2C_UNK *var_r4;
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    u32 temp_r0;
    u32 temp_r3;
    u32 var_r0;

    if (arg0 != NULL) {
        /* draft: did not compile: var_r4 = *arg0; */
        temp_r3 = M2C_FIELD(var_r4, u32 *, 8);
        temp_cr0_eq = temp_r3 == 0U;
        if (temp_cr0_eq != 0) {
            var_r0 = 1U;
            if (temp_cr0_eq == 0) {
                var_r0 = temp_r3;
            }
            M2C_FIELD(var_r4, u32 *, 8) = var_r0;
        }
        temp_r0 = M2C_FIELD(var_r4, u32 *, 8) - 1;
        M2C_FIELD(var_r4, u32 *, 8) = temp_r0;
        if (temp_r0 == 0U) {

        } else {
            var_r4 = NULL;
        }
        /* draft: did not compile: *arg0 = var_r4; */
        /* draft: did not compile: temp_r3_2 = *arg0; */
        temp_cr0_eq_2 = temp_r3_2 == NULL;
        if (temp_cr0_eq_2 == 0) {
            if (temp_cr0_eq_2 == 0) {
                fn_80005888(M2C_FIELD(temp_r3_2, M2C_UNK **, 0xC));
            }
            fn_80005888(*arg0);
        }
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

u8 **fn_800988B8(u8 **arg0) {
    u8 *temp_r29;
    u8 *temp_r3;
    u8 *temp_r3_2;

    *arg0 = NULL;
    temp_r3 = get_up_vector_for_viewing_mtx(0x10);
    if (temp_r3 == NULL) {
        fn_8014F858(&__files + 0xA0, &lbl_8022A36C, &__files);
        fn_8014BB10();
    }
    *arg0 = temp_r3;
    temp_r29 = *arg0;
    if (temp_r29 != NULL) {
        M2C_FIELD(temp_r29, s32 *, 4) = 3;
        M2C_FIELD(temp_r29, s32 *, 8) = 1;
        temp_r3_2 = get_up_vector_for_viewing_mtx(M2C_FIELD(temp_r29, s32 *, 4) + 1);
        if (temp_r3_2 == NULL) {
            fn_8014F858(&__files + 0xA0, &lbl_8022A36C, &__files);
            fn_8014BB10();
        }
        M2C_FIELD(temp_r29, u8 **, 0xC) = temp_r3_2;
    }
    *M2C_FIELD(*arg0, u8 **, 0xC) = lbl_8034FCA3;
    M2C_FIELD(*arg0, s32 *, 0) = 0;
    return arg0;
}

void fn_800989A0(u32 **arg0, u32 arg1, u8 arg2, M2C_UNK arg_sp0) {
    u32 sp8;
    s32 temp_r4;
    s32 var_ctr_2;
    s32 var_ctr_4;
    s32 var_ctr_6;
    u32 *temp_r29;
    u32 *temp_r31;
    u32 *temp_r31_2;
    u32 *temp_r3;
    u32 *temp_r3_2;
    u32 *temp_r3_3;
    u32 *temp_r3_5;
    u32 *temp_r3_7;
    u32 *var_r31;
    u32 *var_r3;
    u32 *var_r3_2;
    u32 *var_r5;
    u32 *var_r5_2;
    u32 *var_r5_3;
    u32 *var_r6;
    u32 *var_r6_2;
    u32 temp_r0_3;
    u32 temp_r0_4;
    u32 temp_r30;
    u32 temp_r3_4;
    u32 temp_r3_6;
    u32 temp_r4_2;
    u32 temp_r4_3;
    u32 temp_r6;
    u32 temp_r7;
    u32 temp_r7_2;
    u32 temp_r7_3;
    u32 var_ctr;
    u32 var_ctr_3;
    u32 var_ctr_5;
    u32 var_r0;
    u32 var_r3_3;
    u32 var_r4;
    u32 var_r4_2;
    u32 var_r4_3;
    u32 var_r4_4;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r0_5;
    u8 temp_r0_6;
    u8 temp_r0_7;
    u8 temp_r0_8;

    if (arg1 > -2U) {
        fn_8014F858(&__files + 0xA0, &lbl_8022A388, &__files);
        fn_8014BB10();
    }
    if ((u32) M2C_FIELD(*arg0, u32 *, 8) > 1U) {
        sp8 = arg1;
        var_r31 = *arg0;
        if ((u32) M2C_FIELD(var_r31, u32 *, 8) <= 1U) {

        } else {
            /* draft: did not compile: temp_r3 = get_up_vector_for_viewing_mtx(0x10); */
            if (temp_r3 == NULL) {
                fn_8014F858(&__files + 0xA0, &lbl_8022A36C, &__files);
                fn_8014BB10();
            }
            if (temp_r3 != NULL) {
                temp_r4 = sp8 & 3;
                M2C_FIELD(temp_r3, s32 *, 4) = (s32) ((sp8 + 3) - temp_r4);
                M2C_FIELD(temp_r3, s32 *, 8) = 1;
                /* draft: did not compile: temp_r3_2 = get_up_vector_for_viewing_mtx(M2C_FIELD(temp_r3, s32 *, 4) + 1, temp_r4); */
                if (temp_r3_2 == NULL) {
                    fn_8014F858(&__files + 0xA0, &lbl_8022A36C, &__files);
                    fn_8014BB10();
                }
                M2C_FIELD(temp_r3, u32 **, 0xC) = temp_r3_2;
            }
            M2C_FIELD(var_r31, u32 *, 8) = (u32) (M2C_FIELD(var_r31, u32 *, 8) - 1);
            if (arg2 != 0) {
                if ((u32) M2C_FIELD(var_r31, u32 *, 0) < sp8) {
                    var_r3 = var_r31;
                } else {
                    var_r3 = &sp8;
                }
                var_r4 = 0U;
                var_r5 = M2C_FIELD(var_r31, u32 **, 0xC);
                temp_r6 = *var_r3 + 1;
                var_r3_2 = M2C_FIELD(temp_r3, u32 **, 0xC);
                if (temp_r6 > 0U) {
                    temp_r7 = temp_r6 - 8;
                    if (temp_r6 > 8U) {
                        var_ctr = (u32) (temp_r7 + 7) >> 3U;
                        if (temp_r7 > 0U) {
                            do {
                                var_r4 += 8;
                                M2C_FIELD(var_r3_2, u8 *, 0) = (u8) M2C_FIELD(var_r5, u8 *, 0);
                                M2C_FIELD(var_r3_2, u8 *, 1) = (u8) M2C_FIELD(var_r5, u8 *, 1);
                                M2C_FIELD(var_r3_2, u8 *, 2) = (u8) M2C_FIELD(var_r5, u8 *, 2);
                                M2C_FIELD(var_r3_2, u8 *, 3) = (u8) M2C_FIELD(var_r5, u8 *, 3);
                                M2C_FIELD(var_r3_2, u8 *, 4) = (u8) M2C_FIELD(var_r5, u8 *, 4);
                                M2C_FIELD(var_r3_2, u8 *, 5) = (u8) M2C_FIELD(var_r5, u8 *, 5);
                                M2C_FIELD(var_r3_2, u8 *, 6) = (u8) M2C_FIELD(var_r5, u8 *, 6);
                                temp_r0 = M2C_FIELD(var_r5, u8 *, 7);
                                var_r5 += 8;
                                M2C_FIELD(var_r3_2, u8 *, 7) = temp_r0;
                                var_r3_2 += 8;
                                var_ctr -= 1;
                            } while (var_ctr != 0);
                        }
                    }
                    var_ctr_2 = temp_r6 - var_r4;
                    if (var_r4 < temp_r6) {
                        do {
                            temp_r0_2 = *var_r5;
                            var_r5 += 1;
                            *var_r3_2 = temp_r0_2;
                            var_r3_2 += 1;
                            var_ctr_2 -= 1;
                        } while (var_ctr_2 != 0);
                    }
                }
                M2C_FIELD(temp_r3, u32 *, 0) = M2C_FIELD(var_r31, u32 *, 0);
            }
            var_r31 = temp_r3;
        }
        *arg0 = var_r31;
    }
    temp_r29 = *arg0;
    temp_r0_3 = M2C_FIELD(temp_r29, u32 *, 4);
    if (arg1 > temp_r0_3) {
        var_r3_3 = temp_r0_3;
loop_27:
        if (var_r3_3 < arg1) {
            var_r3_3 *= 2;
            goto loop_27;
        }
        temp_r0_4 = M2C_FIELD(temp_r29, u32 *, 0);
        var_r4_2 = var_r3_3;
        if (var_r3_3 < temp_r0_4) {
            var_r4_2 = temp_r0_4;
        }
        temp_r4_2 = M2C_FIELD(temp_r29, u32 *, 4);
        temp_r30 = (var_r4_2 + 3) - (var_r4_2 & 3);
        if (temp_r30 < temp_r4_2) {
            temp_r31 = M2C_FIELD(temp_r29, u32 **, 0xC);
            /* draft: did not compile: temp_r3_3 = get_up_vector_for_viewing_mtx(temp_r30 + 1); */
            if (temp_r3_3 == NULL) {
                fn_8014F858(&__files + 0xA0, &lbl_8022A36C, &__files);
                fn_8014BB10();
            }
            M2C_FIELD(temp_r29, u32 **, 0xC) = temp_r3_3;
            var_r6 = temp_r31;
            var_r4_3 = 0U;
            var_r5_2 = M2C_FIELD(temp_r29, u32 **, 0xC);
            temp_r3_4 = M2C_FIELD(temp_r29, u32 *, 0) + 1;
            if (temp_r3_4 > 0U) {
                temp_r7_2 = temp_r3_4 - 8;
                if (temp_r3_4 > 8U) {
                    var_ctr_3 = (u32) (temp_r7_2 + 7) >> 3U;
                    if (temp_r7_2 > 0U) {
                        do {
                            var_r4_3 += 8;
                            M2C_FIELD(var_r5_2, u8 *, 0) = (u8) M2C_FIELD(var_r6, u8 *, 0);
                            M2C_FIELD(var_r5_2, u8 *, 1) = (u8) M2C_FIELD(var_r6, u8 *, 1);
                            M2C_FIELD(var_r5_2, u8 *, 2) = (u8) M2C_FIELD(var_r6, u8 *, 2);
                            M2C_FIELD(var_r5_2, u8 *, 3) = (u8) M2C_FIELD(var_r6, u8 *, 3);
                            M2C_FIELD(var_r5_2, u8 *, 4) = (u8) M2C_FIELD(var_r6, u8 *, 4);
                            M2C_FIELD(var_r5_2, u8 *, 5) = (u8) M2C_FIELD(var_r6, u8 *, 5);
                            M2C_FIELD(var_r5_2, u8 *, 6) = (u8) M2C_FIELD(var_r6, u8 *, 6);
                            temp_r0_5 = M2C_FIELD(var_r6, u8 *, 7);
                            var_r6 += 8;
                            M2C_FIELD(var_r5_2, u8 *, 7) = temp_r0_5;
                            var_r5_2 += 8;
                            var_ctr_3 -= 1;
                        } while (var_ctr_3 != 0);
                    }
                }
                var_ctr_4 = temp_r3_4 - var_r4_3;
                if (var_r4_3 < temp_r3_4) {
                    do {
                        temp_r0_6 = *var_r6;
                        var_r6 += 1;
                        *var_r5_2 = temp_r0_6;
                        var_r5_2 += 1;
                        var_ctr_4 -= 1;
                    } while (var_ctr_4 != 0);
                }
            }
            fn_80005888(temp_r31);
            M2C_FIELD(temp_r29, u32 *, 4) = temp_r30;
        } else if (temp_r30 > temp_r4_2) {
            temp_r31_2 = M2C_FIELD(temp_r29, u32 **, 0xC);
            /* draft: did not compile: temp_r3_5 = get_up_vector_for_viewing_mtx(temp_r30 + 1); */
            if (temp_r3_5 == NULL) {
                fn_8014F858(&__files + 0xA0, &lbl_8022A36C, &__files);
                fn_8014BB10();
            }
            M2C_FIELD(temp_r29, u32 **, 0xC) = temp_r3_5;
            var_r6_2 = temp_r31_2;
            var_r4_4 = 0U;
            var_r5_3 = M2C_FIELD(temp_r29, u32 **, 0xC);
            temp_r3_6 = M2C_FIELD(temp_r29, u32 *, 0) + 1;
            if (temp_r3_6 > 0U) {
                temp_r7_3 = temp_r3_6 - 8;
                if (temp_r3_6 > 8U) {
                    var_ctr_5 = (u32) (temp_r7_3 + 7) >> 3U;
                    if (temp_r7_3 > 0U) {
                        do {
                            var_r4_4 += 8;
                            M2C_FIELD(var_r5_3, u8 *, 0) = (u8) M2C_FIELD(var_r6_2, u8 *, 0);
                            M2C_FIELD(var_r5_3, u8 *, 1) = (u8) M2C_FIELD(var_r6_2, u8 *, 1);
                            M2C_FIELD(var_r5_3, u8 *, 2) = (u8) M2C_FIELD(var_r6_2, u8 *, 2);
                            M2C_FIELD(var_r5_3, u8 *, 3) = (u8) M2C_FIELD(var_r6_2, u8 *, 3);
                            M2C_FIELD(var_r5_3, u8 *, 4) = (u8) M2C_FIELD(var_r6_2, u8 *, 4);
                            M2C_FIELD(var_r5_3, u8 *, 5) = (u8) M2C_FIELD(var_r6_2, u8 *, 5);
                            M2C_FIELD(var_r5_3, u8 *, 6) = (u8) M2C_FIELD(var_r6_2, u8 *, 6);
                            temp_r0_7 = M2C_FIELD(var_r6_2, u8 *, 7);
                            var_r6_2 += 8;
                            M2C_FIELD(var_r5_3, u8 *, 7) = temp_r0_7;
                            var_r5_3 += 8;
                            var_ctr_5 -= 1;
                        } while (var_ctr_5 != 0);
                    }
                }
                var_ctr_6 = temp_r3_6 - var_r4_4;
                if (var_r4_4 < temp_r3_6) {
                    do {
                        temp_r0_8 = *var_r6_2;
                        var_r6_2 += 1;
                        *var_r5_3 = temp_r0_8;
                        var_r5_3 += 1;
                        var_ctr_6 -= 1;
                    } while (var_ctr_6 != 0);
                }
            }
            fn_80005888(temp_r31_2);
            M2C_FIELD(temp_r29, u32 *, 4) = temp_r30;
        }
    }
    var_r0 = 1U;
    *(M2C_FIELD(*arg0, u32 **, 0xC) + arg1) = lbl_8034FCA5;
    M2C_FIELD(*arg0, u32 *, 0) = arg1;
    temp_r3_7 = *arg0;
    temp_r4_3 = M2C_FIELD(temp_r3_7, u32 *, 8);
    if (temp_r4_3 != 0U) {
        var_r0 = temp_r4_3;
    }
    M2C_FIELD(temp_r3_7, u32 *, 8) = var_r0;
}

s32 scr_ResetTimer(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x2E8) = 0;
    fn_8008065C((long)(0), (long)(0));
    return 0;
}

s32 scr_GetTimer(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x2E8);
    fn_80080698(temp_r4, (f32) temp_r4 / lbl_80351AF8);
    return 0;
}

s32 scr_GetTimerCount(void *arg0) {
    fn_8008065C((long)(M2C_FIELD(arg0, s32 *, 0x2E8)), (long)(0));
    return 0;
}

s32 scr_GetWorkingTime(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x2EC);
    fn_80080698(temp_r4, (f32) temp_r4 / lbl_80351AF8);
    return 0;
}

s32 MkTime(u32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 var_r10;
    u32 temp_r0;
    u32 temp_r9;

    temp_r9 = arg0 >> 0x1FU;
    temp_r0 = (arg0 << 0x1E) - temp_r9;
    var_r10 = (s32) (arg0 - 0x7CD) / 4;
    if (((((temp_r0 << 2) | (temp_r0 >> 0x1EU)) + temp_r9) == 0) && (arg1 >= 3)) {
        var_r10 += 1;
    }
    return arg5 + ((arg4 + ((arg3 + (((var_r10 + (((arg0 - 0x7D0) * 0x16D) + *(&lbl_801DA4D0 + (arg1 * 4))) + arg2) - 0x4758) * 0x18)) * 0x3C)) * 0x3C);
}

s32 scr_MkTime(s32 arg0, M2C_UNK arg_sp0) {
    s32 temp_r27;
    s32 temp_r28;
    s32 temp_r29;
    s32 temp_r30;
    s32 temp_r31;

    temp_r31 = fn_80080738((long)(0));
    temp_r30 = fn_80080738(arg0);
    temp_r29 = fn_80080738(arg0);
    temp_r28 = fn_80080738(arg0);
    temp_r27 = fn_80080738(arg0);
    fn_80080738(arg0);
    fn_8008065C(arg0, MkTime((unsigned long)(temp_r27), (long)(temp_r28), (long)(temp_r29), (long)(temp_r30), (long)(temp_r31), (long)(0)));
    return 0;
}

s32 scr_DiffTime(s32 arg0) {
    s32 temp_r31;
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r6;
    s32 var_r4;

    temp_r31 = fn_80080738((long)(0));
    temp_r3 = fn_80080738(arg0);
    temp_r6 = (((temp_r3 >> 0x1F) - (temp_r31 >> 0x1F)) - !M2C_CARRY) ^ 0x80000000;
    if (-((temp_r6 - temp_r6) - !M2C_CARRY) != 0) {
        var_r4 = 0x80000000;
    } else {
        temp_r4 = 0 ^ 0x80000000;
        if (-((temp_r4 - temp_r4) - !M2C_CARRY) != 0) {
            var_r4 = 0x7FFFFFFF;
        } else {
            var_r4 = temp_r3 - temp_r31;
        }
    }
    fn_8008065C(arg0, var_r4);
    return 0;
}

s32 scr_DiffTimeEx(s32 arg0) {
    s32 temp_r31;
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r6;
    s32 var_r4;

    temp_r31 = fn_80080738((long)(0));
    temp_r3 = fn_80080738(arg0);
    temp_r6 = (((temp_r3 >> 0x1F) - (temp_r31 >> 0x1F)) - !M2C_CARRY) ^ 0x80000000;
    if (-((temp_r6 - temp_r6) - !M2C_CARRY) != 0) {
        var_r4 = 0x80000001;
    } else {
        temp_r4 = 0 ^ 0x80000000;
        if (-((temp_r4 - temp_r4) - !M2C_CARRY) != 0) {
            var_r4 = 0x7FFFFFFF;
        } else {
            var_r4 = temp_r3 - temp_r31;
        }
    }
    fn_8008065C(arg0, var_r4);
    return 0;
}

s32 scr_SumTime(s32 arg0) {
    s32 temp_r31;
    s32 temp_r3;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r8;
    s32 temp_r9;
    s32 var_r4;

    temp_r31 = fn_80080738((long)(0));
    temp_r3 = fn_80080738(arg0);
    temp_r9 = temp_r3 + temp_r31;
    temp_r8 = (temp_r3 >> 0x1F) + (temp_r31 >> 0x1F) + M2C_CARRY;
    temp_r5 = 0 ^ 0x80000000;
    if (-((temp_r5 - temp_r5) - !M2C_CARRY) != 0) {
        var_r4 = 0x7FFFFFFF;
    } else {
        temp_r5_2 = temp_r8 ^ 0x80000000;
        if (-((temp_r5_2 - temp_r5_2) - !M2C_CARRY) != 0) {
            var_r4 = 0x80000000;
        } else {
            var_r4 = temp_r3 + temp_r31;
        }
    }
    fn_8008065C(arg0, var_r4);
    return 0;
}

s32 scr_GetRetraceCount(s32 arg0) {
    fn_8008065C(arg0, GetRetraceCount());
    return 0;
}

s32 scr_method_setTelopOrder(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_80080738((long)(0));
    /* draft: did not compile: fn_800992E8(arg0); */
    fn_8009D16C(temp_r31);
    fn_8008065C(arg0, 0);
    return 0;
}

void *fn_800992E8(void *arg0) {
    s32 temp_r0;
    u32 temp_r4;
    void *var_r3;

    fn_80080738((long)(0));
    var_r3 = fn_8007B144();
    if (var_r3 == NULL) {
        return NULL;
    }
    temp_r0 = M2C_FIELD(var_r3, s32 *, 8);
    temp_r4 = temp_r0 & 0x2000;
    if (temp_r4 == 0) {
        return NULL;
    }
    if ((temp_r0 & 2) && (temp_r4 == 0) && ((u32) M2C_FIELD(arg0, u32 *, 0x2E0) != (u32) M2C_FIELD(var_r3, u32 *, 0x24))) {
        var_r3 = NULL;
    }
    return var_r3;
}

s32 scr_CreateTT(void *arg0) {
    s32 sp10;
    s32 spC;
    M2C_UNK sp8;
    s32 temp_r31;
    s32 temp_r4;
    s32 var_r30;

    temp_r31 = fn_80080738((long)(0));
    /* draft: did not compile: var_r30 = get_up_vector_for_viewing_mtx(0x88); */
    var_r30 = var_r30 == 0 ? var_r30 : fn_800A163C(M2C_FIELD(arg0, void **, 0x2E0), *(&lbl_802C0270 + (temp_r31 * 4)));
    sp10 = var_r30;
    temp_r4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x2E0), s32 *, 0x38);
    spC = temp_r4 + 0x290;
    fn_80084684(&sp8, temp_r4 + 0x28C, &spC, &sp10);
    fn_8008065C(arg0, var_r30);
    return 0;
}

s32 scr_method_setTTText(s32 arg0) {
    void *sp10;
    void *spC;
    M2C_UNK sp8;
    s32 temp_r30;
    s32 temp_r31;
    s32 temp_r31_2;
    s32 var_r31;

    temp_r31 = fn_8007FC40();
    fn_80015F5C(&sp10, &sp8);
    var_r31 = temp_r31 - 1;
loop_2:
    if (var_r31 > 0) {
        fn_800866BC(&spC, fn_80080790(arg0), &sp10);
        fn_80031578(&sp10, &spC, 0, -1);
        fn_800146F0(&spC, -1);
        var_r31 -= 1;
        goto loop_2;
    }
    temp_r30 = fn_80080738(arg0);
    temp_r31_2 = M2C_FIELD(sp10, s32 *, 0xC);
    fn_80012CF8(temp_r30 + 0x50, temp_r31_2, strlen(temp_r31_2, sp10));
    fn_800A17A8(temp_r30);
    fn_8008065C(arg0, 0);
    fn_800146F0(&sp10, -1);
    return 0;
}

s32 scr_method_getTTWidth(s32 arg0) {
    f32 temp_f1;
    void *temp_r3;

    /* draft: did not compile: temp_r3 = fn_80080738((long)(0)); */
    temp_f1 = (f32) M2C_FIELD(temp_r3, s32 *, 0x2C);
    fn_8008065C(arg0, (s32) (temp_f1 * M2C_FIELD(temp_r3, f32 *, 0x48)), temp_r3, temp_f1);
    return 0;
}

s32 scr_method_getTTHeight(s32 arg0) {
    f32 temp_f1;
    u32 temp_r4;
    void *temp_r3;
    s32 temp_r5;

    /* draft: did not compile: temp_r3 = fn_80080738(); */
    temp_r5 = M2C_FIELD(temp_r3, s32 *, 0x78) + fn_80015F2C(M2C_FIELD(temp_r3, s32 *, 0));
    temp_r4 = M2C_FIELD(temp_r3, s32 *, 0x30);
    temp_f1 = (f32) (fn_80015EFC(M2C_FIELD(temp_r3, s32 *, 0), temp_r4, temp_r5) + ((temp_r4 - 1) * temp_r5));
    fn_8008065C(arg0, (s32) (M2C_FIELD(temp_r3, f32 *, 0x4C) * temp_f1), temp_f1);
    return 0;
}

s32 scr_method_setTTColor(s32 arg0) {
    s32 temp_r30;
    s32 temp_r31;
    u8 temp_r5;
    void *temp_r3;
    void *temp_r6;
    void *temp_r7;

    temp_r30 = fn_80080738();
    temp_r31 = fn_80080738(arg0);
    /* draft: did not compile: temp_r3 = fn_80080738(arg0); */
    temp_r7 = &lbl_801CB330 + (temp_r31 * 4);
    temp_r6 = &lbl_801CB330 + (temp_r30 * 4);
    M2C_FIELD(temp_r3, u8 *, 4) = (u8) M2C_FIELD(temp_r7, u8 *, 0);
    M2C_FIELD(temp_r3, u8 *, 5) = (u8) M2C_FIELD(temp_r7, u8 *, 1);
    M2C_FIELD(temp_r3, u8 *, 6) = (u8) M2C_FIELD(temp_r7, u8 *, 2);
    M2C_FIELD(temp_r3, u8 *, 7) = (u8) M2C_FIELD(temp_r7, u8 *, 3);
    M2C_FIELD(temp_r3, u8 *, 0xC) = (u8) M2C_FIELD(temp_r6, u8 *, 0);
    temp_r5 = M2C_FIELD(temp_r6, u8 *, 2);
    M2C_FIELD(temp_r3, u8 *, 0xD) = (u8) M2C_FIELD(temp_r6, u8 *, 1);
    M2C_FIELD(temp_r3, u8 *, 0xE) = temp_r5;
    M2C_FIELD(temp_r3, u8 *, 0xF) = (u8) M2C_FIELD(temp_r6, u8 *, 3);
    fn_8008065C(arg0, 0, temp_r5, temp_r6, temp_r7);
    return 0;
}

s32 scr_method_setTTFontStyle(s32 arg0) {
    void *temp_r31;

    /* draft: did not compile: temp_r31 = fn_80080738(); */
    M2C_FIELD(fn_80080738(arg0), void **, 0x70) = temp_r31;
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_setTTDecor(s32 arg0) {
    u8 temp_r5;
    void *temp_r31;
    void *temp_r3;
    void *temp_r6;
    void *var_r29;
    void *temp_r30;

    var_r29 = (void *)1;
    if (fn_8007FC40() == 4) {
        s32 dc_fn_80080738 = fn_80080738(arg0);
        /* draft: did not compile: var_r29 = dc_fn_80080738; */
    }
    /* draft: did not compile: temp_r30 = dc_fn_80080738; */
    /* draft: did not compile: temp_r31 = dc_fn_80080738; */
    /* draft: did not compile: temp_r3 = dc_fn_80080738; */
    M2C_FIELD(temp_r3, void **, 0x6C) = var_r29;
    temp_r6 = &lbl_801CB330 + ((s32) temp_r30 * 4);
    M2C_FIELD(temp_r3, u8 *, 8) = (u8) M2C_FIELD(temp_r6, u8 *, 0);
    temp_r5 = M2C_FIELD(temp_r6, u8 *, 2);
    M2C_FIELD(temp_r3, u8 *, 0xA) = temp_r5;
    M2C_FIELD(temp_r3, u8 *, 0xB) = (u8) M2C_FIELD(temp_r6, u8 *, 3);
    M2C_FIELD(temp_r3, void **, 0x68) = temp_r31;
    fn_8008065C(arg0, 0, temp_r5, temp_r6);
    M2C_FIELD(temp_r3, u8 *, 9) = (u8) M2C_FIELD(temp_r6, u8 *, 1);
    return 0;
}

s32 scr_method_setTTScale(s32 arg0) {
    f32 temp_f30;
    f32 var_f31;
    s32 temp_r31;
    void *temp_r3;

    temp_r31 = fn_8007FC40();
    temp_f30 = fn_80080764(arg0);
    if (temp_r31 == 2) {
        var_f31 = temp_f30;
    } else {
        var_f31 = fn_80080764(arg0);
    }
    /* draft: did not compile: temp_r3 = fn_80080738(arg0); */
    M2C_FIELD(temp_r3, f32 *, 0x4C) = temp_f30;
    fn_8008065C(arg0, 0);
    M2C_FIELD(temp_r3, f32 *, 0x48) = var_f31;
    return 0;
}

s32 scr_method_getTTScaleX(s32 arg0) {
    f32 sp8;
    void *temp_r3;

    /* draft: did not compile: temp_r3 = fn_80080738(); */
    if (&sp8 != NULL) {
        sp8 = M2C_FIELD(temp_r3, f32 *, 0x48);
    }
    fn_80080698(arg0, sp8);
    return 0;
}

s32 scr_method_getTTScaleY(s32 arg0) {
    f32 sp8;
    void *temp_r3;

    /* draft: did not compile: temp_r3 = fn_80080738(); */
    if (&sp8 != NULL) {
        sp8 = M2C_FIELD(temp_r3, f32 *, 0x4C);
    }
    fn_80080698(arg0, sp8);
    return 0;
}
