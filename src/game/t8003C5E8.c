/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_800708D4(M2C_UNK);
M2C_UNK fn_8003A700(s8 *, u8);

void fn_8003C5E8(void *arg0, M2C_UNK arg_sp0);
void fn_8003C7FC(void *arg0);
void fn_8003C854(void *arg0);
void fn_8003C8B0(void *arg0);
void fn_8003C90C(void *arg0, M2C_UNK arg_sp0);
void fn_8003CB20(void *arg0, M2C_UNK arg_sp0);
void fn_8003CD44(void *arg0, M2C_UNK arg_sp0);
void fn_8003CF60(void *arg0, M2C_UNK arg_sp0);
void fn_8003D174(void *arg0, M2C_UNK arg_sp0);
void fn_8003D388(void *arg0);
void fn_8003D3B0(void *arg0, s8 arg1);
void fn_8003D408(void *arg0);
void fn_8003D430(void *arg0);
void fn_8003D458(void *arg0, M2C_UNK arg_sp0);
void fn_8003D624(void *arg0, M2C_UNK arg_sp0);
void fn_8003D800(void *arg0, M2C_UNK arg_sp0);
void fn_8003D9D4(void *arg0, M2C_UNK arg_sp0);
void fn_8003DBA0(void *arg0, M2C_UNK arg_sp0);
void fn_8003DD6C(void *arg0);
void fn_8003DDC4(void *arg0);
void fn_8003DE20(void *arg0);
void fn_8003DE7C(void *arg0, M2C_UNK arg_sp0);
void fn_8003E090(void *arg0, M2C_UNK arg_sp0);
void fn_8003E2B4(void *arg0, M2C_UNK arg_sp0);

void fn_8003C5E8(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8003C7FC(void *arg0) {
    s8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0xF);
    M2C_FIELD(arg0, u8 *, 0xF) = temp_r0;
    if (temp_r0 & 0x80) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 8);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF7);
    }
    if (temp_r0 == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_8003C854(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0xF) | M2C_FIELD(arg0, u8 *, 0xE);
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

void fn_8003C8B0(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0xF) | M2C_FIELD(arg0, u8 *, 0x37);
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

void fn_8003C90C(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8003CB20(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8003CD44(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8003CF60(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8003D174(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8003D388(void *arg0) {
    u8 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0xF);
    /* draft: did not compile: fn_8003D3B0(temp_r4, temp_r4); */
}

void fn_8003D3B0(void *arg0, s8 arg1) {
    s8 sp8;
    u8 temp_r6;

    sp8 = arg1;
    temp_r6 = M2C_FIELD(arg0, u8 *, 0x2C);
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (temp_r6 & 0xFFFFFFCF);
    fn_8003A700(&sp8, temp_r6);
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | (temp_r6 & 0x30));
}

void fn_8003D408(void *arg0) {
    /* draft: did not compile: fn_8003D3B0(M2C_FIELD(arg0, u8 *, 0xF), M2C_FIELD(arg0, u8 *, 0xE)); */
}

void fn_8003D430(void *arg0) {
    /* draft: did not compile: fn_8003D3B0(M2C_FIELD(arg0, u8 *, 0xF), M2C_FIELD(arg0, u8 *, 0x37)); */
}

void fn_8003D458(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8003D624(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8003D800(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8003D9D4(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8003DBA0(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8003DD6C(void *arg0) {
    u8 temp_r0;
    u8 temp_r4;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0xF);
    temp_r4 = temp_r0 ^ temp_r0;
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

void fn_8003DDC4(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0xF) ^ M2C_FIELD(arg0, u8 *, 0xE);
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

void fn_8003DE20(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0xF) ^ M2C_FIELD(arg0, u8 *, 0x37);
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

void fn_8003DE7C(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8003E090(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8003E2B4(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */
