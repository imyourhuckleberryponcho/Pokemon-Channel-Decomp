/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_800708D4(M2C_UNK);
extern s32 lbl_803505F8;
extern M2C_UNK fn_80063C7C;
M2C_UNK fn_80068678();
extern M2C_UNK lbl_801CDA60;
M2C_UNK fn_80048E94(void *, s32);
M2C_UNK memmove();
extern M2C_UNK lbl_801CC230;
extern M2C_UNK lbl_801CCE40;
M2C_UNK fn_80038FE8();
M2C_UNK fn_800706B0();
void *get_up_vector_for_viewing_mtx(M2C_UNK);
M2C_UNK ReadBmp(s32);
u32 fn_80038264(M2C_UNK);
M2C_UNK fn_80068B20();
M2C_UNK OSCreateThread(M2C_UNK *, M2C_UNK *, s32, s32, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK OSResumeThread(M2C_UNK *);
extern M2C_UNK fn_80069508;
extern M2C_UNK lbl_80223794;
extern M2C_UNK lbl_802C2388;
extern M2C_UNK lbl_802C2CA8;
extern u32 lbl_80350600;
extern u32 lbl_80350604;
extern s8 lbl_8035060D;
extern s32 lbl_80350610;
extern void *lbl_80350640;
extern s32 lbl_80350648;
extern u32 lbl_8035064C;
M2C_UNK fn_80038764();
M2C_UNK fn_80038F80();
M2C_UNK fn_8006B72C(void *, M2C_UNK *, M2C_UNK, void *);
M2C_UNK fn_8006BCA4(void *);
M2C_UNK fn_800704E4();
extern M2C_UNK fn_80068630;
extern M2C_UNK lbl_801CDA40;
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
extern M2C_UNK lbl_80223A80;

void fn_8006988C(void *arg0, s32 arg1);
void fn_80069BE8(void *arg0, s32 arg1);
void fn_80069ECC(void *arg0, s32 arg1, M2C_UNK arg_sp0);
void fn_8006A0B0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, M2C_UNK arg_sp0);
void fn_8006A2BC(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, M2C_UNK arg_sp0);
s32 fn_8006A550(void *arg0);
void fn_8006A958(s32 arg0, s32 arg1);
void fn_8006A9A0(void *arg0, u8 *arg1, M2C_UNK arg_sp0);
void fn_8006AB80(void *arg0);
void fn_8006ABE4(void *arg0);
void fn_8006AC30(void *arg1);
void fn_8006AD64(void *arg0, M2C_UNK arg_sp0);
void fn_8006B084(s32 arg0, s32 arg1);
void *fn_8006B258(void *arg0);

