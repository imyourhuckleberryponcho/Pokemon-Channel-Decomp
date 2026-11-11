/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

extern M2C_UNK lbl_802CF510;
extern s32 lbl_80350728;
M2C_UNK fn_80005888(void *);
u32 get_up_vector_for_viewing_mtx();
M2C_UNK fn_8014BB10();
M2C_UNK fn_8014F858(void *, M2C_UNK *, M2C_UNK *);
extern M2C_UNK __files;
extern M2C_UNK lbl_8022A414;
extern M2C_UNK lbl_8022A434;
void *fn_8001360C();
void *fn_800A6A34();
void *fn_80027224(void *);
void *fn_8007F05C(s32);
u8 fn_800847D4(s32);
M2C_UNK fn_8008499C(s32);
M2C_UNK fn_800A6E5C(s32);
M2C_UNK fn_800A6F74(s32, void *);
s32 fn_8007EE48(s32);
M2C_UNK fn_800831EC();
M2C_UNK fn_8008498C(s32);
M2C_UNK fn_80013620(s32, M2C_UNK);
M2C_UNK fn_80022584(s32, M2C_UNK);
M2C_UNK fn_8007EF14();
M2C_UNK fn_8007F14C();
M2C_UNK fn_8008313C();
M2C_UNK fn_8009CDD8();
M2C_UNK fn_800A1720(s32, M2C_UNK);
M2C_UNK fn_800A5E4C(s32, M2C_UNK);
M2C_UNK fn_800A6CB0(s32, M2C_UNK);
s32 fn_80081280(void *);
M2C_UNK fn_800A7428(s32, M2C_UNK);
M2C_UNK fn_8009CD58(s32 *, void *);
M2C_UNK fn_8009CE50(s32);
void *fn_8009CD98(s32 *);
s32 fn_80015570(u16, u8, u16, s32, M2C_UNK);
u32 CheckSound();
M2C_UNK fn_800155D0(u32);
M2C_UNK fn_80015644();
M2C_UNK fn_8001569C(u32, u16);
M2C_UNK fn_80022E04(s32, s32);
s32 StackSfxGroup(s32, void *);
M2C_UNK fn_80014F18(u32);
M2C_UNK fn_800A1950(s32);

u32 fn_8009AA38(void *arg0, s32 arg1);
void fn_8009AA70(void *arg0, u32 arg1);
void fn_8009AAF0(void *arg0, u32 arg1);
void *fn_8009AB5C(void *arg0, s16 arg1);
void *fn_8009ABBC(void *arg0, s16 arg1);
void *fn_8009AC1C(void *arg0, void *arg1, void *arg2);
void fn_8009ADDC(void *arg0, void *arg1, u32 arg2, void *arg3, M2C_UNK arg_sp0);
s32 *fn_8009B3D0(void *arg0, s32 *arg1, s32 *arg2);
void fn_8009B4D8(void *arg0, s32 *arg1, u32 arg2, s32 *arg3, M2C_UNK arg_sp0);
void fn_8009B918(void *arg0);
void fn_8009B954(void *arg0);
void fn_8009B98C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0);
void fn_8009BBB0(void *arg0);
void *fn_8009BC78(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, M2C_UNK arg_sp0);
void *fn_8009BD00(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, M2C_UNK arg_sp0);
void *fn_8009BD80(void *arg0, s16 arg1);
u8 fn_8009BEEC(void *arg0);
void fn_8009C094(void *arg0, void *arg1);
void fn_8009C110(s32 arg0, void *arg1);
void fn_8009C148(void *arg0);
s32 PlaySound(void *arg0, s32 arg1, s8 arg2, s32 arg3, M2C_UNK arg_sp0);
void StopSound(void *arg0, u32 arg1);
void SetSoundVolume(void *arg0, u32 arg1, s8 arg2, s32 arg3, M2C_UNK arg_sp0);
void SetSoundPanpot(void *arg0, u32 arg1, u16 arg2);
void fn_8009C4D4(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_8009C564(void *arg0, s32 arg1);
void SetStageVolume(void *arg0, s32 arg1, u8 arg2, s32 arg3, s32 arg4, s32 arg5, M2C_UNK arg_sp0);
void fn_8009C728(void *arg0, s32 arg1, u8 arg2, s32 arg3, s32 arg4);
s32 EnableSfxGroup(void *arg0, s32 arg1);
void DisableSfxGroup(void *arg0, u32 arg1);
void DisableAllSfxGroup(void *arg0);
void fn_8009C924(void *arg0);

u32 fn_8009AA38(void *arg0, s32 arg1) { return 0; } /* draft: stub */

void fn_8009AA70(void *arg0, u32 arg1) { } /* draft: stub */

void fn_8009AAF0(void *arg0, u32 arg1) {
    s32 sp8;
    s32 temp_r5_2;
    s32 temp_r7;
    u32 temp_r0;
    u32 temp_r5;

    temp_r0 = M2C_FIELD(arg0, u32 *, 4);
    if (arg1 > temp_r0) {
        sp8 = lbl_80350728;
        temp_r5 = M2C_FIELD(arg0, u32 *, 4);
        temp_r7 = M2C_FIELD(arg0, s32 *, 8);
        /* draft: did not compile: fn_8009B4D8(temp_r7 + (temp_r5 * 4), arg1 - temp_r5, &sp8, temp_r7); */
        return;
    }
    if (arg1 < temp_r0) {
        temp_r5_2 = M2C_FIELD(arg0, s32 *, 8);
        /* draft: did not compile: fn_8009B3D0(temp_r5_2 + (arg1 * 4), temp_r5_2 + (temp_r0 * 4)); */
    }
}

void *fn_8009AB5C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        fn_8009B918((void *)(0));
        if ((u32) M2C_FIELD(arg0, u32 *, 8) != 0U) {
            fn_80005888((void *)(0));
        }
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

void *fn_8009ABBC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        fn_8009B954((void *)(0));
        if ((u32) M2C_FIELD(arg0, u32 *, 8) != 0U) {
            fn_80005888((void *)(0));
        }
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

void *fn_8009AC1C(void *arg0, void *arg1, void *arg2) { } /* draft: stub */

void fn_8009ADDC(void *arg0, void *arg1, u32 arg2, void *arg3, M2C_UNK arg_sp0) { } /* draft: stub */

s32 *fn_8009B3D0(void *arg0, s32 *arg1, s32 *arg2) {
    s32 *var_r7;
    s32 *var_r8;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r10;
    u32 temp_r0;
    u32 temp_r9;
    u32 var_ctr;
    u32 var_ctr_2;
    u32 var_ctr_3;
    u32 var_r6;
    void *temp_r6;

    if (arg1 == arg2) {
        return arg1;
    }
    temp_r9 = M2C_FIELD(arg0, s32 *, 8) + (M2C_FIELD(arg0, s32 *, 4) * 4);
    /* draft: did not compile: temp_r10 = (s32) (temp_r9 - arg2) / 4; */
    if (temp_r10 != 0) {
        var_r7 = arg2;
        var_r8 = arg1;
        /* draft: did not compile: var_r6 = (u32) ((temp_r9 + 3) - var_r7) >> 2U; */
        if (0 /* draft: did not compile */) {
            temp_r0 = var_r6 >> 3U;
            var_ctr = temp_r0;
            if (temp_r0 != 0) {
                do {
                    M2C_FIELD(var_r8, s32 *, 0) = M2C_FIELD(var_r7, s32 *, 0);
                    M2C_FIELD(var_r8, s32 *, 4) = (s32) M2C_FIELD(var_r7, s32 *, 4);
                    M2C_FIELD(var_r8, s32 *, 8) = (s32) M2C_FIELD(var_r7, s32 *, 8);
                    M2C_FIELD(var_r8, s32 *, 0xC) = (s32) M2C_FIELD(var_r7, s32 *, 0xC);
                    M2C_FIELD(var_r8, s32 *, 0x10) = (s32) M2C_FIELD(var_r7, s32 *, 0x10);
                    M2C_FIELD(var_r8, s32 *, 0x14) = (s32) M2C_FIELD(var_r7, s32 *, 0x14);
                    M2C_FIELD(var_r8, s32 *, 0x18) = (s32) M2C_FIELD(var_r7, s32 *, 0x18);
                    temp_r0_2 = M2C_FIELD(var_r7, s32 *, 0x1C);
                    var_r7 += 0x20;
                    M2C_FIELD(var_r8, s32 *, 0x1C) = temp_r0_2;
                    var_r8 += 0x20;
                    var_ctr -= 1;
                } while (var_ctr != 0);
                var_r6 &= 7;
                if (var_r6 != 0) {
                    goto block_7;
                }
            } else {
block_7:
                var_ctr_2 = var_r6;
                do {
                    temp_r0_3 = *var_r7;
                    var_r7 += 4;
                    *var_r8 = temp_r0_3;
                    var_r8 += 4;
                    var_ctr_2 -= 1;
                } while (var_ctr_2 != 0);
            }
        }
    }
    temp_r6 = arg1 + (temp_r10 * 4);
    /* draft: did not compile: var_ctr_3 = (u32) ((temp_r9 + 3) - temp_r6) >> 2U; */
    if (0 /* draft: did not compile */) {
        do {
            var_ctr_3 -= 1;
        } while (var_ctr_3 != 0);
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) - ((s32) (arg2 - arg1) / 4));
    return arg1;
}

#pragma push
#pragma dont_inline on
void fn_8009B4D8(void *arg0, s32 *arg1, u32 arg2, s32 *arg3, M2C_UNK arg_sp0) {
    s32 *sp10;
    u32 spC;
    u32 sp8;
    s32 *temp_r3_3;
    s32 *temp_r3_5;
    s32 *var_r3;
    s32 *var_r5;
    s32 *var_r5_3;
    s32 *var_r5_4;
    s32 *var_r6;
    s32 *var_r6_2;
    s32 *var_r7;
    s32 *var_r8;
    s32 *var_r9;
    s32 temp_cr0_gt;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r4_2;
    s32 temp_r5;
    s32 temp_r7;
    s32 var_ctr;
    u32 temp_r0;
    u32 temp_r0_4;
    u32 temp_r3;
    u32 temp_r3_2;
    u32 temp_r3_4;
    u32 temp_r3_6;
    u32 temp_r4;
    u32 temp_r4_3;
    u32 var_ctr_10;
    u32 var_ctr_2;
    u32 var_ctr_3;
    u32 var_ctr_4;
    u32 var_ctr_5;
    u32 var_ctr_6;
    u32 var_ctr_7;
    u32 var_ctr_8;
    u32 var_ctr_9;
    u32 var_r0;
    u32 var_r26;
    u32 var_r30;
    u32 var_r4;
    u32 var_r4_2;
    void *var_r5_2;

    var_r30 = arg2;
    if (var_r30 != 0) {
        if ((var_r30 > 0x3FFFFFFFU) || ((u32) M2C_FIELD(arg0, u32 *, 4) > (u32) (0x3FFFFFFF - var_r30))) {
            fn_8014F858(&__files + 0xA0, &lbl_8022A414, &__files);
            fn_8014BB10();
        }
        temp_r3 = M2C_FIELD(arg0, u32 *, 4);
        temp_r4 = temp_r3 + var_r30;
        if (temp_r4 <= (u32) M2C_FIELD(arg0, u32 *, 0)) {
            var_r3 = arg3;
            var_r6 = M2C_FIELD(arg0, s32 **, 8) + (temp_r3 * 4);
            temp_r7 = (s32) (var_r6 - arg1) / 4;
            temp_cr0_gt = var_r30 > (u32) temp_r7;
            if (temp_cr0_gt != 0) {
                var_r5 = var_r6;
                var_ctr = var_r30 - temp_r7;
                if (temp_cr0_gt != 0) {
                    do {
                        if (var_r5 != NULL) {
                            *var_r5 = *arg3;
                        }
                        var_r5 = var_r5 + 4;
                        var_r30 = var_r30 - 1;
                        M2C_FIELD(arg0, u32 *, 4) = (u32) (M2C_FIELD(arg0, u32 *, 4) + 1);
                        var_ctr = var_ctr - 1;
                    } while (var_ctr != 0);
                }
                var_r7 = arg1;
                var_ctr_2 = (u32) ((var_r6 + 3) - arg1) >> 2U;
                if (arg1 < var_r6) {
                    do {
                        if (var_r5 != NULL) {
                            *var_r5 = *var_r7;
                        }
                        var_r7 = var_r7 + 4;
                        var_r5 = var_r5 + 4;
                        M2C_FIELD(arg0, u32 *, 4) = (u32) (M2C_FIELD(arg0, u32 *, 4) + 1);
                        var_ctr_2 = var_ctr_2 - 1;
                    } while (var_ctr_2 != 0);
                }
            } else {
                temp_r5 = var_r30 * 4;
                var_r8 = var_r6 - temp_r5;
                var_r9 = var_r6;
                var_ctr_3 = (u32) ((var_r6 + 3) - var_r8) >> 2U;
                if (var_r8 < var_r6) {
                    do {
                        if (var_r9 != NULL) {
                            *var_r9 = *var_r8;
                        }
                        var_r8 = var_r8 + 4;
                        var_r9 = var_r9 + 4;
                        M2C_FIELD(arg0, u32 *, 4) = (u32) (M2C_FIELD(arg0, u32 *, 4) + 1);
                        var_ctr_3 = var_ctr_3 - 1;
                    } while (var_ctr_3 != 0);
                }
                temp_r4_2 = (temp_r7 - var_r30) * 4;
                if (0 /* draft: did not compile */) {
                    var_r3 = var_r3 + temp_r5;
                }
                var_r5_2 = arg1 + temp_r4_2;
                /* draft: did not compile: var_r4 = (u32) ((var_r5_2 + 3) - arg1) >> 2U; */
                if (var_r5_2 > arg1) {
                    temp_r0 = var_r4 >> 3U;
                    var_ctr_4 = temp_r0;
                    if (temp_r0 != 0) {
                        do {
                            M2C_FIELD(var_r6, s32 *, -4) = (s32) M2C_FIELD(var_r5_2, s32 *, -4);
                            M2C_FIELD(var_r6, s32 *, -8) = (s32) M2C_FIELD(var_r5_2, s32 *, -8);
                            M2C_FIELD(var_r6, s32 *, -0xC) = (s32) M2C_FIELD(var_r5_2, s32 *, -0xC);
                            M2C_FIELD(var_r6, s32 *, -0x10) = (s32) M2C_FIELD(var_r5_2, s32 *, -0x10);
                            M2C_FIELD(var_r6, s32 *, -0x14) = (s32) M2C_FIELD(var_r5_2, s32 *, -0x14);
                            M2C_FIELD(var_r6, s32 *, -0x18) = (s32) M2C_FIELD(var_r5_2, s32 *, -0x18);
                            M2C_FIELD(var_r6, s32 *, -0x1C) = (s32) M2C_FIELD(var_r5_2, s32 *, -0x1C);
                            temp_r0_2 = M2C_FIELD(var_r5_2, s32 *, -0x20);
                            /* draft: did not compile: var_r5_2 -= 0x20; */
                            var_r6 = var_r6 - 0x20;
                            M2C_FIELD(var_r6, s32 *, -0x20) = temp_r0_2;
                            var_ctr_4 = var_ctr_4 - 1;
                        } while (var_ctr_4 != 0);
                        var_r4 = var_r4 & 7;
                        if (var_r4 != 0) {
                            goto block_26;
                        }
                    } else {
block_26:
                        var_ctr_5 = var_r4;
                        do {
                            temp_r0_3 = M2C_FIELD(var_r5_2, s32 *, -4);
                            /* draft: did not compile: var_r5_2 -= 4; */
                            var_r6 = var_r6 - 4;
                            M2C_FIELD(var_r6, s32 *, -4) = temp_r0_3;
                            var_ctr_5 = var_ctr_5 - 1;
                        } while (var_ctr_5 != 0);
                    }
                }
            }
            var_r5_3 = arg1;
            var_r4_2 = var_r30;
            if (var_r30 != 0) {
                temp_r0_4 = var_r30 >> 3U;
                var_ctr_6 = temp_r0_4;
                if (temp_r0_4 != 0) {
                    do {
                        M2C_FIELD(var_r5_3, s32 *, 0) = *var_r3;
                        M2C_FIELD(var_r5_3, s32 *, 4) = (s32) *var_r3;
                        M2C_FIELD(var_r5_3, s32 *, 8) = (s32) *var_r3;
                        M2C_FIELD(var_r5_3, s32 *, 0xC) = (s32) *var_r3;
                        M2C_FIELD(var_r5_3, s32 *, 0x10) = (s32) *var_r3;
                        M2C_FIELD(var_r5_3, s32 *, 0x14) = (s32) *var_r3;
                        M2C_FIELD(var_r5_3, s32 *, 0x18) = (s32) *var_r3;
                        M2C_FIELD(var_r5_3, s32 *, 0x1C) = (s32) *var_r3;
                        var_r5_3 = var_r5_3 + 0x20;
                        var_ctr_6 = var_ctr_6 - 1;
                    } while (var_ctr_6 != 0);
                    var_r4_2 = var_r4_2 & 7;
                    if (var_r4_2 != 0) {
                        goto block_32;
                    }
                } else {
block_32:
                    var_ctr_7 = var_r4_2;
                    do {
                        *var_r5_3 = *var_r3;
                        var_r5_3 = var_r5_3 + 4;
                        var_ctr_7 = var_ctr_7 - 1;
                    } while (var_ctr_7 != 0);
                }
            }
        } else {
            var_r0 = 1;
            sp8 = 0;
            spC = 0;
            sp10 = NULL;
            temp_r3_2 = M2C_FIELD(arg0, u32 *, 0);
            if (temp_r3_2 != 0) {
                var_r0 = temp_r3_2;
            }
            var_r26 = var_r0;
loop_41:
            if (temp_r4 > var_r26) {
                if (var_r26 < 0x1FFFFFFFU) {
                    var_r26 = var_r26 * 2;
                } else {
                    var_r26 = 0x3FFFFFFF;
                }
                goto loop_41;
            }
            /* draft: did not compile: temp_r3_3 = get_up_vector_for_viewing_mtx(var_r26 * 4); */
            if (temp_r3_3 == NULL) {
                fn_8014F858(&__files + 0xA0, &lbl_8022A434, &__files);
                fn_8014BB10();
            }
            sp10 = temp_r3_3;
            var_r6_2 = temp_r3_3;
            sp8 = var_r26;
            var_r5_4 = M2C_FIELD(arg0, s32 **, 8);
            /* draft: did not compile: temp_r4_3 = var_r5_4 + (M2C_FIELD(arg0, u32 *, 4) * 4); */
            var_ctr_8 = (u32) ((arg1 + 3) - var_r5_4) >> 2U;
            if (var_r5_4 < arg1) {
                do {
                    if (var_r6_2 != NULL) {
                        *var_r6_2 = *var_r5_4;
                    }
                    var_r5_4 = var_r5_4 + 4;
                    var_r6_2 = var_r6_2 + 4;
                    spC = spC + 1;
                    var_ctr_8 = var_ctr_8 - 1;
                } while (var_ctr_8 != 0);
            }
            var_ctr_9 = var_r30;
            if (var_r30 != 0) {
                do {
                    if (var_r6_2 != NULL) {
                        *var_r6_2 = *arg3;
                    }
                    var_r6_2 = var_r6_2 + 4;
                    spC = spC + 1;
                    var_ctr_9 = var_ctr_9 - 1;
                } while (var_ctr_9 != 0);
            }
            /* draft: did not compile: var_ctr_10 = (u32) ((temp_r4_3 + 3) - var_r5_4) >> 2U; */
            if (0 /* draft: did not compile */) {
                do {
                    if (var_r6_2 != NULL) {
                        *var_r6_2 = *var_r5_4;
                    }
                    var_r5_4 = var_r5_4 + 4;
                    var_r6_2 = var_r6_2 + 4;
                    spC = spC + 1;
                    var_ctr_10 = var_ctr_10 - 1;
                } while (var_ctr_10 != 0);
            }
            if (&sp8 != arg0) {
                temp_r3_4 = sp8;
                sp8 = M2C_FIELD(arg0, u32 *, 0);
                M2C_FIELD(arg0, u32 *, 0) = temp_r3_4;
                temp_r3_5 = sp10;
                sp10 = M2C_FIELD(arg0, s32 **, 8);
                M2C_FIELD(arg0, s32 **, 8) = temp_r3_5;
                temp_r3_6 = spC;
                spC = M2C_FIELD(arg0, u32 *, 4);
                M2C_FIELD(arg0, u32 *, 4) = temp_r3_6;
            }
            fn_8009ABBC(&sp8, -1);
        }
    }
}
#pragma pop

