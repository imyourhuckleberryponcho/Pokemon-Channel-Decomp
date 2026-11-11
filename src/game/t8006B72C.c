/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_80038808(void *, M2C_UNK);
M2C_UNK fn_80038B14();
M2C_UNK fn_80038F80();
M2C_UNK fn_80070680();
M2C_UNK OSGetTime();
M2C_UNK OSTicksToCalendarTime(s32 *);
extern M2C_UNK lbl_802237EC;
extern M2C_UNK lbl_80223A80;
extern s32 lbl_80350648;
M2C_UNK fn_80063040();
M2C_UNK fn_80020694(s32, M2C_UNK);
M2C_UNK FreePictureSD(s32);
M2C_UNK fn_80068BB8();
M2C_UNK fn_800C9448(M2C_UNK *, M2C_UNK);
M2C_UNK VIWaitForRetrace();
extern M2C_UNK lbl_802C2388;
extern s32 lbl_80350600;
extern s32 lbl_80350604;
extern s8 lbl_8035060C;
extern s8 lbl_8035063C;
extern s32 lbl_80350640;
extern s32 lbl_8035064C;
M2C_UNK fn_80005888(void *);
M2C_UNK fn_800387CC(void *, M2C_UNK);
M2C_UNK fn_8007061C(void *, M2C_UNK);
extern M2C_UNK lbl_80223828;
extern M2C_UNK lbl_80223864;
extern M2C_UNK lbl_802238A0;
extern M2C_UNK lbl_80223918;
extern M2C_UNK lbl_80223944;
extern M2C_UNK lbl_80223970;
extern M2C_UNK lbl_8022399C;
extern M2C_UNK lbl_802239C8;
extern M2C_UNK lbl_802239F4;
extern M2C_UNK lbl_80223A20;
extern M2C_UNK lbl_80223A60;
extern s8 lbl_8035060D;

void fn_8006B72C(void *arg0);
void *fn_8006BCA4(void *arg0);
void fn_8006BDEC(void);
void TerminatePokemonMini(void);
void *fn_8006BE94(void *arg0, s16 arg1);
void DisablePokemonMiniController(void);
void EnablePokemonMiniController(void);
void SetPokemonMiniVolume(void);
void fn_8006C138(void *arg0);
void fn_8006C1A0(void *arg0);
void fn_8006C210(void);
void fn_8006C214(void);
void fn_8006C218(void);
void fn_8006C21C(void);
void fn_8006C220(void *arg0);
void fn_8006C234(void);
void fn_8006C238(void);
void fn_8006C23C(void);
void fn_8006C240(void);
void fn_8006C244(void *arg0);
void fn_8006C278(void *arg0, u32 arg1, u8 *arg2);
void fn_8006C2F4(void *arg0, u32 arg1, s8 arg2);
void fn_8006C360(void *arg0);
void fn_8006C394(void *arg0);
void fn_8006C53C(void);
void fn_8006C540(void);
void fn_8006C544(void *arg0, s32 arg1, u8 *arg2);
void fn_8006C708();
void fn_8006CB80(void *arg0);
void fn_8006CB8C(void);
void fn_8006CB90(void);
void fn_8006CB94(void *arg0, s32 arg1, u8 *arg2);

void fn_8006B72C(void *arg0) { } /* draft: stub */

