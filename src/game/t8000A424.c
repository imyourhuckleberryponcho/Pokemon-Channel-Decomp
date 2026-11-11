/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_800094B4(s32, s32, s32, s32, s32, M2C_UNK);
s32 fn_80009578(s32, s32, s32, s32, s32);
extern M2C_UNK lbl_8015E9B0;
extern M2C_UNK lbl_8015E9D4;
extern f32 lbl_80351068;
extern f64 lbl_80351070;
extern f64 lbl_80351078;
extern f64 lbl_80351080;
extern M2C_UNK lbl_801DB508;
extern M2C_UNK lbl_801DB4F8;
s32 PadGetRepeat(M2C_UNK);
f32 PadGetStickX(M2C_UNK);
f32 PadGetStickY(M2C_UNK);
extern s32 lbl_80350400;
extern u8 lbl_80350404;
extern f32 lbl_80351090;
extern f32 lbl_80351094;
extern f32 lbl_80351098;
extern f32 lbl_8035109C;
extern f32 lbl_803510A0;
extern f32 lbl_803510A4;
extern f32 lbl_803510A8;
extern f32 lbl_803510AC;
extern f32 lbl_803510B0;
extern f32 lbl_803510B4;
M2C_UNK fn_80015570(M2C_UNK, M2C_UNK, M2C_UNK);
extern s32 lbl_80350408;
extern u8 lbl_8035040C;
f64 Sin(s32, f32, f64);
extern s32 lbl_803503F0;
extern f64 lbl_803510B8;
extern f64 lbl_803510C0;
extern f32 lbl_803510C8;
extern f64 lbl_803510D0;
M2C_UNK fn_800EC404(void *, u8, u8, u8, u16);
M2C_UNK strcat(M2C_UNK *, s32 *);
M2C_UNK strcpy(M2C_UNK *, s32);
extern M2C_UNK lbl_8015E9F8;
extern M2C_UNK lbl_801DB518;
extern M2C_UNK lbl_801DB5F0;
extern M2C_UNK lbl_802BF100;
extern s32 lbl_803503EC;
extern s32 lbl_803506C4;
s32 fn_80008D18(s32, void *, void *);
M2C_UNK fn_80005888();
s32 get_up_vector_for_viewing_mtx(M2C_UNK);
u8 fn_8000E5B0(void *);
s32 fn_8001086C(s32, s32);
void **fn_800A1618(s32, s32);
s32 HSD_TlutLoadDesc(M2C_UNK **);
s32 HSD_Rand();
extern M2C_UNK lbl_8015EA18;
extern M2C_UNK lbl_8015EA38;
extern void *lbl_8035051C;

void fn_8000A424(s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, M2C_UNK arg_sp0);
void fn_8000AA18(void *arg0, s32 arg1);
void fn_8000AA3C(void *arg0);
void fn_8000AA5C(void *arg0);
void fn_8000AA94(void *arg0);
void fn_8000AAF4(void *arg0);
void fn_8000AB14(void *arg0);
void fn_8000AD2C(void *arg0, s32 arg1);
void fn_8000AEB4(void *arg0);
void fn_8000B054(void *arg0);
void fn_8000B204(void *arg0, M2C_UNK arg_sp0);
void fn_8000B4E8(void *arg0, s32 arg1);
s32 fn_8000B514(s32 arg0, void *arg1, void *arg2, s32 arg3, M2C_UNK arg_sp0);
void *fn_8000B8FC(void *arg0, s16 arg1);
void fn_8000B944(void *arg0, M2C_UNK arg_sp0);

