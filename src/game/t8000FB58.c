/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

void *get_up_vector_for_viewing_mtx(M2C_UNK, void *, f32, f32);
void *fn_80005868(M2C_UNK);
M2C_UNK PSMTXIdentity();
extern void *lbl_80350410;
extern f32 lbl_80351128;
M2C_UNK fn_80005888(void *);
M2C_UNK fn_800058A8();
s32 HSD_ArchiveParse(M2C_UNK *, s32, s32, M2C_UNK *);
s32 *HSD_ArchiveGetPublicAddress(M2C_UNK *, void *);
M2C_UNK __assert(M2C_UNK *, M2C_UNK, void *);
extern M2C_UNK lbl_801DB670;
extern M2C_UNK lbl_801DB6D4;
s32 strcmp(s32, s32);
s32 strlen();
extern M2C_UNK lbl_801DB5A4;
extern f32 lbl_80351148;
M2C_UNK GXSetVtxDesc(M2C_UNK, M2C_UNK);
M2C_UNK fn_800E0804();
M2C_UNK GXSetVtxAttrFmt(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_800E1034();
M2C_UNK GXSetTexCoordGen2(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_800E1314(M2C_UNK);
M2C_UNK GXSetTevOrder(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_800E4B50(M2C_UNK);
M2C_UNK GXSetBlendMode(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXBegin(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXInitTexObj(M2C_UNK *, void *, u16, u16, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXInitTexObjLOD(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, f32, f32, f32);
M2C_UNK GXLoadTexObj(M2C_UNK *, M2C_UNK);
M2C_UNK GXInvalidateTexAll();
M2C_UNK GXSetTevColorIn(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXSetTevAlphaIn(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXSetTevColorOp(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXSetTevAlphaOp(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_800E4580(M2C_UNK, s32 *, M2C_UNK);
extern f32 lbl_8035114C;
extern f32 lbl_80351150;
extern s32 lbl_80352A58;
M2C_UNK HSD_StateInvalidate(M2C_UNK);
extern M2C_UNK lbl_801DB58C;
M2C_UNK fn_800FF658(M2C_UNK, M2C_UNK);
M2C_UNK fn_801000F0(M2C_UNK);
M2C_UNK fn_80100190();
M2C_UNK fn_80100C24(M2C_UNK);
M2C_UNK fn_80100DA0();
M2C_UNK fn_801010DC();
extern s32 lbl_802BFD60;
extern s16 lbl_8035041C;
extern s16 lbl_8035041E;
extern s16 lbl_80350420;
extern s16 lbl_80350422;
extern M2C_UNK lbl_802BFD38;
M2C_UNK OSGetTime();
M2C_UNK fn_80008DBC();
void *fn_800A163C(M2C_UNK, s32);
M2C_UNK OSTicksToCalendarTime(s32 *);
extern M2C_UNK lbl_801CB330;
extern M2C_UNK lbl_802C0270;
extern s32 lbl_803502C8;
extern s32 *lbl_803502D0;
extern s32 lbl_80350428;
extern s32 lbl_80350434;
extern s32 lbl_80350438;
extern void *lbl_8035043C;
extern f32 lbl_80351170;
M2C_UNK fn_8000F204();
M2C_UNK fn_80013004();
extern s16 lbl_80350418;
extern s16 lbl_8035041A;
extern s32 lbl_80350424;
extern s32 lbl_8035042C;

void *fn_8000FB58(void *arg0, void *arg1, s16 arg2, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void *fn_8000FCC8(void *arg0, s16 arg1, void *arg2, void *arg3, s16 arg4, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
s32 fn_8000FE64(u32 arg0);
void *fn_8000FEA0(void *arg0, s16 arg1, void *arg2);
void fn_8000FF74(void *arg0, void *arg1, M2C_UNK arg_sp0);
void *fn_8001028C(void *arg0, s32 arg1, s32 arg2);
M2C_UNK *fn_800103F0(M2C_UNK *arg0, s16 arg1);
s32 fn_800105CC(void **arg0, s32 arg1);
void fn_800105E8(s32 arg0, s32 arg1, s32 arg2, s32 *arg3, s32 *arg4, s32 *arg5);
void fn_80010640(s32 arg0, s32 arg1, s32 arg2, s32 *arg3, s32 *arg4, s32 *arg5, M2C_UNK arg_sp0);
void fn_800106D8(void **arg0);
s32 fn_80010704(void **arg0, s32 arg1);
s32 fn_80010720(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80010758(s32 arg0, s32 arg1, s32 arg2);
s32 fn_800107C4(void **arg0);
s32 fn_800107D8(void *arg0, s32 arg1);
s32 fn_80010808(void *arg0, s32 arg1);
void *fn_8001086C(void *arg0, s32 arg2);
void fn_80010904(void);
void fn_800109C4(void *arg0);
void fn_80010D28(void);
s32 fn_80010D4C(s32 *arg0, s32 arg1);
void fn_80010D64(void *arg0, s32 arg1);
void fn_80010D80(void *arg0, void *arg1);
s32 fn_80010DA8(s32 **arg0, s32 arg1);
s32 fn_80010E3C(u8 *arg0, u8 *arg1);
void fn_80010F30(void);
void fn_80010F60(void);
void fn_80010F90(void);
void fn_80010FE4(void);
void fn_80011010(void);
void fn_80011144(void);

void *fn_8000FB58(void *arg0, void *arg1, s16 arg2, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    f32 temp_f1;
    f32 temp_f2;
    u8 temp_r6;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r7;

    M2C_FIELD(arg0, void **, 0x78) = fn_80005868(0x30);
    temp_f1 = farg2 + farg0;
    temp_f2 = farg3 + farg1;
    temp_r4 = M2C_FIELD(arg0, void **, 0x78);
    M2C_FIELD(temp_r4, f32 *, 0) = farg2;
    M2C_FIELD(temp_r4, f32 *, 4) = farg3;
    M2C_FIELD(temp_r4, f32 *, 8) = (f32) lbl_80351128;
    temp_r4_2 = M2C_FIELD(arg0, void **, 0x78);
    M2C_FIELD(temp_r4_2, f32 *, 0xC) = temp_f1;
    M2C_FIELD(temp_r4_2, f32 *, 0x10) = farg3;
    M2C_FIELD(temp_r4_2, f32 *, 0x14) = (f32) lbl_80351128;
    temp_r4_3 = M2C_FIELD(arg0, void **, 0x78);
    M2C_FIELD(temp_r4_3, f32 *, 0x18) = temp_f1;
    M2C_FIELD(temp_r4_3, f32 *, 0x1C) = temp_f2;
    M2C_FIELD(temp_r4_3, f32 *, 0x20) = (f32) lbl_80351128;
    temp_r4_4 = M2C_FIELD(arg0, void **, 0x78);
    M2C_FIELD(temp_r4_4, f32 *, 0x24) = farg2;
    M2C_FIELD(temp_r4_4, f32 *, 0x28) = temp_f2;
    M2C_FIELD(temp_r4_4, f32 *, 0x2C) = (f32) lbl_80351128;
    M2C_FIELD(arg0, s32 *, 0x90) = 0;
    M2C_FIELD(arg0, void **, 0x8C) = get_up_vector_for_viewing_mtx(4, temp_r4_4, temp_f1, temp_f2);
    temp_r7 = M2C_FIELD(arg0, void **, 0x8C);
    M2C_FIELD(temp_r7, u8 *, 0) = (u8) M2C_FIELD(arg1, u8 *, 0);
    M2C_FIELD(temp_r7, u8 *, 1) = (u8) M2C_FIELD(arg1, u8 *, 1);
    M2C_FIELD(temp_r7, u8 *, 2) = (u8) M2C_FIELD(arg1, u8 *, 2);
    temp_r6 = M2C_FIELD(arg1, u8 *, 3);
    M2C_FIELD(temp_r7, u8 *, 3) = temp_r6;
    M2C_FIELD(arg0, s32 *, 0) = 4;
    M2C_FIELD(arg0, s16 *, 0x9C) = 1;
    M2C_FIELD(arg0, s16 *, 0xA6) = arg2;
    M2C_FIELD(arg0, s16 *, 0xAE) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    /* draft: did not compile: PSMTXIdentity(arg0 + 4, 1, 4, temp_r6, temp_r7); */
    if ((void *) lbl_80350410 == NULL) {
        lbl_80350410 = arg0;
        M2C_FIELD(arg0, void **, 0xB0) = NULL;
    } else {
        M2C_FIELD(arg0, void **, 0xB0) = (void *) lbl_80350410;
        lbl_80350410 = arg0;
    }
    return arg0;
}

void *fn_8000FCC8(void *arg0, s16 arg1, void *arg2, void *arg3, s16 arg4, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    f32 temp_f1;
    f32 temp_f2;
    u8 temp_r6;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r7;
    void *temp_r7_2;

    M2C_FIELD(arg0, void **, 0x78) = fn_80005868(0x30);
    temp_f1 = farg2 + farg0;
    temp_f2 = farg3 + farg1;
    temp_r4 = M2C_FIELD(arg0, void **, 0x78);
    M2C_FIELD(temp_r4, f32 *, 0) = farg2;
    M2C_FIELD(temp_r4, f32 *, 4) = farg3;
    M2C_FIELD(temp_r4, f32 *, 8) = (f32) lbl_80351128;
    temp_r4_2 = M2C_FIELD(arg0, void **, 0x78);
    M2C_FIELD(temp_r4_2, f32 *, 0xC) = temp_f1;
    M2C_FIELD(temp_r4_2, f32 *, 0x10) = farg3;
    M2C_FIELD(temp_r4_2, f32 *, 0x14) = (f32) lbl_80351128;
    temp_r4_3 = M2C_FIELD(arg0, void **, 0x78);
    M2C_FIELD(temp_r4_3, f32 *, 0x18) = temp_f1;
    M2C_FIELD(temp_r4_3, f32 *, 0x1C) = temp_f2;
    M2C_FIELD(temp_r4_3, f32 *, 0x20) = (f32) lbl_80351128;
    temp_r4_4 = M2C_FIELD(arg0, void **, 0x78);
    M2C_FIELD(temp_r4_4, f32 *, 0x24) = farg2;
    M2C_FIELD(temp_r4_4, f32 *, 0x28) = temp_f2;
    M2C_FIELD(temp_r4_4, f32 *, 0x2C) = (f32) lbl_80351128;
    M2C_FIELD(arg0, s32 *, 0x90) = 0;
    M2C_FIELD(arg0, void **, 0x8C) = fn_80005868((long)(8));
    temp_r7 = M2C_FIELD(arg0, void **, 0x8C);
    M2C_FIELD(temp_r7, u8 *, 0) = (u8) M2C_FIELD(arg2, u8 *, 0);
    M2C_FIELD(temp_r7, u8 *, 1) = (u8) M2C_FIELD(arg2, u8 *, 1);
    M2C_FIELD(temp_r7, u8 *, 2) = (u8) M2C_FIELD(arg2, u8 *, 2);
    M2C_FIELD(temp_r7, u8 *, 3) = (u8) M2C_FIELD(arg2, u8 *, 3);
    temp_r7_2 = M2C_FIELD(arg0, void **, 0x8C);
    M2C_FIELD(temp_r7_2, u8 *, 4) = (u8) M2C_FIELD(arg3, u8 *, 0);
    M2C_FIELD(temp_r7_2, u8 *, 5) = (u8) M2C_FIELD(arg3, u8 *, 1);
    M2C_FIELD(temp_r7_2, u8 *, 6) = (u8) M2C_FIELD(arg3, u8 *, 2);
    temp_r6 = M2C_FIELD(arg3, u8 *, 3);
    M2C_FIELD(temp_r7_2, u8 *, 7) = temp_r6;
    M2C_FIELD(arg0, s32 *, 0) = 5;
    M2C_FIELD(arg0, s16 *, 0x9C) = 1;
    M2C_FIELD(arg0, s16 *, 0xA6) = arg4;
    M2C_FIELD(arg0, s16 *, 0xAE) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    /* draft: did not compile: PSMTXIdentity(arg0 + 4, 1, 5, temp_r6, temp_r7_2); */
    M2C_FIELD(arg0, s16 *, 0xA0) = 0;
    M2C_FIELD(arg0, s16 *, 0xA2) = arg1;
    if ((void *) lbl_80350410 == NULL) {
        lbl_80350410 = arg0;
        M2C_FIELD(arg0, void **, 0xB0) = NULL;
    } else {
        M2C_FIELD(arg0, void **, 0xB0) = (void *) lbl_80350410;
        lbl_80350410 = arg0;
    }
    return arg0;
}

s32 fn_8000FE64(u32 arg0) {
    void *var_r4;

    if (arg0 == 0U) {
        return 0;
    }
    var_r4 = lbl_80350410;
loop_6:
    if (var_r4 == NULL) {
        return 0;
    }
    if (0 /* draft: did not compile */) {
        return 1;
    }
    var_r4 = M2C_FIELD(var_r4, void **, 0xB0);
    goto loop_6;
}

void *fn_8000FEA0(void *arg0, s16 arg1, void *arg2) {
    s32 var_r3;
    void *var_r4;
    void *var_r5;

    var_r5 = arg2;
    if (arg0 != NULL) {
        var_r3 = 0;
        if ((void *) lbl_80350410 == arg0) {
            var_r3 = 1;
            lbl_80350410 = M2C_FIELD(arg0, void **, 0xB0);
        } else {
            var_r4 = lbl_80350410;
loop_7:
            if (var_r4 != NULL) {
                if (var_r4 == arg0) {
                    var_r3 = 1;
                    M2C_FIELD(var_r5, void **, 0xB0) = (void *) M2C_FIELD(var_r4, void **, 0xB0);
                } else {
                    var_r5 = var_r4;
                    var_r4 = M2C_FIELD(var_r4, void **, 0xB0);
                    goto loop_7;
                }
            }
        }
        if (var_r3 != 0) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x78) != 0U) {
                fn_800058A8();
            }
            if ((u32) M2C_FIELD(arg0, u32 *, 0x90) != 0U) {
                fn_800058A8();
            }
            if ((u32) M2C_FIELD(arg0, u32 *, 0x8C) != 0U) {
                fn_80005888((void *)(0));
            }
        }
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

void fn_8000FF74(void *arg0, void *arg1, M2C_UNK arg_sp0) { } /* draft: stub */

void *fn_8001028C(void *arg0, s32 arg1, s32 arg2) { } /* draft: stub */

M2C_UNK *fn_800103F0(M2C_UNK *arg0, s16 arg1) { return 0; } /* draft: stub */

s32 fn_800105CC(void **arg0, s32 arg1) {
    return 0;
}

void fn_800105E8(s32 arg0, s32 arg1, s32 arg2, s32 *arg3, s32 *arg4, s32 *arg5) {
    s32 var_r5;
    void *var_r3;

    var_r5 = arg2;
    *arg3 = 0;
    *arg4 = 0;
    *arg5 = 0;
    var_r3 = M2C_FIELD((arg0 + (arg1 * 4)), void **, 8);
loop_4:
    if (var_r3 == NULL) {
        return;
    }
    if (var_r5 == 0) {
        *arg3 = M2C_FIELD(var_r3, s32 *, 8);
        *arg4 = M2C_FIELD(var_r3, s32 *, 0xC);
        *arg5 = M2C_FIELD(var_r3, s32 *, 0x10);
        return;
    }
    var_r3 = M2C_FIELD(var_r3, void **, 0);
    var_r5 -= 1;
    goto loop_4;
}

void fn_80010640(s32 arg0, s32 arg1, s32 arg2, s32 *arg3, s32 *arg4, s32 *arg5, M2C_UNK arg_sp0) {
    void *var_r31;

    *arg3 = 0;
    *arg4 = 0;
    *arg5 = 0;
    var_r31 = M2C_FIELD((arg0 + (arg1 * 4)), void **, 8);
loop_4:
    if (var_r31 == NULL) {
        return;
    }
    if (strcmp(M2C_FIELD(var_r31, s32 *, 4), arg2) == 0) {
        *arg3 = M2C_FIELD(var_r31, s32 *, 8);
        *arg4 = M2C_FIELD(var_r31, s32 *, 0xC);
        *arg5 = M2C_FIELD(var_r31, s32 *, 0x10);
        return;
    }
    var_r31 = M2C_FIELD(var_r31, void **, 0);
    goto loop_4;
}

void fn_800106D8(void **arg0) {
    u32 *var_r4;

    var_r4 = M2C_FIELD(M2C_FIELD(*arg0, void **, 8), u32 **, 8);
loop_2:
    if ((u32) *var_r4 != 0U) {
        var_r4 += 4;
        goto loop_2;
    }
}

s32 fn_80010704(void **arg0, s32 arg1) {
    return 0;
}

s32 fn_80010720(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r5;
    void *var_r3;

    var_r5 = arg2;
    var_r3 = M2C_FIELD((arg0 + (arg1 * 4)), void **, 0x88);
loop_4:
    if (var_r3 == NULL) {
        return 0;
    }
    if (var_r5 == 0) {
        return M2C_FIELD(var_r3, s32 *, 8);
    }
    var_r3 = M2C_FIELD(var_r3, void **, 0);
    var_r5 -= 1;
    goto loop_4;
}

s32 fn_80010758(s32 arg0, s32 arg1, s32 arg2) {
    void *var_r31;

    var_r31 = M2C_FIELD((arg0 + (arg1 * 4)), void **, 0x88);
loop_4:
    if (var_r31 == NULL) {
        return 0;
    }
    if (strcmp(M2C_FIELD(var_r31, s32 *, 4), arg2) == 0) {
        return M2C_FIELD(var_r31, s32 *, 8);
    }
    var_r31 = M2C_FIELD(var_r31, void **, 0);
    goto loop_4;
}

s32 fn_800107C4(void **arg0) {
    return *M2C_FIELD(M2C_FIELD(*arg0, void **, 8), s32 **, 4);
}

s32 fn_800107D8(void *arg0, s32 arg1) {
    s32 var_r4;
    void *var_r3;

    var_r4 = arg1;
    var_r3 = M2C_FIELD(arg0, void **, 0xC8);
loop_4:
    if (var_r3 == NULL) {
        return 0;
    }
    if (var_r4 == 0) {
        return M2C_FIELD(var_r3, s32 *, 8);
    }
    var_r3 = M2C_FIELD(var_r3, void **, 0);
    var_r4 -= 1;
    goto loop_4;
}

s32 fn_80010808(void *arg0, s32 arg1) {
    void *var_r31;

    var_r31 = M2C_FIELD(arg0, void **, 0xC8);
loop_4:
    if (var_r31 == NULL) {
        return 0;
    }
    if (strcmp(M2C_FIELD(var_r31, s32 *, 4), arg1) == 0) {
        return M2C_FIELD(var_r31, s32 *, 8);
    }
    var_r31 = M2C_FIELD(var_r31, void **, 0);
    goto loop_4;
}

void *fn_8001086C(void *arg0, s32 arg2) {
    s32 temp_r31;

    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &lbl_801DB5A4;
    fn_80010D80((void *)(&lbl_801DB5A4), (void *)(0));
    fn_80010D4C(arg0, arg2);
    temp_r31 = strlen();
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (fn_80010D4C(arg0, arg2) + ((temp_r31 + 0x20) & 0xFFFFFFE0));
    M2C_FIELD(arg0, s16 *, 0x12) = 0;
    M2C_FIELD(arg0, s16 *, 0x10) = 0;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) lbl_80351148;
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) lbl_80351148;
    return arg0;
}

void fn_80010904(void) {
    GXSetTexCoordGen2(0, 1, 4, 0x3C, 0, 0x7D);
    GXSetBlendMode(1, 4, 5, 0);
    fn_800E1034();
    fn_800E0804();
    GXSetVtxAttrFmt(0, 9, 0, 4, 0);
    GXSetVtxDesc(9, 1);
    GXSetVtxAttrFmt(0, 0xD, 1, 4, 0);
    GXSetVtxDesc(0xD, 1);
    fn_800E1314(1);
    fn_800E4B50(1);
    GXSetTevOrder(0, 0, 0, 0xFF);
}

void fn_800109C4(void *arg0) {
    s32 sp94;
    s32 sp90;
    M2C_UNK sp14;
    s8 sp13;
    s8 sp12;
    s8 sp11;
    s8 sp10;
    s32 spC;
    s32 sp8;
    s16 temp_r0;
    s32 *temp_r5;
    s32 *temp_r6;

    if ((s32) *M2C_FIELD(arg0, s32 **, 0xC) == 1) {
        GXSetTevColorIn(0, 0xF, 0xF, 0xC, 8);
        GXSetTevColorOp(0, 0, 0, 0, 1, 0);
        GXSetTevAlphaIn(0, 7, 7, 7, 4);
        GXSetTevAlphaOp(0, 0, 0, 0, 1, 0);
    } else {
        sp10 = 0xFF;
        sp11 = 0xFF;
        sp12 = 0xFF;
        sp13 = 0xFF;
        spC = lbl_80352A58;
        fn_800E4580(1, &spC, 0xFF);
        sp8 = (s32) sp10;
        fn_800E4580((long)(2), (long *)(&sp8), (long)(0));
        GXSetTevColorIn(0, 2, 4, 8, 0xF);
        GXSetTevColorOp(0, 0, 0, 0, 1, 0);
        GXSetTevAlphaIn(0, 7, 7, 7, 4);
        GXSetTevAlphaOp(0, 0, 0, 0, 1, 0);
    }
    GXInvalidateTexAll();
    temp_r6 = M2C_FIELD(arg0, s32 **, 0xC);
    GXInitTexObj(&sp14, temp_r6 + 0x20, M2C_FIELD(temp_r6, u16 *, 4), M2C_FIELD(temp_r6, u16 *, 6), 5, 0, 0, 0);
    GXInitTexObjLOD(&sp14, 0, 0, 0, 0, 0, lbl_8035114C, lbl_80351150, lbl_8035114C);
    GXLoadTexObj(&sp14, 0);
    GXBegin(0x80, 0, 4);
    *(f32 *)0xCC008000 = (f32) M2C_FIELD(arg0, s16 *, 0x10);
    *(f32 *)0xCC008000 = (f32) M2C_FIELD(arg0, s16 *, 0x12);
    *(f32 *)0xCC008000 = lbl_8035114C;
    *(f32 *)0xCC008000 = lbl_8035114C;
    *(f32 *)0xCC008000 = ((f32) M2C_FIELD(M2C_FIELD(arg0, s32 **, 0xC), u16 *, 4) * M2C_FIELD(arg0, f32 *, 0x14)) + (f32) M2C_FIELD(arg0, s16 *, 0x10);
    *(f32 *)0xCC008000 = (f32) M2C_FIELD(arg0, s16 *, 0x12);
    *(f32 *)0xCC008000 = lbl_80351148;
    *(f32 *)0xCC008000 = lbl_8035114C;
    temp_r5 = M2C_FIELD(arg0, s32 **, 0xC);
    *(f32 *)0xCC008000 = ((f32) M2C_FIELD(temp_r5, u16 *, 4) * M2C_FIELD(arg0, f32 *, 0x14)) + (f32) M2C_FIELD(arg0, s16 *, 0x10);
    *(f32 *)0xCC008000 = ((f32) M2C_FIELD(temp_r5, u16 *, 6) * M2C_FIELD(arg0, f32 *, 0x18)) + (f32) M2C_FIELD(arg0, s16 *, 0x12);
    *(f32 *)0xCC008000 = lbl_80351148;
    *(f32 *)0xCC008000 = lbl_80351148;
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x10);
    sp94 = temp_r0 ^ 0x80000000;
    sp90 = 0x43300000;
    *(f32 *)0xCC008000 = (f32) temp_r0;
    *(f32 *)0xCC008000 = ((f32) M2C_FIELD(M2C_FIELD(arg0, s32 **, 0xC), u16 *, 6) * M2C_FIELD(arg0, f32 *, 0x18)) + (f32) M2C_FIELD(arg0, s16 *, 0x12);
    *(f32 *)0xCC008000 = lbl_8035114C;
    *(f32 *)0xCC008000 = lbl_80351148;
}

void fn_80010D28(void) {
    HSD_StateInvalidate(-1);
}

s32 fn_80010D4C(s32 *arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = *arg0;
    return temp_r4 + M2C_FIELD((temp_r4 + (arg1 * 0xC)), s32 *, 0xC);
}

void fn_80010D64(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_801DB58C;
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s8 *, 4) = 0;
}

void fn_80010D80(void *arg0, void *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_801DB58C;
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, u8 *, 4) = (u8) M2C_FIELD(arg1, u8 *, 4);
    M2C_FIELD(arg0, u8 *, 4) = 0U;
}

s32 fn_80010DA8(s32 **arg0, s32 arg1) {
    s32 var_r31;

    var_r31 = 0;
loop_3:
    if (var_r31 < (s32) **arg0) {
        if (0 /* draft: did not compile */) {
            var_r31 += 1;
            goto loop_3;
        }
    }
    if (var_r31 == (s32) **arg0) {
        return 0;
    }
    return var_r31;
}

s32 fn_80010E3C(u8 *arg0, u8 *arg1) {
    u8 *var_r31;
    u8 *var_r30;
    u8 *temp_r4_2;
    u8 temp_r0;
    u8 temp_r3;
    s8 temp_r3_2;
    u8 temp_r4;
    u8 var_r3;

    var_r31 = arg1;
    var_r30 = arg0;
loop_11:
    temp_r3 = M2C_FIELD(var_r30, u8 *, 0);
    if ((s8) temp_r3 != 0) {
        temp_r4 = *var_r31;
        if ((s8) temp_r4 == 0) {
            goto loop_15;
        }
        if (((s8) temp_r3 == (s8) temp_r4) || ((s8) temp_r3 == 0x2E)) {
            var_r30 += 1;
            var_r31 += 1;
            goto loop_11;
        }
        if ((s8) temp_r3 == 0x2A) {
            temp_r0 = M2C_FIELD(var_r30, u8 *, 1);
            var_r30 += 1;
            if ((s8) temp_r0 == 0) {
                return 1;
            }
loop_9:
            if ((s8) *var_r31 == 0) {
                goto loop_15;
            }
            temp_r4_2 = var_r31;
            var_r31 += 1;
            if (fn_80010E3C(var_r30, temp_r4_2) != 0) {
                return 1;
            }
            goto loop_9;
        }
        goto loop_15;
    }
loop_15:
    temp_r3_2 = *var_r30;
    if ((s32) temp_r3_2 == 0x2A) {
        var_r30 += 1;
        goto loop_15;
    }
    var_r3 = 0;
    if (((s8) temp_r3_2 == 0) && (*var_r31 == 0)) {
        var_r3 = 1;
    }
    return (s32) var_r3;
}

void fn_80010F30(void) {
    fn_801000F0(0);
    fn_800FF658(1, 0);
}

void fn_80010F60(void) {
    fn_80100190();
    fn_80100C24(0);
    fn_80100DA0();
    fn_801010DC();
}

void fn_80010F90(void) {
    if ((s32) lbl_802BFD60 != 0) {
        lbl_8035041C = 0x280;
        lbl_8035041E = 0x1E0;
        lbl_80350420 = 0;
        lbl_80350422 = 0;
        return;
    }
    lbl_8035041C = 0x280;
    lbl_8035041E = 0x1E0;
    lbl_80350420 = 0;
    lbl_80350422 = 0;
}

void fn_80010FE4(void) {
    M2C_FIELD(&lbl_802BFD38, s32 *, 0) = 0;
    M2C_FIELD(&lbl_802BFD38, s32 *, 8) = 0;
    M2C_FIELD(&lbl_802BFD38, s32 *, 0x10) = 0;
    M2C_FIELD(&lbl_802BFD38, s32 *, 0x14) = 0;
    M2C_FIELD(&lbl_802BFD38, s32 *, 0x18) = 0;
    M2C_FIELD(&lbl_802BFD38, s32 *, 0x1C) = 0;
    M2C_FIELD(&lbl_802BFD38, s32 *, 0x20) = 0;
    M2C_FIELD(&lbl_802BFD38, s32 *, 0x24) = 0;
}

#pragma push
#pragma dont_inline on
void fn_80011010(void) {
    s32 sp8;
    s32 temp_r3;
    void *var_r6;

    fn_80008DBC();
    temp_r3 = M2C_FIELD(&lbl_802BFD60, s32 *, 0);
    lbl_80350438 = 0;
    M2C_FIELD(&lbl_802BFD60, s32 *, 4) = temp_r3;
    M2C_FIELD(&lbl_802BFD60, s32 *, 0) = 0;
    M2C_FIELD(&lbl_802BFD60, s32 *, 8) = 0;
    lbl_80350428 = 0x1338;
    fn_80010FE4();
    lbl_80350434 = 0;
    OSGetTime();
    OSTicksToCalendarTime(&sp8);
    lbl_803502D0 = &lbl_803502C8;
    lbl_803502C8 = sp8;
    var_r6 = get_up_vector_for_viewing_mtx((long)(0x88), (void *)(&lbl_803502C8), (float)(0), (float)(0));
    if (var_r6 != NULL) {
        var_r6 = fn_800A163C(0, M2C_FIELD(&lbl_802C0270, s32 *, 4));
    }
    lbl_8035043C = var_r6;
    M2C_FIELD(var_r6, f32 *, 0x48) = (f32) lbl_80351170;
    M2C_FIELD(var_r6, f32 *, 0x4C) = (f32) lbl_80351170;
    M2C_FIELD(lbl_8035043C, u8 *, 5) = (u8) M2C_FIELD(&lbl_801CB330, u8 *, 0x21);
    M2C_FIELD(lbl_8035043C, s32 *, 0x68) = 2;
    M2C_FIELD(lbl_8035043C, s32 *, 0x6C) = 1;
    M2C_FIELD(lbl_8035043C, u8 *, 4) = (u8) M2C_FIELD(&lbl_801CB330, u8 *, 0x20);
    M2C_FIELD(lbl_8035043C, u8 *, 6) = (u8) M2C_FIELD(&lbl_801CB330, u8 *, 0x22);
    M2C_FIELD(lbl_8035043C, u8 *, 7) = (u8) M2C_FIELD(&lbl_801CB330, u8 *, 0x23);
    M2C_FIELD(lbl_8035043C, u8 *, 8) = (u8) M2C_FIELD(&lbl_801CB330, u8 *, 0x3C);
    M2C_FIELD(lbl_8035043C, u8 *, 9) = (u8) M2C_FIELD(&lbl_801CB330, u8 *, 0x3D);
    M2C_FIELD(lbl_8035043C, u8 *, 0xA) = (u8) M2C_FIELD(&lbl_801CB330, u8 *, 0x3E);
    M2C_FIELD(lbl_8035043C, u8 *, 0xB) = (u8) M2C_FIELD(&lbl_801CB330, u8 *, 0x3F);
    M2C_FIELD(lbl_8035043C, s32 *, 0x74) = 0x50;
    M2C_FIELD(lbl_8035043C, u8 *, 0x10) = 1U;
    if ((u8) M2C_FIELD(lbl_8035043C, u8 *, 0x10) == 0) {
        M2C_FIELD(lbl_8035043C, s32 *, 0x58) = -1;
    }
}
#pragma pop

void fn_80011144(void) {
    lbl_80350438 = 0;
    lbl_80350424 = 0;
    lbl_8035042C = 0;
    lbl_80350418 = 0;
    lbl_8035041A = 0;
    fn_80010F90();
    fn_80013004();
    fn_8000F204();
}
