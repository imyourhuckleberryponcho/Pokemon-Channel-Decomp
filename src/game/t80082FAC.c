/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_80005888();
M2C_UNK fn_800146F0();
M2C_UNK fn_80020A10(u32 *);
M2C_UNK fn_80021078(u32, s32);
extern u8 lbl_8034FAA4;
extern u8 lbl_8034FAA5;
void *get_up_vector_for_viewing_mtx(M2C_UNK);
M2C_UNK fn_8014BB10();
M2C_UNK fn_8014F858(void *, M2C_UNK *, M2C_UNK *);
extern M2C_UNK __files;
extern M2C_UNK lbl_8022561C;
M2C_UNK fn_800058A8(s32);
M2C_UNK fn_80021878(void *, s32);
extern M2C_UNK lbl_80225638;
M2C_UNK fn_800208F4();
M2C_UNK fn_8007F508(M2C_UNK *);
s32 fn_80080790(void *);
M2C_UNK fn_80084608();
M2C_UNK fn_80084684();
M2C_UNK fn_800A5220(M2C_UNK *, s32, M2C_UNK);
M2C_UNK fn_800A5570();
M2C_UNK fn_800A5858();
extern M2C_UNK lbl_80225604;
extern M2C_UNK lbl_802256C4;
extern void *lbl_80350694;
extern f32 lbl_80351A00;
M2C_UNK fn_80082CB0(u32 *, void *, void **);
M2C_UNK fn_80014798(s32, s32, M2C_UNK *);
s32 fn_8007F8B8(s32, s32);
s32 fn_8007F7C4();
f32 fn_8007F848();
M2C_UNK fn_8007F9C0(u8 *, f32);
M2C_UNK fn_8007F9FC(u8 *, s32);
u8 fn_800A5588();
u8 fn_800A5868();
M2C_UNK fn_800A56EC();
M2C_UNK fn_800A5B68();

void fn_80082FAC(void *arg0, u8 *arg1);
void fn_80082FCC(void *arg0, u32 *arg1);
void fn_80083060(void *arg0, void *arg1, u32 *arg2);
void fn_8008311C(void *arg0, u8 *arg1);
void fn_8008313C(void ***arg0, s32 *arg1, void ***arg2, void ***arg3);
void fn_800831EC(void *arg0);
void fn_80083204(void ***arg0, s32 *arg1, void ***arg2, void ***arg3, M2C_UNK arg_sp0);
void fn_800832FC(void ***arg0, s32 *arg1, void ***arg2);
void fn_800833DC(void **arg0, s32 *arg1, void ***arg2, void **arg3, M2C_UNK arg_sp0);
void fn_800834BC(void *arg0);
void fn_800834D4(void ***arg0, s32 *arg1, void ***arg2, void ***arg3);
void fn_80083584(void ***arg0, s32 *arg1, void ***arg2);
void fn_80083600(void **arg0, s32 *arg1, void ***arg2, s32 *arg3, M2C_UNK arg_sp0);
void fn_800836C8(void *arg0);
void *fn_800836E0(void *arg0, s32 arg1, void *arg2);
void *fn_80083864(void *arg0, s32 arg1);
void *fn_800838DC(void *arg0, s16 arg1, M2C_UNK arg_sp0);
void fn_800839B8(M2C_UNK *arg0, void **arg1, u32 *arg2, u32 *arg3);
void fn_80083B2C(s32 arg0, void **arg1, u32 *arg2);
void *fn_80083BB0(void *arg0, s32 arg1, u8 arg2, u8 arg3, s32 *arg4, M2C_UNK arg_sp0);
void *fn_80083CB8(void *arg0, s32 arg1, u8 arg2, u8 arg3, void *arg4, M2C_UNK arg_sp0);
void *fn_80083DC8(void *arg0, s32 arg1, u8 arg2, u8 arg3, s32 *arg4, M2C_UNK arg_sp0);
void fn_80083EDC(void *arg0);
void fn_80083EF4(M2C_UNK *********arg0, void *arg1, u32 arg2);
void fn_80084064(s32 *arg0, void ***arg1, void *arg2);
s32 Tweaker(void *arg0, M2C_UNK arg_sp0);
void *fn_800842A0(void *arg0, s16 arg1);
void fn_80084358(void *arg0);
void fn_800843E8(void *arg0, M2C_UNK arg_sp0);
void fn_8008449C(s32 arg0, void *arg1);
s32 fn_800844E0(void *arg0, s32 arg1);
void fn_800845B0(void *arg0);

void fn_80082FAC(void *arg0, u8 *arg1) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, u8 *, 8) = (u8) *arg1;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    /* draft: did not compile: M2C_FIELD(arg0, s32 *, 0xC) = (s32) (arg0 + 4); */
}

void fn_80082FCC(void *arg0, u32 *arg1) {
    u8 temp_r3;

    temp_r3 = *arg1;
    if (temp_r3 == (u32) M2C_FIELD(arg0, u32 *, 0xC)) {
        fn_80020A10(arg1);
        M2C_FIELD(arg0, u32 *, 0xC) = (u32) *arg1;
    }
    fn_80021078(temp_r3, M2C_FIELD(arg0, s32 *, 4));
    if ((temp_r3 + 0xC) != 0) {
        fn_800146F0(temp_r3 + 0x10, -1);
    }
    fn_80005888(temp_r3);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) - 1);
}

void fn_80083060(void *arg0, void *arg1, u32 *arg2) {
    M2C_UNK var_r5;
    M2C_UNK var_r6;
    void *var_r10;
    void *var_r8;
    void *var_r9;

    /* draft: did not compile: var_r9 = arg1 + 4; */
    var_r8 = NULL;
    var_r5 = 1;
    var_r6 = 1;
    var_r10 = M2C_FIELD(arg1, void **, 4);
loop_4:
    if (var_r10 != NULL) {
        var_r9 = var_r10;
        if ((u32) *arg2 < (u32) M2C_FIELD(var_r10, u32 *, 0xC)) {
            var_r10 = M2C_FIELD(var_r10, void **, 0);
            var_r5 = 1;
        } else {
            var_r8 = var_r10;
            var_r10 = M2C_FIELD(var_r10, void **, 4);
            var_r5 = 0;
            var_r6 = 0;
        }
        goto loop_4;
    }
    if ((var_r8 == NULL) || ((u32) M2C_FIELD(var_r8, u32 *, 0xC) < (u32) *arg2)) {
        /* draft: did not compile: M2C_FIELD(arg0, void **, 0) = fn_80083DC8(arg1, var_r9, var_r5, var_r6); */
        M2C_FIELD(arg0, u8 *, 4) = (u8) lbl_8034FAA4;
        return;
    }
    M2C_FIELD(arg0, void **, 0) = var_r8;
    M2C_FIELD(arg0, u8 *, 4) = (u8) lbl_8034FAA5;
}

void fn_8008311C(void *arg0, u8 *arg1) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, u8 *, 8) = (u8) *arg1;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    /* draft: did not compile: M2C_FIELD(arg0, s32 *, 0xC) = (s32) (arg0 + 4); */
}

void fn_8008313C(void ***arg0, s32 *arg1, void ***arg2, void ***arg3) {
    void **temp_r0;
    void **temp_r3;
    void **temp_r3_2;
    void **temp_r5;
    void *temp_r4;

    temp_r5 = *arg2;
    temp_r3 = *arg3;
    if (temp_r5 == temp_r3) {
        *arg0 = temp_r3;
        return;
    }
    temp_r4 = *temp_r3;
    M2C_FIELD(*temp_r5, void ***, 4) = (void **) M2C_FIELD(temp_r4, void ***, 4);
    *M2C_FIELD(temp_r4, void ***, 4) = *temp_r5;
loop_4:
    temp_r3_2 = *arg2;
    temp_r0 = *arg3;
    if (temp_r3_2 != temp_r0) {
        *arg2 = M2C_FIELD(temp_r3_2, void ***, 4);
        fn_80005888((unsigned long)(0));
        *arg1 -= 1;
        goto loop_4;
    }
    *arg0 = temp_r0;
}

void fn_800831EC(void *arg0) {
    void *temp_r4;

    /* draft: did not compile: temp_r4 = arg0 + 4; */
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(temp_r4, void **, 4) = temp_r4;
    M2C_FIELD(arg0, void **, 4) = temp_r4;
}

