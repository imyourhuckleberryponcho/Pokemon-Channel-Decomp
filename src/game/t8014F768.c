/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

s32 fwide();
extern M2C_UNK __files;
u32 fwrite(s32, M2C_UNK, s32);
u8 **__va_arg();
u32 memchr(u8 *, M2C_UNK, s32);
u8 *parse_format_8015126C(u8 *, s32, s32 *);
u8 *strchr(u8 *, M2C_UNK);
s32 strlen(u8 *);
s32 wcstombs(u8 *, u8 *, M2C_UNK);
M2C_UNK __num2dec();
M2C_UNK strcpy();
extern M2C_UNK lbl_802B0898;
extern f64 lbl_80352478;

void fn_8014F768(u32 arg0, u32 arg1);
s32 vprintf(s32 arg0, s32 arg1);
s32 fn_8014F858(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7, M2C_UNK arg_sp8);
s32 fn_8014F91C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7, M2C_UNK arg_sp8);
s32 __StringWrite(void *arg0, s32 arg2);
s32 __FileWrite(s32 arg0, s32 arg1, u32 arg2);
s32 __pformatter_8014FAAC(u32 (*arg0)(s32, u8 *, u8), s32 arg1, u8 *arg2, s32 arg3);
static void *float2str(void *arg0, void *arg1, f32 farg0);
void fn_8015090C(void *arg0, s32 arg1);
static void *double2hex(s32 arg0, void *arg1, f64 farg0);
void longlong2str_80150D70();
void long2str_8015104C();

void fn_8014F768(u32 arg0, u32 arg1) {
    s32 sp10;
    u32 spC;
    u32 sp8;
    u32 temp_r3;
    u32 var_r4;

    sp8 = arg0;
    spC = arg1;
    sp10 = 0;
    /* draft: did not compile: temp_r3 = __pformatter_8014FAAC(__StringWrite, &sp8); */
    if (arg0 != 0U) {
        var_r4 = arg1 - 1;
        if (temp_r3 < arg1) {
            var_r4 = temp_r3;
        }
        /* draft: did not compile: *(arg0 + var_r4) = 0; */
    }
}

#pragma push
#pragma peephole off
s32 vprintf(s32 arg0, s32 arg1) {
    void *temp_r31;

    temp_r31 = &__files + 0x50;
    if (fwide(temp_r31, -1, &__files) >= 0) {
        return -1;
    }
    return 0;
}
#pragma pop

s32 fn_8014F858(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7, M2C_UNK arg_sp8) {
    s32 *sp70;
    M2C_UNK *sp6C;
    s32 sp68;
    f64 sp60;
    f64 sp58;
    f64 sp50;
    f64 sp48;
    f64 sp40;
    f64 sp38;
    f64 sp30;
    f64 sp28;
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;

    if (M2C_ERROR(/* Read from unset register $cr0_eq */)) {
        sp28 = farg0;
        sp30 = farg1;
        sp38 = farg2;
        sp40 = farg3;
        sp48 = farg4;
        sp50 = farg5;
        sp58 = farg6;
        sp60 = farg7;
    }
    sp8 = arg0;
    spC = arg1;
    sp10 = arg2;
    sp14 = arg3;
    sp18 = arg4;
    sp1C = arg5;
    sp20 = arg6;
    sp24 = arg7;
    if ((s16)fwide(arg0, -1) >= 0) {
        return -1;
    }
    sp68 = 0x02000000;
    sp6C = &arg_sp8;
    sp70 = &sp8;
    return 0;
}

s32 fn_8014F91C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7, M2C_UNK arg_sp8) {
    s32 *sp70;
    M2C_UNK *sp6C;
    s32 sp68;
    f64 sp60;
    f64 sp58;
    f64 sp50;
    f64 sp48;
    f64 sp40;
    f64 sp38;
    f64 sp30;
    f64 sp28;
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    void *temp_r31;

    if (M2C_ERROR(/* Read from unset register $cr0_eq */)) {
        sp28 = farg0;
        sp30 = farg1;
        sp38 = farg2;
        sp40 = farg3;
        sp48 = farg4;
        sp50 = farg5;
        sp58 = farg6;
        sp60 = farg7;
    }
    spC = arg1;
    sp8 = arg0;
    temp_r31 = &__files + 0x50;
    sp10 = arg2;
    sp14 = arg3;
    sp18 = arg4;
    sp1C = arg5;
    sp20 = arg6;
    sp24 = arg7;
    if ((s16)fwide(temp_r31, -1) >= 0) {
        return -1;
    }
    sp68 = 0x01000000;
    sp6C = &arg_sp8;
    sp70 = &sp8;
    return 0;
}

