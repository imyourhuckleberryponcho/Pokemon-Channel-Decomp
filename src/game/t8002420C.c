/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_80015570(M2C_UNK, M2C_UNK, M2C_UNK);
s32 fn_800231D0(s32, M2C_UNK, void *);
M2C_UNK fn_800A1984(s32, M2C_UNK, M2C_UNK, M2C_UNK, f32, f32, f32);
extern f32 lbl_8035156C;
M2C_UNK SetCursorPos(s32, f32, f32);
M2C_UNK fn_80023188();
extern s32 lbl_803504F8;
M2C_UNK fn_80005888(void **);
M2C_UNK fn_800146F0(void *, M2C_UNK);
void *get_up_vector_for_viewing_mtx(M2C_UNK);
M2C_UNK fn_800208F4(void *, s32);
M2C_UNK fn_8014BB10();
M2C_UNK fn_8014F858(void *, M2C_UNK *, M2C_UNK *);
extern M2C_UNK __files;
extern M2C_UNK lbl_80221DE0;
void *fn_800A163C(M2C_UNK, s32);
extern M2C_UNK lbl_801CB330;
extern M2C_UNK lbl_802C0270;
extern f32 lbl_80351588;
extern f32 lbl_8035158C;
extern f32 lbl_80351590;
s32 DVDConvertPathToEntrynum(M2C_UNK *);
M2C_UNK fn_8014F694(M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK *);
extern M2C_UNK lbl_8034E7AC;
extern u32 lbl_8034E94C;
s32 fn_800CDD74(s32);
M2C_UNK DCFlushRange(s32, s32);
s32 OSAllocFromHeap(s32, s32, s32, s32);
M2C_UNK GXInitTexObj(s32, s32, u16, u16, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXInitTexObjLOD(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, f32, f32, f32);
s32 fn_80151770(s32);
extern s32 lbl_8034FE78;
extern f32 lbl_80350388;
extern f32 lbl_8035038C;
extern f32 lbl_80351598;
extern f32 lbl_8035159C;
extern f32 lbl_803515A0;
extern f32 lbl_803515A4;
extern f32 lbl_803515A8;
extern f32 lbl_803515AC;
extern f64 lbl_803515B0;
extern f64 lbl_803515B8;
extern f64 lbl_803515C0;
extern f32 lbl_803515C8;
extern f32 lbl_803515CC;
extern f32 lbl_803515D0;
extern f32 lbl_803515D4;

void fn_8002420C(void *arg0);
void fn_80024378();
void fn_80024C54(void *arg0, s32 arg1);
void fn_80024CD0(void *arg0);
s32 fn_80024D34(s32 *arg0);
s32 fn_80024D54(void *arg0);
s32 fn_80024DF4(void *arg0);
void fn_80024E1C(void *arg0);
void fn_80024E80(void ***arg0, s32 *arg1, void ***arg2, void ***arg3);
void fn_80024F40(void ***arg0, s32 *arg1, void ***arg2);
void fn_80024FD8(void **arg0, s32 *arg1, void ***arg2, s32 arg3, M2C_UNK arg_sp0);
void fn_800250A0(void *arg0);
void *fn_800250B8(void *arg0);
void fn_800251EC();
void fn_80025408(s32 *arg0);
void fn_80025444(M2C_UNK *arg0);
s32 fn_800254AC(s32 arg1);
u16 fn_800254F0(s32 arg0, s32 arg1, u32 arg2);
void fn_8002554C(void *arg0, u16 arg1, u16 arg2, u16 arg3);
s32 fn_80025DC0(void **arg0, s32 arg1, u32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, f32 farg0, M2C_UNK arg_sp0);
void fn_80026024(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s16 arg5, f32 farg0);

void fn_8002420C(void *arg0) { } /* draft: stub */

void fn_80024378() { } /* draft: stub */

void fn_80024C54(void *arg0, s32 arg1) {
    s32 var_r30;
    void *temp_r3;
    void *var_r31;

    var_r31 = arg0;
    var_r30 = 0;
    do {
        temp_r3 = M2C_FIELD(var_r31, void **, 0x10);
        if (!(M2C_FIELD(temp_r3, s32 *, 8) & 0x200000)) {
            M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(M2C_UNK, M2C_UNK, s32), 0x20)(0, 0, arg1);
        }
        var_r30 += 1;
        /* draft: did not compile: var_r31 += 4; */
    } while (var_r30 < 9);
}

#pragma push
#pragma peephole off
void fn_80024CD0(void *arg0) {
    s8 var_r30;
    void *var_r31;

    var_r31 = arg0;
    var_r30 = 0;
    do {
        fn_800A1984(M2C_FIELD(var_r31, s32 *, 0x58), 1, 0xA, 1, lbl_8035156C, lbl_8035156C, lbl_8035156C);
        var_r30 += 1;
        /* draft: did not compile: var_r31 += 4; */
    } while (var_r30 < 5);
}
#pragma pop

s32 fn_80024D34(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = *arg0;
    if ((temp_r0 != 0) && (temp_r0 != 9)) {
        return 1;
    }
    return 0;
}

