#include <ultra64.h>
#include "sm64.h"
#include "surface_terrains.h"
#include "geo_commands.h"

#include "make_const_nonconst.h"

// Note: This bin does not use bin IDs, unlike the other segmented bins.
#include "mario/model.inc.c"

#include "bubble/model.inc.c"

#include "walk_smoke/model.inc.c"

#include "burn_smoke/model.inc.c"

#include "stomp_smoke/model.inc.c"

#include "water_wave/model.inc.c"

#include "sparkle/model.inc.c"

#include "water_splash/model.inc.c"

#include "white_particle_small/model.inc.c"

#include "sparkle_animation/model.inc.c"

#include "shell2/model.inc.c"
#include "mario_swim_board/model.inc.c"
#include "green_spring/model.inc.c"
#include "yellow_spring/model.inc.c"
#include "red_spring/model.inc.c"

//snowman
#include "snowman/model.inc.c"
#include "snowman/anims/data.inc.c"
#include "snowman/anims/table.inc.c"
#include "fan_spring/model.inc.c"
#include "majora_platform/model.inc.c"
#include "majora_platform/collision.inc.c"
#include "lava_platform/model.inc.c"
#include "lava_platform/collision.inc.c"

//bully
#include "bully/model.inc.c"
#include "bully/anims/data.inc.c"
#include "bully/anims/table.inc.c"

//bullet bill
#include "bullet_bill/model.inc.c"

//chilly bully
#include "chillychief/model.inc.c"
#include "chillychief/anims/data.inc.c"
#include "chillychief/anims/table.inc.c"

//penguin
#include "penguin/model.inc.c"
#include "penguin/anims/data.inc.c"
#include "penguin/anims/table.inc.c"
#include "penguin/collision.inc.c"

//spindrift
#include "spindrift/model.inc.c"
#include "spindrift/anims/data.inc.c"
#include "spindrift/anims/table.inc.c"
#include "luiginpc/model.inc.c"
#include "luiginpc/anims/data.inc.c"
#include "luiginpc/anims/table.inc.c"

#include "piranha_plant/model.inc.c"
#include "piranha_plant/anims/data.inc.c"
#include "piranha_plant/anims/table.inc.c"