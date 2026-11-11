/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_800441A0(void *);
M2C_UNK fn_800708D4(M2C_UNK);
extern u32 lbl_8034E9DC;

void fn_80059918(void *arg0, M2C_UNK arg_sp0);
void fn_80059B9C(void *arg0, M2C_UNK arg_sp0);
void fn_80059F5C(void *arg0);
void fn_80059FE4(void *arg0);
void fn_8005A06C(void *arg0, M2C_UNK arg_sp0);
void fn_8005A2C4(void *arg0, M2C_UNK arg_sp0);
void fn_8005A658(void *arg0);
void fn_8005A6F4(void *arg0);
void fn_8005A790(void *arg0, M2C_UNK arg_sp0);
void fn_8005A9FC(void *arg0, M2C_UNK arg_sp0);
void fn_8005ADA4(void *arg0);
void fn_8005AE2C(void *arg0);
void fn_8005AEB4(void *arg0, M2C_UNK arg_sp0);
void fn_8005B10C(void *arg0, M2C_UNK arg_sp0);
void fn_8005B4A0(void *arg0);
void fn_8005B534(void *arg0);
void fn_8005B5C8(void *arg0, M2C_UNK arg_sp0);

void fn_80059918(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80059B9C(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80059F5C(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0xF) & 0x80) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
    }
    M2C_FIELD(arg0, u8 *, 0xF) = (u8) ((M2C_FIELD(arg0, u8 *, 0xF) * 2) & 0xFE);
    if (M2C_FIELD(arg0, u8 *, 0xF) & 0x80) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 8);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF7);
    }
    if ((u8) M2C_FIELD(arg0, u8 *, 0xF) == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_80059FE4(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0xE) & 0x80) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
    }
    M2C_FIELD(arg0, u8 *, 0xE) = (u8) ((M2C_FIELD(arg0, u8 *, 0xE) * 2) & 0xFE);
    if (M2C_FIELD(arg0, u8 *, 0xE) & 0x80) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 8);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF7);
    }
    if ((u8) M2C_FIELD(arg0, u8 *, 0xE) == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_8005A06C(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8005A2C4(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8005A658(void *arg0) {
    u8 temp_r4;

    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFB);
    temp_r4 = M2C_FIELD(arg0, u8 *, 0xF);
    if (temp_r4 & 1) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
    }
    M2C_FIELD(arg0, u8 *, 0xF) = (u8) (((s32) M2C_FIELD(arg0, u8 *, 0xF) >> 1) + (temp_r4 & 0x80));
    if (M2C_FIELD(arg0, u8 *, 0xF) & 0x80) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 8);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF7);
    }
    if ((u8) M2C_FIELD(arg0, u8 *, 0xF) == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_8005A6F4(void *arg0) {
    u8 temp_r4;

    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFB);
    temp_r4 = M2C_FIELD(arg0, u8 *, 0xE);
    if (temp_r4 & 1) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
    }
    M2C_FIELD(arg0, u8 *, 0xE) = (u8) (((s32) M2C_FIELD(arg0, u8 *, 0xE) >> 1) + (temp_r4 & 0x80));
    if (M2C_FIELD(arg0, u8 *, 0xE) & 0x80) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 8);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF7);
    }
    if ((u8) M2C_FIELD(arg0, u8 *, 0xE) == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_8005A790(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8005A9FC(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8005ADA4(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0xF) & 1) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
    }
    M2C_FIELD(arg0, u8 *, 0xF) = (u8) ((s32) M2C_FIELD(arg0, u8 *, 0xF) >> 1);
    if (M2C_FIELD(arg0, u8 *, 0xF) & 0x80) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 8);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF7);
    }
    if ((u8) M2C_FIELD(arg0, u8 *, 0xF) == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_8005AE2C(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0xE) & 1) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
    }
    M2C_FIELD(arg0, u8 *, 0xE) = (u8) ((s32) M2C_FIELD(arg0, u8 *, 0xE) >> 1);
    if (M2C_FIELD(arg0, u8 *, 0xE) & 0x80) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 8);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF7);
    }
    if ((u8) M2C_FIELD(arg0, u8 *, 0xE) == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_8005AEB4(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8005B10C(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8005B4A0(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0xF) & 0x80) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
    }
    M2C_FIELD(arg0, u8 *, 0xF) = (u8) ((M2C_FIELD(arg0, u8 *, 0xF) * 2) + (((u8) M2C_FIELD(arg0, u8 *, 0x2C) >> 1U) & 1));
    if (M2C_FIELD(arg0, u8 *, 0xF) & 0x80) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 8);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF7);
    }
    if ((u8) M2C_FIELD(arg0, u8 *, 0xF) == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_8005B534(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0xE) & 0x80) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
    }
    M2C_FIELD(arg0, u8 *, 0xE) = (u8) ((M2C_FIELD(arg0, u8 *, 0xE) * 2) + (((u8) M2C_FIELD(arg0, u8 *, 0x2C) >> 1U) & 1));
    if (M2C_FIELD(arg0, u8 *, 0xE) & 0x80) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 8);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF7);
    }
    if ((u8) M2C_FIELD(arg0, u8 *, 0xE) == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_8005B5C8(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */
