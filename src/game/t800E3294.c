/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

extern M2C_UNK lbl_80350058;
extern f32 lbl_80351D70;
extern f32 lbl_80351D80;
extern f32 lbl_80351D84;
extern f32 lbl_80351D88;
extern f32 lbl_80351D8C;
extern f32 lbl_80351D90;
extern f32 lbl_80351D94;
extern void *gx;
extern M2C_UNK lbl_80350020;
extern M2C_UNK lbl_80350028;
extern M2C_UNK lbl_80350030;
extern M2C_UNK lbl_80350038;
extern M2C_UNK lbl_80350040;
extern M2C_UNK lbl_80350048;
extern M2C_UNK lbl_80350050;
extern f32 lbl_80351D98;
extern M2C_UNK lbl_802A7FD8;

void GXInitTexObjLOD(void *arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4, s32 arg5, f32 farg0, f32 farg1, f32 farg2);
s32 fn_800E3428(void *arg0);
void fn_800E3430(void *arg0, void *arg1, s32 arg2);
void GXLoadTexObj(s32 arg0, s32 arg1);
void GXInitTlutObj(void *arg0, u32 arg1, s32 arg2, s16 arg3);
void GXLoadTlut(void *arg0, s32 arg1);
void GXInitTexCacheRegion(void *arg0, s8 arg1, u32 arg2, s32 arg3, u32 arg4, s32 arg5, s32 arg7);
void GXInitTlutRegion(s32 *arg0, s32 arg1, s32 arg2);
void GXInvalidateTexAll(void);
s32 fn_800E38B0(s32 arg0);
s32 fn_800E38C4(s32 arg0);
void fn_800E38D8(s32 arg0, s32 arg1);
void __GXSetSUTexRegs(void);
void __GXSetTmemConfig(s32 arg0);
void fn_800E3D4C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, u8 arg_sp8, s32 arg_spC);
void fn_800E3DE8(s32 arg0, void *arg1, s32 arg2);
void fn_800E3F48(s32 arg0, s32 arg1, s32 arg2);
void fn_800E40C4(s32 arg0, s32 arg1, s32 arg2);
void fn_800E41D8(s32 arg0);
void GXSetTevDirect(void);
void fn_800E4248(u8 arg2, u8 arg3);
void fn_800E42AC(s32 arg2);
void __GXFlushTextureState(void);
void GXSetTevOp(s32 arg0, s32 arg1);
void GXSetTevColorIn(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void GXSetTevAlphaIn(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void GXSetTevColorOp(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void GXSetTevAlphaOp(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_800E4580(s32 arg0, void *arg1);
void GXSetTevColorS10(s32 arg0, void *arg1);
void fn_800E4668(s32 arg0, void *arg1);
void GXSetTevKColorSel(s32 arg0, s32 arg1);

void GXInitTexObjLOD(void *arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4, s32 arg5, f32 farg0, f32 farg1, f32 farg2) {
    f32 var_f1;
    f32 var_f2;
    f32 var_f3;
    s32 var_r0;
    s32 var_r5;

    var_f1 = farg0;
    var_f2 = farg1;
    var_f3 = farg2;
    if (var_f3 < lbl_80351D80) {
        var_f3 = lbl_80351D80;
    } else {
        M2C_ERROR(/* unknown instruction: cror eq, gt, eq */);
        if (var_f3 == lbl_80351D84) {
            var_f3 = lbl_80351D88;
        }
    }
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) & 0xFFFE01FF & ~0x1FE00) | (((s32) (lbl_80351D8C * var_f3) << 9) & 0x1FE00));
    if (arg2 == 1) {
        var_r5 = 1;
    } else {
        var_r5 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) & 0xFFFFFFEF) | (var_r5 * 0x10));
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) & 0xFFFFFF1F) | (*(&lbl_80350058 + arg1) << 5));
    if (arg4 != 0) {
        var_r0 = 0;
    } else {
        var_r0 = 1;
    }
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) & 0xFFFFFEFF) | (var_r0 << 8));
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & 0xFFFDFFFF);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & 0xFFFBFFFF);
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) & 0xFFE7FFFF) | (arg5 << 0x13));
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) & 0xFFDFFFFF) | ((arg3 << 0x15) & 0x1FE00000));
    if (var_f1 < lbl_80351D90) {
        var_f1 = lbl_80351D90;
    } else if (var_f1 > lbl_80351D94) {
        var_f1 = lbl_80351D94;
    }
    if (var_f2 < lbl_80351D90) {
        var_f2 = lbl_80351D90;
    } else if (var_f2 > lbl_80351D94) {
        var_f2 = lbl_80351D94;
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((M2C_FIELD(arg0, s32 *, 4) & 0xFFFFFF00 & ~0xFF) | ((s32) (lbl_80351D70 * var_f1) & 0xFF));
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((M2C_FIELD(arg0, s32 *, 4) & 0xFFFF00FF & ~0xFF00) | (((s32) (lbl_80351D70 * var_f2) << 8) & 0xFF00));
}

