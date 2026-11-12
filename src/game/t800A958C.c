/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

s32 OSDisableInterrupts();
M2C_UNK OSRestoreInterrupts(s32);
M2C_UNK fn_800AB910();
extern s32 lbl_80350778;
s32 fn_800A9088(u32);
s32 fn_800A94D8(s32);
u32 fn_800D2A98();
extern s32 lbl_8034FE70;
u32 fn_800A9090(u32, s32, u8);
void *fn_800A92DC(u32);
M2C_UNK fn_800C5B7C(M2C_UNK *, M2C_UNK, void *);
extern M2C_UNK lbl_8022AB40;
M2C_UNK fn_800A9270(s32, void *);
s32 fn_800AB5FC(s32);
M2C_UNK fn_80134B44();
M2C_UNK fn_80134F98();
M2C_UNK fn_80134FBC(void *, void *, s32, s32, s32);
M2C_UNK fn_800A93B0(s32, void *);
u32 fn_800A8D58(s32, s32);
s32 parseOpCode(void *);
u32 fn_80135B68();
u32 fn_80135D48(u32, s32, s32);
void *fn_800A8EF0(s32);
M2C_UNK fn_800A8F60(s32, void *);
M2C_UNK VIWaitForRetrace();
M2C_UNK fn_80135BF4(s32, s32, s32, void *, s32, s32);
extern s32 lbl_80350770;
u32 fn_800A8CF8();
M2C_UNK fn_800A8D20();
s32 fn_800AB634();
u32 fn_800A9050(u32);
u32 fn_800A94A0(s32);
M2C_UNK fn_800AB7B0(s32, s32);
s32 fn_800AB8DC(s32);
extern u32 lbl_8035077C;
extern u32 lbl_80350780;
M2C_UNK fn_800A8E64();
M2C_UNK fn_800A91FC();
M2C_UNK fn_800A9510();
M2C_UNK fn_800AB574(u32);
s32 fn_800AB8E4();
M2C_UNK fn_80135BC0();
s32 VIGetTvFormat();
M2C_UNK fn_800A94E0();
u32 fn_800AB3A0(s32, s32, void *, s32);
M2C_UNK fn_80134630();
M2C_UNK fn_80134650();
s32 fn_80134674();
M2C_UNK fn_801346DC();
s32 strncmp();
s32 strlen();
extern M2C_UNK lbl_802AE000;
M2C_UNK fn_800C9448();
M2C_UNK OSResumeThread();
u32 fn_800A9424(s32);

void fn_800A958C(void);
s32 fn_800A95CC(void *arg0, s32 arg1);
s32 fn_800A982C(void *arg0, s32 *arg1);
void fn_800A99CC(void *arg0);
s32 fn_800A9AA0(void *arg0, u16 arg1, s32 *arg2, s32 arg3, s32 arg4, s32 arg5, M2C_UNK arg_sp0);
s32 fn_800A9C7C(void *arg0);
s32 fn_800A9D78(void *arg0, s32 *arg1);
void fn_800A9E74(void *arg0, s32 arg1, s32 *arg2);
void fn_800A9F10(void *arg0);
void fn_800A9F90(void *arg0);
s32 fn_800A9FD4(void *arg0, u32 arg1);
s32 fn_800AA064(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0);
s32 fn_800AA28C(void *arg0, M2C_UNK arg_sp0);
s32 fn_800AA658(void *arg0, s32 *arg1);
void *fn_800AA778(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 *arg7, M2C_UNK arg_sp0, u32 arg_sp8);
void fn_800AABE0(void *arg0, s32 arg1);
s32 fn_800AABE8(void *arg0, s32 *arg1);
s32 fn_800AAC7C(void *arg0, s32 arg1);
s32 fn_800AAC88(s32 arg0);
s32 fn_800AACB0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 fn_800AACF4(void *arg0);
s32 fn_800AACFC(void *arg0);
s32 fn_800AAD04(void *arg0);
s32 fn_800AAD0C(void *arg0);
s32 fn_800AAD14(void *arg0);
s32 fn_800AAD1C(void *arg0);
void fn_800AAD24(void *arg0, s32 arg1);
s32 fn_800AAD2C(void *arg0);
s32 fn_800AAD34(void *arg0);
s32 fn_800AAD3C(void *arg0);
s32 fn_800AAD44(void *arg0);
u32 fn_800AAD4C(void *arg0);

