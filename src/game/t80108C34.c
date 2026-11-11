/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

s32 hsdNew(M2C_UNK *);
M2C_UNK __assert(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_802AA268;
extern M2C_UNK lbl_80350280;
extern M2C_UNK lbl_8035028C;
M2C_UNK HSD_AObjRemove(s32);
extern M2C_UNK lbl_802AA228;
M2C_UNK hsdInitClassInfo(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK);
extern M2C_UNK lbl_802AA31C;
extern M2C_UNK lbl_802AA3D0;
extern M2C_UNK lbl_80350290;
extern M2C_UNK lbl_802AA340;
extern M2C_UNK lbl_80350298;
extern M2C_UNK lbl_803502A0;
M2C_UNK HSD_ObjAllocInit(M2C_UNK *, M2C_UNK, M2C_UNK);
extern M2C_UNK lbl_8031EE18;
extern M2C_UNK lbl_8031EE44;
s32 fn_80105930();
extern M2C_UNK lbl_803502A8;
extern M2C_UNK lbl_803502B0;
extern M2C_UNK lbl_803502B8;
M2C_UNK HSD_ObjFree(M2C_UNK *, s32 *);
extern M2C_UNK lbl_802AA40C;
extern M2C_UNK lbl_802AA538;
extern M2C_UNK lbl_803502C0;
f64 Cos(f32, f32);
f64 Sin(f32, f32);
extern f32 lbl_80352160;
extern M2C_UNK lbl_802AA428;
extern M2C_UNK lbl_802AA434;
extern M2C_UNK lbl_8031EE70;
extern M2C_UNK lbl_8031EE88;
M2C_UNK OSReport(M2C_UNK *);
extern M2C_UNK lbl_802AA450;
s32 strcmp();
extern u32 *lbl_803502D0;
extern f32 lbl_80352168;

s32 fn_80108C34(void);
u32 HSD_FogAdjLoadDesc(s32 arg0);
void HSD_FogAdjInit(void *arg0, void *arg1);
void HSD_DObjModifyFlags(void *arg0, s32 arg1, s32 arg2);
s32 fn_80108D98(void *arg0);
void fn_80108DB0();
void FogRelease(void *arg0);
void fn_801090AC(void);
void FogAdjInfoInit(void);
void HSD_PerfCountEnvelopeBlending(s32 arg0);
void HSD_ListInitAllocData_801091B0(void);
s32 fn_801091F4(void);
void HSD_SListAllocAndAppend(s32 arg0, s32 arg1);
s32 *HSD_SListPrependList(s32 arg0, s32 *arg1);
s32 HSD_SListRemove(s32 *arg0);
void fn_80109370(void);
s32 EulerToQuat(void *arg0, void *arg1);
void fn_801094FC(void *arg0, u32 arg1);
void fn_80109570(void);
void fn_8010959C(void);
void fn_801095CC(void);
void HSD_Free_801095FC(void);
void HSD_Alloc(void);
void HSD_ShadowInitAllocData(void);
s32 HSD_ArchiveParse(void *arg0, s32 arg1, u32 arg2);
s32 HSD_ArchiveGetPublicAddress(void *arg0, s32 arg1);
u32 HSD_Rand(void);
f32 HSD_Randf(void);
s32 HSD_Randi(s32 arg0);

s32 fn_80108C34(void) {
    s32 temp_r3;

    temp_r3 = hsdNew(&lbl_802AA268);
    if (temp_r3 == 0) {
        __assert(&lbl_80350280, 0xF9, &lbl_8035028C);
    }
    return temp_r3;
}

u32 HSD_FogAdjLoadDesc(s32 arg0) {
    u32 temp_r3;

    temp_r3 = hsdNew((long *)(&lbl_802AA268));
    if (temp_r3 == 0U) {
        __assert(&lbl_80350280, 0xF9, &lbl_8035028C);
    }
    if (temp_r3 == 0U) {
        __assert(&lbl_80350280, 0x109, &lbl_8035028C);
    }
    /* draft: did not compile: HSD_FogAdjInit(temp_r3, arg0); */
    return temp_r3;
}

void HSD_FogAdjInit(void *arg0, void *arg1) {
    if (arg0 != NULL) {
        if (arg1 != NULL) {
            M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 0);
            M2C_FIELD(arg0, u16 *, 0xE) = (u16) M2C_FIELD(arg1, u16 *, 6);
            M2C_FIELD(arg0, u16 *, 0xC) = (u16) M2C_FIELD(arg1, u16 *, 4);
            /* draft: did not compile: memcpy(arg0 + 0x10, arg1 + 8, 0x40); */
            return;
        }
        M2C_FIELD(arg0, s32 *, 8) = 0;
        M2C_FIELD(arg0, u16 *, 0xE) = 0U;
        M2C_FIELD(arg0, u16 *, 0xC) = 0U;
        /* draft: did not compile: memset(arg0 + 0x10, 0, 0x40); */
    }
}

void HSD_DObjModifyFlags(void *arg0, s32 arg1, s32 arg2) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 8) = (s32) ((M2C_FIELD(arg0, s32 *, 8) & ~arg2) | (arg1 & arg2));
    }
}

s32 fn_80108D98(void *arg0) {
    if (arg0 != NULL) {
        return M2C_FIELD(arg0, s32 *, 8);
    }
    return 0;
}

void fn_80108DB0() { } /* draft: stub */

void FogRelease(void *arg0) {
    u32 var_r0;
    u16 temp_r4;
    void *temp_r31;
    void *temp_r4_2;
    void *temp_r4_3;

    temp_r31 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r31 != NULL) {
        temp_r4 = M2C_FIELD(temp_r31, u16 *, 4);
        var_r0 = temp_r4 == 0xFFFF;
        if (var_r0 != 0) {

        } else {
            M2C_FIELD(temp_r31, u16 *, 4) = (u16) (temp_r4 - 1);
            var_r0 = temp_r4 == 0;
        }
        if ((var_r0 != 0) && (temp_r31 != NULL)) {
            temp_r4_2 = M2C_FIELD(temp_r31, void **, 0);
            M2C_FIELD(temp_r4_2, M2C_UNK (**)(void *, void *), 0x30)(temp_r31, temp_r4_2);
            temp_r4_3 = M2C_FIELD(temp_r31, void **, 0);
            M2C_FIELD(temp_r4_3, M2C_UNK (**)(void *, void *), 0x34)(temp_r31, temp_r4_3);
        }
    }
    HSD_AObjRemove(M2C_FIELD(arg0, s32 *, 0x1C));
    M2C_FIELD(M2C_FIELD(&lbl_802AA228, void **, 0x14), M2C_UNK (**)(void *, void *), 0x30)(arg0, M2C_FIELD(&lbl_802AA228, void **, 0x14));
}

void fn_801090AC(void) {
    hsdInitClassInfo(&lbl_802AA228, &lbl_802AA3D0, &lbl_802AA31C, &lbl_80350290, 0x40, 0x20);
    /* draft: did not compile: M2C_FIELD(&lbl_802AA228, M2C_UNK (**)(), 0x30) = FogRelease; */
    /* draft: did not compile: M2C_FIELD(&lbl_802AA228, M2C_UNK (**)(), 0x3C) = fn_80108DB0; */
}

void FogAdjInfoInit(void) {
    hsdInitClassInfo(&lbl_802AA228 + 0x40, &lbl_802AA3D0, &lbl_802AA228 + 0xF4, &lbl_802AA228 + 0x10C, 0x3C, 0x54);
}

void HSD_PerfCountEnvelopeBlending(s32 arg0) {
    void *temp_r4;

    if (arg0 >= 0x20) {
        __assert(&lbl_80350298, 0xA4, &lbl_803502A0);
    }
    temp_r4 = &lbl_802AA340 + (arg0 * 4);
    M2C_FIELD((s32)temp_r4, s32 *, 0x10) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x10) + 1);
}