s32 fn_800E3428(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

void fn_800E3430(void *arg0, void *arg1, s32 arg2) {
    void *temp_r3;
    void *temp_r4;

    M2C_FIELD(arg0, s32 *, 0) = (s32) (((*(&lbl_80350020 + arg2) << 0x18) & ~0xFFFFFF) | (M2C_FIELD(arg0, s32 *, 0) & 0xFFFFFF));
    M2C_FIELD(arg0, s32 *, 4) = (s32) (((*(&lbl_80350028 + arg2) << 0x18) & ~0xFFFFFF) | (M2C_FIELD(arg0, s32 *, 4) & 0xFFFFFF));
    *(s8 *)0xCC008000 = 0x61;
    M2C_FIELD(arg0, s32 *, 8) = (s32) (((*(&lbl_80350030 + arg2) << 0x18) & ~0xFFFFFF) | (M2C_FIELD(arg0, s32 *, 8) & 0xFFFFFF));
    M2C_FIELD(arg1, s32 *, 0) = (s32) (((*(&lbl_80350038 + arg2) << 0x18) & ~0xFFFFFF) | (M2C_FIELD(arg1, s32 *, 0) & 0xFFFFFF));
    M2C_FIELD(arg1, s32 *, 4) = (s32) (((*(&lbl_80350040 + arg2) << 0x18) & ~0xFFFFFF) | (M2C_FIELD(arg1, s32 *, 4) & 0xFFFFFF));
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (((*(&lbl_80350048 + arg2) << 0x18) & ~0xFFFFFF) | (M2C_FIELD(arg0, s32 *, 0xC) & 0xFFFFFF));
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = (s32) M2C_FIELD(arg0, s32 *, 0);
    *(s8 *)0xCC008000 = (s32) M2C_FIELD(arg0, s32 *, 4);
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = (s32) M2C_FIELD(arg0, s32 *, 8);
    *(s8 *)0xCC008000 = (s32) M2C_FIELD(arg1, s32 *, 0);
    *(s8 *)0xCC008000 = (s32) M2C_FIELD(arg1, s32 *, 4);
    *(s8 *)0xCC008000 = (s32) M2C_FIELD(arg0, s32 *, 0xC);
    if (!(M2C_FIELD(arg0, u8 *, 0x1F) & 2)) {
        temp_r3 = M2C_FIELD(gx, void *(**)(s32, void *), 0x414)(M2C_FIELD(arg0, s32 *, 0x18), gx);
        M2C_FIELD(temp_r3, s32 *, 4) = (s32) (((*(&lbl_80350050 + arg2) << 0x18) & ~0xFFFFFF) | (M2C_FIELD(temp_r3, s32 *, 4) & 0xFFFFFF));
        *(s8 *)0xCC008000 = 0x61;
        *(s8 *)0xCC008000 = (s32) M2C_FIELD(temp_r3, s32 *, 4);
    }
    /* draft: did not compile: temp_r4 = gx + (arg2 * 4); */
    M2C_FIELD(gx, s16 *, 2) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x45C) = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(temp_r4, s32 *, 0x47C) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(gx, s32 *, 0x4F4) = (s32) (M2C_FIELD(gx, s32 *, 0x4F4) | 1);
}

void GXLoadTexObj(s32 arg0, s32 arg1) {
    /* draft: did not compile: fn_800E3430(arg0, M2C_FIELD(gx, s32 (**)(void *), 0x410)(gx), arg1); */
}

void GXInitTlutObj(void *arg0, u32 arg1, s32 arg2, s16 arg3) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) & 0xFFFFF3FF) | (arg2 << 0xA));
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((M2C_FIELD(arg0, s32 *, 4) & 0xFFE00000) | ((arg1 >> 5U) & 0x01FFFFFF));
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((M2C_FIELD(arg0, s32 *, 4) & 0xFFFFFF) | 0x64000000);
    M2C_FIELD(arg0, s16 *, 8) = arg3;
}

