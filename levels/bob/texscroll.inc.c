void scroll_bob_dl_B_LavaPuddle_mesh_layer_1_vtx_3() {
	int i = 0;
	int count = 39;
	int width = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(bob_dl_B_LavaPuddle_mesh_layer_1_vtx_3);

	deltaX = (int)(0.10000000149011612 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_bob_dl_LavaNoCollision_mesh_layer_7_vtx_0() {
	int i = 0;
	int count = 9;
	int width = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(bob_dl_LavaNoCollision_mesh_layer_7_vtx_0);

	deltaX = (int)(-0.0430000014603138 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_gfx_mat_bob_dl_lava2_001() {
	Gfx *mat = segmented_to_virtual(mat_bob_dl_lava2_001);

	shift_t(mat, 8, PACK_TILESIZE(0, 2));

};

void scroll_gfx_mat_bob_dl_waterVertexAlpha_001_layer5() {
	Gfx *mat = segmented_to_virtual(mat_bob_dl_waterVertexAlpha_001_layer5);


	shift_s(mat, 10, PACK_TILESIZE(0, 1));
	shift_s_down(mat, 15, PACK_TILESIZE(0, 1));
	shift_t_down(mat, 15, PACK_TILESIZE(0, 1));

};

void scroll_bob() {
	scroll_bob_dl_B_LavaPuddle_mesh_layer_1_vtx_3();
	scroll_bob_dl_LavaNoCollision_mesh_layer_7_vtx_0();
	scroll_gfx_mat_bob_dl_lava2_001();
	scroll_gfx_mat_bob_dl_waterVertexAlpha_001_layer5();
};