void fn_8000A424(s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, M2C_UNK arg_sp0) {
    s32 unksp1E;
    s32 unksp1D;
    s32 spA0;
    s32 sp9C;
    s32 sp98;
    s32 sp94;
    s32 sp90;
    s32 sp64;
    s32 sp60;
    s32 sp5C;
    s32 sp58;
    s32 sp54;
    s32 sp50;
    s32 sp4C;
    s32 sp48;
    s32 sp44;
    s32 sp40;
    s32 sp3C;
    s32 sp38;
    s32 sp34;
    s32 sp30;
    s32 sp2C;
    s32 sp28;
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    f32 sp18;
    f32 sp14;
    f32 sp10;
    s32 spC;
    s32 sp8;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    f64 temp_f3;
    f64 temp_f3_2;
    f64 temp_f3_3;
    f64 temp_f3_4;
    f64 temp_f3_5;
    f64 temp_f3_6;
    f64 temp_f4;
    f64 temp_f4_2;
    f64 temp_f4_3;
    s32 *var_r28;
    s32 *var_r29;
    s32 *var_r30;
    s32 *var_r31;
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r3_5;
    s32 temp_r5;
    s32 temp_r7;
    s32 temp_r8;
    s32 var_r19;
    s32 var_r19_2;
    s32 var_r20;
    s32 var_r20_2;
    s32 var_r21;
    s32 var_r22;
    s32 var_r23;
    s32 var_r24;
    s32 var_r25;
    s32 var_r26;
    s32 var_r27;

    sp98 = arg4 - 1;
    sp9C = arg3 - 1;
    sp8 = arg5;
    spC = arg6;
    spA0 = 1;
    sp44 = M2C_FIELD(&lbl_8015E9B0, s32 *, 0);
    sp48 = M2C_FIELD(&lbl_8015E9B0, s32 *, 4);
    sp4C = M2C_FIELD(&lbl_8015E9B0, s32 *, 8);
    sp50 = M2C_FIELD(&lbl_8015E9B0, s32 *, 0xC);
    sp54 = M2C_FIELD(&lbl_8015E9B0, s32 *, 0x10);
    sp58 = M2C_FIELD(&lbl_8015E9B0, s32 *, 0x14);
    sp5C = M2C_FIELD(&lbl_8015E9B0, s32 *, 0x18);
    sp60 = M2C_FIELD(&lbl_8015E9B0, s32 *, 0x1C);
    sp64 = M2C_FIELD(&lbl_8015E9B0, s32 *, 0x20);
    sp20 = M2C_FIELD(&lbl_8015E9D4, s32 *, 0);
    sp24 = M2C_FIELD(&lbl_8015E9D4, s32 *, 4);
    sp28 = M2C_FIELD(&lbl_8015E9D4, s32 *, 8);
    sp2C = M2C_FIELD(&lbl_8015E9D4, s32 *, 0xC);
    sp30 = M2C_FIELD(&lbl_8015E9D4, s32 *, 0x10);
    sp34 = M2C_FIELD(&lbl_8015E9D4, s32 *, 0x14);
    sp38 = M2C_FIELD(&lbl_8015E9D4, s32 *, 0x18);
    sp3C = M2C_FIELD(&lbl_8015E9D4, s32 *, 0x1C);
    sp40 = M2C_FIELD(&lbl_8015E9D4, s32 *, 0x20);
loop_30:
    if (spA0 < sp98) {
        var_r27 = 1;
loop_28:
        if (var_r27 < sp9C) {
            if ((var_r27 == 1) || (var_r27 == (s32) (sp9C - 1)) || (spA0 == 1) || (spA0 == (s32) (sp98 - 1))) {
                var_r19 = 0;
                do {
                    var_r20 = 0;
loop_8:
                    fn_800094B4(var_r27 + (var_r20 - 1), spA0 + (var_r19 - 1), arg3, arg4, spC, 0);
                    var_r20 += 1;
                    if (var_r20 < 3) {
                        goto loop_8;
                    }
                    var_r19 += 1;
                } while (var_r19 < 3);
            } else {
                var_r29 = &sp44;
                sp94 = 0;
                var_r28 = &sp20;
                var_r26 = 0;
                sp90 = -1;
                var_r25 = 0;
                var_r24 = 0;
                var_r23 = 0;
                var_r22 = 0;
                var_r21 = 0;
                do {
                    var_r31 = var_r29;
                    var_r30 = var_r28;
                    var_r20_2 = 0;
                    var_r19_2 = -1;
loop_13:
                    var_r20_2 += 1;
                    sp1C = fn_80009578((s32) (arg1 * (var_r27 + var_r19_2)) / arg3, (s32) (arg2 * (spA0 + sp90)) / arg4, arg1, arg2, sp8);
                    temp_r0 = *var_r31;
                    var_r31 += 4;
                    var_r29 += 4;
                    temp_r8 = ((u8) sp1C >> 1U) & 0x7F;
                    temp_r7 = (unksp1D >> 1U) & 0x7F;
                    temp_r3_2 = *var_r30;
                    temp_r5 = (unksp1E >> 1U) & 0x7F;
                    var_r30 += 4;
                    var_r28 += 4;
                    var_r19_2 += 1;
                    var_r26 += temp_r8 * temp_r0;
                    var_r25 += temp_r7 * temp_r0;
                    var_r24 += temp_r5 * temp_r0;
                    var_r23 += temp_r8 * temp_r3_2;
                    var_r22 += temp_r7 * temp_r3_2;
                    var_r21 += temp_r5 * temp_r3_2;
                    if (var_r20_2 < 3) {
                        goto loop_13;
                    }
                    temp_r3 = sp94 + 1;
                    sp94 = temp_r3;
                    sp90 += 1;
                } while (temp_r3 < 3);
                temp_r3_3 = (var_r26 * var_r26) + (var_r23 * var_r23);
                if ((f32) temp_r3_3 > lbl_80351068) {
                    temp_f3 = __frsqrte((f32) temp_r3_3);
                    temp_f4 = lbl_80351070 * temp_f3 * -(((f64) (f32) temp_r3_3 * (temp_f3 * temp_f3)) - lbl_80351078);
                    temp_f3_2 = lbl_80351070 * temp_f4 * -(((f64) (f32) temp_r3_3 * (temp_f4 * temp_f4)) - lbl_80351078);
                    sp18 = (f32) ((f64) (f32) temp_r3_3 * (lbl_80351070 * temp_f3_2 * -(((f64) (f32) temp_r3_3 * (temp_f3_2 * temp_f3_2)) - lbl_80351078)));
                    var_f1 = sp18;
                } else {
                    var_f1 = (f32) temp_r3_3;
                }
                temp_r3_4 = (var_r25 * var_r25) + (var_r22 * var_r22);
                if ((f32) temp_r3_4 > lbl_80351068) {
                    temp_f3_3 = __frsqrte((f32) temp_r3_4);
                    temp_f4_2 = lbl_80351070 * temp_f3_3 * -(((f64) (f32) temp_r3_4 * (temp_f3_3 * temp_f3_3)) - lbl_80351078);
                    temp_f3_4 = lbl_80351070 * temp_f4_2 * -(((f64) (f32) temp_r3_4 * (temp_f4_2 * temp_f4_2)) - lbl_80351078);
                    sp14 = (f32) ((f64) (f32) temp_r3_4 * (lbl_80351070 * temp_f3_4 * -(((f64) (f32) temp_r3_4 * (temp_f3_4 * temp_f3_4)) - lbl_80351078)));
                    var_f1_2 = sp14;
                } else {
                    var_f1_2 = (f32) temp_r3_4;
                }
                temp_r3_5 = (var_r24 * var_r24) + (var_r21 * var_r21);
                if ((f32) temp_r3_5 > lbl_80351068) {
                    temp_f3_5 = __frsqrte((f32) temp_r3_5);
                    temp_f4_3 = lbl_80351070 * temp_f3_5 * -(((f64) (f32) temp_r3_5 * (temp_f3_5 * temp_f3_5)) - lbl_80351078);
                    temp_f3_6 = lbl_80351070 * temp_f4_3 * -(((f64) (f32) temp_r3_5 * (temp_f4_3 * temp_f4_3)) - lbl_80351078);
                    sp10 = (f32) ((f64) (f32) temp_r3_5 * (lbl_80351070 * temp_f3_6 * -(((f64) (f32) temp_r3_5 * (temp_f3_6 * temp_f3_6)) - lbl_80351078)));
                    var_f1_3 = sp10;
                } else {
                    var_f1_3 = (f32) temp_r3_5;
                }
                if ((s32) ((s32) ((f64) var_f1 * lbl_80351080) + ((s32) ((f64) var_f1_2 * lbl_80351080) + (s32) ((f64) var_f1_3 * lbl_80351080))) < 0xA) {
                    fn_800094B4(var_r27, spA0, arg3, arg4, spC, 0xF);
                } else {
                    fn_800094B4(var_r27, spA0, arg3, arg4, spC, 0);
                }
            }
            var_r27 += 1;
            goto loop_28;
        }
        spA0 += 1;
        goto loop_30;
    }
}

