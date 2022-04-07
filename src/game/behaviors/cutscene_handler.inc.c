#include "src/game/area.h"
#include "src/game/level_update.h"
#include "src/game/game_init.h"
void bhv_cutscene_handler_loop(void) {
    if (o->oTimer == 1) {
        cutscene_object(CUTSCENE_PLANE_BEHIND, o);
    }
    if (((gCurrLevelNum == LEVEL_BOB) && (gMarioState->pos[1] > -80) && (!gGotRektByBomb)) || ((gCurrLevelNum == LEVEL_BOB) && (gMarioState->floor->type == SURFACE_HANGABLE))) {
        gMarioState->pos[2] = -193;
        gGotRekt = 0;
    }
    if (((gMarioState->pos[1] < -150) || (gGotRektByBomb)) && (gMarioState->floor->type != SURFACE_HANGABLE)) {
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
    o->oPosY = o->oHomeY + (200 * sins(o->oScaleCycle));
    o->oScaleCycle += DEGREES(1);
}

void bhv_island_loop(void) {
    if (o->oTimer < 1500) {
        o->header.gfx.node.flags |= GRAPH_RENDER_INVISIBLE;
    } else {
        o->header.gfx.node.flags &= ~GRAPH_RENDER_INVISIBLE;
        o->header.gfx.scale[0] = o->header.gfx.scale[0] + 0.01f;
        o->header.gfx.scale[1] = o->header.gfx.scale[1] + 0.01f;
        o->header.gfx.scale[2] = o->header.gfx.scale[2] + 0.01f;
    }

}