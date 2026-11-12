/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

extern s32 lbl_80350798;
extern void *lbl_8035079C;
s32 fn_800AB970();
M2C_UNK OSReport(M2C_UNK *, M2C_UNK);
extern M2C_UNK lbl_8022ABC8;
extern u32 lbl_80350790;
extern u32 lbl_80350794;
M2C_UNK GXSetVtxDesc(M2C_UNK, M2C_UNK);
M2C_UNK fn_800E0804();
M2C_UNK GXSetVtxAttrFmt(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXSetTexCoordGen2(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_800E1314(M2C_UNK);
M2C_UNK GXBegin(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_800E1D1C(M2C_UNK);
M2C_UNK fn_800E2CA4(M2C_UNK);
M2C_UNK GXSetChanCtrl(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXInitTexObj(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXLoadTexObj(M2C_UNK *, M2C_UNK);
M2C_UNK GXSetTevOp(M2C_UNK, M2C_UNK);
M2C_UNK fn_800E48A0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_800E48F4(M2C_UNK, M2C_UNK, s32, u8, u8, u8, M2C_UNK, M2C_UNK);
M2C_UNK GXSetTevOrder(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_800E4B50(M2C_UNK);
M2C_UNK fn_800E4B80(M2C_UNK, s32 *, f32, f32, f32, f32);
M2C_UNK GXSetBlendMode(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXSetColorUpdate(s32);
M2C_UNK GXSetAlphaUpdate(M2C_UNK);
M2C_UNK GXSetZMode(M2C_UNK, M2C_UNK, s32);
M2C_UNK fn_800E5144(M2C_UNK);
M2C_UNK GXLoadPosMtxImm(M2C_UNK *, M2C_UNK);
M2C_UNK GXSetCurrentMtx(M2C_UNK);
M2C_UNK HSD_StateInvalidate(M2C_UNK);
extern M2C_UNK lbl_8022AF80;
extern M2C_UNK lbl_802A9F68;
extern f32 lbl_80351CB8;
f32 fn_800F39E8(void *);
f32 fn_800F3A10(void *);
s32 HSD_CObjGetProjectionType(void *, f32);
f64 Tan(f32, f32);
extern f64 lbl_80351CC0;
extern f32 lbl_80351CC8;
extern f32 lbl_80351CCC;
M2C_UNK LCDisable();
M2C_UNK LCEnable();
M2C_UNK fn_800C4D08(s32, s32, s32);
M2C_UNK fn_800C4DB4(s32, s32);
M2C_UNK fn_800C4E60(M2C_UNK);
extern M2C_UNK lbl_802CF530;
M2C_UNK OSResumeThread(s32);
M2C_UNK OSCreateAlarm();
s32 OSDisableInterrupts();
M2C_UNK OSRestoreInterrupts(s32);
M2C_UNK OSSuspendThread(s32);
u32 OSGetTick();
s32 fn_80136408();
s32 fn_80136498(u8, u8 *);
s32 GBARead(u8, u32 *, u8 *);
s32 GBAWrite();
s32 fn_800254AC(M2C_UNK *, M2C_UNK *);
M2C_UNK DVDClose(M2C_UNK *);
s32 DVDReadPrio(M2C_UNK *, s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK memmove(s32, s32, u32);
M2C_UNK strcat(M2C_UNK *, s32);
M2C_UNK strcpy(M2C_UNK *, M2C_UNK *);
extern M2C_UNK lbl_8022B564;
extern M2C_UNK lbl_8022B678;
extern s32 lbl_803507A0;
extern s32 lbl_803507A4;
extern s32 lbl_803507A8;
extern s32 lbl_803507AC;
M2C_UNK fn_800C6F08(void *, void *, M2C_UNK);
u32 OSAllocFromHeap(s32, s32);
extern s32 lbl_8034FE78;
M2C_UNK OSFreeToHeap(s32);
M2C_UNK hsdInitClassInfo(M2C_UNK *, M2C_UNK *, void *, void *, M2C_UNK, M2C_UNK);
extern M2C_UNK fn_800AD97C;
extern M2C_UNK lbl_8022B688;
extern M2C_UNK lbl_802A8AA0;

s32 fn_800ABBE4(s32 arg0, s32 arg1);
void fn_800ABC50(s32 arg0);
void fn_800ABC64(s32 arg0, s32 arg1, s32 arg2);
s32 fn_800ABCC4(s32 arg0);
void fn_800ABFD4(void *arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4);
void fn_800AC3B4(void *arg0, void *arg1, s32 arg2);
void fn_800AC54C(void *arg0, void *arg1, s32 arg2, s32 arg3, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4);
void fn_800AC6B8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0);
s32 fn_800ACB0C(u32 arg0);
u32 fn_800ACB24(u8 *arg0, u32 arg1);
u32 fn_800ACB68(u8 *arg0, u32 arg1, u32 arg2);
void fn_800ACBA4(void);
void fn_800ACC6C(void *arg0, u8 arg1);
void fn_800ACC8C(s32 arg0);
void fn_800ACCB0(s32 arg0, s32 arg2, s32 arg3);
s32 fn_800ACD30(void *arg0, u32 arg1, s32 arg2);
s32 fn_800ACDB4(void *arg0, M2C_UNK arg_sp0);
void fn_800AD41C(void);
void fn_800AD518(void *arg0);
void fn_800AD554(void *arg0, s8 arg1, void *arg2, u32 arg3, void *arg4, s8 arg5, s32 arg6, M2C_UNK arg_sp0);
void CardEInit(void);
void CardECleanup(void);
void fn_800AD920(void);

s32 fn_800ABBE4(s32 arg0, s32 arg1) {
    s32 temp_r7;
    s32 var_ctr;
    s32 var_r3;
    void *var_r5;

    temp_r7 = (arg0 + 0x1F) & 0xFFFFFFE0;
    var_r5 = lbl_8035079C;
    var_r3 = 0;
    var_ctr = lbl_80350798;
    if ((s32) lbl_80350798 > 0) {
loop_1:
        if ((s32) M2C_FIELD(var_r5, s32 *, 0) < 0) {
            M2C_FIELD(var_r5, s32 *, 0) = (s32) ((arg1 & 0xFFFFFFE0) - temp_r7);
            M2C_FIELD(temp_r7, s32 *, 0) = 0;
            M2C_FIELD(temp_r7, s32 *, 4) = 0;
            M2C_FIELD(temp_r7, s32 *, 8) = (s32) M2C_FIELD(var_r5, s32 *, 0);
            M2C_FIELD(var_r5, s32 *, 4) = temp_r7;
            M2C_FIELD(var_r5, s32 *, 8) = 0;
            return var_r3;
        }
        /* draft: did not compile: var_r5 += 0xC; */
        var_r3 += 1;
        var_ctr -= 1;
        if (var_ctr == 0) {
            /* Duplicate return node #4. Try simplifying control flow for better match */
            return -1;
        }
        goto loop_1;
    }
    return -1;
}

void fn_800ABC50(s32 arg0) {
    /* draft: did not compile: *(lbl_8035079C + (arg0 * 0xC)) = -1; */
}

void fn_800ABC64(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r4;
    s32 temp_r6;
    void *temp_r31;

    temp_r6 = arg2 & 0xFFFFFFE0;
    temp_r4 = (arg1 + 0x1F) & 0xFFFFFFE0;
    M2C_FIELD(temp_r4, s32 *, 8) = (s32) (temp_r6 - temp_r4);
    /* draft: did not compile: temp_r31 = lbl_8035079C + (arg0 * 0xC); */
    M2C_FIELD(temp_r31, s32 *, 0) = (s32) (M2C_FIELD(temp_r31, s32 *, 0) + M2C_FIELD(temp_r4, s32 *, 8));
    M2C_FIELD(temp_r31, s32 *, 4) = fn_800AB970(M2C_FIELD(temp_r31, s32 *, 4), temp_r4, lbl_8035079C, temp_r6);
}

s32 fn_800ABCC4(s32 arg0) {
    u32 *temp_r3;
    u32 var_r10;
    u32 *temp_r3_3;
    u32 *var_r5;
    u32 *var_r9;
    u8 temp_r5;
    void *temp_r9;
    s32 var_r11;

    var_r10 = 0;
    var_r11 = 0;
    if ((u32) lbl_8035079C == 0U) {
        OSReport(&lbl_8022ABC8, 0x383);
        goto block_55;
    }
    if ((arg0 < 0) || (arg0 >= (s32) lbl_80350798)) {
        OSReport(&lbl_8022ABC8 + 0x28, 0x384);
        goto block_55;
    }
    /* draft: did not compile: temp_r9 = lbl_8035079C + (arg0 * 0xC); */
    if ((M2C_FIELD(temp_r9, s32 *, 0)) < 0) {
        OSReport(&lbl_8022ABC8 + 0x60, 0x387);
        goto block_55;
    }
    temp_r3 = M2C_FIELD(temp_r9, u32 **, 8);
    if ((temp_r3 != NULL) && ((u32) *temp_r3 != 0U)) {
        OSReport(&lbl_8022ABC8 + 0x8C, 0x389);
        goto block_55;
    }
    var_r5 = temp_r3;
loop_27:
    if (var_r5 == NULL) {
        var_r9 = M2C_FIELD(temp_r9, u32 **, 4);
        if ((var_r9 != NULL) && ((u32) *var_r9 != 0U)) {
            OSReport(&lbl_8022ABC8 + 0x250, 0x39B);
            goto block_55;
        }
loop_51:
        if (var_r9 == NULL) {
            if (var_r10 != (M2C_FIELD(temp_r9, s32 *, 0))) {
                OSReport(&lbl_8022ABC8 + 0x2F8, 0x3AE);
                goto block_55;
            }
            return var_r11;
        }
        if (0 /* draft: did not compile */) {
            OSReport(&lbl_8022ABC8 + 0xDC, 0x39E);
            goto block_55;
        }
        if ((s32) var_r9 & 0x1F) {
            OSReport(&lbl_8022ABC8 + 0x11C, 0x39F);
            goto block_55;
        }
        if (0 /* draft: did not compile */) {
            OSReport(&lbl_8022ABC8 + 0x154, 0x3A0);
            goto block_55;
        }
        temp_r5 = M2C_FIELD(var_r9, u32 *, 8);
        if (temp_r5 < 0x40U) {
            OSReport(&lbl_8022ABC8 + 0x1A0, 0x3A1);
            goto block_55;
        }
        if (temp_r5 & 0x1F) {
            OSReport(&lbl_8022ABC8 + 0x1D4, 0x3A2);
            goto block_55;
        }
        if (((M2C_FIELD(var_r9, u32 **, 4)) != NULL) && ((void *) (var_r9 + temp_r5) >= (M2C_FIELD(var_r9, u32 **, 4)))) {
            OSReport(&lbl_8022ABC8 + 0x298, 0x3A3);
            goto block_55;
        }
        var_r10 += temp_r5;
        var_r11 = (temp_r5 + var_r11) - 0x20;
        if ((var_r10 <= 0) || (var_r10 > (M2C_FIELD(temp_r9, s32 *, 0)))) {
            OSReport(&lbl_8022ABC8 + 0x214, 0x3A7);
            goto block_55;
        }
        var_r9 = (M2C_FIELD(var_r9, u32 **, 4));
        goto loop_51;
    }
    if (0 /* draft: did not compile */) {
        OSReport(&lbl_8022ABC8 + 0xDC, 0x38C);
        goto block_55;
    }
    if ((s32) var_r5 & 0x1F) {
        OSReport(&lbl_8022ABC8 + 0x11C, 0x38D);
        goto block_55;
    }
    temp_r3_3 = M2C_FIELD(var_r5, u32 **, 4);
    if (0 /* draft: did not compile */) {
        OSReport(&lbl_8022ABC8 + 0x154, 0x38E);
        goto block_55;
    }
    if ((M2C_FIELD(var_r5, u32 *, 8)) < 0x40U) {
        OSReport(&lbl_8022ABC8 + 0x1A0, 0x38F);
        goto block_55;
    }
    if ((M2C_FIELD(var_r5, u32 *, 8)) & 0x1F) {
        OSReport(&lbl_8022ABC8 + 0x1D4, 0x390);
        goto block_55;
    }
    var_r10 += (M2C_FIELD(var_r5, u32 *, 8));
    if ((var_r10 <= 0) || (var_r10 > (M2C_FIELD(temp_r9, s32 *, 0)))) {
        OSReport(&lbl_8022ABC8 + 0x214, 0x393);
block_55:
        return -1;
    }
    var_r5 = temp_r3_3;
    goto loop_27;
}

void fn_800ABFD4(void *arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4) {
    M2C_UNK spC;
    s32 sp8;
    u8 temp_r6;
    u8 temp_r7;
    u8 temp_r8;

    if (((u8) M2C_FIELD(arg0, u8 *, 3) != 0) || (arg1 != 0)) {
        if (arg1 != 0) {
            GXInitTexObj(&spC, &lbl_8022AF80, 4, 4, 0x11, 1, 1, 0);
            GXLoadTexObj(&spC, 0);
            fn_800E1314(1);
            GXSetTexCoordGen2(0, 1, 4, 0x3C, 0, 0x7D);
            fn_800E4B50(1);
            GXSetTevOrder(0, 0, 0, 4);
            GXSetTevOp(0, 4);
            fn_800E48F4((long)(2), (long)(0x11), (long)(arg2), (unsigned char)(0), (unsigned char)(0), (unsigned char)(0), (long)(0), (long)(0));
        } else {
            fn_800E1314(0);
            fn_800E4B50(1);
            GXSetTevOrder(0, 0xFF, 0xFF, 4);
            GXSetTevOp(0, 4);
        }
        fn_800E1D1C(0);
        fn_800E48A0(7, 0, 1, 7, 0);
        fn_800E5144(0);
        GXSetZMode(1, 7, arg1 != 0);
        GXSetBlendMode(1, 4, 5, 3);
        GXSetColorUpdate(M2C_FIELD(arg0, u8 *, 3) != 0);
        GXSetAlphaUpdate(0);
        fn_800E2CA4(1);
        GXSetChanCtrl(4, 0, 0, 1, 0, 0, 2);
        if ((u8) M2C_FIELD(arg0, u8 *, 3) != 0) {
            sp8 = M2C_FIELD(arg0, s32 *, 0);
            fn_800E4B80(0, &sp8, lbl_80351CB8, lbl_80351CB8, lbl_80351CB8, lbl_80351CB8);
        }
        fn_800E0804();
        GXSetVtxAttrFmt(0, 9, 1, 4, 0);
        GXSetVtxAttrFmt(0, 0xB, 1, 5, 0);
        GXSetVtxAttrFmt(0, 0xD, 1, 0, 0);
        *(f32 *)0xCC008000 = farg2;
        GXLoadPosMtxImm(&lbl_802A9F68, 0);
        GXSetCurrentMtx(0);
        GXSetVtxDesc(9, 1);
        GXSetVtxDesc(0xB, 1);
        GXSetVtxDesc(0xD, 1);
        GXBegin(0x80, 0, 4);
        *(f32 *)0xCC008000 = farg0;
        *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg0, s32 *, 0);
        *(f32 *)0xCC008000 = farg4;
        *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg0, u8 *, 1);
        *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg0, u8 *, 2);
        *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg0, u8 *, 3);
        *(f32 *)0xCC008000 = 0;
        *(f32 *)0xCC008000 = 0;
        *(f32 *)0xCC008000 = farg3;
        *(f32 *)0xCC008000 = farg0;
        *(f32 *)0xCC008000 = farg4;
        *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg0, s32 *, 0);
        *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg0, u8 *, 1);
        *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg0, u8 *, 2);
        *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg0, u8 *, 3);
        *(f32 *)0xCC008000 = 1;
        *(f32 *)0xCC008000 = 0;
        *(f32 *)0xCC008000 = farg3;
        *(f32 *)0xCC008000 = farg1;
        *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg0, s32 *, 0);
        *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg0, u8 *, 1);
        *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg0, u8 *, 2);
        *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg0, u8 *, 3);
        *(f32 *)0xCC008000 = farg4;
        *(f32 *)0xCC008000 = 1;
        *(f32 *)0xCC008000 = 1;
        *(f32 *)0xCC008000 = farg2;
        *(f32 *)0xCC008000 = farg1;
        *(f32 *)0xCC008000 = farg4;
        temp_r8 = M2C_FIELD(arg0, u8 *, 3);
        temp_r7 = M2C_FIELD(arg0, u8 *, 2);
        temp_r6 = M2C_FIELD(arg0, u8 *, 1);
        *(f32 *)0xCC008000 = (u8) M2C_FIELD(arg0, s32 *, 0);
        *(f32 *)0xCC008000 = temp_r6;
        *(f32 *)0xCC008000 = temp_r7;
        *(f32 *)0xCC008000 = temp_r8;
        *(f32 *)0xCC008000 = 0;
        *(f32 *)0xCC008000 = 1;
        fn_800E48F4(0, 0x11, 0, temp_r6, temp_r7, temp_r8, 1, 0);
        GXSetColorUpdate(1);
        HSD_StateInvalidate(-1);
    }
}

