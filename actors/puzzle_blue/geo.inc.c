#include "src/game/envfx_snow.h"

const GeoLayout puzzle_blue_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, puzzle_blue_Puzzle_piece_4_blue_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_ALPHA, puzzle_blue_Puzzle_piece_4_blue_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, puzzle_blue_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, puzzle_blue_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
