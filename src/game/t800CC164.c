/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

extern f32 lbl_80351CD0;
extern f32 lbl_80351CD8;
f32 fn_80156F14(f32);
f32 fn_80156F38();
extern f32 lbl_80351CD4;
extern f32 lbl_80351CE0;
extern f32 lbl_80351CE4;
extern f32 lbl_80351CE8;
extern f32 lbl_80351CEC;
f32 fn_80156EF0(f32, f32);
extern f32 lbl_80351CF0;
extern f32 lbl_80351CF4;
extern f32 lbl_80351CF8;
extern f32 lbl_80351CFC;
f32 fn_80156F5C();
extern f32 lbl_80351D00;
extern f32 lbl_80351D04;
extern f32 lbl_80351D08;
M2C_UNK OSInitAlarm();
M2C_UNK __DVDLowSetWAType(M2C_UNK, M2C_UNK);
extern s32 CommandList_8031C650;
extern s32 NextCommandNumber_8035097C;
M2C_UNK OSClearContext(M2C_UNK *);
M2C_UNK OSSetCurrentContext(M2C_UNK *);
u64 __OSGetSystemTime();
M2C_UNK OSCancelAlarm(void *);
extern M2C_UNK LastResetEnd_80350948;
extern u32 ResetOccurred_80350950;
extern s32 StopAtNextInt_80350938;
extern s32 WaitingCoverClose_80350954;
extern s32 lbl_8034FF68;
extern s32 lbl_80350958;
extern s32 lbl_80350968;
extern u32 lbl_8035096C;
extern s32 lbl_80350978;
M2C_UNK __OSMaskInterrupts(M2C_UNK);
M2C_UNK OSCreateAlarm(void *);
extern s32 Callback_80350940;
extern u32 lbl_8035093C;
extern s32 lbl_80350970;
extern u32 lbl_80350974;
extern s32 WorkAroundSeekLocation_80350960;
void *fn_800D0804(s32, s32);
extern u32 WorkAroundType_8035095C;
extern M2C_UNK AlarmForTimeout_8031C6B8;
extern s32 lbl_80350944;

f32 PSMTXRotTrig(s32 arg1, f64 farg0, f64 farg1);
f32 __PSMTXRotAxisRadInternal(void *arg1, f64 farg0, f64 farg1);
void fn_800CC2C4(s32 arg0, s32 arg1, f32 farg0);
void PSMTXTrans(void *arg0, f32 farg0, f32 farg1, f32 farg2);
f32 PSMTXTransApply(f64 farg0, f64 farg1, f64 farg2);
void PSMTXScale(void *arg0, f32 farg0, f32 farg1, f32 farg2);
void PSMTXQuat(void);
void C_MTXLookAt(void *arg0, void *arg1, f32 *arg2, void *arg3);
f32 PSMTXMultVec(void);
f32 PSMTXMultVecSR(void);
void C_MTXFrustum(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5);
void C_MTXPerspective(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void C_MTXOrtho(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5);
void PSVECAdd(void);
void PSVECSubtract(void);
void PSVECScale(void);
void PSVECNormalize(void);
f32 fn_800CC960(void *arg0);
f32 PSVECMag(void *arg0);
f32 PSVECDotProduct(void);
f32 PSVECCrossProduct(void *arg0, void *arg1);
f32 PSVECSquareDistance(void);
f32 PSVECDistance(void);
void C_QUATSlerp(void *arg0, void *arg1, void *arg2, f32 farg0);
void __DVDInitWA(void);
void __DVDInterruptHandler(M2C_UNK *arg1);
void AlarmHandler_800CCF28(void);
void AlarmHandlerForTimeout_800CCFAC(M2C_UNK *arg1);
void Read(s32 arg0, u32 arg1, u32 arg2, s32 arg3);
void SeekTwiceBeforeRead(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 DVDLowRead(s32 arg0, s32 arg1, u32 arg2, s32 arg3);
s32 DVDLowSeek(u32 arg0, s32 arg1);

f32 PSMTXRotTrig(s32 arg1, f64 farg0, f64 farg1) {
    u32 temp_r0;

    temp_r0 = arg1 | 0x20;
    M2C_ERROR(/* unknown instruction: ps_neg $f2, $f5 */);
    switch (temp_r0) {                              /* irregular */
    case 0x78:
        M2C_ERROR(/* unknown instruction: ps_merge00 $f3, $f5, $f4 */);
        return M2C_ERROR(/* unknown instruction: ps_merge00 $f1, $f4, $f2 */);
    case 0x79:
        M2C_ERROR(/* unknown instruction: ps_merge00 $f3, $f4, $f0 */);
        M2C_ERROR(/* unknown instruction: ps_merge00 $f2, $f2, $f0 */);
        M2C_ERROR(/* unknown instruction: ps_merge00 $f0, $f5, $f0 */);
        return M2C_ERROR(/* unknown instruction: ps_merge00 $f1, $f0, $f1 */);
    case 0x7A:
        M2C_ERROR(/* unknown instruction: ps_merge00 $f3, $f5, $f4 */);
        M2C_ERROR(/* unknown instruction: ps_merge00 $f2, $f4, $f2 */);
        return M2C_ERROR(/* unknown instruction: ps_merge00 $f1, $f1, $f0 */);
    default:
        return lbl_80351CD0;
    }
}

f32 __PSMTXRotAxisRadInternal(void *arg1, f64 farg0, f64 farg1) {
    M2C_ERROR(/* unknown instruction: ps_mul $f4, $f2, $f2 */);
    M2C_ERROR(/* unknown instruction: ps_madd $f5, $f3, $f3, $f4 */);
    M2C_ERROR(/* unknown instruction: ps_sum0 $f6, $f5, $f3, $f4 */);
    M2C_ERROR(/* unknown instruction: ps_merge00 $f11, $f11, $f11 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f2, $f2, $f7 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f3, $f3, $f7 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f6, $f2, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f10, $f2, $f12 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f7, $f3, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_muls1 $f5, $f6, $f2 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f4, $f6, $f2 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f6, $f6, $f3 */);
    M2C_ERROR(/* unknown instruction: ps_neg $f2, $f10 */);
    M2C_ERROR(/* unknown instruction: ps_sum0 $f9, $f6, $f1, $f10 */);
    M2C_ERROR(/* unknown instruction: ps_sum0 $f4, $f4, $f0, $f11 */);
    M2C_ERROR(/* unknown instruction: ps_sum1 $f5, $f11, $f8, $f5 */);
    M2C_ERROR(/* unknown instruction: ps_sum0 $f0, $f2, $f1, $f6 */);
    M2C_ERROR(/* unknown instruction: ps_sum0 $f2, $f6, $f6, $f2 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f7, $f7, $f3 */);
    M2C_ERROR(/* unknown instruction: ps_sum1 $f6, $f10, $f2, $f6 */);
    M2C_ERROR(/* unknown instruction: ps_sum0 $f7, $f7, $f1, $f11 */);
    return lbl_80351CD8 - lbl_80351CD8;
}

void fn_800CC2C4(s32 arg0, s32 arg1, f32 farg0) {
    f32 temp_f31;

    temp_f31 = fn_80156F14(farg0);
    /* draft: did not compile: __PSMTXRotAxisRadInternal(arg0, arg1, temp_f31, fn_80156F38(farg0)); */
}

void PSMTXTrans(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0xC) = farg0;
    M2C_FIELD(arg0, f32 *, 0x1C) = farg1;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) lbl_80351CD4;
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) lbl_80351CD0;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) lbl_80351CD4;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_80351CD0;
    M2C_FIELD(arg0, f32 *, 0x2C) = farg2;
    M2C_FIELD(arg0, f32 *, 0) = (f32) lbl_80351CD0;
}