#pragma push
#pragma optimize_for_size on
void fn_8009B918(void *arg0) {
    u32 temp_r5;
    u32 temp_r6;
    u32 var_ctr;

    temp_r5 = M2C_FIELD(arg0, u32 *, 8);
    temp_r6 = temp_r5 + (M2C_FIELD(arg0, s32 *, 4) * 0xC);
    var_ctr = (u32) ((temp_r6 + 0xB) - temp_r5) / 12U;
    if (temp_r6 > temp_r5) {
        do {
            var_ctr -= 1;
        } while (var_ctr != 0);
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
#pragma pop

void fn_8009B954(void *arg0) {
    u32 temp_r4;
    u32 temp_r5;
    u32 var_ctr;

    temp_r4 = M2C_FIELD(arg0, u32 *, 8);
    temp_r5 = temp_r4 + (M2C_FIELD(arg0, s32 *, 4) * 4);
    var_ctr = (u32) ((temp_r5 + 3) - temp_r4) >> 2U;
    if (temp_r5 > temp_r4) {
        do {
            var_ctr -= 1;
        } while (var_ctr != 0);
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void fn_8009B98C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0) {
    u8 var_ctr;
    s32 var_r0_3;
    s32 var_r3;
    void *temp_r5;
    void *var_r0;
    void *var_r0_2;
    void *var_r4;

    /* draft: did not compile: var_r0 = get_up_vector_for_viewing_mtx(0x60); */
    var_r0 = var_r0 == NULL ? var_r0 : fn_800A6A34();
    M2C_FIELD(arg0, void **, 0x278) = var_r0;
    temp_r5 = M2C_FIELD(arg0, void **, 0x278);
    M2C_FIELD(temp_r5, void **, 0x38) = arg0;
    M2C_FIELD(arg0, s32 *, 0x268) = 0;
    M2C_FIELD(arg0, s32 *, 0x26C) = 0;
    M2C_FIELD(arg0, s8 *, 0xD) = 1;
    fn_8009BBB0((void *)(arg0));
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    /* draft: did not compile: var_r0_2 = get_up_vector_for_viewing_mtx(0xC); */
    if (var_r0_2 != NULL) {
        var_r0_2 = fn_8001360C();
    }
    M2C_FIELD(arg0, void **, 0x14) = var_r0_2;
    var_r4 = arg0;
    M2C_FIELD(arg0, s32 *, 0x48) = -1;
    M2C_FIELD(arg0, s32 *, 0x4C) = -1;
    M2C_FIELD(arg0, s32 *, 0x50) = -1;
    M2C_FIELD(arg0, s32 *, 0x54) = -1;
    M2C_FIELD(arg0, s32 *, 0x58) = -1;
    M2C_FIELD(arg0, s32 *, 0x5C) = -1;
    M2C_FIELD(arg0, s32 *, 0x60) = -1;
    M2C_FIELD(arg0, s32 *, 0x64) = -1;
    M2C_FIELD(arg0, s32 *, 0x68) = -1;
    M2C_FIELD(arg0, s32 *, 0x6C) = -1;
    M2C_FIELD(arg0, s32 *, 0x70) = -1;
    M2C_FIELD(arg0, s32 *, 0x74) = -1;
    M2C_FIELD(arg0, s32 *, 0x78) = -1;
    M2C_FIELD(arg0, s32 *, 0x7C) = -1;
    M2C_FIELD(arg0, s32 *, 0x80) = -1;
    M2C_FIELD(arg0, s32 *, 0x84) = -1;
    M2C_FIELD(arg0, s32 *, 0x88) = -1;
    M2C_FIELD(arg0, s32 *, 0x8C) = -1;
    M2C_FIELD(arg0, s32 *, 0x90) = -1;
    M2C_FIELD(arg0, s32 *, 0x94) = -1;
    M2C_FIELD(arg0, s32 *, 0x98) = -1;
    M2C_FIELD(arg0, s32 *, 0x9C) = -1;
    M2C_FIELD(arg0, s32 *, 0xA0) = -1;
    M2C_FIELD(arg0, s32 *, 0xA4) = -1;
    M2C_FIELD(arg0, s32 *, 0xA8) = -1;
    M2C_FIELD(arg0, s32 *, 0xAC) = -1;
    M2C_FIELD(arg0, s32 *, 0xB0) = -1;
    M2C_FIELD(arg0, s32 *, 0xB4) = -1;
    M2C_FIELD(arg0, s32 *, 0xB8) = -1;
    M2C_FIELD(arg0, s32 *, 0xBC) = -1;
    M2C_FIELD(arg0, s32 *, 0xC0) = -1;
    M2C_FIELD(arg0, s32 *, 0xC4) = -1;
    var_ctr = 2;
    do {
        M2C_FIELD(var_r4, s32 *, 0x168) = -1;
        M2C_FIELD(var_r4, s32 *, 0x16C) = -1;
        M2C_FIELD(var_r4, s32 *, 0x170) = -1;
        M2C_FIELD(var_r4, s32 *, 0x174) = -1;
        M2C_FIELD(var_r4, s32 *, 0x178) = -1;
        M2C_FIELD(var_r4, s32 *, 0x17C) = -1;
        M2C_FIELD(var_r4, s32 *, 0x180) = -1;
        M2C_FIELD(var_r4, s32 *, 0x184) = -1;
        M2C_FIELD(var_r4, s32 *, 0x188) = -1;
        M2C_FIELD(var_r4, s32 *, 0x18C) = -1;
        M2C_FIELD(var_r4, s32 *, 0x190) = -1;
        M2C_FIELD(var_r4, s32 *, 0x194) = -1;
        M2C_FIELD(var_r4, s32 *, 0x198) = -1;
        M2C_FIELD(var_r4, s32 *, 0x19C) = -1;
        M2C_FIELD(var_r4, s32 *, 0x1A0) = -1;
        M2C_FIELD(var_r4, s32 *, 0x1A4) = -1;
        M2C_FIELD(var_r4, s32 *, 0x1A8) = -1;
        M2C_FIELD(var_r4, s32 *, 0x1AC) = -1;
        M2C_FIELD(var_r4, s32 *, 0x1B0) = -1;
        M2C_FIELD(var_r4, s32 *, 0x1B4) = -1;
        M2C_FIELD(var_r4, s32 *, 0x1B8) = -1;
        M2C_FIELD(var_r4, s32 *, 0x1BC) = -1;
        M2C_FIELD(var_r4, s32 *, 0x1C0) = -1;
        M2C_FIELD(var_r4, s32 *, 0x1C4) = -1;
        M2C_FIELD(var_r4, s32 *, 0x1C8) = -1;
        M2C_FIELD(var_r4, s32 *, 0x1CC) = -1;
        M2C_FIELD(var_r4, s32 *, 0x1D0) = -1;
        M2C_FIELD(var_r4, s32 *, 0x1D4) = -1;
        M2C_FIELD(var_r4, s32 *, 0x1D8) = -1;
        M2C_FIELD(var_r4, s32 *, 0x1DC) = -1;
        M2C_FIELD(var_r4, s32 *, 0x1E0) = -1;
        M2C_FIELD(var_r4, s32 *, 0x1E4) = -1;
        /* draft: did not compile: var_r4 += 0x80; */
        var_ctr -= 1;
    } while (var_ctr != 0);
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    var_r3 = 0x40;
    M2C_FIELD(arg0, s32 *, 0x28) = 0x7F;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0x7F;
    if (arg2 >= 0) {
        var_r3 = arg2;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = var_r3;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (arg3 & ~(arg3 >> 0x1F));
    var_r0_3 = 0x7F;
    if (arg4 >= 0) {
        var_r0_3 = arg4;
    }
    M2C_FIELD(arg0, s32 *, 0x34) = var_r0_3;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0x7F;
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) M2C_FIELD(arg0, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) M2C_FIELD(arg0, s32 *, 0x34);
    M2C_FIELD(arg0, s32 *, 0x288) = 0;
    M2C_FIELD(arg0, s32 *, 0x284) = 0;
}

void fn_8009BBB0(void *arg0) {
    void *temp_r3;
    void *temp_r3_2;
    void *var_r0;

    if (fn_800847D4(M2C_FIELD(arg0, s32 *, 0)) != 0) {
        /* draft: did not compile: var_r0 = get_up_vector_for_viewing_mtx(0x308); */
        if (var_r0 != NULL) {
            var_r0 = fn_8007F05C(M2C_FIELD(arg0, s32 *, 0));
        }
        M2C_FIELD(arg0, void **, 4) = var_r0;
        temp_r3 = M2C_FIELD(arg0, void **, 4);
        M2C_FIELD(temp_r3, s32 *, 0x2E0) = (s32) M2C_FIELD(arg0, s32 *, 0x278);
        M2C_FIELD(arg0, void **, 8) = fn_80027224(temp_r3);
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x2E4) = (void *) M2C_FIELD(arg0, void **, 8);
        temp_r3_2 = M2C_FIELD(arg0, void **, 8);
        M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 0x20), M2C_UNK (**)(void *, void *), 0x14)(temp_r3_2, M2C_FIELD(arg0, void **, 4));
        fn_800A6F74(M2C_FIELD(arg0, s32 *, 0x278), M2C_FIELD(arg0, void **, 8));
        fn_800A6E5C(M2C_FIELD(arg0, s32 *, 0x278));
        M2C_FIELD(arg0, s8 *, 0xC) = 0;
        fn_8008499C(M2C_FIELD(arg0, s32 *, 0));
        M2C_FIELD(arg0, s32 *, 0) = 0;
        return;
    }
    M2C_FIELD(arg0, void **, 4) = NULL;
}

