/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_800465BC(u16, s32, u8);
M2C_UNK fn_800469DC(u16, s32 *);
M2C_UNK fn_8004658C(s32);
M2C_UNK fn_800469A4(s32 *);
M2C_UNK fn_80045A54(u8);
M2C_UNK fn_80045D8C(s32);

void fn_80061918(void *arg0);
void fn_800619D8(void *arg0);
void fn_80061AA4(void *arg0);
void fn_80061B70(void *arg0);
void fn_80061C24(void *arg0);
void fn_80061CD8(void *arg0);
void fn_80061DA4(void *arg0);
void fn_80061E70(void *arg0);
void fn_80061F3C(void *arg0);
void fn_80062008(void *arg0);
void fn_800620D4(void *arg0);
void fn_800621A0(void *arg0);
void fn_80062254(void *arg0);
void fn_80062274(s32 arg0);
void fn_80062298(void *arg0, s32 arg1);
void fn_800622D0(s32 arg0);
void fn_800622F4(s32 arg0);
void fn_80062318(s32 arg0);
void fn_8006233C(void *arg0);
void fn_80062368(void *arg0, s32 *arg1);
void fn_800623A8(void *arg0);
void fn_800623D4(void *arg0);
void fn_80062400(void *arg0);
void fn_8006242C(s32 arg0);
void fn_80062450(void *arg0);
void fn_8006247C(void *arg0);
void fn_800624A0(void *arg0);
void fn_800624C4(void *arg0);
void fn_800624E8(void *arg0);
void fn_8006250C(s32 arg0);
void fn_80062530(s32 arg0);
void fn_80062554(s32 arg0);

void fn_80061918(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0x1A) - M2C_FIELD(arg0, u16 *, 0x12);
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

void fn_800619D8(void *arg0) {
    u16 temp_r0;
    u16 temp_r5;
    u32 temp_r4;
    u32 var_r4;

    temp_r5 = M2C_FIELD(arg0, u16 *, 0x26);
    temp_r4 = temp_r5 - M2C_FIELD(arg0, u16 *, 0xE);
    if (temp_r4 >= 0x10000U) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
    }
    var_r4 = temp_r4;
    if (var_r4 >= -0x8000U) {
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
    if (var_r4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
    }
    M2C_FIELD(arg0, u16 *, 0x26) = var_r4;
    temp_r0 = M2C_FIELD(arg0, u16 *, 0x2E);
    if ((s32) temp_r0 <= (s32) var_r4) {
        var_r4 = temp_r0;
    }
    M2C_FIELD(arg0, u16 *, 0x2E) = var_r4;
}

void fn_80061AA4(void *arg0) {
    u16 temp_r0;
    u16 temp_r5;
    u32 temp_r4;
    u32 var_r4;

    temp_r5 = M2C_FIELD(arg0, u16 *, 0x26);
    temp_r4 = temp_r5 - M2C_FIELD(arg0, u16 *, 0x12);
    if (temp_r4 >= 0x10000U) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
    }
    var_r4 = temp_r4;
    if (var_r4 >= -0x8000U) {
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
    if (var_r4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
    }
    M2C_FIELD(arg0, u16 *, 0x26) = var_r4;
    temp_r0 = M2C_FIELD(arg0, u16 *, 0x2E);
    if ((s32) temp_r0 <= (s32) var_r4) {
        var_r4 = temp_r0;
    }
    M2C_FIELD(arg0, u16 *, 0x2E) = var_r4;
}

void fn_80061B70(void *arg0) {
    u32 temp_r5;
    u32 temp_r4;

    temp_r5 = M2C_FIELD(arg0, u16 *, 0x26);
    temp_r4 = temp_r5 - M2C_FIELD(arg0, u16 *, 0xE);
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

void fn_80061C24(void *arg0) {
    u32 temp_r5;
    u32 temp_r4;

    temp_r5 = M2C_FIELD(arg0, u16 *, 0x26);
    temp_r4 = temp_r5 - M2C_FIELD(arg0, u16 *, 0x12);
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

void fn_80061CD8(void *arg0) {
    s32 temp_r5;

    temp_r5 = (M2C_FIELD(arg0, u16 *, 0x36) + (((u8) M2C_FIELD(arg0, u8 *, 0x2C) >> 1U) & 1));
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

void fn_80061DA4(void *arg0) {
    s32 temp_r5;

    temp_r5 = (M2C_FIELD(arg0, u16 *, 0x36) + (((u8) M2C_FIELD(arg0, u8 *, 0x2C) >> 1U) & 1));
    temp_r5 += M2C_FIELD(arg0, u16 *, 0x12);
    if (temp_r5 >= 0x10000U) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
    }
    if (temp_r5 >= -0x8000U) {
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
    M2C_FIELD(arg0, u16 *, 0x12) = temp_r5;
    if ((u16) M2C_FIELD(arg0, u16 *, 0x12) == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_80061E70(void *arg0) {
    s32 temp_r4;

    temp_r4 = (M2C_FIELD(arg0, u16 *, 0xE) - M2C_FIELD(arg0, u16 *, 0x36)) - (((u8) M2C_FIELD(arg0, u8 *, 0x2C) >> 1U) & 1);
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

void fn_80061F3C(void *arg0) {
    s32 temp_r4;

    temp_r4 = (M2C_FIELD(arg0, u16 *, 0x12) - M2C_FIELD(arg0, u16 *, 0x36)) - (((u8) M2C_FIELD(arg0, u8 *, 0x2C) >> 1U) & 1);
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

void fn_80062008(void *arg0) {
    u16 temp_r0;
    u16 temp_r5;
    u32 temp_r4;
    u32 var_r4;

    temp_r5 = M2C_FIELD(arg0, u16 *, 0x26);
    temp_r4 = temp_r5 + M2C_FIELD(arg0, u16 *, 0x36);
    if (temp_r4 >= 0x10000U) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
    }
    var_r4 = temp_r4;
    if (var_r4 >= -0x8000U) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 8);
        if (temp_r5 < -0x8000U) {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 4);
        } else {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFB);
        }
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF7);
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFB);
    }
    if (var_r4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
    }
    M2C_FIELD(arg0, u16 *, 0x26) = var_r4;
    temp_r0 = M2C_FIELD(arg0, u16 *, 0x2E);
    if ((s32) temp_r0 <= (s32) var_r4) {
        var_r4 = temp_r0;
    }
    M2C_FIELD(arg0, u16 *, 0x2E) = var_r4;
}