s32 fn_80024D54(void *arg0) {
    s32 temp_r4;
    s32 var_r3;
    u32 temp_r5;
    s32 var_r6;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0);
    var_r6 = 0;
    if ((temp_r4 == 0) || (temp_r4 == 9)) {
        var_r6 = 1;
    }
    if (temp_r4 > 2) {
        var_r6 |= 0x20;
    }
    temp_r5 = M2C_FIELD(arg0, u32 *, 4);
    var_r3 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r5 & 0x40) {
        if ((var_r3 == 1) || (var_r3 == 0)) {
            var_r3 = ((temp_r5 >> 8U) & 0xF) + 1;
        }
        goto block_12;
    }
    if (temp_r4 < 0xA) {
        if (temp_r4 < 5) {

        } else {
block_12:
            var_r6 |= 0x10;
            switch (var_r3) {                       /* irregular */
            case 2:
                var_r6 |= 2;
                break;
            case 3:
                var_r6 |= 4;
                break;
            case 4:
                var_r6 |= 8;
                break;
            }
        }
    }
    return var_r6;
}

s32 fn_80024DF4(void *arg0) {
    s32 var_r4;

    var_r4 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0) == 4) && ((s32) M2C_FIELD(arg0, s32 *, 8) != 0)) {
        var_r4 = 1;
    }
    return var_r4;
}

void fn_80024E1C(void *arg0) {
    s32 temp_r3;
    s32 temp_r5;
    void *temp_r4;

    temp_r5 = ((u32) M2C_FIELD(arg0, u32 *, 4) >> 8U) & 0xF;
    if ((temp_r5 - 1) >= 0) {
        temp_r4 = M2C_FIELD(arg0, void **, 0xC);
        temp_r3 = temp_r5 - 1;
        if (temp_r3 < (s32) M2C_FIELD(temp_r4, s32 *, 0x2C)) {
            /* draft: did not compile: fn_80023188(temp_r4 + ((temp_r3 * 0x24) + 0x30)); */
            return;
        }
    }
    SetCursorPos(lbl_803504F8, lbl_8035156C, lbl_8035156C);
}

void fn_80024E80(void ***arg0, s32 *arg1, void ***arg2, void ***arg3) {
    void **temp_r0;
    void **temp_r3;
    void **temp_r3_2;
    void **temp_r3_3;
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
        fn_800146F0(temp_r3_2 + 8, -1);
        temp_r3_3 = *arg2;
        *arg2 = M2C_FIELD(temp_r3_3, void ***, 4);
        fn_80005888(temp_r3_3);
        *arg1 -= 1;
        goto loop_4;
    }
    *arg0 = temp_r0;
}

void fn_80024F40(void ***arg0, s32 *arg1, void ***arg2) {
    void **temp_r5;
    void **temp_r6;

    temp_r6 = *arg2;
    *arg2 = M2C_FIELD(temp_r6, void ***, 4);
    M2C_FIELD(M2C_FIELD(temp_r6, void **, 0), void ***, 4) = (void **) M2C_FIELD(temp_r6, void ***, 4);
    temp_r5 = M2C_FIELD(temp_r6, void ***, 4);
    *temp_r5 = M2C_FIELD(temp_r6, void **, 0);
    fn_800146F0((void *)(temp_r6 + 8), (long)(-1));
    fn_80005888(temp_r6);
    *arg1 -= 1;
    *arg0 = *arg2;
}

