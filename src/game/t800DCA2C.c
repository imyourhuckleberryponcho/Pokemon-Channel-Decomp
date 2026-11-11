/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

u8 *fn_800DA410();
s32 memcmp();
extern M2C_UNK lbl_8031CC00;
s32 __CARDGetControlBlock();
s32 __CARDPutControlBlock();
s32 __CARDCompareFileName();
M2C_UNK OSGetTime();
u64 __div2i(M2C_UNK, u32);
extern M2C_UNK lbl_8031C9E0;
void *fn_800DA00C();
M2C_UNK strncpy();
u32 strlen();
extern M2C_UNK fn_800D77AC;
M2C_UNK fn_800D8A2C(s32);
extern M2C_UNK fn_800D77B0;
M2C_UNK DCInvalidateRange(s32, s32);
s32 fn_800DC964();
s32 fn_800DC9FC();
M2C_UNK DCStoreRange(s32, s32);
s32 __CARDUpdateDir();
s32 fn_800E3428();
extern void *gx;

s32 fn_800DCA2C(void *arg0, u8 *arg1, s32 *arg2);
s32 fn_800DCB7C(s32 arg0, s32 arg1, void *arg2);
void fn_800DCCDC(s32 arg0, s32 arg1, void *arg2);
void CARDClose(s32 *arg0);
s32 fn_800DCEA8(void);
void CreateCallbackFat(s32 arg0, s32 arg1);
s32 CARDCreateAsync(s32 arg0, s32 arg1, u32 arg2, void *arg3, M2C_UNK *arg4);
void fn_800DD200(s32 arg0);
s32 __CARDSeek(void *arg0, s32 arg1, s32 arg2, void **arg3);
void ReadCallback(s32 arg0, s32 arg1);
s32 fn_800DD530(void *arg0, s32 arg1, s32 arg2, s32 arg3, M2C_UNK *arg4);
void fn_800DD678(s32 *arg0);
void WriteCallback_800DD6C0(s32 arg0, s32 arg1);
void EraseCallback(s32 arg0, s32 arg1);
s32 CARDWriteAsync(void *arg0, s32 arg1, s32 arg2, s32 arg3, M2C_UNK *arg4);
void fn_800DD9F4(s32 *arg0);
void DeleteCallback(s32 arg0, s32 arg1);
s32 CARDDeleteAsync(s32 arg0, s32 arg1, M2C_UNK *arg2);
void fn_800DDBF0(s32 arg0);
void UpdateIconOffsets(void *arg0, void *arg1);
s32 fn_800DDE30(s32 arg1, void *arg2);
s32 CARDSetStatusAsync(s32 arg0, s32 arg1, void *arg2, s32 arg3);
void fn_800DE0D0(s32 arg0);
s32 fn_800DE118(s32 arg0, u8 *arg1, u8 *arg2, s32 arg3);
void fn_800DE314(s32 arg0);
s32 fn_800DE35C(s32 arg1, s32 arg2);
s32 fn_800DE418(s32 arg0, s32 arg1, void *arg2, s32 arg3);
s32 CARDGetSerialNo(s32 arg0, void *arg1);
void fn_800DE730(s32 arg0, s32 arg1, s8 arg2, s32 arg3);
void fn_800DE7A8(s32 arg0, s32 arg1, s8 arg2);
void *fn_800DE82C(void);
s32 __GXDefaultTlutRegionCallback(u32 arg0);

s32 fn_800DCA2C(void *arg0, u8 *arg1, s32 *arg2) { return 0; } /* draft: stub */

s32 fn_800DCB7C(s32 arg0, s32 arg1, void *arg2) { return 0; } /* draft: stub */

void fn_800DCCDC(s32 arg0, s32 arg1, void *arg2) { } /* draft: stub */

void CARDClose(s32 *arg0) {
    s32 spC;

    if (__CARDGetControlBlock(*arg0, &spC) < 0) {
        return;
    }
    *arg0 = -1;
    __CARDPutControlBlock(spC, 0);
}

