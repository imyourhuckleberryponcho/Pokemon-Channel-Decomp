/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

f32 HSD_Randf();
extern f32 lbl_803511A8;
extern f32 lbl_803511B0;
M2C_UNK fn_800C5B7C(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_801DB818;
extern M2C_UNK lbl_8034E288;
M2C_UNK fn_80005888();
void *get_up_vector_for_viewing_mtx(s32);
M2C_UNK fn_8014BB10();
M2C_UNK fn_8014F858(void *, M2C_UNK *, M2C_UNK *);
extern M2C_UNK __files;
extern M2C_UNK lbl_801DB828;
extern M2C_UNK lbl_801DB848;
s32 strncmp();
extern M2C_UNK lbl_801DB8A0;
extern M2C_UNK lbl_801DB8B0;
extern M2C_UNK lbl_8034E290;
extern M2C_UNK lbl_8034E298;
M2C_UNK fn_80020694();
M2C_UNK ReadBmp(s32);
s32 strcmp();
s32 strlen();
extern M2C_UNK lbl_8034E2A0;
M2C_UNK memmove(s32, s32, s32);
extern M2C_UNK lbl_801DB868;
extern u8 lbl_8034E2C4;
extern u8 lbl_8034E2C5;
extern M2C_UNK lbl_801DB920;
extern M2C_UNK lbl_801DB904;
extern u8 lbl_8034E2C6;
M2C_UNK OSAllocFromHeap(s32, s32);
extern s32 lbl_8034FE78;
M2C_UNK OSFreeToHeap(s32, s32);
s32 fn_80038264(M2C_UNK);
s32 OSGetSoundMode();
M2C_UNK OSCreateThread(M2C_UNK *, M2C_UNK *, M2C_UNK, s32, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK OSResumeThread(M2C_UNK *);
M2C_UNK ARQSetChunkSize(M2C_UNK);
M2C_UNK sndVolume(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK sndMasterVolume(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK sndOutputMode(s32);
M2C_UNK fn_8012BDA0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_8012EDAC(s32 *, s32);
extern M2C_UNK fn_80015228;
extern u32 *lbl_801DB948;
extern M2C_UNK lbl_802BFD70;
extern M2C_UNK lbl_802C00C8;
extern s32 lbl_8035047C;
extern s32 lbl_80350484;
extern s8 lbl_80350489;
extern s32 lbl_8035048C;
extern s32 lbl_80350490;
extern s32 lbl_803511C0;
extern s32 lbl_803511C4;
M2C_UNK fn_800254AC(M2C_UNK *, M2C_UNK *);
M2C_UNK DVDClose(M2C_UNK *);
M2C_UNK strcat(M2C_UNK *, s32 *);
M2C_UNK strcpy();
extern M2C_UNK lbl_802C0184;

void *fn_80013144(void **arg0, f32 *arg1);
s32 *fn_80013284(s32 arg0, s32 *arg1);
s32 fn_800132E0(s32 arg0);
void fn_8001331C(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void *fn_80013390(void *arg0, f32 farg0);
void fn_8001360C(void *arg0);
s32 fn_80013620(s32 arg0, s16 arg1);
void AddApplyRule(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0);
void RemoveApplyRule(void *arg0, s32 arg1, s32 arg2);
s32 fn_800137D0(void *arg0, s32 arg1, s32 arg2, s32 *arg3, s32 *arg4);
void *fn_80013868(void *arg0, void *arg1);
void fn_8001398C(void *arg0, void *arg1, u32 arg2, void *arg3, M2C_UNK arg_sp0);
void *fn_80013F1C(void *arg0, s16 arg1);
void fn_80013F7C(void *arg0);
void *fn_80013FB4(void *arg0, s32 arg1);
void *fn_80014064(void *arg0, s16 arg1);
s32 fn_800140DC(void *arg0);
void fn_80014140(s32 arg0);
void fn_80014164(void *arg0);
void fn_80014258(void *arg0);
u32 fn_80014298(void *arg0, s32 arg1, M2C_UNK arg_sp0);
s32 fn_800143B8(void **arg0, u8 *arg1, u32 arg2, u32 arg3);
u32 **fn_80014440(u32 **arg0, u32 arg1, u32 arg2, u32 arg3, u8 arg4, M2C_UNK arg_sp0);
M2C_UNK *fn_800146F0(M2C_UNK *arg0, s16 arg1);
s32 *fn_80014798(s32 *arg0, s32 arg1, s32 arg2);
void fn_80014844(void **arg0, s32 arg1, s32 arg2, M2C_UNK arg_sp0);
void fn_8001493C(s32 arg0);
void fn_80014964(s32 arg0);
void fn_8001498C(void);
void ModifyPrologicMode(u8 arg0);
void fn_80014BC4(M2C_UNK arg_sp0);
void fn_80014C68(u8 arg0);

void *fn_80013144(void **arg0, f32 *arg1) { } /* draft: stub */

s32 *fn_80013284(s32 arg0, s32 *arg1) {
    s32 *var_r4;
    s32 temp_r5;

    var_r4 = arg1;
    if ((u32) (arg0 + 0xB0000000) == 2U) {
        return var_r4;
    }
    if (var_r4 == NULL) {
        return NULL;
    }
loop_9:
    temp_r5 = *var_r4;
    if (temp_r5 == 0x22) {
        return NULL;
    }
    if (((u32) (temp_r5 + 0xB0000000) == 2U) || (temp_r5 == arg0)) {
        return var_r4 + 0x14;
    }
    var_r4 += 0x14;
    goto loop_9;
}

s32 fn_800132E0(s32 arg0) {
    fn_8001331C((void *)(0), (long)(-1), (long)(-1), (long)(0));
    return arg0;
}

void fn_8001331C(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 temp_r6;

    temp_r6 = arg2 - 1;
    M2C_FIELD(arg0, f32 *, 0) = (f32) lbl_803511B0;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) arg3;
    M2C_FIELD(arg0, s32 *, 0x10) = temp_r6;
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) (arg3 - 1);
    /* draft: did not compile: fn_80013390(temp_r6, lbl_803511B0); */
}

void *fn_80013390(void *arg0, f32 farg0) { } /* draft: stub */

void fn_8001360C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

s32 fn_80013620(s32 arg0, s16 arg1) {
    s32 temp_cr0_eq;

    temp_cr0_eq = arg0 == 0;
    if (temp_cr0_eq == 0) {
        if ((temp_cr0_eq == 0) && (temp_cr0_eq == 0)) {
            fn_80013F1C((void *)(0), (short)(0));
        }
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

void AddApplyRule(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0) { } /* draft: stub */

void RemoveApplyRule(void *arg0, s32 arg1, s32 arg2) {
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    u32 temp_r7;
    u8 var_r6;
    void *var_r8;

    var_r8 = M2C_FIELD(arg0, void **, 8);
    sp10 = arg1;
    /* draft: did not compile: temp_r7 = var_r8 + (M2C_FIELD(arg0, s32 *, 4) * 0x10); */
    sp14 = arg2;
    sp8 = arg1;
    spC = arg2;
loop_2:
    if (0 /* draft: did not compile */) {
        var_r6 = 0;
        if (((s32) M2C_FIELD(var_r8, s32 *, 0) == arg1) && ((s32) M2C_FIELD(var_r8, s32 *, 4) == arg2)) {
            var_r6 = 1;
        }
        if (var_r6 == 0) {
            /* draft: did not compile: var_r8 += 0x10; */
            goto loop_2;
        }
    }
    fn_80013868((void *)(var_r8), (void *)(0));
}

s32 fn_800137D0(void *arg0, s32 arg1, s32 arg2, s32 *arg3, s32 *arg4) {
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    u32 temp_r9;
    u8 var_r3;
    void *var_r8;

    var_r8 = M2C_FIELD(arg0, void **, 8);
    sp10 = arg1;
    /* draft: did not compile: temp_r9 = var_r8 + (M2C_FIELD(arg0, s32 *, 4) * 0x10); */
    sp14 = arg2;
    sp8 = arg1;
    spC = arg2;
loop_2:
    if (0 /* draft: did not compile */) {
        var_r3 = 0;
        if (((s32) M2C_FIELD(var_r8, s32 *, 0) == arg1) && ((s32) M2C_FIELD(var_r8, s32 *, 4) == arg2)) {
            var_r3 = 1;
        }
        if (var_r3 == 0) {
            /* draft: did not compile: var_r8 += 0x10; */
            goto loop_2;
        }
    }
    if (0 /* draft: did not compile */) {
        return 0;
    }
    if (arg3 != NULL) {
        *arg3 = M2C_FIELD(var_r8, s32 *, 8);
    }
    if (arg4 != NULL) {
        *arg4 = M2C_FIELD(var_r8, s32 *, 0xC);
    }
    return 1;
}

void *fn_80013868(void *arg0, void *arg1) {
    s32 temp_r0_2;
    s32 temp_r0_3;
    u32 temp_r0;
    u32 temp_r7;
    u32 var_ctr;
    u32 var_ctr_2;
    u32 var_r5;
    void *var_r6;
    void *var_r7;

    temp_r7 = M2C_FIELD(arg0, s32 *, 8) + (M2C_FIELD(arg0, s32 *, 4) * 0x10);
    if (0 /* draft: did not compile */) {
        /* draft: did not compile: var_r6 = arg1 + 0x10; */
        var_r7 = arg1;
        /* draft: did not compile: var_r5 = (u32) ((temp_r7 + 0xF) - var_r6) >> 4U; */
        if (0 /* draft: did not compile */) {
            temp_r0 = var_r5 >> 2U;
            var_ctr = temp_r0;
            if (temp_r0 != 0) {
                do {
                    M2C_FIELD(var_r7, s32 *, 0) = (s32) M2C_FIELD(var_r6, s32 *, 0);
                    M2C_FIELD(var_r7, s32 *, 4) = (s32) M2C_FIELD(var_r6, s32 *, 4);
                    M2C_FIELD(var_r7, s32 *, 8) = (s32) M2C_FIELD(var_r6, s32 *, 8);
                    M2C_FIELD(var_r7, s32 *, 0xC) = (s32) M2C_FIELD(var_r6, s32 *, 0xC);
                    M2C_FIELD(var_r7, s32 *, 0x10) = (s32) M2C_FIELD(var_r6, s32 *, 0x10);
                    M2C_FIELD(var_r7, s32 *, 0x14) = (s32) M2C_FIELD(var_r6, s32 *, 0x14);
                    M2C_FIELD(var_r7, s32 *, 0x18) = (s32) M2C_FIELD(var_r6, s32 *, 0x18);
                    M2C_FIELD(var_r7, s32 *, 0x1C) = (s32) M2C_FIELD(var_r6, s32 *, 0x1C);
                    M2C_FIELD(var_r7, s32 *, 0x20) = (s32) M2C_FIELD(var_r6, s32 *, 0x20);
                    M2C_FIELD(var_r7, s32 *, 0x24) = (s32) M2C_FIELD(var_r6, s32 *, 0x24);
                    M2C_FIELD(var_r7, s32 *, 0x28) = (s32) M2C_FIELD(var_r6, s32 *, 0x28);
                    M2C_FIELD(var_r7, s32 *, 0x2C) = (s32) M2C_FIELD(var_r6, s32 *, 0x2C);
                    M2C_FIELD(var_r7, s32 *, 0x30) = (s32) M2C_FIELD(var_r6, s32 *, 0x30);
                    M2C_FIELD(var_r7, s32 *, 0x34) = (s32) M2C_FIELD(var_r6, s32 *, 0x34);
                    M2C_FIELD(var_r7, s32 *, 0x38) = (s32) M2C_FIELD(var_r6, s32 *, 0x38);
                    temp_r0_2 = M2C_FIELD(var_r6, s32 *, 0x3C);
                    /* draft: did not compile: var_r6 += 0x40; */
                    M2C_FIELD(var_r7, s32 *, 0x3C) = temp_r0_2;
                    /* draft: did not compile: var_r7 += 0x40; */
                    var_ctr -= 1;
                } while (var_ctr != 0);
                var_r5 &= 3;
                if (var_r5 != 0) {
                    goto block_5;
                }
            } else {
block_5:
                var_ctr_2 = var_r5;
                do {
                    M2C_FIELD(var_r7, s32 *, 0) = (s32) M2C_FIELD(var_r6, s32 *, 0);
                    M2C_FIELD(var_r7, s32 *, 4) = (s32) M2C_FIELD(var_r6, s32 *, 4);
                    M2C_FIELD(var_r7, s32 *, 8) = (s32) M2C_FIELD(var_r6, s32 *, 8);
                    temp_r0_3 = M2C_FIELD(var_r6, s32 *, 0xC);
                    /* draft: did not compile: var_r6 += 0x10; */
                    M2C_FIELD(var_r7, s32 *, 0xC) = temp_r0_3;
                    /* draft: did not compile: var_r7 += 0x10; */
                    var_ctr_2 -= 1;
                } while (var_ctr_2 != 0);
            }
        }
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) - 1);
    return arg1;
}

void fn_8001398C(void *arg0, void *arg1, u32 arg2, void *arg3, M2C_UNK arg_sp0) { } /* draft: stub */

void *fn_80013F1C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        fn_80013F7C((void *)(0));
        if ((u32) M2C_FIELD(arg0, u32 *, 8) != 0U) {
            fn_80005888((long)(0));
        }
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

void fn_80013F7C(void *arg0) {
    u32 temp_r4;
    u32 temp_r5;
    u32 var_ctr;

    temp_r4 = M2C_FIELD(arg0, u32 *, 8);
    temp_r5 = temp_r4 + (M2C_FIELD(arg0, s32 *, 4) * 0x10);
    var_ctr = (u32) ((temp_r5 + 0xF) - temp_r4) >> 4U;
    if (temp_r5 > temp_r4) {
        do {
            var_ctr -= 1;
        } while (var_ctr != 0);
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void *fn_80013FB4(void *arg0, s32 arg1) {
    s32 var_r31;

    var_r31 = arg1;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_801DB8B0;
    M2C_FIELD(arg0, s16 *, 4) = 0;
    M2C_FIELD(arg0, s16 *, 6) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_801DB8A0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    if ((strncmp(var_r31, &lbl_8034E290, 4, 0, arg0) == 0) || (strncmp(var_r31, &lbl_8034E298, 4) == 0)) {
        var_r31 += 4;
    }
    /* draft: did not compile: fn_80014140(arg0, var_r31); */
    return arg0;
}

void *fn_80014064(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_801DB8A0;
        /* draft: did not compile: fn_80020694(arg0 + 0xC, -1); */
        if (arg0 != NULL) {
            M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_801DB8B0;
        }
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

s32 fn_800140DC(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 6) & 1) {
        return 1;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0xC) == 0U) {
        return 0;
    }
    fn_80014164((void *)(0));
    M2C_FIELD(arg0, u16 *, 6) = (u16) (M2C_FIELD(arg0, u16 *, 6) | 1);
    return 1;
}

void fn_80014140(s32 arg0) {
    ReadBmp(arg0 + 0xC);
}

#pragma push
#pragma peephole off
void fn_80014164(void *arg0) {
    s32 temp_r6_2;
    s32 temp_r6_3;
    s32 temp_r6_4;
    s32 temp_r6_5;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    u8 temp_r5_2;
    u8 var_r4;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r5;
    void *temp_r6;

    temp_r6 = M2C_FIELD(arg0, void **, 0x10);
    M2C_FIELD(arg0, void **, 0x14) = temp_r6;
    /* draft: did not compile: temp_r6_2 = temp_r6 + 0x20; */
    M2C_FIELD(arg0, s32 *, 0x18) = temp_r6_2;
    temp_r4 = M2C_FIELD(arg0, void **, 0x14);
    temp_r6_3 = temp_r6_2 + M2C_FIELD(temp_r4, s32 *, 4);
    if ((u32) M2C_FIELD(temp_r4, u32 *, 8) != 0) {
        var_r0 = temp_r6_3;
    } else {
        var_r0 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = var_r0;
    temp_r4_2 = M2C_FIELD(arg0, void **, 0x14);
    temp_r6_4 = (M2C_FIELD(temp_r4_2, u32 *, 8) * 4);
    temp_r6_4 += temp_r6_3;
    if ((u32) M2C_FIELD(temp_r4_2, u32 *, 0xC) != 0) {
        var_r0_2 = temp_r6_4;
    } else {
        var_r0_2 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x20) = var_r0_2;
    temp_r4_3 = M2C_FIELD(arg0, void **, 0x14);
    temp_r6_5 = temp_r6_4 + (M2C_FIELD(temp_r4_3, u32 *, 0xC) * 8);
    if ((u32) M2C_FIELD(temp_r4_3, u32 *, 0x10) != 0) {
        var_r0_3 = temp_r6_5;
    } else {
        var_r0_3 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = var_r0_3;
    var_r4 = 0;
    temp_r5 = M2C_FIELD(arg0, void **, 0x14);
    temp_r5_2 = M2C_FIELD(temp_r5, u32 *, 0x10);
    var_r4 = !(((u32) M2C_FIELD(temp_r5, u32 *, 0xC) != 0) || (temp_r5_2 != 0)) ? var_r4 : 1;
    if (var_r4 != 0) {
        var_r0_4 = temp_r6_5 + (temp_r5_2 * 8);
    } else {
        var_r0_4 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x28) = var_r0_4;
    fn_80014258((void *)(0));
}
#pragma pop

void fn_80014258(void *arg0) {
    s32 temp_r4;
    s32 temp_r6;
    s32 var_r5;
    u32 var_r7;

    var_r7 = 0U;
    var_r5 = 0;
loop_2:
    if (var_r7 < (u32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), u32 *, 8)) {
        var_r7 += 1;
        temp_r6 = M2C_FIELD(arg0, s32 *, 0x18);
        /* draft: did not compile: temp_r4 = *(M2C_FIELD(arg0, s32 *, 0x1C) + var_r5); */
        var_r5 += 4;
        /* draft: did not compile: *(temp_r6 + temp_r4) = *(temp_r6 + temp_r4) + temp_r6; */
        goto loop_2;
    }
}

u32 fn_80014298(void *arg0, s32 arg1, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

s32 fn_800143B8(void **arg0, u8 *arg1, u32 arg2, u32 arg3) {
    s32 temp_r7;
    s32 var_ctr;
    u32 temp_r0;
    u32 temp_r9;
    s8 var_r8;
    u8 *var_r10;
    u8 *var_r11;
    u8 *var_r12;
    void *temp_r3;

    temp_r3 = *arg0;
    temp_r0 = M2C_FIELD(temp_r3, u32 *, 0);
    if (arg2 > temp_r0) {
        return -1;
    }
    temp_r7 = M2C_FIELD(temp_r3, s32 *, 0xC);
    /* draft: did not compile: temp_r9 = arg1 + arg3; */
    var_r8 = temp_r0;
    var_r8 -= arg2;
    /* draft: did not compile: var_r10 = temp_r7 + arg2; */
loop_8:
    if (var_r8 < arg3) {
        return -1;
    }
    var_r11 = var_r10;
    var_r12 = arg1;
    /* draft: did not compile: var_ctr = temp_r9 - arg1; */
    if (0 /* draft: did not compile */) {
loop_4:
        if ((s8) *var_r12 == (s8) *var_r11) {
            var_r12 += 1;
            var_r11 += 1;
            var_ctr -= 1;
            if (var_ctr == 0) {
                /* Duplicate return node #6. Try simplifying control flow for better match */
                return 0;
            }
            goto loop_4;
        }
        var_r10 += 1;
        var_r8 -= 1;
        goto loop_8;
    }
    return 0;
}

u32 **fn_80014440(u32 **arg0, u32 arg1, u32 arg2, u32 arg3, u8 arg4, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

M2C_UNK *fn_800146F0(M2C_UNK *arg0, s16 arg1) {
    M2C_UNK *temp_r3_2;
    M2C_UNK *var_r4;
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    u32 temp_r0;
    u32 temp_r3;
    u32 var_r0;

    if (arg0 != NULL) {
        /* draft: did not compile: var_r4 = *arg0; */
        temp_r3 = M2C_FIELD(var_r4, u32 *, 8);
        temp_cr0_eq = temp_r3 == 0U;
        if (temp_cr0_eq != 0) {
            var_r0 = 1U;
            if (temp_cr0_eq == 0) {
                var_r0 = temp_r3;
            }
            M2C_FIELD(var_r4, u32 *, 8) = var_r0;
        }
        temp_r0 = M2C_FIELD(var_r4, u32 *, 8) - 1;
        M2C_FIELD(var_r4, u32 *, 8) = temp_r0;
        if (temp_r0 == 0U) {

        } else {
            var_r4 = NULL;
        }
        /* draft: did not compile: *arg0 = var_r4; */
        /* draft: did not compile: temp_r3_2 = *arg0; */
        temp_cr0_eq_2 = temp_r3_2 == NULL;
        if (temp_cr0_eq_2 == 0) {
            if (temp_cr0_eq_2 == 0) {
                fn_80005888(M2C_FIELD(temp_r3_2, M2C_UNK **, 0xC));
            }
            fn_80005888(*arg0);
        }
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

s32 *fn_80014798(s32 *arg0, s32 arg1, s32 arg2) {
    s32 sp8;
    u8 spC;
    u8 temp_r3;

    *arg0 = 0;
    temp_r3 = strlen(arg1);
    if (temp_r3 > -2U) {
        fn_8014BB10();
        fn_8014F858(&__files + 0xA0, &lbl_801DB920, &__files);
    }
    spC = sp8;
    /* draft: did not compile: fn_80014844(arg0, arg1, arg1 + temp_r3, arg2, &spC); */
    return arg0;
}

#pragma push
#pragma optimize_for_size on
void fn_80014844(void **arg0, s32 arg1, s32 arg2, M2C_UNK arg_sp0) {
    s32 temp_r31;
    void *temp_r27;
    void *temp_r3;
    void *temp_r3_2;

    temp_r3 = get_up_vector_for_viewing_mtx(0x10);
    if (temp_r3 == NULL) {
        fn_8014F858(&__files + 0xA0, &lbl_801DB904, &__files);
        fn_8014BB10();
    }
    *arg0 = temp_r3;
    temp_r31 = arg2 - arg1;
    temp_r27 = *arg0;
    if (temp_r27 != NULL) {
        M2C_FIELD(temp_r27, s32 *, 4) = (s32) ((temp_r31 + 3) - (temp_r31 & 3));
        M2C_FIELD(temp_r27, s32 *, 8) = 1;
        temp_r3_2 = get_up_vector_for_viewing_mtx(M2C_FIELD(temp_r27, s32 *, 4) + 1);
        if (temp_r3_2 == NULL) {
            fn_8014F858(&__files + 0xA0, &lbl_801DB904, &__files);
            fn_8014BB10();
        }
        M2C_FIELD(temp_r27, void **, 0xC) = temp_r3_2;
    }
    /* draft: did not compile: memcpy(M2C_FIELD(*arg0, void **, 0xC), arg1, temp_r31); */
    M2C_FIELD(*arg0, s32 *, 0) = temp_r31;
    /* draft: did not compile: *(M2C_FIELD(*arg0, void **, 0xC) + temp_r31) = lbl_8034E2C6; */
}
#pragma pop

void fn_8001493C(s32 arg0) {
    OSAllocFromHeap(lbl_8034FE78, arg0);
}

void fn_80014964(s32 arg0) {
    OSFreeToHeap(lbl_8034FE78, arg0);
}

void fn_8001498C(void) {
    s32 spC;
    s32 sp8;
    M2C_UNK *var_r3;
    s32 var_ctr;
    u32 **var_r30;
    u32 var_r29;

    lbl_80350489 = 0;
    lbl_8035048C = 0;
    lbl_80350490 = 0;
    var_ctr = 2;
    var_r3 = &lbl_802C00C8;
    do {
        M2C_FIELD(var_r3, s8 *, 0) = 0;
        M2C_FIELD(var_r3, s8 *, 1) = 0;
        M2C_FIELD(var_r3, s8 *, 2) = 0;
        M2C_FIELD(var_r3, s8 *, 3) = 0;
        M2C_FIELD(var_r3, s8 *, 4) = 0;
        M2C_FIELD(var_r3, s8 *, 5) = 0;
        M2C_FIELD(var_r3, s8 *, 6) = 0;
        M2C_FIELD(var_r3, s8 *, 7) = 0;
        M2C_FIELD(var_r3, s8 *, 8) = 0;
        M2C_FIELD(var_r3, s8 *, 9) = 0;
        M2C_FIELD(var_r3, s8 *, 0xA) = 0;
        M2C_FIELD(var_r3, s8 *, 0xB) = 0;
        M2C_FIELD(var_r3, s8 *, 0xC) = 0;
        M2C_FIELD(var_r3, s8 *, 0xD) = 0;
        M2C_FIELD(var_r3, s8 *, 0xE) = 0;
        M2C_FIELD(var_r3, s8 *, 0xF) = 0;
        M2C_FIELD(var_r3, s8 *, 0x10) = 0;
        M2C_FIELD(var_r3, s8 *, 0x11) = 0;
        M2C_FIELD(var_r3, s8 *, 0x12) = 0;
        M2C_FIELD(var_r3, s8 *, 0x13) = 0;
        M2C_FIELD(var_r3, s8 *, 0x14) = 0;
        M2C_FIELD(var_r3, s8 *, 0x15) = 0;
        M2C_FIELD(var_r3, s8 *, 0x16) = 0;
        M2C_FIELD(var_r3, s8 *, 0x17) = 0;
        M2C_FIELD(var_r3, s8 *, 0x18) = 0;
        M2C_FIELD(var_r3, s8 *, 0x19) = 0;
        M2C_FIELD(var_r3, s8 *, 0x1A) = 0;
        M2C_FIELD(var_r3, s8 *, 0x1B) = 0;
        M2C_FIELD(var_r3, s8 *, 0x1C) = 0;
        M2C_FIELD(var_r3, s8 *, 0x1D) = 0;
        M2C_FIELD(var_r3, s8 *, 0x1E) = 0;
        M2C_FIELD(var_r3, s8 *, 0x1F) = 0;
        var_r3 += 0x20;
        var_ctr -= 1;
    } while (var_ctr != 0);
    sp8 = lbl_803511C0;
    spC = lbl_803511C4;
    fn_8012EDAC(&sp8, lbl_803511C0);
    fn_8012BDA0(0x40, 0, 0x40, 1, 1, 0xFFC000);
    sndOutputMode(OSGetSoundMode() != 0);
    sndMasterVolume(0x64, 0x64, 1, 1);
    sndVolume(0x7F, 0x64, 0xFF);
    ARQSetChunkSize(0x20000);
    var_r29 = 0;
    var_r30 = &lbl_801DB948;
    do {
        if ((u32) **var_r30 != 0U) {
            OSFreeToHeap((long)(lbl_8034FE78), (long)(0));
            **var_r30 = 0U;
        }
        var_r29 += 1;
        var_r30 += 4;
    } while (var_r29 < 3);
    lbl_80350484 = OSAllocFromHeap(lbl_8034FE78, 0x2000);
    lbl_8035047C = fn_80038264(0x20000);
    OSCreateThread(&lbl_802BFD70, &fn_80015228, 0, lbl_80350484 + 0x2000, 0x2000, 0xF, 0);
    OSResumeThread(&lbl_802BFD70);
}

void ModifyPrologicMode(u8 arg0) {
    M2C_UNK var_r3;

    if (OSGetSoundMode() != 0U) {
        var_r3 = 1;
        if (arg0 != 0) {
            var_r3 = 2;
        }
    } else {
        var_r3 = 0;
    }
    sndOutputMode(var_r3);
}

void fn_80014BC4(M2C_UNK arg_sp0) {
    s32 sp3C;
    s32 *temp_r4;
    s32 **var_r27;
    s32 **var_r28;
    M2C_UNK sp8;
    s32 var_r26;

    var_r26 = 0;
    /* draft: did not compile: var_r28 = &lbl_801DB948 + 0xC; */
    /* draft: did not compile: var_r27 = &lbl_801DB948; */
    do {
        fn_800254AC(&lbl_802C0184, &sp8);
        strcat(&lbl_802C0184, *var_r28);
        strcpy(&lbl_802C0184, &lbl_801DB948 + 0x1C);
        DVDClose(&sp8);
        *temp_r4 = OSAllocFromHeap(lbl_8034FE78, sp3C);
        temp_r4 = *var_r27;
        var_r26 += 1;
        var_r27 += 4;
        var_r28 += 4;
    } while (var_r26 < 3);
}

void fn_80014C68(u8 arg0) {
    sndMasterVolume(arg0, 0x64, 1, 1);
}