void fn_800A958C(void) {
    s32 temp_r31;

    temp_r31 = OSDisableInterrupts();
    lbl_80350778 = 0;
    fn_800AB910();
    OSRestoreInterrupts(temp_r31);
}

#pragma push
#pragma peephole off
s32 fn_800A95CC(void *arg0, s32 arg1) {
    s32 saved_reg_r30;
    s32 temp_r30;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r4;
    u32 temp_r0;
    u32 temp_r0_2;

    var_r4 = arg1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x39C) == 0) {
        return 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3A4) != 0) {
        return 0;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x3DC) == 1U) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x3E0) == fn_800D2A98()) {
            M2C_FIELD(arg0, s32 *, 0x3EC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3EC) + M2C_FIELD(arg0, s32 *, 0x3FC));
            M2C_FIELD(arg0, s32 *, 0x3E8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3E8) + M2C_CARRY);
        }
    } else {
        if (var_r4 == 0) {
            var_r4 = 1;
        }
        M2C_FIELD(arg0, s32 *, 0x3EC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3EC) + (lbl_8034FE70 * var_r4));
        M2C_FIELD(arg0, s32 *, 0x3E8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3E8) + M2C_CARRY);
    }
    if (-((saved_reg_r30 - saved_reg_r30) - !M2C_CARRY) == 0) {
        if (((u32) M2C_FIELD(arg0, u32 *, 0x3DC) == 0U) && ((u32) M2C_FIELD(arg0, u32 *, 0x3AC) == 0U) && ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U)) {
            temp_r30 = fn_800A94D8(M2C_FIELD(arg0, s32 *, 0x64));
            temp_r3 = fn_800A9088(M2C_FIELD(arg0, u32 *, 0x68));
            temp_r3_2 = temp_r30 - temp_r3;
            if ((temp_r3 <= 1) || (temp_r30 <= 1)) {
                M2C_FIELD(arg0, u32 *, 0x3F8) = 0U;
            } else if (temp_r3_2 > 2) {
                M2C_FIELD(arg0, u32 *, 0x3F8) = 1U;
            } else if (temp_r3_2 < -2) {
                M2C_FIELD(arg0, u32 *, 0x3F8) = 2U;
            } else {
                temp_r0 = M2C_FIELD(arg0, u32 *, 0x3F8);
                if ((temp_r0 == 1U) && (temp_r3_2 <= 0)) {
                    M2C_FIELD(arg0, u32 *, 0x3F8) = 0U;
                } else if ((temp_r0 == 2U) && (temp_r3_2 >= 0)) {
                    M2C_FIELD(arg0, u32 *, 0x3F8) = 0U;
                }
            }
            temp_r0_2 = M2C_FIELD(arg0, u32 *, 0x3F8);
            if (temp_r0_2 == 0U) {
                M2C_FIELD(arg0, s32 *, 0x3F4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3F4) + M2C_FIELD(arg0, s32 *, 0x3FC));
                M2C_FIELD(arg0, s32 *, 0x3F0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3F0) + M2C_CARRY);
            } else if (temp_r0_2 == 1U) {
                M2C_FIELD(arg0, s32 *, 0x3F4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3F4) + ((M2C_FIELD(arg0, s32 *, 0x3FC) * 9) / 10));
                M2C_FIELD(arg0, s32 *, 0x3F0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3F0) + M2C_CARRY);
            } else {
                M2C_FIELD(arg0, s32 *, 0x3F4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3F4) + ((M2C_FIELD(arg0, s32 *, 0x3FC) * 0xA) / 9));
                M2C_FIELD(arg0, s32 *, 0x3F0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3F0) + M2C_CARRY);
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x3F4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3F4) + M2C_FIELD(arg0, s32 *, 0x3FC));
            M2C_FIELD(arg0, s32 *, 0x3F0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3F0) + M2C_CARRY);
        }
        return 1;
    }
    return 0;
}
#pragma pop

