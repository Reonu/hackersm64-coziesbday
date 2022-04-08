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
		WARP_NODE(0xF3, LEVEL_HMC, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x03, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x04, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		INSTANT_WARP(0x1B, 0x01, 869, 902, 762),
		INSTANT_WARP(0x1C, 0x01, -869, -902, -762),
		INSTANT_WARP(0x1D, 0x01, 795, 902, -694),
		INSTANT_WARP(0x1E, 0x01, -795, -902, 694),
		WARP_NODE(0x08, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_DOGE, -1453, 83, 2183, 0, 0, 0, (0x00 << 24) | (0x09 << 16) | (0x00 << 8) | (0x00), bhvBobombBuddy),
		OBJECT(MODEL_HMC_METAL_PLATFORM, -366, 1381, 464, 0, 0, 0, 0x00000000, bhvControllablePlatform),
		OBJECT(MODEL_NONE, 10133, 19, -2428, 0, 0, 0, (0x04 << 16), bhvInstantActiveWarp),
		OBJECT(MODEL_KOOPA_WITH_SHELL_CUSTOM, 10133, 19, -2906, 0, 0, 0, (0x07 << 24) | (0x06 << 16), bhvKoopaToad),
		OBJECT(MODEL_NONE, 9039, 1290, 9667, 0, 0, 0, (0x00 << 24) | (0x08 << 16) | (0x00 << 8) | (0x00), bhvLllRotatingHexagonalRing),
		MARIO_POS(0x01, -180, -377, 1402, 1592),
		OBJECT(MODEL_PUZZLE_GREEN, -8403, 849, -4501, 0, -180, 0, (0x00 << 24) | (0x01 << 16) | (0x00 << 8) | (0x00), bhvPuzzlePiece),
		OBJECT(MODEL_PUZZLE_RED, -8576, 677, -4501, 0, -180, 0, (0x00 << 24) | (0x02 << 16) | (0x00 << 8) | (0x00), bhvPuzzlePiece),
		OBJECT(MODEL_PUZZLE_YELLOW, -8576, 849, -4501, 0, -180, 0, (0x00 << 24) | (0x00 << 16) | (0x00 << 8) | (0x00), bhvPuzzlePiece),
		OBJECT(MODEL_PUZZLE_BLUE, -8403, 677, -4501, 0, -180, 0, (0x00 << 24) | (0x03 << 16) | (0x00 << 8) | (0x00), bhvPuzzlePiece),
		OBJECT(MODEL_PUZZLE_BLUE, 6528, 1111, -1949, 0, 0, 0, (0x00 << 24) | (0x03 << 16) | (0x00 << 8) | (0x00), bhvStar),
		OBJECT(MODEL_PUZZLE_GREEN, -1763, 2992, 11596, 0, 0, 0, (0x00 << 24) | (0x01 << 16) | (0x00 << 8) | (0x00), bhvStar),
		OBJECT(MODEL_PUZZLE_RED, 6462, 1921, -3106, 0, 0, 0, (0x00 << 24) | (0x02 << 16) | (0x00 << 8) | (0x00), bhvStar),
		OBJECT(MODEL_PUZZLE_YELLOW, 9090, 1952, 9696, 0, 0, 0, (0x00 << 24) | (0x00 << 16) | (0x00 << 8) | (0x00), bhvStar),
		OBJECT(MODEL_REONUS_PFP, -7408, 13, 1472, 0, 0, 0, (0x00 << 24) | (0x08 << 16) | (0x00 << 8) | (0x00), bhvBobombBuddy),
		OBJECT(MODEL_NONE, 326, 200, 1570, 0, -180, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_NONE, -1660, 63, 9018, 0, -180, 0, 0x000B0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_GOOMBA, -189, 83, 35, 0, 0, 0, (0x00 << 24) | (0x08 << 16) | (0x00 << 8) | (0x00), bhvHardAirKnockBackWarp),
		TERRAIN(hmc_area_1_collision),
		MACRO_OBJECTS(hmc_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_CUSTOM_PUZZLE_SONG),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, hmc_area_2),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF3, LEVEL_HMC, 0x01, 0x0B, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_HMC, 0x02, 0x0C, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_HMC, 0x02, 0x03, WARP_NO_CHECKPOINT),
		WARP_NODE(0x03, LEVEL_HMC, 0x02, 0x02, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BLUE_MUSHROOM, 2634, -43, 3511, 0, 0, 0, 0x000A0000, bhvBlueMushroom),
		OBJECT(MODEL_BLUE_MUSHROOM, 784, -1159, 141, 0, 0, 0, 0x000A0000, bhvBlueMushroom),
		OBJECT(MODEL_BLUE_MUSHROOM, -3518, -1127, 609, 0, 0, 0, 0x000A0000, bhvBlueMushroom),
		OBJECT(MODEL_BLUE_MUSHROOM, 2181, -693, 769, 0, 0, 0, 0x000A0000, bhvBlueMushroom),
		OBJECT(MODEL_BLUE_MUSHROOM, -96, -43, 3548, 0, 0, 0, (0x02 << 24) | (0x02 << 16) | (0x00 << 8) | (0x00), bhvBlueMushroom),
		OBJECT(MODEL_BLUE_MUSHROOM, -1193, 680, 3305, 0, 0, 0, (0x00 << 24) | (0x00 << 16) | (0x00 << 8) | (0x00), bhvBlueMushroom),
		OBJECT(MODEL_BLUE_MUSHROOM_ALT, 3476, -920, 2321, 0, 0, 0, 0x000A0000, bhvBlueMushroom),
		OBJECT(MODEL_BLUE_MUSHROOM_ALT, -3484, 2103, -1282, 0, -180, 0, 0x000A0000, bhvBlueMushroom),
		OBJECT(MODEL_BLUE_MUSHROOM, -2873, 1920, 545, 0, 0, 0, 0x000A0000, bhvBlueMushroom),
		OBJECT(MODEL_BLUE_MUSHROOM, 3408, 272, -154, 0, 0, 0, (00 << 24) | (00 << 16) | (00 << 8) | (00), bhvBlueMushroom),
		OBJECT(MODEL_WARP_PIPE, 3408, 272, -772, 0, 0, 0, (00 << 24) | (03 << 16) | (00 << 8) | (00), bhvWarpPipe),
		OBJECT(MODEL_NONE, -258, -702, -3592, 0, 0, 0, 0xFFFF00FF, bhvLamp),
		OBJECT(MODEL_LANTERN2, 862, -1127, -2400, 0, 0, 0, 0x000A0000, bhvBreakableBoxSmall),
		OBJECT(MODEL_LANTERN2, -2173, -3060, -2250, 0, 0, 0, 0x000A0000, bhvBreakableBoxSmall),
		OBJECT(MODEL_PURPLE_SWITCH, 245, 1041, 3448, 0, 0, 0, 0x000A0000, bhvPurpleSwitchHiddenBoxes),
		OBJECT(MODEL_PURPLE_SWITCH, -3099, 1920, 208, 0, 0, 0, 0x000A0000, bhvPurpleSwitchHiddenBoxes),
		OBJECT(MODEL_PURPLE_SWITCH, 3403, 272, -1258, 0, 0, 0, 0x000A0000, bhvPurpleSwitchHiddenBoxes),
		OBJECT(MODEL_TOAD2, 658, -1123, -2228, 0, 0, 0, 0x00000000, bhvToad2),
		OBJECT(MODEL_TOAD2, 1465, -693, 921, 0, 0, 0, (0x00 << 24) | (0x01 << 16) | (0x00 << 8) | (0x00), bhvToad2),
		OBJECT(MODEL_NONE, -173, -1127, -3502, 0, 0, 0, 0x000A0000, bhvInstantActiveWarp),
		OBJECT(MODEL_NONE, -173, -1000, -3068, 0, 0, 0, 0x000C0000, bhvHardAirKnockBackWarp),
		OBJECT(MODEL_AMP, -5364, 2300, 111, 0, 0, 0, (0x00 << 24) | (0x00 << 16) | (0x00 << 8) | (0x00), bhvCirclingAmp),
		OBJECT(MODEL_AMP, -5963, 2386, 587, 0, 41, 0, (0x00 << 24) | (0x00 << 16) | (0x00 << 8) | (0x00), bhvCirclingAmp),
		OBJECT(MODEL_AMP, -4520, 2186, 712, 0, 24, 0, (0x00 << 24) | (0x00 << 16) | (0x00 << 8) | (0x00), bhvCirclingAmp),
		OBJECT(MODEL_AMP, -4234, 2479, 161, 0, -35, 0, (0x00 << 24) | (0x00 << 16) | (0x00 << 8) | (0x00), bhvCirclingAmp),
		OBJECT(MODEL_BLUE_MUSHROOM_ALT, -4191, -1009, 965, 0, -90, 0, 0x000A0000, bhvBlueMushroom),
		OBJECT(MODEL_BLUE_MUSHROOM_ALT, -5575, -1422, 240, 0, 180, 0, 0x000A0000, bhvBlueMushroom),
		OBJECT(MODEL_BLUE_MUSHROOM_ALT, -8051, -1065, 965, 0, -90, 0, 0x000A0000, bhvBlueMushroom),
		OBJECT(MODEL_BLUE_MUSHROOM_ALT, -6172, -1227, 240, 0, 180, 0, 0x000A0000, bhvBlueMushroom),
		OBJECT(MODEL_BLUE_MUSHROOM_ALT, -8308, 1547, 242, 0, 180, 0, (0x01 << 24) | (0x00 << 16) | (0x00 << 8) | (0x00), bhvBlueMushroom),
		OBJECT(MODEL_BLUE_MUSHROOM_ALT, -7960, 1232, 242, 0, 0, 0, (0x01 << 24) | (0x00 << 16) | (0x00 << 8) | (0x00), bhvBlueMushroom),
		OBJECT(MODEL_NONE, -3772, -1127, 240, 0, 180, 0, 0x000A0000, bhvSnap2d),
		OBJECT(MODEL_BULLY, 241, -3052, -2008, 0, 0, 0, 0x00000000, bhvSmallBully),
		OBJECT(MODEL_GOOMBA, 315, -3052, -790, 0, 0, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_GOOMBA, -158, -3052, -1343, 0, 0, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_MR_BLIZZARD, -186, -3020, 240, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, 181, -3052, 1166, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, 180, -3052, 1769, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, 177, -3052, 2285, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, -614, -3052, 1164, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, -615, -3052, 1765, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, -618, -3052, 2290, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_BLUE_MUSHROOM, -221, -3060, 5304, 0, 0, 0, (0x02 << 24) | (0x03 << 16) | (0x00 << 8) | (0x00), bhvBlueMushroom),
		OBJECT(MODEL_WARP_PIPE, -231, -2277, 4487, 0, 0, 0, (0x00 << 24) | (0x02 << 16) | (0x00 << 8) | (0x00), bhvWarpPipe),
		TERRAIN(hmc_area_2_collision),
		ROOMS(hmc_area_2_collision_rooms),
		MACRO_OBJECTS(hmc_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_CUSTOM_TREBLE),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(3, hmc_area_3),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF3, LEVEL_HMC, 0x01, 0x0B, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_HMC, 0x02, 0x0C, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_HMC, 0x02, 0x03, WARP_NO_CHECKPOINT),
		WARP_NODE(0x03, LEVEL_HMC, 0x02, 0x02, WARP_NO_CHECKPOINT),
		INSTANT_WARP(0x00, 0x01, 7495, 1294, -3391),
		OBJECT(MODEL_KOOPA_WITH_SHELL_CUSTOM, -1321, -1313, -84, 0, 0, 0, (0x07 << 24), bhvKoopaToad),
		TERRAIN(hmc_area_3_collision),
		ROOMS(hmc_area_3_collision_rooms),
		MACRO_OBJECTS(hmc_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_CUSTOM_DDD_REMIX),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -180, -377, 1402, 1592),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