void fn_8006988C(void *arg0, s32 arg1) {
    u8 temp_r3;
    u8 temp_r4;
    u8 temp_r4_2;
    u8 temp_r4_3;
    u8 temp_r4_4;
    u8 temp_r4_5;
    u8 temp_r4_7;
    u8 temp_r4_9;
    u8 temp_r5;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r3_6;
    void *temp_r3_7;
    void *temp_r4_6;
    void *temp_r4_8;
    void *temp_r8;

    M2C_FIELD(arg0, s32 *, 0x86818) = (s32) (M2C_FIELD(arg0, s32 *, 0x86818) + arg1);
loop_16:
    if ((s32) M2C_FIELD(arg0, s32 *, 0x86818) >= 0x1E8480) {
        M2C_FIELD(arg0, s32 *, 0x86818) = (s32) (M2C_FIELD(arg0, s32 *, 0x86818) + 0xFFE17B80);
        temp_r3 = M2C_FIELD(arg0, u8 *, 0x86814);
        if (temp_r3 & 1) {
            if (temp_r3 & 4) {
                M2C_FIELD(arg0, u8 *, 0x86814) = (u8) (temp_r3 & 0xFE);
            }
            M2C_FIELD(arg0, u8 *, 0x86815) = (u8) (M2C_FIELD(arg0, u8 *, 0x86815) + 1);
            if (!(M2C_FIELD(arg0, u8 *, 0x86815) & 7)) {
                temp_r3_2 = M2C_FIELD(arg0, void **, 0x8680C);
                temp_r4 = M2C_FIELD(temp_r3_2, u8 *, 0x37);
                if (!(temp_r4 & 8)) {
                    M2C_FIELD(temp_r3_2, u8 *, 0x37) = (u8) (temp_r4 | 8);
                    fn_800708D4(0xB);
                }
                if (!(M2C_FIELD(arg0, u8 *, 0x86815) & 0x1F)) {
                    temp_r3_3 = M2C_FIELD(arg0, void **, 0x8680C);
                    temp_r4_2 = M2C_FIELD(temp_r3_3, u8 *, 0x38);
                    if (!(temp_r4_2 & 8)) {
                        M2C_FIELD(temp_r3_3, u8 *, 0x38) = (u8) (temp_r4_2 | 8);
                        fn_800708D4(0xC);
                    }
                    if (!(M2C_FIELD(arg0, u8 *, 0x86815) & 0x7F)) {
                        temp_r3_4 = M2C_FIELD(arg0, void **, 0x8680C);
                        temp_r4_3 = M2C_FIELD(temp_r3_4, u8 *, 0x39);
                        if (!(temp_r4_3 & 8)) {
                            M2C_FIELD(temp_r3_4, u8 *, 0x39) = (u8) (temp_r4_3 | 8);
                            fn_800708D4(0xD);
                        }
                        if ((u8) M2C_FIELD(arg0, u8 *, 0x86815) == 0) {
                            temp_r3_5 = M2C_FIELD(arg0, void **, 0x8680C);
                            temp_r4_4 = M2C_FIELD(temp_r3_5, u8 *, 0x3A);
                            if (!(temp_r4_4 & 8)) {
                                M2C_FIELD(temp_r3_5, u8 *, 0x3A) = (u8) (temp_r4_4 | 8);
                                fn_800708D4(0xE);
                            }
                        }
                    }
                }
            }
        }
        goto loop_16;
    }
    M2C_FIELD(arg0, s32 *, 0x86828) = (s32) (M2C_FIELD(arg0, s32 *, 0x86828) + arg1);
loop_22:
    if ((s32) M2C_FIELD(arg0, s32 *, 0x86828) >= 0x07A12000) {
        M2C_FIELD(arg0, s32 *, 0x86828) = (s32) (M2C_FIELD(arg0, s32 *, 0x86828) + 0xF85EE000);
        M2C_FIELD(arg0, u8 *, 0x86824) = (u8) (M2C_FIELD(arg0, u8 *, 0x86824) ^ 4);
        temp_r5 = M2C_FIELD(arg0, u8 *, 0x86824);
        if ((temp_r5 & 1) && (((temp_r5 * 2) ^ temp_r5) & 8)) {
            M2C_FIELD(arg0, u8 *, 0x86824) = (u8) (temp_r5 + 8);
            temp_r4_5 = M2C_FIELD(arg0, u8 *, 0x86824);
            if (temp_r4_5 >= 0x20U) {
                M2C_FIELD(arg0, u8 *, 0x86824) = (u8) (temp_r4_5 - 0x20);
                M2C_FIELD(arg0, s32 *, 0x8682C) = (s32) (M2C_FIELD(arg0, s32 *, 0x8682C) + 1);
            }
        }
        goto loop_22;
    }
    /* draft: did not compile: fn_80069ECC(arg0 + 0x86830, arg1); */
    /* draft: did not compile: fn_80069BE8(arg0 + 0x868EC, arg1); */
    if (((s32) M2C_FIELD(arg0, s32 *, 0x88C80) != 0) && ((s32) lbl_803505F8 > 0)) {
        M2C_FIELD(arg0, s32 *, 0x88C84) = (s32) (M2C_FIELD(arg0, s32 *, 0x88C84) + arg1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x88C84) >= (s32) lbl_803505F8) {
            M2C_FIELD(arg0, s32 *, 0x88C84) = (s32) (M2C_FIELD(arg0, s32 *, 0x88C84) % lbl_803505F8);
            temp_r4_6 = M2C_FIELD(arg0, void **, 0x88C6C);
            if (temp_r4_6 != NULL) {
                M2C_FIELD(arg0, s32 *, 0x88C74) = (s32) (M2C_FIELD(temp_r4_6, s32 *, 0) % 512000000);
                M2C_FIELD(arg0, s32 *, 0x88C78) = (s32) (M2C_FIELD(temp_r4_6, s32 *, 4) + (M2C_FIELD(temp_r4_6, s32 *, 0) / 512000000));
                temp_r3_6 = M2C_FIELD(arg0, void **, 0x88C6C);
                temp_r4_7 = M2C_FIELD(temp_r3_6, u8 *, 0x3B);
                if (!(temp_r4_7 & 8)) {
                    M2C_FIELD(temp_r3_6, u8 *, 0x3B) = (u8) (temp_r4_7 | 8);
                    fn_800708D4(0xF);
                }
            }
            temp_r8 = M2C_FIELD(arg0, void **, 0x88C7C);
            if (temp_r8 != NULL) {
                temp_r4_8 = M2C_FIELD(temp_r8, void **, 0);
                if ((temp_r4_8 != NULL) && (M2C_FIELD(temp_r4_8, s32 *, 8) & 0x800) && (temp_r4_8 != NULL)) {
                    M2C_FIELD(temp_r8, s32 *, 8) = (s32) (M2C_FIELD(temp_r4_8, s32 *, 0) % 512000000);
                    M2C_FIELD(temp_r8, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r4_8, s32 *, 4) + (M2C_FIELD(temp_r4_8, s32 *, 0) / 512000000));
                    temp_r3_7 = M2C_FIELD(temp_r8, void **, 0);
                    temp_r4_9 = M2C_FIELD(temp_r3_7, u8 *, 0x3B);
                    if (!(temp_r4_9 & 8)) {
                        M2C_FIELD(temp_r3_7, u8 *, 0x3B) = (u8) (temp_r4_9 | 8);
                        fn_800708D4(0xF);
                    }
                }
            }
        }
    }
}

