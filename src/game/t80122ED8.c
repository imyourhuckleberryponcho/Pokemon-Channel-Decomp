/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK synthForceLowPrecisionUpdate(void *);
extern s32 lbl_80350DD0;
extern s32 lbl_80350DD4;
extern void *lbl_80350DD8;
extern void *lbl_80350DDC;
u16 fn_80119A1C(u8, u8);
s32 fn_8011E438();
M2C_UNK fn_8012C768(u8, M2C_UNK, M2C_UNK);
M2C_UNK fn_8012CB50(u8, M2C_UNK);
u32 fn_8012E0B4();
M2C_UNK fn_8012E2A4(u8);
extern s32 lbl_80350D60;
extern M2C_UNK lbl_8032CC00;
extern M2C_UNK lbl_80339F00;
extern M2C_UNK *lbl_80350DE8;
extern s32 lbl_80350DEC;
extern s32 lbl_80350DF0;
M2C_UNK fn_8012E0DC(u8, s32);
extern u16 lbl_80350DF4;
extern u8 lbl_80350D68;
extern u8 lbl_80350DF6;
extern u8 lbl_80350DF7;
extern u8 lbl_80350DF8;
extern u8 lbl_80350DF9;
M2C_UNK fn_8011A9AC(s32);
extern u8 lbl_80350D30;
extern M2C_UNK lbl_8033AE00;
extern M2C_UNK lbl_8033AE40;

void fn_80122ED8(void *arg0);
void fn_80122FE0(void *arg0, s32 arg1);
s32 fn_801230DC(s16 arg0, u8 arg1, s32 arg2, s16 arg3, u8 arg4, s8 arg5, s8 arg6, u8 arg7, M2C_UNK arg_sp0, u8 arg_sp8, u8 arg_spC, u16 arg_sp10, u16 arg_sp14, u8 arg_sp18, u8 arg_sp1C, u8 arg_sp20, s32 arg_sp24);
void fn_80123514(void);
void fn_8012357C(void);
void fn_8012365C(void *arg0);
s32 fn_801239AC(void *arg0);
u32 fn_801239C0(void *arg0, u32 arg1);
s32 fn_80123AC4(u32 arg0);
void fn_80123B14(void *arg0, u8 arg1, u16 arg5);
s32 fn_80123D60(u8 arg0, u8 arg1, u16 arg2, u8 arg3, M2C_UNK arg_sp0);
void fn_801241C0(void *arg0);
void synthInitAllocationAids(void);
s32 fn_80124624(s32 arg0);
void fn_80124720(s32 arg0);
void fn_80124938(s32 arg0);
s32 fn_80124B6C(u32 arg0);
void fn_80124C30(void *arg0, M2C_UNK arg_sp0);
s32 fn_80124D8C(void *arg0);
void fn_80124E00(void *arg0);
void fn_80124E54(void *arg0);

void fn_80122ED8(void *arg0) {
    u8 temp_r4;
    u8 temp_r5;
    void *temp_r3;
    void *temp_r3_2;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x4C) != 0) {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x98);
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x9C);
        if (((temp_r5 ^ 0) | (temp_r4 ^ 0)) != 0) {
            if (((temp_r5 ^ -1) | (temp_r4 ^ -1)) != 0) {
                temp_r3 = M2C_FIELD(arg0, void **, 0x48);
                if (temp_r3 == NULL) {
                    lbl_80350DD8 = M2C_FIELD(arg0, void **, 0x44);
                } else {
                    M2C_FIELD(temp_r3, void **, 0x44) = (void *) M2C_FIELD(arg0, void **, 0x44);
                }
                temp_r3_2 = M2C_FIELD(arg0, void **, 0x44);
                if (temp_r3_2 != NULL) {
                    M2C_FIELD(temp_r3_2, void **, 0x48) = (void *) M2C_FIELD(arg0, void **, 0x48);
                }
            }
            synthForceLowPrecisionUpdate(arg0);
            M2C_FIELD(arg0, s32 *, 0x9C) = 0;
            M2C_FIELD(arg0, s32 *, 0xA0) = (s32) lbl_80350DD0;
            M2C_FIELD(arg0, s32 *, 0xA4) = (s32) lbl_80350DD4;
            M2C_FIELD(arg0, s32 *, 0x98) = 0;
            M2C_FIELD(arg0, s32 *, 0x118) = (s32) (M2C_FIELD(arg0, s32 *, 0x118) & 0xFFFBFFFB);
            M2C_FIELD(arg0, s32 *, 0x114) = (s32) (M2C_FIELD(arg0, s32 *, 0x114) & ~0);
        }
        M2C_FIELD(arg0, void **, 0x3C) = (void *) lbl_80350DDC;
        if ((void *) lbl_80350DDC != NULL) {
            M2C_FIELD(lbl_80350DDC, void **, 0x40) = arg0;
        }
        M2C_FIELD(arg0, s32 *, 0x40) = 0;
        lbl_80350DDC = arg0;
        M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    }
}

void fn_80122FE0(void *arg0, s32 arg1) {
    s32 temp_r0;
    u8 temp_r6;
    u8 temp_r7;
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r5_3;
    void *temp_r5_4;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x4C);
    if (temp_r0 != arg1) {
        if (temp_r0 == 0) {
            temp_r5 = M2C_FIELD(arg0, void **, 0x40);
            if (temp_r5 == NULL) {
                lbl_80350DDC = M2C_FIELD(arg0, void **, 0x3C);
            } else {
                M2C_FIELD(temp_r5, void **, 0x3C) = (void *) M2C_FIELD(arg0, void **, 0x3C);
            }
            temp_r5_2 = M2C_FIELD(arg0, void **, 0x3C);
            if (temp_r5_2 != NULL) {
                M2C_FIELD(temp_r5_2, void **, 0x40) = (void *) M2C_FIELD(arg0, void **, 0x40);
            }
        }
        if (arg1 == 2) {
            temp_r6 = M2C_FIELD(arg0, s32 *, 0x98);
            temp_r7 = M2C_FIELD(arg0, s32 *, 0x9C);
            if (((temp_r7 ^ 0) | (temp_r6 ^ 0)) != 0) {
                if (((temp_r7 ^ -1) | (temp_r6 ^ -1)) != 0) {
                    temp_r5_3 = M2C_FIELD(arg0, void **, 0x48);
                    if (temp_r5_3 == NULL) {
                        lbl_80350DD8 = M2C_FIELD(arg0, void **, 0x44);
                    } else {
                        M2C_FIELD(temp_r5_3, void **, 0x44) = (void *) M2C_FIELD(arg0, void **, 0x44);
                    }
                    temp_r5_4 = M2C_FIELD(arg0, void **, 0x44);
                    if (temp_r5_4 != NULL) {
                        M2C_FIELD(temp_r5_4, void **, 0x48) = (void *) M2C_FIELD(arg0, void **, 0x48);
                    }
                }
                M2C_FIELD(arg0, s32 *, 0x9C) = 0;
                M2C_FIELD(arg0, s32 *, 0x98) = 0;
                M2C_FIELD(arg0, s32 *, 0xA0) = (s32) lbl_80350DD0;
                M2C_FIELD(arg0, s32 *, 0x118) = (s32) (M2C_FIELD(arg0, s32 *, 0x118) & 0xFFFBFFFB);
                M2C_FIELD(arg0, s32 *, 0xA4) = (s32) lbl_80350DD4;
                M2C_FIELD(arg0, s32 *, 0x114) = (s32) (M2C_FIELD(arg0, s32 *, 0x114) & ~0);
            }
        }
        M2C_FIELD(arg0, s32 *, 0x4C) = arg1;
    }
}

