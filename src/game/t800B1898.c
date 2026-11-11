/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_800B33A4(void *, M2C_UNK);
extern M2C_UNK lbl_802CF9F0;
extern M2C_UNK lbl_803507E0;
extern u16 lbl_803507F8;
M2C_UNK fn_800B392C(void *);
M2C_UNK fn_800B5588(void *, M2C_UNK, void *);
M2C_UNK fn_800B5A64(void *, M2C_UNK);
extern M2C_UNK lbl_803507EC;
s32 OSGetTick(M2C_UNK *);
M2C_UNK fn_800B169C();
s32 fn_800B65C8(s32, M2C_UNK);
M2C_UNK fn_800B4778(void *, M2C_UNK);
s32 EXIDetach(u16, M2C_UNK);
extern M2C_UNK lbl_803507D0;
M2C_UNK fn_800C8828(void *, s32);
s32 EXIDeselect(u16, s32);
s32 EXISelect(u16, M2C_UNK, u16);
s32 EXIUnlock(u16, s32);
s32 EXIImmEx();
extern M2C_UNK lbl_803507F4;
extern M2C_UNK lbl_80350808;

u16 fn_800B1898(void);
u16 fn_800B19AC(void);
u16 fn_800B1A64(void);
u16 fn_800B1FF8(void);
u16 fn_800B21F4(void);
u16 fn_800B2894(void);
u16 fn_800B2AC4(void);
u16 fn_800B2CF4(s32 arg0);
u16 fn_800B2EF4(void);
void fn_800B2F6C(s32 arg0);
void fn_800B2F7C(s32 arg0);
void fn_800B2FA0(void);
u16 fn_800B2FD4(void *arg0, u16 arg1);

u16 fn_800B1898(void) {
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;

    fn_800B33A4(&lbl_802CF9F0 + (lbl_803507F8 << 7) + 0x138, 1);
    if (M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) & 0x40) {
        temp_r4 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4) = *(&lbl_803507E0 + temp_r4) | 0x1000;
    }
    if (M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) & 0x20) {
        temp_r4_2 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_2) = *(&lbl_803507E0 + temp_r4_2) | 0x100;
    }
    if (M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) & 8) {
        temp_r4_3 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_3) = *(&lbl_803507E0 + temp_r4_3) | 2;
    }
    if (M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) & 4) {
        temp_r4_4 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_4) = *(&lbl_803507E0 + temp_r4_4) | 1;
    }
    return *(&lbl_803507E0 + (lbl_803507F8 * 2));
}

u16 fn_800B19AC(void) {
    s32 temp_r4;
    s32 temp_r4_2;

    fn_800B392C(&lbl_802CF9F0 + (lbl_803507F8 << 7) + 0x138);
    if ((s32) (((u8) M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) >> 1U) & 7) == 5) {
        temp_r4 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4) = *(&lbl_803507E0 + temp_r4) | 2;
    }
    if ((s32) (((u8) M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) >> 1U) & 7) == 6) {
        temp_r4_2 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_2) = *(&lbl_803507E0 + temp_r4_2) | 0x200;
    }
    return *(&lbl_803507E0 + (lbl_803507F8 * 2));
}