s32 fn_800DCEA8(void) {
    return 0;
}

void CreateCallbackFat(s32 arg0, s32 arg1) { } /* draft: stub */

s32 CARDCreateAsync(s32 arg0, s32 arg1, u32 arg2, void *arg3, M2C_UNK *arg4) {
    u8 *temp_r3_3;
    M2C_UNK *var_r0;
    u32 temp_r3;
    s32 temp_r3_2;
    u16 var_r23;
    s32 var_r30;
    void *sp1C;
    u8 *temp_r7;
    u8 *var_r24;

    if (strlen(arg1) > 0x20U) {
        return -0xC;
    }
    temp_r3_2 = __CARDGetControlBlock(arg0, &sp1C);
    if (temp_r3_2 < 0) {
        return temp_r3_2;
    }
    if ((arg2 == 0) || ((arg2 % M2C_FIELD(sp1C, u32 *, 0xC)) != 0)) {
        return -0x80;
    }
    temp_r3_3 = fn_800DA410(0x10000);
    var_r30 = 0xFFFF;
    var_r24 = temp_r3_3;
    var_r23 = 0;
loop_16:
    if (var_r23 >= 0x7FU) {
        if (var_r30 == -1U) {
            return __CARDPutControlBlock(sp1C, -8);
        }
        if ((u32) (M2C_FIELD(sp1C, u32 *, 0xC) * M2C_FIELD(fn_800DA00C(sp1C), u16 *, 6)) < arg2) {
            return __CARDPutControlBlock(sp1C, -9);
        }
        if (arg4 != NULL) {
            var_r0 = arg4;
        } else {
            var_r0 = &fn_800D77AC;
        }
        M2C_FIELD(sp1C, M2C_UNK **, 0xD0) = var_r0;
        temp_r7 = &temp_r3_3[(var_r30 << 6) & 0x3FFFC0];
        M2C_FIELD(sp1C, u16 *, 0xBC) = var_r30;
        M2C_FIELD(temp_r7, s16 *, 0x38) = (s16) (arg2 / (u32) M2C_FIELD(sp1C, u32 *, 0xC));
        strncpy(temp_r7 + 8, arg1, 0x20, sp1C, temp_r7);
        M2C_FIELD(sp1C, void **, 0xC0) = arg3;
        M2C_FIELD(arg3, s32 *, 0) = arg0;
        M2C_FIELD(arg3, s32 *, 4) = (s32) var_r30;
        temp_r3 = __CARDAllocBlock(arg0, arg2 / (u32) M2C_FIELD(sp1C, u32 *, 0xC), CreateCallbackFat);
        if (temp_r3 < 0) {
            return __CARDPutControlBlock(sp1C);
        }
        return temp_r3;
    }
    if ((u8) *var_r24 == 0xFF) {
        if (var_r30 == -1U) {
            var_r30 = var_r23;
        }
        goto block_15;
    }
    if ((memcmp(var_r24, M2C_FIELD(sp1C, s32 *, 0x10C), 4) == 0) && (memcmp(var_r24 + 4, M2C_FIELD(sp1C, s32 *, 0x10C) + 4, 2) == 0) && (__CARDCompareFileName(var_r24, arg1) != 0)) {
        return __CARDPutControlBlock(sp1C, -7);
    }
block_15:
    var_r24 += 0x40;
    var_r23 += 1;
    goto loop_16;
}

void fn_800DD200(s32 arg0) {
    if (0 /* draft: did not compile */) {
        return;
    }
    fn_800D8A2C(arg0);
}

s32 __CARDSeek(void *arg0, s32 arg1, s32 arg2, void **arg3) { return 0; } /* draft: stub */

void ReadCallback(s32 arg0, s32 arg1) { } /* draft: stub */

