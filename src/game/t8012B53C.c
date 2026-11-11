/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

s32 fn_80118950(u16, M2C_UNK, M2C_UNK, u8, s32);
M2C_UNK fn_80118A18(s32, u8, s32);
M2C_UNK fn_80118AFC(s32, u16, u16);
M2C_UNK fn_80118C64(s32);
s32 fn_80119BBC(s32);
f32 fn_80119F74(u8, void *);
f32 fn_80119F94(u8, void *, s32);
f32 fn_8012A574();
M2C_UNK fn_8012AA28(void *, f32 *, f32 *, f32 *, f32 *, f32 *);
u32 fn_8012B040(void *, f32, f32, f32, f32);
M2C_UNK fn_8012B18C();
u16 __cvt_fp2unsigned(f32);
extern u32 lbl_8033C4F0;
extern M2C_UNK lbl_8033C8F0;
extern u8 lbl_80350E48;
extern s8 lbl_80350E49;
extern u8 lbl_80350E4A;
extern void *lbl_80350E54;
extern void *lbl_80350E60;
extern u8 lbl_80350E64;
extern f32 lbl_803522D8;
extern f32 lbl_803522F8;
extern f32 lbl_803522FC;
extern f32 lbl_8035230C;
extern f32 lbl_80352310;
extern f32 lbl_8035231C;
extern s8 lbl_80350E4B;
extern s8 lbl_80350E4C;
extern s8 lbl_80350E4D;
extern s32 lbl_80350E50;
extern s32 lbl_80350E58;
extern s32 lbl_80350E5C;
M2C_UNK fn_80116430();
M2C_UNK fn_80119368(M2C_UNK, u8);
M2C_UNK fn_80119FB4();
M2C_UNK fn_8011E7FC(M2C_UNK, s32);
M2C_UNK fn_801258EC();
M2C_UNK fn_801260A0();
s32 fn_8012DFEC(s32 *, u8, u8, s32);
extern M2C_UNK lbl_8032CC00;
extern s8 lbl_80350D30;
extern s8 lbl_80350D68;
extern f32 lbl_80352320;
extern f64 lbl_80352328;
extern f64 lbl_80352330;
extern M2C_UNK lbl_8033D2F0;
M2C_UNK fn_80118418(s32);
extern s32 lbl_80350D60;
extern M2C_UNK lbl_801DA978;
extern M2C_UNK lbl_801DAA00;
extern M2C_UNK lbl_8033D4F0;
extern M2C_UNK lbl_80341870;
extern M2C_UNK lbl_803417F0;
extern M2C_UNK lbl_803439F0;
s8 fn_8012D99C(s8);
extern M2C_UNK lbl_80343A30;
extern M2C_UNK lbl_80343AB0;
s16 fn_80121374(void *, M2C_UNK, u8);
extern s32 lbl_80350D70;
extern s32 lbl_80350D74;

void fn_8012B53C(void);
void fn_8012BD68(u32 arg0);
s32 fn_8012BDA0(u8 arg0, s8 arg1, s8 arg2, u8 arg3, s32 arg4, s32 arg5);
void salApplyMatrix(void *arg0, void *arg1, void *arg2);
void salNormalizeVector(void *arg0);
void fn_8012C018(s32 arg0, s32 arg1, s32 arg2);
void fn_8012C03C(u8 arg0, u8 arg1, u8 arg2, u8 arg3, M2C_UNK arg_sp0);
void fn_8012C644(u8 arg0, u8 arg1, s32 arg2, u16 arg3);
void fn_8012C768(u8 arg0, u8 arg1, u32 arg2);
u16 fn_8012C858(u8 arg0, u8 arg1, u8 arg2);
void *fn_8012CB1C(u8 arg0, u8 arg1);
void fn_8012CB50(u8 arg0, u8 arg1);
void fn_8012CB8C(void *arg0, s8 arg1, s32 arg2, u8 arg3, u32 arg4, M2C_UNK arg_sp0);
void fn_8012CC24(u8 arg0, void *arg1, void *arg2);
void fn_8012CD38(u8 arg0, u8 arg1, s8 arg2);
u8 fn_8012CD74(u8 arg0, u8 arg1);
u16 _GetInputValue(void *arg0, void *arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0);
u16 fn_8012D250(void *arg0);
u16 fn_8012D298(void *arg0);
u16 fn_8012D2E0(void *arg0);
u16 fn_8012D328(void *arg0);
u16 fn_8012D370(void *arg0);
u16 fn_8012D3B8(void *arg0);
u16 fn_8012D400(void *arg0);
u16 fn_8012D448(void *arg0);
u16 fn_8012D490(void *arg0);
u16 fn_8012D4D8(void *arg0);