void fn_80069BE8(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3_4;
    s32 temp_r3_5;
    s32 temp_r4;
    s32 temp_r4_5;
    s32 temp_r8;
    s32 temp_r8_2;
    s32 var_ctr;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r3;
    s32 var_r4;
    s32 var_r5;
    s32 var_r6;
    u32 temp_r4_4;
    u32 temp_r6;
    u8 temp_r3;
    u8 temp_r3_2;
    u8 temp_r4_2;
    u8 temp_r4_3;
    u8 temp_r5;
    void *temp_r3_3;
    void *temp_r7;

    temp_r3 = M2C_FIELD(arg0, u8 *, 9);
    if (temp_r3 & 0x40) {
        M2C_FIELD(arg0, u8 *, 9) = (u8) (temp_r3 & 0xFFFFFFBF);
        return;
    }
    if (temp_r3 & 1) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x18) + arg1;
        M2C_FIELD(arg0, s32 *, 0x18) = temp_r0;
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x1C);
        if (temp_r0 >= temp_r4) {
            M2C_FIELD(arg0, u8 *, 0x20) = (u8) (M2C_FIELD(arg0, u8 *, 0x20) + ((s32) M2C_FIELD(arg0, s32 *, 0x18) / temp_r4));
            M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) % M2C_FIELD(arg0, s32 *, 0x1C));
            if ((u8) M2C_FIELD(arg0, u8 *, 0x20) >= 0x41U) {
                var_r4 = 0x1E848;
                M2C_FIELD(arg0, u8 *, 0x21) = (u8) (M2C_FIELD(arg0, u8 *, 0x21) + (M2C_FIELD(arg0, u8 *, 0x20) / 65));
                M2C_FIELD(arg0, u8 *, 0x20) = (u8) (M2C_FIELD(arg0, u8 *, 0x20) % 65);
                if (M2C_FIELD(arg0, u8 *, 9) & 0x10) {
                    var_r4 = 0x1AB59;
                }
                M2C_FIELD(arg0, s32 *, 0x1C) = var_r4;
            }
            temp_r4_2 = M2C_FIELD(arg0, u8 *, 0x21);
            temp_r3_2 = M2C_FIELD(arg0, u8 *, 0x22);
            if (temp_r4_2 >= temp_r3_2) {
                if (temp_r4_2 > temp_r3_2) {
                    M2C_FIELD(arg0, u8 *, 0x21) = (u8) (M2C_FIELD(arg0, u8 *, 0x21) % (temp_r3_2 + 1));
                    if (!(M2C_FIELD(arg0, u8 *, 8) & 8)) {
                        temp_r3_3 = M2C_FIELD(arg0, void **, 0);
                        temp_r4_3 = M2C_FIELD(temp_r3_3, u8 *, 0x30);
                        if (!(temp_r4_3 & 8)) {
                            M2C_FIELD(temp_r3_3, u8 *, 0x30) = (u8) (temp_r4_3 | 8);
                            fn_800708D4(4);
                        }
                    }
                }
                if (M2C_FIELD(arg0, u8 *, 9) & 0x10) {
                    temp_r5 = M2C_FIELD(arg0, u8 *, 8);
                    if (temp_r5 & 8) {
                        var_r0 = 0x17;
                        if (!(temp_r5 & 6)) {
                            var_r0 = 0x38;
                        }
                        if ((s32) M2C_FIELD(arg0, u8 *, 0x20) >= var_r0) {
                            var_r0_2 = 0;
                            var_r3 = 0;
                            if (temp_r5 & 4) {
                                temp_r6 = M2C_FIELD(arg0, u32 *, 0x28);
                                if (temp_r6 > -0x2000U) {
                                    if (temp_r6 < 0x2000U) {
                                        temp_r0_2 = temp_r6 + 0x2000;
                                        if (temp_r0_2 > 0) {
                                            var_r3 = temp_r0_2;
                                        }
                                        var_r0_2 = 0;
                                    } else if (temp_r6 < 0x2100U) {
                                        temp_r3_4 = temp_r6 - 0x2000;
                                        if (temp_r3_4 < 0) {
                                            var_r0_2 = temp_r3_4;
                                        }
                                        var_r3 = 0x100 - var_r0_2;
                                    }
                                }
                            }
                            if (temp_r5 & 2) {
                                temp_r4_4 = M2C_FIELD(arg0, u32 *, 0x24);
                                if (temp_r4_4 > 0x1800U) {
                                    if (temp_r4_4 < 0x2000U) {
                                        temp_r4_5 = temp_r4_4 - 0x1800;
                                        if (temp_r4_5 > (s32) (var_r0_2 + var_r3)) {
                                            var_r3 = temp_r4_5;
                                        }
                                        var_r0_2 = 0;
                                    } else if (temp_r4_4 < 0x2100U) {
                                        temp_r3_5 = temp_r4_4 - 0x2000;
                                        if (temp_r3_5 < var_r0_2) {
                                            var_r0_2 = temp_r3_5;
                                        }
                                        var_r3 = 0x100 - var_r0_2;
                                    }
                                }
                            }
                            temp_r7 = M2C_FIELD(arg0, void **, 0);
                            var_r5 = 0;
                            var_r6 = 0;
                            temp_r8 = M2C_FIELD(temp_r7, s32 *, 0x54);
                            var_ctr = temp_r8;
                            if (temp_r8 > 0) {
loop_39:
                                if (0 /* draft: did not compile */) {

                                } else {
                                    var_r6 += 0x14;
                                    var_r5 += 1;
                                    var_ctr -= 1;
                                    if (var_ctr == 0) {
                                        goto block_42;
                                    }
                                    goto loop_39;
                                }
                            } else {
block_42:
                                var_r5 = -1;
                            }
                            if (var_r5 < 0) {
                                if ((s32) M2C_FIELD(temp_r7, s32 *, 0x50) <= temp_r8) {
                                    M2C_FIELD(temp_r7, s32 *, 0x50) = (s32) (temp_r8 + 1);
                                }
                                var_r5 = M2C_FIELD(temp_r7, s32 *, 0x54);
                                M2C_FIELD(temp_r7, s32 *, 0x54) = (s32) (var_r5 + 1);
                            }
                            temp_r8_2 = var_r5 * 0x14;
                            /* draft: did not compile: *(M2C_FIELD(temp_r7, s32 *, 0x4C) + temp_r8_2) = arg0; */
                            M2C_FIELD((M2C_FIELD(temp_r7, s32 *, 0x4C) + temp_r8_2), s32 *, 4) = 0;
                            M2C_FIELD((M2C_FIELD(temp_r7, s32 *, 0x4C) + temp_r8_2), s32 *, 8) = var_r0_2;
                            M2C_FIELD((M2C_FIELD(temp_r7, s32 *, 0x4C) + temp_r8_2), s32 *, 0xC) = var_r3;
                            M2C_FIELD((M2C_FIELD(temp_r7, s32 *, 0x4C) + temp_r8_2), M2C_UNK **, 0x10) = &fn_80063C7C;
                            M2C_FIELD(temp_r7, s32 *, 8) = (s32) (M2C_FIELD(temp_r7, s32 *, 8) | 0x10);
                        }
                    }
                }
            }
        }
    }
}