#pragma push
#pragma dont_inline on
s32 fn_800DD530(void *arg0, s32 arg1, s32 arg2, s32 arg3, M2C_UNK *arg4) {
    void *sp1C;
    M2C_UNK *var_r0;
    s8 temp_r28;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r8;
    s32 var_r3;
    s32 var_r4;

    if ((arg3 & 0x1FF) || (arg2 & 0x1FF)) {
        return -0x80;
    }
    temp_r3_2 = __CARDSeek(arg0, arg2, arg3, &sp1C);
    if (temp_r3_2 < 0) {
        return temp_r3_2;
    }
    /* draft: did not compile: temp_r28 = fn_800DA410(sp1C) + (M2C_FIELD(arg0, s32 *, 4) << 6); */
    var_r4 = fn_800DC964(sp1C, temp_r28);
    if (var_r4 == -0xA) {
        var_r4 = fn_800DC9FC(temp_r28);
    }
    if (var_r4 < 0) {
        return __CARDPutControlBlock(sp1C);
    }
    DCInvalidateRange(arg1, arg2);
    if (arg4 != NULL) {
        var_r0 = arg4;
    } else {
        var_r0 = &fn_800D77AC;
    }
    M2C_FIELD(sp1C, M2C_UNK **, 0xD0) = var_r0;
    temp_r8 = M2C_FIELD(arg0, s32 *, 8) & ((M2C_FIELD(sp1C, s32 *, 0xC)) - 1);
    var_r3 = (M2C_FIELD(sp1C, s32 *, 0xC)) - temp_r8;
    if (arg2 < var_r3) {
        var_r3 = arg2;
    }
    temp_r3 = __CARDRead(M2C_FIELD(arg0, s32 *, 0), temp_r8 + ((M2C_FIELD(sp1C, s32 *, 0xC)) * M2C_FIELD(arg0, u16 *, 0x10)), var_r3, arg1, ReadCallback);
    if (temp_r3 < 0) {
        __CARDPutControlBlock(sp1C, temp_r3);
    }
    return temp_r3;
}
#pragma pop

void fn_800DD678(s32 *arg0) {
    if (fn_800DD530((void *)(&fn_800D77B0), (long)(0), (long)(0), (long)(0), (long *)(0)) < 0) {
        return;
    }
    fn_800D8A2C(*arg0);
}

void WriteCallback_800DD6C0(s32 arg0, s32 arg1) { } /* draft: stub */

void EraseCallback(s32 arg0, s32 arg1) {
    M2C_UNK (*temp_r30)(s32, s32);
    s32 temp_r5;
    s32 var_r29;
    void *temp_r31;

    var_r29 = arg1;
    temp_r31 = &lbl_8031C9E0 + (arg0 * 0x110);
    if ((var_r29 < 0) || (temp_r5 = M2C_FIELD(temp_r31, s32 *, 0xC), var_r29 = fn_800D9F90(arg0, temp_r5 * M2C_FIELD(M2C_FIELD(temp_r31, void **, 0xC0), u16 *, 0x10), temp_r5, M2C_FIELD(temp_r31, s32 *, 0xB4), WriteCallback_800DD6C0), ((var_r29 < 0) != 0))) {
        temp_r30 = M2C_FIELD(temp_r31, M2C_UNK (**)(s32, s32), 0xD0);
        M2C_FIELD(temp_r31, M2C_UNK (**)(s32, s32), 0xD0) = NULL;
        __CARDPutControlBlock(temp_r31, var_r29);
        temp_r30(arg0, var_r29);
    }
}

s32 CARDWriteAsync(void *arg0, s32 arg1, s32 arg2, s32 arg3, M2C_UNK *arg4) {
    M2C_UNK *var_r0;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r4;
    void *sp1C;

    /* draft: did not compile: temp_r3_3 = __CARDSeek(arg2, arg3, &sp1C); */
    if (temp_r3_3 < 0) {
        return temp_r3_3;
    }
    temp_r4 = M2C_FIELD(sp1C, s32 *, 0xC) - 1;
    if ((arg3 & temp_r4) || (arg2 & temp_r4)) {
        return __CARDPutControlBlock((void *)-0x80);
    }
    temp_r3_2 = fn_800DC964(sp1C, fn_800DA410() + (M2C_FIELD(arg0, s32 *, 4) << 6));
    if (temp_r3_2 < 0) {
        return __CARDPutControlBlock(sp1C, temp_r3_2);
    }
    DCStoreRange(arg1, arg2);
    if (arg4 != NULL) {
        var_r0 = arg4;
    } else {
        var_r0 = &fn_800D77AC;
    }
    M2C_FIELD(sp1C, M2C_UNK **, 0xD0) = var_r0;
    M2C_FIELD(sp1C, s32 *, 0xB4) = arg1;
    temp_r3 = fn_800D8540(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, u16 *, 0x10) * M2C_FIELD(sp1C, s32 *, 0xC), (u16)EraseCallback);
    if (temp_r3 < 0) {
        __CARDPutControlBlock(sp1C, temp_r3);
    }
    return temp_r3;
}

void fn_800DD9F4(s32 *arg0) {
    if (CARDWriteAsync((void *)(&fn_800D77B0), (long)(0), (long)(0), (long)(0), (long *)(0)) < 0) {
        return;
    }
    fn_800D8A2C(*arg0);
}

void DeleteCallback(s32 arg0, s32 arg1) {
    M2C_UNK (*temp_r30)(s32, s32);
    s32 var_r29;
    void *temp_r31;

    var_r29 = arg1;
    temp_r31 = &lbl_8031C9E0 + (arg0 * 0x110);
    temp_r30 = M2C_FIELD(temp_r31, M2C_UNK (**)(s32, s32), 0xD0);
    M2C_FIELD(temp_r31, M2C_UNK (**)(s32, s32), 0xD0) = NULL;
    if ((var_r29 < 0) || (var_r29 = __CARDFreeBlock(arg0, M2C_FIELD(temp_r31, u16 *, 0xBE), temp_r30), ((var_r29 < 0) != 0))) {
        __CARDPutControlBlock(temp_r31, var_r29);
        if (temp_r30 != NULL) {
            temp_r30(arg0, var_r29);
        }
    }
}

#pragma push
#pragma dont_inline on
s32 CARDDeleteAsync(s32 arg0, s32 arg1, M2C_UNK *arg2) {
    void *sp18;
    s8 sp14;
    M2C_UNK *var_r0;
    s32 temp_r3;
    s32 temp_r3_2;
    u32 temp_r3_3;
    void *temp_r3_4;

    temp_r3_3 = __CARDGetControlBlock(&sp18);
    if (temp_r3_3 < 0) {
        return temp_r3_3;
    }
    /* draft: did not compile: temp_r3_2 = fn_800DCA2C(sp18, arg1, &sp14); */
    if (temp_r3_2 < 0) {
        return __CARDPutControlBlock(sp18, temp_r3_2);
    }
    if (fn_800DCEA8() != 0) {
        return __CARDPutControlBlock(sp18, -1);
    }
    temp_r3_4 = fn_800DA410(sp18) + (sp14 << 6);
    M2C_FIELD(sp18, u16 *, 0xBE) = (u16) M2C_FIELD(temp_r3_4, u16 *, 0x36);
    memset((void *)(temp_r3_4), (int)(0xFF), (unsigned long)(0x40));
    if (arg2 != NULL) {
        var_r0 = arg2;
    } else {
        var_r0 = &fn_800D77AC;
    }
    M2C_FIELD(sp18, M2C_UNK **, 0xD0) = var_r0;
    temp_r3 = __CARDUpdateDir(arg0, DeleteCallback, sp18);
    if (temp_r3 < 0) {
        __CARDPutControlBlock(sp18, temp_r3);
    }
    return temp_r3;
}
#pragma pop

void fn_800DDBF0(s32 arg0) {
    if (0 /* draft: did not compile */) {
        return;
    }
    fn_800D8A2C(arg0);
}

