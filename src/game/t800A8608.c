/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_800A6654();
void *fn_800A688C();
void *fn_800A68C0();
M2C_UNK fn_800A69E0();
void *fn_800A69EC();
void *fn_800A6A10(void *);
M2C_UNK fn_800A7B5C(void *, s32);
M2C_UNK fn_800A7EDC(void *, s32, s32, s32);
M2C_UNK fn_80108810(s32);
extern s32 lbl_8034EB30;
f32 fn_8009CB70();
extern f32 lbl_80351CA8;
s32 fn_8009CBD4();
f32 fn_8009CC20();
s32 fn_8009CC88();
M2C_UNK fn_8009CCBC(f32 *);
extern f32 lbl_80351CAC;
void *fn_8007AEC4(M2C_UNK, M2C_UNK);
void *fn_8007AF20(void *);
M2C_UNK fn_8007B1B0();
M2C_UNK fn_8007B1C0();
u32 PSMTXInverse(void *, M2C_UNK *);
M2C_UNK PSMTXMultVecSR(M2C_UNK *, f32 *, f32 *, f32, f32, M2C_UNK *);
M2C_UNK PSVECSubtract(s32, M2C_UNK *, f32 *);
f32 PSVECMag(f32 *);
M2C_UNK HSD_JObjSetupMatrixSub(void *);
M2C_UNK HSD_MtxGetTranslate(void *, M2C_UNK *);
M2C_UNK __assert(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_801DA790;
extern M2C_UNK lbl_8034FE58;
extern M2C_UNK lbl_8034FE60;
extern f32 lbl_80351CB0;
M2C_UNK OSAllocFromHeap(s32, s32);
extern s32 lbl_8034FE78;
M2C_UNK OSFreeToHeap(s32, s32);
extern s32 lbl_8034FE68;
extern s32 lbl_8034FE6C;
M2C_UNK OSDisableInterrupts();
M2C_UNK OSRestoreInterrupts();
M2C_UNK fn_800C5B7C(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_8022AB18;
extern M2C_UNK lbl_8022AB24;
extern s32 lbl_80350774;
M2C_UNK fn_800AB904();
extern s32 lbl_80350778;

void fn_800A8608(void *arg0, s32 arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0);
f32 fn_800A891C(void *arg0);
s32 GetFloorRegionId(void *arg0);
f32 fn_800A8984(void *arg0);
s32 GetFloorAttr(void *arg0);
void fn_800A89EC(void *arg0, void *arg1);
f32 method_getPosYShouldBe(u32 arg0, s32 arg1, u32 arg2);
void fn_800A8CA8(s32 arg0);
void fn_800A8CD0(s32 arg0);
void fn_800A8CF8(void);
void fn_800A8D20(void);
void fn_800A8D48(s32 arg0);
void fn_800A8D50(s32 arg0);
void *fn_800A8D58(s32 arg0, u32 arg1);
s32 fn_800A8E64(void);
void fn_800A8E88(void *arg0, M2C_UNK *arg1);
M2C_UNK *fn_800A8EF0(void *arg0);
void fn_800A8F60(void *arg0, void *arg1);
void *fn_800A8FD4(void *arg0);
s32 fn_800A9050(void *arg0);
s32 fn_800A9088(void *arg0);
void *fn_800A9090(s32 arg0, u32 arg1, M2C_UNK arg_sp0);
s32 fn_800A91FC(void *arg0);
void fn_800A9270(void *arg0, M2C_UNK *arg1);
void *fn_800A92DC(void *arg0);
void fn_800A93B0(void *arg0, void *arg1);
void *fn_800A9424(void *arg0);
s32 fn_800A94A0(void *arg0);
s32 fn_800A94D8(void *arg0);
void fn_800A94E0(void);
void fn_800A9510(void);
void fn_800A954C(void);

void fn_800A8608(void *arg0, s32 arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0) { } /* draft: stub */

f32 fn_800A891C(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
        return fn_8009CB70();
    }
    return lbl_80351CA8;
}

s32 GetFloorRegionId(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
        return fn_8009CBD4();
    }
    return -1;
}

f32 fn_800A8984(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
        return fn_8009CC20();
    }
    return lbl_80351CA8;
}

s32 GetFloorAttr(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
        return fn_8009CC88();
    }
    return -1;
}