void fn_80083204(void ***arg0, s32 *arg1, void ***arg2, void ***arg3, M2C_UNK arg_sp0) {
    void **temp_r0;
    void **temp_r3;
    void **temp_r3_2;
    void **temp_r3_4;
    void **temp_r5;
    void *temp_r3_3;
    void *temp_r4;
    void *temp_r4_2;

    temp_r5 = *arg2;
    temp_r3 = *arg3;
    if (temp_r5 == temp_r3) {
        *arg0 = temp_r3;
        return;
    }
    temp_r4 = *temp_r3;
    M2C_FIELD(*temp_r5, void ***, 4) = (void **) M2C_FIELD(temp_r4, void ***, 4);
    *M2C_FIELD(temp_r4, void ***, 4) = *temp_r5;
loop_10:
    temp_r3_2 = *arg2;
    temp_r0 = *arg3;
    if (temp_r3_2 != temp_r0) {
        if ((temp_r3_2 + 8) != NULL) {
            temp_r4_2 = M2C_FIELD(temp_r3_2, void **, 8);
            if (temp_r4_2 != NULL) {
                M2C_FIELD(temp_r4_2, s32 *, 8) = (s32) (M2C_FIELD(temp_r4_2, s32 *, 8) - 1);
                if ((s32) M2C_FIELD(temp_r4_2, s32 *, 8) == 0) {
                    temp_r3_3 = M2C_FIELD(temp_r3_2, void **, 8);
                    if (temp_r3_3 != NULL) {
                        M2C_FIELD(M2C_FIELD(temp_r3_3, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
                    }
                }
            }
            M2C_FIELD(temp_r3_2, void **, 8) = NULL;
        }
        temp_r3_4 = *arg2;
        *arg2 = M2C_FIELD(temp_r3_4, void ***, 4);
        fn_80005888(temp_r3_4);
        *arg1 -= 1;
        goto loop_10;
    }
    *arg0 = temp_r0;
}

void fn_800832FC(void ***arg0, s32 *arg1, void ***arg2) {
    void **temp_r5;
    void *temp_r3;
    void *temp_r4;

    temp_r5 = *arg2;
    *arg2 = M2C_FIELD(temp_r5, void ***, 4);
    M2C_FIELD(M2C_FIELD(temp_r5, void **, 0), void ***, 4) = (void **) M2C_FIELD(temp_r5, void ***, 4);
    *M2C_FIELD(temp_r5, void ***, 4) = M2C_FIELD(temp_r5, void **, 0);
    if ((temp_r5 + 8) != NULL) {
        temp_r4 = M2C_FIELD(temp_r5, void **, 8);
        if (temp_r4 != NULL) {
            M2C_FIELD(temp_r4, s32 *, 8) = (s32) (M2C_FIELD(temp_r4, s32 *, 8) - 1);
            if ((s32) M2C_FIELD(temp_r4, s32 *, 8) == 0) {
                temp_r3 = M2C_FIELD(temp_r5, void **, 8);
                if (temp_r3 != NULL) {
                    M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
                }
            }
        }
        M2C_FIELD(temp_r5, void **, 8) = NULL;
    }
    fn_80005888(temp_r5);
    *arg1 -= 1;
    *arg0 = *arg2;
}

void fn_800833DC(void **arg0, s32 *arg1, void ***arg2, void **arg3, M2C_UNK arg_sp0) {
    void *spC;
    s32 sp8;
    void **temp_r4_2;
    void *temp_r3;
    void *temp_r4;
    void *temp_r5;

    temp_r3 = get_up_vector_for_viewing_mtx(0xC);
    if (temp_r3 == NULL) {
        fn_8014F858(&__files + 0xA0, &lbl_8022561C, &__files);
        fn_8014BB10();
    }
    /* draft: did not compile: sp8 = arg1 + 4; */
    spC = temp_r3;
    if (0 /* draft: did not compile */) {
        M2C_FIELD(temp_r3, void **, 8) = (void *) *arg3;
        temp_r4 = M2C_FIELD(temp_r3, void **, 8);
        if (temp_r4 != NULL) {
            M2C_FIELD(temp_r4, s32 *, 8) = (s32) (M2C_FIELD(temp_r4, s32 *, 8) + 1);
        }
    }
    temp_r4_2 = *arg2;
    temp_r5 = spC;
    spC = NULL;
    M2C_FIELD(*temp_r4_2, void **, 4) = temp_r5;
    M2C_FIELD(temp_r5, void **, 0) = (void *) *temp_r4_2;
    *temp_r4_2 = temp_r5;
    M2C_FIELD(temp_r5, void ***, 4) = temp_r4_2;
    *arg1 += 1;
    *arg0 = temp_r5;
}

void fn_800834BC(void *arg0) {
    void *temp_r4;

    /* draft: did not compile: temp_r4 = arg0 + 4; */
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(temp_r4, void **, 4) = temp_r4;
    M2C_FIELD(arg0, void **, 4) = temp_r4;
}

void fn_800834D4(void ***arg0, s32 *arg1, void ***arg2, void ***arg3) {
    void **temp_r0;
    void **temp_r3;
    void **temp_r3_2;
    void **temp_r5;
    void *temp_r4;

    temp_r5 = *arg2;
    temp_r3 = *arg3;
    if (temp_r5 == temp_r3) {
        *arg0 = temp_r3;
        return;
    }
    temp_r4 = *temp_r3;
    M2C_FIELD(*temp_r5, void ***, 4) = (void **) M2C_FIELD(temp_r4, void ***, 4);
    *M2C_FIELD(temp_r4, void ***, 4) = *temp_r5;
loop_4:
    temp_r3_2 = *arg2;
    temp_r0 = *arg3;
    if (temp_r3_2 != temp_r0) {
        *arg2 = M2C_FIELD(temp_r3_2, void ***, 4);
        fn_80005888();
        *arg1 -= 1;
        goto loop_4;
    }
    *arg0 = temp_r0;
}

void fn_80083584(void ***arg0, s32 *arg1, void ***arg2) {
    void **temp_r3;
    void **temp_r4;

    temp_r3 = *arg2;
    *arg2 = M2C_FIELD(temp_r3, void ***, 4);
    M2C_FIELD(M2C_FIELD(temp_r3, void **, 0), void ***, 4) = (void **) M2C_FIELD(temp_r3, void ***, 4);
    temp_r4 = M2C_FIELD(temp_r3, void ***, 4);
    *temp_r4 = M2C_FIELD(temp_r3, void **, 0);
    fn_80005888(temp_r3, temp_r4);
    *arg1 -= 1;
    *arg0 = *arg2;
}

void fn_80083600(void **arg0, s32 *arg1, void ***arg2, s32 *arg3, M2C_UNK arg_sp0) {
    void *spC;
    s32 sp8;
    void **temp_r4;
    void *temp_r3;
    void *temp_r5;

    temp_r3 = get_up_vector_for_viewing_mtx(0xC);
    if (temp_r3 == NULL) {
        fn_8014F858(&__files + 0xA0, &lbl_8022561C, &__files);
        fn_8014BB10();
    }
    /* draft: did not compile: sp8 = arg1 + 4; */
    spC = temp_r3;
    if (0 /* draft: did not compile */) {
        M2C_FIELD(temp_r3, s32 *, 8) = (s32) *arg3;
    }
    temp_r4 = *arg2;
    temp_r5 = spC;
    spC = NULL;
    M2C_FIELD(*temp_r4, void **, 4) = temp_r5;
    M2C_FIELD(temp_r5, void **, 0) = (void *) *temp_r4;
    *temp_r4 = temp_r5;
    M2C_FIELD(temp_r5, void ***, 4) = temp_r4;
    *arg1 += 1;
    *arg0 = temp_r5;
}

void fn_800836C8(void *arg0) {
    void *temp_r4;

    /* draft: did not compile: temp_r4 = arg0 + 4; */
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(temp_r4, void **, 4) = temp_r4;
    M2C_FIELD(arg0, void **, 4) = temp_r4;
}

void *fn_800836E0(void *arg0, s32 arg1, void *arg2) { } /* draft: stub */

void *fn_80083864(void *arg0, s32 arg1) { } /* draft: stub */

void *fn_800838DC(void *arg0, s16 arg1, M2C_UNK arg_sp0) {
    void *sp10;
    s32 spC;
    M2C_UNK sp8;
    s32 var_r30;
    s32 var_r31;
    void *temp_r28;
    void *var_r29;

    if (arg0 != NULL) {
        var_r30 = 0;
        var_r31 = 0;
loop_12:
        if (var_r30 < (s32) M2C_FIELD(arg0, s32 *, 4)) {
            /* draft: did not compile: var_r29 = *(M2C_FIELD(arg0, s32 *, 0) + var_r31); */
loop_10:
            if (var_r29 != NULL) {
                temp_r28 = M2C_FIELD(var_r29, void **, 0x10);
                if (var_r29 != NULL) {
                    if (0 /* draft: did not compile */) {
                        /* draft: did not compile: sp10 = var_r29 + 8; */
                        spC = M2C_FIELD(var_r29, s32 *, 0xC);
                        /* draft: did not compile: fn_800834D4(&sp8, var_r29 + 4, &spC, &sp10); */
                    }
                    fn_80005888(var_r29);
                }
                var_r29 = temp_r28;
                goto loop_10;
            }
            var_r31 += 4;
            var_r30 += 1;
            goto loop_12;
        }
        fn_800058A8(M2C_FIELD(arg0, s32 *, 0));
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

void fn_800839B8(M2C_UNK *arg0, void **arg1, u32 *arg2, u32 *arg3) {
    s32 sp4C;
    M2C_UNK sp48;
    M2C_UNK sp44;
    u32 sp40;
    u32 sp3C;
    void *sp38;
    u32 sp34;
    M2C_UNK sp30;
    void *sp2C;
    void *sp28;
    u32 sp24;
    M2C_UNK *sp20;
    void *sp1C;
    u32 sp18;
    u32 sp14;
    M2C_UNK *sp10;
    void *spC;
    M2C_UNK sp8;
    u32 temp_r5;
    u32 temp_r5_2;
    void *var_r6;
    void *var_r6_2;

    if ((u32) *arg2 != (u32) *arg3) {
        sp3C = *arg3;
        sp40 = *arg2;
        fn_80083EDC((void *)(&sp44));
        sp18 = sp3C;
        sp14 = sp40;
        /* draft: did not compile: fn_80083B2C(&sp44, &sp14, &sp18); */
        temp_r5 = *arg2;
        sp34 = temp_r5;
        var_r6 = M2C_FIELD(arg0, void **, 8);
        sp38 = *arg1;
loop_3:
        if (0 /* draft: did not compile */) {
            M2C_FIELD(var_r6, s32 *, 8) = (s32) M2C_FIELD(sp38, s32 *, 8);
            var_r6 = M2C_FIELD(var_r6, void **, 4);
            sp38 = M2C_FIELD(sp38, void **, 4);
            goto loop_3;
        }
        sp1C = var_r6;
        /* draft: did not compile: fn_80084064(arg0, &sp1C, &sp44); */
        sp10 = &sp48;
        /* draft: did not compile: spC = sp4C; */
        /* draft: did not compile: fn_800834D4(&sp8, &sp44, &spC, &sp10); */
        return;
    }
    temp_r5_2 = *arg2;
    var_r6_2 = M2C_FIELD(arg0, void **, 8);
    sp28 = *arg1;
    sp24 = temp_r5_2;
    sp20 = arg0 + 4;
loop_7:
    if (0 /* draft: did not compile */) {
        M2C_FIELD(var_r6_2, s32 *, 8) = (s32) M2C_FIELD(sp28, s32 *, 8);
        var_r6_2 = M2C_FIELD(var_r6_2, void **, 4);
        sp28 = M2C_FIELD(sp28, void **, 4);
        goto loop_7;
    }
    sp2C = var_r6_2;
    /* draft: did not compile: fn_800834D4(&sp30, arg0, &sp2C, &sp20); */
}

void fn_80083B2C(s32 arg0, void **arg1, u32 *arg2) {
    s32 spC;
    M2C_UNK sp8;
    void *temp_r6;

loop_2:
    temp_r6 = *arg1;
    if (0 /* draft: did not compile */) {
        spC = arg0 + 4;
        /* draft: did not compile: fn_80083600(&sp8, arg0, &spC, temp_r6 + 8); */
        *arg1 = M2C_FIELD(*arg1, void **, 4);
        goto loop_2;
    }
}

void *fn_80083BB0(void *arg0, s32 arg1, u8 arg2, u8 arg3, s32 *arg4, M2C_UNK arg_sp0) {
    void *temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0) > -2U) {
        fn_8014F858(&__files + 0xA0, &lbl_80225638, &__files);
        fn_8014BB10();
    }
    temp_r3 = get_up_vector_for_viewing_mtx(0x10);
    if (temp_r3 == NULL) {
        fn_8014F858(&__files + 0xA0, &lbl_8022561C, &__files);
        fn_8014BB10();
    }
    if (0 /* draft: did not compile */) {
        M2C_FIELD(temp_r3, s32 *, 0xC) = (s32) *arg4;
    }
    M2C_FIELD(temp_r3, s32 *, 4) = 0;
    M2C_FIELD(temp_r3, s32 *, 0) = 0;
    M2C_FIELD(temp_r3, s32 *, 8) = (s32) (arg1 | (M2C_FIELD(temp_r3, s32 *, 8) & 1));
    if (arg2 != 0) {
        M2C_FIELD(arg1, void **, 0) = temp_r3;
    } else {
        M2C_FIELD(arg1, void **, 4) = temp_r3;
    }
    M2C_FIELD(arg0, u32 *, 0) = (u32) (M2C_FIELD(arg0, u32 *, 0) + 1);
    fn_80021878(temp_r3, M2C_FIELD(arg0, s32 *, 4));
    if (arg3 != 0) {
        M2C_FIELD(arg0, void **, 8) = temp_r3;
    }
    return temp_r3;
}

void *fn_80083CB8(void *arg0, s32 arg1, u8 arg2, u8 arg3, void *arg4, M2C_UNK arg_sp0) {
    void *temp_r3;
    void *temp_r3_2;

    if ((u32) M2C_FIELD(arg0, u32 *, 0) > -2U) {
        fn_8014F858(&__files + 0xA0, &lbl_80225638, &__files);
        fn_8014BB10();
    }
    temp_r3 = get_up_vector_for_viewing_mtx(0x14);
    if (temp_r3 == NULL) {
        fn_8014F858(&__files + 0xA0, &lbl_8022561C, &__files);
        fn_8014BB10();
    }
    /* draft: did not compile: temp_r3_2 = temp_r3 + 0xC; */
    if (temp_r3_2 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 0xC) = (s32) M2C_FIELD(arg4, s32 *, 0);
        M2C_FIELD(temp_r3_2, s32 *, 4) = (s32) M2C_FIELD(arg4, s32 *, 4);
    }
    M2C_FIELD(temp_r3, s32 *, 4) = 0;
    M2C_FIELD(temp_r3, s32 *, 0) = 0;
    M2C_FIELD(temp_r3, s32 *, 8) = (s32) (arg1 | (M2C_FIELD(temp_r3, s32 *, 8) & 1));
    if (arg2 != 0) {
        M2C_FIELD(arg1, void **, 0) = temp_r3;
    } else {
        M2C_FIELD(arg1, void **, 4) = temp_r3;
    }
    M2C_FIELD(arg0, u32 *, 0) = (u32) (M2C_FIELD(arg0, u32 *, 0) + 1);
    fn_80021878(temp_r3, M2C_FIELD(arg0, s32 *, 4));
    if (arg3 != 0) {
        M2C_FIELD(arg0, void **, 0xC) = temp_r3;
    }
    return temp_r3;
}

void *fn_80083DC8(void *arg0, s32 arg1, u8 arg2, u8 arg3, s32 *arg4, M2C_UNK arg_sp0) {
    void *temp_r3;
    void *temp_r5;

    if ((u32) M2C_FIELD(arg0, u32 *, 0) > -2U) {
        fn_8014F858(&__files + 0xA0, &lbl_80225638, &__files);
        fn_8014BB10();
    }
    temp_r3 = get_up_vector_for_viewing_mtx(0x14);
    if (temp_r3 == NULL) {
        fn_8014F858(&__files + 0xA0, &lbl_8022561C, &__files);
        fn_8014BB10();
    }
    /* draft: did not compile: temp_r5 = temp_r3 + 0xC; */
    if (temp_r5 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 0xC) = (s32) *arg4;
        /* draft: did not compile: fn_800208F4(temp_r5 + 4, arg4 + 4); */
    }
    M2C_FIELD(temp_r3, s32 *, 4) = 0;
    M2C_FIELD(temp_r3, s32 *, 0) = 0;
    M2C_FIELD(temp_r3, s32 *, 8) = (s32) (arg1 | (M2C_FIELD(temp_r3, s32 *, 8) & 1));
    if (arg2 != 0) {
        M2C_FIELD(arg1, void **, 0) = temp_r3;
    } else {
        M2C_FIELD(arg1, void **, 4) = temp_r3;
    }
    M2C_FIELD(arg0, u32 *, 0) = (u32) (M2C_FIELD(arg0, u32 *, 0) + 1);
    fn_80021878(temp_r3, M2C_FIELD(arg0, s32 *, 4));
    if (arg3 != 0) {
        M2C_FIELD(arg0, void **, 0xC) = temp_r3;
    }
    return temp_r3;
}

