#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/bob/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _generic_yay0SegmentRomStart, _generic_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _clouds_skybox_yay0SegmentRomStart, _clouds_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group3_yay0SegmentRomStart, _group3_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group3_geoSegmentRomStart, _group3_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_4), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM, bob_geo_000458), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS, bob_geo_000470), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bob_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BOWSER_BOMB, 0, 275, -5832, 0, 0, 0, 0x10, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 0, 275, -5832, 0, 0, 0, 0x50, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 0, 875, -5832, 0, 0, 0, 0x50, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -300, 575, -5832, 0, 0, 0, 0x50, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 300, 575, -5832, 0, 0, 0, 0x50, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 600, 275, -5832, 0, 0, 0, 0x50, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -900, 275, -5832, 0, 0, 0, 0x50, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -600, 275, -5832, 0, 0, 0, 0x50, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -900, -25, -5832, 0, 0, 0, 0x50, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -600, -25, -5832, 0, 0, 0, 0x50, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 600, -25, -5832, 0, 0, 0, 0x50, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 900, 275, -5832, 0, 0, 0, 0x50, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 900, -25, -5832, 0, 0, 0, 0x50, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 0, 275, -5832, 0, 0, 0, 0x100, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 0, 875, -5832, 0, 0, 0, 0x100, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -300, 575, -5832, 0, 0, 0, 0x100, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 300, 575, -5832, 0, 0, 0, 0x100, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -600, 275, -5832, 0, 0, 0, 0x100, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -600, -25, -5832, 0, 0, 0, 0x100, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 600, -25, -5832, 0, 0, 0, 0x100, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 600, 275, -5832, 0, 0, 0, 0x100, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -900, 275, -5832, 0, 0, 0, 0x100, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -900, -25, -5832, 0, 0, 0, 0x100, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 900, 275, -5832, 0, 0, 0, 0x100, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 900, -25, -5832, 0, 0, 0, 0x100, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -300, 275, -5832, 0, 0, 0, 0x100, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 300, 275, -5832, 0, 0, 0, 0x100, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 0, 275, -5832, 0, 0, 0, 0x150, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -300, 575, -5832, 0, 0, 0, 0x150, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 300, 575, -5832, 0, 0, 0, 0x150, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -600, 275, -5832, 0, 0, 0, 0x150, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -600, -25, -5832, 0, 0, 0, 0x150, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 600, -25, -5832, 0, 0, 0, 0x150, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 600, 275, -5832, 0, 0, 0, 0x150, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -900, 275, -5832, 0, 0, 0, 0x150, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -900, -25, -5832, 0, 0, 0, 0x150, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 900, 275, -5832, 0, 0, 0, 0x150, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 900, -25, -5832, 0, 0, 0, 0x150, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -300, 275, -5832, 0, 0, 0, 0x150, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 300, 275, -5832, 0, 0, 0, 0x150, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 0, 575, -5832, 0, 0, 0, 0x150, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 0, 275, -5832, 0, 0, 0, 0x230, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -300, 575, -5832, 0, 0, 0, 0x220, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 300, 575, -5832, 0, 0, 0, 0x240, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -600, 275, -5832, 0, 0, 0, 0x210, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -600, -25, -5832, 0, 0, 0, 0x210, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 600, -25, -5832, 0, 0, 0, 0x240, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 600, 275, -5832, 0, 0, 0, 0x240, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -900, 275, -5832, 0, 0, 0, 0x200, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -900, -25, -5832, 0, 0, 0, 0x200, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 900, 275, -5832, 0, 0, 0, 0x240, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 900, -25, -5832, 0, 0, 0, 0x240, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -300, 275, -5832, 0, 0, 0, 0x220, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 300, 275, -5832, 0, 0, 0, 0x240, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 0, 575, -5832, 0, 0, 0, 0x230, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 0, 875, -5832, 0, 0, 0, 0x230, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 600, 575, -5832, 0, 0, 0, 0x240, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -600, 575, -5832, 0, 0, 0, 0x210, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -900, 575, -5832, 0, 0, 0, 0x200, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 300, -25, -5832, 0, 0, 0, 0x240, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -300, -25, -5832, 0, 0, 0, 0x220, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 900, 575, -5832, 0, 0, 0, 0x240, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 0, 275, -5832, 0, 0, 0, 0x300, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -300, 575, -5832, 0, 0, 0, 0x300, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 300, 575, -5832, 0, 0, 0, 0x300, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -600, 275, -5832, 0, 0, 0, 0x300, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -600, -25, -5832, 0, 0, 0, 0x300, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 600, -25, -5832, 0, 0, 0, 0x300, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 600, 275, -5832, 0, 0, 0, 0x300, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -900, 275, -5832, 0, 0, 0, 0x300, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -900, -25, -5832, 0, 0, 0, 0x300, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 900, 275, -5832, 0, 0, 0, 0x300, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 900, -25, -5832, 0, 0, 0, 0x300, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -300, 275, -5832, 0, 0, 0, 0x300, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 300, 275, -5832, 0, 0, 0, 0x300, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 0, 575, -5832, 0, 0, 0, 0x300, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 600, 575, -5832, 0, 0, 0, 0x300, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 900, 575, -5832, 0, 0, 0, 0x300, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -600, 575, -5832, 0, 0, 0, 0x300, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -900, 575, -5832, 0, 0, 0, 0x300, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -300, -25, -5832, 0, 0, 0, 0x300, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 300, -25, -5832, 0, 0, 0, 0x300, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 0, 275, -5832, 0, 0, 0, 0x400, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -300, 575, -5832, 0, 0, 0, 0x400, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 300, 575, -5832, 0, 0, 0, 0x400, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -600, 275, -5832, 0, 0, 0, 0x400, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -600, -25, -5832, 0, 0, 0, 0x400, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 600, -25, -5832, 0, 0, 0, 0x400, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 600, 275, -5832, 0, 0, 0, 0x400, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -900, -25, -5832, 0, 0, 0, 0x400, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 900, -25, -5832, 0, 0, 0, 0x400, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -300, 275, -5832, 0, 0, 0, 0x400, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 300, 275, -5832, 0, 0, 0, 0x400, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 0, 575, -5832, 0, 0, 0, 0x400, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 600, 575, -5832, 0, 0, 0, 0x400, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 900, 575, -5832, 0, 0, 0, 0x400, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -600, 575, -5832, 0, 0, 0, 0x400, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -900, 575, -5832, 0, 0, 0, 0x400, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -300, -25, -5832, 0, 0, 0, 0x400, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 300, -25, -5832, 0, 0, 0, 0x400, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -900, 275, -5832, 0, 0, 0, 0x500, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 900, 275, -5832, 0, 0, 0, 0x500, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -300, 875, -5832, 0, 0, 0, 0x500, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 300, 875, -5832, 0, 0, 0, 0x500, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 0, 875, -5832, 0, 0, 0, 0x500, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 600, 875, -5832, 0, 0, 0, 0x500, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 900, 875, -5832, 0, 0, 0, 0x500, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -600, 875, -5832, 0, 0, 0, 0x500, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -900, 875, -5832, 0, 0, 0, 0x500, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 0, 275, -5832, 0, 0, 0, 0x500, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -600, 275, -5832, 0, 0, 0, 0x500, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -600, -25, -5832, 0, 0, 0, 0x500, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 600, -25, -5832, 0, 0, 0, 0x500, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 600, 275, -5832, 0, 0, 0, 0x500, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -900, -25, -5832, 0, 0, 0, 0x500, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 900, -25, -5832, 0, 0, 0, 0x500, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -300, 275, -5832, 0, 0, 0, 0x500, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 300, 275, -5832, 0, 0, 0, 0x500, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 0, 575, -5832, 0, 0, 0, 0x500, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 600, 575, -5832, 0, 0, 0, 0x500, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 900, 575, -5832, 0, 0, 0, 0x500, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -600, 575, -5832, 0, 0, 0, 0x500, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -900, 575, -5832, 0, 0, 0, 0x500, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -300, -25, -5832, 0, 0, 0, 0x500, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 300, -25, -5832, 0, 0, 0, 0x500, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 0, 275, -5832, 0, 0, 0, 0x550, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -600, 275, -5832, 0, 0, 0, 0x550, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -600, -25, -5832, 0, 0, 0, 0x550, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 600, -25, -5832, 0, 0, 0, 0x550, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 600, 275, -5832, 0, 0, 0, 0x550, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -900, -25, -5832, 0, 0, 0, 0x550, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 900, -25, -5832, 0, 0, 0, 0x550, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -300, 275, -5832, 0, 0, 0, 0x550, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 300, 275, -5832, 0, 0, 0, 0x550, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 0, 575, -5832, 0, 0, 0, 0x550, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 600, 575, -5832, 0, 0, 0, 0x550, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -600, 575, -5832, 0, 0, 0, 0x550, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -300, -25, -5832, 0, 0, 0, 0x550, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 300, -25, -5832, 0, 0, 0, 0x550, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -900, 275, -5832, 0, 0, 0, 0x550, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 900, 275, -5832, 0, 0, 0, 0x550, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -300, 875, -5832, 0, 0, 0, 0x550, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 300, 875, -5832, 0, 0, 0, 0x550, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 0, 875, -5832, 0, 0, 0, 0x550, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 600, 875, -5832, 0, 0, 0, 0x550, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 900, 875, -5832, 0, 0, 0, 0x550, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -600, 875, -5832, 0, 0, 0, 0x550, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -900, 875, -5832, 0, 0, 0, 0x550, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -300, 575, -5832, 0, 0, 0, 0x550, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 300, 575, -5832, 0, 0, 0, 0x550, bhvBowserBomb),
		OBJECT(MODEL_ISLAND, 0, -2811, -14243, 0, 0, 0, 0x00000000, bhvIsland),
		OBJECT(MODEL_NONE, 0, 592, -209, 0, 0, 0, 0x00000000, bhvCutsceneHandler),
		OBJECT(MODEL_NONE, 0, 892, -209, 0, 0, 0, 0x00000000, bhvCutsceneHandler),
		OBJECT(MODEL_FLOATING_CLOUD, 1892, -54, -209, 0, 0, 0, 0x250, bhvFloatingCloud),
		OBJECT(MODEL_FLOATING_CLOUD, -1978, -54, -209, 0, 0, 0, 0x300, bhvFloatingCloud),
		MARIO_POS(0x01, 0, 0, 440, 0),
		MARIO_POS(0x01, 0, 0, 740, 0),
		OBJECT(MODEL_NONE, 0, 440, 0, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_NONE, 0, 740, 0, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_CUSTOM_TORNADO_DEFENSE),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 0, 740, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
