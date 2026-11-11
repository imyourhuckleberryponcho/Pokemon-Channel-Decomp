/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK OSGetTime(void *, void *);
M2C_UNK OSReport(void *, s32);
void *get_up_vector_for_viewing_mtx();
M2C_UNK fn_80005888(void *);
void *fn_80006A4C();
M2C_UNK fn_80006B08(void *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_80007C7C(void *, s32);
s32 *fn_80016C88(s32 *);
s32 fn_80016CB8(s32 *);
s32 fn_80016CEC(s32 *);
M2C_UNK fn_80016DA0(s32 *, s32 *);
M2C_UNK fn_80016E04(s32 *, s32 *);
M2C_UNK fn_8001E604(s32, s32);
M2C_UNK fn_80022B54(u32, void *, M2C_UNK, M2C_UNK);
M2C_UNK fn_80025408(void *);
M2C_UNK fn_800278E0(void *, s32, s32, M2C_UNK);
M2C_UNK fn_80027A34(void *);
M2C_UNK fn_80027A58(void *, M2C_UNK, M2C_UNK, s32, s32);
M2C_UNK fn_8002AF48(s32, s32 *, u8);
u8 fn_8002BB24(s32);
u8 *fn_80034700();
M2C_UNK fn_80034D88();
s32 fn_80038264(M2C_UNK);
u8 fn_80068F78();
s32 fn_80073D4C(void *);
M2C_UNK fn_8008085C(M2C_UNK, M2C_UNK);
M2C_UNK fn_8009BEEC(void *);
M2C_UNK fn_8009C9A4(void *, M2C_UNK, M2C_UNK, M2C_UNK, f32, f32, f32);
M2C_UNK fn_800A3730();
s32 *fn_800A71F8(void *, M2C_UNK);
void *fn_800A7294(void *, void *);
void *fn_800A7338();
M2C_UNK fn_800A8608(void *, s32, s32, M2C_UNK);
M2C_UNK fn_800AC3B4(s32 *, s32 *, M2C_UNK);
M2C_UNK OSTicksToCalendarTime(s32 *);
M2C_UNK GXDrawDone();
M2C_UNK HSD_ImageDescCopyFromEFB(M2C_UNK, M2C_UNK, u8, M2C_UNK);
M2C_UNK HSD_StateInvalidate(M2C_UNK);
M2C_UNK fn_800EF7E4();
M2C_UNK fn_800F0480(s32);
M2C_UNK HSD_LObjDeleteCurrentAll(M2C_UNK);
M2C_UNK fn_800F0984(M2C_UNK);
M2C_UNK HSD_CObjEraseScreen(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_800F24A4(s32 *);
M2C_UNK fn_800F29A8();
M2C_UNK HSD_CObjSetScissorx4(s32 *, s32, s32, s32, s32, void *);
M2C_UNK HSD_CObjSetViewportfx4(f32, f32, f32, f32, f32, f32);
M2C_UNK fn_800FAEF0(s32, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_800FF734(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_801000F0(M2C_UNK);
M2C_UNK fn_80100190();
M2C_UNK fn_80100C24(M2C_UNK);
M2C_UNK HSD_VISetConfigure(void *);
s32 __cvt_fp2unsigned(f32);
M2C_UNK fn_8014F5B4(M2C_UNK *, void *, s32, s32, s32, s32, s32, s32);
extern M2C_UNK lbl_80223318;
extern void *lbl_803504E8;
extern void *lbl_803504EC;
extern s32 lbl_803504F0;
extern s32 *lbl_803504F4;
extern s32 lbl_803504F8;
extern void *lbl_803504FC;
extern u32 lbl_80350500;
extern s32 lbl_8035050C;
extern u8 lbl_80350510;
extern s32 lbl_80350514;
extern s32 lbl_80350518;
extern void *lbl_80350554;
extern void *lbl_80350558;
extern u8 lbl_8035056D;
extern u8 lbl_8035056E;
extern u8 lbl_80350585;
extern u8 lbl_80350586;
extern s32 lbl_803517F8;
extern f32 lbl_803517FC;
extern f32 lbl_80351800;
extern f32 lbl_80351804;
extern f32 lbl_80351808;
extern f32 lbl_8035180C;
extern f32 lbl_80351810;
extern f32 lbl_80351814;
extern f32 lbl_80351818;
extern f32 lbl_8035181C;
extern f32 lbl_80351820;
extern f32 lbl_80351824;
extern s32 lbl_80352A74;
M2C_UNK OSDisableInterrupts();
M2C_UNK OSRestoreInterrupts();
M2C_UNK fn_800146F0(s32, M2C_UNK);
u32 fn_80014798(u8 *, M2C_UNK *);
M2C_UNK fn_80014C68(M2C_UNK);
M2C_UNK fn_80014C98();
M2C_UNK fn_800251EC(void *);
M2C_UNK fn_80028130(s32);
M2C_UNK fn_80034404();
u8 fn_80034554();
M2C_UNK fn_80034858();
M2C_UNK fn_80034C20();
M2C_UNK fn_80034C64();
u32 fn_80034CC8();
M2C_UNK fn_80034D20();
M2C_UNK fn_80034D24();
u8 fn_80035358();
M2C_UNK fn_80038038(M2C_UNK);
M2C_UNK fn_8007B0B4();
M2C_UNK fn_8007B1EC(M2C_UNK);
u32 PadGetButton(M2C_UNK);
s32 fn_800807CC(M2C_UNK);
M2C_UNK fn_800826C0(M2C_UNK);
M2C_UNK fn_8009BD80(u32, M2C_UNK);
M2C_UNK fn_800C5B7C(void *, M2C_UNK, M2C_UNK *);
s32 OSGetProgressiveMode();
M2C_UNK VIWaitForRetrace();
s32 VIGetDTVStatus();
M2C_UNK HSD_VISetUserPreRetraceCallback(M2C_UNK *);
M2C_UNK fn_80100DA0();
M2C_UNK HSD_VIWaitXFBFlushNoYield();
M2C_UNK HSD_VISetBlack(M2C_UNK);
extern M2C_UNK fn_800346C8;
extern M2C_UNK lbl_802C0248;
extern M2C_UNK lbl_8031EA64;
extern M2C_UNK *lbl_8034E94C;
extern M2C_UNK lbl_8034E970;
extern M2C_UNK lbl_8034E974;
extern M2C_UNK lbl_8034E97C;
extern s32 lbl_80350504;
extern u32 lbl_80350508;
extern s32 lbl_80350520;
extern u32 lbl_80350540;
extern s8 lbl_8035056C;
extern u8 lbl_80350587;
extern u8 lbl_80350588;
u32 fn_80034370(M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_802235D8;
extern u32 lbl_80350590;
void *fn_800A1444(u32);
void **fn_800A1618();
extern M2C_UNK lbl_802C0588;
extern M2C_UNK lbl_802C1388;
extern s32 lbl_8034E988;
extern void *lbl_80350594;
extern void *lbl_80350598;
s32 CARDProbeEx();
s32 fn_800D89A8();
u32 OSAllocFromHeap(s32, s32);
s32 fn_800DBF34(s32, u32, M2C_UNK);
M2C_UNK fn_801442A8();
extern s32 lbl_8034FE78;
s32 CARDMountAsync(s32, u32, M2C_UNK, M2C_UNK);
M2C_UNK OSFreeToHeap(s32);
s32 CARDUnmount(s32);
s32 fn_800DB5B0(s32);
s32 CARDCheckAsync(s32, M2C_UNK);
s32 fn_800DC8A8(s32);
s32 CARDFormatAsync(s32, M2C_UNK);
s32 fn_800DE314(s32);
s32 fn_800DE118(s32, M2C_UNK);
s32 fn_800DDBF0(s32);
s32 CARDDeleteAsync(s32, M2C_UNK);
s32 fn_800DE7A8(s32, s32, u8);
s32 fn_800DE730(s32, s32, u8, M2C_UNK);
s32 CARDGetResultCode(s32);
s32 CARDFreeBlocks(s32, s32 *, s32 *);
s32 CARDGetSerialNo(s32, s32 *);
extern s32 lbl_8035059C;

void fn_800359C4(void);
s32 fn_80036D88(void);
void main(s32 arg0, s32 arg1, M2C_UNK arg_sp0);
void *CreateMCard(void *arg0, s32 arg1);
s32 fn_800372E8(u32 arg0, u32 arg1, s32 arg2);
void method_probeMCard(void *arg0);
s32 method_getSectorSize(void *arg0);
s32 method_mountMCard(void *arg0);
s32 method_mountMCardAsync(void *arg0);
s32 method_unmountMCard(void *arg0);
void method_checkMCard(void *arg0);
void method_checkMCardAsync(void *arg0);
void method_formatMCard(void *arg0);
void method_formatMCardAsync(void *arg0);
void method_renameFile(void *arg0);
void method_renameFileAsync(void *arg0);
void method_deleteFile(void *arg0);
void method_deleteFileAsync(void *arg0);
void method_setAttr(void *arg0, s32 arg1);
void method_setAttrAsync(void *arg0, s32 arg1);
void method_getResultCode(void *arg0);
s32 fn_800378E4(void *arg0, s32 *arg1, s32 *arg2);
s32 method_getSerialNo(void *arg0, void *arg1);
void fn_800379BC(s32 arg1);

void fn_800359C4(void) { } /* draft: stub */

s32 fn_80036D88(void) {
    s32 var_r3;
    void *temp_r3;
    void *var_r3_2;

    if ((u32) M2C_FIELD(lbl_803504E8, u32 *, 0x10) != 0U) {
        return 1;
    }
    temp_r3 = fn_800A7338(M2C_FIELD(lbl_803504E8, s32 *, 0x278), 0);
    if (temp_r3 != NULL) {
        var_r3_2 = M2C_FIELD(temp_r3, void **, 0x1D4);
    } else {
        var_r3_2 = NULL;
    }
    if (var_r3_2 != NULL) {
        var_r3 = M2C_FIELD(var_r3_2, s32 *, 0x10);
    } else {
        var_r3 = 0;
    }
    return var_r3 != 0;
}

void main(s32 arg0, s32 arg1, M2C_UNK arg_sp0) { } /* draft: stub */

void *CreateMCard(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x4B0) = 0;
    if ((u32) lbl_80350590 == 0U) {
        lbl_80350590 = fn_80034370(0x6E7, &lbl_802235D8);
    }
    return arg0;
}

s32 fn_800372E8(u32 arg0, u32 arg1, s32 arg2) { return 0; } /* draft: stub */

void method_probeMCard(void *arg0) {
    /* draft: did not compile: M2C_FIELD(arg0, s32 *, 0xC) = CARDProbeEx(M2C_FIELD(arg0, s32 *, 0), arg0 + 8, arg0 + 4); */
}

s32 method_getSectorSize(void *arg0) {
    s32 temp_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 4) == 0) {
        /* draft: did not compile: M2C_FIELD(arg0, s32 *, 0xC) = fn_800D89A8(M2C_FIELD(arg0, s32 *, 0), arg0 + 4); */
        temp_r3 = M2C_FIELD(arg0, s32 *, 0xC);
        if (temp_r3 < 0) {
            return temp_r3;
        }
    }
    return M2C_FIELD(arg0, s32 *, 4);
}

s32 method_mountMCard(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x10) == 0U) {
        M2C_FIELD(arg0, u32 *, 0x10) = OSAllocFromHeap(lbl_8034FE78, 0xA000);
    }
    M2C_FIELD(arg0, s32 *, 0xC) = fn_800DBF34(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, u32 *, 0x10), 0);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x4B0) == 0U) {
        M2C_FIELD(arg0, u32 *, 0x4B0) = OSAllocFromHeap(lbl_8034FE78, M2C_FIELD(arg0, s32 *, 4));
    }
    /* draft: did not compile: fn_801442A8(arg0 + 0x14, M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, u32 *, 0x4B0)); */
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 method_mountMCardAsync(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x10) == 0U) {
        M2C_FIELD(arg0, u32 *, 0x10) = OSAllocFromHeap(lbl_8034FE78, 0xA000);
    }
    M2C_FIELD(arg0, s32 *, 0xC) = CARDMountAsync(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, u32 *, 0x10), 0, 0);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x4B0) == 0U) {
        M2C_FIELD(arg0, u32 *, 0x4B0) = OSAllocFromHeap(lbl_8034FE78, M2C_FIELD(arg0, s32 *, 4));
    }
    /* draft: did not compile: fn_801442A8(arg0 + 0x14, M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, u32 *, 0x4B0)); */
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 method_unmountMCard(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = CARDUnmount(M2C_FIELD(arg0, s32 *, 0));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x10) != 0U) {
        OSFreeToHeap(lbl_8034FE78);
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x4B0) != 0U) {
        OSFreeToHeap(lbl_8034FE78);
    }
    M2C_FIELD(arg0, u32 *, 0x4B0) = 0U;
    M2C_FIELD(arg0, u32 *, 0x10) = 0U;
    return M2C_FIELD(arg0, s32 *, 0xC);
}

