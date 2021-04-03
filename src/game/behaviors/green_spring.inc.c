void bhv_green_spring_init(void) {;
    if (o->header.gfx.sharedChild == gLoadedGraphNodes[MODEL_GREEN_SPRING]) {
        o->oFriction = 40.0f;
     }
    else if (o->header.gfx.sharedChild == gLoadedGraphNodes[MODEL_YELLOW_SPRING]) {
        o->oFriction = 80.0f;
    }
    else if (o->header.gfx.sharedChild == gLoadedGraphNodes[MODEL_RED_SPRING]) {
        o->oFriction = 150.0f;
    }
    else {
        o->oFriction = 65.0f;
    }
}

void bhv_green_spring_loop(void) {
    if (o->oAction == 1) {
        if (o->oTimer == 1){
            if (o->header.gfx.sharedChild == gLoadedGraphNodes[MODEL_FAN_SPRING]){
                gMarioState->action = ACT_TWIRLING;
            }
            else {
                gMarioState->action = ACT_DOUBLE_JUMP;
            }
        }
        if (o->oTimer < 4) {
            o->header.gfx.scale[1] -= 0.125f;
        }
        else if (o->oTimer < 8) {
            o->header.gfx.scale[1] += 0.125f;
        }
        else {
            o->header.gfx.scale[1] = 1;
            o->oAction = 0;
        }
    }
}