/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_80005888(void *);
M2C_UNK fn_8008065C();
void *fn_80080738();
M2C_UNK OSFreeToHeap(s32);
extern s32 lbl_8034FE78;
s32 method_probeMCard();
s32 method_mountMCard();
s32 method_mountMCardAsync();
s32 method_checkMCard();
s32 method_checkMCardAsync();
s32 method_formatMCard();
s32 method_formatMCardAsync();
s32 method_unmountMCard();
M2C_UNK method_setRegion();
s32 method_getTotalBlock();
s32 method_openFile(s32);
s32 fn_80080790();
s32 method_openFileAsync(s32);
s32 method_createFile(s32);
s32 method_createFileAsync(s32);
s32 method_writeHeader();
s32 method_writeHeaderAsync();
M2C_UNK DCFlushRange(s32, s32);
s32 fn_80037E3C(s32, s32, s32, s32);
M2C_UNK fn_8008085C(M2C_UNK, s32);
M2C_UNK fn_80081324();
s32 fn_80037E74(s32, s32, s32, s32);
M2C_UNK DCInvalidateRange(s32, u32);
s32 fn_80037ED0(s32, s32, s32, u32);
s32 fn_800807CC(M2C_UNK);
s32 fn_80037F08(s32, s32, s32, s32);
M2C_UNK SetCheckSum();
u8 VerifyCheckSum();
s32 method_deleteFile(s32);
s32 method_deleteFileAsync(s32);
s32 method_renameFile(s32, s32);
s32 method_renameFileAsync(s32, s32);
s32 fn_800378E4();
s32 method_getSectorSize();

s32 scr_method_destroyMCard(s32 arg0);
s32 scr_method_probeMCard(s32 arg0);
s32 scr_method_mountMCard(s32 arg0);
s32 scr_method_mountMCardAsync(s32 arg0);
s32 scr_method_checkMCard(s32 arg0);
s32 scr_method_checkMCardAsync(s32 arg0);
s32 scr_method_formatMCard(s32 arg0);
s32 scr_method_formatMCardAsync(s32 arg0);
s32 scr_method_unmountMCard(s32 arg0);
s32 scr_method_setRegion(s32 arg0);
s32 scr_method_getTotalBlock(s32 arg0);
s32 scr_method_openFile(s32 arg0);
s32 scr_method_openFileAsync(s32 arg0);
s32 scr_method_createFile(s32 arg0);
s32 scr_method_createFileAsync(s32 arg0);
s32 scr_method_writeHeader(s32 arg0);
s32 scr_method_writeHeaderAsync(s32 arg0);
s32 scr_method_savePortables(s32 arg0);
s32 scr_method_savePortablesAsync(s32 arg0);
s32 scr_method_loadPortables(s32 arg0);
s32 scr_method_loadPortablesAsync(s32 arg0);
s32 scr_method_loadPortablesAsync2(s32 arg0);
s32 scr_GetPortableSize(s32 arg0);
s32 scr_SetCheckSum(s32 arg0);
s32 scr_VerifyCheckSum(s32 arg0);
s32 scr_method_deleteFile(s32 arg0);
s32 scr_method_deleteFileAsync(s32 arg0);
s32 scr_method_renameFile(s32 arg0);
s32 scr_method_renameFileAsync(s32 arg0);
s32 scr_method_getFreeBytes(s32 arg0);
s32 scr_method_getFreeFiles(s32 arg0);
s32 scr_method_getSectorSize(s32 arg0);

