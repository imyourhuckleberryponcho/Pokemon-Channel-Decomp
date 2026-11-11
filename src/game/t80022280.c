/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

s32 fn_80038264(M2C_UNK);
s32 fn_8011AD38(M2C_UNK, s32, M2C_UNK, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_8011B1D4(s32, u8, u8, u8, M2C_UNK, M2C_UNK);
extern M2C_UNK fn_80021CE0;
extern M2C_UNK fn_80022004;
M2C_UNK FreePictureSD();
M2C_UNK fn_8011B730();
extern s32 lbl_803504CC;
M2C_UNK fn_80005888(void *);
M2C_UNK fn_800058E8(s32);
M2C_UNK fn_800AAF88(u32);
void *get_up_vector_for_viewing_mtx_inner(s32);
M2C_UNK fn_800254AC();
M2C_UNK DVDReadAsyncPrio(void *, s32, s32, M2C_UNK, M2C_UNK *, M2C_UNK);
u32 fn_801518D0(s32, M2C_UNK *);
M2C_UNK strncpy(void *, s32, s32);
M2C_UNK strcpy();
s32 strlen();
extern M2C_UNK fn_80021BA4;
extern M2C_UNK lbl_8034E790;
extern M2C_UNK lbl_8034E798;
M2C_UNK DVDClose(s32);
M2C_UNK DVDCancel(s32);
u32 fn_800AA778(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, s32 *);
extern M2C_UNK fn_80021B9C;
s32 fn_800AAD14(s32);
M2C_UNK fn_800AAC7C();
M2C_UNK fn_800AACB0(s32, u32, u32, u32, u32);
s32 fn_800AACF4();
M2C_UNK fn_800AB11C(u32);
M2C_UNK DCFlushRange(s32, s32);
M2C_UNK fn_800278E0(void *, s32, s32, M2C_UNK);
s32 fn_800A95CC(u32, s32);
M2C_UNK fn_800AABE0(u32, u8);
M2C_UNK fn_800AAC88(u32);
s32 fn_800AAD04(u32);
s32 fn_800AAD0C(u32);
s32 fn_800AAD1C(s32);
M2C_UNK fn_800AAD24(s32, M2C_UNK);
s32 fn_800AAD2C();
s32 fn_800AAD34(s32);
s32 fn_800AAD3C(s32);
u32 fn_800AAD44(s32);
s32 fn_800AAD4C(u32);
M2C_UNK fn_800AC6B8(s32, s32, s32);
M2C_UNK fn_800A954C();
s32 fn_800AABE8(u32, s32 *);
M2C_UNK fn_800AB130(u32);
s32 OSDisableInterrupts();
M2C_UNK OSRestoreInterrupts(s32);
s32 fn_800AAF78(s32);
M2C_UNK fn_800AB028(s32);
M2C_UNK fn_800AB0E4();
s32 fn_800AAF54(s32, u8);
s32 fn_800AACFC(s32);
M2C_UNK SetCursorPos(s32, f32, f32, f32, f32);
extern s32 lbl_803504F8;
extern f32 lbl_80351568;
M2C_UNK method_requestMotionUrgently(void *, s32, f32);
extern f32 lbl_8035156C;
s32 get_up_vector_for_viewing_mtx(M2C_UNK);
M2C_UNK GetMotionEndFrame(void **, M2C_UNK);
M2C_UNK fn_800250A0();
s32 fn_800A163C(M2C_UNK, s32);
extern M2C_UNK lbl_802C0270;
extern f32 lbl_80351570;
M2C_UNK fn_80012CF8();
M2C_UNK fn_800146F0(s32 *, M2C_UNK);
M2C_UNK fn_80014798(s32 *, u8 *, M2C_UNK *);
M2C_UNK fn_80014844(s32 *, u8 *, s32, M2C_UNK *, u8 *);
M2C_UNK fn_80015570(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_80024E80();
M2C_UNK fn_80024F40(M2C_UNK *, void *, void **);
M2C_UNK fn_80024FD8();
M2C_UNK method_setAnitex(s32, s32, s32);
M2C_UNK method_resetAnitex(s32);
M2C_UNK method_setTTColSpacing(void *, s32, f32, f32);
M2C_UNK fn_800A17A8(void *);
s32 strchr(u8 *, M2C_UNK);
extern M2C_UNK lbl_801CB418;
extern u8 lbl_8034E7A0;

void fn_80022280(void *arg0, s32 arg1);
void fn_8002241C(void *arg0);
void *fn_800224DC(void *arg0);
void *fn_80022584(void *arg0, s16 arg1);
void fn_8002262C(void *arg0, s32 arg1);
void fn_80022768(void *arg0, s32 arg1, s32 arg2);
void fn_80022830(void *arg0);
s32 fn_80022868(void *arg0);
s32 fn_800228F0(void *arg0);
void fn_80022948(void *arg0, s32 arg1);
void fn_80022978(void *arg0);
void fn_8002298C(void *arg0, s32 arg1);
void fn_800229B4(void *arg0, u32 arg1, u32 arg2, u32 arg3);
s32 fn_80022A78(void *arg0);
void fn_80022AD4(s32 arg0, u32 arg1, s32 arg2);
s32 fn_80022B54(void *arg0, void *arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0);
void fn_80022E04(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_80022EE8(void *arg0);
void fn_80022F64(void *arg0);
void fn_80022FCC(void *arg0);
s32 IsStreamPlaying(void *arg0);
void fn_8002303C(void *arg0);
void SetStreamAudioTrack(void *arg0, s8 arg1);
u8 GetStreamAudioTrack(void *arg0);
s32 fn_800230C4(void *arg0);
s32 fn_80023104(void *arg0);
void fn_8002313C(void);
s32 fn_80023140(void *arg0, f32 farg0, f32 farg1);
void fn_80023188(void *arg0);
void fn_800231D0(void *arg0, s32 arg1);
void *fn_80023230(void *arg0);
void fn_80023B40(void *arg0, u8 *arg1, u8 *arg2, s32 arg3, u32 arg4, u8 **arg5);

void fn_80022280(void *arg0, s32 arg1) {
    s32 sp1C;
    void *sp18;
    M2C_UNK *sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 temp_r3;
    s16 temp_r3_2;

    M2C_FIELD(arg0, s32 *, 0x28) = fn_80038264(0x3C00);
    M2C_FIELD(arg0, s32 *, 0x24) = fn_80038264(0x3C00);
    /* draft: did not compile: memset(M2C_FIELD(arg0, s32 *, 0x24), 0, 0x3C00); */
    /* draft: did not compile: memset(M2C_FIELD(arg0, s32 *, 0x28), 0, 0x3C00); */
    M2C_FIELD(arg0, s32 *, 0x3C) = fn_80038264(0x4000);
    M2C_FIELD(arg0, s32 *, 0x38) = fn_80038264(0x4000);
    /* draft: did not compile: memset(M2C_FIELD(arg0, s32 *, 0x38), 0, 0x4000); */
    /* draft: did not compile: memset(M2C_FIELD(arg0, s32 *, 0x3C), 0, 0x4000); */
    sp8 = 0;
    spC = 0;
    sp10 = 0;
    sp14 = &fn_80021CE0;
    sp18 = arg0;
    sp1C = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = fn_8011AD38(0xFF, M2C_FIELD(arg0, s32 *, 0x24), 0x1E00, arg1, 0, 0, 0, 0);
    sp8 = 0;
    spC = 0;
    sp10 = 0;
    sp14 = &fn_80022004;
    sp18 = arg0;
    sp1C = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = fn_8011AD38(0xFF, M2C_FIELD(arg0, s32 *, 0x28), 0x1E00, arg1, 0, 0, 0, 0);
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x14C);
    fn_8011B1D4(M2C_FIELD(arg0, s32 *, 0x1C), (u8) M2C_FIELD(arg0, s32 *, 0x148), (u8) temp_r3, (u8) ((s8) (temp_r3 >> 8) + 0x40), 0, 0);
    temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x150);
    fn_8011B1D4(M2C_FIELD(arg0, s32 *, 0x20), (u8) M2C_FIELD(arg0, s32 *, 0x148), (u8) temp_r3_2, (u8) ((s8) (temp_r3_2 >> 8) + 0x40), 0, 0);
}

void fn_8002241C(void *arg0) {
    if ((u32) (M2C_FIELD(arg0, s32 *, 0x1C) + 0x10000) != -1U) {
        fn_8011B730();
        M2C_FIELD(arg0, s32 *, 0x1C) = -1;
    }
    if ((u32) (M2C_FIELD(arg0, s32 *, 0x20) + 0x10000) != -1U) {
        fn_8011B730();
        M2C_FIELD(arg0, s32 *, 0x20) = -1;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x28) != 0U) {
        FreePictureSD();
        M2C_FIELD(arg0, u32 *, 0x28) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
        FreePictureSD();
        M2C_FIELD(arg0, u32 *, 0x24) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
        FreePictureSD();
        M2C_FIELD(arg0, u32 *, 0x38) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
        FreePictureSD();
        M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
    }
}

void *fn_800224DC(void *arg0) {
    s32 temp_r5;

    M2C_FIELD(arg0, s32 *, 0x148) = 0x7F;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s8 *, 8) = 0;
    M2C_FIELD(arg0, s8 *, 9) = 0;
    M2C_FIELD(arg0, s8 *, 0xA) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s8 *, 0x140) = 0;
    M2C_FIELD(arg0, s32 *, 0x14C) = 0;
    M2C_FIELD(arg0, s32 *, 0x150) = 0x7F;
    M2C_FIELD(arg0, s32 *, 0x154) = 0;
    M2C_FIELD(arg0, s32 *, 0x158) = 0;
    M2C_FIELD(arg0, s32 *, 0x160) = -1;
    M2C_FIELD(arg0, s32 *, 0x15C) = 0;
    M2C_FIELD(arg0, s32 *, 0x168) = -1;
    M2C_FIELD(arg0, s32 *, 0x16C) = -1;
    temp_r5 = lbl_803504CC;
    lbl_803504CC = temp_r5 + 1;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = -1;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = -1;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    /* draft: did not compile: fn_8002262C(temp_r5, -1, 0); */
    return arg0;
}

void *fn_80022584(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        fn_80022830((void *)(0));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x18) != 0U) {
            fn_80022A78(arg0);
            fn_800AAF88(M2C_FIELD(arg0, u32 *, 0x18));
            fn_80022EE8(arg0);
        }
        FreePictureSD(M2C_FIELD(arg0, s32 *, 0x170));
        FreePictureSD(M2C_FIELD(arg0, s32 *, 0x178));
        fn_800058E8(M2C_FIELD(arg0, s32 *, 0x14));
        fn_800058E8(M2C_FIELD(arg0, s32 *, 0x10));
        fn_800058E8(M2C_FIELD(arg0, s32 *, 0xC));
        lbl_803504CC -= 1;
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

