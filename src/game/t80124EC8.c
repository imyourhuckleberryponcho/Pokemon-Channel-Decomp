/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

extern M2C_UNK lbl_8033AE00;
extern M2C_UNK lbl_8033AE40;
extern f32 lbl_80352260;
M2C_UNK __cvt_fp2unsigned();
extern M2C_UNK lbl_802AAFC8;
extern M2C_UNK lbl_802AB1C8;
extern u32 lbl_8032CC00;
extern f32 lbl_80352270;
f64 Pow();
extern f64 lbl_80352278;
extern f32 lbl_80352280;
extern f32 lbl_80352284;
extern M2C_UNK lbl_802AB3C8;
extern M2C_UNK lbl_802AB54C;
extern f32 lbl_80352290;
extern M2C_UNK lbl_8033AEC0;
M2C_UNK fn_8012E4A0(u8, s32, s32);
s8 fn_8012E4D4(u8, M2C_UNK *);
s16 fn_8012E4E8(u8);
s32 fn_8012F9AC(u8, M2C_UNK);
M2C_UNK fn_80122B90(s32);
M2C_UNK fn_80124938(u8);
M2C_UNK fn_8012E2A4(u8);
u32 fn_8012E4C0(u32);
u32 fn_8012EA34(u32, void *);
u32 fn_8012EDCC(u8);
u32 fn_8012EDF4();
extern s32 lbl_80350D60;
extern s16 lbl_80350E00;
M2C_UNK fn_8011CB70();
M2C_UNK fn_8011CD60(s32);
M2C_UNK fn_8011CEDC();
M2C_UNK fn_8011D124(s32);
M2C_UNK fn_8011D2E8(void *);
M2C_UNK fn_8011D4EC();
M2C_UNK fn_8011DAB8();
M2C_UNK fn_8011DB90();
M2C_UNK fn_8011DEA0();
M2C_UNK fn_8011E1A4();
M2C_UNK fn_8012ECE4();
u32 fn_8011D668(s32, s32);
M2C_UNK fn_8011DC28(u16, void *, u16);
s32 fn_8012EBCC(s32, void *);
M2C_UNK fn_8012ED88();
extern M2C_UNK lbl_8033B810;
extern u8 lbl_80350D30;
M2C_UNK fn_80113724(u16);
M2C_UNK fn_8011D7F0(s32);
M2C_UNK fn_8011DD44(u16);
M2C_UNK fn_80124C30(s32);
M2C_UNK fn_8012AF44(void *, u16);
M2C_UNK hwEnableIrq();
M2C_UNK hwDisableIrq(void *, M2C_UNK *, s16);
s32 fn_801126D0(s32, s32, u16 *, s32, s32, s32, u16);

void fn_80124EC8(void);
s32 sndPitchUpOne(u16 arg0);
void sndGetPitch(u8 arg0, u32 arg1);
void fn_8012512C(s32 arg0);
s32 salChangeADSRState(void *arg0);
void fn_801253F0(void *arg0);
s32 fn_80125418(void *arg0, u32 arg1);
s32 fn_80125568(void *arg0);
s32 fn_801256D0(void *arg0, s16 *arg1, s16 *arg2);
s32 fn_80125868(s32 arg0, s32 arg1, s32 arg2);
void fn_801258EC(void);
s32 fn_801259A8(u8 arg0);
void fn_80125BF0(u8 arg0);
void fn_80125C98(void *arg0, u32 arg1);
void fn_80125E90(M2C_UNK arg_sp0);
void fn_801260A0(void);
void fn_801260AC(u16 arg0, void *arg1, u8 arg2, u32 arg3);
void fn_80126328(void);
s32 fn_80126348(void *arg0, u16 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0);
s32 fn_80126674(M2C_UNK arg_sp0);
s32 fn_801269B0(u16 arg0, u16 arg1, s32 arg2, s32 arg3, u8 arg4, s32 arg5, M2C_UNK arg_sp0);
s32 fn_80126AFC(u16 arg0, u16 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0);

