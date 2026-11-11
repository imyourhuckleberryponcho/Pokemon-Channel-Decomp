/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK VIWaitForRetrace();
extern u8 lbl_80350488;
extern u8 lbl_80350489;
M2C_UNK OSDisableInterrupts(M2C_UNK *, M2C_UNK, u8 *, s32);
M2C_UNK OSRestoreInterrupts(s32);
extern M2C_UNK lbl_8015EC80;
extern u8 lbl_802C0088;
extern M2C_UNK lbl_802C00C8;
extern s32 lbl_8035048C;
extern u8 lbl_80350495;
extern u8 lbl_80350496;
extern u8 lbl_80350497;
extern u8 lbl_80350498;
extern u8 lbl_80350499;
extern u8 lbl_8035049A;
extern u8 lbl_8035049B;
extern u8 lbl_8035049C;
extern u8 lbl_8035049D;
extern u8 lbl_8035049E;
extern u8 lbl_80350480;
extern s32 lbl_8034E2E8;
extern s32 lbl_8034E2F0;
extern u8 lbl_8034E2F4;
extern u8 lbl_8034E2F5;
M2C_UNK fn_800254AC(M2C_UNK *, M2C_UNK *);
M2C_UNK OSExitThread(M2C_UNK);
M2C_UNK DVDClose(M2C_UNK *);
s32 DVDReadPrio(M2C_UNK *, s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK strcat();
M2C_UNK strcpy();
extern s32 *lbl_801DB948;
extern M2C_UNK lbl_802C0184;
extern s8 lbl_80350494;
extern M2C_UNK lbl_802C0148;
extern s32 lbl_8035047C;
extern u8 lbl_80350481;
M2C_UNK fn_80126348(s32, u8, M2C_UNK, s32, s32);
M2C_UNK fn_80126674();
extern M2C_UNK lbl_801DB954;
extern M2C_UNK lbl_801DB964;
extern M2C_UNK lbl_802BFD70;
extern s32 lbl_8034E2EC;
extern s32 lbl_80350470;
extern s32 lbl_80350474;
extern s32 lbl_80350478;
extern s32 lbl_80350490;
extern M2C_UNK lbl_8015EB50;
s32 fn_80119B38(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK sndFXKeyOff();
s32 fn_80119BBC();
u8 fn_80119A38(M2C_UNK, s32);
u8 fn_80119A98(M2C_UNK, s32);

void fn_80014C98(void);
s32 StackSfxGroup(s32 arg0);
void fn_80014F18(s32 arg0);
void fn_80015030(void);
void fn_8001508C(M2C_UNK arg_sp0);
void fn_80015170(s32 arg0);
s32 fn_800151A0(s32 arg0, s32 arg1);
void fn_80015228(void);
void PlayMusic(s32 arg0);
void fn_80015448(void);
void fn_800154A8(u8 arg0);
void fn_80015508(u8 arg0);
u8 GetMusicVolume(void);
s32 fn_80015570(s32 arg1, s32 arg2);
void fn_800155D0(s32 arg0);
u32 CheckSound(void);
u8 fn_80015644(s32 arg1);
u8 PitchBendSound(s32 arg1);
u8 fn_8001569C(s32 arg0, u8 arg1);

void fn_80014C98(void) {
    if ((u8) lbl_80350488 == 0) {
        StackSfxGroup(0x27EB);
        StackSfxGroup(0x19);
        StackSfxGroup(0x27F3);
        StackSfxGroup(0x27E1);
        StackSfxGroup(0x27F1);
loop_3:
        if ((u8) lbl_80350489 != 0) {
            VIWaitForRetrace();
            goto loop_3;
        }
        lbl_80350488 = 1;
    }
}

s32 StackSfxGroup(s32 arg0) { return 0; } /* draft: stub */

void fn_80014F18(s32 arg0) {
    u8 *var_r3;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 var_ctr;
    s32 var_r31;
    s32 var_r5;
    u8 *var_r3_2;

    if ((u8) lbl_80350480 == 0) {
        temp_r4 = *(&lbl_8015EC80 + (arg0 * 4));
        if ((temp_r4 != -1) && (temp_r4 != 0x3E) && (temp_r4 != 0x3F) && (temp_r4 != 0x7D) && (temp_r4 != 0x7E) && (temp_r4 != 0x39)) {
            var_r5 = 0;
            var_r3 = &lbl_802C0088;
loop_11:
            if (var_r5 < (s32) lbl_8035048C) {
                if ((s32) *var_r3 == temp_r4) {
                    *(&lbl_802C00C8 + var_r5) = *(&lbl_802C00C8 + var_r5) - 1;
                } else {
                    var_r3 += 1;
                    var_r5 += 1;
                    goto loop_11;
                }
            }
            var_r31 = lbl_8035048C;
            var_r31 -= 1;
            /* draft: did not compile: var_r3_2 = &lbl_802C00C8 + var_r31; */
            var_ctr = 1;
            var_ctr += var_r31;
            if (var_r31 >= 0) {
loop_13:
                if ((u8) *var_r3_2 == 0) {
                    var_r3_2 -= 1;
                    var_r31 -= 1;
                    var_ctr -= 1;
                    if (var_ctr != 0) {
                        goto loop_13;
                    }
                }
            }
            if (var_r31 != (s32) (lbl_8035048C - 1)) {
                OSDisableInterrupts((long *)(0), (long)(0), (unsigned char *)(0), (long)(0));
                temp_r4_2 = var_r31 + 1;
                lbl_8035048C = temp_r4_2;
                lbl_80350489 = 1;
                OSRestoreInterrupts(temp_r4_2);
            }
        }
    }
}

void fn_80015030(void) { } /* draft: stub */

void fn_8001508C(M2C_UNK arg_sp0) {
    s32 sp3C;
    M2C_UNK sp8;
    s32 **var_r27;
    s32 **var_r28;
    s32 temp_r26;
    s32 var_r25;
    u8 var_r24;

    var_r24 = 0;
    var_r25 = 0;
    var_r28 = &lbl_801DB948 + 0xC;
    var_r27 = &lbl_801DB948;
loop_4:
    if ((var_r24 == 0) && (var_r25 < 3)) {
        strcpy(&lbl_802C0184, &lbl_801DB948 + 0x1C);
        strcat(&lbl_802C0184, *var_r28);
        fn_800254AC(&lbl_802C0184, &sp8);
        temp_r26 = (sp3C + 0x1F) & 0xFFFFFFE0;
        if (DVDReadPrio(&sp8, **var_r27, temp_r26, 0, 2) != temp_r26) {
            var_r24 = 1;
        }
        DVDClose(&sp8);
        VIWaitForRetrace();
        var_r28 += 4;
        var_r27 += 4;
        var_r25 += 1;
        goto loop_4;
    }
    if (var_r24 != 0) {
        OSExitThread(0);
    }
}

void fn_80015170(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case -1:
        lbl_80350480 = 1;
        return;
    default:
        lbl_80350494 = 1;
        return;
    case -3:
        return;
    }
}

s32 fn_800151A0(s32 arg0, s32 arg1) {
    if ((u8) lbl_80350481 != 0) {
        DVDReadPrio((long *)(&lbl_802C0148), (long)(lbl_8035047C), (long)(2), (long)(0), (long)(0));
    } else {
        lbl_80350494 = 0;
        DVDReadAsyncPrio(&lbl_802C0148, lbl_8035047C, fn_80015170, 2);
loop_4:
        if ((u8) lbl_80350494 == 0) {
            VIWaitForRetrace();
            goto loop_4;
        }
    }
    return lbl_8035047C;
}

void fn_80015228(void) {
    s32 var_r29;
    s32 var_r30;
    u8 *var_r4;
    u8 *var_r5;
    u8 temp_r29;

loop_2:
    if ((u8) lbl_80350489 == 0) {
        VIWaitForRetrace();
        goto loop_2;
    }
    fn_8001508C((long)(0));
    strcpy(&lbl_802BFD70 + 0x414, &lbl_801DB964);
    strcat(&lbl_802BFD70 + 0x414, M2C_FIELD(&lbl_801DB954, s32 *, 0xC));
    fn_800254AC(&lbl_802BFD70 + 0x414, &lbl_802BFD70 + 0x3D8);
loop_16:
    if ((u8) lbl_80350489 != 0) {
        /* draft: did not compile: var_r4 = &lbl_802BFD70 + 0x318; */
        /* draft: did not compile: var_r5 = &lbl_802BFD70 + 0x398; */
        var_r30 = 0;
loop_7:
        if ((var_r30 < (s32) lbl_80350490) && (var_r30 < (s32) lbl_8035048C)) {
            if ((u8) *var_r5 == (u8) *var_r4) {
                var_r4 += 1;
                var_r5 += 1;
                var_r30 += 1;
                goto loop_7;
            }
        }
        var_r29 = lbl_80350490 - 1;
loop_11:
        if (var_r29 >= var_r30) {
            fn_80126674();
            var_r29 -= 1;
            goto loop_11;
        }
        if (var_r30 == (s32) lbl_8035048C) {
            lbl_80350490 = var_r30;
            lbl_80350489 = 0;
        } else {
            temp_r29 = *(&lbl_802BFD70 + 0x318 + var_r30);
            fn_80126328(fn_800151A0, 0x20000);
            fn_80126348(lbl_80350474, temp_r29, 0, lbl_80350478, lbl_80350470);
            *(&lbl_802BFD70 + 0x398 + var_r30) = temp_r29;
            lbl_80350490 = var_r30 + 1;
            if ((s32) temp_r29 == (s32) *(&lbl_8015EC80 + (lbl_8034E2EC * 4))) {
                fn_80015030();
            }
            goto loop_16;
        }
    }
    lbl_80350481 = 0;
loop_19:
    if ((u8) lbl_80350489 == 0) {
        VIWaitForRetrace();
        goto loop_19;
    }
    goto loop_16;
}

#pragma push
#pragma dont_inline on
void PlayMusic(s32 arg0) {
    s32 var_ctr;
    M2C_UNK *var_r4;
    s8 var_r31;

    var_r4 = &lbl_8015EB50;
    var_r31 = 0;
    var_ctr = 0x13;
loop_1:
    if (arg0 != (s32) M2C_FIELD(var_r4, s32 *, 0)) {
        var_r31 += 1;
        if (arg0 != (s32) M2C_FIELD(var_r4, s32 *, 8)) {
            var_r4 = var_r4 + 8 + 8;
            var_r31 += 1;
            var_ctr -= 1;
            if (var_ctr != 0) {
                goto loop_1;
            }
        }
    }
    if ((s32) lbl_8034E2F0 != arg0) {
        fn_80015448();
        lbl_8034E2F0 = arg0;
        lbl_8034E2EC = M2C_FIELD((&lbl_8015EB50 + (var_r31 * 8)), s32 *, 4);
        if ((u32) (StackSfxGroup(lbl_8034E2EC) + 0x10000) == -1U) {
            fn_80015030();
        }
    }
}
#pragma pop

void fn_80015448(void) {
    if ((u32) (lbl_8034E2E8 + 0x10000) != -1U) {
        fn_800155D0(lbl_8034E2E8);
    }
    if ((u32) (lbl_8034E2EC + 0x10000) != -1U) {
        fn_80014F18(lbl_8034E2EC);
        lbl_8034E2EC = -1;
    }
    lbl_8034E2F0 = -1;
}

void fn_800154A8(u8 arg0) {
    lbl_8034E2F4 = arg0;
    if ((s32) lbl_8034E2E8 != -1) {
        fn_80015644((long)(lbl_8034E2E8));
    }
}

void fn_80015508(u8 arg0) {
    lbl_8034E2F5 = arg0;
    if ((s32) lbl_8034E2E8 != -1) {
        fn_80015644((long)(lbl_8034E2E8));
    }
}

u8 GetMusicVolume(void) {
    return lbl_8034E2F4;
}

s32 fn_80015570(s32 arg1, s32 arg2) {
    s32 temp_r31;

    temp_r31 = fn_80119B38(0x7F, 0xFF, 0);
    fn_80015644(arg1);
    fn_8001569C(temp_r31, arg2);
    return temp_r31;
}

void fn_800155D0(s32 arg0) {
    if ((u32) (arg0 + 0x10000) != -1U) {
        sndFXKeyOff();
        fn_80015644((long)(arg0));
    }
}

u32 CheckSound(void) {
    s32 temp_r3;

    temp_r3 = fn_80119BBC();
    return (u32) ((-1 - temp_r3) | (temp_r3 + 1)) >> 0x1FU;
}

u8 fn_80015644(s32 arg1) {
    return fn_80119A38(7, arg1);
}

u8 PitchBendSound(s32 arg1) {
    return fn_80119A98(0x80, arg1);
}

u8 fn_8001569C(s32 arg0, u8 arg1) {
    fn_80119A38(0x83, (u8) ((s8) (u8) (arg1 >> 8U) + 0x40));
    return fn_80119A38((long)(arg0), (long)(0xAU));
}
