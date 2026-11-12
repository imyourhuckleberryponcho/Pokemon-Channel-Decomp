/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

u16 fn_800B6EB0();
u16 fn_800B6ED0(s32, s32, u16);
extern M2C_UNK lbl_802CFCA8;
extern M2C_UNK lbl_801DA890;
u16 fn_800BD6B4(void *, M2C_UNK, u16 *);
M2C_UNK fn_800BF308(void *, u16, u16);
u16 fn_800BF4B4(void *);
u16 fn_800BFE78(void *, s32, s32 *, u16 *);
s16 fn_800C05CC();
u16 fn_800C0738(void *, u8 *);
s32 fn_800C1048(void *, u16);
u16 fn_800C11F4(M2C_UNK, M2C_UNK, s32, M2C_UNK, u16, M2C_UNK, u16);
u16 fn_800C17AC();
u16 fn_800C1AD4(u8 *);
M2C_UNK fn_800C1C84();
M2C_UNK fn_800C1D34(u8 *, s32);
u32 fn_800C1E70(s32, s32);
M2C_UNK fn_800C3430(M2C_UNK *);
M2C_UNK fn_800C1D74();
extern M2C_UNK lbl_8022BB30;
extern M2C_UNK lbl_8022BB3C;
u16 fn_800BB1F0(void *);
u16 fn_800B70F8(u16 *, u16);
u16 fn_800C1354(s32 *, M2C_UNK *, u16, u16, u16);
extern M2C_UNK lbl_8034FF10;
u16 fn_800C10A0(void *, M2C_UNK, M2C_UNK, M2C_UNK, u16, u16);
u16 fn_800BAEE0(void *, void *, M2C_UNK);
u16 fn_800C1EB8();
extern M2C_UNK lbl_8022BB48;
extern M2C_UNK lbl_8022BB54;
M2C_UNK fn_800BACB0(void *, void *);
s32 fn_800BAD6C(void *);

u16 SD_Init(s32 arg0, s32 arg1, u16 arg2);
s32 fn_800B8E74(u16 arg0, s32 arg1);
void fn_800B9110(u16 arg0);
u16 fn_800B9164(s16 *arg0);
s32 SD_Mkdir(void *arg0, u32 arg1);
u16 fn_800B93C8(void *arg0, s32 arg1);
u16 fn_800B9720(void *arg0, u8 arg1, u8 arg2, s32 arg3);
u16 SD_Mount(void **arg0, u16 arg1);
u16 fn_800B9A00(void *arg0);
u16 fn_800B9BB4(void *arg0);
void fn_800B9D5C(void *arg0);
u16 fn_800BA094(void *arg0);
u16 fn_800BA194(void *arg0, void *arg1, void *arg2);
u16 fn_800BA350(void *arg0);
void fn_800BA448(void *arg0);
s32 fn_800BA680(void *arg0);
s32 fn_800BA810(void *arg0);
s32 fn_800BA914(void *arg0);
u16 fn_800BAA34(void *arg0, void *arg1);
s32 fn_800BABD0(void *arg0);

u16 SD_Init(s32 arg0, s32 arg1, u16 arg2) {
    void *temp_r31;
    s32 spC;
    int sp8;
    s32 temp_r3;
    u16 var_r30;
    u32 sp12;

    sp8 = arg0;
    spC = arg1;
    temp_r31 = &lbl_802CFCA8 + (arg2 * 0x25E48);
    if (arg2 > 1U) {
        return 0xA00CU;
    }
    fn_800B9110(arg2);
    /* draft: did not compile: temp_r3 = fn_800B8E74(arg2, &sp12); */
    var_r30 = temp_r3;
    if (temp_r3 != 0) {
        return var_r30;
    }
    M2C_FIELD(temp_r31, s16 *, 0xE) = 1;
    M2C_FIELD(temp_r31, s16 *, 0xFC) = 0;
    M2C_FIELD(temp_r31, s16 *, 0x102) = 0;
    M2C_FIELD(temp_r31, s16 *, 0x112) = 1;
    M2C_FIELD(temp_r31, s16 *, 0x200) = 0;
    M2C_FIELD(temp_r31, s16 *, 0x1CC) = 0;
    M2C_FIELD(temp_r31, s16 *, 0x206) = 0;
    M2C_FIELD(temp_r31, s32 *, 0x259D4) = 0;
    M2C_FIELD(temp_r31, s16 *, 0xC8) = 0;
    M2C_FIELD(temp_r31, s32 *, 0x259D8) = 1;
    M2C_FIELD(temp_r31, s16 *, 0x259DC) = 0;
    if (sp12 == 1) {
        var_r30 = fn_800B6EB0();
    }
    if (var_r30 == 0) {
        var_r30 = fn_800B6ED0(sp8, spC, M2C_FIELD(temp_r31, u16 *, 2));
    }
    if (var_r30 != 0) {
        return var_r30;
    }
    return 0U;
}

s32 fn_800B8E74(u16 arg0, s32 arg1) {
    void *sp10;
    s32 spC;
    u16 sp8;

    sp8 = arg0;
    spC = arg1;
    sp10 = &lbl_802CFCA8 + (sp8 * 0x25E48);
    if ((2U != 1U) && (2U != 2U)) {
        return 0xA042;
    }
    if ((2U != 1U) && (2U != 2U)) {
        return 0xA042;
    }
    if ((2U != 1U) && (2U != 2U)) {
        return 0xA042;
    }
    if ((1U != 2U) && (1U != 1U)) {
        return 0xA042;
    }
    if ((1U != 2U) && (1U != 1U)) {
        return 0xA042;
    }
    if (0x400000U > 0x400000U) {
        return 0xA042;
    }
    if ((5U < 1U) || (5U > 5U)) {
        return 0xA042;
    }
    if ((3U < 1U) || (3U > 5U)) {
        return 0xA042;
    }
    if ((3U < 1U) || (3U > 3U)) {
        return 0xA042;
    }
    if ((2U < 1U) || (2U > 3U)) {
        return 0xA042;
    }
    if ((8U < 1U) || (8U > 8U)) {
        return 0xA042;
    }
    if ((5U < 1U) || (5U > 8U)) {
        return 0xA042;
    }
    if ((2U != 1U) && (2U != 2U)) {
        return 0xA042;
    }
    if (0x20400U < 0x800U) {
        return 0xA042;
    }
    if (0x200U < 0x200U) {
        return 0xA042;
    }
    if (0x200U > -0x7F00U) {
        return 0xA042;
    }
    if (0 != 0) {
        return 0xA042;
    }
    if ((0x200U < 2U) || (0x200U > 0x200U)) {
        return 0xA042;
    }
    if (0 /* draft: did not compile */) {
        return 0xA042;
    }
    if (0 != 0) {
        return 0xA042;
    }
    return 0;
}

void fn_800B9110(u16 arg0) {
    void *temp_r31;

    M2C_FIELD(temp_r31, u16 *, 2) = (u16) *(&lbl_801DA890 + ((arg0 * 2) & 0x1FFFE));
    temp_r31 = &lbl_802CFCA8 + (arg0 * 0x25E48);
    M2C_FIELD(temp_r31, s16 *, 4) = 0;
    M2C_FIELD(temp_r31, u16 *, 0) = arg0;
}

u16 fn_800B9164(s16 *arg0) {
    u16 temp_r0;
    u16 var_r27;
    u16 var_r28;
    u16 var_r29;
    u16 var_r31;
    u16 var_r31_2;
    u16 var_r31_3;
    void *temp_r26;

    var_r27 = 0;
    var_r29 = 0;
    var_r31 = 1;
loop_8:
    if (var_r31 >= 2U) {
        var_r31_2 = 0;
loop_13:
        if (var_r31_2 > 1U) {
            var_r31_3 = 0;
loop_31:
            if (var_r31_3 > 1U) {
                *arg0 = 2 - var_r27;
                return var_r29;
            }
            temp_r0 = *(&lbl_801DA890 + ((var_r31_3 * 2) & 0x1FFFE));
            if ((s32) temp_r0 < 0x102) {
                if ((s32) temp_r0 != 0) {
                    if ((s32) temp_r0 >= 0) {
                        if ((s32) temp_r0 < 0x100) {
                            goto block_27;
                        }
                        goto block_25;
                    }
                    goto block_27;
                }
                if (var_r31_3 == 0) {
                    var_r29 = 0xA042;
                }
                temp_r26 = &lbl_802CFCA8 + (var_r31_3 * 0x25E48);
                M2C_FIELD(temp_r26, s16 *, 0) = 0xFFFF;
                M2C_FIELD(temp_r26, u16 *, 2) = (u16) *(&lbl_801DA890 + ((var_r31_3 * 2) & 0x1FFFE));
                var_r27 += 1;
            } else if ((s32) temp_r0 != 0x200) {
block_27:
                var_r29 = 0xA042;
            } else {
block_25:
                if (var_r27 != 0) {
                    var_r29 = 0xA042;
                }
            }
            if (var_r29 != 0) {
                return var_r29;
            }
            var_r31_3 += 1;
            goto loop_31;
        }
        if ((s32) (*(&lbl_801DA890 + ((var_r31_2 * 2) & 0x1FFFE)) & 0x200) == 0x200) {
            return 0xA042U;
        }
        var_r31_2 += 1;
        goto loop_13;
    }
    var_r28 = 0;
loop_6:
    if ((s32) var_r28 >= (s32) (2 - var_r31)) {
        var_r31 += 1;
        goto loop_8;
    }
    if (((u16) *(&lbl_801DA890 + ((var_r28 * 2) & 0x1FFFE)) == (u16) *(&lbl_801DA890 + ((var_r31 + var_r28) * 2))) && ((u16) *(&lbl_801DA890 + ((var_r28 * 2) & 0x1FFFE)) != 0)) {
        return 0xA042U;
    }
    var_r28 += 1;
    goto loop_6;
}

#pragma push
#pragma peephole off
s32 SD_Mkdir(void *arg0, u32 arg1) {
    if ((arg0 == NULL) || (arg1 == 0U)) {
        return 0xA00C;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 6) != 2) {
        return 0xA003;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 4) != 1) {
        return 0xA016;
    }
    if (arg0 != (void *) (&lbl_802CFCA8 + (M2C_FIELD(arg0, u16 *, 0) * 0x25E48) + 8)) {
        return 0xA00C;
    }
    return fn_800B93C8(arg0, arg1);
}
#pragma pop