void fn_80083EDC(void *arg0) {
    void *temp_r4;

    /* draft: did not compile: temp_r4 = arg0 + 4; */
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(temp_r4, void **, 4) = temp_r4;
    M2C_FIELD(arg0, void **, 4) = temp_r4;
}

void fn_80083EF4(M2C_UNK *********arg0, void *arg1, u32 arg2) {
    u32 temp_r0_4;
    M2C_UNK ********var_r6;
    s32 temp_cr0_lt;
    s32 temp_r0_3;
    s32 var_ctr_4;
    s32 var_ctr_6;
    s32 var_ctr_8;
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r4_3;
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r0_5;
    u32 temp_r6;
    u32 var_ctr;
    u32 var_ctr_2;
    u32 var_ctr_3;
    u32 var_ctr_5;
    u32 var_ctr_7;
    u32 var_r5;

    var_r5 = arg2;
    temp_r6 = M2C_FIELD(arg1, u32 *, 0);
    if (var_r5 <= (u32) (temp_r6 >> 1U)) {
        temp_cr0_lt = (s32) var_r5 < 0;
        var_r6 = M2C_FIELD(arg1, M2C_UNK *********, 8);
        if (temp_cr0_lt == 0) {
            if ((s32) var_r5 > 0) {
                temp_r0 = var_r5 >> 3U;
                var_ctr = temp_r0;
                if (temp_r0 != 0) {
                    do {
                        var_r6 = M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(var_r6, void **, 4), void **, 4), void **, 4), void **, 4), void **, 4), void **, 4), void **, 4), M2C_UNK *********, 4);
                        var_ctr = var_ctr - 1;
                    } while (var_ctr != 0);
                    var_r5 = var_r5 & 7;
                    if (var_r5 != 0) {
                        goto block_6;
                    }
                } else {
block_6:
                    var_ctr_2 = var_r5;
                    do {
                        var_r6 = M2C_FIELD(var_r6, M2C_UNK *********, 4);
                        var_ctr_2 = var_ctr_2 - 1;
                    } while (var_ctr_2 != 0);
                }
            }
        } else {
            var_r4 = -(s32) var_r5;
            if (temp_cr0_lt != 0) {
                temp_r0_2 = (u32) var_r4 >> 3U;
                var_ctr_3 = temp_r0_2;
                if (temp_r0_2 != 0) {
                    do {
                        /* draft: did not compile: var_r6 = ********var_r6; */
                        var_ctr_3 = var_ctr_3 - 1;
                    } while (var_ctr_3 != 0);
                    var_r4 = var_r4 & 7;
                    if (var_r4 != 0) {
                        goto block_13;
                    }
                } else {
block_13:
                    var_ctr_4 = var_r4;
                    do {
                        /* draft: did not compile: var_r6 = *var_r6; */
                        var_ctr_4 = var_ctr_4 - 1;
                    } while (var_ctr_4 != 0);
                }
            }
        }
    } else {
        temp_r0_3 = var_r5 - temp_r6;
        /* draft: did not compile: var_r6 = arg1 + 4; */
        if (temp_r0_3 >= 0) {
            var_r4_2 = temp_r0_3;
            if (temp_r0_3 > 0) {
                temp_r0_4 = (u32) temp_r0_3 >> 3U;
                var_ctr_5 = temp_r0_4;
                if (temp_r0_4 != 0) {
                    do {
                        var_r6 = M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(var_r6, void **, 4), void **, 4), void **, 4), void **, 4), void **, 4), void **, 4), void **, 4), M2C_UNK *********, 4);
                        var_ctr_5 = var_ctr_5 - 1;
                    } while (var_ctr_5 != 0);
                    var_r4_2 = var_r4_2 & 7;
                    if (var_r4_2 != 0) {
                        goto block_21;
                    }
                } else {
block_21:
                    var_ctr_6 = var_r4_2;
                    do {
                        var_r6 = M2C_FIELD(var_r6, M2C_UNK *********, 4);
                        var_ctr_6 = var_ctr_6 - 1;
                    } while (var_ctr_6 != 0);
                }
            }
        } else {
            var_r4_3 = -temp_r0_3;
            if (temp_r0_3 < 0) {
                temp_r0_5 = (u32) var_r4_3 >> 3U;
                var_ctr_7 = temp_r0_5;
                if (temp_r0_5 != 0) {
                    do {
                        /* draft: did not compile: var_r6 = ********var_r6; */
                        var_ctr_7 = var_ctr_7 - 1;
                    } while (var_ctr_7 != 0);
                    var_r4_3 = var_r4_3 & 7;
                    if (var_r4_3 != 0) {
                        goto block_28;
                    }
                } else {
block_28:
                    var_ctr_8 = var_r4_3;
                    do {
                        /* draft: did not compile: var_r6 = *var_r6; */
                        var_ctr_8 = var_ctr_8 - 1;
                    } while (var_ctr_8 != 0);
                }
            }
        }
    }
    *arg0 = var_r6;
}

void fn_80084064(s32 *arg0, void ***arg1, void *arg2) {
    void **temp_r6_2;
    void **temp_r7;
    void *temp_r6;
    void *temp_r8;

    if ((u32) M2C_FIELD(arg2, u32 *, 0) != 0U) {
        /* draft: did not compile: temp_r6 = arg2 + 4; */
        M2C_FIELD(temp_r6, void **, 4) = temp_r6;
        temp_r7 = M2C_FIELD(arg2, void ***, 8);
        temp_r8 = M2C_FIELD(arg2, void **, 4);
        M2C_FIELD(arg2, void **, 4) = temp_r6;
        temp_r6_2 = *arg1;
        M2C_FIELD(*temp_r6_2, void ***, 4) = temp_r7;
        *temp_r7 = *temp_r6_2;
        *temp_r6_2 = temp_r8;
        M2C_FIELD(temp_r8, void ***, 4) = temp_r6_2;
        *arg0 += M2C_FIELD(arg2, u32 *, 0);
        M2C_FIELD(arg2, u32 *, 0) = 0U;
    }
}

s32 Tweaker(void *arg0, M2C_UNK arg_sp0) {
    s8 var_r29;
    M2C_UNK sp34;
    void *sp30;
    M2C_UNK sp28;
    void *sp24;
    M2C_UNK sp20;
    void *sp1C;
    M2C_UNK sp18;
    void *sp14;
    M2C_UNK sp10;
    M2C_UNK spC;
    M2C_UNK sp8;
    s32 temp_r25;
    M2C_UNK sp38;
    u8 temp_r26;
    u32 temp_r4;
    void *temp_r27;
    void *temp_r31;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *var_r26;

    fn_8007F508(&sp38);
    temp_r25 = fn_80080790(arg0);
    temp_r4 = M2C_FIELD(arg0, u32 *, 0x2D0);
    if (temp_r4 != 0U) {
        var_r26 = M2C_FIELD(arg0, void **, 0x2CC);
        /* draft: did not compile: temp_r31 = arg0 + 0x2C8; */
loop_7:
        if (var_r26 != temp_r31) {
            temp_r3 = M2C_FIELD(var_r26, void **, 8);
            if ((u32) M2C_FIELD(temp_r3, u32 *, 0xC) == temp_r4) {
                if (temp_r3 != NULL) {
                    M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
                }
                sp1C = var_r26;
                /* draft: did not compile: fn_80084608(&sp18, arg0 + 0x2C4, &sp1C); */
            } else {
                var_r26 = M2C_FIELD(var_r26, void **, 4);
                goto loop_7;
            }
        }
        var_r29 = 0;
        temp_r3_2 = get_up_vector_for_viewing_mtx(0x38);
        if (temp_r3_2 != NULL) {
            fn_800A5220(&sp20, temp_r25, 0x2F);
            temp_r26 = M2C_FIELD(arg0, u32 *, 0x2D0);
            M2C_FIELD(temp_r3_2, M2C_UNK **, 4) = &lbl_80225604;
            var_r29 = 1;
            if ((void *) lbl_80350694 == NULL) {
                temp_r3_3 = get_up_vector_for_viewing_mtx(0x14);
                if (temp_r3_3 != NULL) {
                    /* draft: did not compile: fn_8008311C(&sp8, &spC); */
                    M2C_FIELD(temp_r3_3, s32 *, 0x10) = 1;
                }
                lbl_80350694 = temp_r3_3;
            }
            temp_r27 = M2C_FIELD(temp_r3_2, void **, 0);
            M2C_FIELD(temp_r3_2, void **, 0) = (void *) lbl_80350694;
            sp30 = temp_r3_2;
            fn_800208F4(&sp34, &sp20);
            /* draft: did not compile: fn_80083060(&sp28, temp_r27, &sp30); */
            fn_800146F0(&sp34, -1);
            M2C_FIELD(temp_r27, s32 *, 0x10) = (s32) (M2C_FIELD(temp_r27, s32 *, 0x10) + 1);
            M2C_FIELD(temp_r3_2, M2C_UNK **, 4) = &lbl_802256C4;
            M2C_FIELD(temp_r3_2, void **, 8) = arg0;
            M2C_FIELD(temp_r3_2, u32 *, 0xC) = temp_r26;
            M2C_FIELD(temp_r3_2, s32 *, 0x10) = 0;
            /* draft: did not compile: fn_800A5570(temp_r3_2 + 0x14, temp_r3_2 + 0x10, 0x80000000, 0x7FFFFFFF, &lbl_802256C4); */
            M2C_FIELD(temp_r3_2, f32 *, 0x28) = (f32) lbl_80351A00;
            /* draft: did not compile: fn_800A5858(temp_r3_2 + 0x2C, temp_r3_2 + 0x28); */
        }
        sp24 = temp_r3_2;
        sp14 = temp_r31;
        /* draft: did not compile: fn_80084684(&sp10, arg0 + 0x2C4, &sp14, &sp24); */
        if (var_r29 != 0) {
            fn_800146F0(&sp20, -1);
        }
    }
    return 0;
}