void fn_80124EC8(void) {
    M2C_UNK *var_r3;
    s32 var_ctr;
    s32 var_ctr_2;
    void *temp_r5;
    M2C_UNK *var_r5;

    var_r5 = &lbl_8033AE40;
    var_ctr = 4;
    do {
        M2C_FIELD(var_r5, s8 *, 1) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 2) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 3) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 4) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 5) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 6) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 8) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 9) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xA) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xB) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xC) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xD) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 7) = 0xFF;
        M2C_FIELD(temp_r5, s8 *, 1) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xE) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0xF) = 0xFF;
        temp_r5 = var_r5 + 0x10;
        M2C_FIELD(var_r5, s8 *, 0x10) = 0xFF;
        M2C_FIELD(temp_r5, s8 *, 2) = 0xFF;
        M2C_FIELD(temp_r5, s8 *, 3) = 0xFF;
        M2C_FIELD(temp_r5, s8 *, 4) = 0xFF;
        M2C_FIELD(temp_r5, s8 *, 5) = 0xFF;
        M2C_FIELD(temp_r5, s8 *, 6) = 0xFF;
        M2C_FIELD(temp_r5, s8 *, 7) = 0xFF;
        M2C_FIELD(temp_r5, s8 *, 8) = 0xFF;
        M2C_FIELD(temp_r5, s8 *, 9) = 0xFF;
        M2C_FIELD(temp_r5, s8 *, 0xA) = 0xFF;
        M2C_FIELD(temp_r5, s8 *, 0xB) = 0xFF;
        M2C_FIELD(temp_r5, s8 *, 0xC) = 0xFF;
        M2C_FIELD(temp_r5, s8 *, 0xD) = 0xFF;
        M2C_FIELD(temp_r5, s8 *, 0xE) = 0xFF;
        M2C_FIELD(temp_r5, s8 *, 0xF) = 0xFF;
        /* draft: did not compile: var_r5 = temp_r5 + 0x10; */
        var_ctr -= 1;
    } while (var_ctr != 0);
    var_r3 = &lbl_8033AE00;
    var_ctr_2 = 2;
    do {
        M2C_FIELD(var_r3, s8 *, 0) = 0xFF;
        M2C_FIELD(var_r3, s8 *, 1) = 0xFF;
        M2C_FIELD(var_r3, s8 *, 2) = 0xFF;
        M2C_FIELD(var_r3, s8 *, 3) = 0xFF;
        M2C_FIELD(var_r3, s8 *, 4) = 0xFF;
        M2C_FIELD(var_r3, s8 *, 5) = 0xFF;
        M2C_FIELD(var_r3, s8 *, 6) = 0xFF;
        M2C_FIELD(var_r3, s8 *, 7) = 0xFF;
        M2C_FIELD(var_r3, s8 *, 8) = 0xFF;
        M2C_FIELD(var_r3, s8 *, 9) = 0xFF;
        M2C_FIELD(var_r3, s8 *, 0xA) = 0xFF;
        M2C_FIELD(var_r3, s8 *, 0xB) = 0xFF;
        M2C_FIELD(var_r3, s8 *, 0xC) = 0xFF;
        M2C_FIELD(var_r3, s8 *, 0xD) = 0xFF;
        M2C_FIELD(var_r3, s8 *, 0xE) = 0xFF;
        M2C_FIELD(var_r3, s8 *, 0xF) = 0xFF;
        M2C_FIELD(var_r3, s8 *, 0x10) = 0xFF;
        M2C_FIELD(var_r3, s8 *, 0x11) = 0xFF;
        M2C_FIELD(var_r3, s8 *, 0x12) = 0xFF;
        M2C_FIELD(var_r3, s8 *, 0x13) = 0xFF;
        M2C_FIELD(var_r3, s8 *, 0x14) = 0xFF;
        M2C_FIELD(var_r3, s8 *, 0x15) = 0xFF;
        M2C_FIELD(var_r3, s8 *, 0x16) = 0xFF;
        M2C_FIELD(var_r3, s8 *, 0x17) = 0xFF;
        M2C_FIELD(var_r3, s8 *, 0x18) = 0xFF;
        M2C_FIELD(var_r3, s8 *, 0x19) = 0xFF;
        M2C_FIELD(var_r3, s8 *, 0x1A) = 0xFF;
        M2C_FIELD(var_r3, s8 *, 0x1B) = 0xFF;
        M2C_FIELD(var_r3, s8 *, 0x1C) = 0xFF;
        M2C_FIELD(var_r3, s8 *, 0x1D) = 0xFF;
        M2C_FIELD(var_r3, s8 *, 0x1E) = 0xFF;
        M2C_FIELD(var_r3, s8 *, 0x1F) = 0xFF;
        var_r3 += 0x20;
        var_ctr_2 -= 1;
    } while (var_ctr_2 != 0);
}

