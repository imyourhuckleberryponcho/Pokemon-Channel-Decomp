/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_8007F794(s32 *, void *, M2C_UNK);
M2C_UNK fn_8007F758(void *, s32 *, M2C_UNK);
s32 fn_80152DAC(s32);
s32 fn_8007F7C4();
f32 fn_8007F848();
M2C_UNK fn_8007F9C0();
M2C_UNK fn_8007F9FC();
extern f32 lbl_803519F0;
extern M2C_UNK lbl_802C49A8;
M2C_UNK fn_8007F484();
M2C_UNK fn_8007F508();
extern f32 lbl_803519F4;
extern M2C_UNK lbl_8035068C;
M2C_UNK fn_8007F8B8();
u8 *fn_80005868(s32);
M2C_UNK fn_800058A8(u8 *);
M2C_UNK fn_8007F58C(void *, M2C_UNK, u8 *);
M2C_UNK fn_8007F6C0(void *);
M2C_UNK fn_8007F6E4(void *);
M2C_UNK fn_8007F708(void *);
M2C_UNK fn_8007F72C(void *, s32);
M2C_UNK fn_80084358(void *);
M2C_UNK fn_800843E8(void *);
extern M2C_UNK lbl_802282E0;
M2C_UNK fn_80024E80();
u32 get_up_vector_for_viewing_mtx(M2C_UNK);
s32 EraseCallback_80081760();
u32 fn_80082B70(M2C_UNK);
M2C_UNK fn_800834D4(M2C_UNK *, M2C_UNK *, s32 *, M2C_UNK **);
M2C_UNK fn_80083600(M2C_UNK *, M2C_UNK *, M2C_UNK **, s32 *);
M2C_UNK fn_800836C8(M2C_UNK *);
M2C_UNK fn_800836E0(u32, s32, M2C_UNK *);
void *fn_80083864(s32);

void fn_8007FA38(s8 *arg0, s32 arg1);
s32 fn_8007FA74(void *arg0, u8 *arg1);
void fn_8007FB20(u8 *arg0);
void fn_8007FBB0(u8 *arg0);
void fn_8007FC40(void *arg0);
void fn_8007FC78(void *arg0, s32 *arg1, s32 *arg2);
void *fn_8007FCD0(void *arg0);
void fn_8007FD90(void *arg0, u8 arg1);
void fn_8007FF18(u8 *arg0, u8 arg1);
void fn_80080140(u8 *arg0, u8 arg1);
void fn_800802D8();
void fn_8008063C(void);
void fn_8008065C(s32 arg0);
void fn_80080698(s32 arg0);
void fn_800806D4(s32 arg0);
M2C_UNK *fn_80080710(void);
void fn_80080738(void);
void fn_80080764(void);
void fn_80080790(s32 arg0);
void fn_800807CC(s32 arg0);
void fn_800807FC(s32 arg0);
void fn_8008082C(s32 arg1);
void fn_8008085C(s32 arg0);
void fn_8008088C(s32 arg0, s32 arg1);
s32 fn_800808D0(void *arg0, u8 arg1);
s32 fn_80081280(void *arg0);
void fn_80081324(void **arg0, s32 *arg1);
void *fn_80081350(s32 arg0);
void fn_80081364(s32 arg0);
s32 RegisterCallback(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 LookupFirstCallback(void *arg0, s32 arg1, s32 arg2);
s32 LookupNextCallback(void *arg0);

void fn_8007FA38(s8 *arg0, s32 arg1) {
    s32 sp8;

    sp8 = arg1;
    *arg0 = 4;
    fn_8007F794(&sp8, arg0 + 1, 4);
}

s32 fn_8007FA74(void *arg0, u8 *arg1) {
    s32 spC;
    s32 sp8;
    u8 temp_r5;
    u8 var_r0;

    var_r0 = 0;
    temp_r5 = *arg1;
    if ((temp_r5 == 3) || (temp_r5 == 4)) {
        var_r0 = 1;
    }
    if (((u32) (-(s32) var_r0 | var_r0) >> 0x1FU) == 0) {
        return 0;
    }
    if (temp_r5 == 4) {
        fn_8007F758(arg1 + 1, &sp8, 4);
    } else {
        fn_8007F758(arg1 + 1, &spC, 4);
        /* draft: did not compile: sp8 = *(M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x24) + (spC * 4)); */
    }
    return fn_80152DAC(sp8);
}

void fn_8007FB20(u8 *arg0) {
    u8 temp_r4;
    u8 var_r0;

    var_r0 = 0;
    temp_r4 = *arg0;
    if ((temp_r4 == 0) || (temp_r4 == 2)) {
        var_r0 = 1;
    }
    if (((u32) (-(s32) var_r0 | var_r0) >> 0x1FU) != 0) {
        fn_8007F9FC(arg0, fn_8007F7C4(arg0) + 1);
        return;
    }
    if (temp_r4 == 1) {
        fn_8007F9C0(arg0, lbl_803519F0 + fn_8007F848(arg0));
    }
}

void fn_8007FBB0(u8 *arg0) {
    u8 temp_r4;
    u8 var_r0;

    var_r0 = 0;
    temp_r4 = *arg0;
    if ((temp_r4 == 0) || (temp_r4 == 2)) {
        var_r0 = 1;
    }
    if (((u32) (-(s32) var_r0 | var_r0) >> 0x1FU) != 0) {
        fn_8007F9FC(arg0, fn_8007F7C4(arg0) - 1);
        return;
    }
    if (temp_r4 == 1) {
        fn_8007F9C0(arg0, fn_8007F848(arg0) - lbl_803519F0);
    }
}

void fn_8007FC40(void *arg0) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x10);
    temp_r5 = M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (temp_r4 + 5);
    fn_8007F7C4(temp_r5 + temp_r4, temp_r4, temp_r5);
}