void *fn_8009BC78(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, M2C_UNK arg_sp0) {
    M2C_FIELD(arg0, s32 *, 0x27C) = 0;
    M2C_FIELD(arg0, s32 *, 0x280) = 0;
    /* draft: did not compile: fn_800831EC(arg0 + 0x28C); */
    fn_8008498C(M2C_FIELD(arg0, s32 *, 0));
    M2C_FIELD(arg0, s32 *, 0) = fn_8007EE48(arg1);
    fn_8009B98C((void *)(arg0), (long)(arg2), (long)(arg3), (long)(arg4), (long)(arg5), (long)(0));
    return arg0;
}

void *fn_8009BD00(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, M2C_UNK arg_sp0) {
    M2C_FIELD(arg0, s32 *, 0x27C) = 0;
    M2C_FIELD(arg0, s32 *, 0x280) = 0;
    /* draft: did not compile: fn_800831EC(arg0 + 0x28C); */
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    fn_8008498C(M2C_FIELD(arg0, s32 *, 0));
    fn_8009B98C((void *)(arg0), (long)(arg2), (long)(arg3), (long)(arg4), (long)(arg5), (long)(0));
    return arg0;
}

void *fn_8009BD80(void *arg0, s16 arg1) {
    void *sp18;
    void *sp14;
    void *sp10;
    s32 spC;
    M2C_UNK sp8;
    void *temp_r0;
    void *temp_r31;
    void *temp_r3;

    if (arg0 != NULL) {
        temp_r3 = M2C_FIELD(arg0, void **, 8);
        M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(void *, M2C_UNK), 0x14)(temp_r3, 0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0) != 0U) {
            fn_8008499C((long)(0));
            M2C_FIELD(arg0, u32 *, 0) = 0U;
            fn_8007EF14();
        }
        fn_8007F14C(M2C_FIELD(arg0, s32 *, 4), 1);
        fn_800A6CB0(M2C_FIELD(arg0, s32 *, 0x278), 1);
        fn_80022584(M2C_FIELD(arg0, s32 *, 0x10), 1);
        fn_8009C148(arg0);
        DisableAllSfxGroup(arg0);
        fn_80013620(M2C_FIELD(arg0, s32 *, 0x14), 1);
        fn_800A1720(M2C_FIELD(arg0, s32 *, 0x284), 1);
        fn_800A1720(M2C_FIELD(arg0, s32 *, 0x288), 1);
        /* draft: did not compile: temp_r31 = arg0 + 0x290; */
        temp_r0 = M2C_FIELD(arg0, void **, 0x294);
        sp14 = temp_r0;
        sp18 = temp_r0;
