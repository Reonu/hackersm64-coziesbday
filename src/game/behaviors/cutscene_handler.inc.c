#include "src/game/area.h"
#include "src/game/level_update.h"
#include "src/game/game_init.h"
void bhv_cutscene_handler_loop(void) {
    if (o->oTimer == 1) {
        cutscene_object(CUTSCENE_PLANE_BEHIND, o);
    }
    if (((gCurrLevelNum == LEVEL_BOB) && (gMarioState->pos[1] > -80) && (gGotRektByBomb < 3)) || ((gCurrLevelNum == LEVEL_BOB) && (gMarioState->floor->type == SURFACE_HANGABLE))) {
        gMarioState->pos[2] = -193;
        gGotRekt = 0;
    }
    if (((gMarioState->pos[1] < -90) || (gGotRektByBomb >= 3)) && (gMarioState->floor->type != SURFACE_HANGABLE)) {
         gMarioState->pos[2] = gMarioState->pos[2] + 120;
         if ((gGotRektByBomb >= 3) && (!gGotRekt)) {
             play_sound(SOUND_MARIO_ON_FIRE, gMarioState->marioObj->header.gfx.cameraToObject);
             gGotRekt = 1;
         }
         else if (!gGotRekt) {
             play_sound(SOUND_MARIO_ON_FIRE, gMarioState->marioObj->header.gfx.cameraToObject);
             gGotRekt = 1;
         }
    }
}
