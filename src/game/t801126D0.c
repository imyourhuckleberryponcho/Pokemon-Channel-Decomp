/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK InitTrackEvents();
M2C_UNK synthSetBpm(u32, u8, u8);
M2C_UNK synthVolume(u8, u16, u8, M2C_UNK, M2C_UNK);
M2C_UNK synthSetMusicVolumeType();
M2C_UNK fn_8012C03C(M2C_UNK, u8, u8, u8);
M2C_UNK fn_8012C768(u8, u8, M2C_UNK);
M2C_UNK fn_8012CB50(u8, u8);
extern M2C_UNK lbl_80320580;
extern M2C_UNK lbl_8032C8C0;
extern M2C_UNK lbl_8032D414;
extern u32 lbl_80350D10;
extern s32 lbl_80350D18;
extern M2C_UNK *lbl_80350D20;
extern M2C_UNK *lbl_80350D24;
extern void *lbl_80350D28;
extern M2C_UNK *lbl_80350D2C;
M2C_UNK fn_80124B6C(s32);
extern M2C_UNK *lbl_80350D1C;

u32 fn_801126D0(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4, s8 arg5, s16 arg6, M2C_UNK arg_sp0);
void StartPause(void *arg0);
void fn_801131F8(s32 arg0);
void fn_80113474(s32 arg0, M2C_UNK arg_sp0);
void fn_80113724(u16 arg0);
void fn_801137B4(s32 arg0, s16 arg1);
void fn_80113898(s32 arg0);
void fn_801139A0(s32 arg0, s32 arg1, s32 arg2);
void fn_80113A5C(s8 arg0, s32 arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0);

u32 fn_801126D0(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4, s8 arg5, s16 arg6, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

void StartPause(void *arg0) {
    void **temp_r4;
    void *temp_r4_2;

    temp_r4 = M2C_FIELD(arg0, void ***, 4);
    if (temp_r4 != NULL) {
        *temp_r4 = M2C_FIELD(arg0, void **, 0);
    } else {
        lbl_80350D2C = M2C_FIELD(arg0, void **, 0);
    }
    temp_r4_2 = M2C_FIELD(arg0, void **, 0);
    if (temp_r4_2 != NULL) {
        M2C_FIELD(temp_r4_2, void ***, 4) = (void **) M2C_FIELD(arg0, void ***, 4);
    }
    M2C_FIELD(arg0, void **, 0) = (void *) lbl_80350D28;
    if ((void *) lbl_80350D28 != NULL) {
        M2C_FIELD(lbl_80350D28, void **, 4) = arg0;
    }
    M2C_FIELD(arg0, void ***, 4) = NULL;
    lbl_80350D28 = arg0;
    M2C_FIELD(arg0, s8 *, 8) = 2;
}

void fn_801131F8(s32 arg0) {
    M2C_UNK *temp_r0;
    M2C_UNK *temp_r0_2;
    M2C_UNK *temp_r0_3;
    M2C_UNK *var_r28_2;
    M2C_UNK *var_r4_4;
    M2C_UNK *var_r5;
    M2C_UNK *var_r5_2;
    s32 var_r4_3;
    u32 temp_r5;
    u32 var_r30;
    void **temp_r3;
    void *temp_r31;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r6;
    void *var_r28;
    void *var_r29;
    void *var_r4;
    void *var_r4_2;

    temp_r5 = arg0 & 0x7FFFFFFF;
    var_r4 = lbl_80350D2C;
loop_4:
    if (var_r4 == NULL) {
        var_r4_2 = lbl_80350D28;
loop_9:
        if (var_r4_2 == NULL) {
            var_r4_3 = -1;
        } else if ((u32) M2C_FIELD(var_r4_2, u32 *, 0xC) == temp_r5) {
            var_r4_3 = (M2C_FIELD(var_r4_2, u8 *, 9) & ~0x80000000) | (arg0 & 0x80000000);
        } else {
            var_r4_2 = M2C_FIELD(var_r4_2, void **, 0);
            goto loop_9;
        }
    } else if ((u32) M2C_FIELD(var_r4, u32 *, 0xC) == temp_r5) {
        var_r4_3 = (M2C_FIELD(var_r4, u8 *, 9) & ~0x80000000) | (arg0 & 0x80000000);
    } else {
        var_r4 = M2C_FIELD(var_r4, void **, 0);
        goto loop_4;
    }
    if ((u32) (var_r4_3 + 0x10000) != -1U) {
        if (!(var_r4_3 & 0x80000000)) {
            temp_r31 = &lbl_80320580 + (var_r4_3 * 0x1868);
            if ((u8) M2C_FIELD(temp_r31, u8 *, 8) == 1) {
                temp_r3 = M2C_FIELD(temp_r31, void ***, 4);
                if (temp_r3 != NULL) {
                    *temp_r3 = M2C_FIELD(temp_r31, void **, 0);
                } else {
                    lbl_80350D2C = M2C_FIELD(temp_r31, void **, 0);
                }
                temp_r3_2 = M2C_FIELD(temp_r31, void **, 0);
                if (temp_r3_2 != NULL) {
                    M2C_FIELD(temp_r3_2, void ***, 4) = (void **) M2C_FIELD(temp_r31, void ***, 4);
                }
                M2C_FIELD(temp_r31, void **, 0) = (void *) lbl_80350D28;
                if ((void *) lbl_80350D28 != NULL) {
                    M2C_FIELD(lbl_80350D28, void **, 4) = temp_r31;
                }
                var_r30 = 0U;
                M2C_FIELD(temp_r31, void ***, 4) = NULL;
                var_r28 = temp_r31;
                lbl_80350D28 = temp_r31;
                M2C_FIELD(temp_r31, u8 *, 8) = 2U;
                do {
                    var_r29 = M2C_FIELD(var_r28, void **, 0xE64);
loop_24:
                    if (var_r29 != NULL) {
                        fn_80124B6C(M2C_FIELD(var_r29, s32 *, 8));
                        var_r29 = M2C_FIELD(var_r29, void **, 0);
                        goto loop_24;
                    }
                    var_r30 += 1;
                    /* draft: did not compile: var_r28 += 4; */
                } while (var_r30 < 2U);
                var_r28_2 = M2C_FIELD(temp_r31, M2C_UNK **, 0xE6C);
loop_28:
                if (var_r28_2 != NULL) {
                    fn_80124B6C(M2C_FIELD(var_r28_2, s32 *, 8));
                    var_r28_2 = M2C_FIELD(var_r28_2, M2C_UNK **, 0);
                    goto loop_28;
                }
                var_r5 = M2C_FIELD(temp_r31, M2C_UNK **, 0xE64);
                if (var_r5 != NULL) {
loop_32:
                    /* draft: did not compile: temp_r0 = *var_r5; */
                    if (temp_r0 != NULL) {
                        var_r5 = temp_r0;
                        goto loop_32;
                    }
                    if ((M2C_UNK *) lbl_80350D1C != NULL) {
                        /* draft: did not compile: *var_r5 = lbl_80350D1C; */
                        M2C_FIELD(lbl_80350D1C, M2C_UNK **, 4) = var_r5;
                    }
                    lbl_80350D1C = M2C_FIELD(temp_r31, M2C_UNK **, 0xE64);
                    M2C_FIELD(temp_r31, M2C_UNK **, 0xE64) = NULL;
                }
                /* draft: did not compile: temp_r6 = temp_r31 + 4; */
                var_r5_2 = M2C_FIELD(temp_r31, M2C_UNK **, 0xE68);
                if (var_r5_2 != NULL) {
loop_39:
                    /* draft: did not compile: temp_r0_2 = *var_r5_2; */
                    if (temp_r0_2 != NULL) {
                        var_r5_2 = temp_r0_2;
                        goto loop_39;
                    }
                    if ((M2C_UNK *) lbl_80350D1C != NULL) {
                        /* draft: did not compile: *var_r5_2 = lbl_80350D1C; */
                        M2C_FIELD(lbl_80350D1C, M2C_UNK **, 4) = var_r5_2;
                    }
                    lbl_80350D1C = M2C_FIELD(temp_r6, M2C_UNK **, 0xE64);
                    M2C_FIELD(temp_r6, M2C_UNK **, 0xE64) = NULL;
                }
                var_r4_4 = M2C_FIELD(temp_r31, M2C_UNK **, 0xE6C);
                if (var_r4_4 != NULL) {
loop_46:
                    /* draft: did not compile: temp_r0_3 = *var_r4_4; */
                    if (temp_r0_3 != NULL) {
                        var_r4_4 = temp_r0_3;
                        goto loop_46;
                    }
                    if ((M2C_UNK *) lbl_80350D1C != NULL) {
                        /* draft: did not compile: *var_r4_4 = lbl_80350D1C; */
                        M2C_FIELD(lbl_80350D1C, M2C_UNK **, 4) = var_r4_4;
                    }
                    lbl_80350D1C = M2C_FIELD(temp_r31, M2C_UNK **, 0xE6C);
                    M2C_FIELD(temp_r31, M2C_UNK **, 0xE6C) = NULL;
                }
            }
        } else {
            temp_r3_3 = &lbl_80320580 + ((var_r4_3 & 0x7FFFFFFF) * 0x1868);
            if ((u8) M2C_FIELD(temp_r3_3, u8 *, 8) != 0) {
                M2C_FIELD(temp_r3_3, u8 *, 0xEDA) = (u8) (M2C_FIELD(temp_r3_3, u8 *, 0xEDA) | 8);
            }
        }
    }
}

void fn_80113474(s32 arg0, M2C_UNK arg_sp0) {
    M2C_UNK *temp_r0_2;
    M2C_UNK *temp_r0_3;
    M2C_UNK *temp_r0_4;
    M2C_UNK *var_r28_2;
    M2C_UNK *var_r4_4;
    M2C_UNK *var_r5;
    M2C_UNK *var_r5_2;
    s32 temp_r27;
    s32 var_r4_3;
    u32 temp_r5;
    u32 var_r30;
    u8 temp_r0;
    void **temp_r3;
    void **temp_r3_2;
    void *temp_r27_2;
    void *temp_r31;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r6;
    void *var_r28;
    void *var_r29;
    void *var_r4;
    void *var_r4_2;

    var_r4 = lbl_80350D2C;
    temp_r5 = arg0 & 0x7FFFFFFF;
loop_4:
    if (var_r4 == NULL) {
        var_r4_2 = lbl_80350D28;
loop_9:
        if (var_r4_2 == NULL) {
            var_r4_3 = -1;
        } else if ((u32) M2C_FIELD(var_r4_2, u32 *, 0xC) == temp_r5) {
            var_r4_3 = (M2C_FIELD(var_r4_2, u8 *, 9) & ~0x80000000) | (arg0 & 0x80000000);
        } else {
            var_r4_2 = M2C_FIELD(var_r4_2, void **, 0);
            goto loop_9;
        }
    } else if ((u32) M2C_FIELD(var_r4, u32 *, 0xC) == temp_r5) {
        var_r4_3 = (M2C_FIELD(var_r4, u8 *, 9) & ~0x80000000) | (arg0 & 0x80000000);
    } else {
        var_r4 = M2C_FIELD(var_r4, void **, 0);
        goto loop_4;
    }
    if ((u32) (var_r4_3 + 0x10000) != -1U) {
        if (!(var_r4_3 & 0x80000000)) {
            temp_r27 = var_r4_3 * 0x1868;
            temp_r31 = &lbl_80320580 + temp_r27;
            temp_r0 = M2C_FIELD(temp_r31, u8 *, 8);
            switch ((s32) temp_r0) {                /* irregular */
            case 1:
                temp_r3 = M2C_FIELD(temp_r31, void ***, 4);
                if (temp_r3 != NULL) {
                    *temp_r3 = M2C_FIELD(temp_r31, void **, 0);
                } else {
                    lbl_80350D2C = M2C_FIELD(temp_r31, void **, 0);
                }
                var_r30 = 0U;
                var_r28 = temp_r31;
                do {
                    var_r29 = M2C_FIELD(var_r28, void **, 0xE64);
loop_23:
                    if (var_r29 != NULL) {
                        fn_80124B6C(M2C_FIELD(var_r29, s32 *, 8));
                        var_r29 = M2C_FIELD(var_r29, void **, 0);
                        goto loop_23;
                    }
                    var_r30 += 1;
                    /* draft: did not compile: var_r28 += 4; */
                } while (var_r30 < 2U);
                temp_r27_2 = &lbl_80320580 + temp_r27;
                var_r28_2 = M2C_FIELD(temp_r27_2, M2C_UNK **, 0xE6C);
loop_27:
                if (var_r28_2 != NULL) {
                    fn_80124B6C(M2C_FIELD(var_r28_2, s32 *, 8));
                    var_r28_2 = M2C_FIELD(var_r28_2, M2C_UNK **, 0);
                    goto loop_27;
                }
                var_r5 = M2C_FIELD(temp_r31, M2C_UNK **, 0xE64);
                if (var_r5 != NULL) {
loop_31:
                    /* draft: did not compile: temp_r0_2 = *var_r5; */
                    if (temp_r0_2 != NULL) {
                        var_r5 = temp_r0_2;
                        goto loop_31;
                    }
                    if ((M2C_UNK *) lbl_80350D1C != NULL) {
                        /* draft: did not compile: *var_r5 = lbl_80350D1C; */
                        M2C_FIELD(lbl_80350D1C, M2C_UNK **, 4) = var_r5;
                    }
                    lbl_80350D1C = M2C_FIELD(temp_r31, M2C_UNK **, 0xE64);
                    M2C_FIELD(temp_r31, M2C_UNK **, 0xE64) = NULL;
                }
                /* draft: did not compile: temp_r6 = temp_r31 + 4; */
                var_r5_2 = M2C_FIELD(temp_r31, M2C_UNK **, 0xE68);
                if (var_r5_2 != NULL) {
loop_38:
                    /* draft: did not compile: temp_r0_3 = *var_r5_2; */
                    if (temp_r0_3 != NULL) {
                        var_r5_2 = temp_r0_3;
                        goto loop_38;
                    }
                    if ((M2C_UNK *) lbl_80350D1C != NULL) {
                        /* draft: did not compile: *var_r5_2 = lbl_80350D1C; */
                        M2C_FIELD(lbl_80350D1C, M2C_UNK **, 4) = var_r5_2;
                    }
                    lbl_80350D1C = M2C_FIELD(temp_r6, M2C_UNK **, 0xE64);
                    M2C_FIELD(temp_r6, M2C_UNK **, 0xE64) = NULL;
                }
                var_r4_4 = M2C_FIELD(temp_r27_2, M2C_UNK **, 0xE6C);
                if (var_r4_4 != NULL) {
loop_45:
                    /* draft: did not compile: temp_r0_4 = *var_r4_4; */
                    if (temp_r0_4 != NULL) {
                        var_r4_4 = temp_r0_4;
                        goto loop_45;
                    }
                    if ((M2C_UNK *) lbl_80350D1C != NULL) {
                        /* draft: did not compile: *var_r4_4 = lbl_80350D1C; */
                        M2C_FIELD(lbl_80350D1C, M2C_UNK **, 4) = var_r4_4;
                    }
                    lbl_80350D1C = M2C_FIELD(temp_r27_2, M2C_UNK **, 0xE6C);
                    M2C_FIELD(temp_r27_2, M2C_UNK **, 0xE6C) = NULL;
                }
                break;
            case 2:
                temp_r3_2 = M2C_FIELD(temp_r31, void ***, 4);
                if (temp_r3_2 != NULL) {
                    *temp_r3_2 = M2C_FIELD(temp_r31, void **, 0);
                } else {
                    lbl_80350D28 = M2C_FIELD(temp_r31, void **, 0);
                }
                break;
            }
            temp_r3_3 = M2C_FIELD(temp_r31, void **, 0);
            if (temp_r3_3 != NULL) {
                M2C_FIELD(temp_r3_3, void ***, 4) = (void **) M2C_FIELD(temp_r31, void ***, 4);
            }
            M2C_FIELD(temp_r31, u8 *, 8) = 0U;
            if ((void *) lbl_80350D24 != NULL) {
                M2C_FIELD(lbl_80350D24, void **, 4) = temp_r31;
            }
            M2C_FIELD(temp_r31, void **, 0) = (void *) lbl_80350D24;
            M2C_FIELD(temp_r31, void ***, 4) = NULL;
            lbl_80350D24 = temp_r31;
            return;
        }
        temp_r3_4 = &lbl_80320580 + ((var_r4_3 & 0x7FFFFFFF) * 0x1868);
        if ((u8) M2C_FIELD(temp_r3_4, u8 *, 8) != 0) {
            M2C_FIELD(temp_r3_4, s32 *, 0xEDC) = 0;
        }
    }
}

void fn_80113724(u16 arg0) {
    void *var_r30;
    void *var_r30_2;

    var_r30 = lbl_80350D2C;
loop_4:
    if (var_r30 != NULL) {
        if ((u16) M2C_FIELD(var_r30, u16 *, 0xA) == arg0) {
            fn_80113474((long)(M2C_FIELD(var_r30, s32 *, 0xC)), (long)(0));
        }
        var_r30 = M2C_FIELD(var_r30, void **, 0);
        goto loop_4;
    }
    var_r30_2 = lbl_80350D28;
loop_9:
    if (var_r30_2 != NULL) {
        if ((u16) M2C_FIELD(var_r30_2, u16 *, 0xA) == arg0) {
            fn_80113474((long)(M2C_FIELD(var_r30_2, s32 *, 0xC)), (long)(0));
        }
        var_r30_2 = M2C_FIELD(var_r30_2, void **, 0);
        goto loop_9;
    }
}

void fn_801137B4(s32 arg0, s16 arg1) {
    s32 var_r5_3;
    void *temp_r3;
    void *temp_r3_2;
    void *var_r5;
    void *var_r5_2;
    u32 temp_r6;

    var_r5 = lbl_80350D2C;
    temp_r6 = arg0 & 0x7FFFFFFF;
loop_4:
    if (var_r5 == NULL) {
        var_r5_2 = lbl_80350D28;
loop_9:
        if (var_r5_2 == NULL) {
            var_r5_3 = -1;
        } else if ((u32) M2C_FIELD(var_r5_2, u32 *, 0xC) == temp_r6) {
            var_r5_3 = (M2C_FIELD(var_r5_2, u8 *, 9) & ~0x80000000) | (arg0 & 0x80000000);
        } else {
            var_r5_2 = M2C_FIELD(var_r5_2, void **, 0);
            goto loop_9;
        }
    } else if ((u32) M2C_FIELD(var_r5, u32 *, 0xC) == temp_r6) {
        var_r5_3 = (M2C_FIELD(var_r5, u8 *, 9) & ~0x80000000) | (arg0 & 0x80000000);
    } else {
        var_r5 = M2C_FIELD(var_r5, void **, 0);
        goto loop_4;
    }
    if (!(var_r5_3 & 0x80000000)) {
        temp_r3 = &lbl_80320580 + (var_r5_3 * 0x1868);
        M2C_FIELD(temp_r3, s16 *, 0x151A) = arg1;
        M2C_FIELD(temp_r3, s16 *, 0x1552) = arg1;
        M2C_FIELD(temp_r3, s16 *, 0x158A) = arg1;
        M2C_FIELD(temp_r3, s16 *, 0x15C2) = arg1;
        M2C_FIELD(temp_r3, s16 *, 0x15FA) = arg1;
        M2C_FIELD(temp_r3, s16 *, 0x1632) = arg1;
        M2C_FIELD(temp_r3, s16 *, 0x166A) = arg1;
        M2C_FIELD(temp_r3, s16 *, 0x16A2) = arg1;
        M2C_FIELD(temp_r3, s16 *, 0x16DA) = arg1;
        M2C_FIELD(temp_r3, s16 *, 0x1712) = arg1;
        M2C_FIELD(temp_r3, s16 *, 0x174A) = arg1;
        M2C_FIELD(temp_r3, s16 *, 0x1782) = arg1;
        M2C_FIELD(temp_r3, s16 *, 0x17BA) = arg1;
        M2C_FIELD(temp_r3, s16 *, 0x17F2) = arg1;
        M2C_FIELD(temp_r3, s16 *, 0x182A) = arg1;
        M2C_FIELD(temp_r3, s16 *, 0x1862) = arg1;
        return;
    }
    temp_r3_2 = &lbl_80320580 + ((var_r5_3 & 0x7FFFFFFF) * 0x1868);
    M2C_FIELD(temp_r3_2, u8 *, 0xEDA) = (u8) (M2C_FIELD(temp_r3_2, u8 *, 0xEDA) | 0x20);
    M2C_FIELD(temp_r3_2, s16 *, 0xED8) = arg1;
}

void fn_80113898(s32 arg0) {
    s32 var_r4_3;
    u32 temp_r5;
    void **temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r4;
    void *var_r4;
    void *var_r4_2;

    var_r4 = lbl_80350D2C;
    temp_r5 = arg0 & 0x7FFFFFFF;
loop_4:
    if (var_r4 == NULL) {
        var_r4_2 = lbl_80350D28;
loop_9:
        if (var_r4_2 == NULL) {
            var_r4_3 = -1;
        } else if ((u32) M2C_FIELD(var_r4_2, u32 *, 0xC) == temp_r5) {
            var_r4_3 = (M2C_FIELD(var_r4_2, u8 *, 9) & ~0x80000000) | (arg0 & 0x80000000);
        } else {
            var_r4_2 = M2C_FIELD(var_r4_2, void **, 0);
            goto loop_9;
        }
    } else if ((u32) M2C_FIELD(var_r4, u32 *, 0xC) == temp_r5) {
        var_r4_3 = (M2C_FIELD(var_r4, u8 *, 9) & ~0x80000000) | (arg0 & 0x80000000);
    } else {
        var_r4 = M2C_FIELD(var_r4, void **, 0);
        goto loop_4;
    }
    if (!(var_r4_3 & 0x80000000)) {
        temp_r4 = &lbl_80320580 + (var_r4_3 * 0x1868);
        if ((u8) M2C_FIELD(temp_r4, u8 *, 8) == 2) {
            temp_r3 = M2C_FIELD(temp_r4, void ***, 4);
            if (temp_r3 != NULL) {
                *temp_r3 = M2C_FIELD(temp_r4, void **, 0);
            } else {
                lbl_80350D28 = M2C_FIELD(temp_r4, void **, 0);
            }
            temp_r3_2 = M2C_FIELD(temp_r4, void **, 0);
            if (temp_r3_2 != NULL) {
                M2C_FIELD(temp_r3_2, void ***, 4) = (void **) M2C_FIELD(temp_r4, void ***, 4);
            }
            M2C_FIELD(temp_r4, void **, 0) = (void *) lbl_80350D2C;
            if ((void *) lbl_80350D2C != NULL) {
                M2C_FIELD(lbl_80350D2C, void **, 4) = temp_r4;
            }
            M2C_FIELD(temp_r4, void ***, 4) = NULL;
            lbl_80350D2C = temp_r4;
            M2C_FIELD(temp_r4, u8 *, 8) = 1U;
            return;
        }
        return;
    }
    temp_r3_3 = &lbl_80320580 + ((var_r4_3 & 0x7FFFFFFF) * 0x1868);
    M2C_FIELD(temp_r3_3, u8 *, 0xEDA) = (u8) (M2C_FIELD(temp_r3_3, u8 *, 0xEDA) & 0xFFFFFFF7);
}

void fn_801139A0(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r6_3;
    u32 temp_r7;
    void *temp_r3;
    void *temp_r3_2;
    void *var_r6;
    void *var_r6_2;

    var_r6 = lbl_80350D2C;
    temp_r7 = arg0 & 0x7FFFFFFF;
loop_4:
    if (var_r6 == NULL) {
        var_r6_2 = lbl_80350D28;
loop_9:
        if (var_r6_2 == NULL) {
            var_r6_3 = -1;
        } else if ((u32) M2C_FIELD(var_r6_2, u32 *, 0xC) == temp_r7) {
            var_r6_3 = (M2C_FIELD(var_r6_2, u8 *, 9) & ~0x80000000) | (arg0 & 0x80000000);
        } else {
            var_r6_2 = M2C_FIELD(var_r6_2, void **, 0);
            goto loop_9;
        }
    } else if ((u32) M2C_FIELD(var_r6, u32 *, 0xC) == temp_r7) {
        var_r6_3 = (M2C_FIELD(var_r6, u8 *, 9) & ~0x80000000) | (arg0 & 0x80000000);
    } else {
        var_r6 = M2C_FIELD(var_r6, void **, 0);
        goto loop_4;
    }
    if ((u32) (var_r6_3 + 0x10000) != -1U) {
        if (!(var_r6_3 & 0x80000000)) {
            temp_r3 = &lbl_80320580 + (var_r6_3 * 0x1868);
            M2C_FIELD(temp_r3, s32 *, 0x11C) = arg1;
            M2C_FIELD(temp_r3, s32 *, 0x120) = arg2;
            return;
        }
        temp_r3_2 = &lbl_80320580 + ((var_r6_3 & 0x7FFFFFFF) * 0x1868);
        M2C_FIELD(temp_r3_2, u8 *, 0xEDA) = (u8) (M2C_FIELD(temp_r3_2, u8 *, 0xEDA) | 0x10);
        M2C_FIELD(temp_r3_2, s32 *, 0xED0) = arg1;
        M2C_FIELD(temp_r3_2, s32 *, 0xED4) = arg2;
    }
}

void fn_80113A5C(s8 arg0, s32 arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0) { } /* draft: stub */