void fn_80069ECC(void *arg0, s32 arg1, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8006A0B0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8006A2BC(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, M2C_UNK arg_sp0) { } /* draft: stub */

s32 fn_8006A550(void *arg0) { return 0; } /* draft: stub */

void fn_8006A958(s32 arg0, s32 arg1) {
    /* draft: did not compile: fn_8006A9A0(arg1 + 3); */
    /* draft: did not compile: fn_8006A9A0(arg0, arg1 + 2); */
}

void fn_8006A9A0(void *arg0, u8 *arg1, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8006AB80(void *arg0) { } /* draft: stub */

void fn_8006ABE4(void *arg0) {

    M2C_FIELD(arg0, s8 *, 0x1C) = 0;
    M2C_FIELD(arg0, s8 *, 0x1D) = 0;
    M2C_FIELD(arg0, s8 *, 0x1E) = 0;
    M2C_FIELD(arg0, s8 *, 0x1F) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    if ((M2C_FIELD(arg0, void **, 0)) != NULL) {
        M2C_FIELD((M2C_FIELD(arg0, void **, 0)), s8 *, 0x1BD) = (s8) (M2C_FIELD((M2C_FIELD(arg0, void **, 0)), s8 *, 0x1BD) & 0xFFFFFFFD);
        /* draft: did not compile: M2C_FIELD((M2C_FIELD(arg0, void **, 0)), M2C_UNK (**)(), 0x1CC) = fn_8006AC30; */
        M2C_FIELD((M2C_FIELD(arg0, void **, 0)), void **, 0x1EC) = arg0;
    }
}

void fn_8006AC30(void *arg1) {
    u8 temp_r4_2;
    u8 temp_r4_4;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r4;
    void *temp_r4_3;
    void *temp_r8;

    if (arg1 != NULL) {
        temp_r4 = M2C_FIELD(arg1, void **, 0);
        if (temp_r4 != NULL) {
            M2C_FIELD(arg1, s32 *, 8) = (s32) (M2C_FIELD(temp_r4, s32 *, 0) % 512000000);
            M2C_FIELD(arg1, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r4, s32 *, 4) + (M2C_FIELD(temp_r4, s32 *, 0) / 512000000));
            temp_r3 = M2C_FIELD(arg1, void **, 0);
            temp_r4_2 = M2C_FIELD(temp_r3, u8 *, 0x3B);
            if (!(temp_r4_2 & 8)) {
                M2C_FIELD(temp_r3, u8 *, 0x3B) = (u8) (temp_r4_2 | 8);
                fn_800708D4(0xF);
            }
        }
        temp_r8 = M2C_FIELD(arg1, void **, 0x10);
        if (temp_r8 != NULL) {
            temp_r4_3 = M2C_FIELD(temp_r8, void **, 0);
            if ((temp_r4_3 != NULL) && (M2C_FIELD(temp_r4_3, s32 *, 8) & 0x800) && (temp_r4_3 != NULL)) {
                M2C_FIELD(temp_r8, s32 *, 8) = (s32) (M2C_FIELD(temp_r4_3, s32 *, 0) % 512000000);
                M2C_FIELD(temp_r8, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r4_3, s32 *, 4) + (M2C_FIELD(temp_r4_3, s32 *, 0) / 512000000));
                temp_r3_2 = M2C_FIELD(temp_r8, void **, 0);
                temp_r4_4 = M2C_FIELD(temp_r3_2, u8 *, 0x3B);
                if (!(temp_r4_4 & 8)) {
                    M2C_FIELD(temp_r3_2, u8 *, 0x3B) = (u8) (temp_r4_4 | 8);
                    fn_800708D4(0xF);
                }
            }
        }
    }
}

