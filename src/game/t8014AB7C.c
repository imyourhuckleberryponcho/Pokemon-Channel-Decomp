/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"


s32 __va_arg(u8 *arg0, s32 arg1);

s32 __va_arg(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r7;
    s32 var_r0;
    s32 var_r10;
    s32 var_r11;
    s32 var_r5;
    s32 var_r6;
    s32 var_r8;
    s32 var_r9;
    s8 var_r7;
    u8 *var_r6_2;

    var_r6_2 = arg0;
    var_r0 = 8;
    var_r8 = 4;
    var_r7 = (s8) M2C_FIELD(arg0, u8 *, 0);
    var_r9 = 1;
    var_r5 = 0;
    var_r10 = 0;
    var_r11 = 4;
    if (arg1 == 3) {
        var_r6_2 = arg0 + 1;
        var_r8 = 8;
        var_r10 = 0x20;
        var_r7 = (s8) M2C_FIELD(arg0, u8 *, 1);
        var_r11 = 8;
    }
    if (arg1 == 2) {
        var_r8 = 8;
        var_r0 = 7;
        if (var_r7 & 1) {
            var_r5 = 1;
        }
        var_r9 = 2;
    }
    if (var_r7 < var_r0) {
        temp_r7 = var_r7 + var_r5;
        *var_r6_2 = temp_r7 + var_r9;
        var_r6 = M2C_FIELD(arg0, s32 *, 8) + (var_r10 + (temp_r7 * var_r11));
    } else {
        temp_r0 = var_r8 - 1;
        *var_r6_2 = 8;
        var_r6 = ~(temp_r0 | temp_r0) & ((var_r8 + M2C_FIELD(arg0, s32 *, 4)) - 1);
        M2C_FIELD(arg0, s32 *, 4) = (s32) (var_r6 + var_r8);
    }
    if (arg1 == 0) {
        /* draft: did not compile: var_r6 = *var_r6; */
    }
    return var_r6;
}