loop_5:
        if (sp18 != temp_r31) {
            fn_800A1720(M2C_FIELD(sp18, s32 *, 8), 1);
            sp18 = M2C_FIELD(sp18, void **, 4);
            goto loop_5;
        }
        fn_800A5E4C(M2C_FIELD(arg0, s32 *, 0x26C), 1);
        if (0 /* draft: did not compile */) {
            sp10 = temp_r31;
            spC = M2C_FIELD(temp_r31, s32 *, 4);
            /* draft: did not compile: fn_8008313C(&sp8, arg0 + 0x28C, &spC, &sp10); */
        }
        /* draft: did not compile: fn_8009CDD8(arg0 + 0x27C, -1); */
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

u8 fn_8009BEEC(void *arg0) {
    s32 temp_r31;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *var_r31;

    if ((void *) M2C_FIELD(arg0, void **, 4) == NULL) {
        if (((u32) M2C_FIELD(arg0, u32 *, 0) != 0U) && (fn_800847D4((long)(0)) == 0)) {
            return M2C_FIELD(arg0, u8 *, 0xD);
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0) != 0U) {
            fn_8009BBB0(arg0);
        }
        goto block_6;
    }
block_6:
    if ((u8) M2C_FIELD(arg0, u8 *, 0xC) == 0) {
        if (fn_80081280(M2C_FIELD(arg0, void **, 4)) == 3) {
            temp_r3 = M2C_FIELD(arg0, void **, 8);
            M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(void *, M2C_UNK), 0x14)(temp_r3, 0);
            fn_8007F14C(M2C_FIELD(arg0, void **, 4), 1);
            M2C_FIELD(arg0, void **, 4) = NULL;
        }
        M2C_FIELD(arg0, u8 *, 0xC) = 1U;
        temp_r3_2 = M2C_FIELD(arg0, void **, 4);
        if ((temp_r3_2 == NULL) || ((u8) M2C_FIELD(temp_r3_2, u8 *, 4) == 0)) {
            fn_800A6E5C(M2C_FIELD(arg0, s32 *, 0x278));
        }
        if ((void *) M2C_FIELD(arg0, void **, 4) == NULL) {
            fn_800A7428(M2C_FIELD(arg0, s32 *, 0x278), 1);
        } else {
            temp_r3_3 = M2C_FIELD(arg0, void **, 8);
            temp_r31 = M2C_FIELD(M2C_FIELD(temp_r3_3, void **, 0x20), s32 (**)(void *, M2C_UNK), 0x14)(temp_r3_3, 0);
            fn_800A7428(M2C_FIELD(arg0, s32 *, 0x278), 1);
            temp_r3_4 = M2C_FIELD(arg0, void **, 8);
            M2C_FIELD(M2C_FIELD(temp_r3_4, void **, 0x20), M2C_UNK (**)(void *, s32), 0x14)(temp_r3_4, temp_r31);
        }
    } else {
        temp_r3_5 = M2C_FIELD(arg0, void **, 4);
        if ((temp_r3_5 == NULL) || ((u8) M2C_FIELD(temp_r3_5, u8 *, 4) == 0)) {
            fn_800A6E5C(M2C_FIELD(arg0, s32 *, 0x278));
        }
        fn_800A7428(M2C_FIELD(arg0, s32 *, 0x278), 1);
    }
    var_r31 = M2C_FIELD(arg0, void **, 0x27C);