s32 sndPitchUpOne(u16 arg0) {
    return (s32) (lbl_80352260 * (f32) arg0);
}

void sndGetPitch(u8 arg0, u32 arg1) {
    f32 temp_f2;
    f32 var_f0;
    f32 var_f0_2;
    u32 temp_r6;
    u32 var_r4;

    var_r4 = arg1;
    if ((u32) (var_r4 + 0x10000) == -1U) {
        var_r4 = 0x40005622;
    }
    temp_r6 = var_r4 >> 0x18U;
    if (arg0 != temp_r6) {
        if (temp_r6 < arg0) {
            var_f0 = *(&lbl_802AAFC8 + ((arg0 - temp_r6) * 4));
        } else {
            var_f0 = *(&lbl_802AB1C8 + ((temp_r6 - arg0) * 4));
        }
        var_f0_2 = (f32) (var_r4 & 0xFFFFFF) * var_f0;
    } else {
        var_f0_2 = (f32) (var_r4 & 0xFFFFFF);
    }
    temp_f2 = lbl_80352270 * var_f0_2;
    __cvt_fp2unsigned(&lbl_8032CC00, temp_f2 / (f32) lbl_8032CC00, temp_f2);
}

void fn_8012512C(s32 arg0) { } /* draft: stub */

s32 salChangeADSRState(void *arg0) {
    s32 temp_r7;
    s32 var_r0;
    u32 temp_r4_3;
    u32 temp_r4_4;
    u32 temp_r4_6;
    u8 temp_r4;
    u8 temp_r4_2;
    u8 temp_r4_5;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0);
    var_r0 = 0;
    switch ((s32) temp_r4) {                        /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        temp_r4_2 = M2C_FIELD(arg0, u8 *, 1);
        switch ((s32) temp_r4_2) {                  /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            temp_r4_3 = M2C_FIELD(arg0, u32 *, 0x14);
            M2C_FIELD(arg0, u32 *, 4) = temp_r4_3;
            if (temp_r4_3 != 0) {
                M2C_FIELD(arg0, u8 *, 1) = 1U;
                M2C_FIELD(arg0, s32 *, 8) = 0;
                M2C_FIELD(arg0, u32 *, 0x10) = (u32) (0x7FFF0000U / (u32) M2C_FIELD(arg0, u32 *, 0x14));
            } else {
            case 1:                                 /* switch 2 */
                temp_r4_4 = M2C_FIELD(arg0, u32 *, 0x18);
                M2C_FIELD(arg0, u32 *, 4) = temp_r4_4;
                if (temp_r4_4 != 0) {
                    M2C_FIELD(arg0, u8 *, 1) = 2U;
                    M2C_FIELD(arg0, s32 *, 8) = 0x7FFF0000;
                    M2C_FIELD(arg0, u32 *, 0x10) = (u32) -(s32) ((u32) (0x7FFF0000 - (M2C_FIELD(arg0, u16 *, 0x1C) << 0x10)) / (u32) M2C_FIELD(arg0, u32 *, 0x18));
                } else {
                case 2:                             /* switch 2 */
                    if ((u16) M2C_FIELD(arg0, u16 *, 0x1C) != 0) {
                        M2C_FIELD(arg0, u8 *, 1) = 3U;
                        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, u16 *, 0x1C) << 0x10);
                        M2C_FIELD(arg0, u32 *, 0x10) = 0U;
                    } else {
                    case 4:                         /* switch 2 */
                        var_r0 = 1;
                        M2C_FIELD(arg0, s32 *, 8) = 0;
                    }
                }
            }
            break;
        }
        break;
    case 1:                                         /* switch 1 */
        temp_r4_5 = M2C_FIELD(arg0, u8 *, 1);
        switch ((s32) temp_r4_5) {                  /* switch 3; irregular */
        case 0:                                     /* switch 3 */
            temp_r4_6 = M2C_FIELD(arg0, u32 *, 0x14);
            M2C_FIELD(arg0, u32 *, 4) = temp_r4_6;
            if (temp_r4_6 != 0) {
                M2C_FIELD(arg0, u8 *, 1) = 1U;
                if ((u8) M2C_FIELD(arg0, u8 *, 0x26) == 0) {
                    M2C_FIELD(arg0, s32 *, 8) = 0;
                    M2C_FIELD(arg0, u32 *, 0x10) = (u32) (0x7FFF0000U / (u32) M2C_FIELD(arg0, u32 *, 4));
                } else {
                    M2C_FIELD(arg0, s32 *, 0xC) = 0;
                    M2C_FIELD(arg0, s32 *, 8) = 0;
                    M2C_FIELD(arg0, u32 *, 0x10) = (u32) (0xC10000U / (u32) M2C_FIELD(arg0, u32 *, 4));
                }
            } else {
            case 1:                                 /* switch 3 */
                M2C_FIELD(arg0, u32 *, 4) = (u32) ((u32) (M2C_FIELD(arg0, u32 *, 0x18) * (((0xC1 - M2C_FIELD(arg0, u16 *, 0x1C)) << 0x10) / 193)) >> 0x10U);
                if ((u32) (u16)M2C_FIELD(arg0, u32 *, 4) != 0) {
                    M2C_FIELD(arg0, u8 *, 1) = 2U;
                    M2C_FIELD(arg0, s32 *, 8) = 0x7FFF0000;
                    M2C_FIELD(arg0, s32 *, 0xC) = 0xC10000;
                    M2C_FIELD(arg0, u32 *, 0x10) = (u32) -(s32) ((u32) ((0xC1 - M2C_FIELD(arg0, u16 *, 0x1C)) << 0x10) / (u32) M2C_FIELD(arg0, u32 *, 4));
                } else {
                case 2:                             /* switch 3 */
                    if ((u16) M2C_FIELD(arg0, u16 *, 0x1C) != 0) {
                        M2C_FIELD(arg0, u8 *, 1) = 3U;
                        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, u16 *, 0x1C) << 0x10);
                        temp_r7 = 0xC1 - ((s32) (M2C_FIELD(arg0, s32 *, 0xC) + 0x8000) >> 0x10);
                        M2C_FIELD(arg0, s32 *, 8) = (s32) (*(&lbl_802AB3C8 + ((temp_r7 & ~(temp_r7 >> 0x1F)) * 2)) << 0x10);
                        M2C_FIELD(arg0, u32 *, 0x10) = 0U;
                    } else {
                    case 4:                         /* switch 3 */
                        var_r0 = 1;
                        M2C_FIELD(arg0, s32 *, 8) = 0;
                    }
                }
            }
            break;
        }
        break;
    }
    return var_r0;
}