void fn_800A89EC(void *arg0, void *arg1) {
    u32 sp28;
    u32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;

    if ((u32) M2C_FIELD(arg1, u32 *, 0x38) != 0U) {
        fn_8009CCBC(&sp20);
        sp8 = sp20;
        spC = sp24;
        sp10 = sp28;
    } else {
        sp14 = lbl_80351CA8;
        sp18 = lbl_80351CAC;
        sp1C = lbl_80351CA8;
        sp8 = sp14;
        spC = sp18;
        sp10 = sp1C;
    }
    M2C_FIELD(arg0, f32 *, 0) = sp8;
    M2C_FIELD(arg0, f32 *, 8) = sp10;
    M2C_FIELD(arg0, f32 *, 4) = spC;
}

f32 method_getPosYShouldBe(u32 arg0, s32 arg1, u32 arg2) { return 0; } /* draft: stub */

void fn_800A8CA8(s32 arg0) {
    OSAllocFromHeap(lbl_8034FE78, arg0);
}

void fn_800A8CD0(s32 arg0) {
    OSFreeToHeap(lbl_8034FE78, arg0);
}

void fn_800A8CF8(void) {
    /* draft: did not compile: lbl_8034FE68(); */
}

void fn_800A8D20(void) {
    /* draft: did not compile: lbl_8034FE6C(); */
}

void fn_800A8D48(s32 arg0) {
    lbl_8034FE68 = arg0;
}

void fn_800A8D50(s32 arg0) {
    lbl_8034FE6C = arg0;
}

#pragma push
#pragma peephole off
void *fn_800A8D58(s32 arg0, u32 arg1) {
    s32 temp_r29;
    s32 temp_r4;
    s32 var_r8;
    u32 var_ctr;
    u32 var_r9;
    void *temp_r3;
    void *temp_r7;
    void *var_r6;

    temp_r4 = ((arg0 + 0x3F) & 0xFFFFFFC0) * arg1;
    temp_r29 = ((arg1 * 0x10) + 0x1F) & 0xFFFFFFE0;
    /* draft: did not compile: temp_r3 = fn_800A8CF8(); */
    if (temp_r3 == NULL) {
        return NULL;
    }
    /* draft: did not compile: temp_r7 = temp_r3 + 0x20; */
    var_r6 = temp_r7;
    var_r9 = 0U;
    /* draft: did not compile: var_r8 = (s32) (temp_r7 + (temp_r29 + 0x3F)) & 0xFFFFFFC0; */
    var_ctr = arg1;
    if (arg1 > 0U) {
        do {
            if (var_r9 == (u32) (arg1 - 1)) {
                M2C_FIELD(var_r6, void **, 0) = NULL;
            } else {
                /* draft: did not compile: M2C_FIELD(var_r6, void **, 0) = (void *) (temp_r7 + ((var_r9 + 1) * 0x10)); */
            }
            var_r9 += 1;
            M2C_FIELD(var_r6, s32 *, 8) = 0;
            M2C_FIELD(var_r6, s32 *, 4) = 0;
            M2C_FIELD(var_r6, s32 *, 0xC) = var_r8;
            /* draft: did not compile: var_r6 += 0x10; */
            var_r8 = (var_r8 + arg0 + 0x3F) & 0xFFFFFFC0;
            var_ctr -= 1;
        } while (var_ctr != 0);
    }
    M2C_FIELD(temp_r3, void **, 0) = temp_r7;
    /* draft: did not compile: M2C_FIELD(temp_r3, void **, 4) = (void *) (temp_r7 + ((arg1 - 1) * 0x10)); */
    M2C_FIELD(temp_r3, s32 *, 8) = 0;
    M2C_FIELD(temp_r3, s32 *, 0xC) = 0;
    M2C_FIELD(temp_r3, s32 *, 0x10) = 0;
    return temp_r3;
}
#pragma pop

s32 fn_800A8E64(void) {
    fn_800A8D20();
    return 1;
}