void GXLoadTlut(void *arg0, s32 arg1) {
    void *temp_r31;

    temp_r31 = M2C_FIELD(gx, void *(**)(s32, void *), 0x414)(arg1, gx);
    __GXFlushTextureState();
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = (s32) M2C_FIELD(arg0, s32 *, 4);
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = (s32) M2C_FIELD(temp_r31, s32 *, 0);
    __GXFlushTextureState();
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(temp_r31, s32 *, 0) & 0x3FF & ~0xFFFFFC00) | (M2C_FIELD(arg0, s32 *, 0) & 0xFFFFFC00));
    M2C_FIELD(temp_r31, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(temp_r31, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(temp_r31, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 8);
}

void GXInitTexCacheRegion(void *arg0, s8 arg1, u32 arg2, s32 arg3, u32 arg4, s32 arg5, s32 arg7) {
    s8 var_r10;

    var_r10 = arg7;
    switch (arg3) {                                 /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        var_r10 = 3;
        break;
    case 1:                                         /* switch 1 */
        var_r10 = 4;
        break;
    case 2:                                         /* switch 1 */
        var_r10 = 5;
        break;
    }
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) & 0xFFFF8000) | (arg2 >> 5U));
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) & 0xFFFC7FFF) | (var_r10 << 0xF));
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) & 0xFFE3FFFF) | (var_r10 << 0x12));
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & 0xFFDFFFFF);
    switch (arg5) {                                 /* switch 2; irregular */
    case 0:                                         /* switch 2 */
        var_r10 = 3;
        break;
    case 1:                                         /* switch 2 */
        var_r10 = 4;
        break;
    case 2:                                         /* switch 2 */
        var_r10 = 5;
        break;
    case 3:                                         /* switch 2 */
        var_r10 = 0;
        break;
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((M2C_FIELD(arg0, s32 *, 4) & 0xFFFF8000) | (arg4 >> 5U));
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((M2C_FIELD(arg0, s32 *, 4) & 0xFFFC7FFF) | (var_r10 << 0xF));
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((M2C_FIELD(arg0, s32 *, 4) & 0xFFE3FFFF) | (var_r10 << 0x12));
    M2C_FIELD(arg0, s8 *, 0xC) = arg1;
    M2C_FIELD(arg0, s8 *, 0xD) = 1;
}

void GXInitTlutRegion(s32 *arg0, s32 arg1, s32 arg2) {
    *arg0 = 0;
    *arg0 = (*arg0 & 0xFFFFFC00) | ((u32) (arg1 + 0xFFF80000) >> 9U);
    *arg0 = (*arg0 & 0xFFE003FF) | (arg2 << 0xA);
    *arg0 = (*arg0 & 0xFFFFFF) | 0x65000000;
}

void GXInvalidateTexAll(void) {
    __GXFlushTextureState();
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = 0x66001000;
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = 0x66001100;
    __GXFlushTextureState();
}

s32 fn_800E38B0(s32 arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(gx, s32 *, 0x410);
    M2C_FIELD(gx, s32 *, 0x410) = arg0;
    return temp_r0;
}

s32 fn_800E38C4(s32 arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(gx, s32 *, 0x414);
    M2C_FIELD(gx, s32 *, 0x414) = arg0;
    return temp_r0;
}

void fn_800E38D8(s32 arg0, s32 arg1) {
    s32 temp_r8;
    u32 temp_r4;
    u32 temp_r6_2;
    void *temp_r10;
    void *temp_r3;
    void *temp_r4_2;
    void *temp_r6;
    void *temp_r7;
    void *temp_r9;

    temp_r8 = arg1 * 4;
    /* draft: did not compile: temp_r3 = gx + (arg0 * 4); */
    /* draft: did not compile: temp_r6 = gx + temp_r8; */
    temp_r4 = M2C_FIELD(temp_r3, u32 *, 0x45C);
    /* draft: did not compile: temp_r7 = gx + temp_r8; */
    /* draft: did not compile: temp_r9 = gx + temp_r8; */
    M2C_FIELD(temp_r6, s32 *, 0xB8) = (s32) ((M2C_FIELD(temp_r6, s32 *, 0xB8) & 0xFFFF0000 & ~0x3FF) | (temp_r4 & 0x3FF));
    /* draft: did not compile: temp_r10 = gx + temp_r8; */
    M2C_FIELD(temp_r7, s32 *, 0xD8) = (s32) ((M2C_FIELD(temp_r7, s32 *, 0xD8) & 0xFFFF0000 & ~0x3FF) | ((temp_r4 >> 0xAU) & 0x3FF));
    temp_r6_2 = M2C_FIELD(temp_r3, u32 *, 0x47C);
    M2C_FIELD(temp_r9, s32 *, 0xB8) = (s32) ((M2C_FIELD(temp_r9, s32 *, 0xB8) & 0xFFFEFFFF) | ((CLZ(1 - (temp_r6_2 & 3)) << 0xB) & 0xFF0000));
    /* draft: did not compile: temp_r4_2 = gx + temp_r8; */
    M2C_FIELD(temp_r10, s32 *, 0xD8) = (s32) ((M2C_FIELD(temp_r10, s32 *, 0xD8) & 0xFFFEFFFF) | ((CLZ(1 - ((temp_r6_2 >> 2U) & 3)) << 0xB) & 0xFF0000));
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = (s32) M2C_FIELD(temp_r4_2, s32 *, 0xB8);
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = (s32) M2C_FIELD(temp_r4_2, s32 *, 0xD8);
    M2C_FIELD(gx, s16 *, 2) = 0;
}

