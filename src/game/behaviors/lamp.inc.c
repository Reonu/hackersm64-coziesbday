#include "point_lights.h"
void bhv_lamp_loop(void) {
    Vec3f pos = {o->oPosX, o->oPosY, o->oPosZ};
    u8 bparam1 = (o->oBehParams >> 24) & 0xFF;
    u8 bparam2 = (o->oBehParams >> 16) & 0xFF;
    u8 bparam3 = (o->oBehParams >> 8) & 0xFF;
    u8 bparam4 = (o->oBehParams) & 0xFF;

    u8 r = bparam1;
    u8 g = bparam2;
    u8 falloff = bparam3;
    u8 b = bparam4;

    emit_light(pos, r, g, b, 4, 50, 8);
}