f32 PSMTXTransApply(f64 farg0, f64 farg1, f64 farg2) {
    M2C_ERROR(/* unknown instruction: ps_sum1 $f5, $f1, $f5, $f5 */);
    M2C_ERROR(/* unknown instruction: ps_sum1 $f7, $f2, $f7, $f7 */);
    M2C_ERROR(/* unknown instruction: ps_sum1 $f8, $f3, $f8, $f8 */);
    return (f32) farg0;
}

void PSMTXScale(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0) = farg0;
    M2C_FIELD(arg0, f32 *, 0x14) = farg1;
    M2C_FIELD(arg0, f32 *, 0x28) = farg2;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_80351CD4;
}

void PSMTXQuat(void) {
    M2C_ERROR(/* unknown instruction: ps_mul $f6, $f4, $f4 */);
    M2C_ERROR(/* unknown instruction: ps_merge10 $f9, $f4, $f4 */);
    M2C_ERROR(/* unknown instruction: ps_madd $f8, $f5, $f5, $f6 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f7, $f5, $f5 */);
    M2C_ERROR(/* unknown instruction: ps_sum0 $f3, $f8, $f8, $f8 */);
    M2C_ERROR(/* unknown instruction: ps_muls1 $f10, $f9, $f5 */);
    M2C_ERROR(/* unknown instruction: ps_sum1 $f8, $f7, $f8, $f6 */);
    M2C_ERROR(/* unknown instruction: ps_nmsub $f3, $f3, $f11, $f2 */);
    M2C_ERROR(/* unknown instruction: ps_muls1 $f7, $f5, $f5 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f3, $f11, $f3 */);
    M2C_ERROR(/* unknown instruction: ps_sum0 $f6, $f6, $f6, $f6 */);
    M2C_ERROR(/* unknown instruction: ps_madd $f11, $f4, $f9, $f7 */);
    M2C_ERROR(/* unknown instruction: ps_msub $f7, $f4, $f9, $f7 */);
    M2C_ERROR(/* unknown instruction: ps_nmsub $f6, $f6, $f3, $f1 */);
    M2C_ERROR(/* unknown instruction: ps_nmsub $f8, $f8, $f3, $f1 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f11, $f11, $f3 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f7, $f7, $f3 */);
    M2C_ERROR(/* unknown instruction: ps_madds0 $f9, $f4, $f5, $f10 */);
    M2C_ERROR(/* unknown instruction: ps_merge00 $f5, $f11, $f8 */);
    M2C_ERROR(/* unknown instruction: ps_nmsub $f10, $f10, $f2, $f9 */);
    M2C_ERROR(/* unknown instruction: ps_merge10 $f4, $f8, $f7 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f9, $f9, $f3 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f10, $f10, $f3 */);
    M2C_ERROR(/* unknown instruction: ps_merge10 $f7, $f10, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_merge01 $f11, $f10, $f9 */);
}

void C_MTXLookAt(void *arg0, void *arg1, f32 *arg2, void *arg3) {
    s32 sp20;
    s32 sp1C;
    s32 sp2C;
    s32 sp28;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp24;
    f32 sp18;
    f32 temp_f1;

    sp30 = M2C_FIELD(arg1, f32 *, 0) - M2C_FIELD(arg3, f32 *, 0);
    sp34 = M2C_FIELD(arg1, f32 *, 4) - M2C_FIELD(arg3, f32 *, 4);
    temp_f1 = M2C_FIELD(arg1, f32 *, 8);
    sp38 = temp_f1 - M2C_FIELD(arg3, f32 *, 8);
    PSVECNormalize();
    PSVECCrossProduct((void *)(arg2), (void *)(&sp30));
    PSVECNormalize();
    PSVECCrossProduct((void *)(&sp30), (void *)(&sp24));
    M2C_FIELD(arg0, f32 *, 0) = sp24;
    M2C_FIELD(arg0, f32 *, 4) = sp28;
    M2C_FIELD(arg0, f32 *, 8) = sp2C;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) -((M2C_FIELD(arg1, f32 *, 8) * sp2C) + ((M2C_FIELD(arg1, f32 *, 0) * sp24) + (M2C_FIELD(arg1, f32 *, 4) * sp28)));
    M2C_FIELD(arg0, f32 *, 0x10) = sp18;
    M2C_FIELD(arg0, f32 *, 0x14) = sp1C;
    M2C_FIELD(arg0, f32 *, 0x18) = sp20;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) -((M2C_FIELD(arg1, f32 *, 8) * sp20) + ((M2C_FIELD(arg1, f32 *, 0) * sp18) + (M2C_FIELD(arg1, f32 *, 4) * sp1C)));
    M2C_FIELD(arg0, f32 *, 0x20) = sp30;
    M2C_FIELD(arg0, f32 *, 0x24) = sp34;
    M2C_FIELD(arg0, f32 *, 0x28) = sp38;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) -((M2C_FIELD(arg1, f32 *, 8) * sp38) + ((M2C_FIELD(arg1, f32 *, 0) * sp30) + (M2C_FIELD(arg1, f32 *, 4) * sp34)));
}

f32 PSMTXMultVec(void) {
    M2C_ERROR(/* unknown instruction: ps_mul $f4, $f2, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_madd $f5, $f3, $f1, $f4 */);
    M2C_ERROR(/* unknown instruction: ps_sum0 $f6, $f5, $f6, $f5 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f10, $f8, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_madd $f11, $f9, $f1, $f10 */);
    M2C_ERROR(/* unknown instruction: ps_sum0 $f12, $f11, $f12, $f11 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f4, $f2, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_madd $f5, $f3, $f1, $f4 */);
    M2C_ERROR(/* unknown instruction: ps_sum0 $f6, $f5, $f6, $f5 */);
    return M2C_ERROR(/* psq_l unimplemented */);
}

f32 PSMTXMultVecSR(void) {
    M2C_ERROR(/* unknown instruction: ps_mul $f8, $f0, $f6 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f10, $f2, $f6 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f12, $f4, $f6 */);
    M2C_ERROR(/* unknown instruction: ps_sum0 $f8, $f8, $f8, $f8 */);
    M2C_ERROR(/* unknown instruction: ps_sum0 $f10, $f10, $f10, $f10 */);
    M2C_ERROR(/* unknown instruction: ps_sum0 $f12, $f12, $f12, $f12 */);
    M2C_ERROR(/* unknown instruction: ps_madd $f9, $f1, $f7, $f8 */);
    M2C_ERROR(/* unknown instruction: ps_madd $f11, $f3, $f7, $f10 */);
    M2C_ERROR(/* unknown instruction: ps_madd $f13, $f5, $f7, $f12 */);
    return M2C_ERROR(/* psq_l unimplemented */);
}

void C_MTXFrustum(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5) {
    f32 temp_f11;
    f32 temp_f6;
    f32 temp_f8;
    f32 temp_f9;

    temp_f11 = lbl_80351CE0 / (farg3 - farg2);
    temp_f8 = lbl_80351CE4 * farg4;
    temp_f9 = lbl_80351CE0 / (farg0 - farg1);
    M2C_FIELD(arg0, f32 *, 0) = (f32) (temp_f8 * temp_f11);
    temp_f6 = lbl_80351CE0 / (farg5 - farg4);
    M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_80351CE8;
    M2C_FIELD(arg0, f32 *, 8) = (f32) (temp_f11 * (farg3 + farg2));
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) lbl_80351CE8;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) lbl_80351CE8;
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) (temp_f8 * temp_f9);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) (temp_f9 * (farg0 + farg1));
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_80351CE8;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_80351CE8;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_80351CE8;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) (-farg4 * temp_f6);
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (temp_f6 * -(farg5 * farg4));
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_80351CE8;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) lbl_80351CE8;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_80351CEC;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_80351CE8;
}

