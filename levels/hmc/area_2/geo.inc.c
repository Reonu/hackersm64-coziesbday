#include "src/game/envfx_snow.h"

const GeoLayout hmc_area_2_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SWITCH_CASE(6, geo_switch_area),
		GEO_OPEN_NODE(),
			GEO_BRANCH(1, hmc_dl_room_0_geo),
			GEO_BRANCH(1, hmc_dl_room_1_geo),
			GEO_BRANCH(1, hmc_dl_room_2_geo),
			GEO_BRANCH(1, hmc_dl_room_3_geo),
			GEO_BRANCH(1, hmc_dl_room_4_geo),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 0, 6573, 0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout hmc_dl_room_0_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 0, 6573, 0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout hmc_dl_room_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 0, 6573, 0),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_AAAAAAWalls_mesh_layer_1),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_AAAAAAWalls_002_mesh_layer_1),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_AAAAAAWalls_003_mesh_layer_1),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_AAAAAAWalls_004_mesh_layer_1),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_AAAAAAWallsBlack_mesh_layer_1),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_AAAAAcave_door_visual_mesh_layer_1),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_AAAAACaveDoor2_Visual_002_mesh_layer_1),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_Cave_mesh_layer_1),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_Platform_mesh_layer_1),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_Platform_001_mesh_layer_1),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -517, 0, 0, hmc_dl_text3d_mesh_layer_1),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout hmc_dl_room_2_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 0, 6573, 0),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_tunnel_mesh_layer_1),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout hmc_dl_room_3_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 0, 6573, 0),
		GEO_OPEN_NODE(),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 0, 0, -1084, hmc_dl_AAAAACave_Section2Wall_mesh_layer_1),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_Cave_Section2_mesh_layer_1),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout hmc_dl_room_4_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 0, 6573, 0),
		GEO_OPEN_NODE(),
			GEO_TRANSLATE_NODE(LAYER_OPAQUE, -2214, -9634, -2535),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_underground_mesh_layer_1),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout hmc_area_2[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND_COLOR(0x0001),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, -100000, 0, -100, -100000, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, hmc_area_2_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
