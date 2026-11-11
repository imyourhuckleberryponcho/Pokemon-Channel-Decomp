/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

s32 fn_80005868(s32);
M2C_UNK fn_800C5B7C(M2C_UNK *, M2C_UNK, M2C_UNK *);
s32 strncmp(void *, M2C_UNK *, M2C_UNK);
extern M2C_UNK lbl_80221A08;
extern M2C_UNK lbl_80221A14;
extern M2C_UNK lbl_8034E6B0;
extern M2C_UNK lbl_8034E6B8;
extern M2C_UNK lbl_8034E6C0;
extern M2C_UNK lbl_8034E6C8;
extern M2C_UNK lbl_8034E6D0;
M2C_UNK PSMTXScale(M2C_UNK *, f32, f32, f32);
M2C_UNK GXInitTexObj(M2C_UNK *, u16, u16, u16, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXInitTexObjLOD(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, f32, f32, f32);
M2C_UNK GXLoadTexObj(M2C_UNK *, s32);
M2C_UNK GXLoadTexMtxImm(M2C_UNK *, s32, M2C_UNK);
extern void *lbl_803504A0;
extern f32 lbl_803513A0;
extern f32 lbl_803513A4;
u8 *fn_800C639C(u8 *, s32, s32, s32, s32);
u8 *fn_800C6544(u8 *, s32);
u8 *get_up_vector_for_viewing_mtx();
M2C_UNK fn_8014BB10();
M2C_UNK fn_8014F858(void *, M2C_UNK *, M2C_UNK *);
extern M2C_UNK __files;
extern M2C_UNK lbl_80221A20;
extern u8 lbl_8034E6D5;
M2C_UNK fn_80070D60(M2C_UNK *, f32, f32, f32);
M2C_UNK PSMTXMultVecSR(M2C_UNK *, f32 *, f32 *, f32);
f64 fn_80156E70(f64, f64);
extern f32 lbl_803513B0;
extern f32 lbl_803513B4;
extern f32 lbl_803513B8;
extern f32 lbl_803513BC;
extern f64 lbl_803513C0;
extern f32 lbl_803513C8;
extern f32 lbl_803513CC;
extern f32 lbl_803513D0;
extern f32 lbl_803513D4;
extern f32 lbl_803513D8;
extern f32 lbl_803513DC;
extern f32 lbl_803513E0;
M2C_UNK PSVECSubtract();
M2C_UNK HSD_CObjGetEyePosition();
M2C_UNK HSD_CObjGetEyePosition_800F2B24();
M2C_UNK fn_80071314(s32, s32, M2C_UNK);
s32 *fn_8009D344(s32);
M2C_UNK fn_80019E6C();
M2C_UNK fn_8001A0D0();
s32 HSD_CObjLoadDesc();
extern M2C_UNK lbl_80221A68;
extern M2C_UNK lbl_80221ACC;
extern M2C_UNK lbl_80221B10;
extern M2C_UNK lbl_80223D70;
extern f32 lbl_803513E4;
extern f32 lbl_803513E8;
extern f32 lbl_803513EC;
extern f32 lbl_803513F0;
extern f32 lbl_803513F4;
M2C_UNK fn_80005888(void *);
M2C_UNK method_resetPath(M2C_UNK *);
M2C_UNK fn_80019BF0();
M2C_UNK fn_80019E84();
M2C_UNK fn_80079FFC(void *, M2C_UNK);
M2C_UNK fn_80019AE8();

void *fn_8001573C(void *arg0, void *arg1);
s32 fn_800157F0(void *arg0);
void fn_80015934(void *arg0, s32 arg2, s32 arg3);
void *fn_80015A4C(void *arg0, s32 arg1);
void fn_80015B64(void *arg0, s32 arg1, void **arg2, s32 *arg3, s32 *arg4, s32 arg5, M2C_UNK arg_sp0);
u8 *fn_80015C88(void *arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_80015CF4(void *arg0, s32 arg1, s32 *arg2, s32 *arg3);
u8 *fn_80015E5C(void *arg0, u8 *arg1, s32 *arg2, s32 arg3);
u16 fn_80015ECC(void *arg0);
u16 fn_80015EFC(void *arg0);
u16 fn_80015F2C(void *arg0);
u8 **fn_80015F5C(u8 **arg0);
s32 *fn_80016044(s32 *arg0);
s32 fn_80016080(s32 arg0);
void fn_800160BC(void *arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4, f32 farg0);
void fn_80016140(void *arg0);
s32 fn_8001615C(void *arg0);
s32 fn_80016178(s32 arg0);
void fn_800161A8(void *arg0);
void fn_8001638C(void *arg0);
void fn_800163E0(void *arg0, s32 arg1, s8 arg2, f32 farg0);
void fn_80016468(void *arg0, void *arg1, void *arg2, s8 arg3, f32 farg0);
void fn_800164FC(s32 arg0, s32 arg1);
void fn_8001652C(void *arg0, void *arg1, f32 farg0);
void fn_800165B0(void *arg0, void *arg1);
void fn_8001662C(s32 **arg0, s32 arg1);
void *fn_80016698(void *arg0);
void *fn_8001677C(void *arg0, s32 arg1);
void *fn_8001685C(void *arg0, s32 **arg1);
void fn_80016964(void *arg0);
void *fn_80016A80(void *arg0, s16 arg1);
s32 fn_80016C88(void *arg0);

#pragma push
#pragma peephole off
void *fn_8001573C(void *arg0, void *arg1) {
    M2C_UNK sp8;

    /* draft: did not compile: fn_80015F5C(&sp8); */
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s8 *, 8) = 0;
    M2C_FIELD(arg0, s8 *, 9) = 0;
    M2C_FIELD(arg0, void **, 0xC) = arg1;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    if (strncmp(M2C_FIELD(arg0, void **, 0xC), &lbl_80221A08, 8) != 0) {
        fn_800C5B7C(&lbl_80221A14, 0x36, &lbl_8034E6B0);
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = fn_80005868(M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0xC) * 4);
    fn_800157F0(arg0);
    return arg0;
}
#pragma pop

s32 fn_800157F0(void *arg0) {
    s32 temp_r4;
    u32 var_r30;
    void *var_r31;

    var_r30 = 0U;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    /* draft: did not compile: var_r31 = M2C_FIELD(arg0, void **, 0xC) + 0x20; */
loop_14:
    if (var_r30 >= (u32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), u32 *, 0xC)) {
        /* draft: did not compile: *(M2C_FIELD(arg0, s32 *, 0x1C) + (M2C_FIELD(arg0, s32 *, 0x20) * 4)) = 0; */
        return 1;
    }
    if (strncmp(var_r31, &lbl_8034E6B8, 4) == 0) {
        if ((void *) M2C_FIELD(arg0, void **, 0x10) == NULL) {
            M2C_FIELD(arg0, void **, 0x10) = var_r31;
        }
        goto block_13;
    }
    if (strncmp(var_r31, &lbl_8034E6C0, 4) == 0) {
        if ((void *) M2C_FIELD(arg0, void **, 0x14) == NULL) {
            M2C_FIELD(arg0, void **, 0x14) = var_r31;
        }
        goto block_13;
    }
    if (strncmp(var_r31, &lbl_8034E6C8, 4) == 0) {
        if ((void *) M2C_FIELD(arg0, void **, 0x18) == NULL) {
            M2C_FIELD(arg0, void **, 0x18) = var_r31;
        }
        goto block_13;
    }
    if (strncmp(var_r31, &lbl_8034E6D0, 4) == 0) {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x20);
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (temp_r4 + 1);
        /* draft: did not compile: *(M2C_FIELD(arg0, s32 *, 0x1C) + (temp_r4 * 4)) = var_r31; */
block_13:
        var_r30 += 1;
        /* draft: did not compile: var_r31 += M2C_FIELD(var_r31, s32 *, 4); */
        goto loop_14;
    }
    return 0;
}

