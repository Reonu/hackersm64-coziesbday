#include "src/game/envfx_snow.h"

const GeoLayout puzzle_yellow_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, puzzle_yellow_Puzzle_piece_1_yellow_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_ALPHA, puzzle_yellow_Puzzle_piece_1_yellow_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, puzzle_yellow_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, puzzle_yellow_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