void C_MTXPerspective(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    f32 temp_f3;
    f32 temp_f4;

    temp_f4 = lbl_80351CE0 / fn_80156EF0(lbl_80351CF4 * (lbl_80351CF0 * farg0), lbl_80351CF0);
    M2C_FIELD(arg0, f32 *, 0) = (f32) (temp_f4 / farg1);
    temp_f3 = lbl_80351CE0 / (farg3 - farg2);
    M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_80351CE8;
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_80351CE8;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) lbl_80351CE8;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) lbl_80351CE8;
    M2C_FIELD(arg0, f32 *, 0x14) = temp_f4;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) lbl_80351CE8;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_80351CE8;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_80351CE8;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_80351CE8;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) (-farg2 * temp_f3);
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (temp_f3 * -(farg3 * farg2));
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_80351CE8;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) lbl_80351CE8;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_80351CEC;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_80351CE8;
}

void C_MTXOrtho(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5) {
    f32 temp_f10;
    f32 temp_f4;
    f32 temp_f8;

    temp_f10 = lbl_80351CE0 / (farg3 - farg2);
    temp_f8 = lbl_80351CE0 / (farg0 - farg1);
    M2C_FIELD(arg0, f32 *, 0) = (f32) (lbl_80351CE4 * temp_f10);
    M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_80351CE8;
    temp_f4 = lbl_80351CE0 / (farg5 - farg4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_80351CE8;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) (temp_f10 * -(farg3 + farg2));
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) lbl_80351CE8;
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) (lbl_80351CE4 * temp_f8);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) lbl_80351CE8;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (temp_f8 * -(farg0 + farg1));
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_80351CE8;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_80351CE8;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) (lbl_80351CEC * temp_f4);
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (-farg5 * temp_f4);
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_80351CE8;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) lbl_80351CE8;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_80351CE8;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_80351CE0;
}

void PSVECAdd(void) {
    M2C_ERROR(/* unknown instruction: ps_add $f6, $f2, $f4 */);
    M2C_ERROR(/* unknown instruction: ps_add $f7, $f3, $f5 */);
}

void PSVECSubtract(void) {
    M2C_ERROR(/* unknown instruction: ps_sub $f6, $f2, $f4 */);
    M2C_ERROR(/* unknown instruction: ps_sub $f7, $f3, $f5 */);
}

void PSVECScale(void) {
    M2C_ERROR(/* unknown instruction: ps_muls0 $f0, $f0, $f1 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f0, $f2, $f1 */);
}

void PSVECNormalize(void) {
    M2C_ERROR(/* unknown instruction: ps_mul $f5, $f2, $f2 */);
    M2C_ERROR(/* unknown instruction: ps_madd $f4, $f3, $f3, $f5 */);
    M2C_ERROR(/* unknown instruction: ps_sum0 $f4, $f4, $f3, $f5 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f2, $f2, $f5 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f3, $f3, $f5 */);
}

f32 fn_800CC960(void *arg0) {
    M2C_ERROR(/* unknown instruction: ps_mul $f0, $f0, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_madd $f1, $f1, $f1, $f0 */);
    return M2C_ERROR(/* unknown instruction: ps_sum0 $f1, $f1, $f0, $f0 */);
}

f32 PSVECMag(void *arg0) {
    f32 temp_f0;
    f32 var_f1;

    M2C_ERROR(/* unknown instruction: ps_mul $f0, $f0, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_madd $f1, $f1, $f1, $f0 */);
    var_f1 = M2C_ERROR(/* unknown instruction: ps_sum0 $f1, $f1, $f0, $f0 */);
    if (var_f1 != (lbl_80351CF8 - lbl_80351CF8)) {
        temp_f0 = __frsqrte(var_f1);
        var_f1 *= -((temp_f0 * temp_f0 * var_f1) - lbl_80351CFC) * (temp_f0 * lbl_80351CF8);
    }
    return var_f1;
}

f32 PSVECDotProduct(void) {
    M2C_ERROR(/* unknown instruction: ps_mul $f2, $f2, $f3 */);
    M2C_ERROR(/* unknown instruction: ps_madd $f3, $f5, $f4, $f2 */);
    return M2C_ERROR(/* unknown instruction: ps_sum0 $f1, $f3, $f2, $f2 */);
}

f32 PSVECCrossProduct(void *arg0, void *arg1) {
    M2C_ERROR(/* unknown instruction: ps_merge10 $f6, $f1, $f1 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f4, $f1, $f2 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f7, $f1, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_msub $f5, $f0, $f3, $f4 */);
    M2C_ERROR(/* unknown instruction: ps_msub $f8, $f0, $f6, $f7 */);
    M2C_ERROR(/* unknown instruction: ps_merge11 $f9, $f5, $f5 */);
    M2C_ERROR(/* unknown instruction: ps_merge01 $f10, $f5, $f8 */);
    M2C_ERROR(/* unknown instruction: ps_neg $f10, $f10 */);
    return M2C_ERROR(/* psq_l unimplemented */);
}