s32 fn_800A982C(void *arg0, s32 *arg1) {
    u32 temp_r4;
    u8 temp_r5;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;

    temp_r5 = M2C_FIELD(arg0, u8 *, 0x50);
    temp_r4 = temp_r5 * M2C_FIELD(arg0, u8 *, 0x51);
    M2C_FIELD(arg0, u32 *, 0x408) = (u32) ((u32) (M2C_FIELD(arg0, u16 *, 0x4C) * M2C_FIELD(arg0, u16 *, 0x4E) * (temp_r4 + 2)) / temp_r4);
    M2C_FIELD(arg0, u32 *, 0x64) = fn_800A9090(M2C_FIELD(arg0, u32 *, 0x408), M2C_FIELD(arg0, s32 *, 0x5C), temp_r5);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x64) == 0U) {
        *arg1 = 9;
        return 0;
    }
    temp_r3 = fn_800A92DC((unsigned long)(0));
    M2C_FIELD(arg0, void **, 0x428) = temp_r3;
    if (temp_r3 == NULL) {
        fn_800C5B7C(&lbl_8022AB40, 0x147, &lbl_8022AB40 + 0x10);
        *arg1 = 9;
        return 0;
    }
    temp_r3_2 = fn_800A92DC(M2C_FIELD(arg0, u32 *, 0x64));
    M2C_FIELD(arg0, void **, 0x43C) = temp_r3_2;
    if (temp_r3_2 == NULL) {
        fn_800C5B7C(&lbl_8022AB40, 0x14C, &lbl_8022AB40 + 0x38);
        *arg1 = 9;
        return 0;
    }
    temp_r3_3 = fn_800A92DC(M2C_FIELD(arg0, u32 *, 0x64));
    M2C_FIELD(arg0, void **, 0x450) = temp_r3_3;
    if (temp_r3_3 == NULL) {
        fn_800C5B7C(&lbl_8022AB40, 0x151, &lbl_8022AB40 + 0x60);
        *arg1 = 9;
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x41C) = -1;
    M2C_FIELD(arg0, s32 *, 0x430) = -1;
    M2C_FIELD(arg0, s32 *, 0x440) = 0;
    M2C_FIELD(arg0, s32 *, 0x444) = -1;
    M2C_FIELD(arg0, s32 *, 0x418) = 0;
    M2C_FIELD(arg0, s32 *, 0x424) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x428), s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x438) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x43C), s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x44C) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x450), s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x42C) = 0;
    /* draft: did not compile: M2C_FIELD(arg0, void **, 0x40C) = (void *) (arg0 + 0x418); */
    /* draft: did not compile: M2C_FIELD(arg0, void **, 0x410) = (void *) (arg0 + 0x42C); */
    /* draft: did not compile: M2C_FIELD(arg0, void **, 0x414) = (void *) (arg0 + 0x440); */
    M2C_FIELD(arg0, s32 *, 0x3B4) = -1;
    return 1;
}

void fn_800A99CC(void *arg0) {
    M2C_UNK (*temp_r12)(void *, s32);
    void *temp_r3;

loop_6:
    temp_r3 = fn_800A92DC(M2C_FIELD(arg0, s32 *, 0x64));
    if (temp_r3 == NULL) {
        M2C_FIELD(arg0, s32 *, 0x3A4) = 0;
        if (((s32) M2C_FIELD(arg0, s32 *, 0x3A0) != 0) && (((M2C_FIELD(arg0, s32 *, 0x3EC) ^ 0) | (M2C_FIELD(arg0, s32 *, 0x3E8) ^ 0)) == 0) && (fn_800AB5FC(M2C_FIELD(arg0, s32 *, 0)) == 0)) {
            M2C_FIELD(arg0, s32 *, 0x3EC) = 1;
            M2C_FIELD(arg0, s32 *, 0x3E8) = 0;
            M2C_FIELD(arg0, s32 *, 0x39C) = 1;
            temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(void *, s32), 0x400);
            if (temp_r12 != NULL) {
                temp_r12(arg0, M2C_FIELD(arg0, s32 *, 0x404));
            }
        }
        goto loop_6;
    }
    fn_800A9270(M2C_FIELD(arg0, s32 *, 0x64), M2C_FIELD(M2C_FIELD(arg0, void **, 0x410), void **, 0x10));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x410), void **, 0x10) = temp_r3;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x410), s32 *, 0xC) = (s32) M2C_FIELD(temp_r3, s32 *, 0x14);
}

