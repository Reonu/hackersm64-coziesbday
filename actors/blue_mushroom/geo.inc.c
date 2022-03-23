#include "src/game/envfx_snow.h"

const GeoLayout blue_mushroom_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ASM(LAYER_OPAQUE, geo_set_toad_colors),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, blue_mushroom_Mushroom_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, blue_mushroom_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