void fn_801253F0(void *arg0) {
    M2C_FIELD(arg0, s8 *, 1) = 0;
    salChangeADSRState((void *)(0));
}

s32 fn_80125418(void *arg0, u32 arg1) {
    f32 temp_f2;
    u32 temp_r3;
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0);
    switch ((s32) temp_r0) {                        /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 1) = 4U;
        M2C_FIELD(arg0, u32 *, 4) = arg1;
        if (arg1 == 0) {
            M2C_FIELD(arg0, u32 *, 4) = 1U;
            M2C_FIELD(arg0, s32 *, 0x10) = 0;
            return 1;
        }
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) -(s32) ((u32) M2C_FIELD(arg0, u32 *, 8) / arg1);
block_13:
    default:
        return 0;
    case 1:
        if (((u8) M2C_FIELD(arg0, u8 *, 0x26) == 0) && ((u8) M2C_FIELD(arg0, u8 *, 1) == 1)) {
            M2C_FIELD(arg0, s32 *, 0xC) = (s32) ((0xC1 - *(&lbl_802AB54C + (M2C_FIELD(arg0, u32 *, 8) >> 0x15))) << 0x10);
        }
        temp_f2 = lbl_80352290 * (f32) M2C_FIELD(arg0, s32 *, 0xC);
        M2C_FIELD(arg0, u32 *, 4) = (u32) (__cvt_fp2unsigned(temp_f2 * (f32) arg1, temp_f2, lbl_80352290) >> 0xCU);
        M2C_FIELD(arg0, u8 *, 1) = 4U;
        temp_r3 = M2C_FIELD(arg0, u32 *, 4);
        if (temp_r3 == 0) {
            M2C_FIELD(arg0, u32 *, 4) = 1U;
            M2C_FIELD(arg0, u32 *, 8) = 0U;
            M2C_FIELD(arg0, s32 *, 0xC) = 0;
            M2C_FIELD(arg0, s32 *, 0x10) = 0;
            return 1;
        }
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) -(s32) ((u32) M2C_FIELD(arg0, s32 *, 0xC) / temp_r3);
        goto block_13;
    }
}