s32 scr_method_destroyMCard(s32 arg0) {
    void *temp_r3;

    temp_r3 = fn_80080738();
    if (temp_r3 != NULL) {
        if ((u32) M2C_FIELD(temp_r3, u32 *, 0x10) != 0U) {
            OSFreeToHeap(lbl_8034FE78);
        }
        if ((u32) M2C_FIELD(temp_r3, u32 *, 0x4B0) != 0U) {
            OSFreeToHeap(lbl_8034FE78);
        }
        fn_80005888(temp_r3);
    }
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_probeMCard(s32 arg0) {
    fn_80080738();
    fn_8008065C(arg0, method_probeMCard());
    return 0;
}

s32 scr_method_mountMCard(s32 arg0) {
    fn_80080738();
    fn_8008065C(arg0, method_mountMCard());
    return 0;
}

s32 scr_method_mountMCardAsync(s32 arg0) {
    fn_80080738();
    fn_8008065C(arg0, method_mountMCardAsync());
    return 0;
}

s32 scr_method_checkMCard(s32 arg0) {
    fn_80080738();
    fn_8008065C(arg0, method_checkMCard());
    return 0;
}

s32 scr_method_checkMCardAsync(s32 arg0) {
    fn_80080738();
    fn_8008065C(arg0, method_checkMCardAsync());
    return 0;
}

s32 scr_method_formatMCard(s32 arg0) {
    fn_80080738();
    fn_8008065C(arg0, method_formatMCard());
    return 0;
}

s32 scr_method_formatMCardAsync(s32 arg0) {
    fn_80080738();
    fn_8008065C(arg0, method_formatMCardAsync());
    return 0;
}

s32 scr_method_unmountMCard(s32 arg0) {
    fn_80080738();
    fn_8008065C(arg0, method_unmountMCard());
    return 0;
}

s32 scr_method_setRegion(s32 arg0) {
    s32 temp_r29;
    s32 temp_r30;
    s32 temp_r31;

    /* draft: did not compile: temp_r31 = fn_80080738(); */
    void * dc_fn_80080738 = fn_80080738(arg0);
    /* draft: did not compile: temp_r30 = dc_fn_80080738; */
    /* draft: did not compile: temp_r29 = dc_fn_80080738; */
    /* draft: did not compile: method_setRegion(dc_fn_80080738 + 0x14, temp_r29, temp_r30, temp_r31, 0); */
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_getTotalBlock(s32 arg0) {
    /* draft: did not compile: fn_8008065C(arg0, method_getTotalBlock(fn_80080738() + 0x14)); */
    return 0;
}

s32 scr_method_openFile(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_80080790();
    fn_80080738(arg0);
    fn_8008065C(arg0, method_openFile(temp_r31));
    return 0;
}

s32 scr_method_openFileAsync(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_80080790();
    fn_80080738(arg0);
    fn_8008065C(arg0, method_openFileAsync(temp_r31));
    return 0;
}

s32 scr_method_createFile(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_80080790();
    fn_80080738(arg0);
    fn_8008065C(arg0, method_createFile(temp_r31));
    return 0;
}

s32 scr_method_createFileAsync(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_80080790();
    fn_80080738(arg0);
    fn_8008065C(arg0, method_createFileAsync(temp_r31));
    return 0;
}

s32 scr_method_writeHeader(s32 arg0) {
    fn_80080738();
    fn_8008065C(arg0, method_writeHeader());
    return 0;
}

s32 scr_method_writeHeaderAsync(s32 arg0) {
    fn_80080738();
    fn_8008065C(arg0, method_writeHeaderAsync());
    return 0;
}

#pragma push
#pragma peephole off
s32 scr_method_savePortables(s32 arg0) {
    u32 spC;
    s32 sp8;
    s32 temp_r30;
    s32 temp_r31;

    /* draft: did not compile: temp_r31 = fn_80080738(); */
    /* draft: did not compile: temp_r30 = fn_80080738(arg0); */
    fn_80081324(&sp8, &spC);
    fn_8008085C(1, 0x20);
    fn_8008085C(3, spC / 5);
    DCFlushRange(sp8, spC);
    fn_8008065C(arg0, fn_80037E3C(temp_r30, temp_r31, sp8, spC));
    return 0;
}
#pragma pop

s32 scr_method_savePortablesAsync(s32 arg0) {
    u32 spC;
    s32 sp8;
    s32 temp_r30;
    s32 temp_r31;

    /* draft: did not compile: temp_r31 = fn_80080738(); */
    /* draft: did not compile: temp_r30 = fn_80080738(arg0); */
    fn_80081324(&sp8, &spC);
    fn_8008085C(1, 0x20);
    fn_8008085C(3, spC / 5);
    DCFlushRange(sp8, spC);
    fn_8008065C(arg0, fn_80037E74(temp_r30, temp_r31, sp8, spC));
    return 0;
}

s32 scr_method_loadPortables(s32 arg0) {
    u32 spC;
    s32 sp8;
    s32 temp_r30;
    s32 temp_r31;
    s32 temp_r3;
    s32 temp_r3_2;
    u32 temp_r3_3;

    /* draft: did not compile: temp_r31 = fn_80080738(); */
    /* draft: did not compile: temp_r30 = fn_80080738(arg0); */
    fn_80081324(&sp8, &spC);
    DCInvalidateRange(sp8, spC);
    temp_r3 = fn_80037ED0(temp_r30, temp_r31, sp8, spC);
    switch (temp_r3) {
    case 0:
            temp_r3_2 = fn_800807CC(3);
            if (temp_r3_2 > 0) {
                temp_r3_3 = temp_r3_2 * 5;
                if (temp_r3_3 < spC) {
                    /* draft: did not compile: memset(sp8 + temp_r3_3, 0, spC - temp_r3_3); */
                }
            }
            fn_8008085C(3, spC / 5);
        break;
    }
    fn_8008065C(arg0, temp_r3);
    return 0;
}

s32 scr_method_loadPortablesAsync(s32 arg0) {
    s32 spC;
    s32 sp8;
    s32 temp_r30;
    s32 temp_r31;

    /* draft: did not compile: temp_r31 = fn_80080738(); */
    /* draft: did not compile: temp_r30 = fn_80080738(arg0); */
    fn_80081324(&sp8, &spC);
    DCInvalidateRange(sp8, spC);
    fn_8008065C(arg0, fn_80037F08(temp_r30, temp_r31, sp8, spC));
    return 0;
}

s32 scr_method_loadPortablesAsync2(s32 arg0) {
    u32 spC;
    s32 sp8;
    s32 temp_r3;
    u32 temp_r3_2;

    fn_80080738();
    fn_80081324(&sp8, &spC);
    temp_r3 = fn_800807CC(3);
    if (temp_r3 > 0) {
        temp_r3_2 = temp_r3 * 5;
        if (temp_r3_2 < spC) {
            /* draft: did not compile: memset(sp8 + temp_r3_2, 0, spC - temp_r3_2); */
        }
    }
    fn_8008085C(3, spC / 5);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_GetPortableSize(s32 arg0) {
    s32 sp8;

    fn_80081324(0, &sp8);
    fn_8008065C(arg0, sp8);
    return 0;
}

s32 scr_SetCheckSum(s32 arg0) {
    SetCheckSum();
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_VerifyCheckSum(s32 arg0) {
    fn_8008065C(arg0, VerifyCheckSum());
    return 0;
}

s32 scr_method_deleteFile(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_80080790();
    fn_80080738(arg0);
    fn_8008065C(arg0, method_deleteFile(temp_r31));
    return 0;
}

s32 scr_method_deleteFileAsync(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_80080790();
    fn_80080738(arg0);
    fn_8008065C(arg0, method_deleteFileAsync(temp_r31));
    return 0;
}

s32 scr_method_renameFile(s32 arg0) {
    s32 temp_r31;
    s32 temp_r30;

    temp_r31 = fn_80080790();
    temp_r30 = fn_80080790(arg0);
    fn_80080738(arg0);
    fn_8008065C(arg0, method_renameFile(temp_r30, temp_r31));
    return 0;
}

s32 scr_method_renameFileAsync(s32 arg0) {
    s32 temp_r31;
    s32 temp_r30;

    temp_r31 = fn_80080790();
    temp_r30 = fn_80080790(arg0);
    fn_80080738(arg0);
    fn_8008065C(arg0, method_renameFileAsync(temp_r30, temp_r31));
    return 0;
}

s32 scr_method_getFreeBytes(s32 arg0) {
    s32 sp8;
    s32 temp_r3;

    fn_80080738();
    temp_r3 = fn_800378E4(&sp8, 0);
    if (temp_r3 == 0) {
        fn_8008065C(arg0, sp8);
    } else {
        fn_8008065C(arg0, temp_r3);
    }
    return 0;
}

s32 scr_method_getFreeFiles(s32 arg0) {
    s32 sp8;
    s32 temp_r3;

    fn_80080738();
    temp_r3 = fn_800378E4(0, &sp8);
    if (temp_r3 == 0) {
        fn_8008065C(arg0, sp8);
    } else {
        fn_8008065C(arg0, temp_r3);
    }
    return 0;
}

s32 scr_method_getSectorSize(s32 arg0) {
    fn_80080738();
    fn_8008065C(arg0, method_getSectorSize());
    return 0;
}