void UpdateIconOffsets(void *arg0, void *arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 temp_r5_4;
    s32 temp_r6;
    s32 var_r9;
    s32 temp_r6_3;
    s32 var_ctr;
    s32 var_r6;
    s32 var_r8;
    s32 temp_r6_2;
    void *temp_r7;
    void *temp_r7_2;
    void *temp_r7_3;
    void *var_r7;

    var_r8 = M2C_FIELD(arg0, s32 *, 0x2C);
    if ((u32) (var_r8 + 0x10000) == -1U) {
        M2C_FIELD(arg1, s8 *, 0x2E) = 0;
        var_r8 = 0;
        M2C_FIELD(arg1, s16 *, 0x34) = 0;
        M2C_FIELD(arg1, s16 *, 0x36) = 0;
    }
    var_r9 = 0;
    temp_r0 = M2C_FIELD(arg0, u8 *, 7) & 3;
    switch (temp_r0) {                              /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        M2C_FIELD(arg1, s32 *, 0x3C) = var_r8;
        temp_r0_2 = var_r8 + 0xC00;
        var_r8 += 0xE00;
        M2C_FIELD(arg1, s32 *, 0x40) = temp_r0_2;
        break;
    case 2:                                         /* switch 1 */
        M2C_FIELD(arg1, s32 *, 0x3C) = var_r8;
        var_r8 += 0x1800;
        M2C_FIELD(arg1, s32 *, 0x40) = -1;
        break;
    default:                                        /* switch 1 */
        M2C_FIELD(arg1, s32 *, 0x3C) = -1;
        M2C_FIELD(arg1, s32 *, 0x40) = -1;
        break;
    }
    var_ctr = 2;
    var_r7 = arg1;
    var_r6 = 0;
    do {
        temp_r5 = ((s32) M2C_FIELD(arg0, u16 *, 0x30) >> var_r6) & 3;
        switch (temp_r5) {                          /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            M2C_FIELD(var_r7, s32 *, 0x44) = var_r8;
            var_r9 = 1;
            var_r8 += 0x400;
            break;
        case 2:                                     /* switch 2 */
            M2C_FIELD(var_r7, s32 *, 0x44) = var_r8;
            var_r8 += 0x800;
            break;
        default:                                    /* switch 2 */
            M2C_FIELD(var_r7, s32 *, 0x44) = -1;
            break;
        }
        temp_r6 = var_r6 + 2;
        /* draft: did not compile: temp_r7 = var_r7 + 4; */
        temp_r5_2 = ((s32) M2C_FIELD(arg0, u16 *, 0x30) >> temp_r6) & 3;
        switch (temp_r5_2) {                        /* switch 3; irregular */
        case 1:                                     /* switch 3 */
            M2C_FIELD(temp_r7, s32 *, 0x44) = var_r8;
            var_r9 = 1;
            var_r8 += 0x400;
            break;
        case 2:                                     /* switch 3 */
            M2C_FIELD(temp_r7, s32 *, 0x44) = var_r8;
            var_r8 += 0x800;
            break;
        default:                                    /* switch 3 */
            M2C_FIELD(temp_r7, s32 *, 0x44) = -1;
            break;
        }
        temp_r6_2 = temp_r6 + 2;
        temp_r5_3 = ((s32) M2C_FIELD(arg0, u16 *, 0x30) >> temp_r6_2) & 3;
        /* draft: did not compile: temp_r7_2 = temp_r7 + 4; */
        switch (temp_r5_3) {                        /* switch 4; irregular */
        case 1:                                     /* switch 4 */
            M2C_FIELD(temp_r7_2, s32 *, 0x44) = var_r8;
            var_r9 = 1;
            var_r8 += 0x400;
            break;
        case 2:                                     /* switch 4 */
            M2C_FIELD(temp_r7_2, s32 *, 0x44) = var_r8;
            var_r8 += 0x800;
            break;
        default:                                    /* switch 4 */
            M2C_FIELD(temp_r7_2, s32 *, 0x44) = -1;
            break;
        }
        temp_r6_3 = temp_r6_2 + 2;
        temp_r5_4 = ((s32) M2C_FIELD(arg0, u16 *, 0x30) >> temp_r6_3) & 3;
        /* draft: did not compile: temp_r7_3 = temp_r7_2 + 4; */
        switch (temp_r5_4) {                        /* switch 5; irregular */
        case 1:                                     /* switch 5 */
            M2C_FIELD(temp_r7_3, s32 *, 0x44) = var_r8;
            var_r9 = 1;
            var_r8 += 0x400;
            break;
        case 2:                                     /* switch 5 */
            M2C_FIELD(temp_r7_3, s32 *, 0x44) = var_r8;
            var_r8 += 0x800;
            break;
        default:                                    /* switch 5 */
            M2C_FIELD(temp_r7_3, s32 *, 0x44) = -1;
            break;
        }
        var_r6 = temp_r6_3 + 2;
        /* draft: did not compile: var_r7 = temp_r7_3 + 4; */
        var_ctr -= 1;
    } while (var_ctr != 0);
    if (var_r9 != 0) {
        M2C_FIELD(arg1, s32 *, 0x64) = var_r8;
        var_r8 += 0x200;
    } else {
        M2C_FIELD(arg1, s32 *, 0x64) = -1;
    }
    M2C_FIELD(arg1, s32 *, 0x68) = var_r8;
}

