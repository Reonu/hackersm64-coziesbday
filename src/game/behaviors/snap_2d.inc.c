#include "src/game/game_init.h"
#include "src/game/level_update.h"

void bhv_snap_2d_loop(void) {
    if (o->oDistanceToMario < 5000) {
        if (gMarioState->floor != NULL) {
                gCustom2D = 1;
                g2DPos = o->oPosZ;
            }
    } else {
        gCustom2D = 0;
    }
}