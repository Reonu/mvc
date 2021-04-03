// warp.c.inc

void bhv_warp_loop(void) {
    u16 sp6;
    if (o->oTimer == 0) {
        sp6 = (o->oBehParams >> 24) & 0xFF;
        if (sp6 == 0)
            o->hitboxRadius = 50.0f;
        else if (sp6 == 0xFF)
            o->hitboxRadius = 10000.0f;
        else
            o->hitboxRadius = sp6 * 10.0;
        o->hitboxHeight = 50.0f;
    }



    o->oInteractStatus = 0;
}

void bhv_warp_stalker_loop() {
    if (gMarioState->floor->type == SURFACE_HANGABLE) {
        if((gMarioState->action & ACT_GROUP_MASK) == ACT_GROUP_MOVING) {
            o->oPosX = gMarioState->pos[0];
            o->oPosY = gMarioState->pos[1];
            o->oPosZ = gMarioState->pos[2];
            o->oFaceAngleYaw = gMarioState->faceAngle[1];
        }
    }
    if (gMarioState->debugMode == 0) {
        o->header.gfx.node.flags |= GRAPH_RENDER_INVISIBLE;
    }
    else {
        o->header.gfx.node.flags &= ~GRAPH_RENDER_INVISIBLE;
    }
}

void bhv_fading_warp_loop() // identical to the above function except for o->hitboxRadius
{
    u16 sp6;
    if (o->oTimer == 0) {
        sp6 = (o->oBehParams >> 24) & 0xFF;
        if (sp6 == 0)
            o->hitboxRadius = 85.0f;
        else if (sp6 == 0xFF)
            o->hitboxRadius = 10000.0f;
        else
            o->hitboxRadius = sp6 * 10.0;
        o->hitboxHeight = 50.0f;
    }
    o->oInteractStatus = 0;
}