s32 fn_800DDE30(s32 arg1, void *arg2) {
    void *sp14;
    s8 temp_r3;
    s32 var_r30;
    s8 temp_r6;
    void *temp_r29;

    if ((arg1 < 0) || (arg1 >= 0x7F)) {
        return -0x80;
    }
    temp_r3 = __CARDGetControlBlock(&sp14);
    if (temp_r3 < 0) {
        return temp_r3;
    }
    temp_r29 = fn_800DA410(sp14) + (arg1 << 6);
    var_r30 = fn_800DC964(sp14, temp_r29);
    if (var_r30 == -0xA) {
        var_r30 = fn_800DC9FC(temp_r29);
    }
    if (var_r30 >= 0) {
        /* draft: did not compile: memcpy(arg2 + 0x28, temp_r29, 4); */
        /* draft: did not compile: memcpy(arg2 + 0x2C, temp_r29 + 4, 2); */
        temp_r6 = M2C_FIELD(temp_r29, u16 *, 0x38);
        M2C_FIELD(arg2, s32 *, 0x20) = (s32) (temp_r6 * M2C_FIELD(sp14, s32 *, 0xC));
        /* draft: did not compile: memcpy(arg2, temp_r29 + 8, 0x20, temp_r6); */
        M2C_FIELD(arg2, s32 *, 0x24) = (s32) M2C_FIELD(temp_r29, s32 *, 0x28);
        M2C_FIELD(arg2, u8 *, 0x2E) = (u8) M2C_FIELD(temp_r29, u8 *, 7);
        M2C_FIELD(arg2, s32 *, 0x30) = (s32) M2C_FIELD(temp_r29, s32 *, 0x2C);
        M2C_FIELD(arg2, u16 *, 0x34) = (u16) M2C_FIELD(temp_r29, u16 *, 0x30);
        M2C_FIELD(arg2, u16 *, 0x36) = (u16) M2C_FIELD(temp_r29, u16 *, 0x32);
        M2C_FIELD(arg2, s32 *, 0x38) = (s32) M2C_FIELD(temp_r29, s32 *, 0x3C);
        UpdateIconOffsets(temp_r29, arg2);
    }
    return __CARDPutControlBlock(sp14, var_r30);
}