f32 PSVECSquareDistance(void) {
    M2C_ERROR(/* unknown instruction: ps_sub $f2, $f0, $f1 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f2, $f2, $f2 */);
    M2C_ERROR(/* unknown instruction: ps_sub $f0, $f0, $f1 */);
    M2C_ERROR(/* unknown instruction: ps_madd $f1, $f0, $f0, $f2 */);
    return M2C_ERROR(/* unknown instruction: ps_sum0 $f1, $f1, $f2, $f2 */);
}

f32 PSVECDistance(void) {
    f32 temp_f0;
    f32 var_f1;

    M2C_ERROR(/* unknown instruction: ps_sub $f2, $f0, $f1 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f2, $f2, $f2 */);
    M2C_ERROR(/* unknown instruction: ps_sub $f0, $f0, $f1 */);
    M2C_ERROR(/* unknown instruction: ps_madd $f1, $f0, $f0, $f2 */);
    var_f1 = M2C_ERROR(/* unknown instruction: ps_sum0 $f1, $f1, $f2, $f2 */);
    if ((lbl_80351CF8 - lbl_80351CF8) != var_f1) {
        temp_f0 = __frsqrte(var_f1);
        var_f1 *= -((temp_f0 * temp_f0 * var_f1) - lbl_80351CFC) * (temp_f0 * lbl_80351CF8);
    }
    return var_f1;
}

void C_QUATSlerp(void *arg0, void *arg1, void *arg2, f32 farg0) {
    f32 temp_f27;
    f32 temp_f28;
    f32 var_f1;
    f32 var_f30;
    f32 var_f30_2;
    f32 var_f31;

    var_f30 = lbl_80351D04;
    var_f1 = (M2C_FIELD(arg0, f32 *, 0xC) * M2C_FIELD(arg1, f32 *, 0xC)) + ((M2C_FIELD(arg0, f32 *, 8) * M2C_FIELD(arg1, f32 *, 8)) + ((M2C_FIELD(arg0, f32 *, 0) * M2C_FIELD(arg1, f32 *, 0)) + (M2C_FIELD(arg0, f32 *, 4) * M2C_FIELD(arg1, f32 *, 4))));
    if (var_f1 < lbl_80351D00) {
        var_f1 = -var_f1;
        var_f30 = -var_f30;
    }
    M2C_ERROR(/* unknown instruction: cror eq, lt, eq */);
    if (var_f1 == lbl_80351D08) {
        temp_f27 = fn_80156F5C();
        temp_f28 = fn_80156F14((float)(0));
        var_f31 = fn_80156F14((lbl_80351D04 - farg0) * temp_f27) / temp_f28;
        var_f30_2 = var_f30 * (fn_80156F14(farg0 * temp_f27) / temp_f28);
    } else {
        var_f30_2 = var_f30 * farg0;
        var_f31 = lbl_80351D04 - farg0;
    }
    M2C_FIELD(arg2, f32 *, 0) = (f32) ((var_f31 * M2C_FIELD(arg0, f32 *, 0)) + (var_f30_2 * M2C_FIELD(arg1, f32 *, 0)));
    M2C_FIELD(arg2, f32 *, 4) = (f32) ((var_f31 * M2C_FIELD(arg0, f32 *, 4)) + (var_f30_2 * M2C_FIELD(arg1, f32 *, 4)));
    M2C_FIELD(arg2, f32 *, 8) = (f32) ((var_f31 * M2C_FIELD(arg0, f32 *, 8)) + (var_f30_2 * M2C_FIELD(arg1, f32 *, 8)));
    M2C_FIELD(arg2, f32 *, 0xC) = (f32) ((var_f31 * M2C_FIELD(arg0, f32 *, 0xC)) + (var_f30_2 * M2C_FIELD(arg1, f32 *, 0xC)));
}

void __DVDInitWA(void) {
    NextCommandNumber_8035097C = 0;
    CommandList_8031C650 = -1;
    __DVDLowSetWAType(0, 0);
    OSInitAlarm();
}