u16 fn_800B1A64(void) {
    s32 unkspB;
    s32 unkspA;
    s32 unksp9;
    s32 unksp13;
    s32 unksp12;
    s32 unksp11;
    s32 unksp1B;
    s32 unksp1A;
    s32 unksp19;
    u8 sp1C;
    s32 sp18;
    u8 sp14;
    s32 sp10;
    u8 spC;
    s32 sp8;
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 temp_r4_9;
    s32 temp_r5_2;
    void *temp_r5;

    *(&lbl_803507EC + (lbl_803507F8 * 4)) = 0;
    sp18 = *(&lbl_803507EC + (lbl_803507F8 * 4));
    sp1C = 0;
    M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 5)), u8 *, 0x12C) = sp1C;
    M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 5)), u8 *, 0x12D) = (u8) sp18;
    M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 5)), u8 *, 0x12E) = unksp19;
    *(&lbl_803507E0 + (lbl_803507F8 * 2)) = 0;
    M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 5)), u8 *, 0x12F) = unksp1A;
    temp_r5 = &lbl_802CF9F0 + (lbl_803507F8 * 5);
    M2C_FIELD(temp_r5, u8 *, 0x130) = unksp1B;
    fn_800B5588(&lbl_802CF9F0 + (lbl_803507F8 * 5) + 0x12C, 5, temp_r5);
    fn_800B2FD4(&lbl_802CF9F0 + (lbl_803507F8 << 7) + 0x138, 1);
    if (M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) & 0x40) {
        temp_r4 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4) = *(&lbl_803507E0 + temp_r4) | 0x1000;
    }
    if (M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) & 0x20) {
        temp_r4_2 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_2) = *(&lbl_803507E0 + temp_r4_2) | 0x100;
    }
    if (M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) & 8) {
        temp_r4_3 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_3) = *(&lbl_803507E0 + temp_r4_3) | 2;
    }
    if (M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) & 4) {
        temp_r4_4 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_4) = *(&lbl_803507E0 + temp_r4_4) | 1;
    }
    sp10 = 0;
    sp14 = 0xC;
    M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 5)), u8 *, 0x12C) = sp14;
    M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 5)), u8 *, 0x12D) = (u8) sp10;
    M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 5)), u8 *, 0x12E) = unksp11;
    M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 5)), u8 *, 0x12F) = unksp12;
    M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 5)), u8 *, 0x130) = unksp13;
    fn_800B5A64(&lbl_802CF9F0 + (lbl_803507F8 * 5) + 0x12C, 5);
    if ((u16) *(&lbl_803507E0 + (lbl_803507F8 * 2)) == 0) {
        fn_800B33A4(&lbl_802CF9F0 + (lbl_803507F8 << 7) + 0x138, 1);
        if (M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) & 0x40) {
            temp_r4_5 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_5) = *(&lbl_803507E0 + temp_r4_5) | 0x1000;
        }
        if (M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) & 0x20) {
            temp_r4_6 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_6) = *(&lbl_803507E0 + temp_r4_6) | 0x100;
        }
        if (M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) & 8) {
            temp_r4_7 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_7) = *(&lbl_803507E0 + temp_r4_7) | 2;
        }
        if (M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) & 4) {
            temp_r4_8 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_8) = *(&lbl_803507E0 + temp_r4_8) | 1;
        }
    }
    *(&lbl_803507E0 + (lbl_803507F8 * 2)) = 0;
    sp8 = *(&lbl_803507EC + (lbl_803507F8 * 4));
    spC = 0;
    M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 5)), u8 *, 0x12C) = spC;
    *(&lbl_803507EC + (lbl_803507F8 * 4)) = 0;
    M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 5)), u8 *, 0x12D) = (u8) sp8;
    M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 5)), u8 *, 0x12E) = unksp9;
    M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 5)), u8 *, 0x12F) = unkspA;
    M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 5)), u8 *, 0x130) = unkspB;
    fn_800B5A64(&lbl_802CF9F0 + (lbl_803507F8 * 5) + 0x12C, 5);
    if ((u16) *(&lbl_803507E0 + (lbl_803507F8 * 2)) != 0) {
        return *(&lbl_803507E0 + (lbl_803507F8 * 2));
    }
    fn_800B2FD4((void *)(&lbl_802CF9F0 + (lbl_803507F8 << 7) + 0x138), (unsigned short)(1));
    if (M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) & 0x40) {
        temp_r3 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r3) = *(&lbl_803507E0 + temp_r3) | 0x1000;
    }
    if (M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) & 0x20) {
        temp_r0 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r0) = *(&lbl_803507E0 + temp_r0) | 0x100;
    }
    if (M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) & 8) {
        temp_r5_2 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r5_2) = *(&lbl_803507E0 + temp_r5_2) | 2;
    }
    if (M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) & 4) {
        temp_r4_9 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_9) = *(&lbl_803507E0 + temp_r4_9) | 1;
    }
    return *(&lbl_803507E0 + (lbl_803507F8 * 2));
}

u16 fn_800B1FF8(void) {
    s32 unkspB;
    s32 unkspA;
    s32 unksp9;
    u8 spC;
    s32 sp8;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;

    *(&lbl_803507EC + (lbl_803507F8 * 4)) = 0;
    sp8 = *(&lbl_803507EC + (lbl_803507F8 * 4));
    spC = 0x37;
    M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 5)), u8 *, 0x12C) = spC;
    M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 5)), u8 *, 0x12D) = (u8) sp8;
    M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 5)), u8 *, 0x12E) = unksp9;
    M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 5)), u8 *, 0x12F) = unkspA;
    M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 5)), u8 *, 0x130) = unkspB;
    fn_800B5A64(&lbl_802CF9F0 + (lbl_803507F8 * 5) + 0x12C, 5);
    if ((u16) *(&lbl_803507E0 + (lbl_803507F8 * 2)) != 0) {
        return *(&lbl_803507E0 + (lbl_803507F8 * 2));
    }
    fn_800B2FD4(&lbl_802CF9F0 + (lbl_803507F8 << 7) + 0x138, 1);
    if (M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) & 0x40) {
        temp_r4 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4) = *(&lbl_803507E0 + temp_r4) | 0x1000;
    }
    if (M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) & 0x20) {
        temp_r4_2 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_2) = *(&lbl_803507E0 + temp_r4_2) | 0x100;
    }
    if (M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) & 8) {
        temp_r4_3 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_3) = *(&lbl_803507E0 + temp_r4_3) | 2;
    }
    if (M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) & 4) {
        temp_r4_4 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_4) = *(&lbl_803507E0 + temp_r4_4) | 1;
    }
    return *(&lbl_803507E0 + (lbl_803507F8 * 2));
}

u16 fn_800B21F4(void) { return 0; } /* draft: stub */

u16 fn_800B2894(void) {
    s32 unkspB;
    s32 unkspA;
    s32 unksp9;
    u8 spC;
    s32 sp8;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 var_r29;

    *(&lbl_803507EC + (lbl_803507F8 * 4)) = 0;
    sp8 = *(&lbl_803507EC + (lbl_803507F8 * 4));
    spC = 9;
    M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 5)), u8 *, 0x12C) = spC;
    M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 5)), u8 *, 0x12D) = (u8) sp8;
    M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 5)), u8 *, 0x12E) = unksp9;
    M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 5)), u8 *, 0x12F) = unkspA;
    M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 5)), u8 *, 0x130) = unkspB;
    fn_800B5A64(&lbl_802CF9F0 + (lbl_803507F8 * 5) + 0x12C, 5);
    if ((u16) *(&lbl_803507E0 + (lbl_803507F8 * 2)) != 0) {
        return *(&lbl_803507E0 + (lbl_803507F8 * 2));
    }
    fn_800B2FD4(&lbl_802CF9F0 + (lbl_803507F8 << 7) + 0x138, 1);
    if (M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) & 0x40) {
        temp_r4 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4) = *(&lbl_803507E0 + temp_r4) | 0x1000;
    }
    if (M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) & 0x20) {
        temp_r4_2 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_2) = *(&lbl_803507E0 + temp_r4_2) | 0x100;
    }
    if (M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) & 8) {
        temp_r4_3 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_3) = *(&lbl_803507E0 + temp_r4_3) | 2;
    }
    if (M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) & 4) {
        temp_r4_4 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_4) = *(&lbl_803507E0 + temp_r4_4) | 1;
    }
    if ((u16) *(&lbl_803507E0 + (lbl_803507F8 * 2)) == 0) {
        fn_800B4778(&lbl_802CF9F0 + (lbl_803507F8 * 0x12) + 0x68, 0x10);
    }
    var_r29 = 0;
loop_14:
    if (var_r29 < 0x10) {
        var_r29 += 1;
        goto loop_14;
    }
    return *(&lbl_803507E0 + (lbl_803507F8 * 2));
}

u16 fn_800B2AC4(void) {
    s32 unkspB;
    s32 unkspA;
    s32 unksp9;
    u8 spC;
    s32 sp8;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 var_r29;

    *(&lbl_803507EC + (lbl_803507F8 * 4)) = 0;
    sp8 = *(&lbl_803507EC + (lbl_803507F8 * 4));
    spC = 0xA;
    M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 5)), u8 *, 0x12C) = spC;
    M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 5)), u8 *, 0x12D) = (u8) sp8;
    M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 5)), u8 *, 0x12E) = unksp9;
    M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 5)), u8 *, 0x12F) = unkspA;
    M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 5)), u8 *, 0x130) = unkspB;
    fn_800B5A64(&lbl_802CF9F0 + (lbl_803507F8 * 5) + 0x12C, 5);
    if ((u16) *(&lbl_803507E0 + (lbl_803507F8 * 2)) != 0) {
        return *(&lbl_803507E0 + (lbl_803507F8 * 2));
    }
    fn_800B2FD4(&lbl_802CF9F0 + (lbl_803507F8 << 7) + 0x138, 1);
    if (M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) & 0x40) {
        temp_r4 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4) = *(&lbl_803507E0 + temp_r4) | 0x1000;
    }
    if (M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) & 0x20) {
        temp_r4_2 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_2) = *(&lbl_803507E0 + temp_r4_2) | 0x100;
    }
    if (M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) & 8) {
        temp_r4_3 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_3) = *(&lbl_803507E0 + temp_r4_3) | 2;
    }
    if (M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) & 4) {
        temp_r4_4 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_4) = *(&lbl_803507E0 + temp_r4_4) | 1;
    }
    if ((u16) *(&lbl_803507E0 + (lbl_803507F8 * 2)) == 0) {
        fn_800B4778(&lbl_802CF9F0 + (lbl_803507F8 * 0x10) + 0x10C, 0x10);
    }
    var_r29 = 0;
loop_14:
    if (var_r29 < 0x10) {
        var_r29 += 1;
        goto loop_14;
    }
    return *(&lbl_803507E0 + (lbl_803507F8 * 2));
}

u16 fn_800B2CF4(s32 arg0) {
    s32 unkspF;
    s32 unkspE;
    s32 unkspD;
    u8 sp10;
    s32 spC;
    s32 sp8;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;

    sp8 = arg0;
    *(&lbl_803507EC + (lbl_803507F8 * 4)) = sp8;
    spC = *(&lbl_803507EC + (lbl_803507F8 * 4));
    sp10 = 0x10;
    M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 5)), u8 *, 0x12D) = (u8) spC;
    M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 5)), u8 *, 0x12E) = unkspD;
    M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 5)), u8 *, 0x12F) = unkspE;
    M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 5)), u8 *, 0x130) = unkspF;
    fn_800B5A64(&lbl_802CF9F0 + (lbl_803507F8 * 5) + 0x12C, 5);
    M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 * 5)), u8 *, 0x12C) = sp10;
    if ((u16) *(&lbl_803507E0 + (lbl_803507F8 * 2)) != 0) {
        return *(&lbl_803507E0 + (lbl_803507F8 * 2));
    }
    fn_800B2FD4(&lbl_802CF9F0 + (lbl_803507F8 << 7) + 0x138, 1);
    if (M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) & 0x40) {
        temp_r4 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4) = *(&lbl_803507E0 + temp_r4) | 0x1000;
    }
    if (M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) & 0x20) {
        temp_r4_2 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_2) = *(&lbl_803507E0 + temp_r4_2) | 0x100;
    }
    if (M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) & 8) {
        temp_r4_3 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_3) = *(&lbl_803507E0 + temp_r4_3) | 2;
    }
    if (M2C_FIELD((&lbl_802CF9F0 + (lbl_803507F8 << 7)), u8 *, 0x138) & 4) {
        temp_r4_4 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_4) = *(&lbl_803507E0 + temp_r4_4) | 1;
    }
    return *(&lbl_803507E0 + (lbl_803507F8 * 2));
}

u16 fn_800B2EF4(void) {
    s32 temp_r4;

    *(&lbl_803507E0 + (lbl_803507F8 * 2)) = 0;
    if (EXIDetach(lbl_803507F8, 0) == 0) {
        temp_r4 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4) = *(&lbl_803507E0 + temp_r4) | 0xC0;
        return *(&lbl_803507E0 + (lbl_803507F8 * 2));
    }
    return 0U;
}

void fn_800B2F6C(s32 arg0) {
    s32 sp8;

    sp8 = arg0;
}

void fn_800B2F7C(s32 arg0) {
    s32 sp8;

    sp8 = arg0;
    *(&lbl_803507D0 + (lbl_803507F8 * 4)) = 1;
}

void fn_800B2FA0(void) {
    u8 temp_r4;

    temp_r4 = lbl_803507F8 * 0xC;
    fn_800C8828(&lbl_802CF9F0 + temp_r4, temp_r4);
}

u16 fn_800B2FD4(void *arg0, u16 arg1) {
    s16 spE;
    void *sp8;
    s32 temp_r28;
    s32 temp_r4;
    s32 temp_r4_10;
    s32 temp_r4_11;
    s32 temp_r4_12;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 temp_r4_9;
    s32 temp_r27;
    u16 var_r29;

    sp8 = arg0;
    *(&lbl_803507D0 + (lbl_803507F8 * 4)) = 0;
    temp_r27 = *(&lbl_803507F4 + (lbl_803507F8 * 2));
    if (EXILock(lbl_803507F8, 0, fn_800B2F7C) == 0) {
        do {

        } while ((s32) *(&lbl_803507D0 + (lbl_803507F8 * 4)) == 0);
        if (EXILock(lbl_803507F8, 0, fn_800B2F6C) == 0) {
            temp_r4 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4) = *(&lbl_803507E0 + temp_r4) | 0xA0;
            var_r29 = *(&lbl_803507E0 + (lbl_803507F8 * 2));
        } else {
            goto block_4;
        }
    } else {
block_4:
        if (EXISelect(lbl_803507F8, 0, temp_r27) == 0) {
            temp_r4_2 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_2) = *(&lbl_803507E0 + temp_r4_2) | 0xB0;
            if (EXIUnlock(lbl_803507F8, temp_r4_2) == 0) {
                temp_r4_3 = lbl_803507F8 * 2;
                *(&lbl_803507E0 + temp_r4_3) = *(&lbl_803507E0 + temp_r4_3) | 0xD0;
            }
            var_r29 = *(&lbl_803507E0 + (lbl_803507F8 * 2));
        } else {
            var_r29 = 0;
        }
    }
    if (var_r29 != 0) {
        return *(&lbl_803507E0 + (lbl_803507F8 * 2));
    }
    spE = 0;
    M2C_FIELD(sp8, u8 *, 0) = (u8) *(&lbl_80350808 + lbl_803507F8);
    if (EXIImmEx(lbl_803507F8, sp8, 1, 2) == 0) {
        temp_r4_4 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_4) = *(&lbl_803507E0 + temp_r4_4) | 0xF0;
        if (EXIDeselect(lbl_803507F8, temp_r4_4) == 0) {
            temp_r4_5 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_5) = *(&lbl_803507E0 + temp_r4_5) | 0xE0;
        }
        if (EXIUnlock((unsigned short)(lbl_803507F8), (long)(0)) == 0) {
            temp_r4_6 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_6) = *(&lbl_803507E0 + temp_r4_6) | 0xD0;
        }
        return *(&lbl_803507E0 + (lbl_803507F8 * 2));
    }
    temp_r28 = OSGetTick((long *)(0));
loop_26:
    if (M2C_FIELD(sp8, u8 *, 0) & 0x80) {
        M2C_FIELD(sp8, u8 *, 0) = (u8) *(&lbl_80350808 + lbl_803507F8);
        if (EXIImmEx(lbl_803507F8, sp8, 1, 2) == 0) {
            temp_r4_7 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_7) = *(&lbl_803507E0 + temp_r4_7) | 0xF0;
        } else if (M2C_FIELD(sp8, u8 *, 0) & 0x80) {
            if ((u16)fn_800B65C8(temp_r28, 0x1F4) != 0) {
                M2C_FIELD(sp8, u8 *, 0) = (u8) *(&lbl_80350808 + lbl_803507F8);
                if (EXIImmEx(lbl_803507F8, sp8, 1, 2) == 0) {
                    temp_r4_8 = lbl_803507F8 * 2;
                    *(&lbl_803507E0 + temp_r4_8) = *(&lbl_803507E0 + temp_r4_8) | 0xF0;
                } else if (M2C_FIELD(sp8, u8 *, 0) & 0x80) {
                    temp_r4_9 = lbl_803507F8 * 2;
                    *(&lbl_803507E0 + temp_r4_9) = *(&lbl_803507E0 + temp_r4_9) | 0x4000;
                }
            } else {
                goto loop_26;
            }
        }
    }
    if (arg1 > 1U) {
        M2C_FIELD(sp8, u8 *, 1) = (u8) *(&lbl_80350808 + lbl_803507F8);
        if (0 /* draft: did not compile */) {
            temp_r4_10 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_10) = *(&lbl_803507E0 + temp_r4_10) | 0xF0;
        }
    }
    if (EXIDeselect((unsigned short)(lbl_803507F8), (long)(0)) == 0) {
        temp_r4_11 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_11) = *(&lbl_803507E0 + temp_r4_11) | 0xE0;
    }
    if (EXIUnlock((unsigned short)(lbl_803507F8), (long)(0)) == 0) {
        temp_r4_12 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_12) = *(&lbl_803507E0 + temp_r4_12) | 0xD0;
    }
    return *(&lbl_803507E0 + (lbl_803507F8 * 2));
}