void *fn_8006BCA4(void *arg0) {
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    u8 sp1C;
    s32 sp8;
    s8 temp_r6;
    u8 temp_r4;
    u8 temp_r5;

    M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_80223A80;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_802237EC;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    /* draft: did not compile: memcpy(arg0 + 0x28, lbl_80350648, 0x2000); */
    if ((u32) M2C_FIELD(arg0, u32 *, 0x28) == 0U) {
        M2C_FIELD(arg0, u32 *, 0x28) = 0x47424D4EU;
        M2C_FIELD(arg0, s32 *, 0x201A) = 0x0103011F;
    }
    M2C_FIELD(arg0, s32 *, 0x201E) = 0;
    OSGetTime();
    OSTicksToCalendarTime(&sp8);
    temp_r5 = M2C_FIELD(arg0, u8 *, 0x2024);
    M2C_FIELD(arg0, u8 *, 0x2021) = (u8) (sp1C % 100);
    M2C_FIELD(arg0, u8 *, 0x2022) = (u8) (sp18 + 1);
    M2C_FIELD(arg0, u8 *, 0x2023) = (u8) sp14;
    M2C_FIELD(arg0, u8 *, 0x2024) = (u8) sp10;
    M2C_FIELD(arg0, u8 *, 0x2025) = (u8) spC;
    M2C_FIELD(arg0, u8 *, 0x2026) = (u8) sp8;
    temp_r4 = M2C_FIELD(arg0, u8 *, 0x2025);
    temp_r6 = (u8) M2C_FIELD(arg0, s32 *, 0x201E) + M2C_FIELD(arg0, u8 *, 0x201F) + M2C_FIELD(arg0, u8 *, 0x2020) + M2C_FIELD(arg0, u8 *, 0x2021) + M2C_FIELD(arg0, u8 *, 0x2022) + M2C_FIELD(arg0, u8 *, 0x2023) + temp_r5 + temp_r4 + M2C_FIELD(arg0, u8 *, 0x2026);
    M2C_FIELD(arg0, s8 *, 0x2027) = temp_r6;
    fn_8006BDEC();
    return arg0;
}

void fn_8006BDEC(void) {
    fn_80063040();
}

void TerminatePokemonMini(void) {
    u8 temp_r31;

    lbl_8035063C = 0;
    lbl_8035060C = 1;
    fn_800C9448(&lbl_802C2388, 0);
    fn_80068BB8();
    temp_r31 = lbl_80350600;
    lbl_80350600 = 0;
    VIWaitForRetrace();
    /* draft: did not compile: fn_8006BE94(temp_r31, -1); */
    FreePictureSD(temp_r31);
    FreePictureSD(lbl_8035064C);
    fn_80020694(lbl_80350640, 1);
    FreePictureSD(lbl_80350604);
}

void *fn_8006BE94(void *arg0, s16 arg1) { } /* draft: stub */

void DisablePokemonMiniController(void) {
    lbl_8035060D = 0;
}

void EnablePokemonMiniController(void) {
    lbl_8035060D = 1;
}

void SetPokemonMiniVolume(void) {

}

void fn_8006C138(void *arg0) {
    void *temp_r4;
    void *temp_r4_2;

    if ((u32) M2C_FIELD(arg0, u32 *, 0) != 0U) {
        temp_r4 = M2C_FIELD(arg0, void **, 8);
        M2C_FIELD(temp_r4, s32 *, 0x18) = 0;
        M2C_FIELD(temp_r4, s32 *, 0x38) = 0;
        temp_r4_2 = M2C_FIELD(arg0, void **, 0xC);
        M2C_FIELD(temp_r4_2, s32 *, 0x18) = 0;
        M2C_FIELD(temp_r4_2, s32 *, 0x38) = 0;
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
        M2C_FIELD(arg0, void **, 0xC) = NULL;
        M2C_FIELD(arg0, void **, 8) = NULL;
    }
    M2C_FIELD(arg0, u32 *, 0) = 0U;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), M2C_UNK (**)(), 0xC)();
}

void fn_8006C1A0(void *arg0) {
    u32 temp_r3;
    void *temp_r4;

    fn_8006BDEC();
    temp_r3 = M2C_FIELD(arg0, u32 *, 0);
    if (temp_r3 != 0U) {
        M2C_FIELD(arg0, s32 *, 8) = (s32) (temp_r3 + 0x1B8);
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, u32 *, 0) + 0x1B8);
        M2C_FIELD(arg0, void **, 0x10) = (void *) (M2C_FIELD(arg0, u32 *, 0) + 0x160);
        temp_r4 = M2C_FIELD(arg0, void **, 0x10);
        M2C_FIELD(temp_r4, u8 *, 3) = (u8) (M2C_FIELD(temp_r4, u8 *, 3) | 4);
        fn_80063040(arg0, temp_r4);
    }
}