s32 __StringWrite(void *arg0, s32 arg2) {
    s32 temp_r3;
    s32 var_r31;
    u32 temp_r6;

    temp_r3 = M2C_FIELD((s32)arg0, s32 *, 8);
    temp_r6 = M2C_FIELD(arg0, u32 *, 4);
    var_r31 = temp_r6 - temp_r3;
    if ((u32) (arg2 + temp_r3) <= temp_r6) {
        var_r31 = arg2;
    }
    /* draft: did not compile: memcpy(M2C_FIELD(arg0, s32 *, 0) + temp_r3, var_r31); */
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + var_r31);
    return 1;
}

#pragma push
#pragma optimize_for_size on
s32 __FileWrite(s32 arg0, s32 arg1, u32 arg2) {
    if (arg2 == fwrite(arg1, 1, arg0)) {
        return arg0;
    }
    return 0;
}
#pragma pop

s32 __pformatter_8014FAAC(u32 (*arg0)(s32, u8 *, u8), s32 arg1, u8 *arg2, s32 arg3) { return 0; } /* draft: stub */

static void *float2str(void *arg0, void *arg1, f32 farg0) { } /* draft: stub */

void fn_8015090C(void *arg0, s32 arg1) {
    u8 temp_r0_4;
    s32 var_r4;
    s8 *var_r8;
    s8 temp_r0;
    s8 temp_r0_3;
    s8 temp_r7_2;
    u32 var_r5_2;
    u8 *var_r5;
    u8 temp_r0_2;
    u8 temp_r7;
    void *temp_r6;

    var_r4 = arg1;
    if (var_r4 < 0) {
        /* Duplicate return node #1. Try simplifying control flow for better match */
        M2C_FIELD(arg0, s16 *, 2) = 0;
        M2C_FIELD(arg0, u8 *, 4) = 1U;
        M2C_FIELD(arg0, s8 *, 5) = 0x30;
        return;
    }
    temp_r7 = M2C_FIELD(arg0, u8 *, 4);
    if (var_r4 < (s32) temp_r7) {
        /* draft: did not compile: temp_r6 = arg0 + var_r4; */
        /* draft: did not compile: var_r8 = temp_r6 + 5; */
        temp_r0 = M2C_FIELD(temp_r6, u8 *, 5);
        temp_r0 -= 0x30;
        if (temp_r0 == 5) {
            /* draft: did not compile: var_r5 = arg0 + temp_r7 + 5; */
loop_5:
            var_r5 -= 1;
            if (0 /* draft: did not compile */) {
                if ((s32) *var_r5 == 0x30) {
                    goto loop_5;
                }
            }
            if (0 /* draft: did not compile */) {
                var_r5_2 = M2C_FIELD(var_r8, u8 *, -1) & 1;
            } else {
                var_r5_2 = 1;
            }
        } else {
            var_r5_2 = temp_r0 > 5;
        }
loop_16:
        if (var_r4 != 0) {
            temp_r0_2 = M2C_FIELD(var_r8, u8 *, -1);
            var_r8 -= 1;
            temp_r0_3 = (temp_r0_2 + var_r5_2);
            temp_r7_2 = (temp_r0_3 - 0x30);
            temp_r0_4 = temp_r7_2 ^ 9;
            var_r5_2 = (u32) ((temp_r0_4 >> 1) - (temp_r0_4 & temp_r7_2)) >> 0x1FU;
            if ((var_r5_2 != 0) || (temp_r7_2 == 0)) {
                var_r4 -= 1;
                goto loop_16;
            }
            *var_r8 = temp_r7_2 + 0x30;
        }
        if ((s32) var_r5_2 != 0) {
            M2C_FIELD(arg0, s16 *, 2) = (s16) (M2C_FIELD(arg0, s16 *, 2) + 1);
            M2C_FIELD(arg0, u8 *, 4) = 1U;
            M2C_FIELD(arg0, s8 *, 5) = 0x31;
            return;
        }
        if (var_r4 != 0) {
            M2C_FIELD(arg0, u8 *, 4) = (u8) var_r4;
            return;
        }
        M2C_FIELD(arg0, s16 *, 2) = 0;
        M2C_FIELD(arg0, u8 *, 4) = 1U;
        M2C_FIELD(arg0, s8 *, 5) = 0x30;
    }
}

static void *double2hex(s32 arg0, void *arg1, f64 farg0) { } /* draft: stub */

void longlong2str_80150D70() { } /* draft: stub */

void long2str_8015104C() { } /* draft: stub */