void fn_800AC3B4(void *arg0, void *arg1, s32 arg2) {
    u32 saved_reg_f30;
    u32 saved_reg_f29;
    u32 saved_reg_f28;
    u32 saved_reg_f27;
    s32 sp8;
    f32 temp_f1;
    f32 temp_f31;
    f32 temp_f31_2;
    f32 temp_f4;
    f32 var_f30;
    f32 var_f29;
    f32 var_f28;
    f32 var_f27;
    s32 temp_r3;

    var_f27 = saved_reg_f27;
    var_f28 = saved_reg_f28;
    var_f29 = saved_reg_f29;
    var_f30 = saved_reg_f30;
    if (((u8) M2C_FIELD(arg1, u8 *, 3) != 0) || (arg2 != 0)) {
        temp_f31 = fn_800F3A10(arg0);
        temp_f1 = fn_800F39E8(arg0);
        temp_f1 += temp_f31;
        temp_f31_2 = (f32) (lbl_80351CC0 * (f64) temp_f1);
        temp_r3 = HSD_CObjGetProjectionType(arg0, temp_f1);
        switch (temp_r3) {                          /* irregular */
        case 1:
            var_f28 = temp_f31_2 * (f32) Tan(lbl_80351CC8 * (lbl_80351CCC * M2C_FIELD(arg0, f32 *, 0x40)), lbl_80351CC8);
            var_f29 = var_f28 * M2C_FIELD(arg0, f32 *, 0x44);
            var_f27 = -var_f28;
            var_f30 = -var_f29;
            break;
        case 2:
            temp_f4 = temp_f31_2 / fn_800F39E8(arg0);
            var_f29 = temp_f4 * M2C_FIELD(arg0, f32 *, 0x4C);
            var_f30 = temp_f4 * M2C_FIELD(arg0, f32 *, 0x48);
            var_f28 = temp_f4 * M2C_FIELD(arg0, f32 *, 0x40);
            var_f27 = temp_f4 * M2C_FIELD(arg0, f32 *, 0x44);
            break;
        case 3:
            var_f29 = M2C_FIELD(arg0, f32 *, 0x4C);
            var_f30 = M2C_FIELD(arg0, f32 *, 0x48);
            var_f28 = M2C_FIELD(arg0, f32 *, 0x40);
            var_f27 = M2C_FIELD(arg0, f32 *, 0x44);
            break;
        }
        sp8 = M2C_FIELD(arg1, s32 *, 0);
        fn_800ABFD4(&sp8, arg2, 0xFFFFFF, var_f28, var_f27, var_f30, var_f29, -temp_f31_2);
    }
}