void fn_8012B53C(void) { } /* draft: stub */

void fn_8012BD68(u32 arg0) {
    lbl_80350E60 = 0;
    lbl_80350E5C = 0;
    lbl_80350E58 = 0;
    lbl_80350E54 = 0;
    lbl_80350E50 = 0;
    lbl_80350E4D = 1;
    lbl_80350E4C = 3;
    lbl_80350E64 = 0;
    lbl_80350E4B = (arg0 >> 1U) & 1;
}

#pragma push
#pragma dont_inline on
s32 fn_8012BDA0(u8 arg0, s8 arg1, s8 arg2, u8 arg3, s32 arg4, s32 arg5) {
    s32 sp8;
    s32 var_r3;
    u8 temp_r29;

    lbl_80350D30 = 0;
    if (arg0 <= 0x40U) {
        M2C_FIELD(&lbl_8032CC00, u8 *, 0x210) = arg0;
    } else {
        M2C_FIELD(&lbl_8032CC00, u8 *, 0x210) = 0x40U;
    }
    if (arg3 <= 8U) {
        M2C_FIELD(&lbl_8032CC00, u8 *, 0x213) = arg3;
    } else {
        M2C_FIELD(&lbl_8032CC00, u8 *, 0x213) = 8U;
    }
    sp8 = 0x7D00;
    M2C_FIELD(&lbl_8032CC00, s8 *, 0x211) = arg1;
    M2C_FIELD(&lbl_8032CC00, s8 *, 0x212) = arg2;
    var_r3 = fn_8012DFEC(&sp8, M2C_FIELD(&lbl_8032CC00, u8 *, 0x210), M2C_FIELD(&lbl_8032CC00, u8 *, 0x213), arg4);
    if (var_r3 == 0) {
        temp_r29 = M2C_FIELD(&lbl_8032CC00, u8 *, 0x210);
        fn_801260A0();
        fn_8011E7FC(0, arg5);
        fn_80116430();
        lbl_80350D68 = 0;
        fn_80119368(0x7D00, temp_r29);
        fn_80119FB4();
        fn_801258EC();
        fn_8012BD68(arg4);
        var_r3 = 0;
        lbl_80350D30 = 1;
    }
    return var_r3;
}
#pragma pop

void salApplyMatrix(void *arg0, void *arg1, void *arg2) {
    M2C_FIELD(arg2, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0x24) + ((M2C_FIELD(arg0, f32 *, 8) * M2C_FIELD(arg1, f32 *, 8)) + ((M2C_FIELD(arg0, f32 *, 0) * M2C_FIELD(arg1, f32 *, 0)) + (M2C_FIELD(arg0, f32 *, 4) * M2C_FIELD(arg1, f32 *, 4)))));
    M2C_FIELD(arg2, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 0x28) + ((M2C_FIELD(arg0, f32 *, 0x14) * M2C_FIELD(arg1, f32 *, 8)) + ((M2C_FIELD(arg0, f32 *, 0xC) * M2C_FIELD(arg1, f32 *, 0)) + (M2C_FIELD(arg0, f32 *, 0x10) * M2C_FIELD(arg1, f32 *, 4)))));
    M2C_FIELD(arg2, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C) + ((M2C_FIELD(arg0, f32 *, 0x20) * M2C_FIELD(arg1, f32 *, 8)) + ((M2C_FIELD(arg0, f32 *, 0x18) * M2C_FIELD(arg1, f32 *, 0)) + (M2C_FIELD(arg0, f32 *, 0x1C) * M2C_FIELD(arg1, f32 *, 4)))));
}

