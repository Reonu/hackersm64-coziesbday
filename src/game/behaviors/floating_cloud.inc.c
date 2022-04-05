void bhv_floating_cloud_init(void) {
    o->oScaleCycle = random_u16();
}

void bhv_floating_cloud_loop(void) {
    if (o->oTimer < o->oBehParams) {
        o->header.gfx.node.flags |= GRAPH_RENDER_INVISIBLE;
        o->oPosY = -2000;
    } else {
        o->header.gfx.node.flags &= ~GRAPH_RENDER_INVISIBLE;
        if (o->oTimer > (o->oBehParams + 200)) {
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

    o->header.gfx.scale[0] = o->header.gfx.scale[1] = o->header.gfx.scale[2] = 10.1f + (10.0f * sins(o->oScaleCycle));
    o->oScaleCycle += DEGREES(60);
    print_text_fmt_int(20, 20, "%d", o->oScaleCycle);
    print_text_fmt_int(20, 40, "%d", roundf(100.0f*sins(o->oScaleCycle)));
}