void fn_8006C210(void) {

}

void fn_8006C214(void) {

}

void fn_8006C218(void) {

}

void fn_8006C21C(void) {

}

void fn_8006C220(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 1;
}

void fn_8006C234(void) {

}

void fn_8006C238(void) {

}

void fn_8006C23C(void) {

}

void fn_8006C240(void) {

}

void fn_8006C244(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), M2C_UNK (**)(), 0xC)();
}

void fn_8006C278(void *arg0, u32 arg1, u8 *arg2) {
    switch (arg1) {                                 /* irregular */
    case 0x44:
        *arg2 |= M2C_FIELD(arg0, u8 *, 0x1C) & 0xF7;
        return;
    case 0x45:
        *arg2 |= M2C_FIELD(arg0, u8 *, 0x1D) & 0x7F;
        return;
    case 0x46:
        *arg2 |= M2C_FIELD(arg0, u8 *, 0x1E);
        return;
    case 0x47:
        *arg2 |= M2C_FIELD(arg0, u8 *, 0x1F) & 0xF;
        return;
    }
}

void fn_8006C2F4(void *arg0, u32 arg1, s8 arg2) {
    s32 temp_r0;

    switch (arg1) {                                 /* irregular */
    case 0x44:
        M2C_FIELD(arg0, s8 *, 0x1C) = (s8) (arg2 & 0xF7);
        return;
    case 0x45:
        temp_r0 = arg2 & 0x7F;
        M2C_FIELD(arg0, u8 *, 0x1D) = (u8) (M2C_FIELD(arg0, u8 *, 0x1D) & (~(temp_r0 | temp_r0) & 0x70));
        M2C_FIELD(arg0, u8 *, 0x1D) = (u8) (M2C_FIELD(arg0, u8 *, 0x1D) | (arg2 & 0xF));
        return;
    case 0x46:
        M2C_FIELD(arg0, s8 *, 0x1E) = arg2;
        return;
    case 0x47:
        M2C_FIELD(arg0, s8 *, 0x1F) = (s8) (arg2 & 0xF);
        return;
    }
}

void fn_8006C360(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), M2C_UNK (**)(), 0xC)();
}

void fn_8006C394(void *arg0) {
    s32 temp_r0;
    s32 var_r4;
    u8 temp_r3;
    void *temp_r3_2;

    M2C_FIELD(arg0, u8 *, 9) = 6U;
    M2C_FIELD(arg0, u8 *, 8) = 0U;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s8 *, 0x20) = 0;
    M2C_FIELD(arg0, u8 *, 0x21) = 0U;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    /* draft: did not compile: memset(arg0 + 0x2C, 0, 0x300, 0); */
    if ((void *) M2C_FIELD(arg0, void **, 0x334) != NULL) {
        memset((void *)(NULL), (int)(0x300), (unsigned long)(0));
        /* draft: did not compile: memset(M2C_FIELD(arg0, void **, 0x334) + 0x300, 0, 0x300); */
    }
    M2C_FIELD(arg0, s8 *, 0x15) = 0;
    M2C_FIELD(arg0, s8 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x330) = -0x7D;
    M2C_FIELD(arg0, u8 *, 0x32C) = 0U;
    temp_r0 = ((u8) M2C_FIELD(arg0, u8 *, 8) >> 4U) & 3;
    switch (temp_r0) {                              /* irregular */
    default:
    case 0:
        M2C_FIELD(arg0, s32 *, 0xC) = 0x60;
        M2C_FIELD(arg0, s32 *, 0x10) = 0x80;
        break;
    case 1:
        M2C_FIELD(arg0, s32 *, 0xC) = 0x80;
        M2C_FIELD(arg0, s32 *, 0x10) = 0x60;
        break;
    case 2:
        M2C_FIELD(arg0, s32 *, 0xC) = 0xC0;
        M2C_FIELD(arg0, s32 *, 0x10) = 0x40;
        break;
    case 3:
        M2C_FIELD(arg0, s32 *, 0xC) = 0xC0;
        M2C_FIELD(arg0, s32 *, 0x10) = 0x80;
        break;
    }
    temp_r3 = M2C_FIELD(arg0, u8 *, 9);
    M2C_FIELD(arg0, u8 *, 0x22) = (u8) (((((temp_r3 >> 1U) & 3) + 1) * (-((temp_r3 >> 3U) & 1) + 3)) - 1);
    if ((u8) M2C_FIELD(arg0, u8 *, 0x21) > (u8) M2C_FIELD(arg0, u8 *, 0x22)) {
        M2C_FIELD(arg0, u8 *, 0x21) = 0U;
    }
    var_r4 = 0x1E848;
    if (M2C_FIELD(arg0, u8 *, 9) & 0x10) {
        var_r4 = 0x1AB59;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = var_r4;
    temp_r3_2 = M2C_FIELD(arg0, void **, 0x334);
    if (temp_r3_2 != NULL) {
        M2C_FIELD(temp_r3_2, s32 *, 0x600) = 1;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x334), s8 *, 0x606) = (s8) M2C_FIELD(arg0, s32 *, 0x330);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x334), s8 *, 0x604) = 0;
    }
}