s32 fn_801230DC(s16 arg0, u8 arg1, s32 arg2, s16 arg3, u8 arg4, s8 arg5, s8 arg6, u8 arg7, M2C_UNK arg_sp0, u8 arg_sp8, u8 arg_spC, u16 arg_sp10, u16 arg_sp14, u8 arg_sp18, u8 arg_sp1C, u8 arg_sp20, s32 arg_sp24) {
    s32 temp_r0;
    s32 temp_r10;
    s32 temp_r30;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 temp_r5_4;
    u16 temp_r3_3;
    u8 temp_r3_4;
    u8 temp_r6;
    u8 var_r16;
    u8 var_r18;
    void *temp_r28;
    void *temp_r3_10;
    void *temp_r3_5;
    void *temp_r3_6;
    void *temp_r3_7;
    void *temp_r3_8;
    void *temp_r3_9;

    var_r16 = arg1;
    var_r18 = arg4;
    temp_r3_2 = fn_8011E438();
    if (temp_r3_2 != 0) {
        temp_r30 = var_r18 & 0x80;
        if (temp_r30 == 0) {
            temp_r3_3 = fn_80119A1C(arg_sp8, arg7);
            if (temp_r3_3 != -1U) {
                var_r16 = (u8) temp_r3_3;
            }
        }
        temp_r3_4 = fn_80123D60((unsigned char)(var_r16), (unsigned char)(arg2), (unsigned short)(arg3), (unsigned char)(temp_r30 != 0), (long)(0));
        if ((u32) (temp_r3_4 + 0x10000) != -1U) {
            /* draft: did not compile: temp_r28 = lbl_80350D60 + (temp_r3_4 * 0x404); */
            fn_8012365C(temp_r28);
            temp_r0 = M2C_FIELD(temp_r28, s32 *, 0x4C);
            if (temp_r0 != 2) {
                if (temp_r0 == 0) {
                    temp_r3_5 = M2C_FIELD(temp_r28, void **, 0x40);
                    if (temp_r3_5 == NULL) {
                        lbl_80350DDC = M2C_FIELD(temp_r28, void **, 0x3C);
                    } else {
                        M2C_FIELD(temp_r3_5, void **, 0x3C) = (void *) M2C_FIELD(temp_r28, void **, 0x3C);
                    }
                    temp_r3_6 = M2C_FIELD(temp_r28, void **, 0x3C);
                    if (temp_r3_6 != NULL) {
                        M2C_FIELD(temp_r3_6, void **, 0x40) = (void *) M2C_FIELD(temp_r28, void **, 0x40);
                    }
                }
                temp_r4 = M2C_FIELD(temp_r28, s32 *, 0x98);
                temp_r5 = M2C_FIELD(temp_r28, s32 *, 0x9C);
                if (((temp_r5 ^ 0) | (temp_r4 ^ 0)) != 0) {
                    if (((temp_r5 ^ -1) | (temp_r4 ^ -1)) != 0) {
                        temp_r3_7 = M2C_FIELD(temp_r28, void **, 0x48);
                        if (temp_r3_7 == NULL) {
                            lbl_80350DD8 = M2C_FIELD(temp_r28, void **, 0x44);
                        } else {
                            M2C_FIELD(temp_r3_7, void **, 0x44) = (void *) M2C_FIELD(temp_r28, void **, 0x44);
                        }
                        temp_r3_8 = M2C_FIELD(temp_r28, void **, 0x44);
                        if (temp_r3_8 != NULL) {
                            M2C_FIELD(temp_r3_8, void **, 0x48) = (void *) M2C_FIELD(temp_r28, void **, 0x48);
                        }
                    }
                    M2C_FIELD(temp_r28, s32 *, 0x9C) = 0;
                    M2C_FIELD(temp_r28, s32 *, 0x98) = 0;
                    M2C_FIELD(temp_r28, s32 *, 0xA0) = (s32) lbl_80350DD0;
                    M2C_FIELD(temp_r28, s32 *, 0x118) = (s32) (M2C_FIELD(temp_r28, s32 *, 0x118) & 0xFFFBFFFB);
                    M2C_FIELD(temp_r28, s32 *, 0xA4) = (s32) lbl_80350DD4;
                    M2C_FIELD(temp_r28, s32 *, 0x114) = (s32) (M2C_FIELD(temp_r28, s32 *, 0x114) & ~0);
                }
                M2C_FIELD(temp_r28, s32 *, 0x4C) = 2;
            }
            temp_r5_2 = M2C_FIELD(temp_r28, s32 *, 0x114);
            temp_r4_2 = temp_r5_2 & 0;
            M2C_FIELD(temp_r28, s32 *, 0x118) = (s32) ((M2C_FIELD(temp_r28, s32 *, 0x118) & 0x10) | 2);
            M2C_FIELD(temp_r28, s32 *, 0x114) = temp_r4_2;
            if (fn_8012E0B4(temp_r3_4, temp_r4_2, temp_r5_2) != 0U) {
                M2C_FIELD(temp_r28, s32 *, 0x118) = (s32) (M2C_FIELD(temp_r28, s32 *, 0x118) | 1);
            }
            M2C_FIELD(temp_r28, s32 *, 0x9C) = 0;
            M2C_FIELD(temp_r28, s32 *, 0x98) = 0;
            if (temp_r30 != 0) {
                var_r18 &= 0x7F;
                M2C_FIELD(temp_r28, s8 *, 0x11D) = 1;
                fn_8012C768(temp_r3_4, 0xFF, 1);
                fn_8012CB50(temp_r3_4, 0xFF);
                M2C_FIELD(temp_r28, u8 *, 0x20A) = temp_r3_4;
                M2C_FIELD(temp_r28, u8 *, 0x20B) = 0xFFU;
                M2C_FIELD(temp_r28, u8 *, 0x20C) = 0U;
            } else {
                M2C_FIELD(temp_r28, s8 *, 0x11D) = 0;
                M2C_FIELD(temp_r28, u8 *, 0x20A) = arg7;
                M2C_FIELD(temp_r28, u8 *, 0x20B) = arg_sp8;
                M2C_FIELD(temp_r28, u8 *, 0x20C) = arg_spC;
            }
            M2C_FIELD(temp_r28, s16 *, 0x102) = arg0;
            temp_r10 = temp_r3_2 + ((arg_sp10 * 8) & 0x7FFF8);
            M2C_FIELD(temp_r28, s16 *, 0x100) = arg3;
            M2C_FIELD(temp_r28, s32 *, 0x110) = 0x75300000;
            temp_r6 = arg_sp24 == 0;
            M2C_FIELD(temp_r28, s16 *, 0x10E) = 0x400;
            M2C_FIELD(temp_r28, s32 *, 0x38) = temp_r10;
            temp_r5_3 = temp_r3_4 | (((var_r18 << 8) & 0xFF00 & ~0xFFFF0000) | (arg0 << 0x10));
            M2C_FIELD(temp_r28, s32 *, 0x34) = temp_r3_2;
            M2C_FIELD(temp_r28, u8 *, 0x12F) = var_r18;
            M2C_FIELD(temp_r28, s16 *, 0x12C) = (s16) var_r18;
            M2C_FIELD(temp_r28, s8 *, 0x12E) = 0;
            M2C_FIELD(temp_r28, s8 *, 0x208) = arg5;
            M2C_FIELD(temp_r28, s8 *, 0x209) = arg6;
            M2C_FIELD(temp_r28, s8 *, 0x20D) = (s8) arg_sp14;
            M2C_FIELD(temp_r28, s8 *, 0x8C) = 0;
            M2C_FIELD(temp_r28, s8 *, 0x8D) = 0;
            M2C_FIELD(temp_r28, s32 *, 0xEC) = -1;
            M2C_FIELD(temp_r28, s32 *, 0xF0) = -1;
            M2C_FIELD(temp_r28, s32 *, 0x108) = -1;
            M2C_FIELD(temp_r28, u8 *, 0x20E) = arg_sp1C;
            M2C_FIELD(temp_r28, u8 *, 0x20F) = arg_sp20;
            M2C_FIELD(temp_r28, u8 *, 0x210) = temp_r6;
            M2C_FIELD(temp_r28, s8 *, 0x3EE) = 0;
            M2C_FIELD(temp_r28, s8 *, 0x3ED) = 0;
            M2C_FIELD(temp_r28, s8 *, 0x3EC) = 0;
            M2C_FIELD(temp_r28, s32 *, 0xF4) = temp_r5_3;
            fn_80123B14((void *)(temp_r28), (unsigned char)(var_r16), (unsigned short)(temp_r5_3));
            temp_r3 = fn_801239C0(temp_r28, arg_sp18);
            if ((u32) (temp_r3 + 0x10000) != -1U) {
                if ((s32) M2C_FIELD(temp_r28, s32 *, 0x4C) != 0) {
                    temp_r4_3 = M2C_FIELD(temp_r28, s32 *, 0x98);
                    temp_r5_4 = M2C_FIELD(temp_r28, s32 *, 0x9C);
                    if (((temp_r5_4 ^ 0) | (temp_r4_3 ^ 0)) != 0) {
                        if (((temp_r5_4 ^ -1) | (temp_r4_3 ^ -1)) != 0) {
                            temp_r3_9 = M2C_FIELD(temp_r28, void **, 0x48);
                            if (temp_r3_9 == NULL) {
                                lbl_80350DD8 = M2C_FIELD(temp_r28, void **, 0x44);
                            } else {
                                M2C_FIELD(temp_r3_9, void **, 0x44) = (void *) M2C_FIELD(temp_r28, void **, 0x44);
                            }
                            temp_r3_10 = M2C_FIELD(temp_r28, void **, 0x44);
                            if (temp_r3_10 != NULL) {
                                M2C_FIELD(temp_r3_10, void **, 0x48) = (void *) M2C_FIELD(temp_r28, void **, 0x48);
                            }
                        }
                        synthForceLowPrecisionUpdate(temp_r28);
                        M2C_FIELD(temp_r28, s32 *, 0x9C) = 0;
                        M2C_FIELD(temp_r28, s32 *, 0x98) = 0;
                        M2C_FIELD(temp_r28, s32 *, 0xA4) = (s32) lbl_80350DD4;
                        M2C_FIELD(temp_r28, s32 *, 0xA0) = (s32) lbl_80350DD0;
                        M2C_FIELD(temp_r28, s32 *, 0x118) = (s32) (M2C_FIELD(temp_r28, s32 *, 0x118) & 0xFFFBFFFB);
                        M2C_FIELD(temp_r28, s32 *, 0x114) = (s32) (M2C_FIELD(temp_r28, s32 *, 0x114) & ~0);
                    }
                    M2C_FIELD(temp_r28, void **, 0x3C) = (void *) lbl_80350DDC;
                    if ((void *) lbl_80350DDC != NULL) {
                        M2C_FIELD(lbl_80350DDC, void **, 0x40) = temp_r28;
                    }
                    M2C_FIELD(temp_r28, void **, 0x40) = NULL;
                    lbl_80350DDC = temp_r28;
                    M2C_FIELD(temp_r28, s32 *, 0x4C) = 0;
                }
                return temp_r3;
            }
            if (fn_8012E0B4((unsigned char)(temp_r3_4), (long)(0), (long)(0)) != 0U) {
                fn_8012E2A4(temp_r3_4);
            }
            fn_801241C0(temp_r28);
            goto block_43;
        }
        goto block_43;
    }
block_43:
    return -1;
}