void fn_8002262C(void *arg0, s32 arg1) {
    s32 temp_r30;
    s32 temp_r30_2;
    s32 temp_r3_2;
    s32 var_r31;
    u16 temp_r3;

    M2C_FIELD(arg0, s32 *, 0) = 0;
    temp_r3 = fn_801518D0(arg1, &lbl_8034E790);
    if (temp_r3 != 0U) {
        var_r31 = temp_r3 - arg1;
    } else {
        var_r31 = strlen(arg1);
    }
    temp_r30 = var_r31 + 5;
    M2C_FIELD(arg0, void **, 0xC) = get_up_vector_for_viewing_mtx_inner(temp_r30);
    M2C_FIELD(arg0, void **, 0x10) = get_up_vector_for_viewing_mtx_inner(temp_r30);
    strncpy(M2C_FIELD(arg0, void **, 0xC), arg1, var_r31);
    /* draft: did not compile: strcpy(M2C_FIELD(arg0, void **, 0xC) + var_r31, &lbl_8034E790); */
    strncpy(M2C_FIELD(arg0, void **, 0x10), arg1, var_r31);
    /* draft: did not compile: strcpy(M2C_FIELD(arg0, void **, 0x10) + var_r31, &lbl_8034E798); */
    M2C_FIELD(arg0, void **, 0x14) = get_up_vector_for_viewing_mtx_inner(0x3C);
    fn_800254AC(M2C_FIELD(arg0, void **, 0x10), M2C_FIELD(arg0, void **, 0x14));
    temp_r3_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s32 *, 0x34);
    M2C_FIELD(arg0, s32 *, 0x17C) = temp_r3_2;
    temp_r30_2 = (temp_r3_2 + 0x1F) & 0xFFFFFFE0;
    M2C_FIELD(arg0, s32 *, 0x178) = fn_80038264(temp_r30_2);
    M2C_FIELD(arg0, s32 *, 0x170) = fn_80038264(0x44);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), void **, 0x2C) = arg0;
    DVDReadAsyncPrio(M2C_FIELD(arg0, void **, 0x14), M2C_FIELD(arg0, s32 *, 0x178), temp_r30_2, 0, &fn_80021BA4, 2);
}