s32 fn_80125568(void *arg0) {
    f32 temp_f2;
    u32 temp_r3;
    u32 temp_r4;
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0);
    if ((s32) temp_r0 < 2) {
        if ((s32) temp_r0 < 0) {
            goto block_17;
        }
        temp_r4 = M2C_FIELD(arg0, u32 *, 0x20);
        switch ((s32) temp_r0) {                    /* irregular */
        case 0:
            M2C_FIELD(arg0, u8 *, 1) = 4U;
            M2C_FIELD(arg0, u32 *, 4) = temp_r4;
            if (temp_r4 == 0) {
                M2C_FIELD(arg0, u32 *, 4) = 1U;
                M2C_FIELD(arg0, s32 *, 0x10) = 0;
                return 1;
            }
            M2C_FIELD(arg0, s32 *, 0x10) = (s32) -(s32) ((u32) M2C_FIELD(arg0, u32 *, 8) / temp_r4);
block_16:
        default:
            return 0;
        case 1:
            if (((u8) M2C_FIELD(arg0, u8 *, 0x26) == 0) && ((u8) M2C_FIELD(arg0, u8 *, 1) == 1)) {
                M2C_FIELD(arg0, s32 *, 0xC) = (s32) ((0xC1 - *(&lbl_802AB54C + (M2C_FIELD(arg0, u32 *, 8) >> 0x15))) << 0x10);
            }
            temp_f2 = lbl_80352290 * (f32) M2C_FIELD(arg0, s32 *, 0xC);
            M2C_FIELD(arg0, u32 *, 4) = (u32) (__cvt_fp2unsigned(temp_f2 * (f32) temp_r4, temp_f2, lbl_80352290) >> 0xCU);
            M2C_FIELD(arg0, u8 *, 1) = 4U;
            temp_r3 = M2C_FIELD(arg0, u32 *, 4);
            if (temp_r3 == 0) {
                M2C_FIELD(arg0, u32 *, 4) = 1U;
                M2C_FIELD(arg0, u32 *, 8) = 0U;
                M2C_FIELD(arg0, s32 *, 0xC) = 0;
                M2C_FIELD(arg0, s32 *, 0x10) = 0;
                return 1;
            }
            M2C_FIELD(arg0, s32 *, 0x10) = (s32) -(s32) ((u32) M2C_FIELD(arg0, s32 *, 0xC) / temp_r3);
            goto block_16;
        }
    } else {
block_17:
        return 0;
    }
}