void salNormalizeVector(void *arg0) {
    f32 temp_f3;
    f32 temp_f0;
    f32 temp_f1;
    f32 sp8;
    f32 var_f1;
    f64 temp_f2;
    f64 temp_f2_2;
    f64 temp_f2_3;

    temp_f1 = M2C_FIELD(arg0, f32 *, 0);
    temp_f0 = M2C_FIELD(arg0, f32 *, 4);
    temp_f3 = M2C_FIELD(arg0, f32 *, 8);
    var_f1 = (temp_f3 * temp_f3);
    var_f1 += ((temp_f0 * temp_f0) + (temp_f1 * temp_f1));
    if (var_f1 > lbl_80352320) {
        temp_f2 = __frsqrte(var_f1);
        temp_f2_2 = lbl_80352328 * temp_f2 * (lbl_80352330 - ((f64) var_f1 * (temp_f2 * temp_f2)));
        temp_f2_3 = lbl_80352328 * temp_f2_2 * (lbl_80352330 - ((f64) var_f1 * (temp_f2_2 * temp_f2_2)));
        sp8 = (f32) ((f64) var_f1 * (lbl_80352328 * temp_f2_3 * (lbl_80352330 - ((f64) var_f1 * (temp_f2_3 * temp_f2_3)))));
        var_f1 = sp8;
    }
    M2C_FIELD(arg0, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0) / var_f1);
    M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) / var_f1);
    M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) / var_f1);
}

void fn_8012C018(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    void *temp_r4;

    temp_r3 = (arg0 * 4) & 0x3FC;
    temp_r4 = &lbl_8033D2F0 + ((arg1 << 6) & 0x3FC0);
    /* draft: did not compile: *(temp_r4 + temp_r3) = *(temp_r4 + temp_r3) | arg2; */
}

