/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_800708D4(M2C_UNK);
extern u32 lbl_8034E9DC;

void fn_80057B24(void *arg0, M2C_UNK arg_sp0);
void fn_80057E50(void *arg0, M2C_UNK arg_sp0);
void fn_8005817C(void *arg0, M2C_UNK arg_sp0);
void fn_800584A8(void *arg0, M2C_UNK arg_sp0);
void fn_800587D4(void *arg0, M2C_UNK arg_sp0);
void fn_80058B00(void *arg0, M2C_UNK arg_sp0);
void fn_80058E2C(void *arg0, M2C_UNK arg_sp0);
void fn_80059158(void *arg0, M2C_UNK arg_sp0);
void fn_80059484(void *arg0, M2C_UNK arg_sp0);
void fn_800597B0(void *arg0);
void fn_80059864(void *arg0);

void fn_80057B24(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80057E50(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8005817C(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_800584A8(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_800587D4(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80058B00(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80058E2C(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80059158(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80059484(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_800597B0(void *arg0) {
    u8 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0xF);
    if (temp_r4 & 0x80) {
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
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
    }
    if ((temp_r4 ^ M2C_FIELD(arg0, u8 *, 0xF)) & 0x80) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 4);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFB);
}

void fn_80059864(void *arg0) {
    u8 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0xE);
    if (temp_r4 & 0x80) {
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
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
    }
    if ((temp_r4 ^ M2C_FIELD(arg0, u8 *, 0xE)) & 0x80) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 4);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFB);
}
