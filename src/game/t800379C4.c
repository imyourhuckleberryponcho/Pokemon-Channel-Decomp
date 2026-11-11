/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

s32 fn_80144390();
s32 fn_800DCB7C();
s32 fn_800DDE30(s32, s32, M2C_UNK *);
s32 fn_80144314(void *, s32, M2C_UNK *);
s32 memcmp(M2C_UNK *, M2C_UNK *, M2C_UNK);
s32 strcmp(M2C_UNK *, s32);
extern M2C_UNK fn_800379BC;
extern M2C_UNK lbl_8034E98C;
extern M2C_UNK lbl_8034E990;
extern M2C_UNK lbl_8034E994;
extern M2C_UNK lbl_8034E998;
extern M2C_UNK lbl_8034E9A0;
extern M2C_UNK lbl_8034E9A8;
extern M2C_UNK lbl_8034E9B0;
extern s32 lbl_8035059C;
extern M2C_UNK *lbl_803505A0;
extern u8 lbl_803505A4;
extern M2C_UNK *lbl_803505A8;
extern u8 lbl_803505AC;
extern M2C_UNK *lbl_803505B0;
extern u8 lbl_803505B4;
extern M2C_UNK *lbl_803505B8;
extern u8 lbl_803505BC;
extern M2C_UNK *lbl_803505C0;
extern u8 lbl_803505C4;
extern M2C_UNK *lbl_803505C8;
extern u8 lbl_803505CC;
extern M2C_UNK *lbl_803505D0;
extern u8 lbl_803505D4;
s32 fn_80144B54();
s32 fn_8014529C();
extern M2C_UNK lbl_801CC0D8;
extern M2C_UNK lbl_802C0588;
extern M2C_UNK lbl_802C1388;
extern s32 lbl_80350590;
s32 fn_80144F30();
s32 fn_80144554();
s32 fn_80144FFC();
s32 fn_80145174();
s32 fn_80145200();
s32 fn_801450CC();
s32 fn_801450F4();
M2C_UNK OSReport(M2C_UNK *, s32);
M2C_UNK fn_800C5B7C(void *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_80223620;
extern M2C_UNK lbl_8034E9C0;
s32 OSGetArenaHi();
u32 OSGetArenaLo();
s32 OSGetResetCode();
M2C_UNK OSSetArenaHi(u32);
M2C_UNK OSSetArenaLo();
M2C_UNK fn_800ABB64(s32);
s32 fn_800ABB74(s32, u32, M2C_UNK);
s32 fn_800ABBE4(u32, M2C_UNK *);
M2C_UNK fn_800ABC64(M2C_UNK *);
M2C_UNK fn_800C7618(M2C_UNK *, u32);
M2C_UNK fn_800C7624(M2C_UNK **, M2C_UNK *);
extern s32 lbl_8034E9B8;
extern s32 lbl_8034E9BC;
extern u32 lbl_803505D8;
extern s32 lbl_803505DC;
extern u32 lbl_803505E0;
extern u32 lbl_803505E4;
extern u32 lbl_803505E8;
extern M2C_UNK *lbl_803505EC;
extern M2C_UNK *lbl_803505F0;
extern u32 lbl_803505F4;
M2C_UNK fn_800ABCC4(s32);
s32 OSAllocFromHeap(s32, s32);
extern M2C_UNK lbl_802236B4;
M2C_UNK OSFreeToHeap(s32);
M2C_UNK ReadBmp();
extern M2C_UNK lbl_802B0898;
extern M2C_UNK lbl_802B0998;
extern M2C_UNK lbl_8034E9C8;
extern M2C_UNK lbl_8034E9D0;
M2C_UNK fn_80038808(M2C_UNK);

void method_openFile(void *arg0);
s32 method_openFileAsync(void *arg0, s32 arg1, M2C_UNK arg_sp0);
s32 method_createFile(void *arg0, s32 arg1);
s32 method_createFileAsync(void *arg0, s32 arg1);
s32 method_writeHeader(void *arg0);
s32 method_writeHeaderAsync(void *arg0);
s32 fn_80037E3C(void *arg0);
s32 fn_80037E74(void *arg0);
s32 fn_80037ED0(void *arg0);
s32 fn_80037F08(void *arg0);
s32 method_getResultCodeEx(void);
void fn_80037F58(s32 arg2, s32 arg3, M2C_UNK arg_sp0);
void fn_80038008(void);
void fn_80038034(void);
void fn_80038038(s32 arg0);
void HeapFreeSize(void);
s32 fn_80038264(s32 arg0);
void FreePictureSD(s32 arg0);
void BlockFreeSize(void);
s32 fn_80038308(s32 arg0);
void fn_8003835C(s32 arg0);
void fn_80038384(void);
s32 fn_80038388(void);
s32 fn_80038390(void);
void fn_80038398(s32 *arg0, s32 *arg1);
void fn_800383BC(void *arg0);
s32 fn_800383F0(void *arg0);
void fn_80038404(void *arg0);
void fn_800385BC(void *arg0);
u16 fn_80038694(void *arg0);
s32 fn_800386D8(void *arg0, s32 arg1);
void *fn_80038764(void *arg0);

void method_openFile(void *arg0) {
    /* draft: did not compile: M2C_FIELD(arg0, s32 *, 0xC) = fn_80144390(arg0 + 0x14); */
}

s32 method_openFileAsync(void *arg0, s32 arg1, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

s32 method_createFile(void *arg0, s32 arg1) {
    /* draft: did not compile: M2C_FIELD(arg0, s32 *, 0xC) = fn_8014529C(arg0 + 0x14, &lbl_801CC0D8, &lbl_801CC0D8); */
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) == 0) {
        /* draft: did not compile: M2C_FIELD(arg0, s32 *, 0xC) = fn_80144B54(arg0 + 0x14, arg1, lbl_80350590, &lbl_802C0588, &lbl_802C1388); */
    }
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 method_createFileAsync(void *arg0, s32 arg1) { return 0; } /* draft: stub */

s32 method_writeHeader(void *arg0) {
    /* draft: did not compile: M2C_FIELD(arg0, s32 *, 0xC) = fn_8014529C(arg0 + 0x14, &lbl_801CC0D8); */
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) == 0) {
        /* draft: did not compile: M2C_FIELD(arg0, s32 *, 0xC) = fn_80144554(arg0 + 0x14, lbl_80350590, &lbl_802C0588, &lbl_802C1388); */
    }
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 method_writeHeaderAsync(void *arg0) {
    /* draft: did not compile: M2C_FIELD(arg0, s32 *, 0xC) = fn_8014529C(arg0 + 0x14, &lbl_801CC0D8); */
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) == 0) {
        lbl_8035059C = -0x108;
        /* draft: did not compile: M2C_FIELD(arg0, s32 *, 0xC) = fn_80144FFC(arg0 + 0x14, lbl_80350590, &lbl_802C0588, &lbl_802C1388, &fn_800379BC); */
    }
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 fn_80037E3C(void *arg0) {
    /* draft: did not compile: M2C_FIELD(arg0, s32 *, 0xC) = fn_80145174(arg0 + 0x14); */
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 fn_80037E74(void *arg0) {
    lbl_8035059C = -0x108;
    /* draft: did not compile: M2C_FIELD(arg0, s32 *, 0xC) = fn_80145200(arg0 + 0x14, &fn_800379BC); */
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) == -0x102) {
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 fn_80037ED0(void *arg0) {
    /* draft: did not compile: M2C_FIELD(arg0, s32 *, 0xC) = fn_801450CC(arg0 + 0x14); */
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 fn_80037F08(void *arg0) {
    lbl_8035059C = -0x108;
    /* draft: did not compile: M2C_FIELD(arg0, s32 *, 0xC) = fn_801450F4(arg0 + 0x14, &fn_800379BC); */
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 method_getResultCodeEx(void) {
    return lbl_8035059C;
}

void fn_80037F58(s32 arg2, s32 arg3, M2C_UNK arg_sp0) {
    s32 var_r29;

    OSReport((long *)(&lbl_80223620), (long)(0));
    var_r29 = 0;
    do {
        if (arg2 & (1 << var_r29)) {
            OSReport(&lbl_80223620 + 0x28, var_r29);
        }
        var_r29 += 1;
    } while (var_r29 < 4);
    if (arg2 & 0x10) {
        OSReport((long *)(&lbl_80223620 + 0x40), (long)(0));
    }
    OSReport(&lbl_80223620 + 0x78, arg3);
    fn_800C5B7C(&lbl_80223620 + 0x94, 0x29, &lbl_8034E9C0);
}

void fn_80038008(void) {
    OSSetErrorHandler(0xF, fn_80037F58);
}

void fn_80038034(void) {

}

void fn_80038038(s32 arg0) {
    M2C_UNK sp14;
    M2C_UNK *sp10;
    M2C_UNK spC;
    M2C_UNK *temp_r31_3;
    s32 temp_r29;
    s8 temp_r30;
    s32 temp_r31_2;
    s32 temp_r3;
    u32 temp_r31;
    u32 temp_r4;
    u32 temp_r5;
    u32 var_r29;
    u32 var_r30;
    s32 sp8;

    sp8 = arg0;
    if (OSGetResetCode() == 0x80000000) {
        fn_800C7624(&sp10, &spC);
        memcpy(&sp14, sp10, 0x20);
    } else {
        memset(&sp14, 0, 0x20);
    }
    temp_r31 = OSGetArenaLo();
    temp_r3 = OSGetArenaHi();
    if ((u32) lbl_803505D8 == 0U) {
        lbl_803505D8 = temp_r31;
        lbl_803505DC = temp_r3;
    }
    var_r29 = temp_r3 & 0xFFFFFFE0;
    temp_r30 = (temp_r31 + 0x1F) & 0xFFFFFFE0;
    fn_80038034();
    temp_r31_2 = fn_800ABB74(temp_r30, var_r29, 2);
    OSSetArenaLo();
    var_r30 = temp_r31_2 + 0x16C060;
    OSSetArenaHi(var_r30);
    lbl_803505E0 = var_r30;
    lbl_803505E4 = var_r29;
    if (sp8 < 0) {
        sp8 = (var_r29 - var_r30) - -sp8;
    }
    if ((var_r29 > 0x81800000U) && (sp8 != 0)) {
        temp_r5 = sp8 + 0x81200000;
        if (temp_r5 > 0x82000000U) {
            temp_r4 = 0x82000000 - sp8;
            if ((temp_r4 >= var_r30) && (temp_r4 >= 0x80700000U)) {
                var_r29 = 0x82000000;
            } else if (temp_r5 <= var_r29) {
                var_r29 = temp_r5;
            }
        } else {
            var_r29 = temp_r5;
        }
    }
    if (sp8 != 0) {
        var_r30 = var_r29 - sp8;
    }
    lbl_803505E8 = var_r30;
    lbl_803505EC = (M2C_UNK *) var_r29;
    /* draft: did not compile: temp_r31_3 = var_r30 - 0x20; */
    lbl_8034E9BC = fn_800ABBE4(var_r30, (M2C_UNK *) var_r29);
    lbl_803505F4 = var_r30;
    lbl_803505F0 = temp_r31_3;
    memcpy(temp_r31_3, &sp14, 0x20);
    fn_800C7618(lbl_803505F0, lbl_803505F4);
    lbl_8034E9B8 = fn_800ABBE4(lbl_803505E0, temp_r31_3);
    if (var_r29 < (u32) lbl_803505E4) {
        fn_800ABC64((M2C_UNK *) var_r29);
    }
    fn_800ABB64(lbl_8034E9B8);
    /* draft: did not compile: temp_r29 = lbl_803505EC - lbl_803505E8; */
    fn_80038034();
    fn_80038034();
    fn_80038008();
}

void HeapFreeSize(void) {
    fn_800ABCC4(lbl_8034E9B8);
}

s32 fn_80038264(s32 arg0) {
    s32 temp_r3;

    temp_r3 = OSAllocFromHeap(lbl_8034E9BC, arg0);
    switch (temp_r3) {
    case 0:
            fn_800C5B7C(&lbl_802236B4, 0xE0, &lbl_8034E9C0);
        break;
    }
    return temp_r3;
}

void FreePictureSD(s32 arg0) {
    if (arg0 != 0) {
        OSFreeToHeap(lbl_8034E9BC);
    }
}

void BlockFreeSize(void) {
    fn_800ABCC4(lbl_8034E9BC);
}

s32 fn_80038308(s32 arg0) {
    s32 temp_r3;

    temp_r3 = OSAllocFromHeap(lbl_8034E9B8, arg0);
    switch (temp_r3) {
    case 0:
            fn_800C5B7C(&lbl_802236B4, 0x13C, &lbl_8034E9C0);
        break;
    }
    return temp_r3;
}

void fn_8003835C(s32 arg0) {
    OSFreeToHeap((long)(lbl_8034E9B8));
}

void fn_80038384(void) {

}

s32 fn_80038388(void) {
    return 0;
}

s32 fn_80038390(void) {
    return 0;
}

void fn_80038398(s32 *arg0, s32 *arg1) {
    if (arg0 != NULL) {
        /* draft: did not compile: *arg0 = lbl_803505F0; */
    }
    if (arg1 != NULL) {
        *arg1 = lbl_803505F4;
    }
}

void fn_800383BC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x108) = 0;
    M2C_FIELD(arg0, s32 *, 0x10C) = 0;
    /* draft: did not compile: ReadBmp(arg0 + 0x100, arg0); */
}

s32 fn_800383F0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x100) != 0;
}

void fn_80038404(void *arg0) {
    s32 var_r12;
    s32 var_r9;
    u8 *var_r3;
    u8 *var_r4;
    u8 temp_r10;
    u8 temp_r7;
    u8 temp_r7_2;
    u8 temp_r7_3;
    u8 temp_r8_2;
    u8 var_r11;
    u8 var_r6;
    u8 var_r7;
    u8 var_r7_2;
    void *temp_r8;

    var_r6 = 0;
    temp_r8 = M2C_FIELD(arg0, void **, 0x10C);
    /* draft: did not compile: var_r3 = temp_r8 + 8; */
    var_r4 = var_r3;
loop_34:
    if (0 /* draft: did not compile */) {
        if (var_r6 != 0) {
            temp_r7 = M2C_FIELD(var_r3, u8 *, 0);
            var_r6 = 0;
            var_r3 += 1;
            *var_r4 = temp_r7;
            var_r4 += 1;
        } else {
            temp_r8_2 = M2C_FIELD(var_r3, u8 *, 0);
            if ((s32) temp_r8_2 == 0x5C) {
                temp_r7_2 = M2C_FIELD(var_r3, u8 *, 1);
                var_r3 += 2;
                switch ((s8) temp_r7_2) {           /* irregular */
                case 0x72:
                    *var_r4 = 0xD;
                    var_r4 += 1;
                    break;
                case 0x66:
                    *var_r4 = 0xC;
                    var_r4 += 1;
                    break;
                case 0x78:
                    var_r11 = 0;
                    var_r12 = 0;
loop_20:
                    if (var_r12 < 2) {
                        temp_r10 = *var_r3;
                        if (*(&lbl_802B0898 + (u8) (s8) temp_r10) & 0x20) {
                            if (*(&lbl_802B0898 + (u8) (s8) temp_r10) & 0x10) {
                                var_r9 = (s8) temp_r10 - 0x30;
                            } else {
                                if ((s8) temp_r10 == -1) {
                                    var_r7 = -1U;
                                } else {
                                    var_r7 = *(&lbl_802B0998 + (u8) (s8) temp_r10);
                                }
                                var_r9 = var_r7 - 0x57;
                            }
                            var_r12 += 1;
                            var_r11 = (var_r11 * 0x10) | var_r9;
                            var_r3 += 1;
                            goto loop_20;
                        }
                    }
                    *var_r4 = var_r11;
                    var_r4 += 1;
                    break;
                default:
                    *var_r4 = (u8) (s8) temp_r7_2;
                    var_r4 += 1;
                    break;
                }
            } else if ((s8) temp_r8_2 == 0) {
                var_r3 += 1;
                *var_r4 = 0;
                var_r4 = var_r3;
                var_r6 = 0;
            } else {
                if ((u8) (M2C_FIELD(M2C_FIELD(arg0, void **, 0x104), u8 *, 0x10) == 3) != 0) {
                    var_r7_2 = 0;
                    if (((temp_r8_2 >= 0x81U) && (temp_r8_2 <= 0x9FU)) || ((temp_r8_2 >= 0xE0U) && (temp_r8_2 <= 0xFCU))) {
                        var_r7_2 = 1;
                    }
                    var_r6 = var_r7_2;
                }
                temp_r7_3 = M2C_FIELD(var_r3, u8 *, 0);
                var_r3 += 1;
                *var_r4 = temp_r7_3;
                var_r4 += 1;
            }
        }
        goto loop_34;
    }
}

void fn_800385BC(void *arg0) {
    s32 temp_cr0_eq;
    void *temp_r31;
    void *var_r31;
    s32 var_r30;

    if (((void *) M2C_FIELD(arg0, void **, 0x108) == NULL) && (temp_r31 = M2C_FIELD(arg0, void **, 0x104), ((temp_r31 == NULL) == 0))) {
        var_r30 = M2C_FIELD(temp_r31, s32 *, 0xC);
        /* draft: did not compile: var_r31 = temp_r31 + 0x20; */
loop_10:
        temp_cr0_eq = var_r30 == 0;
        var_r30 -= 1;
        if (temp_cr0_eq != 0) {

        } else {
            if (memcmp(var_r31, &lbl_8034E9C8, 4) == 0) {
                M2C_FIELD(arg0, void **, 0x108) = var_r31;
                if ((void *) M2C_FIELD(arg0, void **, 0x10C) != NULL) {
                    fn_80038404(arg0);
                    return;
                }
                goto block_9;
            }
            if (memcmp(var_r31, &lbl_8034E9D0, 4) == 0) {
                M2C_FIELD(arg0, void **, 0x10C) = var_r31;
                if ((void *) M2C_FIELD(arg0, void **, 0x108) != NULL) {
                    fn_80038404(arg0);
                    return;
                }
            }
block_9:
            /* draft: did not compile: var_r31 += M2C_FIELD(var_r31, s32 *, 4); */
            goto loop_10;
        }
    }
}

u16 fn_80038694(void *arg0) {
    void *temp_r3;

    fn_800385BC((void *)(0));
    temp_r3 = M2C_FIELD(arg0, void **, 0x108);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, u16 *, 0xC);
    }
    return -1U;
}

s32 fn_800386D8(void *arg0, s32 arg1) { return 0; } /* draft: stub */

void *fn_80038764(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    fn_80038808(0);
    return arg0;
}
