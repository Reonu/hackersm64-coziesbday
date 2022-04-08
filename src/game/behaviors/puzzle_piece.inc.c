#include "src/game/game_init.h"

void bhv_puzzle_piece_loop(void) {
    switch (BPARAM2) {
        case 0x00:
            if (gYellowPuzzlePiece) {
                o->header.gfx.node.flags &= ~GRAPH_RENDER_INVISIBLE;
            } else {
                o->header.gfx.node.flags |= GRAPH_RENDER_INVISIBLE;
            }
            break;
        case 0x01:
            if (gGreenPuzzlePiece) {
                o->header.gfx.node.flags &= ~GRAPH_RENDER_INVISIBLE;
            } else {
                o->header.gfx.node.flags |= GRAPH_RENDER_INVISIBLE;
            }
            break;      
        case 0x02:
            if (gRedPuzzlePiece) {
                o->header.gfx.node.flags &= ~GRAPH_RENDER_INVISIBLE;
            } else {
                o->header.gfx.node.flags |= GRAPH_RENDER_INVISIBLE;
            }
            break;   
        case 0x03:
            if (gBluePuzzlePiece) {
                o->header.gfx.node.flags &= ~GRAPH_RENDER_INVISIBLE;
            } else {
                o->header.gfx.node.flags |= GRAPH_RENDER_INVISIBLE;
            }
            break;         
    }
}