void fn_80024FD8(void **arg0, s32 *arg1, void ***arg2, s32 arg3, M2C_UNK arg_sp0) {
    void *spC;
    s32 sp8;
    void **temp_r4;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r5;

    temp_r3 = get_up_vector_for_viewing_mtx(0xC);
    if (temp_r3 == NULL) {
        fn_8014F858(&__files + 0xA0, &lbl_80221DE0, &__files);
        fn_8014BB10();
    }
    /* draft: did not compile: temp_r3_2 = temp_r3 + 8; */
    /* draft: did not compile: sp8 = arg1 + 4; */
    spC = temp_r3;
    if (temp_r3_2 != NULL) {
        fn_800208F4(temp_r3_2, arg3);
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

void fn_800250A0(void *arg0) {
    void *temp_r4;

    /* draft: did not compile: temp_r4 = arg0 + 4; */
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(temp_r4, void **, 4) = temp_r4;
    M2C_FIELD(arg0, void **, 4) = temp_r4;
}

void *fn_800250B8(void *arg0) {
    void *temp_r11;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r7;
    void *var_r0;

    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s8 *, 0x10) = 0;
    M2C_FIELD(arg0, s8 *, 0x11) = 0;
    M2C_FIELD(arg0, s8 *, 0x12) = 0;
    M2C_FIELD(arg0, s8 *, 0x13) = 0;
    var_r0 = get_up_vector_for_viewing_mtx(0x88);
    var_r0 = var_r0 == NULL ? var_r0 : fn_800A163C(0, M2C_FIELD(&lbl_802C0270, s32 *, 8));
    M2C_FIELD(arg0, void **, 0) = var_r0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x74) = 0x50;
    M2C_FIELD((M2C_FIELD(arg0, void **, 0)), s32 *, 0x68) = 2;
    M2C_FIELD((M2C_FIELD(arg0, void **, 0)), s32 *, 0x6C) = 1;
    temp_r11 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(temp_r11, u8 *, 4) = (u8) M2C_FIELD(&lbl_801CB330, u8 *, 0x3C);
    M2C_FIELD(temp_r11, u8 *, 5) = (u8) M2C_FIELD(&lbl_801CB330, u8 *, 0x3D);
    M2C_FIELD(temp_r11, u8 *, 6) = (u8) M2C_FIELD(&lbl_801CB330, u8 *, 0x3E);
    M2C_FIELD(temp_r11, u8 *, 7) = (u8) M2C_FIELD(&lbl_801CB330, u8 *, 0x3F);
    temp_r7 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(temp_r7, u8 *, 0xC) = (u8) M2C_FIELD(&lbl_801CB330, u8 *, 0x20);
    M2C_FIELD(temp_r7, u8 *, 0xD) = (u8) M2C_FIELD(&lbl_801CB330, u8 *, 0x21);
    M2C_FIELD(temp_r7, u8 *, 0xE) = (u8) M2C_FIELD(&lbl_801CB330, u8 *, 0x22);
    M2C_FIELD(temp_r7, u8 *, 0xF) = (u8) M2C_FIELD(&lbl_801CB330, u8 *, 0x23);
    temp_r3_2 = M2C_FIELD(arg0, void **, 0);
    temp_r3 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(temp_r3, f32 *, 0x40) = (f32) lbl_80351588;
    M2C_FIELD(temp_r3, f32 *, 0x44) = (f32) lbl_80351588;
    M2C_FIELD(temp_r3_2, f32 *, 0x48) = (f32) lbl_8035158C;
    M2C_FIELD(temp_r3_2, f32 *, 0x4C) = (f32) lbl_80351590;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x78) = 0x12;
    temp_r3_3 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(temp_r3_3, u8 *, 0x10) = 1U;
    if ((u8) M2C_FIELD(temp_r3_3, u8 *, 0x10) == 0) {
        M2C_FIELD(temp_r3_3, s32 *, 0x58) = -1;
    }
    return arg0;
}

void fn_800251EC() { } /* draft: stub */

void fn_80025408(s32 *arg0) {
    fn_800A1984(*arg0, 1, 0xA, 1, lbl_80351588, lbl_80351588, lbl_80351588);
}

void fn_80025444(M2C_UNK *arg0) {
    M2C_UNK sp8;
    s32 var_r3;

    var_r3 = -1;
    if ((u32) lbl_8034E94C != 0U) {
        fn_8014F694(&sp8, 0x100, &lbl_8034E7AC, arg0);
        var_r3 = DVDConvertPathToEntrynum(&sp8);
    }
    if (var_r3 < 0) {
        DVDConvertPathToEntrynum(arg0);
    }
}

s32 fn_800254AC(s32 arg1) {
    if (0 /* draft: did not compile */) {
        return 0;
    }
    return fn_800CDD74(arg1);
}

u16 fn_800254F0(s32 arg0, s32 arg1, u32 arg2) {
    u32 temp_r7;
    u32 temp_r8;
    u32 temp_r4;
    u32 temp_r5;

    temp_r7 = arg2 >> 0x1FU;
    temp_r5 = (arg2 << 0x1E) - temp_r7;
    temp_r8 = (u32) arg1 >> 0x1FU;
    temp_r4 = (arg1 << 0x1E) - temp_r8;
    return (u16) (((arg1 / 4) << 5) + ((((s32) arg2 / 4) * arg0 * 8) + ((((temp_r5 << 2) | (temp_r5 >> 0x1EU)) + temp_r7) * 4) + (((temp_r4 << 2) | (temp_r4 >> 0x1EU)) + temp_r8)));
}

void fn_8002554C(void *arg0, u16 arg1, u16 arg2, u16 arg3) { } /* draft: stub */

s32 fn_80025DC0(void **arg0, s32 arg1, u32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, f32 farg0, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

void fn_80026024(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s16 arg5, f32 farg0) {
    s32 temp_r31;
    s32 temp_r3;
    u32 temp_r30;

    /* draft: did not compile: temp_r30 = ((s32) ((fn_80025DC0(arg3, arg4, 0, arg1, 0, 0U, 0, lbl_803515AC) * 0xC) + 0x1F) / 32) << 5; */
    temp_r31 = temp_r30 * arg5;
    temp_r3 = OSAllocFromHeap((long)(lbl_8034FE78), (long)(temp_r31), (long)(0), (long)(0));
    M2C_FIELD(arg0, s16 *, 0) = arg5;
    M2C_FIELD(arg0, u16 *, 2) = (u16) (temp_r30 >> 2U);
    M2C_FIELD(arg0, s32 *, 4) = temp_r3;
    /* draft: did not compile: fn_80025DC0(arg3, arg4, temp_r3, arg1, arg2, temp_r30 >> 2U, arg5, farg0); */
    DCFlushRange(temp_r3, temp_r31);
}