s32 fn_801256D0(void *arg0, s16 *arg1, s16 *arg2) {
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r8;
    s32 temp_r8_2;
    s32 temp_r9;
    s32 var_r0;
    u8 temp_r6;
    u8 temp_r7;

    var_r0 = 0;
    temp_r6 = M2C_FIELD(arg0, u8 *, 0);
    switch ((s32) temp_r6) {                        /* irregular */
    case 0:
        if ((u8) M2C_FIELD(arg0, u8 *, 1) != 3) {
            temp_r8 = M2C_FIELD(arg0, s32 *, 8);
            M2C_FIELD(arg0, s32 *, 8) = (s32) (temp_r8 + M2C_FIELD(arg0, s32 *, 0x10));
            *arg1 = (s16) (temp_r8 >> 0x10);
            temp_r4 = M2C_FIELD(arg0, s32 *, 0x10);
            if (temp_r4 >= 0) {
                *arg2 = (s16) (temp_r4 >> 0x15);
            } else {
                *arg2 = (s16) -((s32) -temp_r4 >> 0x15);
            }
            temp_r4_2 = M2C_FIELD(arg0, s32 *, 4) - 1;
            M2C_FIELD(arg0, s32 *, 4) = temp_r4_2;
            if (temp_r4_2 == 0) {
                var_r0 = salChangeADSRState((void *)(0));
            }
        } else {
            *arg1 = (s16) ((s32) M2C_FIELD(arg0, s32 *, 8) >> 0x10);
            *arg2 = 0;
        }
        break;
    case 1:
        temp_r7 = M2C_FIELD(arg0, u8 *, 1);
        if (temp_r7 != 3) {
            temp_r9 = M2C_FIELD(arg0, s32 *, 8);
            if (((u8) M2C_FIELD(arg0, u8 *, 0x26) == 0) && (temp_r7 == 1)) {
                M2C_FIELD(arg0, s32 *, 8) = (s32) (temp_r9 + M2C_FIELD(arg0, s32 *, 0x10));
            } else {
                M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + M2C_FIELD(arg0, s32 *, 0x10));
                temp_r8_2 = 0xC1 - ((s32) (M2C_FIELD(arg0, s32 *, 0xC) + 0x8000) >> 0x10);
                M2C_FIELD(arg0, s32 *, 8) = (s32) (*(&lbl_802AB3C8 + ((temp_r8_2 & ~(temp_r8_2 >> 0x1F)) * 2)) << 0x10);
            }
            *arg1 = (s16) (temp_r9 >> 0x10);
            temp_r4_3 = M2C_FIELD(arg0, s32 *, 8) - temp_r9;
            if (temp_r4_3 >= 0) {
                *arg2 = (s16) (temp_r4_3 >> 0x15);
            } else {
                *arg2 = (s16) -((s32) -temp_r4_3 >> 0x15);
            }
            temp_r4_4 = M2C_FIELD(arg0, s32 *, 4) - 1;
            M2C_FIELD(arg0, s32 *, 4) = temp_r4_4;
            if (temp_r4_4 == 0) {
                var_r0 = salChangeADSRState((void *)(0));
            }
        } else {
            *arg1 = (s16) ((s32) M2C_FIELD(arg0, s32 *, 8) >> 0x10);
            *arg2 = 0;
        }
        break;
    }
    return var_r0;
}

s32 fn_80125868(s32 arg0, s32 arg1, s32 arg2) {
    u8 var_r31;

    var_r31 = 0;
loop_4:
    if (var_r31 >= 0xFU) {
        return 0;
    }
    if (0 /* draft: did not compile */) {
        return 1;
    }
    var_r31 = var_r31 + 1;
    goto loop_4;
}

void fn_801258EC(void) {
    M2C_UNK *var_r5;
    s32 var_ctr;

    M2C_FIELD(&lbl_8033AEC0, s8 *, 0) = 0;
    var_ctr = 2;
    var_r5 = &lbl_8033AEC0;
    do {
        M2C_FIELD(var_r5, s8 *, 0x908) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0x909) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0x90A) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0x90B) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0x90C) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0x90D) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0x90E) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0x90F) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0x910) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0x911) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0x912) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0x913) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0x914) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0x915) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0x916) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0x917) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0x918) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0x919) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0x91A) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0x91B) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0x91C) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0x91D) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0x91E) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0x91F) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0x920) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0x921) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0x922) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0x923) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0x924) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0x925) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0x926) = 0xFF;
        M2C_FIELD(var_r5, s8 *, 0x927) = 0xFF;
        var_r5 += 0x20;
        var_ctr -= 1;
    } while (var_ctr != 0);
    M2C_FIELD(&lbl_8033AEC0, s16 *, 0x948) = 0;
    M2C_FIELD(&lbl_8033AEC0, s32 *, 0x94C) = 0;
}

s32 fn_801259A8(u8 arg0) { return 0; } /* draft: stub */

void fn_80125BF0(u8 arg0) { } /* draft: stub */

void fn_80125C98(void *arg0, u32 arg1) { } /* draft: stub */

void fn_80125E90(M2C_UNK arg_sp0) { } /* draft: stub */

void fn_801260A0(void) {
    lbl_80350E00 = 0;
}

void fn_801260AC(u16 arg0, void *arg1, u8 arg2, u32 arg3) { } /* draft: stub */

void fn_80126328(void) {
    fn_8012ECE4();
}

