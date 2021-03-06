void scroll_bob_dl_Plane_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 192;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bob_dl_Plane_mesh_layer_5_vtx_0);

	deltaY = (int)(-4.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_sts_mat_bob_dl_sea_layer5() {
	Gfx *mat = segmented_to_virtual(mat_bob_dl_sea_layer5);
	shift_s_down(mat, 12, PACK_TILESIZE(0, 1));
	shift_s(mat, 20, PACK_TILESIZE(0, 1));
	shift_t(mat, 20, PACK_TILESIZE(0, 1));
};

void scroll_bob() {
	scroll_bob_dl_Plane_mesh_layer_5_vtx_0();
	scroll_sts_mat_bob_dl_sea_layer5();
}