void fn_80123514(void) {
    s32 temp_r0;
    s32 temp_r3;
    s32 var_r9;
    int var_r10;

    lbl_80350DDC = 0;
    var_r9 = 0;
    var_r10 = 0U;
    lbl_80350DD8 = 0;
    lbl_80350DD4 = 0;
    lbl_80350DD0 = 0;
loop_2:
    if (var_r10 < (u8) M2C_FIELD(&lbl_8032CC00, u8 *, 0x210)) {
        temp_r3 = var_r9 + 0x4C;
        temp_r0 = var_r9 + 0xAA;
        /* draft: did not compile: *(lbl_80350D60 + (var_r9 + 0x34)) = 0; */
        var_r9 += 0x404;
        var_r10 += 1;
        /* draft: did not compile: *(lbl_80350D60 + temp_r3) = 2; */
        /* draft: did not compile: *(lbl_80350D60 + temp_r0) = 0; */
        goto loop_2;
    }
}

void fn_8012357C(void) {
    M2C_UNK *var_r3;
    M2C_UNK **var_r6;
    M2C_UNK **temp_r3_7;
    u8 var_ctr;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r3_6;

    var_r3 = &lbl_80339F00;
    lbl_80350DF0 = 0;
    var_r6 = NULL;
    lbl_80350DEC = 0;
    lbl_80350DE8 = &lbl_80339F00;
    var_ctr = 0x10;
    do {
        M2C_FIELD(var_r3, M2C_UNK ***, 4) = var_r6;
        if (var_r6 != NULL) {
            *var_r6 = var_r3;
        }
        M2C_FIELD(var_r3, M2C_UNK **, 0x14) = var_r3;
        temp_r3 = var_r3 + 0x10;
        if (var_r3 != NULL) {
            M2C_FIELD(var_r3, void **, 0) = temp_r3;
        }
        M2C_FIELD(temp_r3, void **, 0x14) = temp_r3;
        /* draft: did not compile: temp_r3_2 = temp_r3 + 0x10; */
        if (temp_r3 != NULL) {
            M2C_FIELD(var_r3, void **, 0x10) = temp_r3_2;
        }
        M2C_FIELD(temp_r3_2, void **, 0x14) = temp_r3_2;
        /* draft: did not compile: temp_r3_3 = temp_r3_2 + 0x10; */
        if (temp_r3_2 != NULL) {
            M2C_FIELD(temp_r3, void **, 0x10) = temp_r3_3;
        }
        M2C_FIELD(temp_r3_3, void **, 0x14) = temp_r3_3;
        /* draft: did not compile: temp_r3_4 = temp_r3_3 + 0x10; */
        if (temp_r3_3 != NULL) {
            M2C_FIELD(temp_r3_2, void **, 0x10) = temp_r3_4;
        }
        M2C_FIELD(temp_r3_4, void **, 0x14) = temp_r3_4;
        /* draft: did not compile: temp_r3_5 = temp_r3_4 + 0x10; */
        if (temp_r3_4 != NULL) {
            M2C_FIELD(temp_r3_3, void **, 0x10) = temp_r3_5;
        }
        M2C_FIELD(temp_r3_5, void **, 0x14) = temp_r3_5;
        /* draft: did not compile: temp_r3_6 = temp_r3_5 + 0x10; */
        if (temp_r3_5 != NULL) {
            M2C_FIELD(temp_r3_4, void **, 0x10) = temp_r3_6;
        }
        M2C_FIELD(temp_r3_6, void **, 0x14) = temp_r3_6;
        /* draft: did not compile: temp_r3_7 = temp_r3_6 + 0x10; */
        if (temp_r3_6 != NULL) {
            M2C_FIELD(temp_r3_5, M2C_UNK ***, 0x10) = temp_r3_7;
        }
        var_r6 = temp_r3_7;
        /* draft: did not compile: var_r3 = temp_r3_7 + 0x10; */
        var_ctr -= 1;
    } while (var_ctr != 0);
    M2C_FIELD(temp_r3_6, s32 *, 0x10) = 0;
}

void fn_8012365C(void *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r5;
    void *temp_r3_9;
    void *temp_r3_7;
    void **temp_r4_5;
    void **temp_r4_7;
    void **temp_r4_9;
    void *temp_r3_10;
    void *temp_r3_11;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r3_6;
    void **temp_r4_3;
    void *temp_r3_8;
    void **temp_r4;
    void *temp_r4_10;
    void *temp_r4_2;
    void *temp_r4_4;
    void *temp_r4_6;
    void *temp_r4_8;

    if ((u32) (M2C_FIELD(arg0, s32 *, 0xF4) + 0x10000) != -1U) {
        fn_80124E54((void *)(0));
        temp_r3 = M2C_FIELD(arg0, s32 *, 0xF0);
        if ((u32) (temp_r3 + 0x10000) != -1U) {
            M2C_FIELD((lbl_80350D60 + ((u8) temp_r3 * 0x404)), s32 *, 0xEC) = (s32) M2C_FIELD(arg0, s32 *, 0xEC);
            temp_r3_2 = M2C_FIELD(arg0, s32 *, 0xEC);
            if ((u32) (temp_r3_2 + 0x10000) != -1U) {
                M2C_FIELD((lbl_80350D60 + ((u8) temp_r3_2 * 0x404)), s32 *, 0xF0) = (s32) M2C_FIELD(arg0, s32 *, 0xF0);
            }
            temp_r3_3 = M2C_FIELD(arg0, void **, 0xF8);
            temp_r4 = M2C_FIELD(temp_r3_3, void ***, 4);
            if (temp_r4 != NULL) {
                *temp_r4 = M2C_FIELD(temp_r3_3, void **, 0);
            } else {
                /* draft: did not compile: lbl_80350DEC = M2C_FIELD(temp_r3_3, void **, 0); */
            }
            temp_r3_4 = M2C_FIELD(arg0, void **, 0xF8);
            temp_r4_2 = M2C_FIELD(temp_r3_4, void **, 0);
            if (temp_r4_2 != NULL) {
                M2C_FIELD(temp_r4_2, void ***, 4) = (void **) M2C_FIELD(temp_r3_4, void ***, 4);
            }
            M2C_FIELD(M2C_FIELD(arg0, void **, 0xF8), void **, 0) = (void *) lbl_80350DE8;
            if ((void *) lbl_80350DE8 != NULL) {
                M2C_FIELD(lbl_80350DE8, void **, 4) = (void *) M2C_FIELD(arg0, void **, 0xF8);
            }
            M2C_FIELD(M2C_FIELD(arg0, void **, 0xF8), void ***, 4) = NULL;
            lbl_80350DE8 = M2C_FIELD(arg0, void **, 0xF8);
            M2C_FIELD(arg0, void **, 0xF8) = NULL;
            return;
        }
        temp_r5 = M2C_FIELD(arg0, s32 *, 0xEC);
        if ((u32) (temp_r5 + 0x10000) != -1U) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0xF8), s32 *, 0xC) = temp_r5;
            M2C_FIELD((lbl_80350D60 + ((u8) M2C_FIELD(arg0, s32 *, 0xEC) * 0x404)), s32 *, 0xF0) = -1;
            M2C_FIELD((lbl_80350D60 + ((u8) M2C_FIELD(arg0, s32 *, 0xEC) * 0x404)), void **, 0xFC) = (void *) M2C_FIELD(arg0, void **, 0xFC);
            temp_r3_5 = M2C_FIELD(arg0, void **, 0xF8);
            if (temp_r3_5 != (void *) M2C_FIELD(arg0, void **, 0xFC)) {
                temp_r4_3 = M2C_FIELD(temp_r3_5, void ***, 4);
                if (temp_r4_3 != NULL) {
                    *temp_r4_3 = M2C_FIELD(temp_r3_5, void **, 0);
                } else {
                    /* draft: did not compile: lbl_80350DEC = M2C_FIELD(temp_r3_5, void **, 0); */
                }
                temp_r3_6 = M2C_FIELD(arg0, void **, 0xF8);
                temp_r4_4 = M2C_FIELD(temp_r3_6, void **, 0);
                if (temp_r4_4 != NULL) {
                    M2C_FIELD(temp_r4_4, void ***, 4) = (void **) M2C_FIELD(temp_r3_6, void ***, 4);
                }
                M2C_FIELD(M2C_FIELD(arg0, void **, 0xF8), void **, 0) = (void *) lbl_80350DE8;
                if ((void *) lbl_80350DE8 != NULL) {
                    M2C_FIELD(lbl_80350DE8, void **, 4) = (void *) M2C_FIELD(arg0, void **, 0xF8);
                }
                M2C_FIELD(M2C_FIELD(arg0, void **, 0xF8), void ***, 4) = NULL;
                lbl_80350DE8 = M2C_FIELD(arg0, void **, 0xF8);
                M2C_FIELD(arg0, void **, 0xF8) = NULL;
            }
            M2C_FIELD(arg0, void **, 0xF8) = NULL;
            M2C_FIELD(arg0, void **, 0xFC) = NULL;
            return;
        }
        temp_r3_7 = M2C_FIELD(arg0, void **, 0xF8);
        if (temp_r3_7 != (void *) M2C_FIELD(arg0, void **, 0xFC)) {
            temp_r4_5 = M2C_FIELD(temp_r3_7, void ***, 4);
            if (temp_r4_5 != NULL) {
                *temp_r4_5 = M2C_FIELD(temp_r3_7, void **, 0);
            } else {
                /* draft: did not compile: lbl_80350DEC = M2C_FIELD(temp_r3_7, void **, 0); */
            }
            temp_r3_8 = M2C_FIELD(arg0, void **, 0xF8);
            temp_r4_6 = M2C_FIELD(temp_r3_8, void **, 0);
            if (temp_r4_6 != NULL) {
                M2C_FIELD(temp_r4_6, void ***, 4) = (void **) M2C_FIELD(temp_r3_8, void ***, 4);
            }
            M2C_FIELD(M2C_FIELD(arg0, void **, 0xF8), void **, 0) = (void *) lbl_80350DE8;
            if ((void *) lbl_80350DE8 != NULL) {
                M2C_FIELD(lbl_80350DE8, void **, 4) = (void *) M2C_FIELD(arg0, void **, 0xF8);
            }
            M2C_FIELD(M2C_FIELD(arg0, void **, 0xF8), void ***, 4) = NULL;
            lbl_80350DE8 = M2C_FIELD(arg0, void **, 0xF8);
            M2C_FIELD(arg0, void **, 0xF8) = NULL;
            temp_r3_9 = M2C_FIELD(arg0, void **, 0xFC);
            temp_r4_7 = M2C_FIELD(temp_r3_9, void ***, 4);
            if (temp_r4_7 != NULL) {
                *temp_r4_7 = M2C_FIELD(temp_r3_9, void **, 0);
            } else {
                /* draft: did not compile: lbl_80350DEC = M2C_FIELD(temp_r3_9, void **, 0); */
            }
            temp_r3_10 = M2C_FIELD(arg0, void **, 0xFC);
            temp_r4_8 = M2C_FIELD(temp_r3_10, void **, 0);
            if (temp_r4_8 != NULL) {
                M2C_FIELD(temp_r4_8, void ***, 4) = (void **) M2C_FIELD(temp_r3_10, void ***, 4);
            }
            M2C_FIELD(M2C_FIELD(arg0, void **, 0xFC), void **, 0) = (void *) lbl_80350DE8;
            if ((void *) lbl_80350DE8 != NULL) {
                M2C_FIELD(lbl_80350DE8, void **, 4) = (void *) M2C_FIELD(arg0, void **, 0xFC);
            }
            M2C_FIELD(M2C_FIELD(arg0, void **, 0xFC), void ***, 4) = NULL;
            lbl_80350DE8 = M2C_FIELD(arg0, void **, 0xFC);
            M2C_FIELD(arg0, void **, 0xFC) = NULL;
            return;
        }
        temp_r4_9 = M2C_FIELD(temp_r3_7, void ***, 4);
        if (temp_r4_9 != NULL) {
            *temp_r4_9 = M2C_FIELD(temp_r3_7, void **, 0);
        } else {
            /* draft: did not compile: lbl_80350DEC = M2C_FIELD(temp_r3_7, void **, 0); */
        }
        temp_r3_11 = M2C_FIELD(arg0, void **, 0xF8);
        temp_r4_10 = M2C_FIELD(temp_r3_11, void **, 0);
        if (temp_r4_10 != NULL) {
            M2C_FIELD(temp_r4_10, void ***, 4) = (void **) M2C_FIELD(temp_r3_11, void ***, 4);
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 0xF8), void **, 0) = (void *) lbl_80350DE8;
        if ((void *) lbl_80350DE8 != NULL) {
            M2C_FIELD(lbl_80350DE8, void **, 4) = (void *) M2C_FIELD(arg0, void **, 0xF8);
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 0xF8), void ***, 4) = NULL;
        lbl_80350DE8 = M2C_FIELD(arg0, void **, 0xF8);
        M2C_FIELD(arg0, void **, 0xF8) = NULL;
        M2C_FIELD(arg0, void **, 0xFC) = NULL;
    }
}

s32 fn_801239AC(void *arg0) {
    M2C_FIELD(arg0, void **, 0xFC) = (void *) M2C_FIELD(arg0, void **, 0xF8);
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0xF8), s32 *, 8);
}

u32 fn_801239C0(void *arg0, u32 arg1) {
    M2C_UNK *temp_r5_3;
    u32 var_r6;
    M2C_UNK *var_r0;
    M2C_UNK *var_r7;
    M2C_UNK *var_r8;
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    u32 temp_r0;
    u32 temp_r5;
    u32 temp_r5_2;
    M2C_UNK *temp_r9;
    u32 var_r6_2;
    u32 var_r6_3;

    var_r6_2 = lbl_80350DF0;
    do {
        temp_r5 = var_r6_2;
        temp_cr0_eq = (u32) (var_r6_2 + 0x10000) == -1U;
        var_r6_2 += 1;
    } while (temp_cr0_eq != 0);
    lbl_80350DF0 = var_r6_2;
    var_r6 = temp_r5;
    /* draft: did not compile: var_r7 = lbl_80350DEC; */
    var_r8 = NULL;
loop_9:
    if (var_r7 != NULL) {
        temp_r0 = M2C_FIELD(var_r7, u32 *, 8);
        if (temp_r0 <= var_r6) {
            if (temp_r0 == var_r6) {
                var_r6_3 = lbl_80350DF0;
                do {
                    temp_r5_2 = var_r6_3;
                    temp_cr0_eq_2 = (u32) (var_r6_3 + 0x10000) == -1U;
                    var_r6_3 += 1;
                } while (temp_cr0_eq_2 != 0);
                lbl_80350DF0 = var_r6_3;
                var_r6 = temp_r5_2;
            }
            var_r8 = var_r7;
            var_r7 = M2C_FIELD(var_r7, M2C_UNK **, 0);
            goto loop_9;
        }
    }
    temp_r9 = lbl_80350DE8;
    if ((M2C_UNK *) lbl_80350DE8 == NULL) {
        return -1U;
    }
    temp_r5_3 = M2C_FIELD(lbl_80350DE8, M2C_UNK **, 0);
    lbl_80350DE8 = temp_r5_3;
    if (temp_r5_3 != NULL) {
        M2C_FIELD(temp_r5_3, s32 *, 4) = 0;
    }
    if (var_r8 == NULL) {
        /* draft: did not compile: lbl_80350DEC = temp_r9; */
    } else {
        /* draft: did not compile: *var_r8 = temp_r9; */
    }
    M2C_FIELD(temp_r9, M2C_UNK **, 4) = var_r8;
    M2C_FIELD(temp_r9, M2C_UNK **, 0) = var_r7;
    if (var_r7 != NULL) {
        M2C_FIELD(var_r7, M2C_UNK **, 4) = temp_r9;
    }
    M2C_FIELD(temp_r9, u32 *, 8) = var_r6;
    M2C_FIELD(temp_r9, u32 *, 0xC) = (u32) M2C_FIELD(arg0, u32 *, 0xF4);
    if (arg1 != 0U) {
        var_r0 = temp_r9;
    } else {
        var_r0 = NULL;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0xFC) = var_r0;
    M2C_FIELD(arg0, M2C_UNK **, 0xF8) = temp_r9;
    if (arg1 != 0U) {
        return var_r6;
    }
    return M2C_FIELD(arg0, u32 *, 0xF4);
}

s32 fn_80123AC4(u32 arg0) {
    u32 temp_r0;
    void *var_r4;

    if ((u32) (arg0 + 0x10000) != -1U) {
        /* draft: did not compile: var_r4 = lbl_80350DEC; */
loop_6:
        if (var_r4 == NULL) {
            goto block_7;
        }
        temp_r0 = M2C_FIELD(var_r4, u32 *, 8);
        if (temp_r0 == arg0) {

        } else {
            if (temp_r0 <= arg0) {
                var_r4 = M2C_FIELD(var_r4, void **, 0);
                goto loop_6;
            }
block_7:
            var_r4 = NULL;
        }
        if (var_r4 != NULL) {
            return M2C_FIELD(var_r4, s32 *, 0xC);
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return -1;
    }
    return -1;
}

void fn_80123B14(void *arg0, u8 arg1, u16 arg5) { } /* draft: stub */

s32 fn_80123D60(u8 arg0, u8 arg1, u16 arg2, u8 arg3, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

void fn_801241C0(void *arg0) {
    u16 temp_r0_3;
    u16 temp_r0_4;
    u8 temp_r0;
    u8 temp_r0_2;
    void *temp_r3;
    void *temp_r6;
    void *temp_r6_2;

    /* draft: did not compile: fn_80122FE0(2); */
    temp_r3 = &lbl_80339F00 + 0x800 + ((M2C_FIELD(arg0, s32 *, 0xF4) * 4) & 0x3FC);
    if ((u16) M2C_FIELD(temp_r3, u16 *, 2) == 1) {
        temp_r0 = M2C_FIELD(temp_r3, u8 *, 0);
        if (temp_r0 != 0xFF) {
            M2C_FIELD((&lbl_80339F00 + 0x800 + ((temp_r0 * 4) & 0x3FC)), u8 *, 1) = (u8) M2C_FIELD(temp_r3, u8 *, 1);
        } else {
            *(&lbl_80339F00 + 0x900 + M2C_FIELD(arg0, u8 *, 0x10C)) = M2C_FIELD(temp_r3, u8 *, 1);
        }
        temp_r0_2 = M2C_FIELD(temp_r3, u8 *, 1);
        if (temp_r0_2 != 0xFF) {
            *(&lbl_80339F00 + 0x800 + ((temp_r0_2 * 4) & 0x3FC)) = M2C_FIELD(temp_r3, u8 *, 0);
        } else if ((u8) M2C_FIELD(temp_r3, u8 *, 0) == 0xFF) {
            temp_r6 = &lbl_80339F00 + 0xA00 + (M2C_FIELD(arg0, u8 *, 0x10C) * 4);
            temp_r0_3 = M2C_FIELD(temp_r6, u16 *, 2);
            if (temp_r0_3 != -1U) {
                *(&lbl_80339F00 + 0xA00 + ((temp_r0_3 * 4) & 0x3FFFC)) = M2C_FIELD(temp_r6, u16 *, 0);
            } else {
                lbl_80350DF4 = M2C_FIELD(temp_r6, u16 *, 0);
            }
            temp_r0_4 = M2C_FIELD(temp_r6, u16 *, 0);
            if (temp_r0_4 != -1U) {
                M2C_FIELD((&lbl_80339F00 + 0xA00 + ((temp_r0_4 * 4) & 0x3FFFC)), u16 *, 2) = (u16) M2C_FIELD(temp_r6, u16 *, 2);
            }
        }
        M2C_FIELD(temp_r3, u16 *, 2) = 0U;
    }
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, u8 *, 0x10C) = 0U;
    temp_r6_2 = &lbl_80339F00 + 0xE00 + (((M2C_FIELD(arg0, s32 *, 0xF4)) * 4) & 0x3FC);
    if ((u16) M2C_FIELD(temp_r6_2, u16 *, 2) == 0) {
        M2C_FIELD(temp_r6_2, u16 *, 2) = 1U;
        if ((u8) lbl_80350DF9 != 0xFF) {
            M2C_FIELD(temp_r6_2, s8 *, 1) = 0xFF;
            M2C_FIELD((&lbl_80339F00 + 0xE00 + (lbl_80350DF8 * 4)), u8 *, 1) = (u8) (M2C_FIELD(arg0, s32 *, 0xF4));
            M2C_FIELD(temp_r6_2, u8 *, 0) = (u8) lbl_80350DF8;
        } else {
            lbl_80350DF9 = (u8) (M2C_FIELD(arg0, s32 *, 0xF4));
            M2C_FIELD(temp_r6_2, s8 *, 1) = 0xFF;
            M2C_FIELD(temp_r6_2, u8 *, 0) = 0xFFU;
        }
        lbl_80350DF8 = (u8) (M2C_FIELD(arg0, s32 *, 0xF4));
        if ((u8) M2C_FIELD(arg0, u8 *, 0x11D) != 0) {
            lbl_80350DF7 -= 1;
        } else {
            lbl_80350DF6 -= 1;
        }
    }
    M2C_FIELD(arg0, s32 *, 0xF4) = -1;
}

void synthInitAllocationAids(void) {
    s32 var_ctr_2;
    s32 var_ctr_4;
    s32 var_ctr_5;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r11;
    s32 temp_r4_2;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r7;
    s32 temp_r8;
    s32 temp_r9;
    u32 temp_r4;
    u32 temp_r5_2;
    u32 var_ctr;
    u32 var_ctr_3;
    u32 var_r6_2;
    s32 var_r31;
    void *var_r30;
    void *var_r4;
    void *var_r6;
    void *var_r7;
    void *var_r7_2;

    var_r31 = 0;
    if (M2C_FIELD(&lbl_8032CC00, u8 *, 0x210) > 0U) {
        temp_r4 = M2C_FIELD(&lbl_8032CC00, u8 *, 0x210) - 8;
        if ((u8) M2C_FIELD(&lbl_8032CC00, u8 *, 0x210) > 8U) {
            var_r30 = &lbl_80339F00 + 0xE00;
            var_ctr = (u32) (temp_r4 + 7) >> 3U;
            if (temp_r4 > 0U) {
                do {
                    temp_r11 = var_r31 + 1;
                    M2C_FIELD(var_r30, s8 *, 0) = (s8) (var_r31 - 1);
                    temp_r9 = var_r31 + 2;
                    temp_r8 = var_r31 + 3;
                    M2C_FIELD(var_r30, s8 *, 1) = temp_r11;
                    temp_r7 = var_r31 + 4;
                    temp_r6 = var_r31 + 5;
                    temp_r5 = var_r31 + 6;
                    M2C_FIELD(var_r30, s16 *, 2) = 1;
                    temp_r4_2 = var_r31 + 7;
                    temp_r0 = var_r31 + 8;
                    M2C_FIELD(var_r30, u8 *, 4) = var_r31;
                    var_r31 += 8;
                    M2C_FIELD(var_r30, s8 *, 5) = temp_r9;
                    M2C_FIELD(var_r30, s16 *, 6) = 1;
                    M2C_FIELD(var_r30, s8 *, 8) = temp_r11;
                    M2C_FIELD(var_r30, s8 *, 9) = temp_r8;
                    M2C_FIELD(var_r30, s16 *, 0xA) = 1;
                    M2C_FIELD(var_r30, s8 *, 0xC) = temp_r9;
                    M2C_FIELD(var_r30, s8 *, 0xD) = temp_r7;
                    M2C_FIELD(var_r30, s16 *, 0xE) = 1;
                    M2C_FIELD(var_r30, s8 *, 0x10) = temp_r8;
                    M2C_FIELD(var_r30, s8 *, 0x11) = temp_r6;
                    M2C_FIELD(var_r30, s16 *, 0x12) = 1;
                    M2C_FIELD(var_r30, s8 *, 0x14) = temp_r7;
                    M2C_FIELD(var_r30, s8 *, 0x15) = temp_r5;
                    M2C_FIELD(var_r30, s16 *, 0x16) = 1;
                    M2C_FIELD(var_r30, s8 *, 0x18) = temp_r6;
                    M2C_FIELD(var_r30, s8 *, 0x19) = temp_r4_2;
                    M2C_FIELD(var_r30, s16 *, 0x1A) = 1;
                    M2C_FIELD(var_r30, s8 *, 0x1C) = temp_r5;
                    M2C_FIELD(var_r30, s8 *, 0x1D) = temp_r0;
                    M2C_FIELD(var_r30, s16 *, 0x1E) = 1;
                    /* draft: did not compile: var_r30 += 0x20; */
                    var_ctr -= 1;
                } while (var_ctr != 0);
            }
        }
        var_r6 = &lbl_80339F00 + 0xE00 + (var_r31 * 4);
        var_ctr_2 = M2C_FIELD(&lbl_8032CC00, u8 *, 0x210) - var_r31;
        if (var_r31 < (u8) M2C_FIELD(&lbl_8032CC00, u8 *, 0x210)) {
            do {
                temp_r0_2 = var_r31 + 1;
                M2C_FIELD(var_r6, s8 *, 0) = (s8) (var_r31 - 1);
                var_r31 += 1;
                M2C_FIELD(var_r6, s8 *, 1) = temp_r0_2;
                M2C_FIELD(var_r6, s16 *, 2) = 1;
                /* draft: did not compile: var_r6 += 4; */
                var_ctr_2 -= 1;
            } while (var_ctr_2 != 0);
        }
    }
    M2C_FIELD(&lbl_80339F00, s8 *, 0xE00) = 0xFF;
    lbl_80350DF9 = 0;
    var_r6_2 = 0;
    M2C_FIELD((&lbl_80339F00 + 0xE00 + (M2C_FIELD(&lbl_8032CC00, u8 *, 0x210) * 4)), s8 *, -3) = 0xFF;
    lbl_80350DF8 = M2C_FIELD(&lbl_8032CC00, u8 *, 0x210) - 1;
    if ((u8) M2C_FIELD(&lbl_8032CC00, u8 *, 0x210) > 0U) {
        temp_r5_2 = M2C_FIELD(&lbl_8032CC00, u8 *, 0x210) - 8;
        if ((u8) M2C_FIELD(&lbl_8032CC00, u8 *, 0x210) > 8U) {
            var_r7 = &lbl_80339F00 + 0x800;
            var_ctr_3 = (u32) (temp_r5_2 + 7) >> 3U;
            if (temp_r5_2 > 0U) {
                do {
                    M2C_FIELD(var_r7, s16 *, 2) = 0;
                    var_r6_2 += 8;
                    M2C_FIELD(var_r7, s16 *, 6) = 0;
                    M2C_FIELD(var_r7, s16 *, 0xA) = 0;
                    M2C_FIELD(var_r7, s16 *, 0xE) = 0;
                    M2C_FIELD(var_r7, s16 *, 0x12) = 0;
                    M2C_FIELD(var_r7, s16 *, 0x16) = 0;
                    M2C_FIELD(var_r7, s16 *, 0x1A) = 0;
                    M2C_FIELD(var_r7, s16 *, 0x1E) = 0;
                    /* draft: did not compile: var_r7 += 0x20; */
                    var_ctr_3 -= 1;
                } while (var_ctr_3 != 0);
            }
        }
        var_r7_2 = &lbl_80339F00 + 0x800 + (var_r6_2 * 4);
        var_ctr_4 = M2C_FIELD(&lbl_8032CC00, u8 *, 0x210) - var_r6_2;
        if (var_r6_2 < (u8) M2C_FIELD(&lbl_8032CC00, u8 *, 0x210)) {
            do {
                M2C_FIELD(var_r7_2, s16 *, 2) = 0;
                /* draft: did not compile: var_r7_2 += 4; */
                var_ctr_4 -= 1;
            } while (var_ctr_4 != 0);
        }
    }
    var_r4 = &lbl_80339F00 + 0x900;
    var_ctr_5 = 8;
    do {
        M2C_FIELD(var_r4, s8 *, 0) = 0xFF;
        M2C_FIELD(var_r4, s8 *, 1) = 0xFF;
        M2C_FIELD(var_r4, s8 *, 2) = 0xFF;
        M2C_FIELD(var_r4, s8 *, 3) = 0xFF;
        M2C_FIELD(var_r4, s8 *, 4) = 0xFF;
        M2C_FIELD(var_r4, s8 *, 5) = 0xFF;
        M2C_FIELD(var_r4, s8 *, 6) = 0xFF;
        M2C_FIELD(var_r4, s8 *, 7) = 0xFF;
        M2C_FIELD(var_r4, s8 *, 8) = 0xFF;
        M2C_FIELD(var_r4, s8 *, 9) = 0xFF;
        M2C_FIELD(var_r4, s8 *, 0xA) = 0xFF;
        M2C_FIELD(var_r4, s8 *, 0xB) = 0xFF;
        M2C_FIELD(var_r4, s8 *, 0xC) = 0xFF;
        M2C_FIELD(var_r4, s8 *, 0xD) = 0xFF;
        M2C_FIELD(var_r4, s8 *, 0xE) = 0xFF;
        M2C_FIELD(var_r4, s8 *, 0xF) = 0xFF;
        M2C_FIELD(var_r4, s8 *, 0x10) = 0xFF;
        M2C_FIELD(var_r4, s8 *, 0x11) = 0xFF;
        M2C_FIELD(var_r4, s8 *, 0x12) = 0xFF;
        M2C_FIELD(var_r4, s8 *, 0x13) = 0xFF;
        M2C_FIELD(var_r4, s8 *, 0x14) = 0xFF;
        M2C_FIELD(var_r4, s8 *, 0x15) = 0xFF;
        M2C_FIELD(var_r4, s8 *, 0x16) = 0xFF;
        M2C_FIELD(var_r4, s8 *, 0x17) = 0xFF;
        M2C_FIELD(var_r4, s8 *, 0x18) = 0xFF;
        M2C_FIELD(var_r4, s8 *, 0x19) = 0xFF;
        M2C_FIELD(var_r4, s8 *, 0x1A) = 0xFF;
        M2C_FIELD(var_r4, s8 *, 0x1B) = 0xFF;
        M2C_FIELD(var_r4, s8 *, 0x1C) = 0xFF;
        M2C_FIELD(var_r4, s8 *, 0x1D) = 0xFF;
        M2C_FIELD(var_r4, s8 *, 0x1E) = 0xFF;
        M2C_FIELD(var_r4, s8 *, 0x1F) = 0xFF;
        /* draft: did not compile: var_r4 += 0x20; */
        var_ctr_5 -= 1;
    } while (var_ctr_5 != 0);
    lbl_80350DF7 = 0;
    lbl_80350DF4 = 0xFFFF;
    lbl_80350DF6 = 0;
}

s32 fn_80124624(s32 arg0) {
    s32 temp_r31;
    s32 temp_r3;
    u16 temp_r5_2;
    void *temp_r4;
    void *temp_r5;

    temp_r3 = fn_80123D60((unsigned char)(0xFF), (unsigned char)(0xFFFF), (unsigned short)(1), (unsigned char)(0), (long)(0));
    if ((u32) (temp_r3 + 0x10000) != -1U) {
        temp_r31 = temp_r3 * 0x404;
        /* draft: did not compile: temp_r5 = lbl_80350D60 + temp_r31; */
        M2C_FIELD(temp_r5, s8 *, 0x11C) = 1;
        M2C_FIELD((lbl_80350D60 + temp_r31), s8 *, 0x11D) = 1;
        M2C_FIELD((lbl_80350D60 + temp_r31), s16 *, 0x100) = 0xFFFF;
        /* draft: did not compile: fn_8012365C(lbl_80350D60 + temp_r31, 0xFFFF, temp_r5, 1); */
        temp_r5_2 = temp_r3 | 0xFFFF0000 | 0xFF00;
        /* draft: did not compile: temp_r4 = lbl_80350D60 + temp_r31; */
        M2C_FIELD(temp_r4, s32 *, 0xF4) = temp_r5_2;
        if (fn_8012E0B4(temp_r3, temp_r4, temp_r5_2) != 0U) {
            fn_8012E2A4(temp_r3);
        }
        /* draft: did not compile: fn_80122FE0(lbl_80350D60 + temp_r31, 2); */
        M2C_FIELD((lbl_80350D60 + temp_r31), s32 *, 0x34) = 0;
        /* draft: did not compile: fn_80123B14(lbl_80350D60 + temp_r31, arg0, 0); */
    }
    return temp_r3;
}

void fn_80124720(s32 arg0) {
    s32 temp_r29;
    s32 temp_r3_2;
    u16 temp_r0_3;
    u16 temp_r0_4;
    u8 temp_r0;
    u8 temp_r0_2;
    void *temp_r30;
    void *temp_r3;
    void *temp_r5;
    void *temp_r6;

    if ((u32) (arg0 + 0x10000) != -1U) {
        if (fn_8012E0B4() != 0U) {
            fn_8012E2A4(arg0);
        }
        temp_r29 = arg0 * 0x404;
        M2C_FIELD((lbl_80350D60 + temp_r29), s32 *, 0xF4) = arg0;
        /* draft: did not compile: temp_r30 = lbl_80350D60 + temp_r29; */
        fn_80122FE0(temp_r30, 2);
        temp_r3 = &lbl_80339F00 + 0x800 + ((M2C_FIELD(temp_r30, s32 *, 0xF4) * 4) & 0x3FC);
        if ((u16) M2C_FIELD(temp_r3, u16 *, 2) == 1) {
            temp_r0 = M2C_FIELD(temp_r3, u8 *, 0);
            if (temp_r0 != 0xFF) {
                M2C_FIELD((&lbl_80339F00 + 0x800 + ((temp_r0 * 4) & 0x3FC)), u8 *, 1) = (u8) M2C_FIELD(temp_r3, u8 *, 1);
            } else {
                *(&lbl_80339F00 + 0x900 + M2C_FIELD(temp_r30, u8 *, 0x10C)) = M2C_FIELD(temp_r3, u8 *, 1);
            }
            temp_r0_2 = M2C_FIELD(temp_r3, u8 *, 1);
            if (temp_r0_2 != 0xFF) {
                *(&lbl_80339F00 + 0x800 + ((temp_r0_2 * 4) & 0x3FC)) = M2C_FIELD(temp_r3, u8 *, 0);
            } else if ((u8) M2C_FIELD(temp_r3, u8 *, 0) == 0xFF) {
                temp_r6 = &lbl_80339F00 + 0xA00 + (M2C_FIELD(temp_r30, u8 *, 0x10C) * 4);
                temp_r0_3 = M2C_FIELD(temp_r6, u16 *, 2);
                if (temp_r0_3 != -1U) {
                    *(&lbl_80339F00 + 0xA00 + ((temp_r0_3 * 4) & 0x3FFFC)) = M2C_FIELD(temp_r6, u16 *, 0);
                } else {
                    lbl_80350DF4 = M2C_FIELD(temp_r6, u16 *, 0);
                }
                temp_r0_4 = M2C_FIELD(temp_r6, u16 *, 0);
                if (temp_r0_4 != -1U) {
                    M2C_FIELD((&lbl_80339F00 + 0xA00 + ((temp_r0_4 * 4) & 0x3FFFC)), u16 *, 2) = (u16) M2C_FIELD(temp_r6, u16 *, 2);
                }
            }
            M2C_FIELD(temp_r3, u16 *, 2) = 0U;
        }
        M2C_FIELD(temp_r30, s32 *, 0x34) = 0;
        M2C_FIELD(temp_r30, u8 *, 0x10C) = 0U;
        temp_r3_2 = M2C_FIELD(temp_r30, s32 *, 0xF4);
        temp_r5 = &lbl_80339F00 + 0xE00 + ((temp_r3_2 * 4) & 0x3FC);
        if ((u16) M2C_FIELD(temp_r5, u16 *, 2) == 0) {
            M2C_FIELD(temp_r5, u16 *, 2) = 1U;
            if ((u8) lbl_80350DF9 != 0xFF) {
                M2C_FIELD(temp_r5, s8 *, 1) = 0xFF;
                M2C_FIELD(temp_r5, u8 *, 0) = (u8) lbl_80350DF8;
                M2C_FIELD((&lbl_80339F00 + 0xE00 + (lbl_80350DF8 * 4)), u8 *, 1) = (u8) temp_r3_2;
            } else {
                lbl_80350DF9 = (u8) temp_r3_2;
                M2C_FIELD(temp_r5, s8 *, 1) = 0xFF;
                M2C_FIELD(temp_r5, u8 *, 0) = 0xFFU;
            }
            lbl_80350DF8 = (u8) temp_r3_2;
            if ((u8) M2C_FIELD(temp_r30, u8 *, 0x11D) != 0) {
                lbl_80350DF7 -= 1;
            } else {
                lbl_80350DF6 -= 1;
            }
        }
        M2C_FIELD(temp_r30, s32 *, 0xF4) = -1;
        M2C_FIELD((lbl_80350D60 + temp_r29), s8 *, 0x11C) = 0;
    }
}

void fn_80124938(s32 arg0) {
    u8 temp_r5;
    u16 temp_r0_3;
    u16 temp_r0_4;
    u8 temp_r0;
    u8 temp_r0_2;
    void *temp_r30;
    void *temp_r3;
    void *temp_r5_2;
    void *temp_r6;
    s32 temp_r3_2;

    /* draft: did not compile: temp_r30 = lbl_80350D60 + (arg0 * 0x404); */
    if ((u32) M2C_FIELD(temp_r30, u32 *, 0x34) != 0U) {
        fn_8012365C(temp_r30);
        temp_r5 = M2C_FIELD(temp_r30, s32 *, 0x114) & ~0;
        M2C_FIELD(temp_r30, s32 *, 0x118) = (s32) (M2C_FIELD(temp_r30, s32 *, 0x118) & ~3);
        M2C_FIELD(temp_r30, s32 *, 0x114) = temp_r5;
        M2C_FIELD(temp_r30, s32 *, 0x110) = 0;
        fn_80122FE0((void *)(temp_r30), (long)(2));
        temp_r3 = &lbl_80339F00 + 0x800 + ((M2C_FIELD(temp_r30, s32 *, 0xF4) * 4) & 0x3FC);
        if ((u16) M2C_FIELD(temp_r3, u16 *, 2) == 1) {
            temp_r0 = M2C_FIELD(temp_r3, u8 *, 0);
            if (temp_r0 != 0xFF) {
                M2C_FIELD((&lbl_80339F00 + 0x800 + ((temp_r0 * 4) & 0x3FC)), u8 *, 1) = (u8) M2C_FIELD(temp_r3, u8 *, 1);
            } else {
                *(&lbl_80339F00 + 0x900 + M2C_FIELD(temp_r30, u8 *, 0x10C)) = M2C_FIELD(temp_r3, u8 *, 1);
            }
            temp_r0_2 = M2C_FIELD(temp_r3, u8 *, 1);
            if (temp_r0_2 != 0xFF) {
                *(&lbl_80339F00 + 0x800 + ((temp_r0_2 * 4) & 0x3FC)) = M2C_FIELD(temp_r3, u8 *, 0);
            } else if ((u8) M2C_FIELD(temp_r3, u8 *, 0) == 0xFF) {
                temp_r6 = &lbl_80339F00 + 0xA00 + (M2C_FIELD(temp_r30, u8 *, 0x10C) * 4);
                temp_r0_3 = M2C_FIELD(temp_r6, u16 *, 2);
                if (temp_r0_3 != -1U) {
                    *(&lbl_80339F00 + 0xA00 + ((temp_r0_3 * 4) & 0x3FFFC)) = M2C_FIELD(temp_r6, u16 *, 0);
                } else {
                    lbl_80350DF4 = M2C_FIELD(temp_r6, u16 *, 0);
                }
                temp_r0_4 = M2C_FIELD(temp_r6, u16 *, 0);
                if (temp_r0_4 != -1U) {
                    M2C_FIELD((&lbl_80339F00 + 0xA00 + ((temp_r0_4 * 4) & 0x3FFFC)), u16 *, 2) = (u16) M2C_FIELD(temp_r6, u16 *, 2);
                }
            }
            M2C_FIELD(temp_r3, u16 *, 2) = 0U;
        }
        M2C_FIELD(temp_r30, u32 *, 0x34) = 0U;
        M2C_FIELD(temp_r30, u8 *, 0x10C) = 0U;
        temp_r3_2 = M2C_FIELD(temp_r30, s32 *, 0xF4);
        temp_r5_2 = &lbl_80339F00 + 0xE00 + ((temp_r3_2 * 4) & 0x3FC);
        if ((u16) M2C_FIELD(temp_r5_2, u16 *, 2) == 0) {
            M2C_FIELD(temp_r5_2, u16 *, 2) = 1U;
            if ((u8) lbl_80350DF9 != 0xFF) {
                M2C_FIELD(temp_r5_2, s8 *, 1) = 0xFF;
                M2C_FIELD(temp_r5_2, u8 *, 0) = (u8) lbl_80350DF8;
                M2C_FIELD((&lbl_80339F00 + 0xE00 + (lbl_80350DF8 * 4)), u8 *, 1) = (u8) temp_r3_2;
            } else {
                M2C_FIELD(temp_r5_2, u8 *, 0) = 0xFFU;
                M2C_FIELD(temp_r5_2, s8 *, 1) = 0xFF;
                lbl_80350DF9 = (u8) temp_r3_2;
            }
            lbl_80350DF8 = (u8) temp_r3_2;
            if ((u8) M2C_FIELD(temp_r30, u8 *, 0x11D) != 0) {
                lbl_80350DF7 -= 1;
            } else {
                lbl_80350DF6 -= 1;
            }
        }
        M2C_FIELD(temp_r30, s32 *, 0xF4) = -1;
    }
    if ((u8) M2C_FIELD(temp_r30, u8 *, 0x11C) != 0) {
        fn_8011A9AC(arg0);
    }
    fn_8012E2A4(arg0);
}

s32 fn_80124B6C(u32 arg0) {
    s8 var_r5;
    u32 temp_r0;
    u32 temp_r31;
    u32 var_r0;
    u32 var_r6;
    void *temp_r4;
    void *var_r4;

    var_r5 = -1;
    if ((u8) lbl_80350D30 != 0) {
        if ((u32) (arg0 + 0x10000) != -1U) {
            /* draft: did not compile: var_r4 = lbl_80350DEC; */
loop_7:
            if (var_r4 == NULL) {
                goto block_8;
            }
            temp_r0 = M2C_FIELD(var_r4, u32 *, 8);
            if (temp_r0 == arg0) {

            } else {
                if (arg0 >= temp_r0) {
                    var_r4 = M2C_FIELD(var_r4, void **, 0);
                    goto loop_7;
                }
block_8:
                var_r4 = NULL;
            }
            if (var_r4 != NULL) {
                var_r0 = M2C_FIELD(var_r4, u32 *, 0xC);
            } else {
                goto block_11;
            }
        } else {
block_11:
            var_r0 = -1U;
        }
        var_r6 = var_r0;
loop_16:
        if ((u32) (var_r6 + 0x10000) != -1U) {
            /* draft: did not compile: temp_r4 = lbl_80350D60 + ((u8) var_r6 * 0x404); */
            temp_r31 = M2C_FIELD(temp_r4, u32 *, 0xEC);
            if (var_r6 == (u32) M2C_FIELD(temp_r4, u32 *, 0xF4)) {
                fn_80124938((long)(0));
                var_r5 = 0;
            }
            var_r6 = temp_r31;
            goto loop_16;
        }
    }
    return var_r5;
}

void fn_80124C30(void *arg0, M2C_UNK arg_sp0) {
    s32 var_r28;
    s32 var_r28_2;
    s32 var_r29;
    u16 temp_r3_2;
    u16 var_r26;
    u32 var_r27;
    u32 var_r27_2;
    u32 var_r29_2;
    void *temp_r3;
    void *temp_r3_3;
    void *temp_r4;
    void *var_r30;

    var_r30 = arg0;
    var_r27 = 0U;
    var_r29 = 0;
loop_5:
    if (var_r27 < (u8) M2C_FIELD(&lbl_8032CC00, u8 *, 0x210)) {
        /* draft: did not compile: temp_r3 = lbl_80350D60 + var_r29; */
        if (((u32) M2C_FIELD(temp_r3, u32 *, 0x34) == 0U) && ((u8) M2C_FIELD(temp_r3, u8 *, 0x11C) == 0)) {
            fn_80124938(var_r27);
        }
        var_r29 += 0x404;
        var_r27 += 1;
        goto loop_5;
    }
loop_25:
    temp_r3_2 = M2C_FIELD(var_r30, u16 *, 0);
    if (temp_r3_2 != -1U) {
        if (temp_r3_2 & 0x8000) {
            var_r26 = temp_r3_2 & 0x3FFF;
loop_16:
            if (var_r26 <= (u16) M2C_FIELD(var_r30, u16 *, 2)) {
                var_r27_2 = 0U;
                var_r28 = 0;
loop_14:
                if (var_r27_2 < (u8) M2C_FIELD(&lbl_8032CC00, u8 *, 0x210)) {
                    /* draft: did not compile: temp_r3_3 = lbl_80350D60 + var_r28; */
                    if (((u32) M2C_FIELD(temp_r3_3, u32 *, 0x34) != 0U) && (var_r26 == (u16) M2C_FIELD(temp_r3_3, u16 *, 0x102))) {
                        fn_80124938(var_r27_2);
                    }
                    var_r28 += 0x404;
                    var_r27_2 += 1;
                    goto loop_14;
                }
                var_r26 += 1;
                goto loop_16;
            }
            /* draft: did not compile: var_r30 += 4; */
        } else {
            var_r29_2 = 0U;
            var_r28_2 = 0;
loop_23:
            if (var_r29_2 < (u8) M2C_FIELD(&lbl_8032CC00, u8 *, 0x210)) {
                /* draft: did not compile: temp_r4 = lbl_80350D60 + var_r28_2; */
                if (((u32) M2C_FIELD(temp_r4, u32 *, 0x34) != 0U) && ((u16) M2C_FIELD(var_r30, u16 *, 0) == (u16) M2C_FIELD(temp_r4, u16 *, 0x102))) {
                    fn_80124938(var_r29_2);
                }
                var_r28_2 += 0x404;
                var_r29_2 += 1;
                goto loop_23;
            }
            /* draft: did not compile: var_r30 += 2; */
        }
        goto loop_25;
    }
}

#pragma push
#pragma peephole off
s32 fn_80124D8C(void *arg0) {
    s32 temp_r4;
    u8 temp_r0;
    u8 temp_r5;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0xF4);
    if ((u32) (temp_r4 + 0x10000) != -1U) {
        temp_r5 = M2C_FIELD(arg0, u8 *, 0x121);
        if (temp_r5 != 0xFF) {
            temp_r0 = M2C_FIELD(arg0, u8 *, 0x122);
            if (temp_r0 == 0xFF) {
                if (*(&lbl_8033AE00 + (u8) temp_r4) == (u8) temp_r4) {
                    return 1;
                }
                /* Duplicate return node #7. Try simplifying control flow for better match */
                return 0;
            }
            if (temp_r4 == *(&lbl_8033AE40 + ((temp_r0 * 0x10) & 0xFF0) + temp_r5)) {
                return 1;
            }
            /* Duplicate return node #7. Try simplifying control flow for better match */
            return 0;
        }
    }
    return 0;
}
#pragma pop

