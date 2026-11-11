/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_80062B78(s32 *);
M2C_UNK fn_80063040(void *);
extern M2C_UNK fn_80063408;
extern M2C_UNK fn_80063A1C;

void fn_80062BA8(void *arg0);
void fn_80062BD4(void *arg0);
void fn_80062C00(void *arg0);
void fn_80062C2C(void);
void fn_80062C30(void *arg0);
void fn_80062C3C(void *arg0);
void fn_80062C48(void *arg0);
void fn_80062C54(void *arg0);
void fn_80062C60(void);
void fn_80062C64(void *arg0);
void fn_80062C70(void *arg0);
void fn_80062C7C(void *arg0);
void fn_80062C88(void *arg0);
void fn_80062C94(void);
void fn_80062C98(void *arg0);
void fn_80062CA4(void *arg0);
void fn_80062CB0(void *arg0);
void fn_80062CBC(void *arg0);
void fn_80062CC8(void);
void fn_80062CCC(void *arg0);
void fn_80062CEC(void *arg0);
void fn_80062D0C(void *arg0);
void fn_80062D2C(void *arg0);
void fn_80062D4C(void *arg0);
void fn_80062D58(void *arg0);
void fn_80062D64(void *arg0);
void fn_80062D70(void *arg0);
void fn_80062D7C(void *arg0);
void fn_80062D88(void *arg0);
void fn_80062D94(void *arg1);
void fn_80062E1C(void *arg0);
void fn_80062EA4(void *arg0);

void fn_80062BA8(void *arg0) {
    s32 sp8;

    sp8 = M2C_FIELD(arg0, s32 *, 0x10);
    fn_80062B78(&sp8);
}

void fn_80062BD4(void *arg0) {
    s32 sp8;

    sp8 = M2C_FIELD(arg0, s32 *, 0x14);
    fn_80062B78(&sp8);
}

void fn_80062C00(void *arg0) {
    s32 sp8;

    sp8 = M2C_FIELD(arg0, s32 *, 0x18);
    fn_80062B78(&sp8);
}

void fn_80062C2C(void) {

}

void fn_80062C30(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0xE) = (u16) M2C_FIELD(arg0, u16 *, 0x12);
}

void fn_80062C3C(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0xE) = (u16) M2C_FIELD(arg0, u16 *, 0x16);
}

void fn_80062C48(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0xE) = (u16) M2C_FIELD(arg0, u16 *, 0x1A);
}

void fn_80062C54(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x12) = (u16) M2C_FIELD(arg0, u16 *, 0xE);
}

void fn_80062C60(void) {

}

void fn_80062C64(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x12) = (u16) M2C_FIELD(arg0, u16 *, 0x16);
}

void fn_80062C70(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x12) = (u16) M2C_FIELD(arg0, u16 *, 0x1A);
}

void fn_80062C7C(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x16) = (u16) M2C_FIELD(arg0, u16 *, 0xE);
}

void fn_80062C88(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x16) = (u16) M2C_FIELD(arg0, u16 *, 0x12);
}

void fn_80062C94(void) {

}

void fn_80062C98(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x16) = (u16) M2C_FIELD(arg0, u16 *, 0x1A);
}

void fn_80062CA4(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x1A) = (u16) M2C_FIELD(arg0, u16 *, 0xE);
}

void fn_80062CB0(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x1A) = (u16) M2C_FIELD(arg0, u16 *, 0x12);
}

void fn_80062CBC(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x1A) = (u16) M2C_FIELD(arg0, u16 *, 0x16);
}

void fn_80062CC8(void) {

}

void fn_80062CCC(void *arg0) {
    u16 var_r0;
    u16 temp_r4;

    var_r0 = M2C_FIELD(arg0, u16 *, 0xE);
    M2C_FIELD(arg0, u16 *, 0x26) = var_r0;
    temp_r4 = M2C_FIELD(arg0, u16 *, 0x2E);
    if ((s32) temp_r4 <= (s32) var_r0) {
        var_r0 = temp_r4;
    }
    M2C_FIELD(arg0, u16 *, 0x2E) = var_r0;
}

void fn_80062CEC(void *arg0) {
    u16 var_r0;
    u16 temp_r4;

    var_r0 = M2C_FIELD(arg0, u16 *, 0x12);
    M2C_FIELD(arg0, u16 *, 0x26) = var_r0;
    temp_r4 = M2C_FIELD(arg0, u16 *, 0x2E);
    if ((s32) temp_r4 <= (s32) var_r0) {
        var_r0 = temp_r4;
    }
    M2C_FIELD(arg0, u16 *, 0x2E) = var_r0;
}

