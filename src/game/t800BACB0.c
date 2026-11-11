/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

extern M2C_UNK lbl_802CFCA8;
u16 fn_800C10A0(void *, u16, s32, M2C_UNK, u16, u16);
u16 fn_800C1EB8();
extern M2C_UNK lbl_8022BB60;
u16 fn_800C1354(s32 *, s32 *, M2C_UNK, u16, u16);
u16 fn_800BF4DC();
s32 fn_800C1048(void *, u16);
u16 fn_800C15BC();
u16 fn_800C1AD4();
M2C_UNK fn_800C1C84();
M2C_UNK fn_800C1D34();
u32 fn_800C1E70();
u16 fn_800BD42C(s32, M2C_UNK, M2C_UNK);
u16 fn_800C0738(void *, M2C_UNK *);
u16 fn_800BF4B4(void *);
u16 fn_800BFE78(void *, s32, s32 *, u16 *);
u16 fn_800C17AC();
u16 fn_800B6C14(void *, s32, u16, u16);
M2C_UNK fn_800C1D74();
M2C_UNK fn_800C05CC(void *, M2C_UNK);
u16 fn_800C11F4(M2C_UNK, M2C_UNK, s32, M2C_UNK, u16, M2C_UNK, u16);
u16 fn_800C09F8(void *, void *);
s32 fn_800BCC1C(void **, s32);

void fn_800BACB0(void *arg0, void *arg1);
u16 fn_800BAD6C(void *arg0);
u16 fn_800BAEE0(s32 arg0, s32 arg1, u16 arg2);
s32 fn_800BAF40(void *arg0, void *arg1);
u16 fn_800BB1F0(void *arg0);
s32 fn_800BB2C0(void *arg0);
s32 fn_800BB400(void *arg0, u32 arg1, u32 arg2);
u16 fn_800BB4D4(void *arg0, void ***arg1, u8 *arg2);
u16 SD_Open(void *arg0, void **arg1, u32 arg2, u16 arg3);
u16 fn_800BB980(void *arg0, s32 *arg1, M2C_UNK *arg2, u16 arg3);
u16 fn_800BBBBC(void *arg0, void **arg1, s32 arg2, s32 arg3, u16 arg4, s32 arg5);
u16 fn_800BBEBC(void *arg0, s32 *arg1, s32 arg2, s32 arg3, u16 arg4, s32 arg5);
u16 fn_800BC110(void *arg0, void **arg1, void *arg2, u16 *arg3, u16 arg4);
s32 fn_800BC2E4(u16 *arg0, void *arg1, u16 arg2, s32 arg3, u16 arg4, s32 arg5, u16 arg6);
u16 fn_800BC390(void *arg0, s32 arg1, u16 arg2, s32 arg3, u16 arg4, u8 arg5);
u16 fn_800BC4C0(void *arg0, u16 arg1);
void fn_800BC658(void *arg0);
s32 fn_800BC730(u16 *arg0);
s32 fn_800BC7A4(void *arg0, s32 arg1);
s32 fn_800BC81C(void *arg0, s32 arg1, u16 arg2);
u16 fn_800BC960(void *arg0, s32 arg1, void *arg2, s32 arg3, u16 *arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp8, u16 arg_spC);
s32 fn_800BCB74(void **arg0, s32 arg1);

void fn_800BACB0(void *arg0, void *arg1) {
    void *temp_r31;

    temp_r31 = &lbl_802CFCA8 + (M2C_FIELD(arg0, u16 *, 0) * 0x25E48);
    if (((u16) M2C_FIELD((s32)arg0, u16 *, 0xF0) == 2) && ((u16) M2C_FIELD(arg1, u16 *, 0xF0) == 2)) {
        M2C_FIELD(temp_r31, s32 *, 0x259D4) = 0;
        return;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 0xF0) == 2) {
        M2C_FIELD(temp_r31, s32 *, 0x259D4) = (s32) (M2C_FIELD(temp_r31, s32 *, 0x5F0) - (M2C_FIELD(arg0, u16 *, 0x2E) * M2C_FIELD(arg0, u16 *, 0x1C)));
        return;
    }
    if ((u16) M2C_FIELD(arg1, u16 *, 0xF0) == 2) {
        M2C_FIELD(temp_r31, s32 *, 0x259D4) = (s32) (M2C_FIELD(temp_r31, s32 *, 0x5F0) - (M2C_FIELD(arg1, u16 *, 0x2E) * M2C_FIELD(arg1, u16 *, 0x1C)));
        return;
    }
    M2C_FIELD(temp_r31, s32 *, 0x259D4) = (s32) M2C_FIELD(temp_r31, s32 *, 0x5F0);
}

u16 fn_800BAD6C(void *arg0) { return 0; } /* draft: stub */

u16 fn_800BAEE0(s32 arg0, s32 arg1, u16 arg2) {
    u16 sp10;
    s32 spC;
    s32 sp8;
    s8 temp_r3;

    sp8 = arg0;
    spC = arg1;
    sp10 = arg2;
    if (sp10 & 1) {
        /* draft: did not compile: temp_r3 = fn_800BAF40(sp8, spC); */
        if (temp_r3 != 0) {
            return temp_r3;
        }
    }
    return 0U;
}

