/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_800708D4(M2C_UNK);
extern u32 lbl_8034E9DC;
M2C_UNK fn_800441A0(void *, s32);
M2C_UNK fn_8005D810(s32);

void fn_8005B82C(void *arg0, M2C_UNK arg_sp0);
void fn_8005BBCC(void *arg0);
void fn_8005BC5C(void *arg0);
void fn_8005BCEC(void *arg0, M2C_UNK arg_sp0);
void fn_8005BF4C(void *arg0, M2C_UNK arg_sp0);
void fn_8005C2E8(void *arg0);
void fn_8005C38C(void *arg0);
void fn_8005C430(void *arg0, M2C_UNK arg_sp0);
void fn_8005C6A4(void *arg0, M2C_UNK arg_sp0);
void fn_8005CA54(void *arg0);
void fn_8005CAF0(void *arg0);
void fn_8005CB8C(void *arg0, M2C_UNK arg_sp0);
void fn_8005CDF8(void *arg0, M2C_UNK arg_sp0);
void fn_8005D1A0(void *arg0);
void fn_8005D1FC(void *arg0);
void fn_8005D258(void *arg0, M2C_UNK arg_sp0);
void fn_8005D484(void *arg0, M2C_UNK arg_sp0);
void fn_8005D7EC(s32 arg0);

void fn_8005B82C(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8005BBCC(void *arg0) {

    if ((M2C_FIELD(arg0, u8 *, 0xF)) & 0x80) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
    }
    M2C_FIELD(arg0, u8 *, 0xF) = (u8) ((M2C_FIELD(arg0, u8 *, 0xF) * 2) + (((M2C_FIELD(arg0, u8 *, 0xF)) >> 7U) & 1));
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

void fn_8005BC5C(void *arg0) {

    if ((M2C_FIELD(arg0, u8 *, 0xE)) & 0x80) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
    }
    M2C_FIELD(arg0, u8 *, 0xE) = (u8) ((M2C_FIELD(arg0, u8 *, 0xE) * 2) + (((M2C_FIELD(arg0, u8 *, 0xE)) >> 7U) & 1));
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

void fn_8005BCEC(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8005BF4C(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8005C2E8(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0xF) & 1) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
    }
    M2C_FIELD(arg0, u8 *, 0xF) = (u8) (((s32) M2C_FIELD(arg0, u8 *, 0xF) >> 1) + (u8) (0x80 & -(((u8) M2C_FIELD(arg0, u8 *, 0x2C) >> 1U) & 1)));
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

void fn_8005C38C(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0xE) & 1) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
    }
    M2C_FIELD(arg0, u8 *, 0xE) = (u8) (((s32) M2C_FIELD(arg0, u8 *, 0xE) >> 1) + (u8) (0x80 & -(((u8) M2C_FIELD(arg0, u8 *, 0x2C) >> 1U) & 1)));
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

void fn_8005C430(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8005C6A4(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8005CA54(void *arg0) {
    s32 temp_r5;

    temp_r5 = M2C_FIELD(arg0, u8 *, 0xF) & 1;
    if (temp_r5 != 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
    }
    M2C_FIELD(arg0, u8 *, 0xF) = (u8) (((s32) M2C_FIELD(arg0, u8 *, 0xF) >> 1) + (u8) (0x80 & -temp_r5));
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

void fn_8005CAF0(void *arg0) {
    s32 temp_r5;

    temp_r5 = M2C_FIELD(arg0, u8 *, 0xE) & 1;
    if (temp_r5 != 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
    }
    M2C_FIELD(arg0, u8 *, 0xE) = (u8) (((s32) M2C_FIELD(arg0, u8 *, 0xE) >> 1) + (u8) (0x80 & -temp_r5));
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

void fn_8005CB8C(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8005CDF8(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8005D1A0(void *arg0) {
    u8 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0xF) ^ 0xFFFF;
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

void fn_8005D1FC(void *arg0) {
    u8 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0xE) ^ 0xFFFF;
    M2C_FIELD(arg0, u8 *, 0xE) = temp_r4;
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

void fn_8005D258(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8005D484(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8005D7EC(s32 arg0) {
    fn_8005D810(arg0 + 0xF);
}