s32 fn_800A9AA0(void *arg0, u16 arg1, s32 *arg2, s32 arg3, s32 arg4, s32 arg5, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

s32 fn_800A9C7C(void *arg0) {
    void *temp_r3;
    s32 temp_r0;
    s32 temp_r3_4;
    s32 temp_r4;
    void *temp_r3_2;
    void *temp_r3_3;
    void *var_r31;

    var_r31 = NULL;
    temp_r3 = M2C_FIELD(arg0, void **, 0x410);
    temp_r4 = M2C_FIELD(temp_r3, s32 *, 4);
    if (temp_r4 == 1) {
        M2C_FIELD(temp_r3, s32 *, 4) = 0;
        var_r31 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x410), void **, 0x10);
    } else {
        temp_r3_2 = M2C_FIELD(arg0, void **, 0x40C);
        temp_r0 = M2C_FIELD(temp_r3_2, s32 *, 4);
        if (temp_r0 == 1) {
            M2C_FIELD(temp_r3_2, s32 *, 4) = 0;
            var_r31 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x40C), void **, 0x10);
        } else if ((temp_r0 == 0) && (temp_r4 == 0)) {
            temp_r3_3 = M2C_FIELD(arg0, void **, 0x414);
            if ((s32) M2C_FIELD(temp_r3_3, s32 *, 4) == 1) {
                M2C_FIELD(temp_r3_3, s32 *, 4) = 0;
                var_r31 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x414), void **, 0x10);
            }
        }
    }
    if (var_r31 != NULL) {
        temp_r3_4 = M2C_FIELD(arg0, s32 *, 0x3B4);
        if ((temp_r3_4 < 0) || ((u32) M2C_FIELD(var_r31, u32 *, 0x28) <= (u32) temp_r3_4)) {
            M2C_FIELD(var_r31, s32 *, 0x18) = 1;
            fn_800A93B0(M2C_FIELD(arg0, s32 *, 0x64), var_r31);
        }
        if ((u32) M2C_FIELD(var_r31, u32 *, 0x28) == (u32) M2C_FIELD(arg0, s32 *, 0x3B4)) {
            return 1;
        }
        goto block_14;
    }
block_14:
    return 0;
}

s32 fn_800A9D78(void *arg0, s32 *arg1) {
    s32 var_r3;
    u32 temp_r3;
    u32 temp_r3_2;

    if (((u32) M2C_FIELD(arg0, u32 *, 0x44) == 0) && ((u8) M2C_FIELD(arg0, u8 *, 0x40) == 0)) {
        return 1;
    }
    /* draft: did not compile: temp_r3 = fn_80135B68(arg0 + 0x40); */
    M2C_FIELD(arg0, u32 *, 0x6C) = temp_r3;
    if (temp_r3 == 0U) {
        *arg1 = 0xB;
        return 0;
    }
    temp_r3_2 = fn_80135D48(M2C_FIELD(arg0, u32 *, 0x6C), M2C_FIELD(arg0, s32 *, 0x34), parseOpCode(arg0) + 1);
    if (temp_r3_2 == 0U) {
        var_r3 = ((((M2C_FIELD(arg0, u32 *, 0x44) * M2C_FIELD(arg0, s32 *, 0x28)) / 1000000) + 0x40) * 4) & 0xFFFFFF80;
    } else {
        var_r3 = (temp_r3_2 + 0x40) & 0xFFFFFFE0;
    }
    M2C_FIELD(arg0, u32 *, 0x68) = fn_800A8D58(var_r3, M2C_FIELD(arg0, s32 *, 0x5C) * 2);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x68) == 0U) {
        *arg1 = 0xA;
        return 0;
    }
    return 1;
}

