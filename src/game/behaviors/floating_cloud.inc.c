void bhv_floating_cloud_loop(void) {
    if (o->oTimer < o->oBehParams) {
        o->header.gfx.node.flags |= GRAPH_RENDER_INVISIBLE;
        o->oPosY = -1000;
    } else {
        o->header.gfx.node.flags &= ~GRAPH_RENDER_INVISIBLE;
        if (o->oTimer > (o->oBehParams + 200)) {
            o->oPosY -= 10;
        } else if (o->oPosY < 250) {
            o->oPosY += 10;
        } 
    }
    if (o->oPosY <= -1000) {
        cur_obj_become_intangible();
    } else {
        cur_obj_become_tangible();
    }
    if (o->oPosY < -1100) {
        obj_mark_for_deletion(o);
    }
}