void fn_800AC54C(void *arg0, void *arg1, s32 arg2, s32 arg3, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4) {
    s32 sp8;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f31;
    f32 temp_f31_2;
    f32 var_f26;
    f32 var_f29;
    f32 var_f28;
    f32 var_f27;
    s32 temp_r3;

    var_f28 = farg2;
    var_f27 = farg1;
    var_f29 = farg3;
    var_f26 = farg0;
    if (((s8) M2C_FIELD(arg1, s8 *, 3) != 0) || (arg2 != 0)) {
        temp_f31 = fn_800F3A10(arg0);
        temp_f1 = fn_800F39E8(arg0);
        temp_f1 += temp_f31;
        temp_f31_2 = (f32) (lbl_80351CC0 * (f64) temp_f1);
        temp_r3 = HSD_CObjGetProjectionType(arg0, temp_f1);
        if (temp_r3 != 3) {
            if (temp_r3 < 3) {
                if (temp_r3 < 1) {

                } else {
                    temp_f0 = temp_f31_2 / farg4;
                    var_f29 *= temp_f0;
                    var_f28 *= temp_f0;
                    var_f26 *= temp_f0;
                    var_f27 *= temp_f0;
                }
            }
        } else {
            var_f29 = M2C_FIELD(arg0, f32 *, 0x4C);
            var_f28 = M2C_FIELD(arg0, f32 *, 0x48);
            var_f26 = M2C_FIELD(arg0, f32 *, 0x40);
            var_f27 = M2C_FIELD(arg0, f32 *, 0x44);
        }
        sp8 = M2C_FIELD(arg1, s32 *, 0);
        fn_800ABFD4(&sp8, arg2, arg3, var_f26, var_f27, var_f28, var_f29, -temp_f31_2);
    }
}