void fn_800A9E74(void *arg0, s32 arg1, s32 *arg2) {
    s32 temp_r5;
    void *temp_r3;

loop_1:
    temp_r3 = fn_800A8EF0(M2C_FIELD(arg0, s32 *, 0x68));
    if (temp_r3 == NULL) {
        if ((s32) lbl_80350770 == 0) {
            VIWaitForRetrace();
            goto loop_1;
        }
    } else {
        temp_r5 = *arg2;
        M2C_FIELD(temp_r3, s32 *, 8) = (s32) (temp_r5 * 4);
        fn_80135BF4(M2C_FIELD(arg0, s32 *, 0x6C), arg1, temp_r5, arg2 + 4, M2C_FIELD(arg0, s32 *, 0x70), M2C_FIELD(temp_r3, s32 *, 0xC));
        fn_800A8F60(M2C_FIELD(arg0, s32 *, 0x68), temp_r3);
    }
}

void fn_800A9F10(void *arg0) {
    s32 temp_r4;

    OSDisableInterrupts();
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x3C0);
    M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (temp_r4 + 1);
    OSRestoreInterrupts(temp_r4);
loop_1:
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3C0) > 0) {
        if (((s32) lbl_80350770 != 0) || ((s32) lbl_80350778 != 0) || ((s32) M2C_FIELD(arg0, s32 *, 0x3C8) != 0)) {
            M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
            return;
        }
        VIWaitForRetrace();
        goto loop_1;
    }
}

void fn_800A9F90(void *arg0) {
    s32 temp_r4;

    OSDisableInterrupts();
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x3C0);
    if (temp_r4 > 0) {
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (temp_r4 - 1);
    }
    OSRestoreInterrupts((long)(0));
}

s32 fn_800A9FD4(void *arg0, u32 arg1) {
    u32 temp_r31;

    if (arg1 <= (u32) M2C_FIELD(arg0, u32 *, 0x394)) {
        return 1;
    }
    temp_r31 = (arg1 + 0x7FFF) & 0xFFFF8000;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x398) != 0U) {
        fn_800A8D20();
        M2C_FIELD(arg0, u32 *, 0x398) = 0U;
        M2C_FIELD(arg0, u32 *, 0x394) = 0U;
    }
    M2C_FIELD(arg0, u32 *, 0x398) = fn_800A8CF8(temp_r31);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x398) == 0U) {
        return 0;
    }
    M2C_FIELD(arg0, u32 *, 0x394) = temp_r31;
    return 1;
}

s32 fn_800AA064(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0) {
    s32 spA;
    s32 spC;
    u16 sp8;
    u16 *temp_r25;
    u32 temp_r0;
    u32 temp_r24;
    u32 var_r31;

    temp_r0 = M2C_FIELD(arg0, u32 *, 0x3AC);
    switch (temp_r0) {                              /* irregular */
    case 4:
        M2C_FIELD(arg0, s32 *, 0x3BC) = 1;
        break;
    case 3:
        M2C_FIELD(arg0, s32 *, 0x3BC) = 1;
        break;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x3BC) = 1;
        break;
    case 7:
        M2C_FIELD(arg0, s32 *, 0x3BC) = 1;
        break;
    default:
        M2C_FIELD(arg0, s32 *, 0x3BC) = 0;
        break;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x3C8) != 0) || ((s32) lbl_80350778 != 0)) {
        M2C_FIELD(arg0, s32 *, 0x3BC) = 1;
    }
    var_r31 = 0;
    temp_r24 = M2C_FIELD(arg1, s32 *, 8) + M2C_FIELD(arg1, s32 *, 0xC);
loop_38:
    if (var_r31 >= temp_r24) {
        goto block_39;
    }
    var_r31 += 1;
    if ((s32) lbl_80350770 != 0) {
        return 0;
    }
    if ((s32) lbl_80350778 != 0) {
        return 0;
    }
    if (fn_800AB634(&sp8, 8, M2C_FIELD(arg0, s32 *, 0)) <= 0) {
        return 0;
    }
    if (fn_800A9FD4(arg0, spC) == 0) {
        return 0;
    }
    temp_r25 = M2C_FIELD(arg0, u16 **, 0x398);
    if (fn_800AB634(temp_r25, spC, M2C_FIELD(arg0, s32 *, 0)) <= 0) {
        return 0;
    }
    if (sp8 == 1) {
        fn_800A99CC(arg0);
        if (0 /* draft: did not compile */) {
            return 0;
        }
        if (fn_800A9C7C(arg0) != 0) {
            return 0;
        }
        goto block_30;
    }
    if (sp8 == 0) {
        /* draft: did not compile: fn_800A9E74(arg0, &sp8, temp_r25); */
    }
