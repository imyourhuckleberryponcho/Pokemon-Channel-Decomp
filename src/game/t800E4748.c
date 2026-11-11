/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

extern void *gx;
extern M2C_UNK lbl_802A8028;
s32 __cvt_fp2unsigned(f32);
extern f32 lbl_80351DA0;
extern f32 lbl_80351DA4;
extern f32 lbl_80351DA8;
extern f64 lbl_80351DB0;
extern f32 lbl_80351DB8;
extern f64 lbl_80351DC0;
extern f32 lbl_80351DC8;
extern f64 lbl_80351DD8;
extern f64 lbl_80351DE0;
extern f32 lbl_80351DE8;
extern M2C_UNK lbl_802A8050;
M2C_UNK __GXFlushTextureState(s32, void *);
M2C_UNK fn_800E1A18();
M2C_UNK __GXSendFlushPrim();
M2C_UNK __GXSetMatrixIndex();
extern f32 lbl_80351DF8;
extern f32 lbl_80351E08;
extern f32 lbl_80351E0C;

void GXSetTevKAlphaSel(s32 arg0, s32 arg1);
void GXSetTevSwapMode(s32 arg0, s32 arg1, s32 arg2);
void fn_800E4808(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_800E48A0(s32 arg0, u8 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_800E48F4(s32 arg0, s32 arg1, s32 arg2);
void GXSetTevOrder(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_800E4B50(u8 arg0);
void fn_800E4B80(u32 arg0, void *arg1, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void fn_800E4D9C(s16 *arg0, u16 arg1, void *arg2);
void fn_800E4F64(u8 arg0, u16 arg1, void *arg2);
void GXSetBlendMode(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void GXSetColorUpdate(s32 arg0);
void GXSetAlphaUpdate(s32 arg0);
void GXSetZMode(s32 arg0, s32 arg1, s32 arg2);
void fn_800E5144(s32 arg0);
void fn_800E517C(s32 arg0, s32 arg1);
void GXSetDither(s32 arg0);
void GXSetDstAlpha(u8 arg0, u8 arg1);
void fn_800E52CC(s32 arg0, u8 arg1);
void fn_800E5304(u8 arg0, s32 arg1);
void fn_800E5380(void);
void GXCallDisplayList(s32 arg0, s32 arg1);
void GXSetProjection(void *arg0, s32 arg1);
void fn_800E54A8(void *arg0);
void fn_800E5568(void *arg0);
f32 GXLoadPosMtxImm(s32 arg1);
f32 GXLoadNrmMtxImm(void *arg0, s32 arg1);
void GXSetCurrentMtx(s32 arg0);
f32 GXLoadTexMtxImm(u32 arg1, s32 arg2);
void fn_800E5754(u32 arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5);
void fn_800E5858(void);
void GXGetViewportv(void *arg0);

void GXSetTevKAlphaSel(s32 arg0, s32 arg1) {
    s32 *temp_r7;

    /* draft: did not compile: temp_r7 = gx + (((arg0 >> 1) * 4) + 0x1B0); */
    if (arg0 & 1) {
        *temp_r7 = (*temp_r7 & 0xFF07FFFF) | (arg1 << 0x13);
    } else {
        *temp_r7 = (*temp_r7 & 0xFFFFC1FF) | (arg1 << 9);
    }
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = (s32) *temp_r7;
    M2C_FIELD(gx, s16 *, 2) = 0;
}

void GXSetTevSwapMode(s32 arg0, s32 arg1, s32 arg2) {
    s32 *temp_r8;

    /* draft: did not compile: temp_r8 = gx + ((arg0 * 4) + 0x170); */
    *temp_r8 = (*temp_r8 & 0xFFFFFFFC) | arg1;
    *temp_r8 = (*temp_r8 & 0xFFFFFFF3) | (arg2 * 4);
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = (s32) *temp_r8;
    M2C_FIELD(gx, s16 *, 2) = 0;
}

void fn_800E4808(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 *temp_r10;
    s32 *temp_r11;

    /* draft: did not compile: temp_r11 = gx + ((arg0 * 8) + 0x1B0); */
    *temp_r11 = (*temp_r11 & 0xFFFFFFFC) | arg1;
    *temp_r11 = (*temp_r11 & 0xFFFFFFF3) | (arg2 * 4);
    /* draft: did not compile: temp_r10 = gx + ((((arg0 * 2) + 1) * 4) + 0x1B0); */
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = (s32) *temp_r11;
    *temp_r10 = (*temp_r10 & 0xFFFFFFFC) | arg3;
    *temp_r10 = (*temp_r10 & 0xFFFFFFF3) | (arg4 * 4);
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = (s32) *temp_r10;
    M2C_FIELD(gx, s16 *, 2) = 0;
}

void fn_800E48A0(s32 arg0, u8 arg1, s32 arg2, s32 arg3, s32 arg4) {
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = (s32) (((((((((arg1 | 0xF3000000) & 0xFFFF00FF & ~0xFF00) | ((arg4 << 8) & 0xFF00)) & 0xFFF8FFFF) | (arg0 << 0x10)) & 0xFFC7FFFF) | (arg3 << 0x13)) & 0xFF3FFFFF) | (arg2 << 0x16));
    M2C_FIELD(gx, s16 *, 2) = 0;
}

void fn_800E48F4(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r6;

    switch (arg1) {                                 /* irregular */
    case 17:
        var_r6 = 0;
        break;
    case 19:
        var_r6 = 1;
        break;
    case 22:
        var_r6 = 2;
        break;
    default:
        var_r6 = 2;
        break;
    }
    *(s8 *)0xCC008000 = (s32) ((arg2 & 0xFFFFFF) | 0xF4000000);
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = (s32) ((((var_r6 & 0xFFFFFFF3) | (arg0 * 4)) & 0xFFFFFF) | 0xF5000000);
    M2C_FIELD(gx, s16 *, 2) = 0;
}

void GXSetTevOrder(s32 arg0, s32 arg1, s32 arg2, s32 arg3) { } /* draft: stub */

void fn_800E4B50(u8 arg0) {
    M2C_FIELD(gx, s32 *, 0x204) = (s32) ((M2C_FIELD(gx, s32 *, 0x204) & 0xFFFFC3FF) | ((arg0 - 1) << 0xA));
    M2C_FIELD(gx, s32 *, 0x4F4) = (s32) (M2C_FIELD(gx, s32 *, 0x4F4) | 4);
}

void fn_800E4B80(u32 arg0, void *arg1, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    f32 sp2C;
    f32 sp28;
    f32 temp_f0;
    f32 temp_f3;
    f32 temp_f5;
    f32 var_f3;
    f32 var_f4;
    f32 var_f5;
    s32 temp_r28;
    s32 temp_r31;
    s32 var_r10;
    s32 var_r11;
    s32 var_r3;

    var_r10 = 0;
    var_r11 = 0;
    temp_r31 = (arg0 >> 3U) & 1;
    if (temp_r31 != 0) {
        if ((farg3 == farg2) || (farg1 == farg0)) {
            sp2C = lbl_80351DA0;
            sp28 = lbl_80351DA0;
        } else {
            temp_f3 = lbl_80351DA4 / (farg1 - farg0);
            sp2C = temp_f3 * (farg3 - farg2);
            sp28 = temp_f3 * (farg0 - farg2);
        }
    } else {
        if ((farg3 == farg2) || (farg1 == farg0)) {
            var_f3 = lbl_80351DA0;
            var_f4 = lbl_80351DA8;
            var_f5 = var_f3;
        } else {
            temp_f0 = farg3 - farg2;
            temp_f5 = farg1 - farg0;
            var_f4 = farg3 / temp_f0;
            var_f5 = farg0 / temp_f5;
            var_f3 = (farg3 * farg2) / (temp_f0 * temp_f5);
        }
        var_r3 = 0;
loop_11:
        if (var_f4 > (f32) lbl_80351DB0) {
            var_f4 *= lbl_80351DA8;
            var_r3 += 1;
            goto loop_11;
        }
loop_14:
        if ((var_f4 > lbl_80351DA0) && (var_f4 < (f32) lbl_80351DC0)) {
            var_f4 *= lbl_80351DB8;
            var_r3 -= 1;
            goto loop_14;
        }
        temp_r28 = var_r3 + 1;
        sp28 = var_f5;
        sp2C = var_f3 / (f32) (1 << temp_r28);
        var_r10 = (__cvt_fp2unsigned(lbl_80351DC8 * var_f4) & 0xFFFFFF) | 0xEF000000;
        var_r11 = (temp_r28 & 0xFFFFFF) | 0xF0000000;
    }
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = (s32) (((((M2C_BITWISE(u32, sp2C) >> 0xCU) & 0x80000 & ~0x7FFFF) | ((((M2C_BITWISE(u32, sp2C) >> 0xCU) & 0x7F800 & ~0x7FF) | ((M2C_BITWISE(u32, sp2C) >> 0xCU) & 0x7FF)) & 0x7FFFF)) & 0xFFFFFF) | 0xEE000000);
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = var_r10;
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = var_r11;
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = (s32) (((((((temp_r31 << 0x14) & ~0xFFFFF) | ((((M2C_BITWISE(u32, sp28) >> 0xCU) & 0x80000 & ~0x7FFFF) | ((((M2C_BITWISE(u32, sp28) >> 0xCU) & 0x7F800 & ~0x7FF) | ((M2C_BITWISE(u32, sp28) >> 0xCU) & 0x7FF)) & 0x7FFFF)) & 0xFFFFF)) & 0xFF1FFFFF) | ((arg0 & 7) << 0x15)) & 0xFFFFFF) | 0xF1000000);
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = (s32) (((((M2C_FIELD(arg1, u8 *, 0) << 0x10) & ~0xFFFF) | ((((M2C_FIELD(arg1, u8 *, 1) << 8) & ~0xFF) | (M2C_FIELD(arg1, u8 *, 2) & 0xFF)) & 0xFFFF)) & 0xFFFFFF) | 0xF2000000);
    M2C_FIELD(gx, s16 *, 2) = 0;
}

void fn_800E4D9C(s16 *arg0, u16 arg1, void *arg2) {
    f32 sp14;
    f32 temp_f0;
    f32 temp_f25;
    f32 temp_f28;
    f32 temp_f29;
    f32 var_f24;
    f32 var_f2;
    f32 var_f2_2;
    f64 temp_f1;
    f64 temp_f1_2;
    f64 temp_f1_3;
    f64 temp_f30;
    f64 temp_f31;
    s16 *var_r30;
    u32 var_r29;
    f32 temp_f23;

    if (lbl_80351DD8 == M2C_FIELD(arg2, f32 *, 0x3C)) {
        var_f2 = M2C_FIELD(arg2, f32 *, 0x2C) / (M2C_FIELD(arg2, f32 *, 0x28) - lbl_80351DA4);
        var_f24 = (var_f2 * (lbl_80351DA4 + M2C_FIELD(arg2, f32 *, 8))) / M2C_FIELD(arg2, f32 *, 0);
    } else {
        var_f2 = (lbl_80351DA4 + M2C_FIELD(arg2, f32 *, 0x2C)) / M2C_FIELD(arg2, f32 *, 0x28);
        var_f24 = -(M2C_FIELD(arg2, f32 *, 0xC) - lbl_80351DA4) / M2C_FIELD(arg2, f32 *, 0);
    }
    var_r30 = arg0;
    temp_f29 = lbl_80351DA0;
    var_r29 = 0U;
    temp_f30 = lbl_80351DC0;
    temp_f31 = lbl_80351DE0;
    temp_f23 = lbl_80351DE8;
    temp_f28 = lbl_80351DA4;
    temp_f25 = lbl_80351DB8 / (f32) arg1;
    do {
        temp_f0 = (f32) ((var_r29 + 1) << 5) * temp_f25 * var_f24;
        var_f2_2 = temp_f28 + ((temp_f0 * temp_f0) / (var_f2 * var_f2));
        if (var_f2_2 > temp_f29) {
            temp_f1 = __frsqrte(var_f2_2);
            temp_f1_2 = temp_f30 * temp_f1 * (temp_f31 - ((f64) var_f2_2 * (temp_f1 * temp_f1)));
            temp_f1_3 = temp_f30 * temp_f1_2 * (temp_f31 - ((f64) var_f2_2 * (temp_f1_2 * temp_f1_2)));
            sp14 = (f32) ((f64) var_f2_2 * (temp_f30 * temp_f1_3 * (temp_f31 - ((f64) var_f2_2 * (temp_f1_3 * temp_f1_3)))));
            var_f2_2 = sp14;
        }
        *var_r30 = __cvt_fp2unsigned(temp_f23 * var_f2_2) & 0xFFF;
        var_r29 += 1;
        var_r30 += 2;
    } while (var_r29 < 0xAU);
}

void fn_800E4F64(u8 arg0, u16 arg1, void *arg2) { } /* draft: stub */

void GXSetBlendMode(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r7;

    *(s8 *)0xCC008000 = 0x61;
    temp_r7 = (((((((((((M2C_FIELD(gx, s32 *, 0x1D0) & ~0x800) | ((CLZ(3 - arg0) << 6) & 0x800)) & ~1) | (arg0 & 1)) & ~2) | (((u32) CLZ(2 - arg0) >> 4U) & 2)) & ~0xF000) | ((arg3 << 0xC) & 0xF000)) & ~0x700) | ((arg1 << 8) & 0x700)) & ~0xE0) | ((arg2 << 5) & 0xE0);
    *(s8 *)0xCC008000 = temp_r7;
    M2C_FIELD(gx, s32 *, 0x1D0) = temp_r7;
    M2C_FIELD(gx, s16 *, 2) = 0;
}

void GXSetColorUpdate(s32 arg0) {
    s32 temp_r6;

    temp_r6 = (M2C_FIELD(gx, s32 *, 0x1D0) & ~8) | ((arg0 << 3) & 8);
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = temp_r6;
    M2C_FIELD(gx, s32 *, 0x1D0) = temp_r6;
    M2C_FIELD(gx, s16 *, 2) = 0;
}

void GXSetAlphaUpdate(s32 arg0) {
    s32 temp_r6;

    temp_r6 = (M2C_FIELD(gx, s32 *, 0x1D0) & ~0x10) | ((arg0 << 4) & 0x10);
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = temp_r6;
    M2C_FIELD(gx, s32 *, 0x1D0) = temp_r6;
    M2C_FIELD(gx, s16 *, 2) = 0;
}

void GXSetZMode(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r7;

    *(s8 *)0xCC008000 = 0x61;
    temp_r7 = (((((M2C_FIELD(gx, s32 *, 0x1D8) & ~1) | (arg0 & 1)) & ~0xE) | ((arg1 << 1) & 0xE)) & ~0x10) | ((arg2 << 4) & 0x10);
    *(s8 *)0xCC008000 = temp_r7;
    M2C_FIELD(gx, s32 *, 0x1D8) = temp_r7;
    M2C_FIELD(gx, s16 *, 2) = 0;
}

void fn_800E5144(s32 arg0) {
    M2C_FIELD(gx, s32 *, 0x1DC) = (s32) ((M2C_FIELD(gx, s32 *, 0x1DC) & 0xFFFFFFBF) | ((arg0 << 6) & 0x3FC0));
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = (s32) M2C_FIELD(gx, s32 *, 0x1DC);
    M2C_FIELD(gx, s16 *, 2) = 0;
}

void fn_800E517C(s32 arg0, s32 arg1) {
    s32 var_r0;
    u32 *temp_r10;
    u32 temp_r5;
    u32 temp_r8;

    temp_r8 = M2C_FIELD(gx, u32 *, 0x1DC);
    /* draft: did not compile: temp_r10 = &lbl_802A8050 + (arg0 * 4); */
    M2C_FIELD((s32)gx, u32 *, 0x1DC) = (u32) ((M2C_FIELD(gx, u32 *, 0x1DC) & 0xFFFFFFC7) | (arg1 * 8));
    M2C_FIELD(gx, u32 *, 0x1DC) = (u32) ((temp_r8 & 0xFFFFFFF8) | *temp_r10);
    temp_r5 = M2C_FIELD(gx, u32 *, 0x1DC);
    if (temp_r8 != temp_r5) {
        *(s8 *)0xCC008000 = 0x61;
        *(s8 *)0xCC008000 = temp_r5;
        if (arg0 == 2) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        M2C_FIELD(gx, s32 *, 0x204) = (s32) ((M2C_FIELD(gx, s32 *, 0x204) & 0xFFFFFDFF) | ((var_r0 << 9) & 0x1FE00));
        M2C_FIELD(gx, s32 *, 0x4F4) = (s32) (M2C_FIELD(gx, s32 *, 0x4F4) | 4);
    }
    if ((u32) *temp_r10 == 4) {
        M2C_FIELD(gx, s32 *, 0x1D4) = (s32) ((M2C_FIELD(gx, s32 *, 0x1D4) & 0xFFFFF9FF & ~0x600) | (((arg0 - 4) << 9) & 0x600));
        M2C_FIELD(gx, s32 *, 0x1D4) = (s32) ((M2C_FIELD(gx, s32 *, 0x1D4) & 0xFFFFFF) | 0x42000000);
        /* draft: did not compile: *(void *)0xCC008000 = 0x61; */
        /* draft: did not compile: *(void *)0xCC008000 = (s32) M2C_FIELD(gx, s32 *, 0x1D4); */
    }
    M2C_FIELD(gx, s16 *, 2) = 0;
}

void GXSetDither(s32 arg0) {
    s32 temp_r6;

    temp_r6 = (M2C_FIELD(gx, s32 *, 0x1D0) & ~4) | ((arg0 << 2) & 4);
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = temp_r6;
    M2C_FIELD(gx, s32 *, 0x1D0) = temp_r6;
    M2C_FIELD(gx, s16 *, 2) = 0;
}

void GXSetDstAlpha(u8 arg0, u8 arg1) {
    s32 temp_r3;

    *(s8 *)0xCC008000 = 0x61;
    temp_r3 = (((M2C_FIELD(gx, s32 *, 0x1D4) & ~0xFF) | (arg1 & 0xFF)) & ~0x100) | ((arg0 << 8) & 0x100);
    *(s8 *)0xCC008000 = temp_r3;
    M2C_FIELD(gx, s32 *, 0x1D4) = temp_r3;
    M2C_FIELD(gx, s16 *, 2) = 0;
}

void fn_800E52CC(s32 arg0, u8 arg1) {
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = (s32) ((((arg1 & 0xFFFFFFFD) | ((arg0 * 2) & 0x1FE)) & 0xFFFFFF) | 0x44000000);
    M2C_FIELD(gx, s16 *, 2) = 0;
}

void fn_800E5304(u8 arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(gx, s32 *, 0x7C) & 0xFFBFFFFF;
    M2C_FIELD(gx, s32 *, 0x7C) = (s32) (temp_r4 | ((arg1 << 0x16) & 0x3FC00000));
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = (s32) M2C_FIELD(gx, s32 *, 0x7C);
    __GXFlushTextureState(temp_r4, gx);
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = (s32) (arg0 | 0x68000000);
    __GXFlushTextureState((long)(0), (void *)(0));
}

void fn_800E5380(void) {

}

void GXCallDisplayList(s32 arg0, s32 arg1) {
    if ((u32) M2C_FIELD(gx, u32 *, 0x4F4) != 0U) {
        fn_800E1A18();
    }
    if ((u32) M2C_FIELD(gx, u32 *, 0) == 0U) {
        __GXSendFlushPrim();
    }
    *(s8 *)0xCC008000 = 0x40;
    *(s8 *)0xCC008000 = arg0;
    *(s8 *)0xCC008000 = arg1;
}

void GXSetProjection(void *arg0, s32 arg1) {
    M2C_FIELD(gx, s32 *, 0x420) = arg1;
    M2C_FIELD(gx, f32 *, 0x424) = (f32) M2C_FIELD(arg0, f32 *, 0);
    M2C_FIELD(gx, f32 *, 0x42C) = (f32) M2C_FIELD(arg0, f32 *, 0x14);
    M2C_FIELD(gx, f32 *, 0x434) = (f32) M2C_FIELD(arg0, f32 *, 0x28);
    M2C_FIELD(gx, f32 *, 0x438) = (f32) M2C_FIELD(arg0, f32 *, 0x2C);
    if (arg1 == 1) {
        M2C_FIELD(gx, f32 *, 0x428) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
        M2C_FIELD(gx, f32 *, 0x430) = (f32) M2C_FIELD(arg0, f32 *, 0x1C);
    } else {
        M2C_FIELD(gx, f32 *, 0x428) = (f32) M2C_FIELD(arg0, f32 *, 8);
        M2C_FIELD(gx, f32 *, 0x430) = (f32) M2C_FIELD(arg0, f32 *, 0x18);
    }
    *(s8 *)0xCC008000 = 0x10;
    *(s8 *)0xCC008000 = 0x61020;
    *(s8 *)0xCC008000 = (f32) M2C_FIELD(gx, f32 *, 0x424);
    *(s8 *)0xCC008000 = (f32) M2C_FIELD(gx, f32 *, 0x428);
    *(s8 *)0xCC008000 = (f32) M2C_FIELD(gx, f32 *, 0x42C);
    *(s8 *)0xCC008000 = (f32) M2C_FIELD(gx, f32 *, 0x430);
    *(s8 *)0xCC008000 = (f32) M2C_FIELD(gx, f32 *, 0x434);
    *(s8 *)0xCC008000 = (f32) M2C_FIELD(gx, f32 *, 0x438);
    *(s8 *)0xCC008000 = (s32) M2C_FIELD(gx, s32 *, 0x420);
    M2C_FIELD(gx, s16 *, 2) = 1;
}

void fn_800E54A8(void *arg0) {
    M2C_FIELD(gx, s32 *, 0x420) = __cvt_fp2unsigned(M2C_FIELD(arg0, f32 *, 0));
    M2C_FIELD(gx, f32 *, 0x424) = (f32) M2C_FIELD(arg0, f32 *, 4);
    M2C_FIELD(gx, f32 *, 0x428) = (f32) M2C_FIELD(arg0, f32 *, 8);
    M2C_FIELD(gx, f32 *, 0x42C) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
    M2C_FIELD(gx, f32 *, 0x430) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
    M2C_FIELD(gx, f32 *, 0x434) = (f32) M2C_FIELD(arg0, f32 *, 0x14);
    M2C_FIELD(gx, f32 *, 0x438) = (f32) M2C_FIELD(arg0, f32 *, 0x18);
    *(s8 *)0xCC008000 = 0x10;
    *(s8 *)0xCC008000 = 0x61020;
    *(s8 *)0xCC008000 = (f32) M2C_FIELD(gx, f32 *, 0x424);
    *(s8 *)0xCC008000 = (f32) M2C_FIELD(gx, f32 *, 0x428);
    *(s8 *)0xCC008000 = (f32) M2C_FIELD(gx, f32 *, 0x42C);
    *(s8 *)0xCC008000 = (f32) M2C_FIELD(gx, f32 *, 0x430);
    *(s8 *)0xCC008000 = (f32) M2C_FIELD(gx, f32 *, 0x434);
    *(s8 *)0xCC008000 = (f32) M2C_FIELD(gx, f32 *, 0x438);
    *(s8 *)0xCC008000 = (s32) M2C_FIELD(gx, s32 *, 0x420);
    M2C_FIELD(gx, s16 *, 2) = 1;
}

void fn_800E5568(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(gx, u32 *, 0x420);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(gx, f32 *, 0x424);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(gx, f32 *, 0x428);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(gx, f32 *, 0x42C);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(gx, f32 *, 0x430);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(gx, f32 *, 0x434);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(gx, f32 *, 0x438);
}

f32 GXLoadPosMtxImm(s32 arg1) {
    *(s8 *)0xCC008000 = 0x10;
    *(s8 *)0xCC008000 = (s32) ((arg1 * 4) | 0xB0000);
    return M2C_ERROR(/* psq_l unimplemented */);
}

f32 GXLoadNrmMtxImm(void *arg0, s32 arg1) {
    *(s8 *)0xCC008000 = 0x10;
    *(s8 *)0xCC008000 = (s32) (((arg1 * 3) + 0x400) | 0x80000);
    /* draft: did not compile: *(0xCC010000 - 0x8000) = (f32) M2C_FIELD(arg0, f32 *, 8); */
    /* draft: did not compile: *(0xCC010000 - 0x8000) = (f32) M2C_FIELD(arg0, f32 *, 0x18); */
    /* draft: did not compile: *(0xCC010000 - 0x8000) = (f32) M2C_FIELD(arg0, f32 *, 0x28); */
    return M2C_ERROR(/* psq_l unimplemented */);
}

void GXSetCurrentMtx(s32 arg0) {
    M2C_FIELD(gx, s32 *, 0x80) = (s32) ((M2C_FIELD(gx, s32 *, 0x80) & 0xFFFFFFC0) | arg0);
    /* draft: did not compile: __GXSetMatrixIndex(0, gx + 0x80); */
}

f32 GXLoadTexMtxImm(u32 arg1, s32 arg2) {
    s32 var_r4;
    s32 var_r7;

    if (arg1 >= 0x40U) {
        var_r7 = ((arg1 - 0x40) * 4) + 0x500;
    } else {
        var_r7 = arg1 * 4;
    }
    if (arg2 == 1) {
        var_r4 = 8;
    } else {
        var_r4 = 0xC;
    }
    *(s8 *)0xCC008000 = 0x10;
    *(s8 *)0xCC008000 = (s32) (var_r7 | ((var_r4 - 1) << 0x10));
    if (arg2 == 0) {
        return M2C_ERROR(/* psq_l unimplemented */);
    }
    return M2C_ERROR(/* psq_l unimplemented */);
}

void fn_800E5754(u32 arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5) {
    f32 temp_f26;
    f32 temp_f27;
    f32 temp_f28;
    f32 temp_f29;
    f32 temp_f30;
    f32 temp_f31;
    f32 var_f2;

    var_f2 = farg1;
    if (arg0 == 0U) {
        var_f2 -= lbl_80351DF8;
    }
    temp_f31 = farg2 * lbl_80351DF8;
    M2C_FIELD(gx, f32 *, 0x43C) = farg0;
    temp_f30 = lbl_80351E0C * farg5;
    M2C_FIELD(gx, f32 *, 0x440) = var_f2;
    M2C_FIELD(gx, f32 *, 0x444) = farg2;
    temp_f29 = -farg3 * lbl_80351DF8;
    M2C_FIELD(gx, f32 *, 0x448) = farg3;
    temp_f27 = lbl_80351E08 + (farg0 + temp_f31);
    M2C_FIELD(gx, f32 *, 0x44C) = farg4;
    temp_f26 = lbl_80351E08 + (var_f2 + (farg3 * lbl_80351DF8));
    temp_f28 = temp_f30 - (lbl_80351E0C * farg4);
    M2C_FIELD(gx, f32 *, 0x450) = farg5;
    if ((u8) M2C_FIELD(gx, u8 *, 0x454) != 0) {
        fn_800E5380();
    }
    *(s8 *)0xCC008000 = 0x10;
    *(s8 *)0xCC008000 = 0x5101A;
    *(s8 *)0xCC008000 = temp_f31;
    *(s8 *)0xCC008000 = temp_f29;
    *(s8 *)0xCC008000 = temp_f28;
    *(s8 *)0xCC008000 = temp_f27;
    *(s8 *)0xCC008000 = temp_f26;
    *(s8 *)0xCC008000 = temp_f30;
    M2C_FIELD(gx, s16 *, 2) = 1;
}

void fn_800E5858(void) {
    fn_800E5754((unsigned long)(1), (float)(0), (float)(0), (float)(0), (float)(0), (float)(0), (float)(0));
}

void GXGetViewportv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(gx, f32 *, 0x43C);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(gx, f32 *, 0x440);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(gx, f32 *, 0x444);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(gx, f32 *, 0x448);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(gx, f32 *, 0x44C);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(gx, f32 *, 0x450);
}
