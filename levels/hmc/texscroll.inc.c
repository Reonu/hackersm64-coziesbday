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
	scroll_sts_mat_hmc_dl_waterOpaque_layer1();
	scroll_sts_mat_hmc_dl_waterTransparent_layer5();
}