block_30:
    if ((var_r31 < 4U) || (var_r31 & 1) || ((s32) M2C_FIELD(arg0, s32 *, 0x3BC) == 0)) {
        if (!(var_r31 & 1)) {
            if (((s32) M2C_FIELD(arg0, s32 *, 0x3B8) == 0) && ((u32) M2C_FIELD(arg0, u32 *, 0x3AC) == 1U)) {
                fn_800A9F10(arg0);
            }
            M2C_FIELD(arg0, s32 *, 0x3B8) = 0;
        }
        goto loop_38;
    }
block_39:
    return 1;
}

#pragma push
#pragma dont_inline on
s32 fn_800AA28C(void *arg0, M2C_UNK arg_sp0) {
    int spC;
    s32 sp10;
    s32 sp8;
    u8 temp_r25;
    int temp_r26;
    s32 temp_r27;
    s32 var_r27;
    u32 var_r29;
    s32 var_r28;
    u32 temp_r0;
    u32 temp_r30;

    temp_r30 = M2C_FIELD(arg0, u32 *, 0x1C);
    lbl_80350780 = temp_r30;
    M2C_FIELD(arg0, s32 *, 0x3FC) = (s32) M2C_FIELD(arg0, s32 *, 0x28);
    M2C_FIELD(arg0, s32 *, 0x3EC) = 0;
    M2C_FIELD(arg0, s32 *, 0x3E8) = 0;
    M2C_FIELD(arg0, s32 *, 0x3F4) = 0;
    M2C_FIELD(arg0, s32 *, 0x3F0) = 0;
loop_1:
    if ((u32) M2C_FIELD(arg0, u32 *, 0x3AC) == 9U) {
        fn_800AB7B0(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 0x3CC));
        var_r29 = M2C_FIELD(arg0, u32 *, 0x3D0);
        var_r28 = M2C_FIELD(arg0, s32 *, 0x3D4);
        var_r27 = 0;
        M2C_FIELD(arg0, u32 *, 0x3AC) = 0U;
    } else {
        fn_800AB7B0(M2C_FIELD(arg0, s32 *, 0), 0x44);
        var_r29 = 0U;
        var_r28 = 0;
        var_r27 = 0;
    }
