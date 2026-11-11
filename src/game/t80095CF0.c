/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

s32 fn_8007FC40();
M2C_UNK fn_8008065C();
s32 fn_80080738();
M2C_UNK method_forceZoomScreen(s32, s32);
M2C_UNK fn_800A4CEC(s32, s32, s32, s32);
M2C_UNK fn_800A7338(s32, M2C_UNK);
M2C_UNK fn_800A4D50(s32, s32);
M2C_UNK SetViewport(s32, s32, s32);
M2C_UNK fn_8003475C();
s32 fn_80016CB8(u32);
s32 fn_80016CEC(u32);
void *fn_8007AEC4(M2C_UNK, M2C_UNK);
void *fn_8007AF20(void *);
M2C_UNK fn_8007B1B0();
M2C_UNK fn_8007B1C0();
u32 fn_800A71F8(u32, M2C_UNK);
s32 HSD_Randi(s32);
void *fn_8007B144();
M2C_UNK AddApplyRule(s32, s32, s32, s32, s32, void *);
M2C_UNK RemoveApplyRule(s32, s32, s32, void *);
u16 SD_Init(M2C_UNK, M2C_UNK, u16);
u16 SD_Term(u16);
u16 SD_Mount(void *, u16);
extern M2C_UNK lbl_803506F8;
u16 SD_Umount(s32);
u16 SD_Format(M2C_UNK, u16, u16);
s32 fn_80080790(s32);
u16 SD_Open(s32, void *, s32, u16);
extern M2C_UNK lbl_80350700;
u16 SD_Close(s32);
u16 SD_Mkdir(s32, s32);
u16 fn_800BB400(s32, void *, s32);
extern M2C_UNK lbl_80350708;
u16 fn_800B6670(s32);
u16 fn_800BCB74(s32, M2C_UNK *);
s32 memcmp();
M2C_UNK fn_8014F5B4(s8 *, M2C_UNK *, s32);
s32 strlen();
extern M2C_UNK lbl_8022A118;
extern s8 lbl_802CE710;
extern M2C_UNK lbl_8034FC68;
extern s8 lbl_80350710;
M2C_UNK fn_800146F0(M2C_UNK *, M2C_UNK);
M2C_UNK fn_80014798(M2C_UNK *, s32, M2C_UNK *);
M2C_UNK fn_8001D708();
M2C_UNK fn_800806D4(s32, s32);
s32 fn_80082598(s32, M2C_UNK *, M2C_UNK);
extern M2C_UNK lbl_8034FC70;
extern M2C_UNK lbl_8022A124;
extern s8 lbl_802CE71C;
M2C_UNK OSReport(M2C_UNK *, M2C_UNK *);
u16 fn_800B6A7C(s32, M2C_UNK *);
extern M2C_UNK lbl_8034FC74;
extern M2C_UNK lbl_8034FC7C;
extern M2C_UNK lbl_8034FC84;
extern s32 lbl_80350714;
u16 WritePictureSD(s32, s32, s32, M2C_UNK, M2C_UNK *);
extern s32 lbl_80350514;
extern s32 lbl_80350518;
M2C_UNK FreePictureSD(s32);

s32 scr_method_forceZoomScreen(s32 arg0);
s32 scr_method_isZoomed(s32 arg0);
s32 scr_method_getProgramObject(s32 arg0);
s32 scr_SetTvPanVolume(void *arg0, M2C_UNK arg_sp0);
s32 scr_SetTvVolume(void *arg0);
s32 scr_GetTvVolume(void *arg0);
s32 scr_method_setRenderMode(s32 arg0);
s32 scr_SetViewport(s32 arg0);
s32 scr_ResetViewport(s32 arg0);
s32 scr_method_getMdlIdOfPokemonInCamera(s32 arg0, M2C_UNK arg_sp0);
void *fn_800962A4(void *arg0);
s32 scr_AddApplyRule(void *arg0);
s32 scr_RemoveApplyRule(void *arg0);
s32 scr_SD_Init(s32 arg0);
s32 scr_SD_Term(s32 arg0);
s32 scr_SD_Mount(s32 arg0);
s32 scr_SD_Umount(s32 arg0);
s32 scr_SD_Format(s32 arg0);
s32 scr_SD_Open(s32 arg0);
s32 scr_SD_Close(s32 arg0);
s32 scr_SD_Mkdir(s32 arg0);
s32 scr_SD_Opendir(s32 arg0);
s32 scr_SD_Closedir(s32 arg0);
s32 scr_SearchPictureDirnameSD(s32 arg0, M2C_UNK arg_sp0);
s32 scr_GetPictureDirnameSD(s32 arg0);
s32 scr_IsNewPictureDirSD(void);
s32 scr_SearchPictureFilenameSD(s32 arg0);
s32 scr_GetPictureFilenameSD(s32 arg0);
s32 scr_ErasePicturesSD(s32 arg0, M2C_UNK arg_sp0);
s32 scr_GetEraseResultSD(void);
s32 scr_WritePictureSD(s32 arg0);
s32 scr_FreePictureSD(s32 arg0);

s32 scr_method_forceZoomScreen(s32 arg0) {
    s32 temp_r31;
    s32 var_r30;

    var_r30 = 0;
    var_r30 = fn_8007FC40() != 3 ? var_r30 : fn_80080738(arg0);
    temp_r31 = fn_80080738(arg0);
    /* draft: did not compile: fn_800962A4(arg0); */
    method_forceZoomScreen(temp_r31 != 0, var_r30);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_isZoomed(s32 arg0) { return 0; } /* draft: stub */

s32 scr_method_getProgramObject(s32 arg0) { return 0; } /* draft: stub */

s32 scr_SetTvPanVolume(void *arg0, M2C_UNK arg_sp0) {
    s32 temp_r28;
    s32 temp_r30;
    s32 temp_r29;
    s32 temp_r31;

    temp_r28 = fn_80080738(arg0);
    temp_r30 = fn_80080738(arg0);
    temp_r29 = fn_80080738(arg0);
    temp_r31 = fn_80080738((long)(0));
    fn_800A7338(M2C_FIELD(arg0, s32 *, 0x2E0), 0);
    fn_800A4CEC(temp_r28, temp_r29, temp_r30, temp_r31);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_SetTvVolume(void *arg0) {
    u8 temp_r31;

    temp_r31 = fn_800A7338(M2C_FIELD(arg0, s32 *, 0x2E0), 0);
    fn_800A4D50(temp_r31, fn_80080738(arg0));
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_GetTvVolume(void *arg0) {
    fn_8008065C(arg0, M2C_FIELD(fn_800A7338(M2C_FIELD(arg0, s32 *, 0x2E0), 0), s32 *, 0x24C));
    return 0;
}

s32 scr_method_setRenderMode(s32 arg0) { return 0; } /* draft: stub */

s32 scr_SetViewport(s32 arg0) {
    s32 temp_r31;
    s32 temp_r30;
    s32 temp_r29;

    temp_r31 = fn_80080738();
    temp_r30 = fn_80080738(arg0);
    temp_r29 = fn_80080738(arg0);
    fn_80080738(arg0);
    SetViewport(temp_r30, temp_r29, temp_r31);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_ResetViewport(s32 arg0) {
    fn_8003475C();
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_getMdlIdOfPokemonInCamera(s32 arg0, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

void *fn_800962A4(void *arg0) {
    s32 temp_r4;
    void *var_r3;

    fn_80080738();
    var_r3 = fn_8007B144();
    if (var_r3 == NULL) {
        return NULL;
    }
    temp_r4 = M2C_FIELD(var_r3, s32 *, 8);
    if (!(temp_r4 & 0x20000)) {
        return NULL;
    }
    if ((temp_r4 & 2) && !(temp_r4 & 0x2000) && ((u32) M2C_FIELD(arg0, u32 *, 0x2E0) != (u32) M2C_FIELD(var_r3, u32 *, 0x24))) {
        var_r3 = NULL;
    }
    return var_r3;
}

s32 scr_AddApplyRule(void *arg0) {
    s32 temp_r29;
    s32 temp_r30;
    s32 temp_r31;
    void *temp_r8;

    temp_r31 = fn_80080738();
    temp_r30 = fn_80080738(arg0);
    temp_r29 = fn_80080738(arg0);
    temp_r8 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x2E0), void **, 0x38);
    AddApplyRule(M2C_FIELD(temp_r8, s32 *, 0x14), temp_r29, fn_80080738(arg0), temp_r30, temp_r31, temp_r8);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_RemoveApplyRule(void *arg0) {
    s32 temp_r31;
    void *temp_r6;

    temp_r31 = fn_80080738();
    temp_r6 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x2E0), void **, 0x38);
    RemoveApplyRule(M2C_FIELD(temp_r6, s32 *, 0x14), temp_r31, fn_80080738(arg0), temp_r6);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_SD_Init(s32 arg0) {
    u16 tmp1 = SD_Init(0, 0, fn_80080738());

    fn_8008065C(arg0, tmp1);
    return 0;
}

s32 scr_SD_Term(s32 arg0) {
    u16 tmp1 = SD_Term(fn_80080738());

    fn_8008065C(arg0, tmp1);
    return 0;
}

s32 scr_SD_Mount(s32 arg0) {
    u16 temp_r3;

    temp_r3 = fn_80080738();
    fn_8008065C(arg0, SD_Mount(&lbl_803506F8 + (temp_r3 * 4), temp_r3));
    return 0;
}

s32 scr_SD_Umount(s32 arg0) {
    s32 temp_r31;
    u16 temp_r4;

    temp_r31 = fn_80080738() * 4;
    temp_r4 = SD_Umount(*(&lbl_803506F8 + temp_r31));
    *(&lbl_803506F8 + temp_r31) = 0;
    fn_8008065C(arg0, temp_r4);
    return 0;
}

s32 scr_SD_Format(s32 arg0) {
    u32 temp_r31;

    temp_r31 = fn_80080738();
    fn_8008065C(arg0, SD_Format(0, (u16) ((temp_r31 != 0) + 1), fn_80080738(arg0)));
    return 0;
}

s32 scr_SD_Open(s32 arg0) {
    s32 temp_r0;
    s32 temp_r30;
    s32 temp_r31;

    temp_r31 = fn_80080738();
    temp_r30 = fn_80080790(arg0);
    temp_r0 = fn_80080738(arg0) * 4;
    fn_8008065C(arg0, SD_Open(*(&lbl_803506F8 + temp_r0), &lbl_80350700 + temp_r0, temp_r30, temp_r31));
    return 0;
}

s32 scr_SD_Close(s32 arg0) {
    s32 temp_r31;
    u16 temp_r4;

    temp_r31 = fn_80080738() * 4;
    temp_r4 = SD_Close(*(&lbl_80350700 + temp_r31));
    *(&lbl_80350700 + temp_r31) = 0;
    fn_8008065C(arg0, temp_r4);
    return 0;
}

s32 scr_SD_Mkdir(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_80080790((long)(0));
    fn_8008065C(arg0, SD_Mkdir(*(&lbl_803506F8 + (fn_80080738(arg0) * 4)), temp_r31));
    return 0;
}

s32 scr_SD_Opendir(s32 arg0) {
    s32 temp_r0;
    s32 temp_r31;

    temp_r31 = fn_80080790((long)(0));
    temp_r0 = fn_80080738(arg0) * 4;
    fn_8008065C(arg0, fn_800BB400(*(&lbl_803506F8 + temp_r0), &lbl_80350708 + temp_r0, temp_r31));
    return 0;
}

s32 scr_SD_Closedir(s32 arg0) {
    u16 tmp1 = fn_800B6670(*(&lbl_80350708 + (fn_80080738() * 4)));

    fn_8008065C(arg0, tmp1);
    return 0;
}

s32 scr_SearchPictureDirnameSD(s32 arg0, M2C_UNK arg_sp0) {
    s32 sp4C;
    s32 sp5C;
    M2C_UNK sp8;
    s32 temp_r23;
    s32 temp_r3_2;
    s32 temp_r3_4;
    s32 temp_r5;
    s32 var_ctr;
    s32 var_r25;
    s32 var_r26;
    s32 var_r27;
    s32 var_r5;
    u16 temp_r3;
    u16 var_r8;
    u32 temp_r0;
    u32 temp_r3_5;
    u32 temp_r4;
    u32 temp_r6;
    u8 *var_r23;
    u8 temp_r3_3;
    void *var_r29;
    void *var_r3;

    temp_r23 = fn_80080738();
    var_r27 = 0;
    /* draft: did not compile: memset((s32 (*)[]) &sp5C[0], 0, 0x80); */
loop_17:
    temp_r3 = fn_800BCB74(*(&lbl_80350708 + (temp_r23 * 4)), &sp8);
    var_r8 = temp_r3;
    if (temp_r3 == 0) {
        temp_r3_2 = strlen(&sp8);
        var_r26 = temp_r3_2 - 1;
        var_r25 = 0;
        var_r3 = &sp8 + var_r26;
loop_3:
        if ((var_r26 > 0) && ((s32) M2C_FIELD(var_r3, u8 *, -1) != 0x5C)) {
            /* draft: did not compile: var_r3 -= 1; */
            var_r26 -= 1;
            goto loop_3;
        }
        if (temp_r3_2 >= (s32) (var_r26 + 3)) {
            var_r29 = &sp8 + var_r26;
            /* draft: did not compile: var_r23 = &sp8 + var_r26; */
loop_7:
            temp_r3_3 = *var_r23;
            /* draft: did not compile: var_r29 += 1; */
            var_r26 += 1;
            var_r23 += 1;
            temp_r3_4 = temp_r3_3 - 0x30;
            if ((temp_r3_4 >= 0) && (temp_r3_4 <= 9)) {
                var_r25 = temp_r3_4 + (var_r25 * 0xA);
                if (var_r25 != 0) {
                    if (var_r25 >= 0x64) {
                        if (((s32) (var_r26 + 5) == temp_r3_2) && (memcmp(var_r29, &lbl_8034FC68, 5) == 0) && (sp4C & 0x10)) {
                            if (var_r27 < var_r25) {
                                var_r27 = var_r25;
                            }
                        } else {
                            temp_r3_5 = (u32) var_r25 >> 0x1FU;
                            temp_r5 = var_r25 / 32;
                            temp_r0 = (var_r25 << 0x1B) - temp_r3_5;
                            /* draft: did not compile: (&sp5C[0])[temp_r5] |= 1 << (((temp_r0 << 5) | (temp_r0 >> 0x1BU)) + temp_r3_5); */
                        }
                    }
                    goto loop_7;
                }
            }
        }
        goto loop_17;
    }
    lbl_802CE710 = 0;
    lbl_80350710 = 0;
    if (temp_r3 == -0x5FD0U) {
        if (var_r27 != 0) {
            fn_8014F5B4(&lbl_802CE710, &lbl_8022A118, var_r27);
            var_r8 = 0;
        } else {
            var_r5 = 0x64;
            var_ctr = 0x384;
loop_22:
            temp_r6 = (u32) var_r5 >> 0x1FU;
            temp_r4 = (var_r5 << 0x1B) - temp_r6;
            if (0 /* draft: did not compile */) {
                fn_8014F5B4((signed char *)(&lbl_802CE710), (long *)(&lbl_8022A118), (long)(0));
                var_r8 = 0;
                lbl_80350710 = 1;
            } else {
                var_r5 += 1;
                var_ctr -= 1;
                if (var_ctr != 0) {
                    goto loop_22;
                }
            }
        }
    }
    fn_8008065C(arg0, var_r8);
    return 0;
}

s32 scr_GetPictureDirnameSD(s32 arg0) {
    M2C_UNK spC;
    M2C_UNK sp8;

    fn_80014798(&spC, fn_80080790((long)(0)), &sp8);
    fn_8001D708(&spC, &lbl_8034FC70, strlen(&lbl_8034FC70));
    fn_8001D708(&spC, &lbl_802CE710, strlen(&lbl_802CE710));
    fn_800806D4(arg0, fn_80082598(arg0, &spC, 0));
    fn_800146F0(&spC, -1);
    return 0;
}

s32 scr_IsNewPictureDirSD(void) {
    fn_8008065C((u8)lbl_80350710);
    return 0;
}

s32 scr_SearchPictureFilenameSD(s32 arg0) {
    s32 sp5C;
    M2C_UNK sp8;
    s32 temp_r30;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r5;
    u16 var_ctr;
    s32 var_r10;
    s32 var_r5;
    s32 var_r9;
    u16 temp_r3;
    int var_r8;
    u32 temp_r0;
    u32 temp_r3_4;
    u32 temp_r4_2;
    u32 temp_r6;
    void *temp_r4;
    void *var_r8_2;

    temp_r30 = fn_80080738();
    /* draft: did not compile: memset((s32 (*)[]) &sp5C[0], 0, 0x4E4); */
loop_9:
    temp_r3 = fn_800BCB74(*(&lbl_80350708 + (temp_r30 * 4)), &sp8);
    var_r8 = temp_r3;
    if (temp_r3 == 0) {
        temp_r3_2 = strlen(&sp8);
        var_r9 = 0;
        var_r10 = 0;
        if (temp_r3_2 >= 0xD) {
            temp_r4 = &sp8 + temp_r3_2;
            if (((s32) M2C_FIELD(temp_r4, u8 *, -0xD) == 0x5C) && ((s32) M2C_FIELD(temp_r4, u8 *, -4) == 0x2E)) {
                var_r8_2 = &sp8 + temp_r3_2;
loop_5:
                temp_r3_3 = M2C_FIELD(var_r8_2, u8 *, -8) - 0x30;
                if ((temp_r3_3 >= 0) && (temp_r3_3 <= 9)) {
                    var_r9 += 1;
                    /* draft: did not compile: var_r8_2 += 1; */
                    var_r10 = temp_r3_3 + (var_r10 * 0xA);
                    if (var_r9 == 4) {
                        temp_r3_4 = (u32) var_r10 >> 0x1FU;
                        temp_r5 = var_r10 / 32;
                        temp_r0 = (var_r10 << 0x1B);
                        temp_r0 -= temp_r3_4;
                        /* draft: did not compile: (&sp5C[0])[temp_r5] |= 1 << (((temp_r0 << 5) | (temp_r0 >> 0x1BU)) + temp_r3_4); */
                    }
                    goto loop_5;
                }
            }
        }
        goto loop_9;
    }
    lbl_802CE71C = 0;
    if (temp_r3 == -0x5FD0U) {
        var_r5 = 1;
        var_ctr = 0x270F;
loop_12:
        temp_r6 = (u32) var_r5 >> 0x1FU;
        temp_r4_2 = (var_r5 << 0x1B) - temp_r6;
        if (0 /* draft: did not compile */) {
            fn_8014F5B4((signed char *)(&lbl_802CE71C), (long *)(&lbl_8022A124), (long)(0));
            var_r8 = 0;
        } else {
            var_r5 += 1;
            var_ctr -= 1;
            if (var_ctr != 0) {
                goto loop_12;
            }
        }
    }
    fn_8008065C(arg0, var_r8);
    return 0;
}

s32 scr_GetPictureFilenameSD(s32 arg0) {
    M2C_UNK spC;
    M2C_UNK sp8;

    fn_80014798(&spC, fn_80080790((long)(0)), &sp8);
    fn_8001D708(&spC, &lbl_8034FC70, strlen(&lbl_8034FC70));
    fn_8001D708(&spC, &lbl_802CE71C, strlen(&lbl_802CE71C));
    fn_800806D4(arg0, fn_80082598(arg0, &spC, 0));
    fn_800146F0(&spC, -1);
    return 0;
}

s32 scr_ErasePicturesSD(s32 arg0, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

s32 scr_GetEraseResultSD(void) {
    fn_8008065C(lbl_80350714);
    return 0;
}

s32 scr_WritePictureSD(s32 arg0) {
    M2C_UNK sp8;

    u16 tmp1 = WritePictureSD(*(&lbl_80350700 + (fn_80080738() * 4)), lbl_80350514, lbl_80350518, 0, &sp8);

    fn_8008065C(arg0, tmp1);
    return 0;
}

s32 scr_FreePictureSD(s32 arg0) {
    FreePictureSD(lbl_80350514);
    lbl_80350514 = 0;
    fn_8008065C(arg0, 0);
    return 0;
}
