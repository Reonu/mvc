#include "src/game/envfx_snow.h"

const GeoLayout star_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ASM(LAYER_OPAQUE, geo_set_star_color),
		GEO_DISPLAY_LIST(LAYER_ALPHA, star_star_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, star_star_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, star_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, star_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