void __GXSetSUTexRegs(void) {
    s32 saved_reg_r29;
    s32 saved_reg_r28;
    s32 var_r27;
    s32 var_r28;
    s32 var_r28_2;
    u32 *temp_r4;
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r0_4;
    u32 temp_r0_5;
    u32 temp_r27;
    u32 temp_r29;
    u32 temp_r30;
    u32 var_r29;
    u32 var_r31;
    u32 var_r31_2;

    var_r28 = saved_reg_r28;
    var_r29 = saved_reg_r29;
    if ((u32) M2C_FIELD(gx, u32 *, 0x4DC) != 0xFF) {
        temp_r0 = M2C_FIELD(gx, u32 *, 0x204);
        var_r31 = 0U;
        temp_r30 = ((temp_r0 >> 0xAU) & 0xF) + 1;
        temp_r27 = (temp_r0 >> 0x10U) & 7;
loop_16:
        if (var_r31 < temp_r27) {
            switch ((s32) var_r31) {                /* irregular */
            case 0:
                temp_r0_2 = M2C_FIELD(gx, u32 *, 0x120);
                var_r29 = temp_r0_2 & 7;
                var_r28 = (temp_r0_2 >> 3U) & 7;
                break;
            case 1:
                temp_r0_3 = M2C_FIELD(gx, u32 *, 0x120);
                var_r29 = (temp_r0_3 >> 6U) & 7;
                var_r28 = (temp_r0_3 >> 9U) & 7;
                break;
            case 2:
                temp_r0_4 = M2C_FIELD(gx, u32 *, 0x120);
                var_r29 = (temp_r0_4 >> 0xCU) & 7;
                var_r28 = (temp_r0_4 >> 0xFU) & 7;
                break;
            case 3:
                temp_r0_5 = M2C_FIELD(gx, u32 *, 0x120);
                var_r29 = (temp_r0_5 >> 0x12U) & 7;
                var_r28 = (temp_r0_5 >> 0x15U) & 7;
                break;
            }
            if (!(M2C_FIELD(gx, u32 *, 0x4DC) & (1 << var_r28))) {
                fn_800E38D8(var_r29, var_r28);
            }
            var_r31 += 1;
            goto loop_16;
        }
        var_r31_2 = 0;
        var_r27 = 0;
loop_26:
        if (var_r31_2 < temp_r30) {
            /* draft: did not compile: temp_r4 = gx + (((var_r31_2 * 2) & 0xFFFFFFFC) + 0x100); */
            /* draft: did not compile: temp_r29 = *(gx + (var_r27 + 0x49C)) & 0xFFFFFEFF; */
            if (var_r31_2 & 1) {
                var_r28_2 = ((u32) *temp_r4 >> 0xFU) & 7;
            } else {
                var_r28_2 = ((u32) *temp_r4 >> 3U) & 7;
            }
            if ((temp_r29 != 0xFF) && !(M2C_FIELD(gx, u32 *, 0x4DC) & (1 << var_r28_2)) && (M2C_FIELD(gx, s32 *, 0x4E0) & (1 << var_r31_2))) {
                fn_800E38D8(temp_r29, var_r28_2);
            }
            var_r27 += 4;
            var_r31_2 += 1;
            goto loop_26;
        }
    }
}

void __GXSetTmemConfig(s32 arg0) { } /* draft: stub */

void fn_800E3D4C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, u8 arg_sp8, s32 arg_spC) {
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = (s32) ((((arg0 + 0x10) << 0x18) & ~0xFFFFFF) | (((((((((((((((((arg1 & 0xFFFFFFF3) | (arg2 * 4)) & 0xFFFFFF8F) | (arg3 * 0x10)) & 0xFFFFFE7F) | (arg_spC << 7)) & 0xFFFFE1FF) | (arg4 << 9)) & 0xFFFF1FFF) | (arg5 << 0xD)) & 0xFFF8FFFF) | (arg6 << 0x10)) & 0xFFF7FFFF) | (arg_sp8 << 0x13)) & 0xFFEFFFFF) | ((arg7 << 0x14) & 0x0FF00000)) & 0xFFFFFF));
    M2C_FIELD(gx, s16 *, 2) = 0;
}

