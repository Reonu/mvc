#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/area.h"
#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/ending/header.h"

const LevelScript level_ending_entry_loop[] = {
    SLEEP(/*frames*/ 1),
    JUMP(level_ending_entry_loop), // (loop sleep 1 forever)
};

const LevelScript level_ending_entry[] = {
    INIT_LEVEL(),
    LOAD_LEVEL_DATA(ending),
    ALLOC_LEVEL_POOL(),

    AREA(/*index*/ 1, ending_geo_area_1),
    END_AREA(),

    /*8*/ FREE_LEVEL_POOL(),
    /*9*/ SLEEP(/*frames*/ 60),
    /*10*/ BLACKOUT(/*active*/ FALSE),
    /*11*/ LOAD_AREA(/*area*/ 1),
    /*12*/ TRANSITION(/*transType*/ WARP_TRANSITION_FADE_FROM_COLOR, /*time*/ 75, /*color*/ 0x00, 0x00, 0x00),
    /*14*/ SLEEP(/*frames*/ 120),
    /*15*/ CALL(/*arg*/ 0, /*func*/ lvl_play_the_end_screen_sound),
    // L1:
    /*17*/ SLEEP(/*frames*/ 1),
    /*15*/ CALL(/*arg*/ 0, /*func*/ lvl_print_ending_text),
    /*18*/ JUMP(level_ending_entry + 17),
};
