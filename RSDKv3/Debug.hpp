#ifndef DEBUG_H
#define DEBUG_H

#if RETRO_PLATFORM == RETRO_ANDROID
#include <android/log.h>
#endif

enum DevMenuMenus {
    DEVMENU_MAIN,
    DEVMENU_PLAYERSEL,
    DEVMENU_STAGELISTSEL,
    DEVMENU_STAGESEL,
    DEVMENU_SCRIPTERROR,
#if RETRO_USE_MOD_LOADER
    DEVMENU_MODMENU,
#endif
};

void InitDevMenu();
void InitErrorMessage();
void ProcessStageSelect();

#endif //! DEBUG_H
