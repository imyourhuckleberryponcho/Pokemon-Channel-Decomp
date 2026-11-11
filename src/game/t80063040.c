/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

extern M2C_UNK fn_80062D94;
M2C_UNK fn_80062EA4();
M2C_UNK fn_80067A9C();

void fn_80063040(void *arg0, M2C_UNK arg_sp0);
void fn_80063238(s32 arg1);
void fn_8006325C(void *arg0);
void fn_80063408(s32 arg1);
void fn_8006342C(void *arg0, M2C_UNK arg_sp0);
void fn_8006364C(void *arg0, s32 arg1, M2C_UNK arg_sp0);
void fn_80063948(s32 arg1);
void fn_8006396C(void *arg0);
void fn_80063A1C(s32 arg1);
void fn_80063A40(void *arg0, M2C_UNK arg_sp0);
void fn_80063C7C(void);
void fn_80063C9C(s32 arg0, s32 arg1);
void fn_80063CCC(void *arg0, void *arg1);

void fn_80063040(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80063238(s32 arg1) {
    /* draft: did not compile: fn_8006325C(arg1); */
}

void fn_8006325C(void *arg0) {
    M2C_UNK (*var_r4)();
    M2C_UNK (*var_r4_2)();
    M2C_UNK (*var_r4_3)();
    M2C_UNK (*var_r4_4)();
    u8 temp_r5;
    u8 temp_r5_4;
    u8 temp_r7;
    void *temp_r5_3;
    void *temp_r5_6;
    void *temp_r6;
    void *temp_r6_2;
    void *temp_r6_3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        M2C_FIELD(arg0, u8 *, 0x20) = (u8) ((M2C_FIELD(arg0, u8 *, 0x20) * 2) & 0xFE);
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) - 1);
        temp_r6 = M2C_FIELD(arg0, void **, 0xC);
        temp_r7 = M2C_FIELD(temp_r6, u8 *, 2);
        M2C_FIELD(arg0, u8 *, 0x20) = (u8) (M2C_FIELD(arg0, u8 *, 0x20) + ((((M2C_FIELD(temp_r6, u8 *, 0) & ~temp_r7) | (M2C_FIELD(temp_r6, u8 *, 1) & temp_r7)) & 4) != 0));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
            temp_r6_2 = M2C_FIELD(arg0, void **, 8);
            temp_r5 = M2C_FIELD(temp_r6_2, u8 *, 2);
            if (((M2C_FIELD(temp_r6_2, u8 *, 0) & ~temp_r5) | (M2C_FIELD(temp_r6_2, u8 *, 1) & temp_r5)) & 8) {
                /* draft: did not compile: var_r4 = fn_80063408; */
                M2C_FIELD(temp_r6_2, u8 *, 5) = (u8) (M2C_FIELD(temp_r6_2, u8 *, 5) | 8);
                if (M2C_FIELD(arg0, s32 *, 0x14) & 1) {
                    /* draft: did not compile: var_r4 = fn_80063A1C; */
                }
                M2C_FIELD((M2C_FIELD(arg0, void **, 8)), M2C_UNK (**)(), 0x1C) = var_r4;
                M2C_FIELD((M2C_FIELD(arg0, void **, 8)), void **, 0x3C) = arg0;
                return;
            }
            /* draft: did not compile: var_r4_2 = fn_80063238; */
            M2C_FIELD(temp_r6_2, u8 *, 5) = (u8) (M2C_FIELD(temp_r6_2, u8 *, 5) & 0xFFFFFFF7);
            if (M2C_FIELD(arg0, s32 *, 0x14) & 1) {
                /* draft: did not compile: var_r4_2 = fn_80063948; */
            }
            temp_r5_3 = M2C_FIELD(arg0, void **, 8);
            M2C_FIELD(temp_r5_3, M2C_UNK (**)(), 0x1C) = var_r4_2;
            M2C_FIELD(temp_r5_3, void **, 0x3C) = arg0;
        }
    } else {
        temp_r6_3 = M2C_FIELD(arg0, void **, 8);
        temp_r5_4 = M2C_FIELD(temp_r6_3, u8 *, 2);
        if (((M2C_FIELD(temp_r6_3, u8 *, 0) & ~temp_r5_4) | (M2C_FIELD(temp_r6_3, u8 *, 1) & temp_r5_4)) & 8) {
            /* draft: did not compile: var_r4_3 = fn_80063408; */
            M2C_FIELD(temp_r6_3, u8 *, 5) = (u8) (M2C_FIELD(temp_r6_3, u8 *, 5) | 8);
            if (M2C_FIELD(arg0, s32 *, 0x14) & 1) {
                /* draft: did not compile: var_r4_3 = fn_80063A1C; */
            }
            M2C_FIELD((M2C_FIELD(arg0, void **, 8)), M2C_UNK (**)(), 0x1C) = var_r4_3;
            M2C_FIELD((M2C_FIELD(arg0, void **, 8)), void **, 0x3C) = arg0;
        } else {
            /* draft: did not compile: var_r4_4 = fn_80063238; */
            M2C_FIELD(temp_r6_3, u8 *, 5) = (u8) (M2C_FIELD(temp_r6_3, u8 *, 5) & 0xFFFFFFF7);
            if (M2C_FIELD(arg0, s32 *, 0x14) & 1) {
                /* draft: did not compile: var_r4_4 = fn_80063948; */
            }
            temp_r5_6 = M2C_FIELD(arg0, void **, 8);
            M2C_FIELD(temp_r5_6, M2C_UNK (**)(), 0x1C) = var_r4_4;
            M2C_FIELD(temp_r5_6, void **, 0x3C) = arg0;
        }
        fn_80062EA4();
    }
}

