#include "src/game/game_init.h"
void bhv_blue_mushroom_init(void) {
    o->oFriction = 40.0f;
    o->oEnvRGB = (random_u16() << 16) | random_u16();
    o->oPrimRGB = (random_u16() << 16) | random_u16();
}

void bhv_blue_mushroom_loop(void) {
    u8 r = (o->oPrimRGB >> 16) & 0xff;
    u8 g = (o->oPrimRGB >> 8) & 0xff;
    u8 b = o->oPrimRGB & 0xff;
    Vec3f pos = {o->oPosX, o->oPosY + 250, o->oPosZ};
    if (o->oAction == 1) {
        if (o->oTimer == 1){
                gMarioState->action = ACT_DOUBLE_JUMP;
            }
        }
        if (o->oTimer < 4) {
            o->header.gfx.scale[1] -= 0.125f;
        }
        else if (o->oTimer < 8) {
            o->header.gfx.scale[1] += 0.125f;
        }
        else {
            o->header.gfx.scale[1] = 1;
            o->oAction = 0;
        }
    emit_light(pos, r, g, b, 4, 50, 8);
    }