void fn_80022768(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;

    DVDClose(arg2);
    if (arg1 < 0) {
        if (arg1 == -3) {
            M2C_FIELD(arg0, s32 *, 0) = 3;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0) = 2;
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0);
    switch (temp_r0) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0) = 1;
        fn_800254AC(M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, void **, 0x14));
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), void **, 0x2C) = arg0;
        DVDReadAsyncPrio(M2C_FIELD(arg0, void **, 0x14), M2C_FIELD(arg0, s32 *, 0x170), 0x60, 0, &fn_80021BA4, 2);
        return;
    case 1:
        M2C_FIELD(arg0, s32 *, 0) = 4;
        return;
    }
}

void fn_80022830(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0);
    if ((temp_r0 != 4) && (temp_r0 != 2)) {
        DVDCancel(M2C_FIELD(arg0, s32 *, 0x14));
    }
}

s32 fn_80022868(void *arg0) {
    s32 sp10;
    s32 sp8;

    sp8 = M2C_FIELD(arg0, s32 *, 0x170);
    M2C_FIELD(arg0, u32 *, 0x18) = fn_800AA778(M2C_FIELD(arg0, s32 *, 0xC), 4, 0x18, 0x2000, -1, &fn_80021B9C, 0, &sp10);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x18) == 0U) {
        fn_8002313C();
        return sp10 == 0xE;
    }
    return 1;
}

#pragma push
#pragma peephole off
s32 fn_800228F0(void *arg0) {
    s32 var_r3;

    var_r3 = fn_800AAD14(M2C_FIELD(arg0, s32 *, 0x18));
    if (var_r3 < 0xBBAA) {
        if (var_r3 != 0x7D1C) {
            return var_r3;
        }
        var_r3 = 0x7D00;
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return var_r3;
    }
    if (var_r3 < 0xBBAC) {
        return 0xBB80;
    }
    return var_r3;
}
#pragma pop

void fn_80022948(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x16C) = arg1;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x18) != 0U) {
        fn_800AAC7C();
    }
}

void fn_80022978(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 5;
    M2C_FIELD(arg0, s8 *, 9) = 0;
}

void fn_8002298C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = 4;
    M2C_FIELD(arg0, s32 *, 0x164) = -1;
    M2C_FIELD(arg0, s32 *, 0x168) = arg1;
    M2C_FIELD(arg0, s32 *, 0x160) = -1;
    M2C_FIELD(arg0, s32 *, 0x158) = -1;
    M2C_FIELD(arg0, s8 *, 9) = 0;
}

void fn_800229B4(void *arg0, u32 arg1, u32 arg2, u32 arg3) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r5_2;
    s32 temp_r8_2;
    u8 var_ctr;
    s32 var_r5;
    s32 var_r9;
    u32 temp_r5;
    u32 var_r10;
    u32 var_r4;
    u32 var_r6;
    u32 var_r7;

    var_r4 = arg1;
    var_r6 = arg3;
    var_r10 = var_r4;
    var_r7 = arg2;
    temp_r5 = M2C_FIELD((M2C_FIELD(arg0, void **, 0x170)), u32 *, 0x18);
    if ((u32) (var_r10 + 0x10000) != -1U) {
        if (var_r10 >= temp_r5) {
            var_r10 = 0;
        }
        temp_r5_2 = M2C_FIELD(arg0, s32 *, 0x178);
        temp_r0 = var_r10 * 8;
        /* draft: did not compile: var_r6 = *(temp_r5_2 + temp_r0); */
        var_r4 = M2C_FIELD((temp_r0 + temp_r5_2), u32 *, 4);
        var_r7 = var_r6;
    } else {
        if (var_r7 >= (u32) M2C_FIELD((M2C_FIELD(arg0, void **, 0x170)), u32 *, 0x1C)) {
            var_r7 = 0U;
        }
        var_r9 = temp_r5 - 1;
        var_r5 = var_r9 * 8;
        var_ctr = var_r9 + 1;
        if (var_r9 >= 0) {
loop_7:
            temp_r8_2 = M2C_FIELD(arg0, s32 *, 0x178);
            if (0 /* draft: did not compile */) {
                temp_r0_2 = var_r9 * 8;
                var_r10 = (u32) var_r9;
                /* draft: did not compile: var_r6 = *(temp_r8_2 + temp_r0_2); */
                var_r4 = M2C_FIELD((temp_r8_2 + temp_r0_2), u32 *, 4);
            } else {
                var_r5 -= 8;
                var_r9 -= 1;
                var_ctr -= 1;
                if (var_ctr != 0) {
                    goto loop_7;
                }
            }
        }
    }
    fn_800AACB0(M2C_FIELD(arg0, s32 *, 0x18), var_r4, var_r10, var_r6, var_r7);
}