void fn_8007FC78(void *arg0, s32 *arg1, s32 *arg2) {
    u8 temp_r6;
    void *temp_r6_2;

    temp_r6 = M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (temp_r6 + 5);
    /* draft: did not compile: temp_r6_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x20) + temp_r6; */
    if (arg1 != NULL) {
        *arg1 = (s32) (s8) M2C_FIELD(temp_r6_2, u8 *, 1);
    }
    if (arg2 != NULL) {
        *arg2 = M2C_FIELD(temp_r6_2, u8 *, 4) | (((M2C_FIELD(temp_r6_2, u8 *, 3) << 8) & ~0xFFFF0000) | ((s8) M2C_FIELD(temp_r6_2, u8 *, 2) << 0x10));
    }
}

void *fn_8007FCD0(void *arg0) { } /* draft: stub */

void fn_8007FD90(void *arg0, u8 arg1) { } /* draft: stub */

#pragma push
#pragma dont_inline on
void fn_8007FF18(u8 *arg0, u8 arg1) {
    u32 saved_reg_f30;
    s32 saved_reg_r31;
    u8 sp18;
    u8 sp10;
    u8 sp8;
    f32 temp_f1;
    f32 temp_f31;
    f32 var_f30;
    s32 temp_r28;
    s32 temp_r3;
    s32 var_r31;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 var_r4;
    u8 var_r4_2;

    var_r31 = saved_reg_r31;
    var_f30 = saved_reg_f30;
    fn_8007F508((unsigned char *)(&sp18), (unsigned char *)(0));
    var_r4 = 1;
    temp_r0 = sp18 - 3;
    if (((u32) ((1 | ~temp_r0) - ((u32) (1 - temp_r0) >> 1U)) >> 0x1FU) == 0) {
        var_r4 = 0;
    }
    if (var_r4 != 0) {
        fn_8007F9FC(&sp18, fn_8007FA74(arg0, &sp18));
    }
    fn_8007F508(arg0, &sp10);
    var_r4_2 = 1;
    temp_r0_2 = sp10 - 3;
    if (((u32) ((1 | ~temp_r0_2) - ((u32) (1 - temp_r0_2) >> 1U)) >> 0x1FU) == 0) {
        var_r4_2 = 0;
    }
    if (var_r4_2 != 0) {
        fn_8007F9FC(&sp10, fn_8007FA74(arg0, &sp10));
    }
    if ((sp18 == 1) || (sp10 == 1)) {
        temp_f31 = fn_8007F848(&sp18);
        temp_f1 = fn_8007F848(&sp10);
        switch ((s32) arg1) {                       /* switch 1; irregular */
        case 5:                                     /* switch 1 */
            var_f30 = temp_f1 + temp_f31;
            break;
        case 6:                                     /* switch 1 */
            var_f30 = temp_f1 - temp_f31;
            break;
        case 7:                                     /* switch 1 */
            var_f30 = temp_f1 * temp_f31;
            break;
        case 8:                                     /* switch 1 */
            var_f30 = temp_f1 / temp_f31;
            break;
        case 9:                                     /* switch 1 */
            var_f30 = lbl_803519F4;
            break;
        }
        fn_8007F9C0(&sp8, var_f30);
    } else {
        temp_r28 = fn_8007F7C4(&sp18);
        temp_r3 = fn_8007F7C4(&sp10);
        switch ((s32) arg1) {                       /* switch 2; irregular */
        case 5:                                     /* switch 2 */
            var_r31 = temp_r3 + temp_r28;
            break;
        case 6:                                     /* switch 2 */
            var_r31 = temp_r3 - temp_r28;
            break;
        case 7:                                     /* switch 2 */
            var_r31 = temp_r3 * temp_r28;
            break;
        case 8:                                     /* switch 2 */
            var_r31 = temp_r3 / temp_r28;
            break;
        case 9:                                     /* switch 2 */
            var_r31 = temp_r3 % temp_r28;
            break;
        }
        fn_8007F9FC(&sp8, var_r31);
    }
    fn_8007F484(arg0, &sp8);
}
#pragma pop

void fn_80080140(u8 *arg0, u8 arg1) {
    s32 saved_reg_r31;
    u8 sp18;
    u8 sp10;
    u8 sp8;
    s32 temp_r28;
    s32 temp_r3;
    s32 var_r31;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 var_r4;
    u8 var_r4_2;

    var_r31 = saved_reg_r31;
    fn_8007F508((unsigned char *)(&sp18), (unsigned char *)(0));
    var_r4 = 1;
    temp_r0 = sp18 - 3;
    if (((u32) ((1 | ~temp_r0) - ((u32) (1 - temp_r0) >> 1U)) >> 0x1FU) == 0) {
        var_r4 = 0;
    }
    if (var_r4 != 0) {
        fn_8007F9FC(&sp18, fn_8007FA74(arg0, &sp18));
    }
    fn_8007F508(arg0, &sp10);
    var_r4_2 = 1;
    temp_r0_2 = sp10 - 3;
    if (((u32) ((1 | ~temp_r0_2) - ((u32) (1 - temp_r0_2) >> 1U)) >> 0x1FU) == 0) {
        var_r4_2 = 0;
    }
    if (var_r4_2 != 0) {
        fn_8007F9FC(&sp10, fn_8007FA74(arg0, &sp10));
    }
    if ((sp18 == 1) || (sp10 == 1)) {
        fn_8007F9FC(&sp8, 0);
    } else {
        temp_r28 = fn_8007F7C4(&sp18);
        temp_r3 = fn_8007F7C4(&sp10);
        switch ((s32) arg1) {                       /* irregular */
        case 20:
            var_r31 = temp_r3 & temp_r28;
            break;
        case 21:
            var_r31 = temp_r3 ^ temp_r28;
            break;
        case 22:
            var_r31 = temp_r3 | temp_r28;
            break;
        case 23:
            var_r31 = temp_r3 >> temp_r28;
            break;
        case 24:
            var_r31 = temp_r3 << temp_r28;
            break;
        }
        fn_8007F9FC(&sp8, var_r31);
    }
    fn_8007F484(arg0, &sp8);
}

void fn_800802D8() { } /* draft: stub */

