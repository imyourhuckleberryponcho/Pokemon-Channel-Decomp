/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_800441A0(void *);
M2C_UNK fn_800708D4(M2C_UNK);
M2C_UNK fn_8003D3B0(void *, u8, u8);
M2C_UNK fn_80043DCC(u8);
M2C_UNK fn_80045A0C();
M2C_UNK fn_80045A54(u8);

void fn_80047924(void *arg0);
void fn_800479D8(void *arg0, M2C_UNK arg_sp0);
void fn_80047C04(void *arg0, M2C_UNK arg_sp0);
void fn_80047E30(void *arg0, M2C_UNK arg_sp0);
void fn_8004805C(void *arg0, M2C_UNK arg_sp0);
void fn_80048238(void *arg0, M2C_UNK arg_sp0);
void fn_8004845C(void *arg0);
void fn_80048480(void *arg0);
void fn_8004849C(void *arg0);
void fn_800484B8(void *arg0);
void fn_800484E4(void *arg0);
void fn_80048510(void *arg0, s32 arg1);
void fn_80048554(void *arg0, s16 arg1);
void fn_80048598(void *arg0);
void fn_800485D4(void *arg0);
void fn_80048600(void *arg0);
void fn_8004862C(void *arg0);
void fn_80048658(void *arg0);
void fn_80048688(void *arg0);
void fn_800486B8(void *arg0);
void fn_800486E8(void *arg0);
void fn_80048718(void *arg0);
void fn_80048744(void *arg0);
void fn_8004876C(void *arg0);
void fn_80048798(void *arg0);
void fn_800487C4(void *arg0);
void fn_800487F0(void *arg0);
void fn_8004881C(void *arg0);
void fn_80048848(void *arg0);
void fn_80048874(void *arg0);
void fn_800488A0(void);
void fn_800488C0(void *arg0);

void fn_80047924(void *arg0) {
    u32 temp_r5;
    u32 temp_r4;

    temp_r5 = M2C_FIELD(arg0, u16 *, 0x1A);
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

void fn_800479D8(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80047C04(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80047E30(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8004805C(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80048238(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8004845C(void *arg0) {
    fn_80043DCC(M2C_FIELD(arg0, u8 *, 0x36));
}

void fn_80048480(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0xF) = (u8) ((M2C_FIELD(arg0, u8 *, 0xF) & 0xF) + (M2C_FIELD(arg0, u8 *, 0xE) * 0x10));
}

void fn_8004849C(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xE) = (s8) ((s32) M2C_FIELD(arg0, u8 *, 0xF) >> 4);
    M2C_FIELD(arg0, u8 *, 0xF) = (u8) (M2C_FIELD(arg0, u8 *, 0xF) & 0xF);
}

void fn_800484B8(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) & 2) {
        fn_800484E4((void *)(0));
    }
}

void fn_800484E4(void *arg0) {
    /* draft: did not compile: fn_80048510((s8) M2C_FIELD(arg0, u8 *, 0x37) - 1); */
}

void fn_80048510(void *arg0, s32 arg1) {
    /* draft: did not compile: fn_80048554((u16) (arg1 + M2C_FIELD(arg0, u16 *, 0x1E))); */
    M2C_FIELD(arg0, u8 *, 0x40) = (u8) (M2C_FIELD(arg0, u8 *, 0x40) + 3);
}

void fn_80048554(void *arg0, s16 arg1) {
    fn_80048598((void *)(0));
    M2C_FIELD(arg0, u8 *, 0x21) = (u8) M2C_FIELD(arg0, u8 *, 0x1C);
    M2C_FIELD(arg0, s16 *, 0x1E) = arg1;
}

void fn_80048598(void *arg0) {
    fn_80045A54(M2C_FIELD(arg0, u8 *, 0x21));
    /* draft: did not compile: fn_80045A0C(arg0, arg0 + 0x1C); */
}

void fn_800485D4(void *arg0) {
    if (!(M2C_FIELD(arg0, u8 *, 0x2C) & 2)) {
        fn_800484E4((void *)(0));
    }
}

void fn_80048600(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) & 1) {
        fn_800484E4((void *)(0));
    }
}

void fn_8004862C(void *arg0) {
    if (!(M2C_FIELD(arg0, u8 *, 0x2C) & 1)) {
        fn_800484E4((void *)(0));
    }
}

void fn_80048658(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) & 2) {
        M2C_FIELD(arg0, u8 *, 0x21) = (u8) M2C_FIELD(arg0, u8 *, 0x1C);
        M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (((s8) M2C_FIELD(arg0, u8 *, 0x37) + M2C_FIELD(arg0, u16 *, 0x1E)) - 1);
    }
}

void fn_80048688(void *arg0) {
    if (!(M2C_FIELD(arg0, u8 *, 0x2C) & 2)) {
        M2C_FIELD(arg0, u8 *, 0x21) = (u8) M2C_FIELD(arg0, u8 *, 0x1C);
        M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (((s8) M2C_FIELD(arg0, u8 *, 0x37) + M2C_FIELD(arg0, u16 *, 0x1E)) - 1);
    }
}

void fn_800486B8(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) & 1) {
        M2C_FIELD(arg0, u8 *, 0x21) = (u8) M2C_FIELD(arg0, u8 *, 0x1C);
        M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (((s8) M2C_FIELD(arg0, u8 *, 0x37) + M2C_FIELD(arg0, u16 *, 0x1E)) - 1);
    }
}

void fn_800486E8(void *arg0) {
    if (!(M2C_FIELD(arg0, u8 *, 0x2C) & 1)) {
        M2C_FIELD(arg0, u8 *, 0x21) = (u8) M2C_FIELD(arg0, u8 *, 0x1C);
        M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (((s8) M2C_FIELD(arg0, u8 *, 0x37) + M2C_FIELD(arg0, u16 *, 0x1E)) - 1);
    }
}

void fn_80048718(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) & 2) {
        fn_80048744((void *)(0));
    }
}

void fn_80048744(void *arg0) {
    /* draft: did not compile: fn_80048510(M2C_FIELD(arg0, s16 *, 0x36) - 1); */
}

void fn_8004876C(void *arg0) {
    if (!(M2C_FIELD(arg0, u8 *, 0x2C) & 2)) {
        fn_80048744((void *)(0));
    }
}

void fn_80048798(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) & 1) {
        fn_80048744((void *)(0));
    }
}

void fn_800487C4(void *arg0) {
    if (!(M2C_FIELD(arg0, u8 *, 0x2C) & 1)) {
        fn_80048744((void *)(0));
    }
}

void fn_800487F0(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) & 2) {
        M2C_FIELD(arg0, u8 *, 0x21) = (u8) M2C_FIELD(arg0, u8 *, 0x1C);
        M2C_FIELD(arg0, u16 *, 0x1E) = (u16) ((M2C_FIELD(arg0, s16 *, 0x36) + M2C_FIELD(arg0, u16 *, 0x1E)) - 1);
    }
}

void fn_8004881C(void *arg0) {
    if (!(M2C_FIELD(arg0, u8 *, 0x2C) & 2)) {
        M2C_FIELD(arg0, u8 *, 0x21) = (u8) M2C_FIELD(arg0, u8 *, 0x1C);
        M2C_FIELD(arg0, u16 *, 0x1E) = (u16) ((M2C_FIELD(arg0, s16 *, 0x36) + M2C_FIELD(arg0, u16 *, 0x1E)) - 1);
    }
}

void fn_80048848(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) & 1) {
        M2C_FIELD(arg0, u8 *, 0x21) = (u8) M2C_FIELD(arg0, u8 *, 0x1C);
        M2C_FIELD(arg0, u16 *, 0x1E) = (u16) ((M2C_FIELD(arg0, s16 *, 0x36) + M2C_FIELD(arg0, u16 *, 0x1E)) - 1);
    }
}

void fn_80048874(void *arg0) {
    if (!(M2C_FIELD(arg0, u8 *, 0x2C) & 1)) {
        M2C_FIELD(arg0, u8 *, 0x21) = (u8) M2C_FIELD(arg0, u8 *, 0x1C);
        M2C_FIELD(arg0, u16 *, 0x1E) = (u16) ((M2C_FIELD(arg0, s16 *, 0x36) + M2C_FIELD(arg0, u16 *, 0x1E)) - 1);
    }
}

void fn_800488A0(void) {
    fn_800484E4((void *)(0));
}

void fn_800488C0(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x21) = (u8) M2C_FIELD(arg0, u8 *, 0x1C);
    M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (((s8) M2C_FIELD(arg0, u8 *, 0x37) + M2C_FIELD(arg0, u16 *, 0x1E)) - 1);
}