void fn_80015934(void *arg0, s32 arg2, s32 arg3) {
    s32 var_r31;
    M2C_UNK sp28;
    M2C_UNK sp8;
    s32 var_r30;
    u16 var_r7;
    void *temp_r3;

    if ((u8) M2C_FIELD(arg0, u8 *, 8) != 0) {
        var_r31 = M2C_FIELD(lbl_803504A0, u16 *, 0x1E);
        var_r30 = M2C_FIELD(lbl_803504A0, u16 *, 0x20);
        var_r7 = M2C_FIELD(lbl_803504A0, u16 *, 0x18);
    } else {
        temp_r3 = M2C_FIELD(arg0, void **, 0x18);
        var_r31 = M2C_FIELD(temp_r3, u16 *, 0x1A);
        var_r30 = M2C_FIELD(temp_r3, u16 *, 0x1C);
        var_r7 = M2C_FIELD(temp_r3, u16 *, 0x14);
    }
    GXInitTexObj(&sp8, var_r31, var_r30, var_r7, 0, 0, 0);
    GXInitTexObjLOD(&sp8, 1, 1, 0, 0, 0, lbl_803513A0, lbl_803513A0, lbl_803513A0);
    GXLoadTexObj(&sp8, arg2);
    PSMTXScale(&sp28, lbl_803513A4 / (f32) var_r31, lbl_803513A4 / (f32) var_r30, lbl_803513A4);
    GXLoadTexMtxImm(&sp28, arg3, 1);
}

void *fn_80015A4C(void *arg0, s32 arg1) { } /* draft: stub */

void fn_80015B64(void *arg0, s32 arg1, void **arg2, s32 *arg3, s32 *arg4, s32 arg5, M2C_UNK arg_sp0) {
    u8 sp8;
    s32 temp_r0;
    s32 temp_r26;
    s32 temp_r31;
    s32 temp_r7;
    s32 var_r9;
    u16 temp_r8_2;
    void *temp_r3;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r8;

    temp_r4 = M2C_FIELD(arg0, void **, 0x18);
    /* draft: did not compile: var_r9 = fn_80015A4C((void *)(0), (long)(0)); */
    if ((var_r9 < (s32) M2C_FIELD(temp_r4, u16 *, 8)) || ((s32) M2C_FIELD(temp_r4, u16 *, 0xA) < var_r9)) {
        /* draft: did not compile: var_r9 = fn_80015A4C(arg0, 0x81AC); */
    }
    temp_r8 = M2C_FIELD(arg0, void **, 0x18);
    temp_r8_2 = M2C_FIELD(temp_r8, u16 *, 8);
    temp_r0 = M2C_FIELD(temp_r8, u16 *, 0x16) * M2C_FIELD(temp_r8, u16 *, 0x18);
    temp_r7 = var_r9 - temp_r8_2;
    temp_r26 = temp_r7 / temp_r0;
    temp_r31 = (var_r9 - temp_r8_2) % temp_r0;
    /* draft: did not compile: fn_80015CF4(arg0, arg1, &sp8, arg5, temp_r7, temp_r8_2); */
    if (arg2 != NULL) {
        temp_r4_2 = M2C_FIELD(arg0, void **, 0x18);
        /* draft: did not compile: *arg2 = temp_r4_2 + ((M2C_FIELD(temp_r4_2, s32 *, 0x10) * temp_r26) + 0x20); */
    }
    if (arg3 != NULL) {
        temp_r4_3 = M2C_FIELD(arg0, void **, 0x18);
        *arg3 = sp8 + (M2C_FIELD(temp_r4_3, u16 *, 0xC) * (temp_r31 % M2C_FIELD(temp_r4_3, u16 *, 0x16)));
    }
    if (arg4 != NULL) {
        temp_r3 = M2C_FIELD(arg0, void **, 0x18);
        *arg4 = M2C_FIELD(temp_r3, u16 *, 0xE) * (temp_r31 / (s32) M2C_FIELD(temp_r3, u16 *, 0x16));
    }
}

u8 *fn_80015C88(void *arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    u8 temp_r0;
    u8 var_r4;

    if ((u8) M2C_FIELD(arg0, u8 *, 8) != 0) {
        return fn_800C639C(arg1, arg2, arg3, arg4, arg5);
    }
    temp_r0 = *arg1;
    var_r4 = temp_r0;
    if ((s32) temp_r0 == 0xB3) {
        var_r4 = 0x80;
    }
    /* draft: did not compile: fn_80015B64(var_r4); */
    return arg1 + 1;
}

void fn_80015CF4(void *arg0, s32 arg1, s32 *arg2, s32 *arg3) { } /* draft: stub */

