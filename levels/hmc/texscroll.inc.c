void scroll_hmc_dl_Plane_001_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 18;
	int width = 128 * 0x20;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(hmc_dl_Plane_001_mesh_layer_1_vtx_0);

	deltaY = (int)(5.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_sts_mat_hmc_dl_Zel_water_1_layer1() {
	Gfx *mat = segmented_to_virtual(mat_hmc_dl_Zel_water_1_layer1);
	shift_s_down(mat, 12, PACK_TILESIZE(0, 1));
	shift_t_down(mat, 12, PACK_TILESIZE(0, 2));
	shift_s(mat, 20, PACK_TILESIZE(0, 1));
	shift_t_down(mat, 20, PACK_TILESIZE(0, 1));
};

void scroll_sts_mat_hmc_dl_waterOpaque_layer1() {
	Gfx *mat = segmented_to_virtual(mat_hmc_dl_waterOpaque_layer1);
	shift_s_down(mat, 12, PACK_TILESIZE(0, 1));
	shift_s(mat, 20, PACK_TILESIZE(0, 1));
	shift_t(mat, 20, PACK_TILESIZE(0, 1));
};

void scroll_sts_mat_hmc_dl_waterTransparent_layer5() {
	Gfx *mat = segmented_to_virtual(mat_hmc_dl_waterTransparent_layer5);
	shift_s_down(mat, 12, PACK_TILESIZE(0, 1));
	shift_s(mat, 20, PACK_TILESIZE(0, 1));
	shift_t(mat, 20, PACK_TILESIZE(0, 1));
};

void scroll_hmc() {
	scroll_hmc_dl_Plane_001_mesh_layer_1_vtx_0();
	scroll_sts_mat_hmc_dl_Zel_water_1_layer1();
	scroll_sts_mat_hmc_dl_waterOpaque_layer1();
	scroll_sts_mat_hmc_dl_waterTransparent_layer5();
}