void fn_8012C03C(u8 arg0, u8 arg1, u8 arg2, u8 arg3, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8012C644(u8 arg0, u8 arg1, s32 arg2, u16 arg3) {
    u8 temp_r30;
    u8 temp_r31;
    u8 temp_r31_2;

    if (arg1 != 0xFF) {
        if (arg0 < 0x40U) {
            temp_r30 = arg0 & 0x1F;
            fn_8012C03C((unsigned char)(temp_r30), (unsigned char)((u8) (arg3 >> 7U)), (unsigned char)(0), (unsigned char)(0), (long)(0));
            fn_8012C03C((unsigned char)((u8) (temp_r30 + 0x20)), (unsigned char)(arg1), (unsigned char)(arg2), (unsigned char)(arg3 & 0x7F), (long)(0));
            return;
        }
        switch (arg0) {                             /* irregular */
        case 0x80:
        case 0x81:
            temp_r31 = arg0 & 0xFE;
            fn_8012C03C((unsigned char)(temp_r31), (unsigned char)(arg1), (unsigned char)(arg2), (unsigned char)((u8) (arg3 >> 7U)), (long)(0));
            fn_8012C03C((unsigned char)((u8) (temp_r31 + 1)), (unsigned char)(arg1), (unsigned char)(arg2), (unsigned char)(arg3 & 0x7F), (long)(0));
            return;
        case 0x84:
        case 0x85:
            temp_r31_2 = arg0 & 0xFE;
            fn_8012C03C((unsigned char)(temp_r31_2), (unsigned char)(arg1), (unsigned char)(arg2), (unsigned char)((u8) (arg3 >> 7U)), (long)(0));
            fn_8012C03C((unsigned char)((u8) (temp_r31_2 + 1)), (unsigned char)(arg1), (unsigned char)(arg2), (unsigned char)(arg3 & 0x7F), (long)(0));
            return;
        default:
            fn_8012C03C((unsigned char)((u8) (arg3 >> 7U)), (unsigned char)(0), (unsigned char)(0), (unsigned char)(0), (long)(0));
            break;
        }
    }
}

void fn_8012C768(u8 arg0, u8 arg1, u32 arg2) {
    M2C_UNK *var_r6;
    u8 var_ctr;
    u8 temp_r0;
    u8 temp_r0_2;
    void *var_r3;

    var_r6 = &lbl_801DAA00;
    if (arg2 != 0U) {
        var_r6 = &lbl_801DA978;
    }
    if (arg1 != 0xFF) {
        var_r3 = &lbl_8033D4F0 + (arg1 * 0x860) + (arg0 * 0x86);
    } else {
        var_r3 = &lbl_80341870 + (arg0 * 0x86);
    }
    if (arg2 != 0U) {
        /* draft: did not compile: memcpy(var_r6, 0x86); */
    } else {
        var_ctr = 0x43;
        do {
            temp_r0 = M2C_FIELD(var_r6, u8 *, 0);
            if (temp_r0 != 0xFF) {
                M2C_FIELD(var_r3, u8 *, 0) = temp_r0;
            }
            temp_r0_2 = M2C_FIELD(var_r6, u8 *, 1);
            if (temp_r0_2 != 0xFF) {
                M2C_FIELD(var_r3, u8 *, 1) = temp_r0_2;
            }
            /* draft: did not compile: var_r3 += 2; */
            var_r6 += 2;
            var_ctr -= 1;
        } while (var_ctr != 0);
    }
    fn_8012CD38((s32)arg0, arg1, 0xFF);
}

u16 fn_8012C858(u8 arg0, u8 arg1, u8 arg2) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 temp_r6;
    s32 temp_r7;
    s32 temp_r7_2;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;

    if (arg1 != 0xFF) {
        if (arg2 != 0xFF) {
            if (arg0 < 0x40U) {
                temp_r6 = arg0 & 0x1F;
                temp_r4_6 = &lbl_8033D4F0 + (arg2 * 0x860) + (arg1 * 0x86);
                return 0;
            }
            if (arg0 < 0x46U) {
                temp_r3_2 = *(&lbl_8033D4F0 + (arg2 * 0x860) + (arg1 * 0x86) + arg0) - 0x40;
                return (u16) (0x3FFF & ~((temp_r3_2 - temp_r3_2) - !M2C_CARRY));
            }
            if ((arg0 >= 0x60U) && (arg0 < 0x66U)) {
                return 0U;
            }
            switch (arg0) {                         /* switch 1; irregular */
            case 0x80:                              /* switch 1 */
            case 0x81:                              /* switch 1 */
                temp_r7 = arg0 & 0xFE;
                temp_r4_4 = &lbl_8033D4F0 + (arg2 * 0x860) + (arg1 * 0x86);
                return 0;
            case 0x84:                              /* switch 1 */
            case 0x85:                              /* switch 1 */
                temp_r7_2 = arg0 & 0xFE;
                temp_r4_5 = &lbl_8033D4F0 + (arg2 * 0x860) + (arg1 * 0x86);
                return 0;
            default:                                /* switch 1 */
                return (*(&lbl_8033D4F0 + (arg2 * 0x860) + (arg1 * 0x86) + arg0) << 7) & 0xFF80;
            }
        } else {
            if (arg0 < 0x40U) {
                temp_r5_3 = arg0 & 0x1F;
                temp_r4_3 = &lbl_80341870 + (arg1 * 0x86);
                return 0;
            }
            if (arg0 < 0x46U) {
                temp_r3 = *(&lbl_80341870 + (arg1 * 0x86) + arg0) - 0x40;
                return (u16) (0x3FFF & ~((temp_r3 - temp_r3) - !M2C_CARRY));
            }
            if ((arg0 >= 0x60U) && (arg0 < 0x66U)) {
                return 0U;
            }
            switch (arg0) {                         /* switch 2; irregular */
            case 0x80:                              /* switch 2 */
            case 0x81:                              /* switch 2 */
                temp_r5 = arg0 & 0xFE;
                temp_r4 = &lbl_80341870 + (arg1 * 0x86);
                return 0;
            case 0x84:                              /* switch 2 */
            case 0x85:                              /* switch 2 */
                temp_r5_2 = arg0 & 0xFE;
                temp_r4_2 = &lbl_80341870 + (arg1 * 0x86);
                return 0;
            default:                                /* switch 2 */
                return (*(&lbl_80341870 + (arg1 * 0x86) + arg0) << 7) & 0xFF80;
            }
        }
    } else {
        return 0U;
    }
}

void *fn_8012CB1C(u8 arg0, u8 arg1) {
    if (arg1 == 0xFF) {
        return &lbl_803439F0 + arg0;
    }
    return &lbl_803417F0 + ((arg1 * 0x10) & 0xFF0) + arg0;
}

void fn_8012CB50(u8 arg0, u8 arg1) {
    s8 *var_r3;

    /* draft: did not compile: var_r3 = &lbl_803439F0 + arg0; */
    if (arg1 != 0xFF) {
        /* draft: did not compile: var_r3 = &lbl_803417F0 + ((arg1 * 0x10) & 0xFF0) + arg0; */
    }
    *var_r3 = 2;
}