s32 fn_80022A78(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x18) == 0U) {
        return 1;
    }
    if (fn_800AACF4() != 0) {
        fn_800AB11C(M2C_FIELD(arg0, u32 *, 0x18));
        return 0;
    }
    return 1;
}

void fn_80022AD4(s32 arg0, u32 arg1, s32 arg2) {
    s32 temp_r30;
    s32 temp_r31;

    temp_r31 = arg1 * arg2;
    memset((void *)(0), (int)(temp_r31), (unsigned long)(0));
    temp_r30 = ((arg1 >> 1U) * arg2) & 0xFFFFFFFE;
    /* draft: did not compile: memset(arg0 + temp_r31, 0x80, temp_r30); */
    DCFlushRange(arg0, temp_r31 + temp_r30);
}

#pragma push
#pragma dont_inline on
s32 fn_80022B54(void *arg0, void *arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0) {
    s32 temp_r0;
    u8 temp_r0_2;
    s32 temp_r25;
    s32 temp_r26;
    s32 temp_r30;
    s32 temp_r30_2;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r31;

    var_r31 = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 4) == 0) {
        return 0;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x18) == 0U) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0) == 4) {
            fn_80022868((void *)(0));
            fn_800AABE0(M2C_FIELD(arg0, u32 *, 0x18), M2C_FIELD(arg0, u8 *, 8));
            fn_800AAC7C(M2C_FIELD(arg0, u32 *, 0x18), M2C_FIELD(arg0, u32 *, 0x16C));
            fn_8002303C(arg0);
            fn_80022280(arg0, fn_800228F0(arg0));
            temp_r0 = M2C_FIELD(arg0, s32 *, 4);
            switch (temp_r0) {                      /* irregular */
            case 0:
                break;
            case 4:
                fn_800229B4((void *)(arg0), (unsigned long)(M2C_FIELD(arg0, s32 *, 0x164)), (unsigned long)(M2C_FIELD(arg0, s32 *, 0x168)), (unsigned long)(0));
                break;
            default:
                fn_800AAC88(M2C_FIELD(arg0, u32 *, 0x18));
                temp_r0_2 = M2C_FIELD(arg0, s32 *, 4);
                if (temp_r0_2 != 2) {
                    if (temp_r0_2 < 2) {

                    }
                } else {
                    M2C_FIELD(arg0, s32 *, 4) = 1;
                }
                break;
            }
            goto block_18;
        }
        if (((u8) M2C_FIELD(arg0, u8 *, 0xA) == 0) && (arg1 != NULL)) {
            temp_r30 = M2C_FIELD(arg1, s32 *, 0x30);
            fn_800278E0(arg1, 0x10, 0x10, 0x80);
            fn_80022AD4(temp_r30, 0x10, 0x10);
            M2C_FIELD(arg0, u8 *, 0xA) = 1U;
        }
        return 0;
    }
block_18:
    if (fn_800A95CC(M2C_FIELD(arg0, u32 *, 0x18), arg3) != 0) {
        temp_r3 = fn_800AAD4C(M2C_FIELD(arg0, u32 *, 0x18));
        if (temp_r3 != 0) {
            M2C_FIELD(arg0, s32 *, 0x154) = fn_800AAD2C();
            M2C_FIELD(arg0, s32 *, 0x158) = fn_800AAD34(temp_r3);
            M2C_FIELD(arg0, s32 *, 0x15C) = fn_800AAD3C(temp_r3);
            M2C_FIELD(arg0, u32 *, 0x160) = fn_800AAD44(temp_r3);
            if ((u32) M2C_FIELD(arg0, u32 *, 0x160) == (u32) M2C_FIELD(arg0, u32 *, 0x16C)) {
                M2C_FIELD(arg0, s8 *, 9) = 1;
            }
            if (arg1 != NULL) {
                temp_r25 = fn_800AAD1C(temp_r3);
                temp_r26 = fn_800AAD04(M2C_FIELD(arg0, u32 *, 0x18));
                temp_r3_2 = fn_800AAD0C(M2C_FIELD(arg0, u32 *, 0x18));
                fn_800278E0(arg1, temp_r26, temp_r3_2, 0x80);
                if (arg2 == 0) {
                    fn_800AC6B8(temp_r25, temp_r26, temp_r3_2);
                } else {
                    fn_80022AD4(M2C_FIELD(arg1, s32 *, 0x30), temp_r26, temp_r3_2);
                }
            }
            fn_800AAD24(temp_r3, 0);
            var_r31 = 1;
        }
    }
    if ((var_r31 != 0) && ((u8) M2C_FIELD(arg0, u8 *, 0xA) == 0)) {
        M2C_FIELD(arg0, u8 *, 0xA) = 1U;
    }
    if ((var_r31 == 0) && ((u8) M2C_FIELD(arg0, u8 *, 0xA) == 0) && (arg1 != NULL)) {
        temp_r30_2 = M2C_FIELD(arg1, s32 *, 0x30);
        fn_800278E0(arg1, 0x10, 0x10, 0x80);
        fn_80022AD4(temp_r30_2, 0x10, 0x10);
        M2C_FIELD(arg0, u8 *, 0xA) = 1U;
    }
    return var_r31;
}
#pragma pop