void method_checkMCard(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = fn_800DB5B0(M2C_FIELD(arg0, s32 *, 0));
}

void method_checkMCardAsync(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = CARDCheckAsync(M2C_FIELD(arg0, s32 *, 0), 0);
}

void method_formatMCard(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = fn_800DC8A8(M2C_FIELD(arg0, s32 *, 0));
}

void method_formatMCardAsync(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = CARDFormatAsync(M2C_FIELD(arg0, s32 *, 0), 0);
}

void method_renameFile(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = fn_800DE314(M2C_FIELD(arg0, s32 *, 0));
}

void method_renameFileAsync(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = fn_800DE118(M2C_FIELD(arg0, s32 *, 0), 0);
}

void method_deleteFile(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = fn_800DDBF0(M2C_FIELD(arg0, s32 *, 0));
}

void method_deleteFileAsync(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = CARDDeleteAsync(M2C_FIELD(arg0, s32 *, 0), 0);
}

void method_setAttr(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = fn_800DE7A8(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 0x34), (u8) (arg1 | 4));
}

void method_setAttrAsync(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = fn_800DE730(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 0x34), (u8) (arg1 | 4), 0);
}

void method_getResultCode(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = CARDGetResultCode(M2C_FIELD(arg0, s32 *, 0));
}

s32 fn_800378E4(void *arg0, s32 *arg1, s32 *arg2) {
    s32 spC;
    s32 sp8;

    M2C_FIELD(arg0, s32 *, 0xC) = CARDFreeBlocks(M2C_FIELD(arg0, s32 *, 0), &spC, &sp8);
    if (arg1 != NULL) {
        *arg1 = spC;
    }
    if (arg2 != NULL) {
        *arg2 = sp8;
    }
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 method_getSerialNo(void *arg0, void *arg1) {
    s32 spC;
    s32 sp8;

    M2C_FIELD(arg0, s32 *, 0xC) = CARDGetSerialNo(M2C_FIELD(arg0, s32 *, 0), &sp8);
    if (arg1 != NULL) {
        M2C_FIELD(arg1, s32 *, 4) = spC;
        M2C_FIELD(arg1, s32 *, 0) = sp8;
    }
    sp8 = M2C_FIELD(arg0, s32 *, 0xC);
    return sp8;}

void fn_800379BC(s32 arg1) {
    lbl_8035059C = arg1;
}