loop_32:
    if ((var_r29 < temp_r30) && ((s32) M2C_FIELD(arg0, s32 *, 0x3C8) == 0) && ((s32) lbl_80350770 == 0) && ((s32) lbl_80350778 == 0)) {
        temp_r26 = fn_800AB8DC(M2C_FIELD(arg0, s32 *, 0));
        if (fn_800AB634(&sp8, 0x14, M2C_FIELD(arg0, s32 *, 0)) > 0) {
            if (var_r27 < 0) {
                var_r28 -= sp10;
            }
            temp_r25 = temp_r26 - sp8;
            temp_r27 = temp_r26 + (spC + 0x14);
            if (((M2C_FIELD(arg0, u32 *, 0x3AC)) == 7U) || (fn_800AA064((void *)((s32)arg0), (void *)(&sp8), (long)(temp_r26), (long)(var_r29), (long)(var_r28), (long)(0)) != 0)) {
                switch ((s32) (M2C_FIELD(arg0, u32 *, 0x3AC))) {           /* irregular */
                case 4:
                    if (var_r29 == 0U) {
                        M2C_FIELD(arg0, u32 *, 0x3AC) = 2U;
                        fn_800AB7B0(M2C_FIELD(arg0, s32 *, 0), temp_r26);
                        var_r27 = 0;
                    } else {
                        fn_800AB7B0(M2C_FIELD(arg0, s32 *, 0), temp_r25);
                        var_r27 = -1;
                        var_r29 -= 1;
                    }
                    break;
                case 3:
                    if ((u32) (var_r29 + 1) == temp_r30) {
                        M2C_FIELD(arg0, u32 *, 0x3AC) = 2U;
                        fn_800AB7B0(M2C_FIELD(arg0, s32 *, 0), temp_r26);
                        var_r27 = 0;
                    } else {
                        fn_800AB7B0(M2C_FIELD(arg0, s32 *, 0), temp_r27);
                        var_r27 = 0;
                        var_r29 += 1;
                        var_r28 += sp10;
                    }
                    break;
                case 7:
                    temp_r0 = M2C_FIELD(arg0, u32 *, 0x3B0);
                    if (var_r29 < temp_r0) {
                        fn_800AB7B0(M2C_FIELD(arg0, s32 *, 0), temp_r27);
                        var_r27 = 0;
                        var_r29 += 1;
                        var_r28 += sp10;
                    } else if (var_r29 > temp_r0) {
                        fn_800AB7B0(M2C_FIELD(arg0, s32 *, 0), temp_r25);
                        var_r27 = -1;
                        var_r29 -= 1;
                    } else {
                        fn_800AB7B0(M2C_FIELD(arg0, s32 *, 0), temp_r26);
                        var_r27 = 0;
                    }
                    if (var_r29 == (u32) M2C_FIELD(arg0, u32 *, 0x3B0)) {
                        M2C_FIELD(arg0, s32 *, 0x3C4) = 0;
                        M2C_FIELD(arg0, u32 *, 0x3AC) = 0U;
                    }
                    break;
                case 2:
                    fn_800AB7B0(M2C_FIELD(arg0, s32 *, 0), temp_r26);
                    fn_800A9F10(arg0);
                    var_r27 = 0;
                    break;
                default:
                    fn_800AB7B0(M2C_FIELD(arg0, s32 *, 0), temp_r27);
                    var_r27 = 0;
                    var_r29 += 1;
                    var_r28 += sp10;
                    break;
                }
                lbl_8035077C = var_r29;
                goto loop_32;
            }
        }
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x3A8) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x3C8) == 0) && ((s32) lbl_80350770 == 0) && ((s32) lbl_80350778 == 0)) {
        goto loop_1;
    }
    fn_800A9C7C(arg0);
    M2C_FIELD(arg0, s32 *, 0x454) = fn_800A94D8(M2C_FIELD(arg0, s32 *, 0x64));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x68) == 0U) {
        M2C_FIELD(arg0, s32 *, 0x458) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0x458) = fn_800A9088((unsigned long)(0));
    }
    M2C_FIELD(arg0, s32 *, 0x3A4) = 0;
    M2C_FIELD(arg0, s32 *, 0x39C) = 1;
    if (((s32) (u16)M2C_FIELD(arg0, s32 *, 0x39C) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x3C8) == 0) && ((s32) lbl_80350770 == 0) && ((s32) lbl_80350778 == 0)) {
loop_47:
        if (fn_800A94A0(M2C_FIELD(arg0, s32 *, 0x64)) != 0U) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x3C8) == 0) {
                goto loop_47;
            }
        }
        if (((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) && ((s32) (u16)M2C_FIELD(arg0, s32 *, 0x3C8) == 0)) {
loop_51:
            if (fn_800A9050(M2C_FIELD(arg0, u32 *, 0x68)) != 0U) {
                if ((s32) M2C_FIELD(arg0, s32 *, 0x3C8) == 0) {
                    goto loop_51;
                }
            }
        }
    }
    M2C_FIELD(arg0, s32 *, 0x39C) = 0;
loop_54:
    if ((fn_800AB5FC(M2C_FIELD(arg0, s32 *, 0)) != 0) && ((s32) lbl_80350770 == 0)) {
        if ((s32) lbl_80350778 == 0) {
            goto loop_54;
        }
    }
    M2C_FIELD(arg0, s32 *, 0x3A0) = 0;
    return 0;
}
#pragma pop

