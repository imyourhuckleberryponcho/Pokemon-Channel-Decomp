/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_800708D4(M2C_UNK);
extern u32 lbl_8034E9DC;

void fn_8004658C(void *arg0, s32 arg1);
void fn_800465BC(void *arg0, u32 arg1, void *arg2, M2C_UNK arg_sp0);
void fn_8004690C(s32 arg0);
void fn_80046930(s32 arg0);
void fn_80046954(s32 arg0);
void fn_80046978(void *arg0);
void fn_800469A4(void *arg0, s32 *arg1);
void fn_800469DC(void *arg0, u32 arg1, void *arg2, M2C_UNK arg_sp0);
void fn_80046CBC(void *arg0);
void fn_80046CE8(void *arg0);
void fn_80046D14(void *arg0);
void fn_80046D40(void *arg0);
void fn_80046E00(void *arg0);
void fn_80046EC0(void *arg0);
void fn_80046F80(void *arg0);
void fn_80047040(void *arg0);
void fn_8004704C(void *arg0);
void fn_80047058(void *arg0);
void fn_80047064(void *arg0);
void fn_80047070(void *arg0);
void fn_80047084(void *arg0);
void fn_80047098(void *arg0);
void fn_800470AC(void *arg0);
void fn_800470D4(void *arg0);
void fn_800470E8(void *arg0, M2C_UNK arg_sp0);
void fn_80047408(void *arg0);
void fn_800474C8(void *arg0);
void fn_80047588(void *arg0);
void fn_80047648(void *arg0);
void fn_80047708(void *arg0);
void fn_800477BC(void *arg0);
void fn_80047870(void *arg0);

void fn_8004658C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, u8 *, 0x35) = (u8) M2C_FIELD(arg0, u8 *, 0x11);
    /* draft: did not compile: fn_800465BC(M2C_FIELD(arg0, s32 *, 0x34), arg1); */
}

void fn_800465BC(void *arg0, u32 arg1, void *arg2, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8004690C(s32 arg0) {
    /* draft: did not compile: fn_8004658C(arg0 + 0x10); */
}

void fn_80046930(s32 arg0) {
    /* draft: did not compile: fn_8004658C(arg0 + 0x14); */
}

void fn_80046954(s32 arg0) {
    /* draft: did not compile: fn_8004658C(arg0 + 0x18); */
}

void fn_80046978(void *arg0) {
    s32 sp8;

    sp8 = M2C_FIELD(arg0, s32 *, 0xC);
    fn_800469A4((void *)(&sp8), (long *)(0));
}

void fn_800469A4(void *arg0, s32 *arg1) {
    s32 sp8;

    sp8 = *arg1;
    M2C_FIELD(arg0, u8 *, 0x35) = (u8) M2C_FIELD(arg0, u8 *, 0x11);
    /* draft: did not compile: fn_800469DC(M2C_FIELD(arg0, s32 *, 0x34), &sp8); */
}

void fn_800469DC(void *arg0, u32 arg1, void *arg2, M2C_UNK arg_sp0) {
    s32 temp_r4_3;
    s32 temp_r4_8;
    u32 temp_r28;
    u8 temp_r30;
    u8 temp_r30_2;
    u8 temp_r4_4;
    u8 temp_r4_9;
    void **temp_r4;
    void **temp_r4_6;
    void **var_r26;
    void **var_r26_2;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r4_10;
    void *temp_r4_2;
    void *temp_r4_5;
    void *temp_r4_7;
    void *temp_r5;
    void *temp_r5_2;

    temp_r30 = M2C_FIELD(arg2, u8 *, 3);
    temp_r4 = M2C_FIELD(arg0, void ***, 8);
    temp_r28 = arg1 + 1;
    if (arg1 <= 0xFFFU) {
        if (arg1 >= (u32) lbl_8034E9DC) {
            M2C_FIELD((temp_r4 + arg1), u8 *, 0x30) = temp_r30;
        } else {
            temp_r4_2 = *temp_r4;
            M2C_FIELD(temp_r4_2, s32 *, 8) = (s32) (M2C_FIELD(temp_r4_2, s32 *, 8) | 0x20);
            M2C_FIELD(temp_r4_2, u32 *, 0x14) = arg1;
            M2C_FIELD(temp_r4_2, s32 *, 0x18) = (s32) temp_r30;
            M2C_FIELD(temp_r4_2, s32 *, 0x1C) = 1;
        }
    } else if (arg1 <= 0x1FFFU) {
        M2C_FIELD((temp_r4 + arg1), u8 *, 0x30) = temp_r30;
    } else if (arg1 <= 0x20FFU) {
        var_r26 = temp_r4 + ((M2C_FIELD((arg1 + (temp_r4 + 0x80000)), u8 *, -0x1CFC) * 0x24) + 0x80034);
        if ((void *) *var_r26 == NULL) {
            temp_r5 = *temp_r4;
            M2C_FIELD(temp_r5, s32 *, 8) = (s32) (M2C_FIELD(temp_r5, s32 *, 8) | 0x20);
            M2C_FIELD(temp_r5, u32 *, 0x14) = (u32) (arg1 - 0x2000);
            M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) temp_r30;
            M2C_FIELD(temp_r5, s32 *, 0x1C) = 1;
        } else {
loop_11:
            temp_r3 = *var_r26;
            if (temp_r3 != NULL) {
                M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), M2C_UNK (**)(s32, u8), 0x1C)(arg1 - 0x2000, temp_r30);
                var_r26 += 4;
                goto loop_11;
            }
        }
    } else if (arg1 <= 0x1FFFFFU) {
        temp_r3_2 = *temp_r4;
        temp_r4_3 = M2C_FIELD(temp_r3_2, s32 *, 8);
        if (!(temp_r4_3 & 0x200) && !(temp_r4_3 & 2)) {
            temp_r4_4 = M2C_FIELD(temp_r3_2, u8 *, 0x2E);
            if (!(temp_r4_4 & 8)) {
                M2C_FIELD(temp_r3_2, u8 *, 0x2E) = (u8) (temp_r4_4 | 8);
                fn_800708D4(2);
            }
        }
    } else {
        temp_r4_5 = *temp_r4;
        M2C_FIELD(temp_r4_5, s32 *, 8) = (s32) (M2C_FIELD(temp_r4_5, s32 *, 8) | 0x20);
        M2C_FIELD(temp_r4_5, u32 *, 0x14) = arg1;
        M2C_FIELD(temp_r4_5, s32 *, 0x18) = (s32) temp_r30;
        M2C_FIELD(temp_r4_5, s32 *, 0x1C) = 1;
    }
    temp_r30_2 = M2C_FIELD(arg2, u8 *, 2);
    temp_r4_6 = M2C_FIELD(arg0, void ***, 8);
    if (temp_r28 <= 0xFFFU) {
        if (temp_r28 >= (u32) lbl_8034E9DC) {
            M2C_FIELD((temp_r4_6 + temp_r28), u8 *, 0x30) = temp_r30_2;
            return;
        }
        temp_r4_7 = *temp_r4_6;
        M2C_FIELD(temp_r4_7, s32 *, 8) = (s32) (M2C_FIELD(temp_r4_7, s32 *, 8) | 0x20);
        M2C_FIELD(temp_r4_7, u32 *, 0x14) = temp_r28;
        M2C_FIELD(temp_r4_7, s32 *, 0x18) = (s32) temp_r30_2;
        M2C_FIELD(temp_r4_7, s32 *, 0x1C) = 1;
        return;
    }
    if (temp_r28 <= 0x1FFFU) {
        M2C_FIELD((temp_r4_6 + temp_r28), u8 *, 0x30) = temp_r30_2;
        return;
    }
    if (temp_r28 <= 0x20FFU) {
        var_r26_2 = temp_r4_6 + ((M2C_FIELD((temp_r28 + (temp_r4_6 + 0x80000)), u8 *, -0x1CFC) * 0x24) + 0x80034);
        if ((void *) *var_r26_2 == NULL) {
            temp_r5_2 = *temp_r4_6;
            M2C_FIELD(temp_r5_2, s32 *, 8) = (s32) (M2C_FIELD(temp_r5_2, s32 *, 8) | 0x20);
            M2C_FIELD(temp_r5_2, u32 *, 0x14) = (u32) (temp_r28 - 0x2000);
            M2C_FIELD(temp_r5_2, s32 *, 0x18) = (s32) temp_r30_2;
            M2C_FIELD(temp_r5_2, s32 *, 0x1C) = 1;
            return;
        }
loop_30:
        temp_r3_3 = *var_r26_2;
        if (temp_r3_3 != NULL) {
            M2C_FIELD(M2C_FIELD(temp_r3_3, void **, 4), M2C_UNK (**)(s32, u8), 0x1C)(temp_r28 - 0x2000, temp_r30_2);
            var_r26_2 += 4;
            goto loop_30;
        }
        return;
    }
    if (temp_r28 <= 0x1FFFFFU) {
        temp_r3_4 = *temp_r4_6;
        temp_r4_8 = M2C_FIELD(temp_r3_4, s32 *, 8);
        if (!(temp_r4_8 & 0x200) && !(temp_r4_8 & 2)) {
            temp_r4_9 = M2C_FIELD(temp_r3_4, u8 *, 0x2E);
            if (!(temp_r4_9 & 8)) {
                M2C_FIELD(temp_r3_4, u8 *, 0x2E) = (u8) (temp_r4_9 | 8);
                fn_800708D4(2);
            }
        }
    } else {
        temp_r4_10 = *temp_r4_6;
        M2C_FIELD(temp_r4_10, s32 *, 8) = (s32) (M2C_FIELD(temp_r4_10, s32 *, 8) | 0x20);
        M2C_FIELD(temp_r4_10, u32 *, 0x14) = temp_r28;
        M2C_FIELD(temp_r4_10, s32 *, 0x18) = (s32) temp_r30_2;
        M2C_FIELD(temp_r4_10, s32 *, 0x1C) = 1;
    }
}

#pragma push
#pragma dont_inline on
void fn_80046CBC(void *arg0) {
    s32 sp8;

    sp8 = M2C_FIELD(arg0, s32 *, 0x10);
    fn_800469A4((void *)(&sp8), (long *)(0));
}
#pragma pop

void fn_80046CE8(void *arg0) {
    s32 sp8;

    sp8 = M2C_FIELD(arg0, s32 *, 0x14);
    fn_800469A4((void *)(&sp8), (long *)(0));
}

#pragma push
#pragma dont_inline on
void fn_80046D14(void *arg0) {
    s32 sp8;

    sp8 = M2C_FIELD(arg0, s32 *, 0x18);
    fn_800469A4((void *)(&sp8), (long *)(0));
}
#pragma pop

void fn_80046D40(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0xE) + M2C_FIELD(arg0, u16 *, 0x36);
    if (temp_r4 >= 0x10000U) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
    }
    if (temp_r4 >= -0x8000U) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 8);
        if ((u16) M2C_FIELD(arg0, u16 *, 0xE) < -0x8000U) {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 4);
        } else {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFB);
        }
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF7);
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFB);
    }
    M2C_FIELD(arg0, u16 *, 0xE) = temp_r4;
    if ((u16) M2C_FIELD(arg0, u16 *, 0xE) == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_80046E00(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0x12) + M2C_FIELD(arg0, u16 *, 0x36);
    if (temp_r4 >= 0x10000U) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
    }
    if (temp_r4 >= -0x8000U) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 8);
        if ((u16) M2C_FIELD(arg0, u16 *, 0x12) < -0x8000U) {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 4);
        } else {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFB);
        }
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF7);
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFB);
    }
    M2C_FIELD(arg0, u16 *, 0x12) = temp_r4;
    if ((u16) M2C_FIELD(arg0, u16 *, 0x12) == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_80046EC0(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0x16) + M2C_FIELD(arg0, u16 *, 0x36);
    if (temp_r4 >= 0x10000U) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
    }
    if (temp_r4 >= -0x8000U) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 8);
        if ((u16) M2C_FIELD(arg0, u16 *, 0x16) < -0x8000U) {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 4);
        } else {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFB);
        }
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF7);
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFB);
    }
    M2C_FIELD(arg0, u16 *, 0x16) = temp_r4;
    if ((u16) M2C_FIELD(arg0, u16 *, 0x16) == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_80046F80(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0x1A) + M2C_FIELD(arg0, u16 *, 0x36);
    if (temp_r4 >= 0x10000U) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
    }
    if (temp_r4 >= -0x8000U) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 8);
        if ((u16) M2C_FIELD(arg0, u16 *, 0x1A) < -0x8000U) {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 4);
        } else {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFB);
        }
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF7);
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFB);
    }
    M2C_FIELD(arg0, u16 *, 0x1A) = temp_r4;
    if ((u16) M2C_FIELD(arg0, u16 *, 0x1A) == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_80047040(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0xE) = (u16) M2C_FIELD(arg0, u16 *, 0x36);
}

void fn_8004704C(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x12) = (u16) M2C_FIELD(arg0, u16 *, 0x36);
}

void fn_80047058(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x16) = (u16) M2C_FIELD(arg0, u16 *, 0x36);
}

void fn_80047064(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x1A) = (u16) M2C_FIELD(arg0, u16 *, 0x36);
}

void fn_80047070(void *arg0) {
    u16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0xE);
    M2C_FIELD(arg0, u16 *, 0xE) = (u16) M2C_FIELD(arg0, u16 *, 0x12);
    M2C_FIELD(arg0, u16 *, 0x12) = temp_r4;
}

void fn_80047084(void *arg0) {
    u16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0xE);
    M2C_FIELD(arg0, u16 *, 0xE) = (u16) M2C_FIELD(arg0, u16 *, 0x16);
    M2C_FIELD(arg0, u16 *, 0x16) = temp_r4;
}

void fn_80047098(void *arg0) {
    u16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0xE);
    M2C_FIELD(arg0, u16 *, 0xE) = (u16) M2C_FIELD(arg0, u16 *, 0x1A);
    M2C_FIELD(arg0, u16 *, 0x1A) = temp_r4;
}

void fn_800470AC(void *arg0) {
    u16 temp_r4;
    u16 var_r0;

    var_r0 = M2C_FIELD(arg0, u16 *, 0xE);
    M2C_FIELD(arg0, u16 *, 0xE) = (u16) M2C_FIELD(arg0, u16 *, 0x26);
    M2C_FIELD(arg0, u16 *, 0x26) = var_r0;
    temp_r4 = M2C_FIELD(arg0, u16 *, 0x2E);
    if ((s32) temp_r4 <= (s32) var_r0) {
        var_r0 = temp_r4;
    }
    M2C_FIELD(arg0, u16 *, 0x2E) = var_r0;
}

void fn_800470D4(void *arg0) {
    u8 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0xF);
    M2C_FIELD(arg0, u8 *, 0xF) = (u8) M2C_FIELD(arg0, u8 *, 0xE);
    M2C_FIELD(arg0, u8 *, 0xE) = temp_r4;
}

void fn_800470E8(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80047408(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0xE) - M2C_FIELD(arg0, u16 *, 0x36);
    if (temp_r4 >= 0x10000U) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
    }
    if (temp_r4 >= -0x8000U) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 8);
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFB);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF7);
        if ((u16) M2C_FIELD(arg0, u16 *, 0xE) >= -0x8000U) {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 4);
        } else {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFB);
        }
    }
    M2C_FIELD(arg0, u16 *, 0xE) = temp_r4;
    if ((u16) M2C_FIELD(arg0, u16 *, 0xE) == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_800474C8(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0x12) - M2C_FIELD(arg0, u16 *, 0x36);
    if (temp_r4 >= 0x10000U) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
    }
    if (temp_r4 >= -0x8000U) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 8);
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFB);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF7);
        if ((u16) M2C_FIELD(arg0, u16 *, 0x12) >= -0x8000U) {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 4);
        } else {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFB);
        }
    }
    M2C_FIELD(arg0, u16 *, 0x12) = temp_r4;
    if ((u16) M2C_FIELD(arg0, u16 *, 0x12) == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_80047588(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0x16) - M2C_FIELD(arg0, u16 *, 0x36);
    if (temp_r4 >= 0x10000U) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
    }
    if (temp_r4 >= -0x8000U) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 8);
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFB);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF7);
        if ((u16) M2C_FIELD(arg0, u16 *, 0x16) >= -0x8000U) {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 4);
        } else {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFB);
        }
    }
    M2C_FIELD(arg0, u16 *, 0x16) = temp_r4;
    if ((u16) M2C_FIELD(arg0, u16 *, 0x16) == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_80047648(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0x1A) - M2C_FIELD(arg0, u16 *, 0x36);
    if (temp_r4 >= 0x10000U) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
    }
    if (temp_r4 >= -0x8000U) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 8);
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFB);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF7);
        if ((u16) M2C_FIELD(arg0, u16 *, 0x1A) >= -0x8000U) {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 4);
        } else {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFB);
        }
    }
    M2C_FIELD(arg0, u16 *, 0x1A) = temp_r4;
    if ((u16) M2C_FIELD(arg0, u16 *, 0x1A) == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_80047708(void *arg0) {
    u32 temp_r5;
    u32 temp_r4;

    temp_r5 = M2C_FIELD(arg0, u16 *, 0xE);
    temp_r4 = temp_r5 - M2C_FIELD(arg0, u16 *, 0x36);
    if (temp_r4 >= 0x10000U) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
    }
    if (temp_r4 >= -0x8000U) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 8);
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFB);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF7);
        if (temp_r5 >= -0x8000U) {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 4);
        } else {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFB);
        }
    }
    if (temp_r4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_800477BC(void *arg0) {
    u32 temp_r5;
    u32 temp_r4;

    temp_r5 = M2C_FIELD(arg0, u16 *, 0x12);
    temp_r4 = temp_r5 - M2C_FIELD(arg0, u16 *, 0x36);
    if (temp_r4 >= 0x10000U) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
    }
    if (temp_r4 >= -0x8000U) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 8);
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFB);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF7);
        if (temp_r5 >= -0x8000U) {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 4);
        } else {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFB);
        }
    }
    if (temp_r4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_80047870(void *arg0) {
    u32 temp_r5;
    u32 temp_r4;

    temp_r5 = M2C_FIELD(arg0, u16 *, 0x16);
    temp_r4 = temp_r5 - M2C_FIELD(arg0, u16 *, 0x36);
    if (temp_r4 >= 0x10000U) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
    }
    if (temp_r4 >= -0x8000U) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 8);
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFB);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF7);
        if (temp_r5 >= -0x8000U) {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 4);
        } else {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFB);
        }
    }
    if (temp_r4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}