void fn_8012CB8C(void *arg0, s8 arg1, s32 arg2, u8 arg3, u32 arg4, M2C_UNK arg_sp0) {
    s32 temp_r0;
    s8 var_r4;
    u8 temp_r31;
    u8 var_r29;
    void *temp_r3;

    var_r4 = arg1;
    var_r29 = arg3;
    if (arg3 == 0) {
        M2C_FIELD(arg0, u8 *, 0x22) = 0U;
    }
    temp_r31 = M2C_FIELD(arg0, u8 *, 0x22);
    if (temp_r31 < 4U) {
        M2C_FIELD(arg0, u8 *, 0x22) = (u8) (temp_r31 + 1);
        if (arg4 == 0U) {
            var_r4 = fn_8012D99C(var_r4);
        }
        if (arg4 != 0U) {
            var_r29 |= 0x10;
        }
        temp_r0 = (temp_r31 * 8) & 0x7F8;
        /* draft: did not compile: *(arg0 + temp_r0) = var_r4; */
        /* draft: did not compile: temp_r3 = arg0 + temp_r0; */
        M2C_FIELD(temp_r3, u8 *, 1) = var_r29;
        M2C_FIELD(temp_r3, s32 *, 4) = arg2;
    }
}

void fn_8012CC24(u8 arg0, void *arg1, void *arg2) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 temp_r6_3;
    s32 temp_r7;
    s32 temp_r7_2;
    s32 temp_r7_3;
    void *temp_r8;
    void *temp_r8_2;
    void *temp_r8_3;

    temp_r4 = M2C_FIELD(arg1, s32 *, 0xF4);
    temp_r0 = M2C_FIELD(arg2, s32 *, 0xF4);
    if (arg0 < 0x40U) {
        temp_r6 = (u8) temp_r0 * 0x86;
        temp_r5 = arg0 & 0x1F;
        temp_r7 = (u8) temp_r4 * 0x86;
        temp_r8 = &lbl_80341870 + 0x20;
        *(&lbl_80341870 + temp_r7 + temp_r5) = *(&lbl_80341870 + temp_r6 + temp_r5);
        /* draft: did not compile: *(temp_r8 + (temp_r7 + temp_r5)) = *(temp_r8 + (temp_r6 + temp_r5)); */
        return;
    }
    switch (arg0) {                                 /* irregular */
    case 0x80:
    case 0x81:
        temp_r6_2 = (u8) temp_r0 * 0x86;
        temp_r5_2 = arg0 & 0xFE;
        temp_r7_2 = (u8) temp_r4 * 0x86;
        temp_r8_2 = &lbl_80341870 + 1;
        *(&lbl_80341870 + temp_r7_2 + temp_r5_2) = *(&lbl_80341870 + temp_r6_2 + temp_r5_2);
        /* draft: did not compile: *(temp_r8_2 + (temp_r7_2 + temp_r5_2)) = *(temp_r8_2 + (temp_r6_2 + temp_r5_2)); */
        return;
    case 0x84:
    case 0x85:
        temp_r6_3 = (u8) temp_r0 * 0x86;
        temp_r5_3 = arg0 & 0xFE;
        temp_r7_3 = (u8) temp_r4 * 0x86;
        temp_r8_3 = &lbl_80341870 + 1;
        *(&lbl_80341870 + temp_r7_3 + temp_r5_3) = *(&lbl_80341870 + temp_r6_3 + temp_r5_3);
        /* draft: did not compile: *(temp_r8_3 + (temp_r7_3 + temp_r5_3)) = *(temp_r8_3 + (temp_r6_3 + temp_r5_3)); */
        return;
    default:
        *(&lbl_80341870 + ((u8) temp_r4 * 0x86) + arg0) = *(&lbl_80341870 + ((u8) temp_r0 * 0x86) + arg0);
        return;
    }
}

void fn_8012CD38(u8 arg0, u8 arg1, s8 arg2) {
    if (arg1 != 0xFF) {
        *(&lbl_80343A30 + ((arg1 * 0x10) & 0xFF0) + arg0) = arg2;
        return;
    }
    *(&lbl_80343AB0 + arg0) = arg2;
}

u8 fn_8012CD74(u8 arg0, u8 arg1) {
    if (arg1 != 0xFF) {
        return *(&lbl_80343A30 + ((arg1 * 0x10) & 0xFF0) + arg0);
    }
    return *(&lbl_80343AB0 + arg0);
}