s32 CARDSetStatusAsync(s32 arg0, s32 arg1, void *arg2, s32 arg3) {
    s32 sp18;
    s8 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_5;
    u32 temp_r29;
    u32 temp_r3_4;
    void *temp_r31;

    if ((arg1 < 0) || (arg1 >= 0x7F) || ((temp_r3_4 = M2C_FIELD(arg2, u32 *, 0x30), (((u32) (temp_r3_4 + 0x10000) == -1U) == 0)) && (temp_r3_4 >= 0x200U)) || ((temp_r3_5 = M2C_FIELD(arg2, s32 *, 0x38), (((u32) (temp_r3_5 + 0x10000) == -1U) == 0)) && ((u32) (temp_r3_5 & 0x1FFF) > 0x1FC0U))) {
        return -0x80;
    }
    temp_r3_3 = __CARDGetControlBlock(arg0, &sp18);
    if (temp_r3_3 < 0) {
        return temp_r3_3;
    }
    temp_r31 = fn_800DA410(sp18) + (arg1 << 6);
    temp_r3_2 = fn_800DC964(sp18, temp_r31);
    if (temp_r3_2 < 0) {
        return __CARDPutControlBlock(sp18, temp_r3_2);
    }
    M2C_FIELD(temp_r31, u8 *, 7) = (u8) M2C_FIELD(arg2, u8 *, 0x2E);
    M2C_FIELD(temp_r31, u32 *, 0x2C) = (u32) M2C_FIELD(arg2, u32 *, 0x30);
    M2C_FIELD(temp_r31, u16 *, 0x30) = (u16) M2C_FIELD(arg2, u16 *, 0x34);
    M2C_FIELD(temp_r31, u16 *, 0x32) = (u16) M2C_FIELD(arg2, u16 *, 0x36);
    M2C_FIELD(temp_r31, s32 *, 0x3C) = (s32) M2C_FIELD(arg2, s32 *, 0x38);
    UpdateIconOffsets(temp_r31, arg2);
    if ((u32) (M2C_FIELD(temp_r31, u32 *, 0x2C) + 0x10000) == -1U) {
        M2C_FIELD(temp_r31, u16 *, 0x32) = (u16) ((M2C_FIELD(temp_r31, u16 *, 0x32) & 0xFFFFFFFC) | 1);
    }
    temp_r29 = (u32) *(u32 *)0x800000F8 >> 2U;
    OSGetTime(0x80000000);
    M2C_FIELD(temp_r31, u32 *, 0x28) = (u32) __div2i(0, temp_r29);
    temp_r3 = __CARDUpdateDir(arg0, arg3);
    if (temp_r3 < 0) {
        __CARDPutControlBlock(sp18, temp_r3);
    }
    return temp_r3;
}

void fn_800DE0D0(s32 arg0) {
    if (0 /* draft: did not compile */) {
        return;
    }
    fn_800D8A2C(arg0);
}

s32 fn_800DE118(s32 arg0, u8 *arg1, u8 *arg2, s32 arg3) {
    void *sp18;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    u8 *var_r27;
    s32 var_r24;
    s32 var_r25;
    u32 temp_r29;
    u8 *temp_r3_5;
    s32 var_r23;
    s32 temp_r3_4;
    s32 temp_r4;
    void *temp_r27;

    temp_r4 = *arg1;
    if (((s8) temp_r4 == -1) || (temp_r3_4 = *arg2, (((s8) temp_r3_4 == -1) != 0)) || ((s8) temp_r4 == 0) || ((s8) temp_r3_4 == 0)) {
        return -0x80;
    }
    if ((strlen(arg1) > 0x20U) || (strlen(arg2) > 0x20U)) {
        return -0xC;
    }
    temp_r3_3 = __CARDGetControlBlock(arg0, &sp18);
    if (temp_r3_3 < 0) {
        return temp_r3_3;
    }
    var_r23 = -1;
    var_r24 = -1;
    var_r25 = 0;
    temp_r3_5 = fn_800DA410(sp18);
    var_r27 = temp_r3_5;
    do {
        if (((u8) *var_r27 != 0xFF) && (memcmp(var_r27, M2C_FIELD(sp18, s32 *, 0x10C), 4) == 0) && (memcmp(var_r27 + 4, M2C_FIELD(sp18, s32 *, 0x10C) + 4, 2) == 0)) {
            if (__CARDCompareFileName(var_r27, arg1) != 0) {
                var_r23 = var_r25;
            }
            if ((s16)__CARDCompareFileName(var_r27, arg2) != 0) {
                var_r24 = var_r25;
            }
        }
        var_r25 += 1;
        var_r27 += 0x40;
    } while (var_r25 < 0x7F);
    if (var_r23 == -1) {
        return __CARDPutControlBlock(sp18, -4);
    }
    if (var_r24 != -1) {
        return __CARDPutControlBlock(sp18, -7);
    }
    temp_r27 = temp_r3_5 + (var_r23 << 6);
    temp_r3_2 = fn_800DC964(sp18, temp_r27);
    if (temp_r3_2 < 0) {
        return __CARDPutControlBlock(sp18, temp_r3_2);
    }
    /* draft: did not compile: strncpy(temp_r27 + 8, arg2, 0x20); */
    temp_r29 = (u32) *(u32 *)0x800000F8 >> 2U;
    OSGetTime(0x80000000);
    M2C_FIELD(temp_r27, u32 *, 0x28) = (u32) __div2i(0, temp_r29);
    temp_r3 = __CARDUpdateDir(arg0, arg3);
    if (temp_r3 < 0) {
        __CARDPutControlBlock(sp18, temp_r3);
    }
    return temp_r3;
}