void HSD_ListInitAllocData_801091B0(void) {
    HSD_ObjAllocInit(&lbl_8031EE18, 8, 4);
    HSD_ObjAllocInit(&lbl_8031EE44, 0xC, 4);
}

s32 fn_801091F4(void) {
    s32 temp_r3;

    temp_r3 = fn_80105930(&lbl_8031EE18);
    if (temp_r3 == 0) {
        __assert(&lbl_803502A8, 0x4C, &lbl_803502B0);
    }
    /* draft: did not compile: memset(temp_r3, 0, 8); */
    return temp_r3;
}

void HSD_SListAllocAndAppend(s32 arg0, s32 arg1) {
    void *temp_r3;

    /* draft: did not compile: temp_r3 = fn_80105930((long *)(&lbl_8031EE18)); */
    if (temp_r3 == NULL) {
        __assert(&lbl_803502A8, 0x4C, &lbl_803502B0);
    }
    memset(temp_r3, 0, 8);
    M2C_FIELD(temp_r3, s32 *, 4) = arg1;
    HSD_SListPrependList(arg0, temp_r3);
}

s32 *HSD_SListPrependList(s32 arg0, s32 *arg1) {
    if (arg1 == NULL) {
        __assert(&lbl_803502A8, 0xCA, &lbl_803502B8);
    }
    *arg1 = arg0;
    return arg1;
}

s32 HSD_SListRemove(s32 *arg0) {
    s32 temp_r31;

    if (arg0 != NULL) {
        temp_r31 = *arg0;
        HSD_ObjFree(&lbl_8031EE18, arg0);
        return temp_r31;
    }
    return 0;
}

void fn_80109370(void) {
    hsdInitClassInfo(&lbl_802AA3D0, &lbl_802AA538, &lbl_802AA40C, &lbl_803502C0, 0x3C, 8);
}

s32 EulerToQuat(void *arg0, void *arg1) {
    f32 temp_f31;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f30;
    f32 temp_f27;
    f32 temp_f6;
    f32 temp_f7;
    f32 temp_f29;

    temp_f31 = (f32) Cos((float)(lbl_80352160 * M2C_FIELD(arg0, f32 *, 0)), (float)(0));
    temp_f30 = (f32) Cos(lbl_80352160 * M2C_FIELD(arg0, f32 *, 4), lbl_80352160);
    temp_f29 = (f32) Cos(lbl_80352160 * M2C_FIELD(arg0, f32 *, 8), lbl_80352160);
    temp_f28 = (f32) Sin(lbl_80352160 * M2C_FIELD(arg0, f32 *, 0), lbl_80352160);
    temp_f27 = (f32) Sin(lbl_80352160 * M2C_FIELD(arg0, f32 *, 4), lbl_80352160);
    temp_f6 = (f32) Sin(lbl_80352160 * M2C_FIELD(arg0, f32 *, 8), lbl_80352160);
    temp_f2 = temp_f27 * temp_f6;
    temp_f7 = temp_f30 * temp_f29;
    M2C_FIELD(arg1, f32 *, 0xC) = (f32) ((temp_f31 * temp_f7) + (temp_f28 * temp_f2));
    M2C_FIELD(arg1, f32 *, 0) = (f32) ((temp_f28 * temp_f7) - (temp_f31 * temp_f2));
    M2C_FIELD(arg1, f32 *, 4) = (f32) ((temp_f29 * (temp_f31 * temp_f27)) + (temp_f6 * (temp_f28 * temp_f30)));
    M2C_FIELD(arg1, f32 *, 8) = (f32) ((temp_f6 * (temp_f31 * temp_f30)) - (temp_f29 * (temp_f28 * temp_f27)));
    return 1;
}

void fn_801094FC(void *arg0, u32 arg1) {
    if (arg1 != 0x14U) {
        __assert(&lbl_802AA428, 0x14, &lbl_802AA434);
    }
    M2C_FIELD(&lbl_8031EE70, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(&lbl_8031EE70, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_STRUCT_COPY(&lbl_8031EE70, arg0, 0xC);
}

void fn_80109570(void) {
    /* draft: did not compile: lbl_8031EE70(&lbl_8031EE70); */
}

void fn_8010959C(void) {
    M2C_FIELD(&lbl_8031EE70, M2C_UNK (**)(M2C_UNK *), 0xC)(&lbl_8031EE70);
}

void fn_801095CC(void) {
    M2C_FIELD(&lbl_8031EE70, M2C_UNK (**)(M2C_UNK *), 0x10)(&lbl_8031EE70);
}

void HSD_Free_801095FC(void) {
    M2C_FIELD(&lbl_8031EE70, M2C_UNK (**)(M2C_UNK *), 4)(&lbl_8031EE70);
}

void HSD_Alloc(void) {
    /* draft: did not compile: lbl_8031EE70(0x20, 0, &lbl_8031EE70); */
}

void HSD_ShadowInitAllocData(void) {
    HSD_ObjAllocInit(&lbl_8031EE88, 0x28, 4);
}

s32 HSD_ArchiveParse(void *arg0, s32 arg1, u32 arg2) {
    s32 temp_r3;
    s32 temp_r6;
    s32 var_r5;
    u32 var_r3;
    u32 var_r4;

    if (arg0 == NULL) {
        return -1;
    }
    memset((void *)(0), (int)(0x44), (unsigned long)(0));
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) | 1);
    /* draft: did not compile: memcpy(arg0, arg1, 0x20); */
    if ((u32) M2C_FIELD(arg0, u32 *, 0) != arg2) {
        OSReport(&lbl_802AA450);
        return -1;
    }
    var_r3 = 0x20U;
    if ((u32) M2C_FIELD(arg0, u32 *, 4) != 0U) {
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (arg1 + 0x20);
        var_r3 = M2C_FIELD(arg0, u32 *, 4) + 0x20;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 8) != 0) {
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (arg1 + var_r3);
        var_r3 += M2C_FIELD(arg0, u32 *, 8) * 4;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0xC) != 0) {
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) (arg1 + var_r3);
        var_r3 += M2C_FIELD(arg0, u32 *, 0xC) * 8;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x10) != 0) {
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (arg1 + var_r3);
        var_r3 += M2C_FIELD(arg0, u32 *, 0x10) * 8;
    }
    if (var_r3 < (u32) M2C_FIELD(arg0, u32 *, 0)) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (arg1 + var_r3);
    }
    var_r4 = 0U;
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
    var_r5 = 0;
loop_16:
    if (var_r4 < (u32) M2C_FIELD(arg0, u32 *, 8)) {
        var_r4 += 1;
        temp_r6 = M2C_FIELD(arg0, s32 *, 0x20);
        /* draft: did not compile: temp_r3 = *(M2C_FIELD(arg0, s32 *, 0x24) + var_r5); */
        var_r5 += 4;
        /* draft: did not compile: *(temp_r6 + temp_r3) = *(temp_r6 + temp_r3) + temp_r6; */
        goto loop_16;
    }
    return 0;
}

s32 HSD_ArchiveGetPublicAddress(void *arg0, s32 arg1) { return 0; } /* draft: stub */

u32 HSD_Rand(void) {
    *lbl_803502D0 = (*lbl_803502D0 * 0x343FD) + 0x269EC3;
    return (u32) *lbl_803502D0 >> 0x10U;
}

f32 HSD_Randf(void) {
    *lbl_803502D0 = (*lbl_803502D0 * 0x343FD) + 0x269EC3;
    return (f32) ((u32) *lbl_803502D0 >> 0x10U) / lbl_80352168;
}

s32 HSD_Randi(s32 arg0) {
    *lbl_803502D0 = (*lbl_803502D0 * 0x343FD) + 0x269EC3;
    return (s32) (arg0 * ((u32) *lbl_803502D0 >> 0x10U)) / 65536;
}