s32 fn_800AA658(void *arg0, s32 *arg1) {
    s32 var_r31;

    var_r31 = 1;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x398) != 0U) {
        fn_800A8D20();
        M2C_FIELD(arg0, u32 *, 0x398) = 0U;
        M2C_FIELD(arg0, s32 *, 0x394) = 0;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0) != 0U) {
        if (fn_800AB8E4() == -1) {
            if (arg1 != NULL) {
                *arg1 = 0xC;
            }
            var_r31 = 0;
        }
        fn_800AB574(M2C_FIELD(arg0, u32 *, 0));
        M2C_FIELD(arg0, u32 *, 0) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x60) != 0U) {
        fn_800A8D20();
        M2C_FIELD(arg0, u32 *, 0x60) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x64) != 0U) {
        fn_800A91FC();
        M2C_FIELD(arg0, u32 *, 0x64) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
        fn_800A8E64();
        M2C_FIELD(arg0, u32 *, 0x68) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x6C) != 0U) {
        fn_80135BC0();
        M2C_FIELD(arg0, u32 *, 0x6C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x390) != 0U) {
        fn_800A8D20();
        M2C_FIELD(arg0, u32 *, 0x390) = 0U;
    }
    fn_800A8D20(arg0);
    fn_800A9510();
    return var_r31;
}

void *fn_800AA778(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 *arg7, M2C_UNK arg_sp0, u32 arg_sp8) { } /* draft: stub */

void fn_800AABE0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3A8) = arg1;
}

s32 fn_800AABE8(void *arg0, s32 *arg1) {
    M2C_UNK sp8;
    s32 var_r31;

    var_r31 = 1;
    M2C_FIELD(arg0, s32 *, 0x3C8) = 1;
    M2C_FIELD(arg0, s32 *, 0x3BC) = 1;
    /* draft: did not compile: fn_800C9448(arg0 + 0x78, &sp8); */
    if (fn_800AA658(arg0, arg1) == 0) {
        var_r31 = 0;
    }
    if ((s32) lbl_80350770 != 0) {
        if (arg1 != NULL) {
            *arg1 = 0xD;
        }
        var_r31 = 0;
    }
    return var_r31;
}

s32 fn_800AAC7C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3B4) = arg1;
    return 1;
}

s32 fn_800AAC88(s32 arg0) {
    OSResumeThread(arg0 + 0x78);
    return 1;
}

s32 fn_800AACB0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg0, s32 *, 0x3AC) = 9;
    M2C_FIELD(arg0, s32 *, 0x3CC) = arg1;
    M2C_FIELD(arg0, s32 *, 0x3D0) = arg2;
    M2C_FIELD(arg0, s32 *, 0x3D4) = arg3;
    M2C_FIELD(arg0, s32 *, 0x3D8) = arg4;
    /* draft: did not compile: OSResumeThread(arg0 + 0x78, arg0); */
    return 1;
}

s32 fn_800AACF4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x3A0);
}

s32 fn_800AACFC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x28);
}

s32 fn_800AAD04(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x54);
}

s32 fn_800AAD0C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x58);
}

s32 fn_800AAD14(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x44);
}

s32 fn_800AAD1C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

void fn_800AAD24(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
}

s32 fn_800AAD2C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C);
}

s32 fn_800AAD34(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x20);
}

s32 fn_800AAD3C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}

s32 fn_800AAD44(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x28);
}

u32 fn_800AAD4C(void *arg0) {
    u32 temp_r3;
    u32 var_r31;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x3A4) != 0) {
        return 0U;
    }
    if (((s32) lbl_80350770 == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x3C8) == 0)) {
        if ((s32) lbl_80350778 != 0) {
            goto loop_7;
        }
        var_r31 = fn_800A9424(M2C_FIELD(arg0, s32 *, 0x64));
        if ((var_r31 != 0U) && ((s32) (u16)M2C_FIELD(arg0, s32 *, 0x3C4) != 0)) {
loop_13:
            temp_r3 = fn_800A9424(M2C_FIELD(arg0, s32 *, 0x64));
            if (temp_r3 != 0U) {
                /* draft: did not compile: fn_800AAD24(var_r31, 0); */
                var_r31 = temp_r3;
                goto loop_13;
            }
        }
        if (var_r31 == 0U) {
            M2C_FIELD(arg0, s32 *, 0x45C) = (s32) (M2C_FIELD(arg0, s32 *, 0x45C) + 1);
        }
    } else {
loop_7:
        var_r31 = fn_800A9424(M2C_FIELD(arg0, s32 *, 0x64));
        if (var_r31 != 0U) {
            /* draft: did not compile: fn_800AAD24(var_r31, 0); */
            goto loop_7;
        }
    }
    return var_r31;
}