void fn_800620D4(void *arg0) {
    u16 temp_r0;
    u16 temp_r5;
    u32 temp_r4;
    u32 var_r4;

    temp_r5 = M2C_FIELD(arg0, u16 *, 0x26);
    temp_r4 = temp_r5 - M2C_FIELD(arg0, u16 *, 0x36);
    if (temp_r4 >= 0x10000U) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
    }
    var_r4 = temp_r4;
    if (var_r4 >= -0x8000U) {
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
    if (var_r4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
    }
    M2C_FIELD(arg0, u16 *, 0x26) = var_r4;
    temp_r0 = M2C_FIELD(arg0, u16 *, 0x2E);
    if ((s32) temp_r0 <= (s32) var_r4) {
        var_r4 = temp_r0;
    }
    M2C_FIELD(arg0, u16 *, 0x2E) = var_r4;
}

void fn_800621A0(void *arg0) {
    u32 temp_r5;
    u32 temp_r4;

    temp_r5 = M2C_FIELD(arg0, u16 *, 0x26);
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

void fn_80062254(void *arg0) {
    u16 var_r0;
    u16 temp_r4;

    var_r0 = M2C_FIELD(arg0, u16 *, 0x36);
    M2C_FIELD(arg0, u16 *, 0x26) = var_r0;
    temp_r4 = M2C_FIELD(arg0, u16 *, 0x2E);
    if ((s32) temp_r4 <= (s32) var_r0) {
        var_r0 = temp_r4;
    }
    M2C_FIELD(arg0, u16 *, 0x2E) = var_r0;
}

void fn_80062274(s32 arg0) {
    /* draft: did not compile: fn_80062298(arg0 + 0xC); */
}

void fn_80062298(void *arg0, s32 arg1) {
    u8 temp_r6;

    temp_r6 = M2C_FIELD(arg0, u8 *, 0x37);
    fn_800465BC((u16) ((s8) temp_r6 + M2C_FIELD(arg0, u16 *, 0x26)), arg1, temp_r6);
}

void fn_800622D0(s32 arg0) {
    /* draft: did not compile: fn_80062298(arg0 + 0x10); */
}

void fn_800622F4(s32 arg0) {
    /* draft: did not compile: fn_80062298(arg0 + 0x14); */
}

void fn_80062318(s32 arg0) {
    /* draft: did not compile: fn_80062298(arg0 + 0x18); */
}

void fn_8006233C(void *arg0) {
    s32 sp8;

    sp8 = M2C_FIELD(arg0, s32 *, 0xC);
    fn_80062368((void *)(&sp8), (long *)(0));
}

void fn_80062368(void *arg0, s32 *arg1) {
    s32 sp8;

    sp8 = *arg1;
    fn_800469DC((u16) ((s8) M2C_FIELD(arg0, u8 *, 0x37) + M2C_FIELD(arg0, u16 *, 0x26)), &sp8);
}

void fn_800623A8(void *arg0) {
    s32 sp8;

    sp8 = M2C_FIELD(arg0, s32 *, 0x10);
    fn_80062368((void *)(&sp8), (long *)(0));
}

void fn_800623D4(void *arg0) {
    s32 sp8;

    sp8 = M2C_FIELD(arg0, s32 *, 0x14);
    fn_80062368((void *)(&sp8), (long *)(0));
}

void fn_80062400(void *arg0) {
    s32 sp8;

    sp8 = M2C_FIELD(arg0, s32 *, 0x18);
    fn_80062368((void *)(&sp8), (long *)(0));
}

void fn_8006242C(s32 arg0) {
    fn_8004658C(arg0 + 0x24);
}

void fn_80062450(void *arg0) {
    s32 sp8;

    sp8 = M2C_FIELD(arg0, s32 *, 0x24);
    fn_800469A4(&sp8);
}

void fn_8006247C(void *arg0) {
    fn_80045A54(M2C_FIELD(arg0, u8 *, 0xF));
}

void fn_800624A0(void *arg0) {
    fn_80045A54(M2C_FIELD(arg0, u8 *, 0xE));
}

void fn_800624C4(void *arg0) {
    fn_80045A54(M2C_FIELD(arg0, u8 *, 0x13));
}

void fn_800624E8(void *arg0) {
    fn_80045A54(M2C_FIELD(arg0, u8 *, 0x12));
}

void fn_8006250C(s32 arg0) {
    fn_80045D8C(arg0 + 0xF);
}

void fn_80062530(s32 arg0) {
    fn_80045D8C(arg0 + 0xE);
}

void fn_80062554(s32 arg0) {
    fn_80045D8C(arg0 + 0x13);
}