void fn_800A8E88(void *arg0, M2C_UNK *arg1) {
    OSDisableInterrupts();
    if ((M2C_UNK *) M2C_FIELD(arg0, M2C_UNK **, 0) == NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0) = arg1;
        M2C_FIELD(arg0, M2C_UNK **, 4) = arg1;
    } else {
        /* draft: did not compile: *M2C_FIELD(arg0, M2C_UNK **, 4) = arg1; */
        M2C_FIELD(arg0, M2C_UNK **, 4) = arg1;
    }
    *arg1 = NULL;
    OSRestoreInterrupts();
}

M2C_UNK *fn_800A8EF0(void *arg0) {
    M2C_UNK *temp_r0;
    M2C_UNK *temp_r31;

    OSDisableInterrupts();
    temp_r31 = M2C_FIELD(arg0, M2C_UNK **, 0);
    if (temp_r31 != NULL) {
        /* draft: did not compile: temp_r0 = *temp_r31; */
        if (temp_r0 == NULL) {
            M2C_FIELD(arg0, M2C_UNK **, 0) = NULL;
            M2C_FIELD(arg0, s32 *, 4) = 0;
        } else {
            M2C_FIELD(arg0, M2C_UNK **, 0) = temp_r0;
        }
        *temp_r31 = NULL;
    }
    OSRestoreInterrupts();
    return temp_r31;
}

void fn_800A8F60(void *arg0, void *arg1) {
    s32 temp_r4;

    OSDisableInterrupts();
    if ((void *) M2C_FIELD(arg0, void **, 8) == NULL) {
        M2C_FIELD(arg0, void **, 8) = arg1;
        M2C_FIELD(arg0, void **, 0xC) = arg1;
    } else {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 4) = arg1;
        M2C_FIELD(arg0, void **, 0xC) = arg1;
    }
    M2C_FIELD(arg1, s32 *, 4) = 0;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (temp_r4 + 1);
    OSRestoreInterrupts(temp_r4);
}

void *fn_800A8FD4(void *arg0) {
    void *temp_r0;
    void *temp_r31;

    OSDisableInterrupts();
    temp_r31 = M2C_FIELD(arg0, void **, 8);
    if (temp_r31 != NULL) {
        temp_r0 = M2C_FIELD(temp_r31, void **, 4);
        if (temp_r0 == NULL) {
            M2C_FIELD(arg0, void **, 8) = NULL;
            M2C_FIELD(arg0, s32 *, 0xC) = 0;
        } else {
            M2C_FIELD(arg0, void **, 8) = temp_r0;
        }
        M2C_FIELD(temp_r31, void **, 4) = NULL;
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) - 1);
    }
    OSRestoreInterrupts();
    return temp_r31;
}

s32 fn_800A9050(void *arg0) {
    s32 temp_r31;

    OSDisableInterrupts();
    temp_r31 = M2C_FIELD(arg0, s32 *, 8);
    OSRestoreInterrupts();
    return temp_r31;
}