loop_21:
    if (var_r31 != NULL) {
        M2C_FIELD(M2C_FIELD(var_r31, void **, 0x20), M2C_UNK (**)(void *, M2C_UNK), 0x18)(var_r31, 1);
        var_r31 = M2C_FIELD(var_r31, void **, 0x34);
        goto loop_21;
    }
    fn_8009C924(arg0);
    return M2C_FIELD(arg0, u8 *, 0xD);
}

void fn_8009C094(void *arg0, void *arg1) {
    void *spC;
    s32 sp8;

    /* draft: did not compile: sp8 = arg0 + 0x27C; */
    spC = M2C_FIELD(arg0, void **, 0x27C);
loop_2:
    if ((spC != NULL) && ((M2C_FIELD(spC, s32 *, 0x1B8) - M2C_FIELD(arg1, s32 *, 0x1B8)) <= 0)) {
        spC = M2C_FIELD(spC, void **, 0x34);
        goto loop_2;
    }
    fn_8009CD58(&sp8, arg1);
    M2C_FIELD(arg1, void **, 0x1BC) = arg0;
}

void fn_8009C110(s32 arg0, void *arg1) {
    fn_8009CE50(arg0 + 0x27C);
    M2C_FIELD(arg1, s32 *, 0x1BC) = 0;
}

void fn_8009C148(void *arg0) {
    void *spC;
    s32 sp8;
    void *temp_r3;

    /* draft: did not compile: sp8 = arg0 + 0x27C; */
    spC = M2C_FIELD(arg0, void **, 0x27C);
loop_3:
    if (spC != NULL) {
        M2C_FIELD(spC, s32 *, 0x1BC) = 0;
        temp_r3 = fn_8009CD98(&sp8);
        if (temp_r3 != NULL) {
            M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(M2C_UNK), 8)(1);
        }
        goto loop_3;
    }
}

s32 PlaySound(void *arg0, s32 arg1, s8 arg2, s32 arg3, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

void StopSound(void *arg0, u32 arg1) { } /* draft: stub */

void SetSoundVolume(void *arg0, u32 arg1, s8 arg2, s32 arg3, M2C_UNK arg_sp0) { } /* draft: stub */

#pragma push
#pragma peephole off
void SetSoundPanpot(void *arg0, u32 arg1, u16 arg2) {
    s32 var_ctr;
    void *var_r3;

    var_r3 = arg0;
    var_ctr = 0x20;
loop_1:
    if ((u32) M2C_FIELD(var_r3, u32 *, 0x48) == arg1) {
        fn_8001569C(arg1, arg2);
        return;
    }
    /* draft: did not compile: var_r3 += 4; */
    var_ctr -= 1;
    if (var_ctr == 0) {
        return;
    }
    goto loop_1;
}
#pragma pop

void fn_8009C4D4(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x18) != arg1) || ((s32) M2C_FIELD(arg0, s32 *, 0x1C) != arg3) || ((s32) M2C_FIELD(arg0, s32 *, 0x20) != arg4) || ((s32) M2C_FIELD(arg0, s32 *, 0x24) != arg2)) {
        M2C_FIELD(arg0, s32 *, 0x18) = arg1;
        if (arg3 >= 0) {
            M2C_FIELD(arg0, s32 *, 0x1C) = arg3;
        }
        if (arg4 >= 0) {
            M2C_FIELD(arg0, s32 *, 0x20) = arg4;
        }
        if (arg2 >= 0) {
            M2C_FIELD(arg0, s32 *, 0x24) = arg2;
        }
        /* draft: did not compile: SetStageVolume(M2C_FIELD(arg0, s32 *, 0x2C), 1, arg2, arg3); */
    }
}

void fn_8009C564(void *arg0, s32 arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x28) != arg1) {
        M2C_FIELD(arg0, s32 *, 0x28) = arg1;
        /* draft: did not compile: SetStageVolume(M2C_FIELD(arg0, s32 *, 0x2C), 1, -1, -1, -1); */
    }
}

void SetStageVolume(void *arg0, s32 arg1, u8 arg2, s32 arg3, s32 arg4, s32 arg5, M2C_UNK arg_sp0) {
    u8 var_r28;
    u16 temp_r0;
    u32 temp_r29;
    void *var_r30;
    void *var_r31;

    if (((s32) M2C_FIELD(arg0, s32 *, 0x2C) != arg1) || (arg2 != 0)) {
        M2C_FIELD(arg0, s32 *, 0x2C) = arg1;
        if (arg4 >= 0) {
            M2C_FIELD(arg0, s32 *, 0x30) = arg4;
        }
        if (arg5 >= 0) {
            M2C_FIELD(arg0, s32 *, 0x34) = arg5;
        }
        if (arg3 >= 0) {
            M2C_FIELD(arg0, s32 *, 0x38) = arg3;
        }
        var_r31 = arg0;
        var_r30 = arg0;
        var_r28 = 0;
        temp_r29 = (M2C_FIELD(arg0, s32 *, 0x18) * (M2C_FIELD(arg0, s32 *, 0x2C) * M2C_FIELD(arg0, s32 *, 0x28))) / 16129;
        do {
            if ((u32) (M2C_FIELD((s32)var_r31, s32 *, 0x48) + 0x10000) != -1U) {
                /* draft: did not compile: fn_80015644((u8) ((temp_r29 * *(arg0 + (var_r28 + 0x108))) / 127)); */
                temp_r0 = M2C_FIELD(var_r30, u16 *, 0x128);
                switch ((s32) temp_r0) {            /* irregular */
                case 0x0:
                    if (arg4 >= 0) {
                        fn_8001569C(M2C_FIELD(var_r31, s32 *, 0x48), (u16) arg4);
                    }
                    break;
                case 0x7F:
                    if (arg5 >= 0) {
                        fn_8001569C(M2C_FIELD(var_r31, s32 *, 0x48), (u16) arg5);
                    }
                    break;
                default:
                    if (arg3 >= 0) {
                        fn_8001569C(M2C_FIELD(var_r31, s32 *, 0x48), (u16) arg3);
                    }
                    break;
                }
            }
            var_r28 += 1;
            /* draft: did not compile: var_r30 += 2; */
            /* draft: did not compile: var_r31 += 4; */
        } while (var_r28 < 0x20);
        fn_8009C728(arg0, M2C_FIELD(arg0, s32 *, 0x3C), 1, M2C_FIELD(arg0, s32 *, 0x30), M2C_FIELD(arg0, s32 *, 0x34));
    }
}

void fn_8009C728(void *arg0, s32 arg1, u8 arg2, s32 arg3, s32 arg4) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x3C) != arg1) || (arg2 != 0)) {
        M2C_FIELD(arg0, s32 *, 0x3C) = arg1;
        if (arg3 >= 0) {
            M2C_FIELD(arg0, s32 *, 0x40) = arg3;
        }
        if (arg4 >= 0) {
            M2C_FIELD(arg0, s32 *, 0x44) = arg4;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x10) != 0U) {
            fn_80022E04(M2C_FIELD(arg0, s32 *, 0x40), M2C_FIELD(arg0, s32 *, 0x44));
        }
    }
}

s32 EnableSfxGroup(void *arg0, s32 arg1) {
    s8 var_ctr;
    s32 var_r5;
    void *temp_r5;
    void *temp_r6;
    void *var_r3;

    var_r3 = arg0;
    temp_r6 = var_r3;
    var_r5 = 0;
    var_ctr = 0x40;
loop_1:
    if ((s32) M2C_FIELD(var_r3, s32 *, 0x168) == -1) {
        /* draft: did not compile: temp_r5 = temp_r6 + (var_r5 * 4); */
        M2C_FIELD(temp_r5, s32 *, 0x168) = arg1;
        var_ctr = StackSfxGroup(arg1, temp_r5);
        return var_ctr;
    }
    /* draft: did not compile: var_r3 += 4; */
    var_r5 += 1;
    var_ctr -= 1;
    if (var_ctr == 0) {
        return -1;
    }
    goto loop_1;
}

void DisableSfxGroup(void *arg0, u32 arg1) { } /* draft: stub */

#pragma push
#pragma dont_inline on
void DisableAllSfxGroup(void *arg0) {
    s32 var_r30;
    s32 var_r30_2;
    void *var_r31;
    void *var_r31_2;

    var_r30 = 0;
    var_r31 = arg0;
    do {
        if ((u32) (M2C_FIELD((s32)var_r31, s32 *, 0x48) + 0x10000) != -1U) {
            StopSound((void *)(arg0), (unsigned long)(0));
        }
        var_r30 += 1;
        /* draft: did not compile: var_r31 += 4; */
    } while (var_r30 < 0x20);
    var_r30_2 = 0;
    var_r31_2 = arg0;
    do {
        if ((s32) M2C_FIELD(var_r31_2, s32 *, 0x168) != -1) {
            DisableSfxGroup((void *)((s32)arg0), (unsigned long)(0));
        }
        var_r30_2 += 1;
        /* draft: did not compile: var_r31_2 += 4; */
    } while (var_r30_2 < 0x40);
}
#pragma pop

void fn_8009C924(void *arg0) {
    void *spC;
    void *sp8;
    void *temp_r0;
    void *temp_r31;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x288) != 0U) {
        fn_800A1950((long)(0));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x284) != 0U) {
        fn_800A1950((long)(0));
    }
    /* draft: did not compile: temp_r31 = arg0 + 0x290; */
    temp_r0 = M2C_FIELD(temp_r31, void **, 4);
    sp8 = temp_r0;
    spC = temp_r0;
loop_6:
    if (spC != temp_r31) {
        fn_800A1950(M2C_FIELD(spC, s32 *, 8));
        spC = M2C_FIELD(spC, void **, 4);
        goto loop_6;
    }
}