void fn_80022E04(void *arg0, s32 arg1, s32 arg2, s32 arg3) { } /* draft: stub */

s32 fn_80022EE8(void *arg0) {
    s32 sp8;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x18) == 0U) {
        return 1;
    }
    fn_8002241C((void *)(0));
    fn_800AB130(M2C_FIELD(arg0, u32 *, 0x18));
    fn_800A954C();
    if (fn_800AABE8(M2C_FIELD(arg0, u32 *, 0x18), &sp8) == 0) {
        fn_8002313C();
        return 0;
    }
    M2C_FIELD(arg0, u32 *, 0x18) = 0U;
    return 1;
}

void fn_80022F64(void *arg0) {
    s32 temp_r31;

    if (fn_800AAF78(M2C_FIELD(arg0, s32 *, 0x18)) == 0) {
        temp_r31 = OSDisableInterrupts();
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg0, s32 *, 0x2C);
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x2C);
        fn_800AB028(M2C_FIELD(arg0, s32 *, 0x18));
        OSRestoreInterrupts(temp_r31);
    }
}

void fn_80022FCC(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x18) != 0U) {
        fn_800AB0E4();
    }
    M2C_FIELD(arg0, s32 *, 4) = 1;
}

s32 IsStreamPlaying(void *arg0) {
    return fn_800AAF78(M2C_FIELD(arg0, s32 *, 0x18)) != 0;
}

void fn_8002303C(void *arg0) {
    if (fn_800AAF54(M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, u8 *, 0x140)) == 0) {
        M2C_FIELD(arg0, u8 *, 0x140) = 0U;
        fn_800AAF54(M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, u8 *, 0x140));
    }
}

void SetStreamAudioTrack(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x140) = arg1;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x18) != 0U) {
        fn_8002303C((void *)(0));
    }
}

u8 GetStreamAudioTrack(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x140);
}

s32 fn_800230C4(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x18) != 0U) {
        return fn_800AACF4() != 0;
    }
    return 0;
}

s32 fn_80023104(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x160) * fn_800AACFC(M2C_FIELD(arg0, s32 *, 0x18));
}

void fn_8002313C(void) {

}

s32 fn_80023140(void *arg0, f32 farg0, f32 farg1) {
    s32 var_r0;

    var_r0 = 0;
    if ((M2C_FIELD(arg0, f32 *, 0) <= farg0) && (farg0 < M2C_FIELD(arg0, f32 *, 4))) {
        if ((M2C_FIELD(arg0, f32 *, 8) <= farg1) && (farg1 < M2C_FIELD(arg0, f32 *, 0xC))) {
            var_r0 = 1;
        }
    }
    return var_r0;
}

void fn_80023188(void *arg0) {
    f32 temp_f3;
    f32 temp_f4;

    temp_f4 = M2C_FIELD(arg0, f32 *, 0);
    temp_f3 = M2C_FIELD(arg0, f32 *, 4);
    temp_f3 += temp_f4;
    SetCursorPos(lbl_803504F8, temp_f3 * lbl_80351568, (M2C_FIELD(arg0, f32 *, 8) + M2C_FIELD(arg0, f32 *, 0xC)) * lbl_80351568, temp_f3, temp_f4);
}

void fn_800231D0(void *arg0, s32 arg1) {
    method_requestMotionUrgently(arg0, (arg1 & 0xFFF) | (((M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 (**)(), 0xC)() << 0xC) & 0x07FFF000) | 0x38000000), lbl_8035156C);
}

void *fn_80023230(void *arg0) { } /* draft: stub */

void fn_80023B40(void *arg0, u8 *arg1, u8 *arg2, s32 arg3, u32 arg4, u8 **arg5) { } /* draft: stub */