s32 fn_80126348(void *arg0, u16 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

s32 fn_80126674(M2C_UNK arg_sp0) { return 0; } /* draft: stub */

s32 fn_801269B0(u16 arg0, u16 arg1, s32 arg2, s32 arg3, u8 arg4, s32 arg5, M2C_UNK arg_sp0) {
    s32 temp_r26;
    s32 temp_r27;
    s32 temp_r5;
    s32 temp_r8;
    s32 var_r25;
    s32 var_r6;
    u16 *var_r25_2;
    s32 temp_r3;
    void **var_r9;
    void *temp_r6;
    u16 var_ctr;

    /* draft: did not compile: var_r9 = &lbl_8033B810; */
    var_r6 = 0;
    var_ctr = lbl_80350E00;
    if ((s16) lbl_80350E00 > 0) {
loop_1:
        if (arg0 == (u16) M2C_FIELD(*var_r9, u16 *, 4)) {
            temp_r5 = var_r6 * 0xC;
            /* draft: did not compile: temp_r6 = *(&lbl_8033B810 + temp_r5); */
            if ((u16) M2C_FIELD(temp_r6, u16 *, 6) == 0) {
                temp_r8 = M2C_FIELD((&lbl_8033B810 + temp_r5), s32 *, 8);
                temp_r27 = M2C_FIELD(temp_r6, s32 *, 0x1C) + temp_r8;
                temp_r26 = M2C_FIELD(temp_r6, s32 *, 0x20);
                temp_r26 += temp_r8;
                /* draft: did not compile: var_r25_2 = temp_r8 + M2C_FIELD(temp_r6, s32 *, 0x24); */
loop_10:
                temp_r3 = *var_r25_2;
                if (temp_r3 == -1U) {
                    return -1;
                }
                if (temp_r3 == arg1) {
                    if (arg4 != 0) {
                        var_r25 = fn_801126D0(temp_r27, temp_r26, var_r25_2, arg2, arg3, arg5, arg0);
                    } else {
                        hwDisableIrq((void *)(0), (long *)(0), (short)(0));
                        var_r25 = fn_801126D0(temp_r27, temp_r26, var_r25_2, arg2, arg3, arg5, arg0);
                        hwEnableIrq();
                    }
                    return var_r25;
                }
                var_r25_2 += 0x54;
                goto loop_10;
            }
            return -1;
        }
        var_r9 += 0xC;
        var_r6 += 1;
        var_ctr -= 1;
        if (var_ctr == 0) {
            goto block_14;
        }
        goto loop_1;
    }
block_14:
    return -1;
}

s32 fn_80126AFC(u16 arg0, u16 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0) {
    s32 temp_r26;
    s32 temp_r5;
    s32 temp_r7;
    s32 var_r28;
    s32 var_r6;
    u16 *var_r27;
    u16 temp_r3;
    void **var_r8;
    void *temp_r6;
    s32 temp_r25;
    u16 var_ctr;

    /* draft: did not compile: var_r8 = &lbl_8033B810; */
    var_r6 = 0;
    var_ctr = lbl_80350E00;
    if ((s16) lbl_80350E00 > 0) {
loop_1:
        if (arg0 == (u16) M2C_FIELD(*var_r8, u16 *, 4)) {
            temp_r5 = var_r6 * 0xC;
            /* draft: did not compile: temp_r6 = *(&lbl_8033B810 + temp_r5); */
            if ((u16) M2C_FIELD(temp_r6, u16 *, 6) == 0) {
                temp_r7 = M2C_FIELD((&lbl_8033B810 + temp_r5), s32 *, 8);
                temp_r25 = temp_r7 + M2C_FIELD(temp_r6, s32 *, 0x1C);
                temp_r26 = temp_r7 + M2C_FIELD(temp_r6, s32 *, 0x20);
                /* draft: did not compile: var_r27 = temp_r7 + M2C_FIELD(temp_r6, s32 *, 0x24); */
loop_7:
                temp_r3 = *var_r27;
                if (temp_r3 == -1U) {
                    var_r28 = -1;
                } else if (temp_r3 == arg1) {
                    hwDisableIrq((void *)(0), (long *)(0), (short)(0));
                    var_r28 = fn_801126D0(temp_r25, temp_r26, var_r27, arg2, arg3, arg4, arg0);
                    hwEnableIrq();
                } else {
                    var_r27 += 0x54;
                    goto loop_7;
                }
            } else {
                var_r28 = -1;
            }
        } else {
            var_r6 += 1;
            var_ctr -= 1;
            var_r8 += 0xC;
            if (var_ctr == 0) {
                goto block_11;
            }
            goto loop_1;
        }
    } else {
block_11:
        var_r28 = -1;
    }
    return var_r28;
}