void fn_800DE314(s32 arg0) {
    if (0 /* draft: did not compile */) {
        return;
    }
    fn_800D8A2C(arg0);
}

#pragma push
#pragma peephole off
s32 fn_800DE35C(s32 arg1, s32 arg2) {
    s32 sp14;
    u8 temp_r30;
    s8 temp_r3;
    u8 var_r31;

    if ((arg1 < 0) || (arg1 >= 0x7F)) {
        return -0x80;
    }
    temp_r3 = __CARDGetControlBlock(&sp14);
    if (temp_r3 < 0) {
        return temp_r3;
    }
    /* draft: did not compile: temp_r30 = fn_800DA410(sp14) + (arg1 << 6); */
    var_r31 = fn_800DC964(sp14, temp_r30);
    if (var_r31 == -0xA) {
        var_r31 = fn_800DC9FC(temp_r30);
    }
    if (var_r31 >= 0) {
        /* draft: did not compile: memcpy(arg2, temp_r30, 0x40); */
    }
    temp_r30 = __CARDPutControlBlock(sp14, var_r31);
    return temp_r30;}
#pragma pop

s32 fn_800DE418(s32 arg0, s32 arg1, void *arg2, s32 arg3) { return 0; } /* draft: stub */

s32 CARDGetSerialNo(s32 arg0, void *arg1) { return 0; } /* draft: stub */

void fn_800DE730(s32 arg0, s32 arg1, s8 arg2, s32 arg3) {
    s8 sp4C;
    M2C_UNK sp18;

    if (0 /* draft: did not compile */) {
        return;
    }
    sp4C = arg2;
    fn_800DE418(arg0, arg1, &sp18, arg3);
}

void fn_800DE7A8(s32 arg0, s32 arg1, s8 arg2) {
    s8 sp48;
    M2C_UNK sp14;
    s32 var_r3;

    /* draft: did not compile: var_r3 = fn_800DE35C(&sp14); */
    if (var_r3 < 0) {

    } else {
        sp48 = arg2;
        /* draft: did not compile: var_r3 = fn_800DE418(arg0, arg1, &sp14, &fn_800D77B0); */
    }
    if (var_r3 < 0) {
        return;
    }
    fn_800D8A2C(arg0);
}

void *fn_800DE82C(void) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;

    temp_r3_3 = fn_800E3428();
    if ((temp_r3_3 != 8) && (temp_r3_3 != 9) && (temp_r3_3 != 0xA)) {
        temp_r3_2 = M2C_FIELD(gx, s32 *, 0x2C8);
        M2C_FIELD(gx, s32 *, 0x2C8) = (s32) (temp_r3_2 + 1);
        return;
    }
    temp_r3 = M2C_FIELD(gx, s32 *, 0x2CC);
    M2C_FIELD(gx, s32 *, 0x2CC) = (s32) (temp_r3 + 1);
    return;
}

s32 __GXDefaultTlutRegionCallback(u32 arg0) {
    if (arg0 >= 0x14U) {
        return 0;
    }
    return 0;
}
