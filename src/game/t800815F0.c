/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

u32 get_up_vector_for_viewing_mtx();
s32 RegisterCallback(void *, s32, s32, s32);
M2C_UNK fn_80083600(M2C_UNK *, void *, void **, s32 *);
void *fn_80083864(u32, s32);
M2C_UNK fn_800834D4(M2C_UNK *, void **, void **);
M2C_UNK fn_80083584(M2C_UNK *, void **);
M2C_UNK fn_80078F20();
s32 fn_80078F84();
extern void *lbl_803503E8;
M2C_UNK fn_8007F708(void *);
M2C_UNK fn_8008065C(void *, void *);
s32 fn_80080738(void *);
M2C_UNK fn_800808D0(void *, M2C_UNK);
M2C_UNK fn_800146F0(M2C_UNK *, M2C_UNK, s32);
M2C_UNK fn_800208F4(M2C_UNK *, M2C_UNK *);
M2C_UNK fn_80083060(M2C_UNK *, void *, void **);
M2C_UNK fn_8008311C(M2C_UNK *, M2C_UNK *);
M2C_UNK fn_800833DC(M2C_UNK *, s32, s32 *, void **);
M2C_UNK fn_800A5308(M2C_UNK *, s32, M2C_UNK *);
extern M2C_UNK lbl_802255EC;
extern M2C_UNK lbl_80225604;
extern M2C_UNK lbl_8034FA88;
extern void *lbl_80350694;
M2C_UNK fn_80005888();
M2C_UNK fn_80082FCC(void *, u32 *);
M2C_UNK fn_800832FC();
M2C_UNK fn_80081324(void **, s32 *);
M2C_UNK fn_8008085C(M2C_UNK, s32);
s32 fn_800807CC(M2C_UNK);
M2C_UNK fn_80015F5C(M2C_UNK *);
M2C_UNK fn_80024FD8();
M2C_UNK fn_80031578(void *, s32, M2C_UNK, M2C_UNK);
extern s32 lbl_8035067C;
extern s32 lbl_80350680;
extern s32 lbl_80350684;
M2C_UNK fn_80020A10();
u8 fn_80078FAC();
M2C_UNK fn_80078FCC(s32);
M2C_UNK fn_80079010();
M2C_UNK fn_8007F758(u8 *, s32 *, M2C_UNK);
extern u8 lbl_802C49A8;
extern void *lbl_80350688;
M2C_UNK memmove();
s32 strlen(void *, M2C_UNK *);
extern M2C_UNK lbl_802CD2CC;
M2C_UNK fn_80014798(M2C_UNK *, M2C_UNK *);
extern M2C_UNK lbl_8034FA78;
s32 fn_80078CB8(M2C_UNK, s32);
s32 fn_80005868(s32);
M2C_UNK fn_80021078(u32, s32);
void *fn_80083BB0(void *, void *, M2C_UNK, M2C_UNK);
extern u8 lbl_8034FAA8;
extern u8 lbl_8034FAA9;
void *fn_80083CB8(void *, void *, M2C_UNK, M2C_UNK);
extern u8 lbl_8034FAA6;
extern u8 lbl_8034FAA7;

s32 InsertCallback(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0);
s32 EraseCallback_80081760(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void method_eraseMessages(void *arg0, s32 arg1, s32 arg2, M2C_UNK arg_sp0);
void fn_80081AB8(void *arg0, void *arg1);
void *fn_80081B7C(void *arg0, s32 *arg1, s32 arg2, M2C_UNK arg_sp0);
void fn_80081F04(void);
s32 fn_80081F24(void *arg0, void *arg1);
void *method_addDebugMenu(s32 arg0, s32 arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0);
void *fn_800821D0(void *arg0, s16 arg1);
void *fn_800822AC(void *arg0, s16 arg1);
s32 method_eraseDebugMenu(void *arg0, void *arg1, M2C_UNK arg_sp0);
s32 fn_8008243C(void);
void SetCheckSum(void);
s32 VerifyCheckSum(void);
s32 fn_80082598(void *arg0, s32 arg1, u8 arg2);
s32 method_removeLL(s32 arg1);
void fn_800826C0(u8 arg0);
void fn_800829D4(s32 arg0, void *arg1);
void fn_80082AC0(void);
s32 fn_80082AE8(void *arg0, void *arg1);
void fn_80082B6C(void);
void *fn_80082B70(void *arg0, s32 arg1);
s32 fn_80082BDC(void);
void fn_80082BE4(void);
void fn_80082BE8(void **arg0, void *arg1, u32 *arg2);
void fn_80082C4C(void **arg0, void *arg1, u32 *arg2);
void fn_80082CB0(void **arg0, void *arg1, u32 *arg2);
void fn_80082D14(void *arg0, u32 *arg1);
void fn_80082D94(void *arg0, void *arg1, u32 *arg2);
void fn_80082E50(void *arg0, u8 *arg1);
void fn_80082E70(void *arg0, u32 *arg1);
void fn_80082EF0(void *arg0, void *arg1, u32 *arg2);

s32 InsertCallback(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0) {
    M2C_UNK sp28;
    void *sp24;
    void *sp20;
    M2C_UNK sp1C;
    void *sp18;
    M2C_UNK sp14;
    void *sp10;
    M2C_UNK spC;
    s32 sp8;
    u8 var_r0;
    void *temp_r0;
    void *temp_r3;
    void *var_r31;

    sp8 = arg3;
    if ((arg1 != 1) || (arg2 < 0)) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x300) = 0;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2B4) == 0U) {
        var_r0 = get_up_vector_for_viewing_mtx(8);
        if (var_r0 != 0U) {
            /* draft: did not compile: var_r0 = fn_80082B70(0x1F); */
        }
        M2C_FIELD(arg0, u32 *, 0x2B4) = var_r0;
    }
    temp_r3 = fn_80083864(M2C_FIELD(arg0, u32 *, 0x2B4), arg2);
    if (temp_r3 == NULL) {
        return RegisterCallback(arg0, arg1, arg2, sp8);
    }
    if (arg4 == 0) {
        sp20 = M2C_FIELD(temp_r3, void **, 8);
        fn_80083600(&sp1C, temp_r3, &sp20, &sp8);
    } else if (arg4 == -1) {
        /* draft: did not compile: sp18 = temp_r3 + 4; */
        fn_80083600(&sp14, temp_r3, &sp18, &sp8);
    } else {
        var_r31 = M2C_FIELD(temp_r3, void **, 8);
loop_17:
        if (0 /* draft: did not compile */) {
            if (arg4 == (s32) M2C_FIELD(var_r31, s32 *, 8)) {
                sp24 = var_r31;
                fn_80083600(&sp28, temp_r3, &sp24, &sp8);
            } else {
                var_r31 = M2C_FIELD(var_r31, void **, 4);
                goto loop_17;
            }
        }
        /* draft: did not compile: temp_r0 = temp_r3 + 4; */
        if (temp_r0 == var_r31) {
            sp10 = temp_r0;
            fn_80083600(&spC, temp_r3, &sp10, &sp8);
        }
    }
    return 1;
}

s32 EraseCallback_80081760(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK sp18;
    void *sp14;
    void *sp10;
    void *spC;
    M2C_UNK sp8;
    void *temp_r3;
    void *var_r5;

    if ((arg1 != 1) || (arg2 < 0)) {
        return 0;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2B4) == 0U) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x300) = 0;
    temp_r3 = fn_80083864(M2C_FIELD(arg0, u32 *, 0x2B4), arg2);
    if (temp_r3 == NULL) {
        return 0;
    }
    if (arg3 == 0) {
        /* draft: did not compile: sp10 = temp_r3 + 4; */
        spC = M2C_FIELD(temp_r3, void **, 8);
        fn_800834D4(&sp8, &spC, &sp10);
    } else {
        var_r5 = M2C_FIELD(temp_r3, void **, 8);
loop_13:
        if (0 /* draft: did not compile */) {
            if (arg3 == (s32) M2C_FIELD(var_r5, s32 *, 8)) {
                sp14 = var_r5;
                fn_80083584(&sp18, &sp14);
            } else {
                var_r5 = M2C_FIELD(var_r5, void **, 4);
                goto loop_13;
            }
        }
    }
    return 1;
}

void method_eraseMessages(void *arg0, s32 arg1, s32 arg2, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80081AB8(void *arg0, void *arg1) {
    u32 temp_r3_2;
    u32 temp_r3_3;
    u32 temp_r4;
    u32 temp_r4_2;
    u8 var_r4;
    u32 temp_r0;
    u32 temp_r3;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x2B0) + 1;
    temp_r4_2 = temp_r4 >> 0x1FU;
    temp_r3 = (temp_r4 << 0x17) - temp_r4_2;
    if ((s32) (((temp_r3 << 9) | (temp_r3 >> 0x17U)) + temp_r4_2) != (s32) M2C_FIELD(arg0, s32 *, 0x2AC)) {
        fn_80078F84(arg1, 1);
        var_r4 = 1;
        /* draft: did not compile: *(M2C_FIELD(arg0, s32 *, 0x2A8) + (M2C_FIELD(arg0, s32 *, 0x2B0) * 4)) = arg1; */
        temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x2B0) + 1;
        temp_r3_3 = temp_r3_2 >> 0x1FU;
        temp_r0 = (temp_r3_2 << 0x17) - temp_r3_3;
        M2C_FIELD(arg0, s32 *, 0x2B0) = (s32) (((temp_r0 << 9) | (temp_r0 >> 0x17U)) + temp_r3_3);
    } else {
        var_r4 = 0;
    }
    if ((var_r4 == 0) && ((s32) M2C_FIELD(arg1, s32 *, 4) == 0)) {
        fn_80078F20(arg1, 1);
    }
}

void *fn_80081B7C(void *arg0, s32 *arg1, s32 arg2, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80081F04(void) {
    fn_80081F24((void *)(0), (void *)(0));
}

s32 fn_80081F24(void *arg0, void *arg1) {
    void *temp_r3;
    void *var_r30;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x2B4) == 0U) {
        return 0;
    }
    if ((s32) M2C_FIELD(arg1, s32 *, 8) < 0) {
        return 0;
    }
    temp_r3 = fn_80083864((unsigned long)(0), (long)(0));
    if ((temp_r3 == NULL) || ((u32) M2C_FIELD(temp_r3, u32 *, 0) == 0U)) {
        return 0;
    }
    var_r30 = M2C_FIELD(temp_r3, void **, 8);
loop_10:
    if (0 /* draft: did not compile */) {
        fn_8008065C(arg0, arg1);
        fn_8008065C(arg0, M2C_FIELD(arg1, void **, 0xC));
        fn_8008065C(arg0, M2C_FIELD(arg1, void **, 0x14));
        fn_8007F708(arg0);
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(var_r30, s32 *, 8);
        fn_800808D0(arg0, 1);
        if (fn_80080738(arg0) == 0) {
            var_r30 = M2C_FIELD(var_r30, void **, 4);
            goto loop_10;
        }
    }
    return 1;
}

void *method_addDebugMenu(s32 arg0, s32 arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0) {
    void *sp28;
    M2C_UNK sp2C;
    M2C_UNK sp20;
    void *sp1C;
    M2C_UNK sp18;
    s32 sp14;
    M2C_UNK sp10;
    M2C_UNK spC;
    M2C_UNK sp8;
    s32 temp_r5;
    void *temp_r27;
    void *temp_r3;
    void *temp_r3_2;

    switch (arg2) {

    case 0:
            return NULL;

        break;

    }
    /* draft: did not compile: temp_r3 = get_up_vector_for_viewing_mtx(0x18); */
    if (temp_r3 != NULL) {
        fn_800A5308(&sp18, arg1, &lbl_8034FA88);
        M2C_FIELD(temp_r3, M2C_UNK **, 4) = &lbl_80225604;
        if ((void *) lbl_80350694 == NULL) {
            /* draft: did not compile: temp_r3_2 = get_up_vector_for_viewing_mtx(0x14); */
            if (temp_r3_2 != NULL) {
                fn_8008311C(&sp8, &spC);
                M2C_FIELD(temp_r3_2, s32 *, 0x10) = 1;
            }
            lbl_80350694 = temp_r3_2;
        }
        M2C_FIELD(temp_r3, void **, 0) = (void *) lbl_80350694;
        temp_r27 = M2C_FIELD(temp_r3, void **, 0);
        sp28 = temp_r3;
        fn_800208F4(&sp2C, &sp18);
        fn_80083060(&sp20, temp_r27, &sp28);
        fn_800146F0((long *)(&sp2C), (long)(-1), (long)(0));
        temp_r5 = M2C_FIELD(temp_r27, s32 *, 0x10);
        M2C_FIELD(temp_r27, s32 *, 0x10) = (s32) (temp_r5 + 1);
        fn_800146F0(&sp18, -1, temp_r5);
        M2C_FIELD(temp_r3, s32 *, 8) = 0;
        M2C_FIELD(temp_r3, M2C_UNK **, 4) = &lbl_802255EC;
        M2C_FIELD(temp_r3, s32 *, 0x14) = arg3;
        M2C_FIELD(temp_r3, s32 *, 0x10) = arg2;
        M2C_FIELD(temp_r3, s32 *, 0xC) = arg0;
        fn_80078F84(M2C_FIELD(temp_r3, s32 *, 0x10), 1);
    }
    sp1C = temp_r3;
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 8) = (s32) (M2C_FIELD(temp_r3, s32 *, 8) + 1);
    }
    sp14 = arg0 + 0x2D8;
    fn_800833DC(&sp10, arg0 + 0x2D4, &sp14, &sp1C);
    if (sp1C != NULL) {
        M2C_FIELD(sp1C, s32 *, 8) = (s32) (M2C_FIELD(sp1C, s32 *, 8) - 1);
        if (((s32) M2C_FIELD(sp1C, s32 *, 8) == 0) && (sp1C != NULL)) {
            M2C_FIELD(M2C_FIELD(sp1C, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
        }
    }
    sp1C = NULL;
    return temp_r3;
}

void *fn_800821D0(void *arg0, s16 arg1) {
    u32 sp14;
    u32 sp10;
    void *spC;
    u32 sp8;
    void *temp_r31;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_802255EC;
        if (fn_80078F84(M2C_FIELD(arg0, s32 *, 0x10), -1) == 0) {
            fn_80078F20(M2C_FIELD(arg0, s32 *, 0x10), 1);
        }
        if (arg0 != NULL) {
            M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_80225604;
            spC = arg0;
            temp_r31 = M2C_FIELD(arg0, void **, 0);
            /* draft: did not compile: fn_80082CB0(&sp14, temp_r31, &spC); */
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

void *fn_800822AC(void *arg0, s16 arg1) {
    u32 sp14;
    u32 sp10;
    void *spC;
    u32 sp8;
    void *temp_r31;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_80225604;
        spC = arg0;
        temp_r31 = M2C_FIELD(arg0, void **, 0);
        /* draft: did not compile: fn_80082CB0(&sp14, temp_r31, &spC); */
        sp10 = sp14;
        if (0 /* draft: did not compile */) {
            sp8 = sp14;
            fn_80082FCC(temp_r31, &sp8);
            M2C_FIELD(temp_r31, s32 *, 0x10) = (s32) (M2C_FIELD(temp_r31, s32 *, 0x10) + 1);
        }
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

s32 method_eraseDebugMenu(void *arg0, void *arg1, M2C_UNK arg_sp0) {
    void *sp10;
    M2C_UNK spC;
    void *sp8;
    u8 temp_r29;
    void *var_r28;

    var_r28 = M2C_FIELD(arg0, void **, 0x2DC);
loop_10:
    if (0 /* draft: did not compile */) {
        return 0;
    }
    sp10 = arg1;
    if (arg1 != NULL) {
        M2C_FIELD(arg1, s32 *, 8) = (s32) (M2C_FIELD(arg1, s32 *, 8) + 1);
    }
    /* draft: did not compile: temp_r29 = M2C_FIELD(var_r28, s32 *, 8) == sp10; */
    if (sp10 != NULL) {
        M2C_FIELD(sp10, s32 *, 8) = (s32) (M2C_FIELD(sp10, s32 *, 8) - 1);
        if (((s32) M2C_FIELD(sp10, s32 *, 8) == 0) && (sp10 != NULL)) {
            M2C_FIELD(M2C_FIELD(sp10, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
        }
    }
    sp10 = NULL;
    if (temp_r29 != 0) {
        sp8 = var_r28;
        /* draft: did not compile: fn_800832FC(&spC, arg0 + 0x2D4, &sp8); */
        return 1;
    }
    var_r28 = M2C_FIELD(var_r28, void **, 4);
    goto loop_10;
}

s32 fn_8008243C(void) {
    void *spC;
    s32 sp8;
    s32 temp_r31;
    s32 temp_r3;
    u32 temp_r4;
    s32 var_ctr_2;
    s32 var_r31;
    s32 var_r6;
    u32 var_ctr;
    u8 *var_r3;
    u8 temp_r0;
    u8 temp_r0_2;
    void *var_r5;

    var_r31 = 0;
    fn_80081324(&spC, &sp8);
    var_r6 = 0;
    temp_r4 = sp8 - 0x28;
    /* draft: did not compile: var_r5 = spC + 0x28; */
    spC = var_r5;
    sp8 = temp_r4;
    if (temp_r4 > 0) {
        temp_r3 = temp_r4 - 8;
        if (temp_r4 > 8) {
            var_ctr = (u32) (temp_r3 + 7) >> 3U;
            if (temp_r3 > 0) {
                do {
                    var_r6 += 8;
                    temp_r0 = M2C_FIELD(var_r5, u8 *, 7);
                    temp_r31 = var_r31 ^ M2C_FIELD(var_r5, u8 *, 0) ^ M2C_FIELD(var_r5, u8 *, 1) ^ M2C_FIELD(var_r5, u8 *, 2) ^ M2C_FIELD(var_r5, u8 *, 3) ^ M2C_FIELD(var_r5, u8 *, 4) ^ M2C_FIELD(var_r5, u8 *, 5) ^ M2C_FIELD(var_r5, u8 *, 6);
                    /* draft: did not compile: var_r5 += 8; */
                    var_r31 = temp_r0 ^ temp_r31;
                    var_ctr -= 1;
                } while (var_ctr != 0);
            }
        }
        /* draft: did not compile: var_r3 = spC + var_r6; */
        var_ctr_2 = temp_r4 - var_r6;
        if (var_r6 < temp_r4) {
            do {
                temp_r0_2 = *var_r3;
                var_r3 += 1;
                var_r31 ^= temp_r0_2;
                var_ctr_2 -= 1;
            } while (var_ctr_2 != 0);
        }
    }
    return var_r31;
}

void SetCheckSum(void) {
    s32 tmp1 = fn_8008243C();

    fn_8008085C(2, tmp1);}

s32 VerifyCheckSum(void) {

    return fn_8008243C() == fn_800807CC(2);
}

s32 fn_80082598(void *arg0, s32 arg1, u8 arg2) {
    M2C_UNK sp1C;
    void *sp18;
    s32 sp14;
    s32 sp10;
    M2C_UNK spC;
    M2C_UNK sp8;
    s32 temp_r4;
    void *temp_r3;
    void *temp_r6;

    if (arg2 != 0) {
        temp_r4 = lbl_80350680;
        lbl_80350680 = temp_r4 + 1;
        /* draft: did not compile: temp_r3 = get_up_vector_for_viewing_mtx(8, temp_r4); */
        if (temp_r3 != NULL) {
            fn_80015F5C(&sp8);
        }
        fn_80031578(temp_r3, arg1, 0, -1);
        M2C_FIELD(temp_r3, s32 *, 4) = (s32) lbl_8035067C;
        temp_r6 = M2C_FIELD(temp_r3, void **, 0);
        sp14 = M2C_FIELD(temp_r6, s32 *, 0xC);
        sp18 = temp_r3;
        /* draft: did not compile: fn_80082EF0(&sp1C, lbl_80350684, &sp14, temp_r6); */
        sp8 = M2C_FIELD(M2C_FIELD(temp_r3, void **, 0), s32 *, 0xC);
        return sp8;
    }
    /* draft: did not compile: sp10 = arg0 + 0x2BC; */
    /* draft: did not compile: fn_80024FD8(&spC, arg0 + 0x2B8, &sp10, arg1); */
    sp8 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2BC), void **, 8), s32 *, 0xC);
    return sp8;}

s32 method_removeLL(s32 arg1) {
    u32 sp14;
    u8 sp10;
    u32 spC;
    s32 sp8;

    sp8 = arg1;
    /* draft: did not compile: fn_80082C4C(&sp10, lbl_80350684, &sp8); */
    sp14 = sp10;
    if (sp10 != (u32) (lbl_80350684 + 4)) {
        spC = sp10;
        fn_80082E70((void *)(&spC), (unsigned long *)(0));
    }
    return 1;
}

void fn_800826C0(u8 arg0) {
    void *sp30;
    s32 sp2C;
    s32 sp28;
    void *sp24;
    void *sp20;
    void *sp1C;
    s32 sp18;
    s32 sp14;
    void *sp10;
    void *spC;
    void *sp8;
    s32 var_r28;
    s32 var_r28_2;
    s32 var_r28_3;
    s32 var_r29;
    s32 var_r30;
    s32 var_r30_3;
    u8 *temp_r3;
    u8 *temp_r4;
    u8 *var_r30_2;
    u8 *var_r30_4;
    u8 temp_r3_2;
    u8 temp_r3_3;
    u8 var_r0;
    u8 var_r0_2;
    void *temp_r28;
    void *temp_r28_2;
    void *temp_r29;

    if ((arg0 != 0) || ((s32) lbl_80350680 > 0x400)) {
        lbl_80350680 = 0;
        lbl_8035067C += 1;
        sp30 = M2C_FIELD(lbl_80350688, void **, 8);
loop_10:
        if (0 /* draft: did not compile */) {
            temp_r29 = M2C_FIELD(sp30, void **, 0xC);
            var_r28 = 0;
            var_r30 = 0;
loop_8:
            if (var_r28 < (s32) M2C_FIELD(temp_r29, s32 *, 0x14)) {
                /* draft: did not compile: temp_r3 = M2C_FIELD(temp_r29, s32 *, 0x18) + var_r30; */
                if ((u8) *temp_r3 == 4) {
                    fn_8007F758(temp_r3 + 1, &sp2C, 4);
                    /* draft: did not compile: fn_80082C4C(&sp10, lbl_80350684, &sp2C); */
                    if (sp10 != (void *) (lbl_80350684 + 4)) {
                        M2C_FIELD(M2C_FIELD(sp10, void **, 0x10), s32 *, 4) = (s32) lbl_8035067C;
                    }
                }
                var_r30 += 5;
                var_r28 += 1;
                goto loop_8;
            }
            fn_80020A10(&sp30);
            goto loop_10;
        }
        var_r28_2 = 0;
        var_r30_2 = &lbl_802C49A8;
        do {
            if ((u8) *var_r30_2 == 4) {
                fn_8007F758(var_r30_2 + 1, &sp28, 4);
                /* draft: did not compile: fn_80082C4C(&spC, lbl_80350684, &sp28); */
                if (spC != (void *) (lbl_80350684 + 4)) {
                    M2C_FIELD(M2C_FIELD(spC, void **, 0x10), s32 *, 4) = (s32) lbl_8035067C;
                }
            }
            var_r28_2 += 1;
            var_r30_2 += 5;
        } while (var_r28_2 < 0x1B67);
        sp24 = M2C_FIELD(lbl_80350684, void **, 0xC);
loop_21:
        if (sp24 != (void *) (lbl_80350684 + 4)) {
            sp20 = sp24;
            fn_80020A10(&sp20);
            temp_r28 = M2C_FIELD(sp24, void **, 0x10);
            if ((s32) M2C_FIELD(temp_r28, s32 *, 4) != (s32) lbl_8035067C) {
                sp8 = sp24;
                /* draft: did not compile: fn_80082E70(lbl_80350684, &sp8); */
                if (temp_r28 != NULL) {
                    fn_800146F0((long *)(temp_r28), (long)(-1), (long)(0));
                    fn_80005888(temp_r28);
                }
            }
            sp24 = sp20;
            goto loop_21;
        }
    }
    if ((arg0 != 0) || (fn_80078FAC() != 0)) {
        sp1C = M2C_FIELD(lbl_80350688, void **, 8);
loop_34:
        if (0 /* draft: did not compile */) {
            temp_r28_2 = M2C_FIELD(sp1C, void **, 0xC);
            var_r29 = 0;
            var_r30_3 = 0;
loop_32:
            if (var_r29 < (s32) M2C_FIELD(temp_r28_2, s32 *, 0x14)) {
                var_r0 = 0;
                /* draft: did not compile: temp_r4 = M2C_FIELD(temp_r28_2, s32 *, 0x18) + var_r30_3; */
                temp_r3_2 = *temp_r4;
                if ((temp_r3_2 == 0) || (temp_r3_2 == 2)) {
                    var_r0 = 1;
                }
                if (((u32) (-(s32) var_r0 | var_r0) >> 0x1FU) != 0) {
                    fn_8007F758(temp_r4 + 1, &sp18, 4);
                    fn_80078FCC(sp18);
                }
                var_r30_3 += 5;
                var_r29 += 1;
                goto loop_32;
            }
            fn_80020A10(&sp1C);
            goto loop_34;
        }
        var_r28_3 = 0;
        var_r30_4 = &lbl_802C49A8;
        do {
            temp_r3_3 = *var_r30_4;
            var_r0_2 = 0;
            var_r0_2 = !((temp_r3_3 == 0) || (temp_r3_3 == 2)) ? var_r0_2 : 1;
            if (((u32) (-(s32) var_r0_2 | var_r0_2) >> 0x1FU) != 0) {
                fn_8007F758(var_r30_4 + 1, &sp14, 4);
                fn_80078FCC(sp14);
            }
            var_r28_3 += 1;
            var_r30_4 += 5;
        } while (var_r28_3 < 0x1B67);
        fn_80079010();
    }
}

#pragma push
#pragma peephole off
void fn_800829D4(s32 arg0, void *arg1) {
    s32 temp_r29;
    s32 temp_r30;
    s32 temp_r3;
    void *temp_r31;

    temp_r30 = arg0;
    temp_r30 *= 0x201;
    temp_r29 = strlen((void *)(arg1), (long *)(0));
    temp_r31 = &lbl_802CD2CC + temp_r30;
    temp_r3 = strlen(temp_r31, &lbl_802CD2CC);
    if ((s32) (temp_r29 + temp_r3) <= 0x200) {
        /* draft: did not compile: memmove(temp_r31 + temp_r29, temp_r31, temp_r3 + 1); */
        memmove(temp_r31, arg1, temp_r29);
        return;
    }
    if (temp_r29 < 0x200) {
        /* draft: did not compile: memmove(temp_r31 + temp_r29, temp_r31, 0x200 - temp_r29); */
        memmove(temp_r31, arg1, temp_r29);
    } else {
        memmove(temp_r31, arg1, 0x200);
    }
    M2C_FIELD((&lbl_802CD2CC + temp_r30), s8 *, 0x200) = 0;
}
#pragma pop

void fn_80082AC0(void) {
    M2C_UNK sp8;

    fn_80014798(&lbl_8034FA78, &sp8);
}

s32 fn_80082AE8(void *arg0, void *arg1) {
    s32 var_r4;

    if (M2C_FIELD(arg0, s32 *, 0x14) & 2) {
        M2C_FIELD(arg1, s8 *, 4) = 1;
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) & 1) {
        fn_80081F04();
    } else {
        var_r4 = get_up_vector_for_viewing_mtx(0x28);
        if (var_r4 != 0) {
            u16 tmp1 = M2C_FIELD(arg0, s32 *, 0x10);
            var_r4 = fn_80078CB8(1, tmp1);
        }
        /* draft: did not compile: fn_80081AB8(M2C_FIELD(arg0, s32 *, 0xC), var_r4); */
    }
    return 0;
}

void fn_80082B6C(void) {

}

void *fn_80082B70(void *arg0, s32 arg1) {
    s32 var_r5;
    s32 var_r6;

    M2C_FIELD(arg0, s32 *, 4) = arg1;
    var_r5 = 0;
    M2C_FIELD(arg0, s32 *, 0) = fn_80005868(M2C_FIELD(arg0, s32 *, 4) * 4);
    var_r6 = 0;
loop_2:
    if (var_r6 < (s32) M2C_FIELD(arg0, s32 *, 4)) {
        var_r6 += 1;
        /* draft: did not compile: *(M2C_FIELD(arg0, s32 *, 0) + var_r5) = 0; */
        var_r5 += 4;
        goto loop_2;
    }
    return arg0;
}

s32 fn_80082BDC(void) {
    return 0;
}

void fn_80082BE4(void) {

}

void fn_80082BE8(void **arg0, void *arg1, u32 *arg2) {
    void *var_r7;
    void *var_r8;

    var_r7 = M2C_FIELD(arg1, void **, 4);
    /* draft: did not compile: var_r8 = arg1 + 4; */
loop_4:
    if (var_r7 != NULL) {
        if ((u32) M2C_FIELD(var_r7, u32 *, 0xC) >= (u32) *arg2) {
            var_r8 = var_r7;
            var_r7 = M2C_FIELD(var_r7, void **, 0);
        } else {
            var_r7 = M2C_FIELD(var_r7, void **, 4);
        }
        goto loop_4;
    }
    if (0 /* draft: did not compile */) {
        /* draft: did not compile: *arg0 = arg1 + 4; */
        return;
    }
    *arg0 = var_r8;
}

void fn_80082C4C(void **arg0, void *arg1, u32 *arg2) {
    void *var_r7;
    void *var_r8;

    var_r7 = M2C_FIELD(arg1, void **, 4);
    /* draft: did not compile: var_r8 = arg1 + 4; */
loop_4:
    if (var_r7 != NULL) {
        if ((u32) M2C_FIELD(var_r7, u32 *, 0xC) >= (u32) *arg2) {
            var_r8 = var_r7;
            var_r7 = M2C_FIELD(var_r7, void **, 0);
        } else {
            var_r7 = M2C_FIELD(var_r7, void **, 4);
        }
        goto loop_4;
    }
    if (0 /* draft: did not compile */) {
        /* draft: did not compile: *arg0 = arg1 + 4; */
        return;
    }
    *arg0 = var_r8;
}

void fn_80082CB0(void **arg0, void *arg1, u32 *arg2) {
    void *var_r7;
    void *var_r8;

    var_r7 = M2C_FIELD(arg1, void **, 4);
    /* draft: did not compile: var_r8 = arg1 + 4; */
loop_4:
    if (var_r7 != NULL) {
        if ((u32) M2C_FIELD(var_r7, u32 *, 0xC) >= (u32) *arg2) {
            var_r8 = var_r7;
            var_r7 = M2C_FIELD(var_r7, void **, 0);
        } else {
            var_r7 = M2C_FIELD(var_r7, void **, 4);
        }
        goto loop_4;
    }
    if (0 /* draft: did not compile */) {
        /* draft: did not compile: *arg0 = arg1 + 4; */
        return;
    }
    *arg0 = var_r8;
}

void fn_80082D14(void *arg0, u32 *arg1) {
    u32 temp_r3;

    temp_r3 = *arg1;
    if (temp_r3 == (u32) M2C_FIELD(arg0, u32 *, 8)) {
        fn_80020A10(arg1);
        M2C_FIELD(arg0, u32 *, 8) = (u32) *arg1;
    }
    fn_80021078(temp_r3, M2C_FIELD(arg0, s32 *, 4));
    fn_80005888(temp_r3);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) - 1);
}

void fn_80082D94(void *arg0, void *arg1, u32 *arg2) {
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
        M2C_FIELD(arg0, void **, 0) = fn_80083BB0(arg1, var_r9, var_r5, var_r6);
        M2C_FIELD(arg0, u8 *, 4) = (u8) lbl_8034FAA8;
        return;
    }
    M2C_FIELD(arg0, void **, 0) = var_r8;
    M2C_FIELD(arg0, u8 *, 4) = (u8) lbl_8034FAA9;
}

void fn_80082E50(void *arg0, u8 *arg1) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, u8 *, 8) = (u8) *arg1;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    /* draft: did not compile: M2C_FIELD(arg0, u8 *, 8) = (s32) (arg0 + 4); */
}

void fn_80082E70(void *arg0, u32 *arg1) {
    u32 temp_r3;

    temp_r3 = *arg1;
    if (temp_r3 == (u32) M2C_FIELD(arg0, u32 *, 0xC)) {
        fn_80020A10(arg1);
        M2C_FIELD(arg0, u32 *, 0xC) = (u32) *arg1;
    }
    fn_80021078(temp_r3, M2C_FIELD(arg0, s32 *, 4));
    fn_80005888(temp_r3);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) - 1);
}

void fn_80082EF0(void *arg0, void *arg1, u32 *arg2) {
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
        M2C_FIELD(arg0, void **, 0) = fn_80083CB8(arg1, var_r9, var_r5, var_r6);
        M2C_FIELD(arg0, u8 *, 4) = (u8) lbl_8034FAA6;
        return;
    }
    M2C_FIELD(arg0, void **, 0) = var_r8;
    M2C_FIELD(arg0, u8 *, 4) = (u8) lbl_8034FAA7;
}