void fn_8000AA18(void *arg0, s32 arg1) {
    f32 temp_f0;

    temp_f0 = *(&lbl_801DB508 + (arg1 * 4));
    M2C_FIELD(arg0, f32 *, 0x2E064) = temp_f0;
    M2C_FIELD(arg0, f32 *, 0x2E060) = temp_f0;
    M2C_FIELD(arg0, f32 *, 0x2E05C) = temp_f0;
}

void fn_8000AA3C(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x2E058) = (f32) *(&lbl_801DB4F8 + (M2C_FIELD(arg0, s16 *, 0x2E044) * 4));
}

void fn_8000AA5C(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x2E044) = (s16) (M2C_FIELD(arg0, s16 *, 0x2E044) + 1);
    M2C_FIELD(arg0, s16 *, 0x2E044) = (s16) (M2C_FIELD(arg0, s16 *, 0x2E044) % 3);
}

void fn_8000AA94(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD((s32)arg0, s16 *, 0x2E042) + 1;
    switch (temp_r0) {                              /* irregular */
    case 3:
        M2C_FIELD(arg0, s16 *, 0x2E046) = 1;
        M2C_FIELD(arg0, s16 *, 0x2E042) = (s16) (M2C_FIELD(arg0, s16 *, 0x2E042) + 1);
        return;
    case 4:
        M2C_FIELD(arg0, s16 *, 0x2E046) = 0;
        M2C_FIELD(arg0, s16 *, 0x2E042) = 0;
        return;
    default:
        M2C_FIELD(arg0, s16 *, 0x2E042) = (s16) (M2C_FIELD(arg0, s16 *, 0x2E042) + 1);
        return;
    }
}