u8 *fn_80015E5C(void *arg0, u8 *arg1, s32 *arg2, s32 arg3) {
    u8 temp_r0;
    u8 var_r4;

    if ((u8) M2C_FIELD(arg0, u8 *, 8) != 0) {
        if (arg2 != NULL) {
            *arg2 = 0;
        }
        return fn_800C6544(arg1, arg3);
    }
    temp_r0 = *arg1;
    var_r4 = temp_r0;
    if ((s32) temp_r0 == 0xB3) {
        var_r4 = 0x80;
    }
    /* draft: did not compile: fn_80015CF4(var_r4); */
    return arg1 + 1;
}

u16 fn_80015ECC(void *arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x18);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, u16 *, 0xC);
    }
    if ((void *) lbl_803504A0 != NULL) {
        return M2C_FIELD(lbl_803504A0, u16 *, 0x10);
    }
    return 0U;
}

u16 fn_80015EFC(void *arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x18);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, u16 *, 0xE);
    }
    if ((void *) lbl_803504A0 != NULL) {
        return M2C_FIELD(lbl_803504A0, u16 *, 0x12);
    }
    return 0U;
}

u16 fn_80015F2C(void *arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x10);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, u16 *, 0x10);
    }
    if ((void *) lbl_803504A0 != NULL) {
        return M2C_FIELD(lbl_803504A0, u16 *, 0xE);
    }
    return 0U;
}

u8 **fn_80015F5C(u8 **arg0) {
    u8 *temp_r29;
    u8 *temp_r3;
    u8 *temp_r3_2;

    *arg0 = NULL;
    temp_r3 = get_up_vector_for_viewing_mtx(0x10);
    if (temp_r3 == NULL) {
        fn_8014F858(&__files + 0xA0, &lbl_80221A20, &__files);
        fn_8014BB10();
    }
    *arg0 = temp_r3;
    temp_r29 = *arg0;
    if (temp_r29 != NULL) {
        M2C_FIELD(temp_r29, s32 *, 4) = 3;
        M2C_FIELD(temp_r29, s32 *, 8) = 1;
        temp_r3_2 = get_up_vector_for_viewing_mtx(M2C_FIELD(temp_r29, s32 *, 4) + 1);
        if (temp_r3_2 == NULL) {
            fn_8014F858(&__files + 0xA0, &lbl_80221A20, &__files);
            fn_8014BB10();
        }
        M2C_FIELD(temp_r29, u8 **, 0xC) = temp_r3_2;
    }
    *M2C_FIELD(*arg0, u8 **, 0xC) = lbl_8034E6D5;
    M2C_FIELD(*arg0, s32 *, 0) = 0;
    return arg0;
}

s32 *fn_80016044(s32 *arg0) {
    *arg0 = 0;
    /* draft: did not compile: fn_80016178(arg0 + 4); */
    return arg0;
}

s32 fn_80016080(s32 arg0) {
    /* draft: did not compile: fn_80016044(arg0 + 0x10); */
    /* draft: did not compile: fn_80016140(arg0); */
    return arg0;
}

void fn_800160BC(void *arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4, f32 farg0) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    M2C_FIELD(arg0, s32 *, 8) = arg3;
    M2C_FIELD(arg0, f32 *, 0xC) = farg0;
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg4, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg4, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg4, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg4, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg4, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg4, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(arg4, s32 *, 0x18);
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) M2C_FIELD(arg4, u8 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg4, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg4, s32 *, 0x24);
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) M2C_FIELD(arg4, s32 *, 0x28);
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(arg4, f32 *, 0x2C);
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) M2C_FIELD(arg4, s32 *, 0x30);
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) M2C_FIELD(arg4, f32 *, 0x34);
}

void fn_80016140(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = -1;
    M2C_FIELD(arg0, s32 *, 4) = 0x08000000;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}

s32 fn_8001615C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4) != 0x08000000;
}

s32 fn_80016178(s32 arg0) {
    fn_8001638C((void *)(0));
    return arg0;
}

void fn_800161A8(void *arg0) {
    M2C_UNK sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f2;
    f32 temp_f2_2;

    if (lbl_803513B0 < (f32) fabs(M2C_FIELD(arg0, f32 *, 8))) {
        fn_80070D60(&sp14, M2C_FIELD(arg0, f32 *, 0), M2C_FIELD(arg0, f32 *, 4), M2C_FIELD(arg0, f32 *, 8));
        sp8 = lbl_803513B4;
        spC = lbl_803513B4;
        sp10 = lbl_803513B8;
        PSMTXMultVecSR(&sp14, &sp8, &sp8, lbl_803513B4);
        /* draft: did not compile: fn_800164FC(arg0, &sp8); */
        return;
    }
    temp_f1 = M2C_FIELD(arg0, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_803513B4;
    if (lbl_803513BC < temp_f1) {
        M2C_FIELD(arg0, f32 *, 0) = (f32) fn_80156E70((double)(lbl_803513C0), (double)(0));
        if (lbl_803513C8 < (temp_f2 = M2C_FIELD(arg0, f32 *, 0))) {
            M2C_FIELD(arg0, f32 *, 0) = (f32) (temp_f2 - lbl_803513CC);
        } else if (lbl_803513BC < temp_f2) {
            M2C_FIELD(arg0, f32 *, 0) = (f32) (lbl_803513D0 - temp_f2);
            M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) + lbl_803513D0);
        }
    } else if (temp_f1 < lbl_803513D4) {
        M2C_FIELD(arg0, f32 *, 0) = (f32) -fn_80156E70(-temp_f1, lbl_803513C0);
        temp_f2_2 = M2C_FIELD(arg0, f32 *, 0);
        if (temp_f2_2 < lbl_803513D8) {
            M2C_FIELD(arg0, f32 *, 0) = (f32) (temp_f2_2 + lbl_803513CC);
        } else if (temp_f2_2 < lbl_803513D4) {
            M2C_FIELD(arg0, f32 *, 0) = (f32) (lbl_803513DC - temp_f2_2);
            M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) + lbl_803513D0);
        }
    }
    if (lbl_803513D0 < (temp_f1_2 = M2C_FIELD(arg0, f32 *, 4))) {
        M2C_FIELD(arg0, f32 *, 4) = (f32) fn_80156E70((double)(lbl_803513C0), (double)(0));
        temp_f1_3 = M2C_FIELD(arg0, f32 *, 4);
        if (lbl_803513D0 < temp_f1_3) {
            M2C_FIELD(arg0, f32 *, 4) = (f32) (temp_f1_3 - lbl_803513CC);
        }
    } else if (temp_f1_2 < lbl_803513DC) {
        M2C_FIELD(arg0, f32 *, 4) = (f32) -fn_80156E70(-temp_f1_2, lbl_803513C0);
        temp_f1_4 = M2C_FIELD(arg0, f32 *, 4);
        if (temp_f1_4 < lbl_803513DC) {
            M2C_FIELD(arg0, f32 *, 4) = (f32) (temp_f1_4 + lbl_803513CC);
        }
    }
}