void fn_8006C53C(void) {

}

void fn_8006C540(void) {

}

void fn_8006C544(void *arg0, s32 arg1, u8 *arg2) {
    switch (arg1) {                                 /* irregular */
    default:
        *arg2 |= ((u8) M2C_FIELD(arg0, u8 *, 9) >> 5U) & 1;
        return;
    case 0x2:
        *arg2 |= (M2C_FIELD(arg0, u8 *, 9) & 0x10) | 2;
        return;
    case 0x80:
        *arg2 |= M2C_FIELD(arg0, u8 *, 8) & 0x3F;
        return;
    case 0x81:
        *arg2 |= (M2C_FIELD(arg0, u8 *, 0x21) * 0x10) + (M2C_FIELD(arg0, u8 *, 9) & 0xF);
        return;
    case 0x82:
        *arg2 |= (u8) M2C_FIELD(arg0, u32 *, 0x24);
        return;
    case 0x83:
        *arg2 |= (u8) ((u32) M2C_FIELD(arg0, u32 *, 0x24) >> 8U);
        return;
    case 0x84:
        *arg2 |= (u8) ((u32) M2C_FIELD(arg0, u32 *, 0x24) >> 0x10U);
        return;
    case 0x85:
        *arg2 |= M2C_FIELD(arg0, u8 *, 0x17);
        return;
    case 0x86:
        *arg2 |= M2C_FIELD(arg0, u8 *, 0x16);
        return;
    case 0x87:
        *arg2 |= (u8) M2C_FIELD(arg0, u32 *, 0x28);
        return;
    case 0x88:
        *arg2 |= (u8) ((u32) M2C_FIELD(arg0, u32 *, 0x28) >> 8U);
        return;
    case 0x89:
        *arg2 |= (u8) ((u32) M2C_FIELD(arg0, u32 *, 0x28) >> 0x10U);
        return;
    case 0x8A:
        *arg2 |= M2C_FIELD(arg0, u8 *, 0x20) + 1;
        return;
    }
}

void fn_8006C708() { } /* draft: stub */

void fn_8006CB80(void *arg0) {
    M2C_FIELD(arg0, s8 *, 8) = 0;
}

void fn_8006CB8C(void) {

}

void fn_8006CB90(void) {

}

void fn_8006CB94(void *arg0, s32 arg1, u8 *arg2) {
    if ((s32) (arg1 - 0x10) != 1) {
        *arg2 |= M2C_FIELD(arg0, u8 *, 8) & 0x3F;
        return;
    }
    *arg2 = M2C_FIELD(arg0, s32 *, 0xC) / 10;
}
