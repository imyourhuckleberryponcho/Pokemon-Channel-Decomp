/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_800484E4();

void fn_8005F118(void *arg0);
void fn_8005F164(void *arg0);
void fn_8005F1B0(void *arg0);
void fn_8005F1F8(void *arg0);
void fn_8005F224(void *arg0);
void fn_8005F250(void *arg0);
void fn_8005F27C(void *arg0);
void fn_8005F2A8(void *arg0);
void fn_8005F2D4(void *arg0);
void fn_8005F300(void *arg0);
void fn_8005F32C(void *arg0);
void fn_8005F358(void *arg0);
void fn_8005F384(void *arg0);
void fn_8005F3B0(void *arg0);
void fn_8005F3DC(void *arg0);
void fn_8005F408(void *arg0);
void fn_8005F4C4(void *arg0);
void fn_8005F584(void *arg0);
void fn_8005F644(void *arg0);
void fn_8005F704(void *arg0);
void fn_8005F7CC(void *arg0);
void fn_8005F898(void *arg0);
void fn_8005F964(void *arg0);
void fn_8005FA30(void *arg0);
void fn_8005FAEC(void *arg0);
void fn_8005FBAC(void *arg0);
void fn_8005FC6C(void *arg0);
void fn_8005FD2C(void *arg0);
void fn_8005FDF4(void *arg0);
void fn_8005FEC0(void *arg0);
void fn_8005FF8C(void *arg0);
void fn_80060058(void *arg0);

void fn_8005F118(void *arg0) {
    u8 temp_r5;
    u8 var_r4;

    temp_r5 = M2C_FIELD(arg0, u8 *, 0x2C);
    if (temp_r5 & 4) {
        var_r4 = (temp_r5 & 8) == 0;
    } else {
        var_r4 = (temp_r5 >> 3U) & 1;
    }
    if (((temp_r5 & 1) | var_r4) != 0) {
        fn_800484E4();
    }
}

void fn_8005F164(void *arg0) {
    u8 temp_r5;
    u8 var_r4;

    temp_r5 = M2C_FIELD(arg0, u8 *, 0x2C);
    if (temp_r5 & 4) {
        var_r4 = (temp_r5 & 8) == 0;
    } else {
        var_r4 = (temp_r5 >> 3U) & 1;
    }
    if (((temp_r5 & 1) | var_r4) == 0) {
        fn_800484E4();
    }
}

void fn_8005F1B0(void *arg0) {
    u8 temp_r4;
    u8 var_r0;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0x2C);
    if (temp_r4 & 4) {
        var_r0 = (temp_r4 & 8) == 0;
    } else {
        var_r0 = (temp_r4 >> 3U) & 1;
    }
    if ((s32) var_r0 == 0) {
        fn_800484E4();
    }
}

void fn_8005F1F8(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) & 4) {
        fn_800484E4();
    }
}

void fn_8005F224(void *arg0) {
    if (!(M2C_FIELD(arg0, u8 *, 0x2C) & 4)) {
        fn_800484E4();
    }
}

void fn_8005F250(void *arg0) {
    if (!(M2C_FIELD(arg0, u8 *, 0x2C) & 8)) {
        fn_800484E4();
    }
}

void fn_8005F27C(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) & 8) {
        fn_800484E4();
    }
}

void fn_8005F2A8(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2D) & 1) {
        fn_800484E4();
    }
}

void fn_8005F2D4(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2D) & 2) {
        fn_800484E4();
    }
}

void fn_8005F300(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2D) & 4) {
        fn_800484E4();
    }
}

void fn_8005F32C(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2D) & 8) {
        fn_800484E4();
    }
}

void fn_8005F358(void *arg0) {
    if (!(M2C_FIELD(arg0, u8 *, 0x2D) & 1)) {
        fn_800484E4();
    }
}

void fn_8005F384(void *arg0) {
    if (!(M2C_FIELD(arg0, u8 *, 0x2D) & 2)) {
        fn_800484E4();
    }
}

void fn_8005F3B0(void *arg0) {
    if (!(M2C_FIELD(arg0, u8 *, 0x2D) & 4)) {
        fn_800484E4();
    }
}

void fn_8005F3DC(void *arg0) {
    if (!(M2C_FIELD(arg0, u8 *, 0x2D) & 8)) {
        fn_800484E4();
    }
}

void fn_8005F408(void *arg0) {
    u8 temp_r4;
    u16 temp_r4_2;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0xE);
    if ((u32) (temp_r4 * 2) >= 0x10000U) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
    }
    temp_r4_2 = temp_r4 * 2;
    if (temp_r4_2 >= -0x8000U) {
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
    M2C_FIELD(arg0, u16 *, 0xE) = temp_r4_2;
    if ((u16) M2C_FIELD(arg0, u16 *, 0xE) == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_8005F4C4(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0xE) + M2C_FIELD(arg0, u16 *, 0x12);
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

void fn_8005F584(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0xE) + M2C_FIELD(arg0, u16 *, 0x16);
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

void fn_8005F644(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0xE) + M2C_FIELD(arg0, u16 *, 0x1A);
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

void fn_8005F704(void *arg0) {
    s32 temp_r4;
    u16 temp_r5;

    temp_r5 = M2C_FIELD((s32)arg0, u16 *, 0xE);
    temp_r4 = temp_r5 + (temp_r5 + (((u8) M2C_FIELD(arg0, u8 *, 0x2C) >> 1U) & 1));
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

void fn_8005F7CC(void *arg0) {
    s32 temp_r5;

    temp_r5 = (M2C_FIELD(arg0, u16 *, 0x12) + (((u8) M2C_FIELD(arg0, u8 *, 0x2C) >> 1U) & 1));
    temp_r5 += M2C_FIELD(arg0, u16 *, 0xE);
    if (temp_r5 >= 0x10000U) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
    }
    if (temp_r5 >= -0x8000U) {
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
    M2C_FIELD(arg0, u16 *, 0xE) = temp_r5;
    if ((u16) M2C_FIELD(arg0, u16 *, 0xE) == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_8005F898(void *arg0) {
    s32 temp_r5;

    temp_r5 = (M2C_FIELD(arg0, u16 *, 0x16) + (((u8) M2C_FIELD(arg0, u8 *, 0x2C) >> 1U) & 1));
    temp_r5 += M2C_FIELD(arg0, u16 *, 0xE);
    if (temp_r5 >= 0x10000U) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
    }
    if (temp_r5 >= -0x8000U) {
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
    M2C_FIELD(arg0, u16 *, 0xE) = temp_r5;
    if ((u16) M2C_FIELD(arg0, u16 *, 0xE) == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_8005F964(void *arg0) {
    s32 temp_r5;

    temp_r5 = (M2C_FIELD(arg0, u16 *, 0x1A) + (((u8) M2C_FIELD(arg0, u8 *, 0x2C) >> 1U) & 1));
    temp_r5 += M2C_FIELD(arg0, u16 *, 0xE);
    if (temp_r5 >= 0x10000U) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
    }
    if (temp_r5 >= -0x8000U) {
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
    M2C_FIELD(arg0, u16 *, 0xE) = temp_r5;
    if ((u16) M2C_FIELD(arg0, u16 *, 0xE) == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_8005FA30(void *arg0) {
    u16 temp_r4;
    u32 temp_r4_2;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0xE);
    temp_r4_2 = temp_r4;
    temp_r4_2 -= temp_r4;
    if (temp_r4_2 >= 0x10000U) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
    }
    if (temp_r4_2 >= -0x8000U) {
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
    M2C_FIELD(arg0, u16 *, 0xE) = temp_r4_2;
    if ((u16) M2C_FIELD(arg0, u16 *, 0xE) == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_8005FAEC(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0xE) - M2C_FIELD(arg0, u16 *, 0x12);
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

void fn_8005FBAC(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0xE) - M2C_FIELD(arg0, u16 *, 0x16);
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

void fn_8005FC6C(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0xE) - M2C_FIELD(arg0, u16 *, 0x1A);
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

void fn_8005FD2C(void *arg0) {
    u16 temp_r4;
    u16 temp_r6;

    temp_r6 = M2C_FIELD(arg0, u16 *, 0xE);
    temp_r4 = (temp_r6 - temp_r6) - (((u8) M2C_FIELD(arg0, u8 *, 0x2C) >> 1U) & 1);
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

void fn_8005FDF4(void *arg0) {
    s32 temp_r4;

    temp_r4 = (M2C_FIELD(arg0, u16 *, 0xE) - M2C_FIELD(arg0, u16 *, 0x12)) - (((u8) M2C_FIELD(arg0, u8 *, 0x2C) >> 1U) & 1);
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

void fn_8005FEC0(void *arg0) {
    s32 temp_r4;

    temp_r4 = (M2C_FIELD(arg0, u16 *, 0xE) - M2C_FIELD(arg0, u16 *, 0x16)) - (((u8) M2C_FIELD(arg0, u8 *, 0x2C) >> 1U) & 1);
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

void fn_8005FF8C(void *arg0) {
    s32 temp_r4;

    temp_r4 = (M2C_FIELD(arg0, u16 *, 0xE) - M2C_FIELD(arg0, u16 *, 0x1A)) - (((u8) M2C_FIELD(arg0, u8 *, 0x2C) >> 1U) & 1);
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

void fn_80060058(void *arg0) {
    u16 temp_r5;
    u32 temp_r4;

    temp_r5 = M2C_FIELD(arg0, u16 *, 0xE);
    temp_r4 = temp_r5;
    temp_r4 -= temp_r5;
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