void __DVDInterruptHandler(M2C_UNK *arg1) {
    M2C_UNK sp10;
    M2C_UNK (*temp_r12)(u32);
    s32 temp_cr0_eq;
    s32 temp_r0;
    u8 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r31;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r4;
    s32 var_r0;
    u32 var_r29;
    u64 temp_ret;
    void *temp_r27_2;
    void *temp_r4_2;
    void *temp_r6;
    s32 temp_r27;

    var_r29 = 0;
    if ((s32) lbl_80350978 != 0) {
        temp_ret = __OSGetSystemTime();
        lbl_8035096C = (u32) temp_ret;
        lbl_80350968 = temp_ret;
        lbl_8034FF68 = 0;
        M2C_FIELD(&CommandList_8031C650, s32 *, 0xB8) = (s32) M2C_FIELD(&CommandList_8031C650, s32 *, 0xC4);
        M2C_FIELD(&CommandList_8031C650, s32 *, 0xBC) = (s32) M2C_FIELD(&CommandList_8031C650, s32 *, 0xC8);
        M2C_FIELD(&CommandList_8031C650, s32 *, 0xC0) = (s32) M2C_FIELD(&CommandList_8031C650, s32 *, 0xCC);
        if ((s32) StopAtNextInt_80350938 == 1) {
            var_r29 = 8;
        }
    }
    lbl_80350978 = 0;
    StopAtNextInt_80350938 = 0;
    temp_r0 = M2C_FIELD((void *)0xCC006000, s32 *, 0);
    temp_r31 = temp_r0 & 0x2A;
    temp_r27 = temp_r0 & 0x54 & (temp_r31 * 2);
    if (temp_r27 & 0x40) {
        var_r29 |= 8;
    }
    if (temp_r27 & 0x10) {
        var_r29 |= 1;
    }
    if (temp_r27 & 4) {
        var_r29 |= 2;
    }
    if (var_r29 != 0) {
        ResetOccurred_80350950 = 0U;
        OSCancelAlarm(&CommandList_8031C650 + 0x68);
    }
    M2C_FIELD((void *)0xCC006000, s32 *, 0) = (s32) (temp_r27 | temp_r31);
    if (((u32) ResetOccurred_80350950 != 0U) && (temp_r4 = ((__OSGetSystemTime() - M2C_FIELD(&LastResetEnd_80350948, s32 *, 0)) - !M2C_CARRY) ^ 0x80000000, ((-((temp_r4 - temp_r4) - !M2C_CARRY) == 0) == 0))) {
        /* draft: did not compile: temp_r27_2 = (void *)0xCC000000 + 0x6000; */
        temp_r0_2 = M2C_FIELD(temp_r27_2, s32 *, 4);
        if (temp_r0_2 & 4 & ((temp_r0_2 * 2) & 4) & 4) {
            if (((M2C_UNK (*)(M2C_UNK)) lbl_80350944) != NULL) {
                /* draft: did not compile: lbl_80350944(4); */
            }
            lbl_80350944 = NULL;
        }
        M2C_FIELD(temp_r27_2, s32 *, 4) = (s32) M2C_FIELD(temp_r27_2, s32 *, 4);
    } else if ((s32) WaitingCoverClose_80350954 != 0) {
        temp_r0_3 = M2C_FIELD((void *)0xCC006000, s32 *, 4);
        temp_r3 = temp_r0_3 & 4 & ((temp_r0_3 * 2) & 4);
        if (temp_r3 & 4) {
            var_r29 |= 4;
        }
        M2C_FIELD((void *)0xCC006000, s32 *, 4) = (s32) (temp_r3 | (temp_r0_3 & 2));
        WaitingCoverClose_80350954 = 0;
    } else {
        *(s32 *)0xCC006004 = 0;
    }
    if ((var_r29 & 8) && ((s32) lbl_80350958 == 0)) {
        var_r29 &= 0xFFFFFFF7;
    }
    if (var_r29 & 1) {
        temp_r0_4 = NextCommandNumber_8035097C;
        temp_r0_4 *= 0x14;
        temp_r3_2 = *(&CommandList_8031C650 + temp_r0_4);
        if (temp_r3_2 == 1) {
            temp_r6 = &CommandList_8031C650 + temp_r0_4;
            NextCommandNumber_8035097C += 1;
            Read(M2C_FIELD(temp_r6, s32 *, 4), M2C_FIELD(temp_r6, s32 *, 8), M2C_FIELD(temp_r6, s32 *, 0xC), M2C_FIELD(temp_r6, s32 *, 0x10));
            var_r0 = 1;
        } else if (temp_r3_2 == 2) {
            temp_r4_2 = &CommandList_8031C650 + temp_r0_4;
            NextCommandNumber_8035097C += 1;
            DVDLowSeek(M2C_FIELD(temp_r4_2, s32 *, 0xC), M2C_FIELD(temp_r4_2, s32 *, 0x10));
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        if (var_r0 != 0) {
            return;
        }
        goto block_35;
    }
    M2C_FIELD(&CommandList_8031C650, s32 *, 0) = -1;
    NextCommandNumber_8035097C = 0;
block_35:
    OSClearContext(&sp10);
    OSSetCurrentContext(&sp10);
    if (var_r29 != 0) {
        /* draft: did not compile: temp_r12 = Callback_80350940; */
        temp_cr0_eq = temp_r12 == NULL;
        Callback_80350940 = NULL;
        if (temp_cr0_eq == 0) {
            temp_r12(var_r29);
        }
        lbl_80350958 = 0;
    }
    OSClearContext(&sp10);
    OSSetCurrentContext(arg1);
}

void AlarmHandler_800CCF28(void) {
    s32 temp_r0;
    s32 temp_r3;
    void *temp_r4;
    void *temp_r6;

    temp_r0 = NextCommandNumber_8035097C * 0x14;
    temp_r3 = *(&CommandList_8031C650 + temp_r0);
    switch (temp_r3) {                              /* irregular */
    case 1:
        temp_r6 = &CommandList_8031C650 + temp_r0;
        NextCommandNumber_8035097C += 1;
        Read(M2C_FIELD(temp_r6, s32 *, 4), M2C_FIELD(temp_r6, s32 *, 8), M2C_FIELD(temp_r6, s32 *, 0xC), M2C_FIELD(temp_r6, s32 *, 0x10));
        return;
    case 2:
        temp_r4 = &CommandList_8031C650 + temp_r0;
        NextCommandNumber_8035097C += 1;
        DVDLowSeek(M2C_FIELD(temp_r4, s32 *, 0xC), M2C_FIELD(temp_r4, s32 *, 0x10));
        return;
    }
}

void AlarmHandlerForTimeout_800CCFAC(M2C_UNK *arg1) {
    M2C_UNK sp10;
    M2C_UNK (*temp_r12)(M2C_UNK);
    s32 temp_cr0_eq;

    __OSMaskInterrupts(0x400);
    OSClearContext(&sp10);
    OSSetCurrentContext(&sp10);
    /* draft: did not compile: temp_r12 = Callback_80350940; */
    temp_cr0_eq = temp_r12 == NULL;
    Callback_80350940 = NULL;
    if (temp_cr0_eq == 0) {
        temp_r12(0x10);
    }
    OSClearContext(&sp10);
    OSSetCurrentContext(arg1);
}

void Read(s32 arg0, u32 arg1, u32 arg2, s32 arg3) {
    s32 temp_r30;
    s32 temp_r30_2;
    u64 temp_ret;

    StopAtNextInt_80350938 = 0;
    Callback_80350940 = arg3;
    lbl_80350978 = 1;
    temp_ret = __OSGetSystemTime(&CommandList_8031C650);
    lbl_80350974 = (u32) temp_ret;
    M2C_FIELD((void *)0xCC006000, s32 *, 8) = 0xA8000000;
    lbl_80350970 = temp_ret;
    M2C_FIELD((void *)0xCC006000, u32 *, 0xC) = (u32) (arg2 >> 2U);
    M2C_FIELD((void *)0xCC006000, u32 *, 0x10) = arg1;
    M2C_FIELD((void *)0xCC006000, s32 *, 0x14) = arg0;
    M2C_FIELD((void *)0xCC006000, u32 *, 0x18) = arg1;
    lbl_8035093C = arg1;
    M2C_FIELD((void *)0xCC006000, s32 *, 0x1C) = 3;
    if (arg1 > 0xA00000U) {
        temp_r30 = ((u32) *(u32 *)0x800000F8 >> 2U) * 0x14;
        OSCreateAlarm(&CommandList_8031C650 + 0x68);
        OSSetAlarm(&CommandList_8031C650 + 0x68, 0, temp_r30, AlarmHandlerForTimeout_800CCFAC);
        return;
    }
    /* draft: did not compile: temp_r30_2 = ((u32) *(void *)0x800000F8 >> 2U) * 0xA; */
    OSCreateAlarm(&CommandList_8031C650 + 0x68);
    OSSetAlarm(&CommandList_8031C650 + 0x68, 0, temp_r30_2, AlarmHandlerForTimeout_800CCFAC);
}

void SeekTwiceBeforeRead(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r8;
    s32 var_r10;

    temp_r8 = arg2 & 0xFFFF8000;
    if (temp_r8 == 0) {
        var_r10 = 0;
    } else {
        var_r10 = temp_r8 + WorkAroundSeekLocation_80350960;
    }
    M2C_FIELD(&CommandList_8031C650, s32 *, 0) = 2;
    M2C_FIELD(&CommandList_8031C650, s32 *, 0xC) = var_r10;
    M2C_FIELD(&CommandList_8031C650, s32 *, 0x10) = arg3;
    M2C_FIELD(&CommandList_8031C650, s32 *, 0x14) = 1;
    M2C_FIELD(&CommandList_8031C650, s32 *, 0x18) = arg0;
    M2C_FIELD(&CommandList_8031C650, s32 *, 0x1C) = arg1;
    M2C_FIELD(&CommandList_8031C650, s32 *, 0x20) = arg2;
    M2C_FIELD(&CommandList_8031C650, s32 *, 0x24) = arg3;
    M2C_FIELD(&CommandList_8031C650, s32 *, 0x28) = -1;
    NextCommandNumber_8035097C = 0;
    DVDLowSeek((unsigned long)(var_r10), (long)(arg3));
}

#pragma push
#pragma peephole off
s32 DVDLowRead(s32 arg0, s32 arg1, u32 arg2, s32 arg3) {
    s32 temp_r23_2;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r5;
    s32 temp_r8;
    s32 temp_r9;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r3;
    u32 temp_r22;
    u32 temp_r23;
    u32 temp_r3;
    u32 temp_r4;
    u64 temp_ret;

    M2C_FIELD((void *)0xCC006000, s32 *, 0x18) = arg1;
    M2C_FIELD(&CommandList_8031C650, s32 *, 0xC4) = arg0;
    M2C_FIELD(&CommandList_8031C650, s32 *, 0xC8) = arg1;
    M2C_FIELD(&CommandList_8031C650, u32 *, 0xCC) = arg2;
    if ((u32) WorkAroundType_8035095C == 0U) {
        M2C_FIELD(&CommandList_8031C650, s32 *, 0) = -1;
        NextCommandNumber_8035097C = 0;
        Read(arg0, arg1, arg2, arg3);
    } else if ((u32) WorkAroundType_8035095C == 1U) {
        if ((s32) lbl_8034FF68 != 0) {
            SeekTwiceBeforeRead(arg0, arg1, arg2, arg3);
        } else {
            temp_r23 = (u32) M2C_FIELD(&CommandList_8031C650, u32 *, 0xCC) >> 0xFU;
            temp_r22 = (u32) (M2C_FIELD(&CommandList_8031C650, s32 *, 0xC0) + (M2C_FIELD(&CommandList_8031C650, s32 *, 0xBC) - 1)) >> 0xFU;
            if ((s8) M2C_FIELD(fn_800D0804(M2C_FIELD(&CommandList_8031C650, s32 *, 0xBC), M2C_FIELD(&CommandList_8031C650, s32 *, 0xC0)), s8 *, 8) != 0) {
                var_r0 = 1;
            } else {
                var_r0 = 0;
            }
            if (var_r0 != 0) {
                var_r3 = 5;
            } else {
                var_r3 = 0xF;
            }
            if ((temp_r23 > (u32) (temp_r22 - 2)) || (temp_r23 < (u32) (temp_r22 + (var_r3 + 3)))) {
                var_r0_2 = 1;
            } else {
                var_r0_2 = 0;
            }
            if (var_r0_2 == 0) {
                M2C_FIELD(&CommandList_8031C650, s32 *, 0) = -1;
                NextCommandNumber_8035097C = 0;
                Read(arg0, arg1, arg2, arg3);
            } else {
                temp_r3 = (u32) (M2C_FIELD(&CommandList_8031C650, s32 *, 0xC0) + (M2C_FIELD(&CommandList_8031C650, s32 *, 0xBC) - 1)) >> 0xFU;
                temp_r4 = (u32) M2C_FIELD(&CommandList_8031C650, u32 *, 0xCC) >> 0xFU;
                if ((temp_r3 == temp_r4) || ((u32) (temp_r3 + 1) == temp_r4)) {
                    temp_ret = __OSGetSystemTime();
                    temp_r9 = (u32) temp_ret - lbl_8035096C;
                    temp_r8 = (temp_ret - lbl_80350968) - !M2C_CARRY;
                    temp_r4_2 = 0 ^ 0x80000000;
                    if (-((temp_r4_2 - temp_r4_2) - !M2C_CARRY) != 0) {
                        M2C_FIELD(&CommandList_8031C650, s32 *, 0) = -1;
                        NextCommandNumber_8035097C = 0;
                        Read(arg0, arg1, arg2, arg3);
                    } else {
                        M2C_FIELD(&CommandList_8031C650, s32 *, 0) = 1;
                        M2C_FIELD(&CommandList_8031C650, s32 *, 4) = arg0;
                        M2C_FIELD(&CommandList_8031C650, s32 *, 8) = arg1;
                        M2C_FIELD(&CommandList_8031C650, u32 *, 0xC) = arg2;
                        M2C_FIELD(&CommandList_8031C650, s32 *, 0x10) = arg3;
                        M2C_FIELD(&CommandList_8031C650, s32 *, 0x14) = -1;
                        temp_r5 = ((*(u32 *)0x800000F8 / 4000) * 5) - temp_r9;
                        temp_r4_3 = (0 - temp_r8) - !M2C_CARRY;
                        NextCommandNumber_8035097C = 0;
                        temp_r23_2 = temp_r5 + ((u32) ((*(u32 *)0x800000F8 / 500000) * 0x1F4) >> 3U);
                        OSCreateAlarm((void *)(&CommandList_8031C650 + 0x40));
                        OSSetAlarm(&CommandList_8031C650 + 0x40, temp_r4_3 + M2C_CARRY, temp_r23_2, AlarmHandler_800CCF28);
                    }
                } else {
                    SeekTwiceBeforeRead(arg0, arg1, arg2, arg3);
                }
            }
        }
    }
    return 1;
}
#pragma pop

s32 DVDLowSeek(u32 arg0, s32 arg1) {
    s32 temp_r30;

    Callback_80350940 = arg1;
    StopAtNextInt_80350938 = 0;
    M2C_FIELD((void *)0xCC006000, s32 *, 8) = 0xAB000000;
    M2C_FIELD((void *)0xCC006000, u32 *, 0xC) = (u32) (arg0 >> 2U);
    M2C_FIELD((void *)0xCC006000, s32 *, 0x1C) = 1;
    temp_r30 = ((u32) *(u32 *)0x800000F8 >> 2U) * 0xA;
    OSCreateAlarm((void *)(&AlarmForTimeout_8031C6B8));
    OSSetAlarm(&AlarmForTimeout_8031C6B8, 0, temp_r30, AlarmHandlerForTimeout_800CCFAC);
    return 1;
}
