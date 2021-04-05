#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/bob/header.h"

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _generic_yay0SegmentRomStart, _generic_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group3_yay0SegmentRomStart, _group3_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group3_geoSegmentRomStart, _group3_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_YAY0(0x7, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_YAY0(0xa, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0xb, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_4), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SSL_PALM_TREE, palm_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM, bob_geo_000458), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS, bob_geo_000470), 

	AREA(1, bob_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x03, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x05, LEVEL_ENDING, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_GOOMBA, 4278, -1788, -4447, 0, 0, 0, 0x02020000, bhvHardAirKnockBackWarp),
		OBJECT(MODEL_BREAKABLE_BOX, 5307, -2340, -5452, 0, 0, 0, 0x00000000, bhvBreakableBox),
		OBJECT(MODEL_NONE, 4278, -1788, -4074, 0, 0, 0, 0x00030000, bhvAirborneDeathWarp),
		OBJECT(MODEL_AMP, 1052, -1875, -7975, 0, 0, 0, 0x02000000, bhvCirclingAmp),
		OBJECT(MODEL_AMP, 1524, -1387, -2770, 0, 0, 0, 0x00000000, bhvCirclingAmp),
		OBJECT(MODEL_AMP, 497, -1875, -8831, 0, 0, 0, 0x01000000, bhvCirclingAmp),
		OBJECT(MODEL_GOOMBA, 6780, -1931, -5547, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_WOODEN_SIGNPOST, 5085, -2340, -5708, 0, -90, 0, 0x00000000, bhvMessagePanel),
		OBJECT(MODEL_SSL_PALM_TREE, 4434, -2340, -6232, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_SSL_PALM_TREE, 4628, -2340, -4032, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_STAR, 4265, -2100, -4908, 0, 0, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_MR_BLIZZARD, 2530, -2078, 309, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, 2489, -1796, -240, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_FAN_SPRING, -967, -1624, -7060, 0, 0, 0, 0x01000000, bhvGreenSpring),
		OBJECT(0xFF, 784, -2395, -5656, 0, 0, 0, 0x01000000, bhv1Up),
		OBJECT(MODEL_MAJORA_PLATFORM, -4989, -1867, -7159, 0, 0, 0, 0x02031500, bhvMajoraPlatform),
		OBJECT(MODEL_MAJORA_PLATFORM, 3646, -1536, -6507, 0, 0, 0, 0x01030500, bhvMajoraPlatform),
		OBJECT(MODEL_MAJORA_PLATFORM, 3366, -1536, -6154, 0, 0, 0, 0x02030500, bhvMajoraPlatform),
		OBJECT(MODEL_MAJORA_PLATFORM, 3642, -1536, -6154, 0, 0, 0, 0x03030500, bhvMajoraPlatform),
		OBJECT(MODEL_MAJORA_PLATFORM, -7394, -292, -7159, 0, 0, 0, 0x04031500, bhvMajoraPlatform),
		OBJECT(MODEL_MAJORA_PLATFORM, -7049, -292, -6760, 0, 0, 0, 0x03031500, bhvMajoraPlatform),
		OBJECT(MODEL_MAJORA_PLATFORM, -4989, -1989, -6103, 0, 0, 0, 0x00000000, bhvLllSinkingMajoraPlatform),
		OBJECT(MODEL_STAR, 2736, -2240, 1877, 0, 0, 0, 0x01000000, bhvStar),
		OBJECT(MODEL_STAR, 2781, -2271, 5977, 0, 0, 0, 0x02000000, bhvStar),
		OBJECT(MODEL_STAR, 1125, -1243, -5207, 0, 0, 0, 0x03000000, bhvStar),
		OBJECT(MODEL_STAR, 5491, -2229, -5454, 0, 0, 0, 0x04000000, bhvStar),
		OBJECT(MODEL_STAR, 792, -2066, -9312, 0, 0, 0, 0x05000000, bhvStar),
		OBJECT(MODEL_STAR, -4871, -1937, -7157, 0, 0, 0, 0x06000000, bhvStar),
		OBJECT(MODEL_STAR, 5477, -5, -7013, 0, 0, 0, 0x06000000, bhvStar),
		OBJECT(MODEL_NONE, 0, 200, 0, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, 4951, -2340, -5344),
		OBJECT(MODEL_YELLOW_SPRING, 3530, -2340, -5742, 0, 0, 0, 0x00000000, bhvGreenSpring),
		OBJECT(MODEL_GREEN_SPRING, 4571, -2340, -4946, 0, 0, 0, 0x00000000, bhvGreenSpring),
		OBJECT(MODEL_YELLOW_SPRING, 2455, -2485, -5742, 0, 0, 0, 0x00000000, bhvGreenSpring),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_STREAMED_BFMOUNT),
		TERRAIN_TYPE(TERRAIN_SAND),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 4951, -2340, -5344),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