void fn_8000AAF4(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x2E058) = (f32) *(&lbl_801DB4F8 + (M2C_FIELD(arg0, s16 *, 0x2E042) * 4));
}

void fn_8000AB14(void *arg0) {
    f32 temp_f4;
    f32 temp_f5;
    f32 var_f1;
    f32 var_f2;
    s16 temp_r3;
    s32 temp_r30;
    s32 temp_r3_2;

    if ((s8) 0 == lbl_80350404) {
        lbl_80350400 = -1;
        lbl_80350404 = 1;
    }
    temp_r30 = (s32) PadGetStickX(0);
    temp_f5 = (f32) (s32) PadGetStickY(0) / lbl_80351090;
    temp_r3 = M2C_FIELD(arg0, s16 *, 0x2E04A);
    temp_f4 = (f32) temp_r30 / lbl_80351090;
    if (temp_r3 == 2) {
        var_f1 = lbl_80351094;
    } else {
        var_f1 = lbl_80351098;
    }
    if (temp_r3 == 2) {
        var_f2 = lbl_8035109C;
    } else {
        var_f2 = lbl_803510A0;
    }
    if (fabs(temp_f4) > lbl_803510A4) {
        M2C_FIELD(arg0, f32 *, 0x2C024) = (f32) ((f64) M2C_FIELD(arg0, f32 *, 0x2C024) + (f64) (var_f1 * temp_f4));
    }
    if (fabs(temp_f5) > lbl_803510A4) {
        M2C_FIELD(arg0, f32 *, 0x2C028) = (f32) ((f64) M2C_FIELD(arg0, f32 *, 0x2C028) - (f64) (var_f2 * temp_f5));
    }
    temp_r3_2 = PadGetRepeat(0);
    if (temp_r3_2 & 1) {
        M2C_FIELD(arg0, f32 *, 0x2C024) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C024) - lbl_80351098);
    }
    if (temp_r3_2 & 2) {
        M2C_FIELD(arg0, f32 *, 0x2C024) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C024) + lbl_80351098);
    }
    if (temp_r3_2 & 8) {
        M2C_FIELD(arg0, f32 *, 0x2C028) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C028) - lbl_80351098);
    }
    if (temp_r3_2 & 4) {
        M2C_FIELD(arg0, f32 *, 0x2C028) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C028) + lbl_80351098);
    }
    if (M2C_FIELD((s32)arg0, f32 *, 0x2C024) >= lbl_803510A8) {
        M2C_FIELD(arg0, f32 *, 0x2C024) = (f32) lbl_803510AC;
    }
    if (lbl_80351068 > M2C_FIELD(arg0, f32 *, 0x2C024)) {
        M2C_FIELD(arg0, f32 *, 0x2C024) = (f32) lbl_80351068;
    }
    if (M2C_FIELD((s32)arg0, f32 *, 0x2C028) >= lbl_803510B0) {
        M2C_FIELD(arg0, f32 *, 0x2C028) = (f32) lbl_803510B4;
    }
    if (lbl_80351068 > M2C_FIELD(arg0, f32 *, 0x2C028)) {
        M2C_FIELD(arg0, f32 *, 0x2C028) = (f32) lbl_80351068;
    }
}

void fn_8000AD2C(void *arg0, s32 arg1) {
    s16 temp_r0_2;
    s16 temp_r0_3;
    s16 temp_r0_4;
    s32 temp_r0;
    s16 temp_r7;

    if ((s8) lbl_8035040C == 0) {
        lbl_80350408 = 0;
        lbl_8035040C = 1;
    }
    temp_r7 = (s32) (-arg1 | arg1) >> 0x1F;
    temp_r0 = lbl_80350408 + 1;
    lbl_80350408 = temp_r0 & ~temp_r7;
    if (((temp_r0 & ~temp_r7) % 30) == 0) {
        temp_r0_2 = M2C_FIELD(arg0, s16 *, 0x2E046);
        switch (temp_r0_2) {                        /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            temp_r0_3 = M2C_FIELD(arg0, s16 *, 0x2E042);
            switch (temp_r0_3) {                    /* switch 2; irregular */
            case 0:                                 /* switch 2 */
                fn_80015570(0x437, 0x7F, 0x40);
                return;
            case 1:                                 /* switch 2 */
                fn_80015570(0x436, 0x7F, 0x40);
                return;
            case 2:                                 /* switch 2 */
                fn_80015570(0x435, 0x7F, 0x40);
                return;
            }
            break;
        case 2:                                     /* switch 1 */
            temp_r0_4 = M2C_FIELD(arg0, s16 *, 0x2E044);
            switch (temp_r0_4) {                    /* switch 3; irregular */
            case 0:                                 /* switch 3 */
                fn_80015570(0x434, 0x7F, 0x40);
                return;
            case 1:                                 /* switch 3 */
                fn_80015570(0x433, 0x7F, 0x40);
                return;
            case 2:                                 /* switch 3 */
                fn_80015570(0x432, 0x7F, 0x40);
                return;
            }
            break;
        case 1:                                     /* switch 1 */
            if (arg1 != 0) {
                fn_80015570(0x42E, 0x7F, 0x40);
            }
            break;
        }
    }
}