s32 fn_800A9088(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

void *fn_800A9090(s32 arg0, u32 arg1, M2C_UNK arg_sp0) { } /* draft: stub */

s32 fn_800A91FC(void *arg0) {
    u32 temp_r30;
    u32 var_r29;
    void *var_r31;

    var_r29 = 0U;
    temp_r30 = M2C_FIELD(arg0, u32 *, 0);
    var_r31 = M2C_FIELD(arg0, void **, 4);
loop_2:
    if (var_r29 < temp_r30) {
        fn_800A8D20();
        /* draft: did not compile: var_r31 += 0x2C; */
        var_r29 += 1;
        goto loop_2;
    }
    fn_800A8D20();
    return 1;
}

void fn_800A9270(void *arg0, M2C_UNK *arg1) {
    M2C_UNK *temp_r5;

    OSDisableInterrupts();
    if ((M2C_FIELD(arg0, M2C_UNK **, 8)) == NULL) {
        M2C_FIELD(arg1, M2C_UNK **, 0) = arg1;
        M2C_FIELD(arg1, M2C_UNK **, 4) = arg1;
        M2C_FIELD(arg0, M2C_UNK **, 8) = arg1;
    } else {
        temp_r5 = M2C_FIELD((M2C_FIELD(arg0, M2C_UNK **, 8)), M2C_UNK **, 4);
        M2C_FIELD((M2C_FIELD(arg0, M2C_UNK **, 8)), M2C_UNK **, 4) = arg1;
        M2C_FIELD(arg1, M2C_UNK **, 4) = temp_r5;
        M2C_FIELD(arg1, M2C_UNK **, 0) = (M2C_FIELD(arg0, M2C_UNK **, 8));
        /* draft: did not compile: *temp_r5 = arg1; */
    }
    OSRestoreInterrupts();
}

void *fn_800A92DC(void *arg0) {
    void *temp_r0;
    void *temp_r4;
    void *var_r31;
    void *var_r5;

    var_r31 = NULL;
    OSDisableInterrupts();
    temp_r4 = M2C_FIELD(arg0, void **, 8);
    var_r5 = temp_r4;
    if (temp_r4 != NULL) {
loop_1:
        if ((s32) M2C_FIELD(var_r5, s32 *, 0x18) == 0) {
            var_r31 = var_r5;
            if (temp_r4 == var_r5) {
                temp_r0 = M2C_FIELD(var_r5, void **, 0);
                if (temp_r0 == var_r5) {
                    M2C_FIELD(arg0, void **, 8) = NULL;
                } else {
                    M2C_FIELD(arg0, void **, 8) = temp_r0;
                    *M2C_FIELD(var_r5, void ***, 4) = M2C_FIELD(var_r5, void **, 0);
                    M2C_FIELD(M2C_FIELD(var_r5, void **, 0), void ***, 4) = (void **) M2C_FIELD(var_r5, void ***, 4);
                }
            } else {
                *M2C_FIELD(var_r5, void ***, 4) = M2C_FIELD(var_r5, void **, 0);
                M2C_FIELD(M2C_FIELD(var_r5, void **, 0), void ***, 4) = (void **) M2C_FIELD(var_r5, void ***, 4);
            }
            M2C_FIELD(var_r5, void ***, 4) = NULL;
            M2C_FIELD(var_r5, void **, 0) = NULL;
        } else {
            var_r5 = M2C_FIELD(var_r5, void **, 0);
            if (temp_r4 != var_r5) {
                goto loop_1;
            }
        }
    }
    OSRestoreInterrupts();
    return var_r31;
}

void fn_800A93B0(void *arg0, void *arg1) {
    s32 temp_r4;

    OSDisableInterrupts();
    if ((void *) M2C_FIELD(arg0, void **, 0xC) == NULL) {
        M2C_FIELD(arg0, void **, 0xC) = arg1;
        M2C_FIELD(arg0, void **, 0x10) = arg1;
    } else {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 8) = arg1;
        M2C_FIELD(arg0, void **, 0x10) = arg1;
    }
    M2C_FIELD(arg1, s32 *, 8) = 0;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (temp_r4 + 1);
    OSRestoreInterrupts(temp_r4);
}

void *fn_800A9424(void *arg0) {
    void *temp_r0;
    void *temp_r31;

    OSDisableInterrupts();
    temp_r31 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r31 != NULL) {
        temp_r0 = M2C_FIELD(temp_r31, void **, 8);
        if (temp_r0 == NULL) {
            M2C_FIELD(arg0, void **, 0xC) = NULL;
            M2C_FIELD(arg0, s32 *, 0x10) = 0;
        } else {
            M2C_FIELD(arg0, void **, 0xC) = temp_r0;
        }
        M2C_FIELD(temp_r31, void **, 8) = NULL;
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) - 1);
    }
    OSRestoreInterrupts();
    return temp_r31;
}

s32 fn_800A94A0(void *arg0) {
    s32 temp_r31;

    OSDisableInterrupts();
    temp_r31 = M2C_FIELD(arg0, s32 *, 0xC);
    OSRestoreInterrupts();
    return temp_r31;
}

s32 fn_800A94D8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

void fn_800A94E0(void) {
    s32 temp_r4;

    OSDisableInterrupts();
    temp_r4 = lbl_80350774;
    lbl_80350774 = temp_r4 + 1;
    OSRestoreInterrupts(temp_r4);
}

void fn_800A9510(void) {
    OSDisableInterrupts();
    if ((s32) lbl_80350774 > 0) {
        lbl_80350774 -= 1;
    }
    OSRestoreInterrupts();
}

void fn_800A954C(void) {
    s32 temp_r31;

    temp_r31 = OSDisableInterrupts();
    lbl_80350778 = 1;
    fn_800AB904();
    OSRestoreInterrupts(temp_r31);
}