void fn_80063408(s32 arg1) {
    /* draft: did not compile: fn_8006342C(arg1); */
}

void fn_8006342C(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8006364C(void *arg0, s32 arg1, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80063948(s32 arg1) {
    /* draft: did not compile: fn_8006396C(arg1); */
}

void fn_8006396C(void *arg0) {
    M2C_UNK (*var_r4)();
    M2C_UNK (*var_r4_2)();
    u8 temp_r5;
    void *temp_r5_3;
    void *temp_r6;

    temp_r6 = M2C_FIELD(arg0, void **, 8);
    temp_r5 = M2C_FIELD(temp_r6, u8 *, 2);
    if (((M2C_FIELD(temp_r6, u8 *, 0) & ~temp_r5) | (M2C_FIELD(temp_r6, u8 *, 1) & temp_r5)) & 8) {
        /* draft: did not compile: var_r4 = fn_80063408; */
        M2C_FIELD(temp_r6, u8 *, 5) = (u8) (M2C_FIELD(temp_r6, u8 *, 5) | 8);
        if (M2C_FIELD(arg0, s32 *, 0x14) & 1) {
            /* draft: did not compile: var_r4 = fn_80063A1C; */
        }
        M2C_FIELD((M2C_FIELD(arg0, void **, 8)), M2C_UNK (**)(), 0x1C) = var_r4;
        M2C_FIELD((M2C_FIELD(arg0, void **, 8)), void **, 0x3C) = arg0;
    } else {
        /* draft: did not compile: var_r4_2 = fn_80063238; */
        M2C_FIELD(temp_r6, u8 *, 5) = (u8) (M2C_FIELD(temp_r6, u8 *, 5) & 0xFFFFFFF7);
        if (M2C_FIELD(arg0, s32 *, 0x14) & 1) {
            /* draft: did not compile: var_r4_2 = fn_80063948; */
        }
        temp_r5_3 = M2C_FIELD(arg0, void **, 8);
        M2C_FIELD(temp_r5_3, M2C_UNK (**)(), 0x1C) = var_r4_2;
        M2C_FIELD(temp_r5_3, void **, 0x3C) = arg0;
    }
    fn_80062EA4();
}

void fn_80063A1C(s32 arg1) {
    /* draft: did not compile: fn_80063A40(arg1); */
}

void fn_80063A40(void *arg0, M2C_UNK arg_sp0) {
    M2C_UNK (*temp_r12)(void *, s32);
    M2C_UNK (*temp_r12_2)(void *, s32);
    M2C_UNK (*var_r3)();
    M2C_UNK (*var_r3_2)();
    s32 var_r26;
    s8 var_r27;
    s32 var_r27_2;
    s32 var_r28;
    s32 temp_r0;
    u8 temp_r3;
    u8 temp_r4;
    u8 temp_r5;
    u8 temp_r5_2;
    void *temp_r31;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r5_3;
    void *var_r25;
    void *var_r25_2;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        /* draft: did not compile: fn_8006364C(M2C_FIELD(arg0, u8 *, 0x20) & 0x80); */
        M2C_FIELD(arg0, u8 *, 0x20) = (u8) ((M2C_FIELD(arg0, u8 *, 0x20) * 2) & 0xFE);
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) - 1);
        return;
    }
    temp_r31 = M2C_FIELD(arg0, void **, 0x10);
    temp_r5 = M2C_FIELD(temp_r31, u8 *, 2);
    temp_r5_2 = M2C_FIELD(temp_r31, u8 *, 2);
    temp_r0 = (M2C_FIELD(temp_r31, u8 *, 0) & ~temp_r5_2) | (M2C_FIELD(temp_r31, u8 *, 1) & temp_r5_2);
    M2C_FIELD(temp_r31, u8 *, 2) = (u8) (temp_r5 | 4);
    temp_r3 = (u8) ((M2C_FIELD(temp_r31, u8 *, 0) & ~temp_r5) | (M2C_FIELD(temp_r31, u8 *, 1) & temp_r5)) ^ temp_r0;
    if (temp_r3 != 0) {
        if (((u32) M2C_FIELD(temp_r31, u32 *, 0x50) != 0U) && (((M2C_UNK (*)(u32)) M2C_FIELD(temp_r31, M2C_UNK (**)(u32), 0x54)) != NULL)) {
            var_r25 = temp_r31;
            var_r26 = 0;
            var_r27 = 1;
            do {
                if (temp_r3 & var_r27) {
                    if (0 /* draft: did not compile */) {
                        M2C_FIELD(temp_r31, M2C_UNK (**)(u32), 0x54)(M2C_FIELD(temp_r31, u32 *, 0x50));
                    }
                    temp_r12 = M2C_FIELD(var_r25, M2C_UNK (**)(void *, s32), 0x10);
                    if ((temp_r12 != NULL) && (var_r27 & (temp_r0 ^ M2C_FIELD(temp_r31, u8 *, 5)))) {
                        temp_r12(temp_r31, M2C_FIELD(var_r25, s32 *, 0x30));
                    }
                }
                var_r26 += 1;
                var_r27 *= 2;
                /* draft: did not compile: var_r25 += 4; */
            } while (var_r26 < 8);
        } else {
            var_r25_2 = temp_r31;
            var_r27_2 = 0;
            var_r28 = 1;
            do {
                if (temp_r3 & var_r28) {
                    temp_r12_2 = M2C_FIELD(var_r25_2, M2C_UNK (**)(void *, s32), 0x10);
                    if ((temp_r12_2 != NULL) && (var_r28 & (temp_r0 ^ M2C_FIELD(temp_r31, u8 *, 5)))) {
                        temp_r12_2(temp_r31, M2C_FIELD(var_r25_2, s32 *, 0x30));
                    }
                }
                var_r27_2 += 1;
                var_r28 *= 2;
                /* draft: did not compile: var_r25_2 += 4; */
            } while (var_r27_2 < 8);
        }
    }
    temp_r5_3 = M2C_FIELD(arg0, void **, 8);
    temp_r4 = M2C_FIELD(temp_r5_3, u8 *, 2);
    if (((M2C_FIELD(temp_r5_3, u8 *, 0) & ~temp_r4) | (M2C_FIELD(temp_r5_3, u8 *, 1) & temp_r4)) & 8) {
        /* draft: did not compile: var_r3 = fn_80063408; */
        M2C_FIELD(temp_r5_3, u8 *, 5) = (u8) (M2C_FIELD(temp_r5_3, u8 *, 5) | 8);
        if (M2C_FIELD(arg0, s32 *, 0x14) & 1) {
            /* draft: did not compile: var_r3 = fn_80063A1C; */
        }
        temp_r4_2 = M2C_FIELD(arg0, void **, 8);
        M2C_FIELD(temp_r4_2, M2C_UNK (**)(), 0x1C) = var_r3;
        M2C_FIELD(temp_r4_2, void **, 0x3C) = arg0;
        return;
    }
    /* draft: did not compile: var_r3_2 = fn_80063238; */
    M2C_FIELD(temp_r5_3, u8 *, 5) = (u8) (M2C_FIELD(temp_r5_3, u8 *, 5) & 0xFFFFFFF7);
    if (M2C_FIELD(arg0, s32 *, 0x14) & 1) {
        /* draft: did not compile: var_r3_2 = fn_80063948; */
    }
    temp_r4_3 = M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(temp_r4_3, M2C_UNK (**)(), 0x1C) = var_r3_2;
    M2C_FIELD(temp_r4_3, void **, 0x3C) = arg0;
}