void fn_800E3DE8(s32 arg0, void *arg1, s32 arg2) {
    s32 temp_r3;
    s32 var_r0;
    s8 temp_r11;

    if (arg0 != 8) {
        if (arg0 < 8) {
            if (arg0 != 4) {
                if (arg0 < 4) {
                    if (arg0 < 1) {
                        goto block_11;
                    }
                    var_r0 = arg0 - 1;
                } else {
                    var_r0 = arg0 - 5;
                }
            } else {
                goto block_11;
            }
        } else if (arg0 < 0xC) {
            var_r0 = arg0 - 9;
        } else {
            goto block_11;
        }
    } else {
block_11:
        var_r0 = 0;
    }
    temp_r3 = 3;
    temp_r3 *= var_r0;
    temp_r11 = 0x11;
    temp_r11 += arg2;
    *(s8 *)0xCC008000 = (s32) ((((temp_r3 + 6) << 0x18) & ~0xFFFFFF) | (((((((s32) (lbl_80351D98 * M2C_FIELD(arg1, f32 *, 0xC)) << 0xB) & 0x3FF800 & ~0x7FF) | ((s32) (lbl_80351D98 * M2C_FIELD(arg1, f32 *, 0)) & 0x7FF)) & 0xFF3FFFFF & ~0xC00000) | ((temp_r11 << 0x16) & 0xC00000)) & 0xFFFFFF));
    *(s8 *)0xCC008000 = (s32) ((((((((s32) (lbl_80351D98 * M2C_FIELD(arg1, f32 *, 0x10)) << 0xB) & 0x3FF800 & ~0x7FF) | ((s32) (lbl_80351D98 * M2C_FIELD(arg1, f32 *, 4)) & 0x7FF)) & 0xFF3FFFFF & ~0xC00000) | ((temp_r11 << 0x14) & 0xC00000)) & 0xFFFFFF & ~0xFF000000) | ((temp_r3 + 7) << 0x18));
    *(s8 *)0xCC008000 = (s32) ((((((((s32) (lbl_80351D98 * M2C_FIELD(arg1, f32 *, 0x14)) << 0xB) & 0x3FF800 & ~0x7FF) | ((s32) (lbl_80351D98 * M2C_FIELD(arg1, f32 *, 8)) & 0x7FF)) & 0xFF3FFFFF & ~0xC00000) | ((temp_r11 << 0x12) & 0xC00000)) & 0xFFFFFF & ~0xFF000000) | ((temp_r3 + 8) << 0x18));
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = 0x61;
    M2C_FIELD(gx, s16 *, 2) = 0;
}

void fn_800E3F48(s32 arg0, s32 arg1, s32 arg2) {
    switch (arg0) {                                 /* irregular */
    case 0:
        M2C_FIELD(gx, s32 *, 0x128) = (s32) ((M2C_FIELD(gx, s32 *, 0x128) & 0xFFFFFFF0) | arg1);
        M2C_FIELD(gx, s32 *, 0x128) = (s32) ((M2C_FIELD(gx, s32 *, 0x128) & 0xFFFFFF0F) | (arg2 * 0x10));
        M2C_FIELD(gx, s32 *, 0x128) = (s32) ((M2C_FIELD(gx, s32 *, 0x128) & 0xFFFFFF) | 0x25000000);
        /* draft: did not compile: *(void *)0xCC008000 = 0x61; */
        /* draft: did not compile: *(void *)0xCC008000 = (s32) M2C_FIELD(gx, s32 *, 0x128); */
        break;
    case 1:
        M2C_FIELD(gx, s32 *, 0x128) = (s32) ((M2C_FIELD(gx, s32 *, 0x128) & 0xFFFFF0FF) | (arg1 << 8));
        M2C_FIELD(gx, s32 *, 0x128) = (s32) ((M2C_FIELD(gx, s32 *, 0x128) & 0xFFFF0FFF) | (arg2 << 0xC));
        M2C_FIELD(gx, s32 *, 0x128) = (s32) ((M2C_FIELD(gx, s32 *, 0x128) & 0xFFFFFF) | 0x25000000);
        *(s8 *)0xCC008000 = 0x61;
        *(s8 *)0xCC008000 = (s32) M2C_FIELD(gx, s32 *, 0x128);
        break;
    case 2:
        M2C_FIELD(gx, s32 *, 0x12C) = (s32) ((M2C_FIELD(gx, s32 *, 0x12C) & 0xFFFFFFF0) | arg1);
        M2C_FIELD(gx, s32 *, 0x12C) = (s32) ((M2C_FIELD(gx, s32 *, 0x12C) & 0xFFFFFF0F) | (arg2 * 0x10));
        M2C_FIELD(gx, s32 *, 0x12C) = (s32) ((M2C_FIELD(gx, s32 *, 0x12C) & 0xFFFFFF) | 0x26000000);
        /* draft: did not compile: *(void *)0xCC008000 = 0x61; */
        /* draft: did not compile: *(void *)0xCC008000 = (s32) M2C_FIELD(gx, s32 *, 0x12C); */
        break;
    case 3:
        M2C_FIELD(gx, s32 *, 0x12C) = (s32) ((M2C_FIELD(gx, s32 *, 0x12C) & 0xFFFFF0FF) | (arg1 << 8));
        M2C_FIELD(gx, s32 *, 0x12C) = (s32) ((M2C_FIELD(gx, s32 *, 0x12C) & 0xFFFF0FFF) | (arg2 << 0xC));
        M2C_FIELD(gx, s32 *, 0x12C) = (s32) ((M2C_FIELD(gx, s32 *, 0x12C) & 0xFFFFFF) | 0x26000000);
        /* draft: did not compile: *(void *)0xCC008000 = 0x61; */
        /* draft: did not compile: *(void *)0xCC008000 = (s32) M2C_FIELD(gx, s32 *, 0x12C); */
        break;
    }
    M2C_FIELD(gx, s16 *, 2) = 0;
}

void fn_800E40C4(s32 arg0, s32 arg1, s32 arg2) {
    switch (arg0) {                                 /* irregular */
    case 0:
        M2C_FIELD(gx, s32 *, 0x120) = (s32) ((M2C_FIELD(gx, s32 *, 0x120) & 0xFFFFFFF8) | arg2);
        M2C_FIELD(gx, s32 *, 0x120) = (s32) ((M2C_FIELD(gx, s32 *, 0x120) & 0xFFFFFFC7) | (arg1 * 8));
        break;
    case 1:
        M2C_FIELD(gx, s32 *, 0x120) = (s32) ((M2C_FIELD(gx, s32 *, 0x120) & 0xFFFFFE3F) | (arg2 << 6));
        M2C_FIELD(gx, s32 *, 0x120) = (s32) ((M2C_FIELD(gx, s32 *, 0x120) & 0xFFFFF1FF) | (arg1 << 9));
        break;
    case 2:
        M2C_FIELD(gx, s32 *, 0x120) = (s32) ((M2C_FIELD(gx, s32 *, 0x120) & 0xFFFF8FFF) | (arg2 << 0xC));
        M2C_FIELD(gx, s32 *, 0x120) = (s32) ((M2C_FIELD(gx, s32 *, 0x120) & 0xFFFC7FFF) | (arg1 << 0xF));
        break;
    case 3:
        M2C_FIELD(gx, s32 *, 0x120) = (s32) ((M2C_FIELD(gx, s32 *, 0x120) & 0xFFE3FFFF) | (arg2 << 0x12));
        M2C_FIELD(gx, s32 *, 0x120) = (s32) ((M2C_FIELD(gx, s32 *, 0x120) & 0xFF1FFFFF) | (arg1 << 0x15));
        break;
    }
    *(s8 *)0xCC008000 = 0x61;
    M2C_FIELD(gx, s32 *, 0x4F4) = (s32) (M2C_FIELD(gx, s32 *, 0x4F4) | 3);
    M2C_FIELD(gx, s16 *, 2) = 0;
    *(s8 *)0xCC008000 = (s32) M2C_FIELD(gx, s32 *, 0x120);
}

void fn_800E41D8(s32 arg0) {
    M2C_FIELD(gx, s32 *, 0x204) = (s32) ((M2C_FIELD(gx, s32 *, 0x204) & 0xFFF8FFFF) | ((arg0 << 0x10) & 0xFF0000));
    M2C_FIELD(gx, s32 *, 0x4F4) = (s32) (M2C_FIELD(gx, s32 *, 0x4F4) | 6);
}

#pragma push
#pragma dont_inline on
void GXSetTevDirect(void) {
    s32 spC;
    s32 sp8;

    sp8 = 0;
    spC = 0;
    fn_800E3D4C((long)(0), (long)(0), (long)(0), (long)(0), (long)(0), (long)(0), (long)(0), (long)(0), (unsigned char)(0), (long)(0));
}
#pragma pop

#pragma push
#pragma peephole off
void fn_800E4248(u8 arg2, u8 arg3) {
    s32 spC;
    s32 sp8;
    M2C_UNK var_r6;
    M2C_UNK var_r6_2;

    if (arg3 != 0) {
        var_r6 = 6;
    } else {
        var_r6 = 0;
    }
    if (arg2 != 0) {
        var_r6_2 = 7;
    } else {
        var_r6_2 = 0;
    }
    sp8 = 0;
    spC = 0;
    fn_800E3D4C((long)(0), (long)(var_r6_2), (long)(var_r6), (long)(0), (long)(0), (long)(0), (long)(0), (long)(0), (unsigned char)(0), (long)(0));
}
#pragma pop

void fn_800E42AC(s32 arg2) {
    s32 temp_r3;
    s32 var_r4;
    s32 var_r5;
    u32 temp_r0;
    u32 var_r6;
    u32 var_ctr;

    var_r5 = arg2;
    var_r6 = 0;
    var_r4 = 0;
    temp_r0 = ((u32) M2C_FIELD(gx, u32 *, 0x204) >> 0x10U) & 7;
    var_ctr = temp_r0;
    if (temp_r0 > 0U) {
        do {
            switch (var_r4) {                       /* irregular */
            case 0:
                var_r5 = M2C_FIELD(gx, u32 *, 0x120) & 7;
                break;
            case 1:
                var_r5 = ((u32) M2C_FIELD(gx, u32 *, 0x120) >> 6U) & 7;
                break;
            case 2:
                var_r5 = ((u32) M2C_FIELD(gx, u32 *, 0x120) >> 0xCU) & 7;
                break;
            case 3:
                var_r5 = ((u32) M2C_FIELD(gx, u32 *, 0x120) >> 0x12U) & 7;
                break;
            }
            var_r6 |= 1 << var_r5;
            var_r4 += 1;
            var_ctr -= 1;
        } while (var_ctr != 0);
    }
    temp_r3 = M2C_FIELD(gx, s32 *, 0x124);
    if ((u8) temp_r3 != var_r6) {
        M2C_FIELD(gx, s32 *, 0x124) = (s32) ((temp_r3 & 0xFFFFFF00) | var_r6);
        *(s8 *)0xCC008000 = 0x61;
        *(s8 *)0xCC008000 = (s32) M2C_FIELD(gx, s32 *, 0x124);
        M2C_FIELD(gx, s16 *, 2) = 0;
    }
}

void __GXFlushTextureState(void) {
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = (s32) M2C_FIELD(gx, s32 *, 0x124);
    M2C_FIELD(gx, s16 *, 2) = 0;
}

void GXSetTevOp(s32 arg0, s32 arg1) {
    s32 *var_r5;
    s32 *var_r9;
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r8;
    void *temp_r6;

    if (arg0 == 0) {
        var_r5 = &lbl_802A7FD8 + (arg1 * 4);
        var_r9 = var_r5 + 0x28;
    } else {
        temp_r4 = arg1 * 4;
        var_r5 = &lbl_802A7FD8 + temp_r4 + 0x14;
        var_r9 = &lbl_802A7FD8 + temp_r4 + 0x3C;
    }
    /* draft: did not compile: temp_r6 = gx + (arg0 * 4); */
    temp_r3 = (*var_r5 & 0xFFFFFF) | (M2C_FIELD(temp_r6, s32 *, 0x130) & 0xFF000000 & ~0xFFFFFF);
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = temp_r3;
    *(s8 *)0xCC008000 = 0x61;
    M2C_FIELD(temp_r6, s32 *, 0x130) = temp_r3;
    temp_r8 = (*var_r9 & 0xFFFFF0) | (M2C_FIELD(temp_r6, s32 *, 0x170) & 0xFF00000F & ~0xFFFFF0);
    *(s8 *)0xCC008000 = temp_r8;
    M2C_FIELD(temp_r6, s32 *, 0x170) = temp_r8;
    M2C_FIELD(gx, s16 *, 2) = 0;
}

void GXSetTevColorIn(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r4;
    void *temp_r8;

    /* draft: did not compile: temp_r8 = gx + (arg0 * 4); */
    temp_r4 = (((((((M2C_FIELD(temp_r8, s32 *, 0x130) & ~0xF000) | ((arg1 << 0xC) & 0xF000)) & ~0xF00) | ((arg2 << 8) & 0xF00)) & ~0xF0) | ((arg3 << 4) & 0xF0)) & ~0xF) | (arg4 & 0xF);
    *(s8 *)0xCC008000 = 0x61;
    M2C_FIELD(temp_r8, s32 *, 0x130) = temp_r4;
    *(s8 *)0xCC008000 = temp_r4;
    M2C_FIELD(gx, s16 *, 2) = 0;
}

void GXSetTevAlphaIn(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r4;
    void *temp_r8;

    /* draft: did not compile: temp_r8 = gx + (arg0 * 4); */
    temp_r4 = (((((((M2C_FIELD(temp_r8, s32 *, 0x170) & ~0xE000) | ((arg1 << 0xD) & 0xE000)) & ~0x1C00) | ((arg2 << 0xA) & 0x1C00)) & ~0x380) | ((arg3 << 7) & 0x380)) & ~0x70) | ((arg4 << 4) & 0x70);
    *(s8 *)0xCC008000 = 0x61;
    M2C_FIELD(temp_r8, s32 *, 0x170) = temp_r4;
    *(s8 *)0xCC008000 = temp_r4;
    M2C_FIELD(gx, s16 *, 2) = 0;
}

void GXSetTevColorOp(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) { } /* draft: stub */

void GXSetTevAlphaOp(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) { } /* draft: stub */

void fn_800E4580(s32 arg0, void *arg1) {
    s32 temp_r6;
    s32 temp_r8;

    temp_r8 = arg0 * 2;
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = (s32) ((((temp_r8 + 0xE0) << 0x18) & ~0xFFFFF) | ((((M2C_FIELD(arg1, u8 *, 3) << 0xC) & ~0xFF) | (M2C_FIELD(arg1, u8 *, 0) & 0xFF)) & 0xFFFFF));
    *(s8 *)0xCC008000 = 0x61;
    temp_r6 = (((temp_r8 + 0xE1) << 0x18) & ~0xFFFFF) | ((((M2C_FIELD(arg1, u8 *, 1) << 0xC) & ~0xFF) | (M2C_FIELD(arg1, u8 *, 2) & 0xFF)) & 0xFFFFF);
    *(s8 *)0xCC008000 = temp_r6;
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = temp_r6;
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = temp_r6;
    M2C_FIELD(gx, s16 *, 2) = 0;
}

void GXSetTevColorS10(s32 arg0, void *arg1) {
    s32 temp_r6;
    s32 temp_r9;

    temp_r9 = arg0 * 2;
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = (s32) ((((temp_r9 + 0xE0) << 0x18) & ~0x7FFFFF) | ((((M2C_FIELD(arg1, s16 *, 6) << 0xC) & 0x7FF000 & ~0x7FF) | (M2C_FIELD(arg1, s16 *, 0) & 0x7FF)) & 0x7FFFFF));
    *(s8 *)0xCC008000 = 0x61;
    temp_r6 = (((temp_r9 + 0xE1) << 0x18) & ~0x7FFFFF) | ((((M2C_FIELD(arg1, s16 *, 2) << 0xC) & 0x7FF000 & ~0x7FF) | (M2C_FIELD(arg1, s16 *, 4) & 0x7FF)) & 0x7FFFFF);
    *(s8 *)0xCC008000 = temp_r6;
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = temp_r6;
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = temp_r6;
    M2C_FIELD(gx, s16 *, 2) = 0;
}

void fn_800E4668(s32 arg0, void *arg1) {
    s32 temp_r5;

    temp_r5 = arg0 * 2;
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = (s32) ((((temp_r5 + 0xE0) << 0x18) & ~0xFFFFFF) | ((((((M2C_FIELD(arg1, u8 *, 3) << 0xC) & ~0xFF) | (M2C_FIELD(arg1, u8 *, 0) & 0xFF)) & 0xFF0FFFFF) | 0x800000) & 0xFFFFFF));
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = (s32) ((((temp_r5 + 0xE1) << 0x18) & ~0xFFFFFF) | ((((((M2C_FIELD(arg1, u8 *, 1) << 0xC) & ~0xFF) | (M2C_FIELD(arg1, u8 *, 2) & 0xFF)) & 0xFF0FFFFF) | 0x800000) & 0xFFFFFF));
    M2C_FIELD(gx, s16 *, 2) = 0;
}

void GXSetTevKColorSel(s32 arg0, s32 arg1) {
    s32 *temp_r7;

    /* draft: did not compile: temp_r7 = gx + (((arg0 >> 1) * 4) + 0x1B0); */
    if (arg0 & 1) {
        *temp_r7 = (*temp_r7 & 0xFFF83FFF) | (arg1 << 0xE);
    } else {
        *temp_r7 = (*temp_r7 & 0xFFFFFE0F) | (arg1 * 0x10);
    }
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = (s32) *temp_r7;
    M2C_FIELD(gx, s16 *, 2) = 0;
}