void fn_8006AD64(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8006B084(s32 arg0, s32 arg1) {
    s32 var_ctr;
    M2C_UNK *var_r6;
    u32 temp_r3_2;
    void *temp_r3;

    var_r6 = &lbl_802C2CA8;
    lbl_80350610 = arg0;
    lbl_80350648 = arg1;
    lbl_8035060D = 1;
    var_ctr = 0x20;
    do {
        M2C_FIELD(var_r6, s32 *, 0) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 4) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 8) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0xC) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0x10) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0x14) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0x18) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0x1C) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0x20) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0x24) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0x28) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0x2C) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0x30) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0x34) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0x38) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0x3C) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0x40) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0x44) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0x48) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0x4C) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0x50) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0x54) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0x58) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0x5C) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0x60) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0x64) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0x68) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0x6C) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0x70) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0x74) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0x78) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0x7C) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0x80) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0x84) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0x88) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0x8C) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0x90) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0x94) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0x98) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0x9C) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0xA0) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0xA4) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0xA8) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0xAC) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0xB0) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0xB4) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0xB8) = 0xE0E0E0E0;
        M2C_FIELD(var_r6, s32 *, 0xBC) = 0xE0E0E0E0;
        var_r6 += 0xC0;
        var_ctr -= 1;
    } while (var_ctr != 0);
    temp_r3 = get_up_vector_for_viewing_mtx(8);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 0) = 0;
        M2C_FIELD(temp_r3, s32 *, 4) = 0;
    }
    lbl_80350640 = temp_r3;
    ReadBmp(*(&lbl_80223794 + (lbl_80350610 * 4)));
    lbl_8035064C = fn_80038264(0x140);
    lbl_80350600 = fn_80038264(0x88CA0);
    memset((void *)(0), (int)(0x88CA0), (unsigned long)(0));
    if ((u32) lbl_80350600 != 0U) {
        fn_8006B258((void *)(0));
    }
    fn_80068B20();
    temp_r3_2 = fn_80038264(0x1000);
    lbl_80350604 = temp_r3_2;
    OSCreateThread(&lbl_802C2388, &fn_80069508, arg0, temp_r3_2 + 0x1000, 0x1000, 0x11, 0);
    OSResumeThread(&lbl_802C2388);
}

void *fn_8006B258(void *arg0) { } /* draft: stub */