u16 _GetInputValue(void *arg0, void *arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0) {
    s32 saved_reg_r28;
    s16 var_r0;
    s16 var_r3;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r0_9;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 var_r0_2;
    s32 var_r3_2;
    s32 var_r3_3;
    s32 var_r3_4;
    s32 var_r3_5;
    s32 var_r3_6;
    s32 var_r3_7;
    s32 var_r3_8;
    s32 var_r3_9;
    s32 var_r5;
    u32 temp_r0_4;
    u32 temp_r0_7;
    u32 temp_r0_8;
    u32 temp_r30;
    u32 var_r0_3;
    u32 var_r28;
    u32 var_r29;
    u32 var_r30;
    u8 temp_r3;
    void *var_r31;

    var_r28 = saved_reg_r28;
    var_r31 = arg1;
    var_r30 = 0;
    var_r29 = 0U;
loop_111:
    if (var_r29 < (u8) M2C_FIELD(arg1, u8 *, 0x22)) {
        if (M2C_FIELD(var_r31, u8 *, 1) & 0x10) {
            if (arg0 != NULL) {
                var_r0 = fn_80121374(arg0, 0, M2C_FIELD(var_r31, u8 *, 0));
            } else {
                var_r0 = 0;
            }
            var_r3 = var_r0;
            goto block_18;
        }
        temp_r3 = M2C_FIELD(var_r31, u8 *, 0);
        if ((temp_r3 == 0x80) || (temp_r3 == 1) || (temp_r3 == 0xA) || ((u8) (temp_r3 - 0xA0) <= 1U) || (temp_r3 == 0x83)) {
            if ((s32) temp_r3 < 0xA2) {
                if ((s32) temp_r3 < 0xA0) {
                    goto block_17;
                }
                if (arg0 != NULL) {
                    /* draft: did not compile: *(arg0 + (temp_r3 + 0x134)) = 1; */
                    /* draft: did not compile: var_r3 = *(arg0 + ((temp_r3 * 0xC) - 0x5BC)) * 2; */
                } else {
                    var_r3 = 0;
                }
            } else {
block_17:
                var_r3 = fn_8012C858((unsigned char)(arg2), (unsigned char)(arg3), (unsigned char)(0)) - 0x2000;
            }
block_18:
            temp_r0 = (s32) (var_r3 * ((s32) M2C_FIELD(var_r31, s32 *, 4) >> 1)) >> 0xF;
            if (temp_r0 < -0x2000) {
                var_r3_2 = -0x2000;
            } else {
                var_r3_2 = 0x1FFF;
                if (temp_r0 <= 0x1FFF) {
                    var_r3_2 = temp_r0;
                }
            }
            temp_r0_2 = M2C_FIELD(var_r31, u8 *, 1) & 0xF;
            switch (temp_r0_2) {                    /* switch 1; irregular */
            case 0:                                 /* switch 1 */
                var_r30 = var_r3_2 + 0x2000;
                var_r28 = 1U;
                break;
            case 1:                                 /* switch 1 */
                if (var_r28 != 0U) {
                    temp_r4 = (var_r30 + var_r3_2) - 0x2000;
                    if (temp_r4 < -0x2000) {
                        var_r3_3 = -0x2000;
                    } else {
                        var_r3_3 = 0x1FFF;
                        if (temp_r4 <= 0x1FFF) {
                            var_r3_3 = temp_r4;
                        }
                    }
                    var_r30 = var_r3_3 + 0x2000;
                } else {
                    temp_r3_2 = var_r30 + var_r3_2;
                    if (temp_r3_2 > 0x3FFF) {
                        var_r30 = 0x3FFF;
                    } else {
                        var_r30 = temp_r3_2 & ~(temp_r3_2 >> 0x1F);
                    }
                }
                break;
            case 2:                                 /* switch 1 */
                if (var_r28 != 0U) {
                    var_r0_2 = (s32) ((var_r30 - 0x2000) * var_r3_2) >> 0xD;
                } else {
                    var_r28 = 1U;
                    var_r0_2 = (s32) ((u32) (var_r3_2 * var_r30) >> 0xDU);
                }
                if (var_r0_2 < -0x2000) {
                    var_r3_4 = -0x2000;
                } else {
                    var_r3_4 = 0x1FFF;
                    if (var_r0_2 <= 0x1FFF) {
                        var_r3_4 = var_r0_2;
                    }
                }
                var_r30 = var_r3_4 + 0x2000;
                break;
            case 3:                                 /* switch 1 */
                if (var_r28 != 0U) {
                    temp_r0_3 = (var_r30 - 0x2000) - var_r3_2;
                    if (temp_r0_3 < -0x2000) {
                        var_r3_5 = -0x2000;
                    } else {
                        var_r3_5 = 0x1FFF;
                        if (temp_r0_3 <= 0x1FFF) {
                            var_r3_5 = temp_r0_3;
                        }
                    }
                    var_r30 = var_r3_5 + 0x2000;
                } else {
                    temp_r3_3 = var_r30 - var_r3_2;
                    if (temp_r3_3 > 0x3FFF) {
                        var_r30 = 0x3FFF;
                    } else {
                        var_r30 = temp_r3_3 & ~(temp_r3_3 >> 0x1F);
                    }
                }
                break;
            }
        } else {
            switch ((s32) temp_r3) {                /* switch 2; irregular */
            case 0xA2:                              /* switch 2 */
                if (arg0 != NULL) {
                    var_r5 = M2C_FIELD(arg0, u8 *, 0x12F) << 7;
                } else {
                    var_r5 = 0;
                }
                break;
            case 0xA3:                              /* switch 2 */
                if (arg0 != NULL) {
                    var_r5 = (s32) ((u32) M2C_FIELD(arg0, u32 *, 0x158) >> 9U);
                } else {
                    var_r5 = 0;
                }
                break;
            case 0xA4:                              /* switch 2 */
                if (arg0 != NULL) {
                    temp_r0_4 = lbl_80350D74 - M2C_FIELD(arg0, s32 *, 0x94);
                    var_r5 = (((temp_r0_4 << 0x18) | (temp_r0_4 >> 8U)) & ~0xFF000000) | (((lbl_80350D70 - M2C_FIELD(arg0, s32 *, 0x90)) - !M2C_CARRY) << 0x18);
                    if (var_r5 > 0x3FFF) {
                        var_r5 = 0x3FFF;
                    }
                    M2C_FIELD(arg0, s8 *, 0xA8) = 1;
                } else {
                    var_r5 = 0;
                }
                break;
            default:                                /* switch 2 */
                var_r5 = (s32) fn_8012C858((unsigned char)(arg2), (unsigned char)(arg3), (unsigned char)(0));
                break;
            }
            var_r3_6 = (s32) (var_r5 * ((s32) M2C_FIELD(var_r31, s32 *, 4) >> 1)) >> 0xF;
            if (var_r3_6 > 0x3FFF) {
                var_r3_6 = 0x3FFF;
            }
            temp_r0_5 = M2C_FIELD(var_r31, u8 *, 1) & 0xF;
            switch (temp_r0_5) {                    /* switch 3; irregular */
            case 0:                                 /* switch 3 */
                var_r30 = (u32) var_r3_6;
                var_r28 = 0U;
                break;
            case 1:                                 /* switch 3 */
                if (var_r28 != 0U) {
                    temp_r4_2 = (var_r30 + var_r3_6) - 0x2000;
                    if (temp_r4_2 < -0x2000) {
                        var_r3_7 = -0x2000;
                    } else {
                        var_r3_7 = 0x1FFF;
                        if (temp_r4_2 <= 0x1FFF) {
                            var_r3_7 = temp_r4_2;
                        }
                    }
                    var_r30 = var_r3_7 + 0x2000;
                } else {
                    temp_r30 = var_r30 + var_r3_6;
                    var_r0_3 = 0x3FFF;
                    if (temp_r30 <= 0x3FFFU) {
                        var_r0_3 = temp_r30;
                    }
                    var_r30 = var_r0_3;
                }
                break;
            case 2:                                 /* switch 3 */
                if (var_r28 != 0U) {
                    temp_r0_6 = (s32) (var_r3_6 * (var_r30 - 0x2000)) >> 0xE;
                    if (temp_r0_6 < -0x2000) {
                        var_r3_8 = -0x2000;
                    } else {
                        var_r3_8 = 0x1FFF;
                        if (temp_r0_6 <= 0x1FFF) {
                            var_r3_8 = temp_r0_6;
                        }
                    }
                    var_r30 = var_r3_8 + 0x2000;
                } else {
                    temp_r0_7 = var_r30 * var_r3_6;
                    var_r30 = 0x3FFF;
                    temp_r0_8 = temp_r0_7 >> 0xEU;
                    if (temp_r0_8 <= 0x3FFFU) {
                        var_r30 = temp_r0_8;
                    }
                }
                break;
            case 3:                                 /* switch 3 */
                if (var_r28 != 0U) {
                    temp_r0_9 = (var_r30 - 0x2000) - var_r3_6;
                    if (temp_r0_9 < -0x2000) {
                        var_r3_9 = -0x2000;
                    } else {
                        var_r3_9 = 0x1FFF;
                        if (temp_r0_9 <= 0x1FFF) {
                            var_r3_9 = temp_r0_9;
                        }
                    }
                    var_r30 = var_r3_9 + 0x2000;
                } else {
                    temp_r3_4 = var_r30 - var_r3_6;
                    if (temp_r3_4 > 0x3FFF) {
                        var_r30 = 0x3FFF;
                    } else {
                        var_r30 = temp_r3_4 & ~(temp_r3_4 >> 0x1F);
                    }
                }
                break;
            }
        }
        /* draft: did not compile: var_r31 += 8; */
        var_r29 += 1;
        goto loop_111;
    }
    M2C_FIELD(arg1, s16 *, 0x20) = (s16) var_r30;
    return (u16) var_r30;
}

