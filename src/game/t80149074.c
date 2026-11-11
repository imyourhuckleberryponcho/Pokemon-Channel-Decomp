/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

extern s32 lbl_80350368;

void fn_80149074(s32 arg0);

void fn_80149074(s32 arg0) {
    lbl_80350368 = arg0;
    if ((arg0 < 1) || (arg0 > 0xA)) {
        lbl_80350368 = 3;
    }
}