void *fn_800842A0(void *arg0, s16 arg1) {
    u32 sp14;
    u32 sp10;
    void *spC;
    u32 sp8;
    s32 temp_cr0_eq;
    void *temp_r31;

    temp_cr0_eq = arg0 == NULL;
    if (temp_cr0_eq == 0) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_802256C4;
        if (temp_cr0_eq == 0) {
            M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_80225604;
            spC = arg0;
            temp_r31 = M2C_FIELD(arg0, void **, 0);
            fn_80082CB0(&sp14, temp_r31, &spC);
            sp10 = sp14;
            if (0 /* draft: did not compile */) {
                sp8 = sp14;
                fn_80082FCC(temp_r31, &sp8);
                M2C_FIELD(temp_r31, s32 *, 0x10) = (s32) (M2C_FIELD(temp_r31, s32 *, 0x10) + 1);
            }
        }
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

void fn_80084358(void *arg0) {
    void *sp10;
    s32 spC;
    M2C_UNK sp8;
    void *temp_r30;
    void *temp_r3;
    void *var_r31;

    /* draft: did not compile: temp_r30 = arg0 + 0x2C8; */
    var_r31 = M2C_FIELD(arg0, void **, 0x2CC);
loop_4:
    if (var_r31 != temp_r30) {
        temp_r3 = M2C_FIELD(var_r31, void **, 8);
        if (temp_r3 != NULL) {
            M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
        }
        var_r31 = M2C_FIELD(var_r31, void **, 4);
        goto loop_4;
    }
    sp10 = temp_r30;
    spC = M2C_FIELD(temp_r30, s32 *, 4);
    /* draft: did not compile: fn_8008313C(&sp8, arg0 + 0x2C4, &spC, &sp10); */
}

void fn_800843E8(void *arg0, M2C_UNK arg_sp0) {
    void *spC;
    M2C_UNK sp8;
    s32 temp_r4;
    u32 temp_r0;
    u32 temp_r27;
    u32 temp_r28;
    void *temp_r30;
    void *temp_r3;
    void *var_r31;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x18);
    var_r31 = M2C_FIELD(arg0, void **, 0x2CC);
    temp_r28 = temp_r4 + (M2C_FIELD(arg0, s32 *, 0x14) * 5);
    temp_r27 = temp_r4 + (M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x14) * 5);
loop_6:
    if (0 /* draft: did not compile */) {
        temp_r30 = var_r31;
        var_r31 = M2C_FIELD(var_r31, void **, 4);
        temp_r3 = M2C_FIELD(temp_r30, void **, 8);
        temp_r0 = M2C_FIELD(temp_r3, u32 *, 0xC);
        if ((temp_r28 <= temp_r0) && (temp_r0 < temp_r27)) {
            if (temp_r3 != NULL) {
                M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
            spC = temp_r30;
            /* draft: did not compile: fn_80084608(&sp8, arg0 + 0x2C4, &spC); */
        }
        goto loop_6;
    }
}

void fn_8008449C(s32 arg0, void *arg1) {
    M2C_UNK sp8;

    fn_80014798(arg0, fn_8007F8B8(M2C_FIELD(arg1, s32 *, 8), M2C_FIELD(arg1, s32 *, 0xC)), &sp8);
}

s32 fn_800844E0(void *arg0, s32 arg1) {
    u8 temp_r0;

    temp_r0 = *M2C_FIELD(arg0, u8 **, 0xC);
    switch ((s32) temp_r0) {                        /* irregular */
    case 2:
        M2C_FIELD(arg0, s32 *, 0x10) = fn_8007F7C4();
        if (0 /* draft: did not compile */) {
            return 1;
        }
        fn_8007F9FC(M2C_FIELD(arg0, u8 **, 0xC), M2C_FIELD(arg0, s32 *, 0x10));
        return 0;
    case 1:
        M2C_FIELD(arg0, f32 *, 0x28) = fn_8007F848();
        if (0 /* draft: did not compile */) {
            return 1;
        }
        fn_8007F9C0(M2C_FIELD(arg0, u8 **, 0xC), M2C_FIELD(arg0, f32 *, 0x28));
        return 0;
    default:
        return 0;
    }
}

void fn_800845B0(void *arg0) {
    u8 temp_r0;

    temp_r0 = *M2C_FIELD(arg0, u8 **, 0xC);
    switch ((s32) temp_r0) {                        /* irregular */
    case 2:
        /* draft: did not compile: fn_800A56EC(arg0 + 0x14); */
        return;
    case 1:
        /* draft: did not compile: fn_800A5B68(arg0 + 0x2C); */
        return;
    }
}