u16 fn_8012D250(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x214);
    if (!(temp_r4 & 1)) {
        return M2C_FIELD(arg0, u16 *, 0x238);
    }
    M2C_FIELD(arg0, s32 *, 0x214) = (s32) (temp_r4 & 0xFFFFFFFE);
    return 0;
}

u16 fn_8012D298(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x214);
    if (!(temp_r4 & 2)) {
        return M2C_FIELD(arg0, u16 *, 0x25C);
    }
    M2C_FIELD(arg0, s32 *, 0x214) = (s32) (temp_r4 & 0xFFFFFFFD);
    return 0;
}

u16 fn_8012D2E0(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x214);
    if (!(temp_r4 & 4)) {
        return M2C_FIELD(arg0, u16 *, 0x280);
    }
    M2C_FIELD(arg0, s32 *, 0x214) = (s32) (temp_r4 & 0xFFFFFFFB);
    return 0;
}

u16 fn_8012D328(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x214);
    if (!(temp_r4 & 8)) {
        return M2C_FIELD(arg0, u16 *, 0x2A4);
    }
    M2C_FIELD(arg0, s32 *, 0x214) = (s32) (temp_r4 & 0xFFFFFFF7);
    return 0;
}

u16 fn_8012D370(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x214);
    if (!(temp_r4 & 0x10)) {
        return M2C_FIELD(arg0, u16 *, 0x2C8);
    }
    M2C_FIELD(arg0, s32 *, 0x214) = (s32) (temp_r4 & 0xFFFFFFEF);
    return 0;
}

u16 fn_8012D3B8(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x214);
    if (!(temp_r4 & 0x20)) {
        return M2C_FIELD(arg0, u16 *, 0x2EC);
    }
    M2C_FIELD(arg0, s32 *, 0x214) = (s32) (temp_r4 & 0xFFFFFFDF);
    return 0;
}

u16 fn_8012D400(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x214);
    if (!(temp_r4 & 0x40)) {
        return M2C_FIELD(arg0, u16 *, 0x310);
    }
    M2C_FIELD(arg0, s32 *, 0x214) = (s32) (temp_r4 & 0xFFFFFFBF);
    return 0;
}

u16 fn_8012D448(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x214);
    if (!(temp_r4 & 0x100)) {
        return M2C_FIELD(arg0, u16 *, 0x358);
    }
    M2C_FIELD(arg0, s32 *, 0x214) = (s32) (temp_r4 & 0xFFFFFEFF);
    return 0;
}

u16 fn_8012D490(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x214);
    if (!(temp_r4 & 0x200)) {
        return M2C_FIELD(arg0, u16 *, 0x37C);
    }
    M2C_FIELD(arg0, s32 *, 0x214) = (s32) (temp_r4 & 0xFFFFFDFF);
    return 0;
}

u16 fn_8012D4D8(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x214);
    if (!(temp_r4 & 0x400)) {
        return M2C_FIELD(arg0, u16 *, 0x3A0);
    }
    M2C_FIELD(arg0, s32 *, 0x214) = (s32) (temp_r4 & 0xFFFFFBFF);
    return 0;
}