void fn_80062D0C(void *arg0) {
    u16 var_r0;
    u16 temp_r4;

    var_r0 = M2C_FIELD(arg0, u16 *, 0x16);
    M2C_FIELD(arg0, u16 *, 0x26) = var_r0;
    temp_r4 = M2C_FIELD(arg0, u16 *, 0x2E);
    if ((s32) temp_r4 <= (s32) var_r0) {
        var_r0 = temp_r4;
    }
    M2C_FIELD(arg0, u16 *, 0x2E) = var_r0;
}

void fn_80062D2C(void *arg0) {
    u16 var_r0;
    u16 temp_r4;

    var_r0 = M2C_FIELD(arg0, u16 *, 0x1A);
    M2C_FIELD(arg0, u16 *, 0x26) = var_r0;
    temp_r4 = M2C_FIELD(arg0, u16 *, 0x2E);
    if ((s32) temp_r4 <= (s32) var_r0) {
        var_r0 = temp_r4;
    }
    M2C_FIELD(arg0, u16 *, 0x2E) = var_r0;
}

void fn_80062D4C(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x12) = (u16) M2C_FIELD(arg0, u16 *, 0x26);
}

void fn_80062D58(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x12) = (u16) M2C_FIELD(arg0, u16 *, 0x1E);
}

void fn_80062D64(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0xE) = (u16) M2C_FIELD(arg0, u16 *, 0x26);
}

void fn_80062D70(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0xE) = (u16) M2C_FIELD(arg0, u16 *, 0x1E);
}

void fn_80062D7C(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x16) = (u16) M2C_FIELD(arg0, u16 *, 0x26);
}

void fn_80062D88(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x1A) = (u16) M2C_FIELD(arg0, u16 *, 0x26);
}

void fn_80062D94(void *arg1) {
    u8 temp_r6;
    u8 temp_r6_2;
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg1, void **, 0xC);
    M2C_FIELD(temp_r3, u8 *, 5) = (u8) (M2C_FIELD(temp_r3, u8 *, 5) ^ 4);
    temp_r6 = M2C_FIELD((M2C_FIELD(arg1, void **, 8)), u8 *, 2);
    if (((M2C_FIELD((M2C_FIELD(arg1, void **, 8)), u8 *, 0) & ~temp_r6) | (M2C_FIELD((M2C_FIELD(arg1, void **, 8)), u8 *, 1) & temp_r6)) & 8) {
        temp_r6_2 = M2C_FIELD((M2C_FIELD(arg1, void **, 0xC)), u8 *, 2);
        if (((M2C_FIELD((M2C_FIELD(arg1, void **, 0xC)), u8 *, 0) & ~temp_r6_2) | (M2C_FIELD((M2C_FIELD(arg1, void **, 0xC)), u8 *, 1) & temp_r6_2)) & 4) {
            fn_80063040(arg1);
            return;
        }
        fn_80062E1C(arg1);
    }
}

void fn_80062E1C(void *arg0) {
    u8 temp_r5;
    void *temp_r5_2;
    void *temp_r6;

    if ((u32) M2C_FIELD(arg0, u32 *, 0) != 0U) {
        temp_r6 = M2C_FIELD(arg0, void **, 0xC);
        temp_r5 = M2C_FIELD(temp_r6, u8 *, 2);
        if (((M2C_FIELD(temp_r6, u8 *, 0) & ~temp_r5) | (M2C_FIELD(temp_r6, u8 *, 1) & temp_r5)) & 4) {
            M2C_FIELD(temp_r6, u8 *, 5) = (u8) (M2C_FIELD(temp_r6, u8 *, 5) | 4);
        } else {
            M2C_FIELD(temp_r6, u8 *, 5) = (u8) (M2C_FIELD(temp_r6, u8 *, 5) & 0xFFFFFFFB);
        }
        temp_r5_2 = M2C_FIELD(arg0, void **, 0xC);
        /* draft: did not compile: M2C_FIELD(temp_r5_2, M2C_UNK (**)(), 0x18) = fn_80062D94; */
        M2C_FIELD(temp_r5_2, void **, 0x38) = arg0;
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        fn_80062EA4((void *)((u16)fn_80062D94));
    }
}

void fn_80062EA4(void *arg0) { } /* draft: stub */