s32 fn_800BAF40(void *arg0, void *arg1) {
    u16 temp_r27;
    void *var_r28;
    void *var_r31;

    var_r28 = arg1;
    var_r31 = var_r28;
    if (var_r31 == NULL) {
        var_r28 = &lbl_802CFCA8 + (M2C_FIELD(arg0, u16 *, 0) * 0x25E48) + 0x20BA4;
        var_r31 = var_r28;
    }
    if ((u16) ((M2C_FIELD(var_r31, u8 *, 0xB) & ~0xFF00) | ((M2C_FIELD(var_r31, u8 *, 0xC) << 8) & 0xFF00)) != 0x200) {
        M2C_FIELD(arg0, u16 *, 0x102) = (u16) (M2C_FIELD(arg0, u16 *, 0x102) | 1);
        return 0xA01A;
    }
    if ((u16) ((M2C_FIELD(var_r28, u8 *, 0xB) & ~0xFF00) | ((M2C_FIELD(var_r28, u8 *, 0xC) << 8) & 0xFF00)) != (u16) ((M2C_FIELD(var_r31, u8 *, 0xB) & ~0xFF00) | ((M2C_FIELD(var_r31, u8 *, 0xC) << 8) & 0xFF00))) {
        M2C_FIELD(arg0, u16 *, 0x102) = (u16) (M2C_FIELD(arg0, u16 *, 0x102) | 1);
        return 0xA01A;
    }
    if (((u8) M2C_FIELD(var_r31, u8 *, 0xD) != 1) && ((u8) M2C_FIELD(var_r31, u8 *, 0xD) != 2) && ((u8) M2C_FIELD(var_r31, u8 *, 0xD) != 4) && ((u8) M2C_FIELD(var_r31, u8 *, 0xD) != 8) && ((u8) M2C_FIELD(var_r31, u8 *, 0xD) != 0x10) && ((u8) M2C_FIELD(var_r31, u8 *, 0xD) != 0x20) && ((u8) M2C_FIELD(var_r31, u8 *, 0xD) != 0x40)) {
        M2C_FIELD(arg0, u16 *, 0x102) = (u16) (M2C_FIELD(arg0, u16 *, 0x102) | 1);
        return 0xA01A;
    }
    if ((u8) M2C_FIELD(var_r31, u8 *, 0x10) != 2) {
        M2C_FIELD(arg0, u16 *, 0x102) = (u16) (M2C_FIELD(arg0, u16 *, 0x102) | 1);
        return 0xA01A;
    }
    if ((u16) ((M2C_FIELD(var_r31, u8 *, 0x11) & ~0xFF00) | ((M2C_FIELD(var_r31, u8 *, 0x12) << 8) & 0xFF00)) != 0x200) {
        M2C_FIELD(arg0, u16 *, 0x102) = (u16) (M2C_FIELD(arg0, u16 *, 0x102) | 1);
        return 0xA01A;
    }
    temp_r27 = (M2C_FIELD(var_r31, u8 *, 0x13) & ~0xFF00) | ((M2C_FIELD(var_r31, u8 *, 0x14) << 8) & 0xFF00);
    if ((u8) M2C_FIELD(var_r31, u8 *, 0x26) != 0x29) {
        switch (temp_r27) {
        case 0:
                M2C_FIELD(arg0, u16 *, 0x102) = (u16) (M2C_FIELD(arg0, u16 *, 0x102) | 1);
                return 0xA01A;
            break;
        }
        goto block_24;
    }
    if (((M2C_FIELD(var_r31, u8 *, 0x20) | (((((M2C_FIELD(var_r31, u8 *, 0x22) << 0x10) & 0xFF0000 & ~0xFF000000) | (M2C_FIELD(var_r31, u8 *, 0x23) << 0x18)) & ~0xFF00) | ((M2C_FIELD(var_r31, u8 *, 0x21) << 8) & 0xFF00))) == 0) && (temp_r27 == 0)) {
        M2C_FIELD(arg0, u16 *, 0x102) = (u16) (M2C_FIELD(arg0, u16 *, 0x102) | 1);
        return 0xA01A;
    }
block_24:
    if ((u16) ((M2C_FIELD(var_r31, u8 *, 0x16) & ~0xFF00) | ((M2C_FIELD(var_r31, u8 *, 0x17) << 8) & 0xFF00)) == 0) {
        M2C_FIELD(arg0, u16 *, 0x102) = (u16) (M2C_FIELD(arg0, u16 *, 0x102) | 1);
        return 0xA01A;
    }
    if (0 /* draft: did not compile */) {
        M2C_FIELD(arg0, u16 *, 0x102) = (u16) (M2C_FIELD(arg0, u16 *, 0x102) | 1);
        return 0xA01A;
    }
    if (0 /* draft: did not compile */) {
        M2C_FIELD(arg0, u16 *, 0x102) = (u16) (M2C_FIELD(arg0, u16 *, 0x102) | 1);
        return 0xA01A;
    }
    return 0;
}

u16 fn_800BB1F0(void *arg0) {
    u16 temp_r3;
    s32 sp10;
    s32 spC;
    s32 sp14;
    s8 temp_r3_2;

    sp14 = 0;
    sp10 = 0;
    spC = 0;
    if ((u16) M2C_FIELD(arg0, u16 *, 0x100) != 1) {
        return fn_800BB2C0(arg0);
    }
    temp_r3_2 = fn_800C1354(&sp14, &spC, 1, M2C_FIELD(arg0, u16 *, 0x100), M2C_FIELD(arg0, u16 *, 0));
    if (temp_r3_2 != 0) {
        M2C_FIELD(arg0, u16 *, 0x102) = (u16) (M2C_FIELD(arg0, u16 *, 0x102) | 1);
        return temp_r3_2;
    }
    temp_r3 = fn_800C1354(&sp10, &spC, 2, M2C_FIELD(arg0, u16 *, 0x100), M2C_FIELD(arg0, u16 *, 0));
    if (temp_r3 != 0) {
        M2C_FIELD(arg0, u16 *, 0x102) = (u16) (M2C_FIELD(arg0, u16 *, 0x102) | 1);
        return temp_r3;
    }
    return fn_800BB2C0(arg0);
}

s32 fn_800BB2C0(void *arg0) {
    u32 var_r31;

    if ((((u16) M2C_FIELD(arg0, u16 *, 0x2A) != 0) && ((u16) M2C_FIELD(arg0, u16 *, 0x2A) > 0x400000U)) || (((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) && ((u32) M2C_FIELD(arg0, u32 *, 0x34) > 0x400000U))) {
        M2C_FIELD(arg0, u16 *, 0x102) = (u16) (M2C_FIELD(arg0, u16 *, 0x102) | 1);
        return 0xA01A;
    }
    if (((u16) M2C_FIELD(arg0, u16 *, 0x3C) != 2) && ((u16) M2C_FIELD(arg0, u16 *, 0x3C) != 1)) {
        M2C_FIELD(arg0, u16 *, 0x102) = (u16) (M2C_FIELD(arg0, u16 *, 0x102) | 1);
        return 0xA01A;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 0x2E) == 0) {
        M2C_FIELD(arg0, u16 *, 0x102) = (u16) (M2C_FIELD(arg0, u16 *, 0x102) | 1);
        return 0xA01A;
    }
    if ((u16) M2C_FIELD((s32)arg0, u16 *, 0x3C) == 1) {
        var_r31 = (u32) ((M2C_FIELD(arg0, u16 *, 0xBC) * 2) + 0x1FF) >> 9U;
    } else {
        var_r31 = (u32) (((u32) ((M2C_FIELD(arg0, u16 *, 0xBC) * 3) + 1) >> 1U) + 0x1FF) >> 9U;
    }
    if (var_r31 > (u16) M2C_FIELD(arg0, u16 *, 0x2E)) {
        M2C_FIELD(arg0, u16 *, 0x102) = (u16) (M2C_FIELD(arg0, u16 *, 0x102) | 1);
        return 0xA01A;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0xFC) < (u32) M2C_FIELD(arg0, u32 *, 0x68)) {
        M2C_FIELD(arg0, u16 *, 0x102) = (u16) (M2C_FIELD(arg0, u16 *, 0x102) | 1);
        return 0xA01A;
    }
    return 0;
}

s32 fn_800BB400(void *arg0, u32 arg1, u32 arg2) {
    if ((arg0 == NULL) || (arg1 == 0U) || (arg2 == 0U)) {
        return 0xA00C;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 4) != 1) {
        return 0xA016;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 6) != 2) {
        return 0xA003;
    }
    if (arg0 != (void *) (&lbl_802CFCA8 + (M2C_FIELD(arg0, u16 *, 0) * 0x25E48) + 8)) {
        return 0xA00C;
    }
    return 0;
}

u16 fn_800BB4D4(void *arg0, void ***arg1, u8 *arg2) {
    s32 sp9A;
    s32 sp8B;
    s32 sp15;
    M2C_UNK sp80;
    M2C_UNK sp7C;
    u16 sp78;
    M2C_UNK sp76;
    M2C_UNK sp74;
    M2C_UNK sp54;
    u8 sp14;
    s32 temp_r4;
    u32 var_r0;
    s16 temp_r3;
    s16 temp_r3_2;
    u16 var_r26;
    s16 var_r29;
    u32 *var_r28;
    void **var_r31;
    void *temp_r25;

    sp78 = 0;
    temp_r4 = M2C_FIELD(arg0, s16 *, 0) * 0x25E48;
    temp_r25 = &lbl_802CFCA8 + temp_r4;
    if (fn_800C1E70(arg2, temp_r4) > 0x3FU) {
        return 0xA017U;
    }
    fn_800C1D34(&sp14, arg2);
    if ((s16) M2C_FIELD(arg0, s16 *, 6) != 2) {
        return 0xA003U;
    }
    temp_r3_2 = fn_800C1AD4(&sp14);
    if (temp_r3_2 != 0) {
        return temp_r3_2;
    }
    var_r31 = NULL;
    if ((s16) M2C_FIELD(arg0, s16 *, 4) == 1) {
        /* draft: did not compile: var_r28 = temp_r25 + 0x20A00; */
    } else {
        /* draft: did not compile: var_r28 = temp_r25 + 0x20AFC; */
    }
    var_r26 = 0;
loop_31:
    if ((s16) M2C_FIELD(arg0, s16 *, 4) == 1) {
        var_r0 = 3;
    } else {
        var_r0 = 2;
    }
    if ((s32) var_r26 >= var_r0) {
        if (var_r31 == NULL) {
            return 0xA004U;
        }
        if ((sp14 == 0x5C) && (sp15 == 0)) {
            M2C_FIELD(var_r31, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x60);
            M2C_FIELD(var_r31, s32 *, 8) = 0;
            M2C_FIELD(var_r31, s16 *, 0x10) = 0;
            M2C_FIELD(var_r31, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0x60);
            fn_800C1C84(var_r31 + 0x14, 0, 0x40);
            fn_800C1D34(var_r31 + 0x14, &sp14);
            M2C_FIELD(var_r31, s16 *, 0x12) = (s16) M2C_FIELD(arg0, s16 *, 0xFA);
            *arg1 = var_r31;
            return 0U;
        }
        fn_800C1C84(var_r31 + 0x14, 0, 0x40);
        fn_800C1D34(var_r31 + 0x14, &sp14);
        temp_r3 = fn_800C15BC(&sp14, &sp54, &sp78, M2C_FIELD(arg0, s16 *, 0));
        if (temp_r3 != 0) {
            M2C_FIELD(var_r31, void **, 0) = NULL;
            return temp_r3;
        }
        if (fn_800BF4DC(arg0, &sp80, &sp54, sp78, &sp7C, &sp76, &sp74) != 0) {
            M2C_FIELD(var_r31, void **, 0) = NULL;
            return 0xA00FU;
        }
        if (!(sp8B & 0x10) || ((s32) (sp8B & 0x3F) == 0xF)) {
            M2C_FIELD(var_r31, void **, 0) = NULL;
            return 0xA027U;
        }
        M2C_FIELD(var_r31, s32 *, 4) = fn_800C1048(arg0, sp9A);
        if ((u32) (M2C_FIELD(var_r31, s32 *, 4) + 0x10000) == -1U) {
            return 0xA032U;
        }
        M2C_FIELD(var_r31, s32 *, 8) = 0;
        M2C_FIELD(var_r31, s16 *, 0x10) = 0;
        M2C_FIELD(var_r31, s32 *, 0xC) = (s32) M2C_FIELD(var_r31, s32 *, 4);
        M2C_FIELD(var_r31, s16 *, 0x12) = (s16) M2C_FIELD(arg0, s16 *, 0xFA);
        *arg1 = var_r31;
        return 0U;
    }
    if ((u32) *var_r28 != 0U) {
        var_r29 = 0;
loop_23:
        if (var_r29 >= 0x40U) {
            goto block_30;
        }
        switch (var_r29) {
        case 0x3F:
                if ((u8) (&sp14)[var_r29] != 0) {
                    return 0xA017U;
                }
                if ((u8) *(var_r28 + (var_r29 + 0x14)) != 0) {
                    return 0xA02DU;
                }
                return 0xA02FU;
            break;
        }
        if ((u8) *(var_r28 + (var_r29 + 0x14)) == 0) {
            if ((u8) (&sp14)[var_r29] == 0) {
                return 0xA02FU;
            }
            goto block_30;
        }
        if ((u8) *(var_r28 + (var_r29 + 0x14)) == (u8) (&sp14)[var_r29]) {
            var_r29 += 1;
            goto loop_23;
        }
        goto block_30;
    }
    if (var_r31 == NULL) {
        if ((s16) M2C_FIELD(arg0, s16 *, 4) == 1) {
            /* draft: did not compile: var_r31 = temp_r25 + ((var_r26 * 0x54) + 0x20A00); */
        } else {
            /* draft: did not compile: var_r31 = temp_r25 + ((var_r26 * 0x54) + 0x20AFC); */
        }
        *var_r31 = arg0;
    }
block_30:
    var_r26 = var_r26 + 1;
    var_r28 += 0x54;
    goto loop_31;
}

u16 SD_Open(void *arg0, void **arg1, u32 arg2, u16 arg3) {
    u16 sp14;
    u8 temp_r3;
    void *temp_r28;

    sp14 = arg3;
    temp_r28 = *arg1;
    if ((arg0 == NULL) || (arg2 == 0U)) {
        return 0xA00CU;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 4) != 1) {
        return 0xA016U;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 6) != 2) {
        return 0xA003U;
    }
    if (arg0 != (void *) (&lbl_802CFCA8 + (M2C_FIELD(arg0, u16 *, 0) * 0x25E48) + 8)) {
        return 0xA00CU;
    }
    /* draft: did not compile: temp_r3 = fn_800BB980(arg0, arg1, arg2, sp14); */
    if (temp_r3 != 0) {
        *arg1 = temp_r28;
    } else {
        M2C_FIELD(*arg1, s16 *, 0x32) = 0;
    }
    return temp_r3;
}

u16 fn_800BB980(void *arg0, s32 *arg1, M2C_UNK *arg2, u16 arg3) {
    M2C_UNK sp84;
    M2C_UNK sp64;
    s32 sp60;
    M2C_UNK sp20;
    u16 sp1C;
    void *sp18;
    u16 sp14;
    s32 temp_r4;
    u16 temp_r3;
    u16 temp_r3_2;
    u16 temp_r3_3;
    u16 temp_r3_4;
    u16 temp_r3_5;
    u16 temp_r3_6;
    u16 temp_r3_7;
    u16 temp_r3_8;
    u16 var_r0;

    sp14 = arg3;
    sp60 = 0;
    temp_r4 = M2C_FIELD(arg0, u16 *, 0) * 0x25E48;
    sp18 = &lbl_802CFCA8 + temp_r4;
    sp1C = sp14;
    temp_r3_8 = fn_800BC730((unsigned short *)(&sp1C));
    if (temp_r3_8 != 0) {
        return temp_r3_8;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 6) != 2) {
        return 0xA003U;
    }
    if (fn_800C1E70(arg2) > 0x3FU) {
        return 0xA017U;
    }
    temp_r3_7 = fn_800C1AD4(&sp84);
    fn_800C1D34(&sp84, arg2);
    if (temp_r3_7 != 0) {
        return temp_r3_7;
    }
    /* draft: did not compile: temp_r3_6 = fn_800BC81C(arg0, &sp84, sp1C); */
    if (temp_r3_6 != 0) {
        return temp_r3_6;
    }
    fn_800C1D34(&sp20, &sp84);
    temp_r3_5 = fn_800C15BC(&sp84, &sp64, &sp60, M2C_FIELD(arg0, u16 *, 0));
    if (temp_r3_5 != 0) {
        return temp_r3_5;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 4) == 1) {
        var_r0 = 8;
    } else {
        var_r0 = 5;
    }
    if (var_r0 < sp60) {
        return 0xA013U;
    }
    if ((sp1C & 0x200) || (sp1C & 0x400)) {
        temp_r3_4 = fn_800C0738(arg0, &sp20);
        if (temp_r3_4 != 0) {
            return temp_r3_4;
        }
        /* draft: did not compile: temp_r3_3 = fn_800BBBBC(arg0, arg1, &sp20, &sp64, sp60, sp1C); */
        if (temp_r3_3 != 0) {
            return temp_r3_3;
        }
        goto block_25;
    }
    /* draft: did not compile: temp_r3_2 = fn_800BBEBC(arg0, arg1, &sp20, &sp64, sp60, sp1C); */
    if (temp_r3_2 != 0) {
        return temp_r3_2;
    }
block_25:
    if (sp1C & 0x100) {
        temp_r3 = fn_800BD42C(*arg1, 0, 4);
        if (temp_r3 != 0) {
            /* draft: did not compile: fn_800BC658(*arg1); */
            return temp_r3;
        }
    }
    return 0U;
}

u16 fn_800BBBBC(void *arg0, void **arg1, s32 arg2, s32 arg3, u16 arg4, s32 arg5) {
    u16 sp44;
    M2C_UNK sp24;
    s32 sp20;
    u16 sp1E;
    u16 sp1C;
    int sp10;
    s32 var_r27;
    u16 temp_r3;
    s32 temp_r3_2;
    u16 temp_r3_3;
    u16 temp_r3_4;
    u16 temp_r3_5;
    u16 temp_r3_6;
    u16 temp_r3_7;
    u32 var_r0;
    u16 var_r0_2;
    s32 var_r24;
    void *temp_r23;
    void *var_r29;

    sp10 = arg2;
    temp_r23 = &lbl_802CFCA8 + (M2C_FIELD(arg0, u16 *, 0) * 0x25E48);
    temp_r3_6 = fn_800BC4C0(arg0, 1);
    sp44 = temp_r3_6;
    if ((u16) M2C_FIELD(arg0, u16 *, 4) == 1) {
        var_r0 = 5;
    } else {
        var_r0 = 3;
    }
    if (temp_r3_6 >= var_r0) {
        return 0xA004U;
    }
    if (fn_800BF4DC(arg0, &sp24, arg3, arg4, &sp20, &sp1E, &sp1C) != 0) {
        if ((sp1C == 0) && (arg4 > 1U)) {
            return 0xA00FU;
        }
        if (arg5 & 1) {
            return 0xA00BU;
        }
        var_r24 = 0;
        goto block_15;
    }
    if (arg5 & 0x400) {
        return 0xA011U;
    }
    var_r24 = 1;
block_15:
    if (arg4 == 1) {
        var_r27 = M2C_FIELD(arg0, s32 *, 0x60);
        goto block_19;
    }
    var_r27 = fn_800C1048(arg0, sp1C);
    if ((u32) (var_r27 + 0x10000) == -1U) {
        return 0xA032U;
    }
block_19:
    if (var_r24 == 0) {
        temp_r3_5 = fn_800BFE78(arg0, var_r27, &sp20, &sp1E);
        if (temp_r3_5 != 0) {
            return temp_r3_5;
        }
        temp_r3_4 = fn_800BC390(arg0, sp20, sp1E, arg3, arg4, 0);
        if (temp_r3_4 != 0) {
            return temp_r3_4;
        }
        temp_r3_3 = fn_800BF4B4(arg0);
        if (temp_r3_3 != 0) {
            return temp_r3_3;
        }
        temp_r3_7 = fn_800BC4C0(arg0, 0);
        sp44 = temp_r3_7;
        if ((u16) M2C_FIELD(arg0, u16 *, 4) == 1) {
            var_r0_2 = 5;
        } else {
            var_r0_2 = 3;
        }
        if (temp_r3_7 >= var_r0_2) {
            return 0xA004U;
        }
        if ((u16) M2C_FIELD(arg0, u16 *, 4) == 1) {
            /* draft: did not compile: var_r29 = temp_r23 + ((sp44 * 0x7C) + 0x210); */
        } else {
            /* draft: did not compile: var_r29 = temp_r23 + ((sp44 * 0x7C) + 0x47C); */
        }
        /* draft: did not compile: temp_r3_2 = fn_800C17AC(var_r29 + 8, *(arg3 + ((arg4 - 1) * 4))); */
        if (temp_r3_2 != 0) {
            return temp_r3_2;
        }
        M2C_FIELD(var_r29, s8 *, 0x13) = 0x20;
        /* draft: did not compile: fn_800C1C84(var_r29 + 0x14, 0, 0xA); */
        M2C_FIELD(var_r29, s32 *, 0x24) = 0;
        M2C_FIELD(var_r29, s16 *, 0x1E) = 0;
        M2C_FIELD(var_r29, s16 *, 0x20) = 0;
        M2C_FIELD(var_r29, s16 *, 0x22) = 0;
        *arg1 = var_r29;
        goto block_39;
    }
    temp_r3 = fn_800BC110(arg0, arg1, &sp24, &sp44, arg5);
    if (temp_r3 != 0) {
        return temp_r3;
    }
block_39:
    return fn_800BC2E4(arg0, *arg1, (u16)sp44, sp20, sp1E, sp10, arg5);
}

u16 fn_800BBEBC(void *arg0, s32 *arg1, s32 arg2, s32 arg3, u16 arg4, s32 arg5) {
    u16 sp48;
    M2C_UNK sp28;
    s32 sp24;
    u16 sp22;
    u16 sp20;
    void *sp1C;
    s32 sp10;
    s32 var_r29;
    u16 temp_r3;
    u16 temp_r3_2;
    u16 temp_r3_3;
    u16 temp_r3_4;
    u16 temp_r3_5;
    u32 temp_r3_6;
    u16 temp_r3_7;
    u16 var_r0;

    sp10 = arg2;
    sp1C = &lbl_802CFCA8 + (M2C_FIELD(arg0, u16 *, 0) * 0x25E48);
    temp_r3_7 = fn_800BC4C0(arg0, 1);
    sp48 = temp_r3_7;
    if ((u16) M2C_FIELD(arg0, u16 *, 4) == 1) {
        var_r0 = 5;
    } else {
        var_r0 = 3;
    }
    if (temp_r3_7 >= var_r0) {
        return 0xA004U;
    }
    if (fn_800BF4DC(arg0, &sp28, arg3, (s32)arg4, &sp24, &sp22, &sp20) != 0) {
        return 0xA007U;
    }
    if (arg5 & 0x800) {
        temp_r3_6 = fn_800BC7A4(&sp28, arg5);
        if (temp_r3_6 != 0) {
            return temp_r3_6;
        }
        temp_r3_5 = fn_800B6C14(arg0, sp24, sp22, sp20);
        if (temp_r3_5 != 0) {
            return temp_r3_5;
        }
        if (arg4 == 1) {
            var_r29 = M2C_FIELD(arg0, s32 *, 0x60);
            goto block_16;
        }
        var_r29 = fn_800C1048(arg0, sp20);
        if ((u32) (var_r29 + 0x10000) == -1U) {
            return 0xA032U;
        }
block_16:
        temp_r3_4 = fn_800BFE78(arg0, var_r29, &sp24, &sp22);
        if (temp_r3_4 != 0) {
            return temp_r3_4;
        }
        temp_r3_3 = fn_800BC390(arg0, sp24, sp22, arg3, arg4, 0);
        if (temp_r3_3 != 0) {
            return temp_r3_3;
        }
        temp_r3_2 = fn_800BF4B4(arg0);
        if (temp_r3_2 != 0) {
            return temp_r3_2;
        }
        if (fn_800BF4DC(arg0, &sp28, arg3, arg4, &sp24, &sp22, &sp20) != 0) {
            return 0xA007U;
        }
        goto block_24;
    }
block_24:
    /* draft: did not compile: temp_r3 = fn_800BC110(arg0, arg1, &sp28, &sp48, arg5); */
    if (temp_r3 != 0) {
        return temp_r3;
    }
    return 0;
}

#pragma push
#pragma peephole off
u16 fn_800BC110(void *arg0, void **arg1, void *arg2, u16 *arg3, u16 arg4) {
    u16 sp18;
    void **spC;
    u16 temp_r3;
    u16 var_r0;
    void *temp_r26;
    void *var_r30;

    spC = arg1;
    sp18 = arg4;
    temp_r26 = &lbl_802CFCA8 + (M2C_FIELD(arg0, u16 *, 0) * 0x25E48);
    temp_r3 = fn_800BC7A4(arg2, sp18);
    if (temp_r3 != 0) {
        return temp_r3;
    }
    if (((u32) M2C_FIELD(arg2, u32 *, 0x1C) != 0U) && ((u16) M2C_FIELD(arg2, u16 *, 0x1A) == 0)) {
        return 0xA032U;
    }
    if (((u16) M2C_FIELD(arg2, u16 *, 0x1A) == 1) || ((s32) M2C_FIELD(arg2, u16 *, 0x1A) > (s32) (M2C_FIELD(arg0, u16 *, 0xBC) - 1))) {
        return 0xA032U;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 0x3C) == 2) {
        if ((u16) M2C_FIELD(arg2, u16 *, 0x1A) >= 0xFF7U) {
            return 0xA032U;
        }
        goto block_14;
    }
    if (((u16) M2C_FIELD(arg0, u16 *, 0x3C) == 1) && (M2C_FIELD(arg2, u16 *, 0x1A) >= -9U)) {
        return 0xA032U;
    }
block_14:
    *arg3 = fn_800BC4C0(arg0, 0);
    if ((u16) M2C_FIELD(arg0, u16 *, 4) == 1) {
        var_r0 = 5;
    } else {
        var_r0 = 3;
    }
    if ((u16) *arg3 >= var_r0) {
        return 0xA004U;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 4) == 1) {
        /* draft: did not compile: var_r30 = temp_r26 + ((*arg3 * 0x7C) + 0x210); */
    } else {
        /* draft: did not compile: var_r30 = temp_r26 + ((*arg3 * 0x7C) + 0x47C); */
    }
    /* draft: did not compile: fn_800C1D74(var_r30 + 8, arg2, 0xB); */
    M2C_FIELD(var_r30, u8 *, 0x13) = (u8) M2C_FIELD(arg2, u8 *, 0xB);
    /* draft: did not compile: fn_800C1D74(var_r30 + 0x14, arg2 + 0xC, 0xA); */
    *spC = var_r30;
    M2C_FIELD(var_r30, u16 *, 0x1E) = (u16) M2C_FIELD(arg2, u16 *, 0x16);
    M2C_FIELD(var_r30, u16 *, 0x20) = (u16) M2C_FIELD(arg2, u16 *, 0x18);
    M2C_FIELD(var_r30, u16 *, 0x22) = (u16) M2C_FIELD(arg2, u16 *, 0x1A);
    M2C_FIELD(var_r30, u32 *, 0x24) = (u32) M2C_FIELD(arg2, u32 *, 0x1C);
    return temp_r3;
}
#pragma pop

s32 fn_800BC2E4(u16 *arg0, void *arg1, u16 arg2, s32 arg3, u16 arg4, s32 arg5, u16 arg6) {
    void *sp24;
    u8 sp20;
    s32 sp1C;
    u8 sp18;
    u8 sp14;
    u8 sp10;

    sp10 = arg2;
    sp14 = arg3;
    sp18 = arg4;
    sp1C = arg5;
    sp20 = arg6;
    M2C_FIELD(arg1, u16 *, 0x2C) = sp20;
    sp24 = &lbl_802CFCA8 + (*arg0 * 0x25E48);
    M2C_FIELD(arg1, u16 *, 0) = sp10;
    M2C_FIELD(arg1, u16 **, 4) = arg0;
    M2C_FIELD(arg1, s32 *, 0x28) = 0;
    M2C_FIELD(arg1, s16 *, 0x30) = 0;
    M2C_FIELD(arg1, u16 *, 0x2E) = (u16) M2C_FIELD(arg1, u16 *, 0x22);
    M2C_FIELD(arg1, s32 *, 0x34) = sp14;
    M2C_FIELD(arg1, u16 *, 0x38) = sp18;
    /* draft: did not compile: fn_800C1D34(arg1 + 0x3A, sp1C); */
    return 0;
}

u16 fn_800BC390(void *arg0, s32 arg1, u16 arg2, s32 arg3, u16 arg4, u8 arg5) {
    u16 sp18;
    s32 sp14;
    u16 sp10;
    u16 temp_r3;
    u16 temp_r3_2;
    void *temp_r28;
    void *temp_r30;

    sp10 = arg2;
    sp14 = arg3;
    sp18 = arg4;
    temp_r28 = &lbl_802CFCA8 + (M2C_FIELD(arg0, u16 *, 0) * 0x25E48);
    temp_r3_2 = fn_800C10A0(0, 1, arg1, 0, M2C_FIELD(arg0, u16 *, 4), M2C_FIELD(arg0, u16 *, 0));
    if (temp_r3_2 != 0) {
        return temp_r3_2;
    }
    /* draft: did not compile: temp_r30 = temp_r28 + 0x20000 + sp10 + 0xBA4; */
    fn_800C1C84(temp_r30, 0, 0x20);
    M2C_FIELD(temp_r30, s8 *, 0xB) = 0x20;
    /* draft: did not compile: fn_800C1C84(temp_r30 + 0xC, 0, 0xA); */
    M2C_FIELD(temp_r30, u8 *, 0x1A) = arg5;
    M2C_FIELD(temp_r30, u8 *, 0x1B) = (u8) (arg5 >> 8U);
    M2C_FIELD(temp_r30, s32 *, 0x1C) = 0;
    fn_800C05CC(temp_r30, 0);
    /* draft: did not compile: temp_r3 = fn_800C17AC(temp_r30, *(sp14 + ((sp18 - 1) * 4)), sp14); */
    if (temp_r3 != 0) {
        return temp_r3;
    }
    return fn_800C11F4(0, 1, arg1, 0, M2C_FIELD(arg0, u16 *, 4), 0, M2C_FIELD(arg0, u16 *, 0));
}

u16 fn_800BC4C0(void *arg0, u16 arg1) { return 0; } /* draft: stub */

void fn_800BC658(void *arg0) {
    void *temp_r31;
    void *temp_r5;
    void *temp_r5_2;

    temp_r31 = &lbl_802CFCA8 + (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0) * 0x25E48);
    if ((u16) M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 4) == 2) {
        /* draft: did not compile: temp_r5 = *(temp_r31 + ((M2C_FIELD(arg0, u16 *, 0) * 0x7C) + 0x480)); */
        M2C_FIELD(temp_r5, u16 *, 0xF4) = (u16) (M2C_FIELD(temp_r5, u16 *, 0xF4) - 1);
        /* draft: did not compile: *(temp_r31 + ((M2C_FIELD(arg0, u16 *, 0) * 0x7C) + 0x480)) = 0; */
        /* draft: did not compile: *(temp_r31 + ((M2C_FIELD(arg0, u16 *, 0) * 0x7C) + 0x47C)) = 0xFFFF; */
        return;
    }
    /* draft: did not compile: temp_r5_2 = *(temp_r31 + ((M2C_FIELD(arg0, u16 *, 0) * 0x7C) + 0x214)); */
    M2C_FIELD(temp_r5_2, u16 *, 0xF4) = (u16) (M2C_FIELD(temp_r5_2, u16 *, 0xF4) - 1);
    /* draft: did not compile: *(temp_r31 + ((M2C_FIELD(arg0, u16 *, 0) * 0x7C) + 0x214)) = 0; */
    /* draft: did not compile: *(temp_r31 + ((M2C_FIELD(arg0, u16 *, 0) * 0x7C) + 0x210)) = 0xFFFF; */
}

s32 fn_800BC730(u16 *arg0) {
    if ((u16) *arg0 == 0) {
        return 0xA00B;
    }
    if (*arg0 & 0xF0F8) {
        return 0xA00B;
    }
    if ((*arg0 & 1) && (*arg0 & 0xD00)) {
        return 0xA00B;
    }
    if (!(*arg0 & 7)) {
        *arg0 |= 4;
    }
    return 0;
}

s32 fn_800BC7A4(void *arg0, s32 arg1) {
    if (((s32) (M2C_FIELD(arg0, u8 *, 0xB) & 0x10) == 0x10) || ((s32) (M2C_FIELD(arg0, u8 *, 0xB) & 8) == 8) || ((s32) (M2C_FIELD(arg0, u8 *, 0xB) & 0xF) == 0xF)) {
        return 0xA006;
    }
    if (M2C_FIELD(arg0, u8 *, 0xB) & 1) {
        if (arg1 & 2) {
            return 0xA006;
        }
        if (arg1 & 4) {
            return 0xA006;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

s32 fn_800BC81C(void *arg0, s32 arg1, u16 arg2) { return 0; } /* draft: stub */

u16 fn_800BC960(void *arg0, s32 arg1, void *arg2, s32 arg3, u16 *arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp8, u16 arg_spC) { return 0; } /* draft: stub */

s32 fn_800BCB74(void **arg0, s32 arg1) {
    u8 spC;

    spC = arg1;
    if (arg0 == NULL) {
        return 0xA00C;
    }
    if ((u16) M2C_FIELD(*arg0, u16 *, 4) != 1) {
        return 0xA016;
    }
    if ((void *) *arg0 != (void *) (&lbl_802CFCA8 + (M2C_FIELD(*arg0, u16 *, 0) * 0x25E48) + 8)) {
        return 0xA02E;
    }
    return fn_800BCC1C(arg0, spC);
}
