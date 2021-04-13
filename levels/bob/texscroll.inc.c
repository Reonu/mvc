void scroll_bob_dl_LavaPuddle_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 16;
	int width = 64 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(bob_dl_LavaPuddle_mesh_layer_1_vtx_0);

	deltaX = (int)(0.10000000149011612 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;

}
void scroll_bob_dl_LavaPuddle_mesh_layer_1_vtx_3() {
	int i = 0;
	int count = 8;
	int width = 64 * 0x20;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bob_dl_LavaPuddle_mesh_layer_1_vtx_3);

	deltaY = (int)(-0.6000000238418579 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;

}
void scroll_bob_dl_Water_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 25;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int timeX;
	float amplitudeX = 1.0;
	float frequencyX = 0.20000000298023224;
	float offsetX = 0.30000001192092896;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bob_dl_Water_mesh_layer_5_vtx_0);

	deltaX = (int)(amplitudeX * frequencyX * coss((frequencyX * timeX + offsetX) * (1024 * 16 - 1) / 6.28318530718) * 0x20);
	deltaY = (int)(0.20000000298023224 * 0x20) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;
	timeX += 1;
	currentY += deltaY;

}
void epicscroll() {
    Gfx *mat = segmented_to_virtual(mat_bob_dl_epicWater_layer5);
    shift_s_down(mat, 13, PACK_TILESIZE(0, 1));
    shift_s(mat, 21, PACK_TILESIZE(0, 1));
    shift_t(mat, 21, PACK_TILESIZE(0, 1));
};


void scroll_bob() {
  scroll_bob_dl_LavaPuddle_mesh_layer_1_vtx_0();
  scroll_bob_dl_LavaPuddle_mesh_layer_1_vtx_3();
  //scroll_bob_dl_Water_mesh_layer_5_vtx_0();
  epicscroll();
}