void fn_800AC6B8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0) { } /* draft: stub */

s32 fn_800ACB0C(u32 arg0) {
    return (((((arg0 >> 0x18U) | ((arg0 >> 8U) & 0xFF00 & ~0xFF)) & ~0xFF0000) | ((arg0 << 8) & 0xFF0000)) & ~0xFF000000) | (arg0 << 0x18);
}

u32 fn_800ACB24(u8 *arg0, u32 arg1) {
    s32 temp_r0;
    u32 var_r7;
    u32 var_r8;
    u8 *var_r3;

    var_r3 = arg0;
    var_r8 = 0U;
    var_r7 = 0xAA478422;
    do {
        var_r8 += 1;
        temp_r0 = var_r7 ^ *var_r3;
        var_r3 += 1;
        var_r7 = (var_r7 >> 8U) ^ *(&lbl_802CF530 + ((temp_r0 * 4) & 0x3FC));
    } while (var_r8 != arg1);
    return var_r7;
}

u32 fn_800ACB68(u8 *arg0, u32 arg1, u32 arg2) {
    s32 temp_r0;
    u32 var_r5;
    u32 var_r8;
    u8 *var_r3;

    var_r3 = arg0;
    var_r5 = arg2;
    var_r8 = 0U;
    do {
        var_r8 += 1;
        temp_r0 = var_r5 ^ *var_r3;
        var_r3 += 1;
        var_r5 = (var_r5 >> 8U) ^ *(&lbl_802CF530 + ((temp_r0 * 4) & 0x3FC));
    } while (var_r8 != arg1);
    return var_r5;
}

void fn_800ACBA4(void) {
    s32 var_ctr;
    u32 *var_r4;
    u32 var_r3;
    u32 var_r3_2;
    u32 var_r3_3;
    u32 var_r3_4;
    u32 var_r3_5;
    u32 var_r3_6;
    u32 var_r3_7;
    u32 var_r3_8;
    u32 var_r5;

    /* draft: did not compile: var_r4 = &lbl_802CF530; */
    var_r5 = 0;
    var_ctr = 0x100;
    do {
        var_r3 = var_r5 >> 1U;
        if (var_r5 & 1) {
            var_r3 = var_r3 ^ 0xEDB80000 ^ 0x8320;
        }
        var_r3_2 = var_r3 >> 1U;
        if (var_r3 & 1) {
            var_r3_2 = var_r3_2 ^ 0xEDB80000 ^ 0x8320;
        }
        var_r3_3 = var_r3_2 >> 1U;
        if (var_r3_2 & 1) {
            var_r3_3 = var_r3_3 ^ 0xEDB80000 ^ 0x8320;
        }
        var_r3_4 = var_r3_3 >> 1U;
        if (var_r3_3 & 1) {
            var_r3_4 = var_r3_4 ^ 0xEDB80000 ^ 0x8320;
        }
        var_r3_5 = var_r3_4 >> 1U;
        if (var_r3_4 & 1) {
            var_r3_5 = var_r3_5 ^ 0xEDB80000 ^ 0x8320;
        }
        var_r3_6 = var_r3_5 >> 1U;
        if (var_r3_5 & 1) {
            var_r3_6 = var_r3_6 ^ 0xEDB80000 ^ 0x8320;
        }
        var_r3_7 = var_r3_6 >> 1U;
        if (var_r3_6 & 1) {
            var_r3_7 = var_r3_7 ^ 0xEDB80000 ^ 0x8320;
        }
        var_r3_8 = var_r3_7 >> 1U;
        if (var_r3_7 & 1) {
            var_r3_8 = var_r3_8 ^ 0xEDB80000 ^ 0x8320;
        }
        *var_r4 = var_r3_8;
        var_r4 += 4;
        var_r5 += 1;
        var_ctr -= 1;
    } while (var_ctr != 0);
}

void fn_800ACC6C(void *arg0, u8 arg1) {
    M2C_FIELD(arg0, u8 *, 0) = arg1;
    M2C_FIELD(arg0, u8 *, 1) = (u8) (arg1 >> 8U);
    M2C_FIELD(arg0, u8 *, 2) = (u8) (arg1 >> 0x10U);
    M2C_FIELD(arg0, s8 *, 3) = (s8) (arg1 >> 0x18U);
}

void fn_800ACC8C(s32 arg0) {
    OSResumeThread(arg0 + 0x28);
}

void fn_800ACCB0(s32 arg0, s32 arg2, s32 arg3) {
    u8 temp_r31;

    OSCreateAlarm();
    temp_r31 = OSDisableInterrupts();
    OSSetAlarm(arg0, fn_800ACC8C, arg2, arg3, fn_800ACC8C);
    OSSuspendThread(arg0 + 0x28);
    OSRestoreInterrupts(temp_r31);
}

#pragma push
#pragma peephole off
s32 fn_800ACD30(void *arg0, u32 arg1, s32 arg2) {
    s32 temp_r6;

    if (arg1 == (u32) M2C_FIELD(arg0, u32 *, 0x350)) {
        return 1;
    }
    if (arg2 & 0x30) {
        return 0;
    }
    temp_r6 = M2C_FIELD(arg0, s32 *, 0x34C) ^ arg1;
    if ((u32) (temp_r6 + 0xE0000000) == 0U) {
        M2C_FIELD(arg0, s16 *, 0x348) = 0x100;
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return 2;
    }
    if ((u32) (temp_r6 + 0xFFE00000) == 0U) {
        M2C_FIELD(arg0, s16 *, 0x348) = 0x200;
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return 2;
    }
    M2C_FIELD(arg0, s16 *, 0x348) = 0;
    if (temp_r6 & 0xDFDFDFDF) {
        return 0;
    }
    return 2;
}
#pragma pop

s32 fn_800ACDB4(void *arg0, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

void fn_800AD41C(void) {
    s32 sp3C;
    M2C_UNK sp44;
    M2C_UNK sp8;
    s32 temp_r3;
    s32 temp_r3_2;

    if (((s32) lbl_803507A4 == 0) && (strcpy(&sp44, &lbl_8022B678), strcat(&sp44, *(&lbl_8022B564 + (lbl_803507A8 * 4))), ((fn_800254AC(&sp44, &sp8) == 0) == 0)) && (sp3C != 0U) && (temp_r3 = DVDReadPrio(&sp8, lbl_803507A0, (sp3C + 0x1F) & 0xFFFFFFE0, 0, 2), ((temp_r3 < 0) == 0))) {
        if ((u32) temp_r3 < sp3C) {
            return;
        }
        DVDClose(&sp8);
        memmove(lbl_803507A0 + 0x34, lbl_803507A0, sp3C);
        /* draft: did not compile: memset(lbl_803507A0, 0, 0x34); */
        temp_r3_2 = sp3C + 0x34;
        /* draft: did not compile: memset(lbl_803507A0 + temp_r3_2, 0, lbl_803507AC - temp_r3_2); */
        lbl_803507A4 = 1;
    }
}

void fn_800AD518(void *arg0) {
    fn_800AD41C();
    fn_800ACDB4((void *)(arg0), (long)(0));
    M2C_FIELD(arg0, s8 *, 0x346) = 1;
}

void fn_800AD554(void *arg0, s8 arg1, void *arg2, u32 arg3, void *arg4, s8 arg5, s32 arg6, M2C_UNK arg_sp0) { } /* draft: stub */

void CardEInit(void) {
    s32 sp3C;
    M2C_UNK sp44;
    M2C_UNK sp8;
    s32 temp_r4;
    u32 temp_r3;

    fn_800ACBA4();
    lbl_803507A8 = OSGetTick() % 69;
    strcpy((long *)(&sp44), (long *)(&lbl_8022B678));
    strcat(&sp44, *(&lbl_8022B564 + (lbl_803507A8 * 4)));
    if ((fn_800254AC(&sp44, &sp8) != 0) && (sp3C != 0U)) {
        temp_r4 = (sp3C + 0x5B) & 0xFFFFFFE0;
        lbl_803507AC = temp_r4;
        temp_r3 = OSAllocFromHeap(lbl_8034FE78, temp_r4);
        lbl_803507A0 = temp_r3;
        if (temp_r3 != 0U) {
            memset((void *)(0), (int)(lbl_803507AC), (unsigned long)(0));
            DVDClose(&sp8);
        }
    }
}

void CardECleanup(void) {
    if ((u32) lbl_803507A0 != 0U) {
        OSFreeToHeap(lbl_8034FE78);
        lbl_803507A0 = 0U;
        lbl_803507A4 = 0;
    }
}

void fn_800AD920(void) {
    M2C_FIELD(&lbl_8022B688, M2C_UNK **, 0x44) = &fn_800AD97C;
    hsdInitClassInfo(&lbl_8022B688, &lbl_802A8AA0, &lbl_8022B688 + 0x54, &lbl_8022B688 + 0x70, 0x54, 0x20);
}
