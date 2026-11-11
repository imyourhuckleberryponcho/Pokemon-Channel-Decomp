/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_8003A700();
M2C_UNK fn_800708D4(M2C_UNK);

void fn_8003A72C(void *arg0, u8 *arg1, u8 arg2);
void fn_8003A980(void *arg0);
void fn_8003A9A8(void *arg0);
void fn_8003A9D0(void *arg0, M2C_UNK arg_sp0);
void fn_8003AB9C(void *arg0, M2C_UNK arg_sp0);
void fn_8003AD78(void *arg0, M2C_UNK arg_sp0);
void fn_8003AF4C(void *arg0, M2C_UNK arg_sp0);
void fn_8003B118(void *arg0, M2C_UNK arg_sp0);
void fn_8003B2E4(void *arg0);
void fn_8003B30C(void *arg0);
void fn_8003B334(void *arg0);
void fn_8003B35C(void *arg0, M2C_UNK arg_sp0);
void fn_8003B528(void *arg0, M2C_UNK arg_sp0);
void fn_8003B704(void *arg0, M2C_UNK arg_sp0);
void fn_8003B8D8(void *arg0, M2C_UNK arg_sp0);
void fn_8003BAA4(void *arg0, M2C_UNK arg_sp0);
void fn_8003BC70(void *arg0);
void fn_8003BCC8(void *arg0);
void fn_8003BD24(void *arg0);
void fn_8003BD80(void *arg0, M2C_UNK arg_sp0);
void fn_8003BF94(void *arg0, M2C_UNK arg_sp0);
void fn_8003C1B8(void *arg0, M2C_UNK arg_sp0);
void fn_8003C3D4(void *arg0, M2C_UNK arg_sp0);

void fn_8003A72C(void *arg0, u8 *arg1, u8 arg2) {
    s32 temp_r0;
    s32 temp_r10;
    s32 temp_r9;
    u16 temp_r5;
    u16 temp_r6_3;
    u16 temp_r6_4;
    u16 var_r5_2;
    u16 var_r6;
    u8 temp_r6;
    u8 temp_r6_2;
    s8 temp_r7;
    u8 var_r0;
    u8 var_r5;
    u8 var_r5_3;
    u8 var_r9;

    var_r5 = arg2;
    temp_r6 = M2C_FIELD(arg0, u8 *, 0x2C);
    temp_r6_2 = (temp_r6 >> 1U) & 1;
    var_r0 = temp_r6_2;
    if (temp_r6 & 0x20) {
        var_r5 = (var_r5 * 0x10) & 0xF0;
        *arg1 = (*arg1 * 0x10) & 0xF0;
        var_r0 = (temp_r6_2 * 0x10) & 0xF0;
    }
    if ((M2C_FIELD((s32)arg0, u8 *, 0x2C) & 0x10) && (temp_r7 = *arg1, temp_r9 = temp_r7 & 0xF, ((temp_r9 < 0xA) != 0)) && ((s32) (temp_r7 & 0xF0) < 0xA0) && (temp_r10 = var_r5 & 0xF, ((temp_r10 < 0xA) != 0)) && ((s32) (var_r5 & 0xF0) < 0xA0)) {
        temp_r6_3 = temp_r9 + (((s32) temp_r7 >> 4) * 0xA);
        temp_r0 = temp_r10 + ((((s32) var_r5 >> 4) * 0xA) + var_r0);
        var_r6 = temp_r6_3 - temp_r0;
        if ((s16) var_r6 < 0) {
            var_r6 += 0x64;
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
        } else if (var_r6 >= 0x64U) {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
            var_r6 = (temp_r6_3 - temp_r0) % 100;
        } else {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
        }
        var_r5_2 = ((var_r6 / 10) * 0x10);
        var_r5_2 += (var_r6 % 10);
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF7);
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFB);
    } else {
        var_r9 = 0;
        temp_r6_4 = ((s8) *arg1 - (s8) var_r5) - var_r0;
        if (((s16) temp_r6_4 > 0x7F) || ((s16) temp_r6_4 < -0x80)) {
            var_r9 = 1;
        }
        if (var_r9 != 0) {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 4);
        } else {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFB);
        }
        temp_r5 = (*arg1 - var_r5) - var_r0;
        var_r5_2 = temp_r5;
        if (temp_r5 & 0x80) {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 8);
        } else {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF7);
        }
        if (var_r5_2 >= 0x100U) {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
        } else {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
        }
    }
    var_r5_3 = (u8) var_r5_2;
    if (M2C_FIELD(arg0, u8 *, 0x2C) & 0x20) {
        var_r5_3 = (var_r5_3 >> 4U) & 0xFFF;
    }
    *arg1 = var_r5_3;
    if ((u8) *arg1 == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_8003A980(void *arg0) {
    /* draft: did not compile: fn_8003A700(arg0 + 0xF, M2C_FIELD(arg0, u8 *, 0xE)); */
}

void fn_8003A9A8(void *arg0) {
    /* draft: did not compile: fn_8003A700(arg0 + 0xF, M2C_FIELD(arg0, u8 *, 0x37)); */
}

void fn_8003A9D0(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8003AB9C(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8003AD78(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8003AF4C(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8003B118(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8003B2E4(void *arg0) {
    /* draft: did not compile: fn_8003A72C(arg0 + 0xF, M2C_FIELD(arg0, u8 *, 0xF)); */
}

void fn_8003B30C(void *arg0) {
    /* draft: did not compile: fn_8003A72C(arg0 + 0xF, M2C_FIELD(arg0, u8 *, 0xE)); */
}

void fn_8003B334(void *arg0) {
    /* draft: did not compile: fn_8003A72C(arg0 + 0xF, M2C_FIELD(arg0, u8 *, 0x37)); */
}

void fn_8003B35C(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8003B528(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8003B704(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8003B8D8(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8003BAA4(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8003BC70(void *arg0) {
    u8 temp_r0;
    u8 temp_r4;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0xF);
    temp_r4 = temp_r0 & temp_r0;
    M2C_FIELD(arg0, u8 *, 0xF) = temp_r4;
    if (temp_r4 & 0x80) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 8);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF7);
    }
    if (temp_r4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_8003BCC8(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0xF) & M2C_FIELD(arg0, u8 *, 0xE);
    M2C_FIELD(arg0, u8 *, 0xF) = temp_r4;
    if (temp_r4 & 0x80) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 8);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF7);
    }
    if (temp_r4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_8003BD24(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0xF) & M2C_FIELD(arg0, u8 *, 0x37);
    M2C_FIELD(arg0, u8 *, 0xF) = temp_r4;
    if (temp_r4 & 0x80) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 8);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF7);
    }
    if (temp_r4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_8003BD80(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8003BF94(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8003C1B8(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8003C3D4(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */
