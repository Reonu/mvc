#include "src/game/envfx_snow.h"

const GeoLayout custom_cannon_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(1, custom_cannon_Cube_mesh_layer_1),
		GEO_DISPLAY_LIST(1, custom_cannon_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