#pragma push
#pragma peephole off
void fn_8000AEB4(void *arg0) {
    f32 temp_f0;
    f32 temp_f4;
    f32 temp_f4_2;
    s32 temp_r30;
    s32 temp_r3;
    s8 temp_r30_2;
    void *temp_r5;
    s8 temp_r7;
    void *temp_r3_2;
    void *temp_r3_3;
    s8 temp_r31;

    if ((s16) M2C_FIELD(arg0, s16 *, 0x2E03E) >= (s32) lbl_803503F0) {
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x2E054);
        temp_r30 = temp_r3 * 4;
        temp_f4 = (lbl_803510C8 * (f32) Sin(temp_r3, (f32) ((lbl_803510B8 * (f64) temp_r30) / lbl_803510C0), lbl_803510B8)) + lbl_803510C8;
        temp_r31 = (s8) temp_f4;
        temp_f4_2 = (lbl_803510C8 * (f32) Sin(M2C_BITWISE(s32, (f32) ((lbl_803510B8 * (f64) (temp_r30 + 0x1E)) / lbl_803510C0)), (f32) lbl_803510B8, (f64) temp_f4));
        temp_f4_2 += lbl_803510C8;
        temp_r30_2 = (s8) temp_f4_2;
        temp_f0 = lbl_803510C8;
        temp_f0 += (lbl_803510C8 * (f32) Sin(M2C_BITWISE(s32, ((lbl_803510B8 * (f64) (temp_r30 + 0x3C)) / lbl_803510C0)), (f32) lbl_803510B8, (f64) temp_f4_2));
        temp_r5 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x2E0DC), void **, 0xC);
        M2C_FIELD(temp_r5, s8 *, 4) = temp_r31;
        M2C_FIELD(temp_r5, s8 *, 5) = temp_r30_2;
        temp_r7 = (s8) temp_f0;
        M2C_FIELD(temp_r5, s8 *, 6) = temp_r7;
        M2C_FIELD(temp_r5, s8 *, 7) = 0xFFU;
        temp_r3_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x2E0D8), void **, 0xC);
        M2C_FIELD(temp_r3_2, s8 *, 4) = (s8) M2C_FIELD(temp_r5, s8 *, 4);
        M2C_FIELD(temp_r3_2, s8 *, 5) = (s8) M2C_FIELD(temp_r5, s8 *, 5);
        M2C_FIELD(temp_r3_2, s8 *, 6) = (s8) M2C_FIELD(temp_r5, s8 *, 6);
        M2C_FIELD(temp_r3_2, s8 *, 7) = (s8) M2C_FIELD(temp_r5, s8 *, 7);
        temp_r3_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x2E0DC), void **, 0xC);
        M2C_FIELD(temp_r3_3, s8 *, 0) = temp_r31;
        M2C_FIELD(temp_r3_3, s8 *, 1) = temp_r30_2;
        M2C_FIELD(temp_r3_3, s8 *, 2) = temp_r7;
        M2C_FIELD(temp_r3_3, s8 *, 3) = 0xFF;
    }
}
#pragma pop

void fn_8000B054(void *arg0) { } /* draft: stub */