void fn_80124E00(void *arg0) {
    u8 temp_r4;
    u8 temp_r0;
    u8 temp_r5;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0xF4);
    if ((u32) (temp_r4 + 0x10000) != -1U) {
        temp_r5 = M2C_FIELD(arg0, u8 *, 0x121);
        if (temp_r5 != 0xFF) {
            temp_r0 = M2C_FIELD(arg0, u8 *, 0x122);
            if (temp_r0 == 0xFF) {
                *(&lbl_8033AE00 + (u8) temp_r4) = (u8) temp_r4;
                return;
            }
            *(&lbl_8033AE40 + ((temp_r0 * 0x10) & 0xFF0) + temp_r5) = (u8) temp_r4;
        }
    }
}

void fn_80124E54(void *arg0) {
    s32 temp_r4;
    u8 temp_r0;
    u8 temp_r5;
    void *temp_r3;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0xF4);
    if (((u32) (temp_r4 + 0x10000) != -1U) && (temp_r5 = M2C_FIELD(arg0, u8 *, 0x121), ((temp_r5 == 0xFF) == 0))) {
        temp_r0 = M2C_FIELD(arg0, u8 *, 0x122);
        if (temp_r0 == 0xFF) {
            if (*(&lbl_8033AE00 + (u8) temp_r4) == (u8) temp_r4) {
                *(&lbl_8033AE00 + (u8) temp_r4) = 0xFF;
            }
        } else {
            temp_r3 = &lbl_8033AE40 + ((temp_r0 * 0x10) & 0xFF0);
            if (0 /* draft: did not compile */) {
                /* draft: did not compile: *(temp_r3 + temp_r5) = 0xFF; */
            }
        }
    }
}