void fn_8001638C(void *arg0) {
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_803513B4;
    M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_803513B4;
    M2C_FIELD(arg0, f32 *, 0) = (f32) lbl_803513B4;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg0, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg0, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(arg0, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_FIELD(arg0, f32 *, 0x14);
    M2C_FIELD(arg0, s8 *, 0x18) = 0;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_803513E0;
}

void fn_800163E0(void *arg0, s32 arg1, s8 arg2, f32 farg0) {
    s32 sp10;
    s32 spC;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp8;

    M2C_FIELD(arg0, s8 *, 0x18) = arg2;
    M2C_FIELD(arg0, f32 *, 0x28) = farg0;
    /* draft: did not compile: HSD_CObjGetEyePosition(arg1, arg0 + 0x1C); */
    /* draft: did not compile: HSD_CObjGetEyePosition_800F2B24(arg1, arg0 + 0xC); */
    /* draft: did not compile: PSVECSubtract(arg0 + 0x1C, arg0 + 0xC, &sp8); */
    sp14 = sp8;
    sp18 = spC;
    sp1C = sp10;
    /* draft: did not compile: fn_800164FC(arg0, &sp14, spC, sp8); */
}

void fn_80016468(void *arg0, void *arg1, void *arg2, s8 arg3, f32 farg0) {
    s32 sp10;
    s32 spC;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp8;

    M2C_FIELD(arg0, s8 *, 0x18) = arg3;
    M2C_FIELD(arg0, f32 *, 0x28) = farg0;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_FIELD(arg2, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(arg2, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_FIELD(arg2, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(arg1, f32 *, 8);
    /* draft: did not compile: PSVECSubtract(arg0 + 0x1C, arg0 + 0xC, &sp8); */
    sp14 = sp8;
    sp18 = spC;
    sp1C = sp10;
    /* draft: did not compile: fn_800164FC(arg0, &sp14, spC, sp8); */
}

void fn_800164FC(s32 arg0, s32 arg1) {
    fn_80071314(arg1, arg0, 0);
}

void fn_8001652C(void *arg0, void *arg1, f32 farg0) {
    s32 sp10;
    s32 spC;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp8;

    M2C_FIELD(arg0, f32 *, 0x28) = farg0;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(arg1, f32 *, 8);
    if ((u8) M2C_FIELD(arg0, u8 *, 0x18) != 0) {
        /* draft: did not compile: PSVECSubtract(arg0 + 0x1C, arg0 + 0xC, &sp8); */
        sp14 = sp8;
        sp18 = spC;
        sp1C = sp10;
        /* draft: did not compile: fn_800164FC(arg0, &sp14, spC, sp8); */
    }
}

void fn_800165B0(void *arg0, void *arg1) {
    s32 sp10;
    s32 spC;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp8;

    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, s8 *, 0x18) = 1;
    /* draft: did not compile: PSVECSubtract(arg0 + 0x1C, arg0 + 0xC, &sp8); */
    sp14 = sp8;
    sp18 = spC;
    sp1C = sp10;
    /* draft: did not compile: fn_800164FC(arg0, &sp14, spC, sp8); */
}

void fn_8001662C(s32 **arg0, s32 arg1) {
    s32 *temp_r4;
    s32 *var_r0;

    /* draft: did not compile: var_r0 = get_up_vector_for_viewing_mtx(0x20); */
    if (var_r0 != NULL) {
        var_r0 = fn_8009D344(arg1);
    }
    *arg0 = var_r0;
    temp_r4 = *arg0;
    if (temp_r4 != NULL) {
        *temp_r4 += 1;
    }
}

void *fn_80016698(void *arg0) {
    s32 temp_r4;

    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &lbl_80221B10;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0x200000;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &lbl_80223D70;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 5;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    temp_r4 = M2C_FIELD(arg0, s32 *, 8) | 2;
    M2C_FIELD(arg0, s32 *, 8) = temp_r4;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &lbl_80221ACC;
    M2C_FIELD(arg0, s32 *, 0x60) = HSD_CObjLoadDesc(&lbl_80221A68, temp_r4, 5, &lbl_80223D70, 0x200000, 0, arg0);
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    /* draft: did not compile: fn_80016080(arg0 + 0x78); */
    /* draft: did not compile: fn_80019E6C(arg0 + 0xC0); */
    /* draft: did not compile: fn_80016044(arg0 + 0xD0); */
    /* draft: did not compile: fn_80016178(arg0 + 0x10C); */
    /* draft: did not compile: fn_8001A0D0(arg0 + 0x154); */
    /* draft: did not compile: fn_80016178(arg0 + 0x160); */
    M2C_FIELD(arg0, s32 *, 0x198) = 0;
    fn_80016964(arg0);
    return arg0;
}

void *fn_8001677C(void *arg0, s32 arg1) {
    s32 temp_r4;

    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &lbl_80221B10;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0x200000;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &lbl_80223D70;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 5;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    temp_r4 = M2C_FIELD(arg0, s32 *, 8) | 2;
    M2C_FIELD(arg0, s32 *, 8) = temp_r4;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &lbl_80221ACC;
    M2C_FIELD(arg0, s32 *, 0x60) = HSD_CObjLoadDesc(arg1, temp_r4, 5, &lbl_80223D70, 0x200000, 0, arg0);
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    /* draft: did not compile: fn_80016080(arg0 + 0x78); */
    /* draft: did not compile: fn_80019E6C(arg0 + 0xC0); */
    /* draft: did not compile: fn_80016044(arg0 + 0xD0); */
    /* draft: did not compile: fn_80016178(arg0 + 0x10C); */
    /* draft: did not compile: fn_8001A0D0(arg0 + 0x154); */
    /* draft: did not compile: fn_80016178(arg0 + 0x160); */
    M2C_FIELD(arg0, s32 *, 0x198) = 0;
    fn_80016964(arg0);
    return arg0;
}

void *fn_8001685C(void *arg0, s32 **arg1) {
    s32 *temp_r4;

    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &lbl_80223D70;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &lbl_80221B10;
    M2C_FIELD(arg0, s32 *, 8) = 0x200000;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 5;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 2);
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &lbl_80221ACC;
    M2C_FIELD(arg0, s32 *, 0x60) = HSD_CObjLoadDesc(M2C_FIELD(*arg1, s32 *, 0x1C), 5, &lbl_80223D70, 0x200000, 0, arg0);
    M2C_FIELD(arg0, s32 **, 0x64) = (s32 *) *arg1;
    temp_r4 = M2C_FIELD(arg0, s32 **, 0x64);
    if (temp_r4 != NULL) {
        *temp_r4 += 1;
    }
    /* draft: did not compile: fn_80016080(arg0 + 0x78); */
    /* draft: did not compile: fn_80019E6C(arg0 + 0xC0); */
    /* draft: did not compile: fn_80016044(arg0 + 0xD0); */
    /* draft: did not compile: fn_80016178(arg0 + 0x10C); */
    /* draft: did not compile: fn_8001A0D0(arg0 + 0x154); */
    /* draft: did not compile: fn_80016178(arg0 + 0x160); */
    M2C_FIELD(arg0, s32 *, 0x198) = 0;
    fn_80016964(arg0);
    return arg0;
}

void fn_80016964(void *arg0) {
    s32 temp_r6;

    M2C_FIELD(arg0, s32 *, 0x28) = 2;
    M2C_FIELD(arg0, s32 *, 4) = 0x10000;
    M2C_FIELD(arg0, s32 *, 0x38) = 1;
    temp_r6 = M2C_FIELD(arg0, s32 *, 8) | 0x104;
    M2C_FIELD(arg0, s32 *, 8) = temp_r6;
    M2C_FIELD(arg0, s32 *, 0xCC) = 1;
    M2C_FIELD(arg0, s32 *, 0x5C) = 1;
    M2C_FIELD(arg0, s8 *, 0x108) = 0;
    /* draft: did not compile: fn_800163E0(arg0 + 0x10C, M2C_FIELD(arg0, s32 *, 0x60), 1, temp_r6, 1, lbl_803513E0); */
    M2C_FIELD(arg0, f32 *, 0x138) = (f32) lbl_803513E4;
    M2C_FIELD(arg0, f32 *, 0x13C) = (f32) lbl_803513E8;
    M2C_FIELD(arg0, f32 *, 0x140) = (f32) lbl_803513E8;
    M2C_FIELD(arg0, f32 *, 0x144) = (f32) lbl_803513EC;
    M2C_FIELD(arg0, f32 *, 0x148) = (f32) lbl_803513F0;
    M2C_FIELD(arg0, f32 *, 0x14C) = (f32) lbl_803513EC;
    M2C_FIELD(arg0, f32 *, 0x150) = (f32) lbl_803513F4;
    M2C_FIELD(arg0, s32 *, 0x160) = (s32) M2C_FIELD(arg0, s32 *, 0x10C);
    M2C_FIELD(arg0, s32 *, 0x164) = (s32) M2C_FIELD(arg0, s32 *, 0x110);
    M2C_FIELD(arg0, s32 *, 0x168) = (s32) M2C_FIELD(arg0, s32 *, 0x114);
    M2C_FIELD(arg0, s32 *, 0x16C) = (s32) M2C_FIELD(arg0, s32 *, 0x118);
    M2C_FIELD(arg0, s32 *, 0x170) = (s32) M2C_FIELD(arg0, s32 *, 0x11C);
    M2C_FIELD(arg0, s32 *, 0x174) = (s32) M2C_FIELD(arg0, s32 *, 0x120);
    M2C_FIELD(arg0, u8 *, 0x178) = (u8) M2C_FIELD(arg0, u8 *, 0x124);
    M2C_FIELD(arg0, s32 *, 0x17C) = (s32) M2C_FIELD(arg0, s32 *, 0x128);
    M2C_FIELD(arg0, s32 *, 0x180) = (s32) M2C_FIELD(arg0, s32 *, 0x12C);
    M2C_FIELD(arg0, s32 *, 0x184) = (s32) M2C_FIELD(arg0, s32 *, 0x130);
    M2C_FIELD(arg0, f32 *, 0x188) = (f32) M2C_FIELD(arg0, f32 *, 0x134);
    M2C_FIELD(arg0, s32 *, 0x18C) = 0;
    M2C_FIELD(arg0, s32 *, 0x190) = 0;
    M2C_FIELD(arg0, s32 *, 0x194) = 0;
    M2C_FIELD(arg0, s32 *, 0x19C) = 0;
    M2C_FIELD(arg0, s32 *, 0x1D8) = 0;
    M2C_FIELD(arg0, s8 *, 0x1DC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1E0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0;
}

void *fn_80016A80(void *arg0, s16 arg1) {
    void *sp1C;
    s32 sp18;
    M2C_UNK sp14;
    void *sp10;
    s32 spC;
    M2C_UNK sp8;
    u16 temp_r4;
    u8 var_r0;
    void *temp_r29;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r7;
    void *temp_r7_2;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x20) = &lbl_80221ACC;
        method_resetPath(&lbl_80221ACC);
        temp_r29 = M2C_FIELD(arg0, void **, 0x60);
        if (temp_r29 != NULL) {
            temp_r4 = M2C_FIELD(temp_r29, u16 *, 4);
            var_r0 = temp_r4 == 0xFFFF;
            if (var_r0 != 0) {

            } else {
                M2C_FIELD(temp_r29, u16 *, 4) = (u16) (temp_r4 - 1);
                var_r0 = temp_r4 == 0;
            }
            if (((s32) var_r0 != 0) && (temp_r29 != NULL)) {
                temp_r4_2 = M2C_FIELD(temp_r29, void **, 0);
                M2C_FIELD(temp_r4_2, M2C_UNK (**)(void *, void *), 0x30)(temp_r29, temp_r4_2);
                temp_r4_3 = M2C_FIELD(temp_r29, void **, 0);
                M2C_FIELD(temp_r4_3, M2C_UNK (**)(void *, void *), 0x34)(temp_r29, temp_r4_3);
            }
        }
        if (0 /* draft: did not compile */) {
            temp_r4_4 = M2C_FIELD(arg0, void **, 0x198);
            if (temp_r4_4 != NULL) {
                M2C_FIELD(temp_r4_4, s32 *, 0) = (s32) (M2C_FIELD(temp_r4_4, s32 *, 0) - 1);
                if ((s32) M2C_FIELD(temp_r4_4, s32 *, 0) == 0) {
                    temp_r3 = M2C_FIELD(arg0, void **, 0x198);
                    if (temp_r3 != NULL) {
                        M2C_FIELD(M2C_FIELD(temp_r3, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                    }
                }
            }
            M2C_FIELD(arg0, void **, 0x198) = NULL;
        }
        if (0 /* draft: did not compile */) {
            /* draft: did not compile: temp_r7 = arg0 + 0x158; */
            sp1C = temp_r7;
            sp18 = M2C_FIELD(arg0, s32 *, 0x15C);
            /* draft: did not compile: fn_80019E84(&sp14, arg0 + 0x154, &sp18, &sp1C, temp_r7); */
        }
        if (0 /* draft: did not compile */) {
            /* draft: did not compile: temp_r7_2 = arg0 + 0xC4; */
            sp10 = temp_r7_2;
            spC = M2C_FIELD(arg0, s32 *, 0xC8);
            /* draft: did not compile: fn_80019BF0(&sp8, arg0 + 0xC0, &spC, &sp10, temp_r7_2); */
        }
        if (0 /* draft: did not compile */) {
            temp_r4_5 = M2C_FIELD(arg0, void **, 0x64);
            if (temp_r4_5 != NULL) {
                M2C_FIELD(temp_r4_5, s32 *, 0) = (s32) (M2C_FIELD(temp_r4_5, s32 *, 0) - 1);
                if ((s32) M2C_FIELD(temp_r4_5, s32 *, 0) == 0) {
                    temp_r3_2 = M2C_FIELD(arg0, void **, 0x64);
                    if (temp_r3_2 != NULL) {
                        M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
                    }
                }
            }
            M2C_FIELD(arg0, void **, 0x64) = NULL;
        }
        fn_80079FFC(arg0, 0);
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

s32 fn_80016C88(void *arg0) {
    fn_80019AE8();
    return M2C_FIELD(arg0, s32 *, 0x60);
}
