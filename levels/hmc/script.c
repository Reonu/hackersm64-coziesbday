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
#include "levels/hmc/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_hmc_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _hmc_segment_7SegmentRomStart, _hmc_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _cave_yay0SegmentRomStart, _cave_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group6_yay0SegmentRomStart, _group6_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group6_geoSegmentRomStart, _group6_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group17_yay0SegmentRomStart, _group17_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_YAY0(0xa, _bbh_skybox_yay0SegmentRomStart, _bbh_skybox_yay0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_7), 
	JUMP_LINK(script_func_global_18), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_WOODEN_DOOR, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_HAZY_MAZE_DOOR, hazy_maze_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_PLATFORM, hmc_geo_0005A0), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_ARROW_PLATFORM, hmc_geo_0005B8), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_ELEVATOR_PLATFORM, hmc_geo_0005D0), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_ROLLING_ROCK, hmc_geo_000548), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_PIECE, hmc_geo_000570), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_SMALL_PIECE, hmc_geo_000588), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_RED_GRILLS, hmc_geo_000530), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, hmc_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		INSTANT_WARP(0x00, 0x02, 0, 0, 0),
		WARP_NODE(0xF3, LEVEL_HMC, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_HMC_METAL_PLATFORM, -366, 1381, 464, 0, 0, 0, 0x00000000, bhvControllablePlatform),
		OBJECT(MODEL_NONE, -366, 172, 464, 0, 0, 0, 0x00000000, bhvTreasureChests),
		MARIO_POS(0x01, -180, 60, 63, 9456),
		OBJECT(MODEL_NONE, 326, 200, 1570, 0, -180, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_NONE, -236, -36, 8965, 0, -180, 0, 0x000B0000, bhvSpinAirborneWarp),
		TERRAIN(hmc_area_1_collision),
		MACRO_OBJECTS(hmc_area_1_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, hmc_area_2),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF3, LEVEL_HMC, 0x01, 0x0B, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_HMC, 0x02, 0x0C, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BLUE_MUSHROOM, 2634, -6616, 3511, 0, 0, 0, 0x000A0000, bhvBlueMushroom),
		OBJECT(MODEL_BLUE_MUSHROOM, 784, -7732, 141, 0, 0, 0, 0x000A0000, bhvBlueMushroom),
		OBJECT(MODEL_BLUE_MUSHROOM, -3518, -7700, 609, 0, 0, 0, 0x000A0000, bhvBlueMushroom),
		OBJECT(MODEL_BLUE_MUSHROOM, 2181, -7266, 769, 0, 0, 0, 0x000A0000, bhvBlueMushroom),
		OBJECT(MODEL_BLUE_MUSHROOM, -96, -6616, 3548, 0, 0, 0, 0x000A0000, bhvBlueMushroom),
		OBJECT(MODEL_BLUE_MUSHROOM, -1336, -5893, 3207, 0, 0, 0, 0x000A0000, bhvBlueMushroom),
		OBJECT(MODEL_BLUE_MUSHROOM_ALT, 3476, -7493, 2321, 0, 0, 0, 0x000A0000, bhvBlueMushroom),
		OBJECT(MODEL_BLUE_MUSHROOM, -3210, -4653, -1034, 0, 0, 0, 0x000A0000, bhvBlueMushroom),
		OBJECT(MODEL_NONE, -258, -7275, -3592, 0, 0, 0, 0xFFFF00FF, bhvLamp),
		OBJECT(MODEL_LANTERN2, 862, -7700, -2400, 0, 0, 0, 0x000A0000, bhvBreakableBoxSmall),
		OBJECT(MODEL_PURPLE_SWITCH, 245, -5532, 3448, 0, 0, 0, 0x000A0000, bhvPurpleSwitchHiddenBoxes),
		OBJECT(MODEL_PURPLE_SWITCH, -3099, -4653, 208, 0, 0, 0, 0x000A0000, bhvPurpleSwitchHiddenBoxes),
		OBJECT(MODEL_TOAD2, 658, -7696, -2228, 0, 0, 0, 0x00000000, bhvToad2),
		OBJECT(MODEL_TOAD2, 1465, -7266, 921, 0, 0, 0, (0x00 << 24) | (0x01 << 16) | (0x00 << 8) | (0x00), bhvToad2),
		OBJECT(MODEL_NONE, -173, -7700, -3502, 0, 0, 0, 0x000A0000, bhvInstantActiveWarp),
		OBJECT(MODEL_NONE, -173, -7573, -3068, 0, 0, 0, 0x000C0000, bhvHardAirKnockBackWarp),
		OBJECT(MODEL_AMP, -5364, -4029, 111, 0, 0, 0, (0x00 << 24) | (0x00 << 16) | (0x00 << 8) | (0x00), bhvCirclingAmp),
		OBJECT(MODEL_BLUE_MUSHROOM_ALT, -4191, -7582, 965, 0, -90, 0, 0x000A0000, bhvBlueMushroom),
		OBJECT(MODEL_BLUE_MUSHROOM_ALT, -5575, -7995, 240, 0, 180, 0, 0x000A0000, bhvBlueMushroom),
		OBJECT(MODEL_BLUE_MUSHROOM_ALT, -8051, -7638, 965, 0, -90, 0, 0x000A0000, bhvBlueMushroom),
		OBJECT(MODEL_BLUE_MUSHROOM_ALT, -6172, -7800, 240, 0, 180, 0, 0x000A0000, bhvBlueMushroom),
		OBJECT(MODEL_BLUE_MUSHROOM_ALT, -7960, -5026, 242, 0, 0, 0, 0x000A0000, bhvBlueMushroom),
		OBJECT(MODEL_BLUE_MUSHROOM_ALT, -8216, -5341, 242, 0, 180, 0, 0x000A0000, bhvBlueMushroom),
		OBJECT(MODEL_BLUE_MUSHROOM_ALT, -8220, -4779, 242, 0, 180, 0, 0x000A0000, bhvBlueMushroom),
		OBJECT(MODEL_NONE, -3772, -7700, 240, 0, 180, 0, 0x000A0000, bhvSnap2d),
		TERRAIN(hmc_area_2_collision),
		ROOMS(hmc_area_2_collision_rooms),
		MACRO_OBJECTS(hmc_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_WATER),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -180, 60, 63, 9456),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