void fn_8000B204(void *arg0, M2C_UNK arg_sp0) {
    M2C_UNK sp48;
    u16 sp44;
    s32 sp40;
    s32 sp3C;
    s32 sp38;
    s32 sp34;
    s32 sp30;
    s32 sp2C;
    s32 sp28;
    M2C_UNK *sp24;
    s32 sp18;
    void *sp14;
    s32 sp10;
    s32 spC;
    M2C_UNK *sp8;
    s16 temp_r5;
    s32 var_r6;
    s32 *var_r26;
    s32 temp_r4;
    u8 var_r21;
    u16 temp_r0;
    void *temp_r3;
    void *temp_r5_2;
    void *var_r22;
    void *var_r23;
    void *var_r24;
    void *var_r25;

    sp28 = M2C_FIELD(&lbl_8015E9F8, s32 *, 0);
    sp2C = M2C_FIELD(&lbl_8015E9F8, s32 *, 4);
    sp30 = M2C_FIELD(&lbl_8015E9F8, s32 *, 8);
    sp34 = M2C_FIELD(&lbl_8015E9F8, s32 *, 0xC);
    sp38 = M2C_FIELD(&lbl_8015E9F8, s32 *, 0x10);
    sp3C = M2C_FIELD(&lbl_8015E9F8, s32 *, 0x14);
    sp40 = M2C_FIELD(&lbl_8015E9F8, s32 *, 0x18);
    sp44 = M2C_FIELD(&lbl_8015E9F8, u16 *, 0x1C);
    var_r6 = M2C_FIELD((s32)arg0, s16 *, 0x2E03E);
    if (var_r6 < 2) {

    } else {
        temp_r4 = (var_r6 - lbl_803503F0) + (lbl_803503F0 ^ 0x80000000);
        var_r6 = 2 & ((temp_r4 - temp_r4) - !M2C_CARRY);
    }
    var_r25 = arg0;
    var_r26 = &sp28;
    var_r24 = &lbl_802BF100 + 0xB40;
    var_r23 = &lbl_802BF100 + 0xBB8;
    var_r22 = &lbl_802BF100 + 0xB68;
    var_r21 = 0;
    do {
        strcpy(&sp48, *(&lbl_801DB518 + (var_r6 * 4)));
        strcat(&sp48, var_r26);
        sp24 = &lbl_801DB5F0;
        sp8 = &sp48;
        spC = 0;
        sp10 = 0;
        sp14 = NULL;
        sp18 = 0;
        /* draft: did not compile: fn_8000B4E8(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2E074), s32 *, 4), &sp8); */
        M2C_FIELD(var_r25, void **, 0x2E0E0) = sp14;
        temp_r5 = M2C_FIELD(arg0, s16 *, 0x2E03E);
        if (temp_r5 == 0) {
            temp_r3 = M2C_FIELD(M2C_FIELD(var_r25, void **, 0x2E0E0), void **, 0xC);
            M2C_FIELD(temp_r3, u8 *, 4) = (u8) M2C_FIELD(var_r24, u8 *, 0);
            M2C_FIELD(temp_r3, u8 *, 5) = (u8) M2C_FIELD(var_r24, u8 *, 1);
            M2C_FIELD(temp_r3, u8 *, 6) = (u8) M2C_FIELD(var_r24, u8 *, 2);
            M2C_FIELD(temp_r3, u8 *, 7) = (u8) M2C_FIELD(var_r24, u8 *, 3);
        } else if (temp_r5 == (s32) lbl_803503F0) {
            *M2C_FIELD(M2C_FIELD(M2C_FIELD(var_r25, void **, 0x2E0E0), void **, 8), s32 **, 0x58) = M2C_FIELD(var_r23, s32 *, 0);
            M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(var_r25, void **, 0x2E0E0), void **, 8), void **, 0x58), s16 *, 4) = 0x40;
            M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(var_r25, void **, 0x2E0E0), void **, 8), void **, 0x58), s16 *, 6) = 0x40;
            M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(var_r25, void **, 0x2E0E0), void **, 8), void **, 0x58), s32 *, 8) = 5;
            M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(var_r25, void **, 0x2E0E0), void **, 8), void **, 0x58), s32 *, 0xC) = 0;
            M2C_FIELD(M2C_FIELD(M2C_FIELD(var_r25, void **, 0x2E0E0), void **, 8), s32 *, 0x5C) = (s32) M2C_FIELD(var_r22, s32 *, 0);
        } else if (temp_r5 == 2) {
            /* draft: did not compile: temp_r5_2 = var_r21 + (var_r21 + lbl_803506C4); */
            temp_r0 = (M2C_FIELD(temp_r5_2, u8 *, 1) & ~0xFF00) | ((M2C_FIELD(temp_r5_2, u8 *, 0) << 8) & 0xFF00);
            fn_800EC404(M2C_FIELD(var_r25, void **, 0x2E0E0), (u8) (((temp_r0 >> 0xDU) & 7 & ~0xF8) | ((((temp_r0 >> 0xBU) & 0x1F) << 3) & 0xF8)), (u8) (((temp_r0 >> 3U) & 0xFC) | ((temp_r0 >> 9U) & 3 & ~0xFC)), (u8) (((temp_r0 >> 2U) & 7 & ~0xF8) | ((temp_r0 << 3) & 0xF8)), temp_r0);
        } else if (temp_r5 == (s32) (lbl_803503EC - 1)) {
            *M2C_FIELD(M2C_FIELD(M2C_FIELD(var_r25, void **, 0x2E0E0), void **, 8), s32 **, 0x58) = M2C_FIELD(var_r23, s32 *, 0x28);
            M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(var_r25, void **, 0x2E0E0), void **, 8), void **, 0x58), s16 *, 4) = 0x20;
            M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(var_r25, void **, 0x2E0E0), void **, 8), void **, 0x58), s16 *, 6) = 0x20;
            M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(var_r25, void **, 0x2E0E0), void **, 8), void **, 0x58), s32 *, 8) = 8;
            M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(var_r25, void **, 0x2E0E0), void **, 8), void **, 0x58), s32 *, 0xC) = 0;
            M2C_FIELD(M2C_FIELD(M2C_FIELD(var_r25, void **, 0x2E0E0), void **, 8), s32 *, 0x5C) = (s32) M2C_FIELD(var_r22, s32 *, 0x28);
        }
        var_r21 += 1;
        sp24 = &lbl_801DB5F0;
        var_r26 += 3;
        /* draft: did not compile: var_r25 += 4; */
        /* draft: did not compile: var_r24 += 4; */
        /* draft: did not compile: var_r23 += 4; */
        /* draft: did not compile: var_r22 += 4; */
    } while (var_r21 < 0xA);
}

