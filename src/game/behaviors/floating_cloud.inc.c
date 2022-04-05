void bhv_floating_cloud_init(void) {
    o->oScaleCycle = random_u16();
}

void bhv_floating_cloud_loop(void) {
    if (o->oTimer < (o->oBehParams + 100)) {
        o->header.gfx.node.flags |= GRAPH_RENDER_INVISIBLE;
        o->oPosY = -2000;
    } else {
        o->header.gfx.node.flags &= ~GRAPH_RENDER_INVISIBLE;
        if (o->oTimer > (o->oBehParams + 300)) {
            o->oPosY -= 15;
        } else if (o->oPosY < 250) {
            o->oPosY += 20;
        } 
    }
    if (o->oPosY <= -1000) {
        cur_obj_become_intangible();
    } else {
        cur_obj_become_tangible();
    }
    if (o->oPosY < -2100) {
        obj_mark_for_deletion(o);
    }

    o->header.gfx.scale[0] = o->header.gfx.scale[1] = o->header.gfx.scale[2] = 1.0f + (0.1f * sins(o->oScaleCycle));
    o->oScaleCycle += DEGREES(4);
    o->oFaceAngleYaw += DEGREES(0.2);
}