void fn_8008063C(void) {
    fn_8007F484((unsigned char *)(0), (unsigned char *)(0));
}

void fn_8008065C(s32 arg0) {
    M2C_UNK sp8;

    fn_8007F9FC(&sp8);
    fn_8007F484(arg0, &sp8);
}

void fn_80080698(s32 arg0) {
    M2C_UNK sp8;

    fn_8007F9C0(&sp8);
    fn_8007F484(arg0, &sp8);
}

void fn_800806D4(s32 arg0) {
    M2C_UNK sp8;

    /* draft: did not compile: fn_8007FA38(&sp8); */
    fn_8007F484(arg0, &sp8);
}

M2C_UNK *fn_80080710(void) {
    fn_8007F508(&lbl_8035068C);
    return &lbl_8035068C;
}

void fn_80080738(void) {
    M2C_UNK sp8;

    fn_8007F508(&sp8);
    fn_8007F7C4(&sp8);
}

void fn_80080764(void) {
    M2C_UNK sp8;

    fn_8007F508(&sp8);
    fn_8007F848(&sp8);
}

void fn_80080790(s32 arg0) {
    M2C_UNK sp8;

    fn_8007F508(&sp8);
    fn_8007F8B8(arg0, &sp8);
}

void fn_800807CC(s32 arg0) {
    s32 temp_r4;

    temp_r4 = arg0 * 5;
    fn_8007F7C4(&lbl_802C49A8 + temp_r4, temp_r4);
}

void fn_800807FC(s32 arg0) {
    s32 temp_r4;

    temp_r4 = arg0 * 5;
    fn_8007F848(&lbl_802C49A8 + temp_r4, temp_r4);
}

void fn_8008082C(s32 arg1) {
    s32 temp_r5;

    temp_r5 = arg1 * 5;
    fn_8007F8B8(&lbl_802C49A8 + temp_r5, temp_r5);
}

void fn_8008085C(s32 arg0) {
    s32 temp_r5;

    temp_r5 = arg0 * 5;
    fn_8007F9FC(&lbl_802C49A8 + temp_r5, temp_r5);
}

void fn_8008088C(s32 arg0, s32 arg1) {
    void *temp_r4;
    void *temp_r5;

    temp_r5 = &lbl_802C49A8 + (arg1 * 5);
    temp_r4 = &lbl_802C49A8 + (arg0 * 5);
    M2C_FIELD(temp_r4, u8 *, 0) = (u8) M2C_FIELD(temp_r5, u8 *, 0);
    M2C_FIELD(temp_r4, u8 *, 1) = (u8) M2C_FIELD(temp_r5, u8 *, 1);
    M2C_FIELD(temp_r4, u8 *, 2) = (u8) M2C_FIELD(temp_r5, u8 *, 2);
    M2C_FIELD(temp_r4, u8 *, 3) = (u8) M2C_FIELD(temp_r5, u8 *, 3);
    M2C_FIELD(temp_r4, u8 *, 4) = (u8) M2C_FIELD(temp_r5, u8 *, 4);
}

s32 fn_800808D0(void *arg0, u8 arg1) { return 0; } /* draft: stub */

s32 fn_80081280(void *arg0) {
    void *sp10;
    s32 spC;
    M2C_UNK sp8;
    s32 temp_r0;
    void *temp_r7;

    M2C_FIELD(arg0, s32 *, 0x2E8) = (s32) (M2C_FIELD(arg0, s32 *, 0x2E8) + 1);
    M2C_FIELD(arg0, s32 *, 0x2EC) = (s32) (M2C_FIELD(arg0, s32 *, 0x2EC) + 1);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_r0 < 3) {
        if (temp_r0 < 1) {
            goto block_6;
        }
        M2C_FIELD(arg0, s32 *, 0xC) = fn_800808D0((void *)(0), (unsigned char)(0));
    } else if (temp_r0 < 5) {

    } else {
block_6:
        M2C_FIELD(arg0, s32 *, 0xC) = 4;
    }
    /* draft: did not compile: temp_r7 = arg0 + 0x2BC; */
    sp10 = temp_r7;
    spC = M2C_FIELD(arg0, s32 *, 0x2C0);
    /* draft: did not compile: fn_80024E80(&sp8, arg0 + 0x2B8, &spC, &sp10, temp_r7); */
    return M2C_FIELD(arg0, s32 *, 0xC);
}

void fn_80081324(void **arg0, s32 *arg1) {
    if (arg0 != NULL) {
        *arg0 = &lbl_802C49A8 + 5;
    }
    if (arg1 != NULL) {
        *arg1 = 0x3F9D;
    }
}

void *fn_80081350(s32 arg0) {
    return &lbl_802C49A8 + (arg0 * 5);
}

void fn_80081364(s32 arg0) {
    M2C_UNK *spC;
    s32 sp8;

    switch (arg0) {                                 /* irregular */
    case 0:
        spC = &lbl_802C49A8;
        sp8 = 0x8903;
        break;
    case 3:
        /* draft: did not compile: fn_80081324(&spC, &sp8); */
        break;
    case 1:
        sp8 = 0x3327;
        spC = &lbl_802C49A8 + 0x401F;
        break;
    case 2:
        sp8 = 0x230;
        spC = &lbl_802C49A8 + 0x734B;
        break;
    }
    memset(spC, 0, sp8);
}

s32 RegisterCallback(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 sp28;
    M2C_UNK sp24;
    M2C_UNK sp20;
    M2C_UNK *sp1C;
    M2C_UNK sp18;
    s32 sp10;
    M2C_UNK *sp14;
    M2C_UNK spC;
    s32 sp8;
    u32 var_r0;

    sp8 = arg3;
    if ((arg1 != 1) || (arg2 < 0)) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x300) = 0;
    if (sp8 == 0) {
        return EraseCallback_80081760();
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2B4) == 0U) {
        var_r0 = get_up_vector_for_viewing_mtx(8);
        if (var_r0 != 0U) {
            var_r0 = fn_80082B70(0x1F);
        }
        M2C_FIELD(arg0, u32 *, 0x2B4) = var_r0;
    }
    fn_800836C8(&sp20);
    sp1C = &sp24;
    fn_80083600(&sp18, &sp20, &sp1C, &sp8);
    fn_800836E0(M2C_FIELD(arg0, u32 *, 0x2B4), arg2, &sp20);
    sp10 = sp28;
    sp14 = &sp24;
    fn_800834D4(&spC, &sp20, &sp10, &sp14);
    return 1;
}

s32 LookupFirstCallback(void *arg0, s32 arg1, s32 arg2) {
    void *temp_r3;
    void *temp_r4;

    if ((arg1 != 1) || (arg2 < 0)) {
        return 0;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2B4) == 0U) {
        return 0;
    }
    M2C_FIELD(arg0, void **, 0x300) = fn_80083864(arg2);
    temp_r3 = M2C_FIELD(arg0, void **, 0x300);
    if (temp_r3 == NULL) {
        return 0;
    }
    M2C_FIELD(arg0, void **, 0x304) = (void *) M2C_FIELD(temp_r3, void **, 8);
    temp_r4 = M2C_FIELD(arg0, void **, 0x304);
    if (0 /* draft: did not compile */) {
        return 0;
    }
    M2C_FIELD(arg0, void **, 0x304) = (void *) M2C_FIELD(temp_r4, void **, 4);
    return M2C_FIELD(temp_r4, s32 *, 8);
}

s32 LookupNextCallback(void *arg0) {
    u32 temp_r4;
    void *temp_r5;

    temp_r4 = M2C_FIELD(arg0, u32 *, 0x300);
    if (temp_r4 == 0U) {
        return 0;
    }
    temp_r5 = M2C_FIELD(arg0, void **, 0x304);
    if (0 /* draft: did not compile */) {
        return 0;
    }
    M2C_FIELD(arg0, void **, 0x304) = (void *) M2C_FIELD(temp_r5, void **, 4);
    return M2C_FIELD(temp_r5, s32 *, 8);
}