u16 fn_800B93C8(void *arg0, s32 arg1) {
    u16 temp_r3_2;
    s32 sp11;
    M2C_UNK sp88;
    M2C_UNK sp80;
    s32 sp7C;
    s16 sp78;
    u16 sp76;
    u16 sp74;
    u16 sp72;
    u16 sp70;
    u8 sp10;
    s32 temp_r4;
    s32 var_r28;
    u16 temp_r3;
    void *temp_r29;
    u16 temp_r3_3;
    s32 temp_r3_4;
    u16 temp_r3_5;
    u16 temp_r3_6;
    u16 temp_r3_7;
    u16 var_r31;
    s32 sp50;

    sp76 = 0;
    temp_r4 = M2C_FIELD(arg0, u16 *, 0) * 0x25E48;
    if (fn_800C1E70(arg1, temp_r4) > 0x3FU) {
        return 0xA017U;
    }
    fn_800C1D34(&sp10, arg1);
    if ((sp10 == 0x5C) && (sp11 == 0)) {
        return 0xA02CU;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 6) != 2) {
        return 0xA003U;
    }
    temp_r3_7 = fn_800C1AD4(&sp10);
    if (temp_r3_7 != 0) {
        return temp_r3_7;
    }
    temp_r3 = fn_800C0738(arg0, &sp10);
    switch (temp_r3) {                              /* irregular */
    case -24529:
        return temp_r3;
    case 0:
        /* draft: did not compile: temp_r3_6 = fn_800C15BC(&sp10, (s32 (*)[]) &sp50[0], &sp76, M2C_FIELD(arg0, u16 *, 0)); */
        if (temp_r3_6 != 0) {
            return temp_r3_6;
        }
        if (0 /* draft: did not compile */) {
            return 0xA011U;
        }
        temp_r3_5 = fn_800BD6B4(arg0, 0, &sp74);
        if (temp_r3_5 != 0) {
            return temp_r3_5;
        }
        fn_800C3430(&sp80);
        if (sp76 == 1) {
            /* draft: did not compile: var_r31 = fn_800B9720(arg0, sp74, 0U, &sp80); */
        } else {
            /* draft: did not compile: var_r31 = fn_800B9720(arg0, sp74, sp70, &sp80); */
        }
        if (var_r31 != 0) {
            fn_800BF308(arg0, sp74, sp74);
            return var_r31;
        }
        if (sp76 == 1) {
            var_r28 = M2C_FIELD(arg0, s32 *, 0x60);
            goto block_28;
        }
        var_r28 = fn_800C1048(arg0, sp70);
        if ((u32) (var_r28 + 0x10000) == -1U) {
            fn_800BF308(arg0, sp74, sp74);
            return 0xA02AU;
        }
block_28:
        temp_r3_4 = fn_800BFE78(arg0, var_r28, &sp7C, &sp72);
        if (temp_r3_4 != 0) {
            fn_800BF308(arg0, sp74, sp74);
            return temp_r3_4;
        }
        temp_r29 = &lbl_802CFCA8 + temp_r4 + ((((s32) sp72 / 32) << 5) + 0x20BA4);
        fn_800C1C84(temp_r29, 0, 0x20);
        /* draft: did not compile: temp_r3_3 = fn_800C17AC(temp_r29, (&sp50[0])[sp76 - 1]); */
        if (temp_r3_3 != 0) {
            fn_800BF308(arg0, sp74, sp74);
            return temp_r3_3;
        }
        M2C_FIELD(temp_r29, s8 *, 0xB) = 0x10;
        M2C_FIELD(temp_r29, s8 *, 0x1A) = (s8) sp74;
        M2C_FIELD(temp_r29, s8 *, 0x1B) = (s8) ((s32) sp74 >> 8);
        sp78 = fn_800C05CC(temp_r29, &sp80);
        temp_r3_2 = fn_800C11F4(0, 1, sp7C, 0, M2C_FIELD(arg0, u16 *, 4), 0, M2C_FIELD(arg0, u16 *, 0));
        if (temp_r3_2 != 0) {
            fn_800BF308(arg0, sp74, sp74);
            return temp_r3_2;
        }
        return fn_800BF4B4(arg0);
    default:
        return 0xA011U;
    }
}

u16 fn_800B9720(void *arg0, u8 arg1, u8 arg2, s32 arg3) {
    s32 temp_r3_3;
    s32 var_r29;
    u16 temp_r3;
    u16 temp_r3_2;
    u16 var_r25;
    u32 var_r28;
    void *temp_r26;
    void *temp_r31;
    void *temp_r31_2;

    temp_r26 = &lbl_802CFCA8 + (M2C_FIELD(arg0, u16 *, 0) * 0x25E48);
    /* draft: did not compile: fn_800C1C84(temp_r26 + 0x20BA4, 0, 0x4000); */
    /* draft: did not compile: temp_r31 = temp_r26 + 0x20BA4; */
    fn_800C1D74(temp_r31, &lbl_8022BB30, 0xB);
    M2C_FIELD(temp_r31, s8 *, 0xB) = 0x10;
    fn_800C05CC(temp_r31, arg3);
    M2C_FIELD(temp_r31, u8 *, 0x1A) = arg1;
    M2C_FIELD(temp_r31, u8 *, 0x1B) = (u8) (arg1 >> 8U);
    /* draft: did not compile: temp_r31_2 = temp_r31 + 0x20; */
    M2C_FIELD(temp_r31_2, s8 *, 0xB) = 0x10;
    fn_800C05CC(temp_r31_2, arg3);
    fn_800C1D74(temp_r31_2, &lbl_8022BB3C, 0xB);
    M2C_FIELD(temp_r31_2, u8 *, 0x1B) = (u8) (arg2 >> 8U);
    M2C_FIELD(temp_r31_2, u8 *, 0x1A) = arg2;
    temp_r3_3 = fn_800C1048(arg0, arg1);
    if ((u32) (temp_r3_3 + 0x10000) == -1U) {
        return 0xA029U;
    }
    if ((u16) M2C_FIELD((s32)arg0, u16 *, 0x1E) > 0x20U) {
        var_r28 = 0x20;
    } else {
        var_r28 = M2C_FIELD(arg0, u16 *, 0x1E);
    }
    temp_r3_2 = fn_800C11F4(0, var_r28, temp_r3_3, 0, M2C_FIELD(arg0, u16 *, 4), 0, M2C_FIELD(arg0, u16 *, 0));
    if (temp_r3_2 != 0) {
        return temp_r3_2;
    }
    var_r29 = temp_r3_3;
    var_r29 += var_r28;
    /* draft: did not compile: fn_800C1C84(temp_r26 + 0x20BA4, 0, 0x40); */
    var_r25 = 0;
loop_11:
    if ((s32) var_r25 >= (s32) (((s32) M2C_FIELD(arg0, u16 *, 0x1E) / (s32) var_r28) - 1)) {
        return 0U;
    }
    temp_r3 = fn_800C11F4(0, var_r28, var_r29, 0, M2C_FIELD(arg0, u16 *, 4), 0, M2C_FIELD(arg0, u16 *, 0));
    if (temp_r3 != 0) {
        return temp_r3;
    }
    var_r29 += var_r28;
    var_r25 += 1;
    goto loop_11;
}

u16 SD_Mount(void **arg0, u16 arg1) {
    u16 temp_r3;
    void *temp_r27;
    void *temp_r29;

    if (arg0 == NULL) {
        return 0xA00CU;
    }
    if (arg1 > 1U) {
        return 0xA00CU;
    }
    temp_r29 = &lbl_802CFCA8 + (arg1 * 0x25E48);
    if (arg1 != (u16) M2C_FIELD(temp_r29, u16 *, 0)) {
        return 0xA00CU;
    }
    temp_r27 = *arg0;
    /* draft: did not compile: *arg0 = temp_r29 + 8; */
    M2C_FIELD(*arg0, s16 *, 4) = 1;
    M2C_FIELD(*arg0, u16 *, 0) = arg1;
    M2C_FIELD(*arg0, u16 *, 2) = (u16) M2C_FIELD(temp_r29, u16 *, 2);
    if ((u16) M2C_FIELD(*arg0, u16 *, 0xF4) != 0) {
        *arg0 = temp_r27;
        return 0xA009U;
    }
    temp_r3 = fn_800B9A00(*arg0);
    if ((temp_r3 != 0) && ((temp_r3 == -0x5FE6U) || ((u32) (temp_r3 & 0xFF00) != -0x6000U))) {
        *arg0 = temp_r27;
    }
    return temp_r3;
}

u16 fn_800B9A00(void *arg0) {
    void *spC;
    s32 temp_r4;
    s32 temp_r3;
    s16 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r3_5;
    s32 var_r31;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0) * 0x25E48;
    spC = &lbl_802CFCA8 + temp_r4;
    M2C_FIELD(arg0, s16 *, 6) = 1;
    temp_r3_5 = fn_800B9BB4((void *)(arg0));
    if ((temp_r3_5 != 0) && ((temp_r3_5 == -0x5FE6U) || ((u32) (temp_r3_5 & 0xFF00) != -0x6000U))) {
        return temp_r3_5;
    }
    fn_800B9D5C(arg0);
    temp_r3_4 = fn_800BA094(arg0);
    if ((temp_r3_4 != 0) && ((temp_r3_4 == -0x5FE6U) || ((u32) (temp_r3_4 & 0xFF00) != -0x6000U))) {
        return temp_r3_4;
    }
    temp_r3_3 = fn_800BA350(arg0);
    if ((temp_r3_3 != 0) && ((temp_r3_3 == -0x5FE6U) || ((u32) (temp_r3_3 & 0xFF00) != -0x6000U))) {
        return temp_r3_3;
    }
    temp_r3_2 = fn_800BA914(arg0);
    if ((temp_r3_2 != 0) && ((temp_r3_2 == -0x5FE6U) || ((u32) (temp_r3_2 & 0xFF00) != -0x6000U))) {
        return temp_r3_2;
    }
    temp_r3 = fn_800BB1F0(arg0);
    if ((temp_r3 != 0) && ((temp_r3 == -0x5FE6U) || ((u32) (temp_r3 & 0xFF00) != -0x6000U))) {
        return temp_r3;
    }
    if (M2C_FIELD(arg0, u16 *, 0x102) & 1) {
        M2C_FIELD(arg0, s16 *, 6) = 1;
        return temp_r3;
    }
    if (M2C_FIELD(arg0, u16 *, 0x102) & 8) {
        var_r31 = 0xA046;
    } else {
        var_r31 = 0;
    }
    M2C_FIELD(arg0, s16 *, 6) = 2;
    return var_r31;
}

u16 fn_800B9BB4(void *arg0) {
    u16 sp14;
    s32 sp10;
    M2C_UNK spC;
    u16 temp_r3;
    u16 temp_r3_2;

    sp14 = 0xFFFF;
    temp_r3_2 = fn_800B70F8(&sp14, M2C_FIELD(arg0, u16 *, 2));
    if (temp_r3_2 != 0) {
        M2C_FIELD(arg0, u16 *, 0x102) = (u16) (M2C_FIELD(arg0, u16 *, 0x102) | 1);
        return temp_r3_2;
    }
    if (sp14 & 0x400) {
        M2C_FIELD(arg0, u16 *, 0x102) = (u16) (M2C_FIELD(arg0, u16 *, 0x102) | 1);
        return 0xA037U;
    }
    if (((u32) (sp14 & 0xE000) == -0x2000U) || ((u32) (sp14 & 0xE000) == -0x4000U) || ((u32) (sp14 & 0xE000) == -0x6000U) || ((s32) (sp14 & 0xE000) == 0x6000) || !(sp14 & 0xE000)) {
        M2C_FIELD(arg0, u16 *, 0x102) = (u16) (M2C_FIELD(arg0, u16 *, 0x102) | 1);
        return 0xA037U;
    }
    if (sp14 & 0x8000) {
        M2C_FIELD(arg0, u16 *, 0x100) = 1U;
        goto block_17;
    }
    if (sp14 & 0x4000) {
        M2C_FIELD(arg0, u16 *, 0x100) = 2U;
        goto block_17;
    }
    if (sp14 & 0x2000) {
        M2C_FIELD(arg0, u16 *, 0x100) = 4U;
block_17:
        temp_r3 = fn_800C1354(&sp10, &spC, M2C_FIELD(arg0, u16 *, 4), M2C_FIELD(arg0, u16 *, 0x100), M2C_FIELD(arg0, u16 *, 0));
        if (temp_r3 != 0) {
            M2C_FIELD(arg0, s32 *, 0xFC) = (s32) (M2C_FIELD((s32)arg0, s32 *, 0xFC) ^ M2C_FIELD(arg0, s32 *, 0xFC));
            M2C_FIELD(arg0, u16 *, 0x102) = (u16) (M2C_FIELD(arg0, u16 *, 0x102) | 1);
            return temp_r3;
        }
        M2C_FIELD(arg0, s32 *, 0xFC) = sp10;
        return 0U;
    }
    M2C_FIELD(arg0, u16 *, 0x102) = (u16) (M2C_FIELD(arg0, u16 *, 0x102) | 1);
    return 0xA037U;
}

void fn_800B9D5C(void *arg0) { } /* draft: stub */

u16 fn_800BA094(void *arg0) {
    u16 temp_r3;
    u16 temp_r3_2;
    void *temp_r27;
    void *temp_r28;

    temp_r27 = &lbl_802CFCA8 + (M2C_FIELD(arg0, u16 *, 0) * 0x25E48);
    M2C_FIELD(arg0, s32 *, 8) = 0;
    /* draft: did not compile: temp_r28 = temp_r27 + 0x20BA4; */
    temp_r3_2 = fn_800C10A0(temp_r28, 1, 0, 0, M2C_FIELD(arg0, u16 *, 4), M2C_FIELD(arg0, u16 *, 0));
    if (temp_r3_2 != 0) {
        M2C_FIELD(arg0, u16 *, 0x102) = (u16) (M2C_FIELD(arg0, u16 *, 0x102) | 1);
        return temp_r3_2;
    }
    /* draft: did not compile: temp_r3 = fn_800BA194(arg0, temp_r28, temp_r27 + 0x20DA4); */
    if (temp_r3 != 0) {
        if ((temp_r3 == -0x5FE6U) || ((u32) (temp_r3 & 0xFF00) != -0x6000U)) {
            return temp_r3;
        }
        goto block_7;
    }
    M2C_FIELD(arg0, s32 *, 8) = (s32) (((((((M2C_FIELD(temp_r28, s8 *, 0x1C8) << 0x10) & 0xFF0000 & ~0xFF000000) | (M2C_FIELD(temp_r28, s8 *, 0x1C9) << 0x18)) & ~0xFF00) | ((M2C_FIELD(temp_r28, s8 *, 0x1C7) << 8) & 0xFF00)) & ~0xFF) | (M2C_FIELD(temp_r28, s8 *, 0x1C6) & 0xFF));
block_7:
    return temp_r3;
}

u16 fn_800BA194(void *arg0, void *arg1, void *arg2) {
    u8 temp_r24;
    u16 temp_r3;
    u16 var_r29;
    void *temp_r25;
    void *var_r26;
    void *var_r30;

    var_r30 = arg1;
    var_r26 = arg2;
    temp_r25 = &lbl_802CFCA8 + (M2C_FIELD(arg0, u16 *, 0) * 0x25E48);
    if (var_r30 == NULL) {
        /* draft: did not compile: var_r30 = temp_r25 + 0x20BA4; */
    }
    if (var_r26 == NULL) {
        /* draft: did not compile: var_r26 = temp_r25 + 0x20DA4; */
    }
    if (((u32) M2C_FIELD(arg0, u32 *, 0xFC) < 1U) || ((u32) ((temp_r24 = ((((((M2C_FIELD(var_r30, u8 *, 0x1C8) << 0x10) & 0xFF0000 & ~0xFF000000) | (M2C_FIELD(var_r30, u8 *, 0x1C9) << 0x18)) & ~0xFF00) | ((M2C_FIELD(var_r30, u8 *, 0x1C7) << 8) & 0xFF00)) & ~0xFF) | (M2C_FIELD(var_r30, u8 *, 0x1C6) & 0xFF)) + 1) > (u32) M2C_FIELD(arg0, u32 *, 0xFC))) {
        M2C_FIELD(arg0, u16 *, 0x102) = (u16) (M2C_FIELD(arg0, u16 *, 0x102) | 1);
        return 0xA01AU;
    }
    if (fn_800C10A0(var_r26, 1, temp_r24, 0, M2C_FIELD(arg0, u16 *, 4), M2C_FIELD(arg0, u16 *, 0)) != 0) {
        M2C_FIELD(arg0, u16 *, 0x102) = (u16) (M2C_FIELD(arg0, u16 *, 0x102) | 2);
        return 0xA01DU;
    }
    temp_r3 = fn_800BAEE0(arg0, var_r26, 1);
    var_r29 = temp_r3;
    if (temp_r3 != 0) {
        var_r29 = 0xA01D;
        M2C_FIELD(arg0, u16 *, 0x102) = (u16) (M2C_FIELD(arg0, u16 *, 0x102) & ~5);
        M2C_FIELD(arg0, u16 *, 0x102) = (u16) (M2C_FIELD(arg0, u16 *, 0x102) | 2);
    } else if ((M2C_FIELD(var_r30, u8 *, 0x1C0) == 0x80) || ((u8) M2C_FIELD(var_r30, u8 *, 0x1C0) == 0)) {
        if ((u32) M2C_FIELD(var_r30, u32 *, 0x1CC) < 0x7FA8U) {
            if ((u8) M2C_FIELD(var_r30, u8 *, 0x1C4) == 1) {
                goto block_20;
            }
        } else if ((u32) M2C_FIELD(var_r30, u32 *, 0x1CC) < 0x10000U) {
            if ((u8) M2C_FIELD(var_r30, u8 *, 0x1C4) == 4) {
                goto block_20;
            }
        } else if ((u8) M2C_FIELD(var_r30, u8 *, 0x1C4) == 6) {
block_20:
            M2C_FIELD(arg0, u16 *, 0xF8) = (u16) (M2C_FIELD(arg0, u16 *, 0xF8) | 1);
        }
    }
    return var_r29;
}

u16 fn_800BA350(void *arg0) {
    u32 temp_r30;
    u32 temp_r30_2;
    u16 temp_r30_3;
    u16 temp_r3;

    temp_r3 = fn_800C10A0(0, 1, M2C_FIELD(arg0, s32 *, 8), 0, M2C_FIELD(arg0, u16 *, 4), M2C_FIELD(arg0, u16 *, 0));
    if (temp_r3 != 0) {
        M2C_FIELD(arg0, u16 *, 0x102) = (u16) (M2C_FIELD(arg0, u16 *, 0x102) | 1);
        return temp_r3;
    }
    temp_r30_3 = fn_800BAEE0(arg0, 0, 7);
    if (M2C_FIELD(arg0, u16 *, 0x102) & 1) {
        return temp_r30_3;
    }
    fn_800BA448(arg0);
    temp_r30_2 = fn_800BA810(arg0);
    if (M2C_FIELD(arg0, u16 *, 0x102) & 1) {
        return temp_r30_2;
    }
    temp_r30 = fn_800BA680(arg0);
    if (M2C_FIELD(arg0, u16 *, 0x102) & 1) {
        return temp_r30;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 0x1E) <= 0x20U) {
        M2C_FIELD(arg0, u16 *, 0xF6) = (u16) M2C_FIELD(arg0, u16 *, 0x1E);
    } else {
        M2C_FIELD(arg0, u16 *, 0xF6) = 0x20U;
    }
    return temp_r30;
}

void fn_800BA448(void *arg0) {
    s8 temp_r6;
    void *temp_r28;
    void *temp_r31;

    temp_r28 = &lbl_802CFCA8 + (M2C_FIELD(arg0, u16 *, 0) * 0x25E48);
    /* draft: did not compile: temp_r31 = temp_r28 + 0x20BA4; */
    /* draft: did not compile: fn_800C1D74(arg0 + 0x4A, temp_r28 + 0x20BA7, 8); */
    M2C_FIELD(arg0, s8 *, 0x52) = 0;
    M2C_FIELD(arg0, s16 *, 0x1C) = (s16) ((M2C_FIELD(temp_r31, u8 *, 0xB) & ~0xFF00) | ((M2C_FIELD(temp_r31, u8 *, 0xC) << 8) & 0xFF00));
    M2C_FIELD(arg0, s16 *, 0x1E) = (s16) M2C_FIELD(temp_r31, u8 *, 0xD);
    M2C_FIELD(arg0, s16 *, 0x24) = (s16) ((M2C_FIELD(temp_r31, u8 *, 0xE) & ~0xFF00) | ((M2C_FIELD(temp_r31, u8 *, 0xF) << 8) & 0xFF00));
    M2C_FIELD(arg0, s16 *, 0x26) = (s16) M2C_FIELD(temp_r31, u8 *, 0x10);
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) ((M2C_FIELD(temp_r31, u8 *, 0x11) & ~0xFF00) | ((M2C_FIELD(temp_r31, u8 *, 0x12) << 8) & 0xFF00));
    M2C_FIELD(arg0, s16 *, 0x2A) = (s16) ((M2C_FIELD(temp_r31, u8 *, 0x13) & ~0xFF00) | ((M2C_FIELD(temp_r31, u8 *, 0x14) << 8) & 0xFF00));
    M2C_FIELD(arg0, s16 *, 0x2C) = (s16) M2C_FIELD(temp_r31, u8 *, 0x15);
    M2C_FIELD(arg0, s16 *, 0x2E) = (s16) ((M2C_FIELD(temp_r31, u8 *, 0x16) & ~0xFF00) | ((M2C_FIELD(temp_r31, u8 *, 0x17) << 8) & 0xFF00));
    M2C_FIELD(arg0, s16 *, 0x20) = (s16) ((M2C_FIELD(temp_r31, u8 *, 0x18) & ~0xFF00) | ((M2C_FIELD(temp_r31, u8 *, 0x19) << 8) & 0xFF00));
    M2C_FIELD(arg0, s16 *, 0x22) = (s16) ((M2C_FIELD(temp_r31, u8 *, 0x1A) & ~0xFF00) | ((M2C_FIELD(temp_r31, u8 *, 0x1B) << 8) & 0xFF00));
    M2C_FIELD(arg0, u8 *, 0x53) = (M2C_FIELD(temp_r31, u8 *, 0x26));
    if ((M2C_FIELD(temp_r31, u8 *, 0x26)) == 0x29) {
        M2C_FIELD(arg0, u16 *, 0xF8) = (u16) (M2C_FIELD(arg0, u16 *, 0xF8) | 4);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (((((((M2C_FIELD(temp_r31, u8 *, 0x1E) << 0x10) & 0xFF0000 & ~0xFF000000) | (M2C_FIELD(temp_r31, u8 *, 0x1F) << 0x18)) & ~0xFF00) | ((M2C_FIELD(temp_r31, u8 *, 0x1D) << 8) & 0xFF00)) & ~0xFF) | (M2C_FIELD(temp_r31, u8 *, 0x1C) & 0xFF));
        temp_r6 = M2C_FIELD(temp_r31, u8 *, 0x27);
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) (((((((M2C_FIELD(temp_r31, u8 *, 0x22) << 0x10) & 0xFF0000 & ~0xFF000000) | (M2C_FIELD(temp_r31, u8 *, 0x23) << 0x18)) & ~0xFF00) | ((M2C_FIELD(temp_r31, u8 *, 0x21) << 8) & 0xFF00)) & ~0xFF) | (M2C_FIELD(temp_r31, u8 *, 0x20) & 0xFF));
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (((((((M2C_FIELD(temp_r31, u8 *, 0x29) << 0x10) & 0xFF0000 & ~0xFF000000) | (M2C_FIELD(temp_r31, u8 *, 0x2A) << 0x18)) & ~0xFF00) | ((M2C_FIELD(temp_r31, u8 *, 0x28) << 8) & 0xFF00)) & ~0xFF) | (temp_r6 & 0xFF));
        /* draft: did not compile: fn_800C1D74(arg0 + 0x3E, temp_r31 + 0x2B, 0xB, temp_r6); */
        M2C_FIELD(arg0, s8 *, 0x49) = 0;
        if (0 /* draft: did not compile */) {
            M2C_FIELD(arg0, s16 *, 0x3C) = 2;
            return;
        }
        if (0 /* draft: did not compile */) {
            M2C_FIELD(arg0, s16 *, 0x3C) = 1;
            return;
        }
        M2C_FIELD(arg0, s16 *, 0x3C) = 8;
        return;
    }
    M2C_FIELD(arg0, u16 *, 0xF8) = (u16) (M2C_FIELD(arg0, u16 *, 0xF8) | 2);
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, u8 *, 0x53) = 0U;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    /* draft: did not compile: fn_800C1C84(arg0 + 0x3E, 0, 0xB); */
    M2C_FIELD(arg0, s8 *, 0x49) = 0;
    M2C_FIELD(arg0, s16 *, 0x3C) = 8;
}

s32 fn_800BA680(void *arg0) { return 0; } /* draft: stub */

s32 fn_800BA810(void *arg0) {
    s32 var_r31;

    var_r31 = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x58) = (s32) (M2C_FIELD(arg0, s32 *, 0x54) + M2C_FIELD(arg0, u16 *, 0x24));
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (M2C_FIELD(arg0, s32 *, 0x58) + M2C_FIELD(arg0, u16 *, 0x2E));
    M2C_FIELD(arg0, u32 *, 0x60) = (u32) (M2C_FIELD(arg0, s32 *, 0x5C) + M2C_FIELD(arg0, u16 *, 0x2E));
    if ((u16) M2C_FIELD(arg0, u16 *, 0x1C) != 0) {
        M2C_FIELD(arg0, u32 *, 0x64) = (u32) M2C_FIELD(arg0, u32 *, 0x60);
        M2C_FIELD(arg0, u32 *, 0x64) = (u32) (M2C_FIELD(arg0, u32 *, 0x64) + ((u32) (M2C_FIELD(arg0, u16 *, 0x1C) + ((M2C_FIELD(arg0, u16 *, 0x28) << 5) - 1)) / (u16) M2C_FIELD(arg0, u16 *, 0x1C)));
    } else {
        M2C_FIELD(arg0, u32 *, 0x64) = 0U;
        M2C_FIELD(arg0, u16 *, 0x102) = (u16) (M2C_FIELD(arg0, u16 *, 0x102) | 1);
        var_r31 = 0xA01A;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 0x2A) != 0) {
        M2C_FIELD(arg0, u32 *, 0x68) = (u32) (M2C_FIELD(arg0, u16 *, 0x2A) + M2C_FIELD(arg0, s32 *, 0x54));
    } else {
        M2C_FIELD(arg0, u32 *, 0x68) = (u32) (M2C_FIELD(arg0, s32 *, 0x34) + M2C_FIELD(arg0, s32 *, 0x54));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x64) > (u32) M2C_FIELD(arg0, u32 *, 0x68)) {
        M2C_FIELD(arg0, u16 *, 0x102) = (u16) (M2C_FIELD(arg0, u16 *, 0x102) | 1);
        var_r31 = 0xA01A;
    }
    return var_r31;
}

s32 fn_800BA914(void *arg0) {
    s32 temp_r28;
    s32 temp_r28_2;
    void *temp_r31;
    void *var_r29;

    temp_r31 = &lbl_802CFCA8 + (M2C_FIELD(arg0, u16 *, 0) * 0x25E48);
    if ((u16) M2C_FIELD(arg0, u16 *, 4) == 1) {
        /* draft: did not compile: var_r29 = temp_r31 + 0x10C; */
    } else {
        /* draft: did not compile: var_r29 = temp_r31 + 8; */
    }
    if (((u16) M2C_FIELD(arg0, u16 *, 4) == 2) || (((u16) M2C_FIELD(var_r29, u16 *, 4) == 2) && ((u16) M2C_FIELD(var_r29, u16 *, 6) == 2))) {
        M2C_FIELD(temp_r31, s32 *, 0x5F4) = (s32) (M2C_FIELD(temp_r31, u16 *, 0x13A) * M2C_FIELD(temp_r31, u16 *, 0x128));
        M2C_FIELD(temp_r31, s32 *, 0x5F0) = (s32) (0x20400 - M2C_FIELD(temp_r31, s32 *, 0x5F4));
    } else {
        M2C_FIELD(temp_r31, s32 *, 0x5F4) = 0;
        M2C_FIELD(temp_r31, s32 *, 0x5F0) = 0x20400;
    }
    temp_r28_2 = fn_800BAA34(arg0, var_r29);
    if (M2C_FIELD(arg0, u16 *, 0x102) & 1) {
        return temp_r28_2;
    }
    if (((u16) M2C_FIELD(arg0, u16 *, 0xF0) == 1) || ((u16) M2C_FIELD(var_r29, u16 *, 0xF0) == 1)) {
        M2C_FIELD(arg0, u16 *, 0x102) = (u16) (M2C_FIELD(arg0, u16 *, 0x102) | 8);
    }
    temp_r28 = fn_800BABD0(arg0);
    fn_800BACB0(arg0, var_r29);
    return temp_r28;
}

u16 fn_800BAA34(void *arg0, void *arg1) {
    u16 temp_r3;
    u16 temp_r3_2;
    u32 var_r29;
    void *temp_r28;

    var_r29 = 0;
    temp_r28 = &lbl_802CFCA8 + (M2C_FIELD(arg0, u16 *, 0) * 0x25E48);
    if (((u16) M2C_FIELD(arg0, u16 *, 6) == 2) || (((u16) M2C_FIELD(arg0, u16 *, 6) == 2) && ((u16) M2C_FIELD(arg1, u16 *, 6) == 2))) {
        temp_r3 = fn_800BF4B4(arg0);
        var_r29 = temp_r3;
        if (temp_r3 != 0) {
            M2C_FIELD(arg0, u16 *, 0x102) = (u16) (M2C_FIELD(arg0, u16 *, 0x102) | 1);
            return var_r29;
        }
        goto block_19;
    }
    if (((u16) M2C_FIELD(arg0, u16 *, 6) == 1) && ((u16) M2C_FIELD(arg1, u16 *, 6) == 1)) {
        if ((u32) (M2C_FIELD(arg0, u16 *, 0x2E) * M2C_FIELD(arg0, u16 *, 0x1C)) > (u32) M2C_FIELD(temp_r28, u32 *, 0x5F0)) {
            M2C_FIELD(arg0, s16 *, 0xBA) = 0;
            M2C_FIELD(arg0, s16 *, 0xF0) = 1;
        } else {
            M2C_FIELD(arg0, s16 *, 0xBA) = 0;
            M2C_FIELD(arg0, s16 *, 0xF0) = 0x102;
        }
        goto block_19;
    }
    if ((u16) M2C_FIELD(arg1, u16 *, 6) == 2) {
        if ((u32) (M2C_FIELD(arg0, u16 *, 0x1C) * (M2C_FIELD((s32)arg0, u16 *, 0x2E) + M2C_FIELD(arg1, u16 *, 0x2E))) > (u32) M2C_FIELD(temp_r28, u32 *, 0x5F0)) {
            temp_r3_2 = fn_800BF4B4(arg1);
            var_r29 = temp_r3_2;
            if (temp_r3_2 != 0) {
                M2C_FIELD(arg0, u16 *, 0x102) = (u16) (M2C_FIELD(arg0, u16 *, 0x102) | 1);
                return var_r29;
            }
            M2C_FIELD(arg0, s16 *, 0xBA) = 0;
            M2C_FIELD(arg1, s16 *, 0xF0) = 1;
            M2C_FIELD(arg0, s16 *, 0xF0) = 1;
            M2C_FIELD(arg1, u16 *, 0xBA) = 0U;
            goto block_19;
        }
        if ((u16) M2C_FIELD(arg1, u16 *, 0xBA) != 0) {
            M2C_FIELD(arg0, s16 *, 0xBA) = 0;
        } else {
            M2C_FIELD(arg0, s16 *, 0xBA) = (s16) (((u32) M2C_FIELD(temp_r28, u32 *, 0x5F0) / (u16) M2C_FIELD(arg0, u16 *, 0x1C)) - M2C_FIELD(arg0, u16 *, 0x2E));
        }
        M2C_FIELD(arg0, s16 *, 0xF0) = 0x102;
        goto block_19;
    }
block_19:
    return var_r29;
}

s32 fn_800BABD0(void *arg0) {
    s8 var_r30;

    var_r30 = 0;
    if ((s32) (M2C_FIELD(arg0, u16 *, 0xF0) & 0xF00) == 0x100) {
        var_r30 = fn_800BAD6C(arg0);
        M2C_FIELD(arg0, u16 *, 0xF0) = (u16) (M2C_FIELD(arg0, u16 *, 0xF0) & 0xFFFFFEFF);
        if (M2C_FIELD(arg0, u16 *, 0x102) & 1) {
            return var_r30;
        }
        goto block_6;
    }
    M2C_FIELD(arg0, s16 *, 0xB8) = 1;
    M2C_FIELD(arg0, s16 *, 0xBE) = 2;
    if (M2C_FIELD(arg0, u16 *, 0x1E) != 0) {
        M2C_FIELD(arg0, s16 *, 0xBC) = (s16) (((u32) (M2C_FIELD(arg0, s32 *, 0x68) - M2C_FIELD(arg0, s32 *, 0x64)) / (u16) M2C_FIELD(arg0, u16 *, 0x1E)) + 2);
    } else {
        M2C_FIELD(arg0, u16 *, 0x102) = (u16) (M2C_FIELD(arg0, u16 *, 0x102) | 1);
        var_r30 = 0xA01A;
    }
block_6:
    if ((s32) (M2C_FIELD(arg0, u16 *, 0xF0) & 0xF00) == 0x100) {
        M2C_FIELD(arg0, u16 *, 0x102) = (u16) (M2C_FIELD(arg0, u16 *, 0x102) | 1);
        var_r30 = 0xA02D;
    }
    return var_r30;
}