void fn_80063C7C(void) {
    fn_80067A9C();
}

void fn_80063C9C(s32 arg0, s32 arg1) {
    s32 *var_r3;
    s32 *var_r4;
    s32 temp_cr0_eq;
    s32 var_r5;

    /* draft: did not compile: var_r4 = arg1 + 0x40; */
    /* draft: did not compile: var_r3 = arg0 + 0x40; */
    var_r5 = 0x10;
loop_2:
    temp_cr0_eq = var_r5 == 0;
    var_r5 -= 1;
    var_r4 -= 4;
    var_r3 -= 4;
    if (temp_cr0_eq == 0) {
        *var_r3 = *var_r4;
        goto loop_2;
    }
}

void fn_80063CCC(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u8 *, 0x27) = (u8) M2C_FIELD(arg1, u8 *, 0);
    M2C_FIELD(arg0, u8 *, 0x26) = (u8) M2C_FIELD(arg1, u8 *, 1);
    M2C_FIELD(arg0, u8 *, 0x25) = (u8) M2C_FIELD(arg1, u8 *, 2);
    M2C_FIELD(arg0, u8 *, 0x24) = (u8) M2C_FIELD(arg1, u8 *, 3);
    M2C_FIELD(arg0, u8 *, 0x23) = (u8) M2C_FIELD(arg1, u8 *, 4);
    M2C_FIELD(arg0, u8 *, 0x22) = (u8) M2C_FIELD(arg1, u8 *, 5);
    M2C_FIELD(arg0, u8 *, 0x21) = (u8) M2C_FIELD(arg1, u8 *, 6);
    M2C_FIELD(arg0, u8 *, 0x20) = (u8) M2C_FIELD(arg1, u8 *, 7);
    M2C_FIELD(arg0, u8 *, 0x2F) = (u8) M2C_FIELD(arg1, u8 *, 8);
    M2C_FIELD(arg0, u8 *, 0x2E) = (u8) M2C_FIELD(arg1, u8 *, 9);
    M2C_FIELD(arg0, u8 *, 0x2D) = (u8) M2C_FIELD(arg1, u8 *, 0xA);
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) M2C_FIELD(arg1, u8 *, 0xB);
    M2C_FIELD(arg0, u8 *, 0x2B) = (u8) M2C_FIELD(arg1, u8 *, 0xC);
    M2C_FIELD(arg0, u8 *, 0x2A) = (u8) M2C_FIELD(arg1, u8 *, 0xD);
    M2C_FIELD(arg0, u8 *, 0x29) = (u8) M2C_FIELD(arg1, u8 *, 0xE);
    M2C_FIELD(arg0, u8 *, 0x28) = (u8) M2C_FIELD(arg1, u8 *, 0xF);
    M2C_FIELD(arg0, u8 *, 0x37) = (u8) M2C_FIELD(arg1, u8 *, 0x10);
    M2C_FIELD(arg0, u8 *, 0x36) = (u8) M2C_FIELD(arg1, u8 *, 0x11);
    M2C_FIELD(arg0, u8 *, 0x35) = (u8) M2C_FIELD(arg1, u8 *, 0x12);
    M2C_FIELD(arg0, u8 *, 0x34) = (u8) M2C_FIELD(arg1, u8 *, 0x13);
    M2C_FIELD(arg0, u8 *, 0x33) = (u8) M2C_FIELD(arg1, u8 *, 0x14);
    M2C_FIELD(arg0, u8 *, 0x32) = (u8) M2C_FIELD(arg1, u8 *, 0x15);
    M2C_FIELD(arg0, u8 *, 0x31) = (u8) M2C_FIELD(arg1, u8 *, 0x16);
    M2C_FIELD(arg0, u8 *, 0x30) = (u8) M2C_FIELD(arg1, u8 *, 0x17);
    M2C_FIELD(arg0, u8 *, 0x3F) = (u8) M2C_FIELD(arg1, u8 *, 0x18);
    M2C_FIELD(arg0, u8 *, 0x3E) = (u8) M2C_FIELD(arg1, u8 *, 0x19);
    M2C_FIELD(arg0, u8 *, 0x3D) = (u8) M2C_FIELD(arg1, u8 *, 0x1A);
    M2C_FIELD(arg0, u8 *, 0x3C) = (u8) M2C_FIELD(arg1, u8 *, 0x1B);
    M2C_FIELD(arg0, u8 *, 0x3B) = (u8) M2C_FIELD(arg1, u8 *, 0x1C);
    M2C_FIELD(arg0, u8 *, 0x3A) = (u8) M2C_FIELD(arg1, u8 *, 0x1D);
    M2C_FIELD(arg0, u8 *, 0x39) = (u8) M2C_FIELD(arg1, u8 *, 0x1E);
    M2C_FIELD(arg0, u8 *, 0x38) = (u8) M2C_FIELD(arg1, u8 *, 0x1F);
    M2C_FIELD(arg0, u8 *, 7) = (u8) M2C_FIELD(arg1, u8 *, 0x20);
    M2C_FIELD(arg0, u8 *, 6) = (u8) M2C_FIELD(arg1, u8 *, 0x21);
    M2C_FIELD(arg0, u8 *, 5) = (u8) M2C_FIELD(arg1, u8 *, 0x22);
    M2C_FIELD(arg0, u8 *, 4) = (u8) M2C_FIELD(arg1, u8 *, 0x23);
    M2C_FIELD(arg0, u8 *, 3) = (u8) M2C_FIELD(arg1, u8 *, 0x24);
    M2C_FIELD(arg0, u8 *, 2) = (u8) M2C_FIELD(arg1, u8 *, 0x25);
    M2C_FIELD(arg0, u8 *, 1) = (u8) M2C_FIELD(arg1, u8 *, 0x26);
    M2C_FIELD(arg0, u8 *, 0) = (u8) M2C_FIELD(arg1, u8 *, 0x27);
    M2C_FIELD(arg0, u8 *, 0xF) = (u8) M2C_FIELD(arg1, u8 *, 0x28);
    M2C_FIELD(arg0, u8 *, 0xE) = (u8) M2C_FIELD(arg1, u8 *, 0x29);
    M2C_FIELD(arg0, u8 *, 0xD) = (u8) M2C_FIELD(arg1, u8 *, 0x2A);
    M2C_FIELD(arg0, u8 *, 0xC) = (u8) M2C_FIELD(arg1, u8 *, 0x2B);
    M2C_FIELD(arg0, u8 *, 0xB) = (u8) M2C_FIELD(arg1, u8 *, 0x2C);
    M2C_FIELD(arg0, u8 *, 0xA) = (u8) M2C_FIELD(arg1, u8 *, 0x2D);
    M2C_FIELD(arg0, u8 *, 9) = (u8) M2C_FIELD(arg1, u8 *, 0x2E);
    M2C_FIELD(arg0, u8 *, 8) = (u8) M2C_FIELD(arg1, u8 *, 0x2F);
    M2C_FIELD(arg0, u8 *, 0x17) = (u8) M2C_FIELD(arg1, u8 *, 0x30);
    M2C_FIELD(arg0, u8 *, 0x16) = (u8) M2C_FIELD(arg1, u8 *, 0x31);
    M2C_FIELD(arg0, u8 *, 0x15) = (u8) M2C_FIELD(arg1, u8 *, 0x32);
    M2C_FIELD(arg0, u8 *, 0x14) = (u8) M2C_FIELD(arg1, u8 *, 0x33);
    M2C_FIELD(arg0, u8 *, 0x13) = (u8) M2C_FIELD(arg1, u8 *, 0x34);
    M2C_FIELD(arg0, u8 *, 0x12) = (u8) M2C_FIELD(arg1, u8 *, 0x35);
    M2C_FIELD(arg0, u8 *, 0x11) = (u8) M2C_FIELD(arg1, u8 *, 0x36);
    M2C_FIELD(arg0, u8 *, 0x10) = (u8) M2C_FIELD(arg1, u8 *, 0x37);
    M2C_FIELD(arg0, u8 *, 0x1F) = (u8) M2C_FIELD(arg1, u8 *, 0x38);
    M2C_FIELD(arg0, u8 *, 0x1E) = (u8) M2C_FIELD(arg1, u8 *, 0x39);
    M2C_FIELD(arg0, u8 *, 0x1D) = (u8) M2C_FIELD(arg1, u8 *, 0x3A);
    M2C_FIELD(arg0, u8 *, 0x1C) = (u8) M2C_FIELD(arg1, u8 *, 0x3B);
    M2C_FIELD(arg0, u8 *, 0x1B) = (u8) M2C_FIELD(arg1, u8 *, 0x3C);
    M2C_FIELD(arg0, u8 *, 0x1A) = (u8) M2C_FIELD(arg1, u8 *, 0x3D);
    M2C_FIELD(arg0, u8 *, 0x19) = (u8) M2C_FIELD(arg1, u8 *, 0x3E);
    M2C_FIELD(arg0, u8 *, 0x18) = (u8) M2C_FIELD(arg1, u8 *, 0x3F);
}