void fn_8000B4E8(void *arg0, s32 arg1) {
    /* draft: did not compile: fn_8000B514(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 4), arg1); */
}

s32 fn_8000B514(s32 arg0, void *arg1, void *arg2, s32 arg3, M2C_UNK arg_sp0) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r3_5;
    s32 temp_r3_6;
    s32 temp_r3_7;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;
    s32 var_r0_6;
    void *temp_r0;
    void *var_r16;
    void *var_r17;
    void *var_r29;
    void *var_r28;
    void *var_r18;
    void *var_r19;
    void *var_r27;
    void *var_r24;
    void *var_r25;
    void *var_r26;
    void *var_r23;
    void *var_r22;
    void *var_r21;
    void *var_r20;

    temp_r3 = fn_80008D18((long)(arg3), (void *)(0), (void *)(0));
    switch (temp_r3) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        temp_r0 = M2C_FIELD(arg2, void **, 8);
        if (temp_r0 != NULL) {
            var_r16 = M2C_FIELD(arg1, void **, 0x10);
            var_r17 = temp_r0;
loop_107:
            if (var_r17 == NULL) {
                goto block_108;
            }
            temp_r3_2 = fn_80008D18(arg3, var_r16, var_r17);
            switch (temp_r3_2) {                    /* switch 2; irregular */
            case 0:                                 /* switch 2 */
                var_r24 = M2C_FIELD(var_r17, void **, 8);
                if (var_r24 != NULL) {
                    var_r18 = M2C_FIELD(var_r16, void **, 0x10);
loop_99:
                    if (var_r24 == NULL) {
                        goto block_100;
                    }
                    temp_r3_3 = fn_80008D18(arg3, var_r18, var_r24);
                    switch (temp_r3_3) {            /* switch 3; irregular */
                    case 0:                         /* switch 3 */
                        var_r23 = M2C_FIELD(var_r24, void **, 8);
                        if (var_r23 != NULL) {
                            var_r29 = M2C_FIELD(var_r18, void **, 0x10);
loop_91:
                            if (var_r23 == NULL) {
                                goto block_92;
                            }
                            temp_r3_4 = fn_80008D18(arg3, var_r29, var_r23);
                            switch (temp_r3_4) {    /* switch 4; irregular */
                            case 0:                 /* switch 4 */
                                var_r22 = M2C_FIELD(var_r23, void **, 8);
                                if (var_r22 != NULL) {
                                    var_r28 = M2C_FIELD(var_r29, void **, 0x10);
loop_83:
                                    if (var_r22 == NULL) {
                                        goto block_84;
                                    }
                                    temp_r3_5 = fn_80008D18(arg3, var_r28, var_r22);
                                    switch (temp_r3_5) { /* switch 5; irregular */
                                    case 0:         /* switch 5 */
                                        var_r21 = M2C_FIELD(var_r22, void **, 8);
                                        if (var_r21 != NULL) {
                                            var_r27 = M2C_FIELD(var_r28, void **, 0x10);
loop_75:
                                            if (var_r21 == NULL) {
                                                goto block_76;
                                            }
                                            temp_r3_6 = fn_80008D18(arg3, var_r27, var_r21);
                                            switch (temp_r3_6) { /* switch 6; irregular */
                                            case 0: /* switch 6 */
                                                var_r20 = M2C_FIELD(var_r21, void **, 8);
                                                if (var_r20 != NULL) {
                                                    var_r26 = M2C_FIELD(var_r27, void **, 0x10);
loop_67:
                                                    if (var_r20 == NULL) {
                                                        goto block_68;
                                                    }
                                                    temp_r3_7 = fn_80008D18(arg3, var_r26, var_r20);
                                                    switch (temp_r3_7) { /* switch 7; irregular */
                                                    case 0: /* switch 7 */
                                                        var_r19 = M2C_FIELD(var_r20, void **, 8);
                                                        if (var_r19 != NULL) {
                                                            var_r25 = M2C_FIELD(var_r26, void **, 0x10);
loop_59:
                                                            if (var_r19 == NULL) {
                                                                goto block_60;
                                                            }
                                                            if (fn_8000B514((long)(arg0), (void *)(var_r25), (void *)(var_r19), (long)(arg3), (long)(0)) == 2) {
                                                                var_r0 = 2;
                                                            } else {
                                                                var_r25 = M2C_FIELD(var_r25, void **, 8);
                                                                var_r19 = M2C_FIELD(var_r19, void **, 0xC);
                                                                goto loop_59;
                                                            }
                                                        } else {
block_60:
                                                            var_r0 = 0;
                                                        }
                                                        break;
                                                    case 1: /* switch 7 */
                                                        var_r0 = 0;
                                                        break;
                                                    case 2: /* switch 7 */
                                                        var_r0 = 2;
                                                        break;
                                                    default: /* switch 7 */
                                                        var_r0 = 2;
                                                        break;
                                                    }
                                                    if (var_r0 == 2) {
                                                        var_r0_2 = 2;
                                                    } else {
                                                        var_r26 = M2C_FIELD(var_r26, void **, 8);
                                                        var_r20 = M2C_FIELD(var_r20, void **, 0xC);
                                                        goto loop_67;
                                                    }
                                                } else {
block_68:
                                                    var_r0_2 = 0;
                                                }
                                                break;
                                            case 1: /* switch 6 */
                                                var_r0_2 = 0;
                                                break;
                                            case 2: /* switch 6 */
                                                var_r0_2 = 2;
                                                break;
                                            default: /* switch 6 */
                                                var_r0_2 = 2;
                                                break;
                                            }
                                            if (var_r0_2 == 2) {
                                                var_r0_3 = 2;
                                            } else {
                                                var_r27 = M2C_FIELD(var_r27, void **, 8);
                                                var_r21 = M2C_FIELD(var_r21, void **, 0xC);
                                                goto loop_75;
                                            }
                                        } else {
block_76:
                                            var_r0_3 = 0;
                                        }
                                        break;
                                    case 1:         /* switch 5 */
                                        var_r0_3 = 0;
                                        break;
                                    case 2:         /* switch 5 */
                                        var_r0_3 = 2;
                                        break;
                                    default:        /* switch 5 */
                                        var_r0_3 = 2;
                                        break;
                                    }
                                    if (var_r0_3 == 2) {
                                        var_r0_4 = 2;
                                    } else {
                                        var_r28 = M2C_FIELD(var_r28, void **, 8);
                                        var_r22 = M2C_FIELD(var_r22, void **, 0xC);
                                        goto loop_83;
                                    }
                                } else {
block_84:
                                    var_r0_4 = 0;
                                }
                                break;
                            case 1:                 /* switch 4 */
                                var_r0_4 = 0;
                                break;
                            case 2:                 /* switch 4 */
                                var_r0_4 = 2;
                                break;
                            default:                /* switch 4 */
                                var_r0_4 = 2;
                                break;
                            }
                            if (var_r0_4 == 2) {
                                var_r0_5 = 2;
                            } else {
                                var_r29 = M2C_FIELD(var_r29, void **, 8);
                                var_r23 = M2C_FIELD(var_r23, void **, 0xC);
                                goto loop_91;
                            }
                        } else {
block_92:
                            var_r0_5 = 0;
                        }
                        break;
                    case 1:                         /* switch 3 */
                        var_r0_5 = 0;
                        break;
                    case 2:                         /* switch 3 */
                        var_r0_5 = 2;
                        break;
                    default:                        /* switch 3 */
                        var_r0_5 = 2;
                        break;
                    }
                    if (var_r0_5 == 2) {
                        var_r0_6 = 2;
                    } else {
                        var_r18 = M2C_FIELD(var_r18, void **, 8);
                        var_r24 = M2C_FIELD(var_r24, void **, 0xC);
                        goto loop_99;
                    }
                } else {
block_100:
                    var_r0_6 = 0;
                }
                break;
            case 1:                                 /* switch 2 */
                var_r0_6 = 0;
                break;
            case 2:                                 /* switch 2 */
                var_r0_6 = 2;
                break;
            default:                                /* switch 2 */
                var_r0_6 = 2;
                break;
            }
            if (var_r0_6 == 2) {
                return 2;
            }
            var_r16 = M2C_FIELD(var_r16, void **, 8);
            var_r17 = M2C_FIELD(var_r17, void **, 0xC);
            goto loop_107;
        }
block_108:
        return 0;
    case 1:                                         /* switch 1 */
        return 0;
    case 2:                                         /* switch 1 */
        return 2;
    default:                                        /* switch 1 */
        return 2;
    }
}

void *fn_8000B8FC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &lbl_801DB5F0;
        if (arg1 > 0) {
            fn_80005888();
        }
    }
    return arg0;
}

void fn_8000B944(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */
