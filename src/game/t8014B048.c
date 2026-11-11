/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

extern M2C_UNK lbl_801DAD58;

void fn_8014B048();
s32 __cvt_fp2unsigned(f32 farg0);
void __save_fpr(void);
void __restore_fpr(void);
void __save_gpr(void);
void __restore_gpr(void);
s32 __div2u(s32 arg0, u32 arg1, s32 arg2, s32 arg3);
s32 __div2i(s32 arg0, u32 arg1, s32 arg2, s32 arg3);
s32 __mod2u(s32 arg0, u32 arg1, s32 arg2, s32 arg3);
s32 __mod2i(s32 arg0, u32 arg1, s32 arg2, s32 arg3);
s32 __shl2i(s32 arg0, u32 arg1, s32 arg2);
u32 __shr2u(u32 arg0, u32 arg1, s32 arg2);
s32 __shr2i(s32 arg0, u32 arg1, s32 arg2);
u32 __cvt_dbl_usll(f64 farg0);
s32 GetR2__Fv_8014B74C(void);

void fn_8014B048() { } /* draft: stub */

s32 __cvt_fp2unsigned(f32 farg0) {
    f32 var_f2;
    s32 temp_cr0_lt;
    s32 var_r3;

    var_r3 = 0;
    temp_cr0_lt = farg0 < (f32) M2C_FIELD(&lbl_801DAD58, f64 *, 0);
    M2C_ERROR(/* "fcmpu $cr6, $f1, $f3" is not supported, the first arg is not $cr0 */);
    if (temp_cr0_lt == 0) {
        var_r3 = -1;
        if (temp_cr0_lt != 0) {
            M2C_ERROR(/* "fcmpu $cr7, $f1, $f4" is not supported, the first arg is not $cr0 */);
            var_f2 = farg0;
            if (temp_cr0_lt == 0U) {
                var_f2 = (f32) ((f64) farg0 - M2C_FIELD(&lbl_801DAD58, f64 *, 0x10));
            }
            var_r3 = (s32) var_f2;
            if (temp_cr0_lt == 0) {
                var_r3 += 0x80000000;
            }
        }
    }
    return var_r3;
}

void __save_fpr(void) {
    s32 saved_reg_f31;
    s32 saved_reg_f30;
    s32 saved_reg_f29;
    s32 saved_reg_f28;
    s32 saved_reg_f27;
    s32 saved_reg_f26;
    s32 saved_reg_f25;
    s32 saved_reg_f24;
    s32 saved_reg_f23;
    s32 saved_reg_f22;
    s32 saved_reg_f21;
    s32 saved_reg_f20;
    s32 saved_reg_f19;
    s32 saved_reg_f18;
    s32 saved_reg_f17;
    s32 saved_reg_f16;
    s32 saved_reg_f15;
    s32 saved_reg_f14;
    M2C_FIELD(M2C_ERROR(/* Read from unset register $r11 */), f64 *, -0x90) = (f64) saved_reg_f14;
    M2C_FIELD(M2C_ERROR(/* Read from unset register $r11 */), f64 *, -0x88) = (f64) saved_reg_f15;
    M2C_FIELD(M2C_ERROR(/* Read from unset register $r11 */), f64 *, -0x80) = (f64) saved_reg_f16;
    M2C_FIELD(M2C_ERROR(/* Read from unset register $r11 */), f64 *, -0x78) = (f64) saved_reg_f17;
    M2C_FIELD(M2C_ERROR(/* Read from unset register $r11 */), f64 *, -0x70) = (f64) saved_reg_f18;
    M2C_FIELD(M2C_ERROR(/* Read from unset register $r11 */), f64 *, -0x68) = (f64) saved_reg_f19;
    M2C_FIELD(M2C_ERROR(/* Read from unset register $r11 */), f64 *, -0x60) = (f64) saved_reg_f20;
    M2C_FIELD(M2C_ERROR(/* Read from unset register $r11 */), f64 *, -0x58) = (f64) saved_reg_f21;
    M2C_FIELD(M2C_ERROR(/* Read from unset register $r11 */), f64 *, -0x50) = (f64) saved_reg_f22;
    M2C_FIELD(M2C_ERROR(/* Read from unset register $r11 */), f64 *, -0x48) = (f64) saved_reg_f23;
    M2C_FIELD(M2C_ERROR(/* Read from unset register $r11 */), f64 *, -0x40) = (f64) saved_reg_f24;
    M2C_FIELD(M2C_ERROR(/* Read from unset register $r11 */), f64 *, -0x38) = (f64) saved_reg_f25;
    M2C_FIELD(M2C_ERROR(/* Read from unset register $r11 */), f64 *, -0x30) = (f64) saved_reg_f26;
    M2C_FIELD(M2C_ERROR(/* Read from unset register $r11 */), f64 *, -0x28) = (f64) saved_reg_f27;
    M2C_FIELD(M2C_ERROR(/* Read from unset register $r11 */), f64 *, -0x20) = (f64) saved_reg_f28;
    M2C_FIELD(M2C_ERROR(/* Read from unset register $r11 */), f64 *, -0x18) = (f64) saved_reg_f29;
    M2C_FIELD(M2C_ERROR(/* Read from unset register $r11 */), f64 *, -0x10) = (f64) saved_reg_f30;
    M2C_FIELD(M2C_ERROR(/* Read from unset register $r11 */), f64 *, -8) = (f64) saved_reg_f31;
}

void __restore_fpr(void) {

}

void __save_gpr(void) {
    s32 saved_reg_r31;
    s32 saved_reg_r30;
    s32 saved_reg_r29;
    s32 saved_reg_r28;
    s32 saved_reg_r27;
    s32 saved_reg_r26;
    s32 saved_reg_r25;
    s32 saved_reg_r24;
    s32 saved_reg_r23;
    s32 saved_reg_r22;
    s32 saved_reg_r21;
    s32 saved_reg_r20;
    s32 saved_reg_r19;
    s32 saved_reg_r18;
    s32 saved_reg_r17;
    s32 saved_reg_r16;
    s32 saved_reg_r15;
    s32 saved_reg_r14;
    M2C_FIELD(M2C_ERROR(/* Read from unset register $r11 */), s32 *, -0x48) = (s32) saved_reg_r14;
    M2C_FIELD(M2C_ERROR(/* Read from unset register $r11 */), s32 *, -0x44) = (s32) saved_reg_r15;
    M2C_FIELD(M2C_ERROR(/* Read from unset register $r11 */), s32 *, -0x40) = (s32) saved_reg_r16;
    M2C_FIELD(M2C_ERROR(/* Read from unset register $r11 */), s32 *, -0x3C) = (s32) saved_reg_r17;
    M2C_FIELD(M2C_ERROR(/* Read from unset register $r11 */), s32 *, -0x38) = (s32) saved_reg_r18;
    M2C_FIELD(M2C_ERROR(/* Read from unset register $r11 */), s32 *, -0x34) = (s32) saved_reg_r19;
    M2C_FIELD(M2C_ERROR(/* Read from unset register $r11 */), s32 *, -0x30) = (s32) saved_reg_r20;
    M2C_FIELD(M2C_ERROR(/* Read from unset register $r11 */), s32 *, -0x2C) = (s32) saved_reg_r21;
    M2C_FIELD(M2C_ERROR(/* Read from unset register $r11 */), s32 *, -0x28) = (s32) saved_reg_r22;
    M2C_FIELD(M2C_ERROR(/* Read from unset register $r11 */), s32 *, -0x24) = (s32) saved_reg_r23;
    M2C_FIELD(M2C_ERROR(/* Read from unset register $r11 */), s32 *, -0x20) = (s32) saved_reg_r24;
    M2C_FIELD(M2C_ERROR(/* Read from unset register $r11 */), s32 *, -0x1C) = (s32) saved_reg_r25;
    M2C_FIELD(M2C_ERROR(/* Read from unset register $r11 */), s32 *, -0x18) = (s32) saved_reg_r26;
    M2C_FIELD(M2C_ERROR(/* Read from unset register $r11 */), s32 *, -0x14) = (s32) saved_reg_r27;
    M2C_FIELD(M2C_ERROR(/* Read from unset register $r11 */), s32 *, -0x10) = (s32) saved_reg_r28;
    M2C_FIELD(M2C_ERROR(/* Read from unset register $r11 */), s32 *, -0xC) = (s32) saved_reg_r29;
    M2C_FIELD(M2C_ERROR(/* Read from unset register $r11 */), s32 *, -8) = (s32) saved_reg_r30;
    M2C_FIELD(M2C_ERROR(/* Read from unset register $r11 */), s32 *, -4) = (s32) saved_reg_r31;
}

void __restore_gpr(void) {

}

s32 __div2u(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r0;
    s32 temp_r9;
    s8 temp_r9_2;
    u32 temp_r9_3;
    u16 var_ctr;
    s32 var_r0;
    s8 var_r3;
    s32 var_r9;
    u32 var_r7;
    u32 var_r7_2;

    var_r0 = CLZ(arg0);
    if (arg0 == 0) {
        var_r0 = CLZ(arg1) + 0x20;
    }
    var_r9 = CLZ(arg2);
    if (arg2 == 0) {
        var_r9 = CLZ(arg3) + 0x20;
    }
    if (var_r0 <= var_r9) {
        temp_r9 = 0x40 - (var_r9 + 1);
        temp_r0 = var_r0 + temp_r9;
        temp_r9_2 = (0x40 - var_r0) - temp_r9;
        var_ctr = temp_r9_2;
        if (temp_r9_2 >= 0x20) {
            var_r7 = 0;
        } else {
            var_r7 = (u32) arg0 >> temp_r9_2;
        }
        if (temp_r0 >= 0x20) {
            var_r3 = arg1 << (temp_r0 - 0x20);
        } else {
            var_r3 = (arg0 << temp_r0) | (arg1 >> (0x20 - temp_r0));
        }
        var_r7_2 = var_r7;
        do {
            var_r3 = (var_r3 * 2) + M2C_CARRY;
            var_r7_2 = (var_r7_2 * 2) + M2C_CARRY;
            temp_r9_3 = (var_r7_2 - arg2) - !M2C_CARRY;
            if (temp_r9_3 >= 0) {
                var_r7_2 = (u32) temp_r9_3;
            }
            var_ctr -= 1;
        } while (var_ctr != 0);
        return (var_r3 * 2) + M2C_CARRY;
    }
    return 0;
}

s32 __div2i(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    s32 sp8;
    s32 temp_r0;
    s32 temp_r10;
    s32 temp_r9;
    s32 temp_r9_2;
    s8 temp_r9_3;
    u32 temp_r9_4;
    u16 var_ctr;
    s32 var_r0;
    s32 var_r3;
    s32 var_r3_2;
    s32 var_r3_3;
    s32 var_r5;
    s32 var_r6;
    s32 var_r9;
    u32 var_r4;
    u32 var_r7;
    u32 var_r7_2;
    u8 spC;

    var_r3_2 = arg0;
    var_r4 = arg1;
    var_r5 = arg2;
    var_r6 = arg3;
    temp_r9 = var_r3_2 & 0x80000000;
    if (temp_r9 != 0) {
        var_r3_2 = -var_r3_2 - !M2C_CARRY;
        var_r4 = 0 - var_r4;
    }
    sp8 = temp_r9;
    temp_r10 = var_r5 & 0x80000000;
    if (temp_r10 != 0) {
        var_r6 = 0 - var_r6;
        var_r5 = -var_r5 - !M2C_CARRY;
    }
    spC = temp_r10;
    var_r0 = CLZ(var_r3_2);
    if (var_r3_2 == 0) {
        var_r0 = CLZ(var_r4) + 0x20;
    }
    var_r9 = CLZ(var_r5);
    if (var_r5 == 0) {
        var_r9 = CLZ(var_r6) + 0x20;
    }
    if (var_r0 <= var_r9) {
        temp_r9_2 = 0x40 - (var_r9 + 1);
        temp_r0 = var_r0 + temp_r9_2;
        temp_r9_3 = (0x40 - var_r0) - temp_r9_2;
        var_ctr = temp_r9_3;
        if (temp_r9_3 >= 0x20) {
            var_r7 = 0;
        } else {
            var_r7 = (u32) var_r3_2 >> temp_r9_3;
        }
        if (temp_r0 >= 0x20) {
            var_r3_3 = var_r4 << (temp_r0 - 0x20);
        } else {
            var_r3_3 = (var_r3_2 << temp_r0) | (var_r4 >> (0x20 - temp_r0));
        }
        var_r7_2 = var_r7;
        do {
            var_r3_3 = (var_r3_3 * 2) + M2C_CARRY;
            var_r7_2 = (var_r7_2 * 2) + M2C_CARRY;
            temp_r9_4 = (var_r7_2 - var_r5) - !M2C_CARRY;
            if (temp_r9_4 >= 0) {
                var_r7_2 = (u32) temp_r9_4;
            }
            var_ctr -= 1;
        } while (var_ctr != 0);
        var_r3 = M2C_CARRY;
        var_r3 += (var_r3_3 * 2);
        if ((sp8 ^ spC) != 0) {
            return -var_r3 - !M2C_CARRY;
        }
        /* Duplicate return node #22. Try simplifying control flow for better match */
        return var_r3;
    }
    var_r3 = 0;
    return var_r3;
}

s32 __mod2u(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    u8 temp_r9;
    s8 temp_r9_2;
    u32 temp_r9_3;
    s32 var_ctr;
    s32 var_r0;
    s32 var_r9;
    u32 var_r7;
    u32 var_r7_2;

    var_r0 = CLZ(arg0);
    if (arg0 == 0) {
        var_r0 = CLZ(arg1) + 0x20;
    }
    var_r9 = CLZ(arg2);
    if (arg2 == 0) {
        var_r9 = CLZ(arg3) + 0x20;
    }
    if (var_r0 <= var_r9) {
        temp_r9 = 0x40 - (var_r9 + 1);
        temp_r9_2 = (0x40 - var_r0) - temp_r9;
        var_ctr = temp_r9_2;
        if (temp_r9_2 >= 0x20) {
            var_r7_2 = 0;
        } else {
            var_r7_2 = arg0 >> temp_r9_2;
        }
        if ((s32) (var_r0 + temp_r9) >= 0x20) {

        }
        var_r7 = var_r7_2;
        do {
            var_r7 = (var_r7 * 2) + M2C_CARRY;
            temp_r9_3 = (var_r7 - arg2) - !M2C_CARRY;
            if (temp_r9_3 >= 0) {
                var_r7 = (u32) temp_r9_3;
            }
            var_ctr -= 1;
        } while (var_ctr != 0);
        return (s32) var_r7;
    }
    return arg0;
}

s32 __mod2i(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r9;
    s8 temp_r9_2;
    s32 temp_r9_3;
    s32 var_cr0_lt;
    s32 var_ctr;
    s32 var_r0;
    u32 var_r3;
    s32 var_r5;
    s32 var_r6;
    s32 var_r9;
    u32 var_r4;
    u32 var_r7;
    u32 var_r7_2;

    var_r3 = arg0;
    var_r4 = arg1;
    var_r5 = arg2;
    var_r6 = arg3;
    M2C_ERROR(/* "cmpwi $cr7, $r3, 0x0" is not supported, the first arg is not $cr0 */);
    if (M2C_ERROR(/* Read from unset register $cr0_lt */)) {
        var_r4 = 0 - var_r4;
        var_r3 = -var_r3 - !M2C_CARRY;
    }
    if (var_r5 < 0) {
        var_r6 = 0 - var_r6;
        var_r5 = -var_r5 - !M2C_CARRY;
    }
    var_r0 = CLZ(var_r3);
    if (var_r3 == 0) {
        var_r0 = CLZ(var_r4) + 0x20;
    }
    var_r9 = CLZ(var_r5);
    if (var_r5 == 0) {
        var_r9 = CLZ(var_r6) + 0x20;
    }
    var_cr0_lt = var_r0 < var_r9;
    if (var_r9 >= var_r0) {
        temp_r9 = 0x40 - (var_r9 + 1);
        temp_r9_2 = (0x40 - var_r0) - temp_r9;
        var_ctr = temp_r9_2;
        if (temp_r9_2 >= 0x20) {
            var_r7 = 0;
        } else {
            var_r7 = (u32) var_r3 >> temp_r9_2;
        }
        if ((s32) (var_r0 + temp_r9) >= 0x20) {

        }
        var_r7_2 = var_r7;
        do {
            var_r7_2 = (var_r7_2 * 2) + M2C_CARRY;
            temp_r9_3 = (var_r7_2 - var_r5) - !M2C_CARRY;
            var_cr0_lt = temp_r9_3 < 0;
            switch (var_cr0_lt) {
            case 0:
                    var_r7_2 = (u32) temp_r9_3;
                break;
            }
            var_ctr -= 1;
        } while (var_ctr != 0);
        var_r3 = (s32) var_r7_2;
    }
    if (var_cr0_lt != 0) {
        return -var_r3 - !M2C_CARRY;
    }
    return var_r3;
}

s32 __shl2i(s32 arg0, u32 arg1, s32 arg2) {
    return (arg0 << arg2) | (arg1 >> (0x20 - arg2)) | (arg1 << (arg2 - 0x20));
}

u32 __shr2u(u32 arg0, u32 arg1, s32 arg2) {
    return arg0 >> arg2;
}

s32 __shr2i(s32 arg0, u32 arg1, s32 arg2) {
    if ((arg2 - 0x20) > 0) {

    }
    return arg0 >> arg2;
}

#pragma push
#pragma peephole off
u32 __cvt_dbl_usll(f64 farg0) {
    u32 temp_r3_2;
    f64 sp8;
    s32 temp_r5_2;
    u32 temp_r3;
    int unkspC;
    u32 temp_r5;
    u32 var_r3;

    sp8 = farg0;
    temp_r3 = M2C_BITWISE(u32, (s32)sp8);
    temp_r5 = (temp_r3 >> 0x14U) & 0x7FF;
    if (temp_r5 < 0x3FFU) {
        return 0U;
    }
    temp_r3_2 = (temp_r3 & 0xFFFFF) | 0x100000;
    temp_r5_2 = temp_r5 - 0x433;
    if (temp_r5_2 < 0) {
        var_r3 = temp_r3_2 >> -temp_r5_2;
        goto block_9;
    }
    if (temp_r5_2 > 0xA) {
        if (temp_r3 & 0x80000000) {
            return 0x80000000U;
        }
        return 0x7FFFFFFFU;
    }
    var_r3 = (temp_r3_2 << temp_r5_2) | (unkspC >> (0x20 - temp_r5_2)) | (unkspC << (temp_r5_2 - 0x20));
block_9:
    if (temp_r3 & 0x80000000) {
        var_r3 = -(s32) var_r3 - !M2C_CARRY;
    }
    return var_r3;
}
#pragma pop

s32 GetR2__Fv_8014B74C(void) {
    s32 saved_reg_r2;
    return saved_reg_r2;
}
