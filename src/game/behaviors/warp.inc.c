// warp.inc.c

void bhv_warp_loop(void) {
    if (o->oTimer == 0) {
        u16 radius = GET_BPARAM1(o->oBehParams);

        if (radius == 0) {
            o->hitboxRadius = 50.0f;
        } else if (radius == 0xFF) {
            o->hitboxRadius = 10000.0f;
        } else {
            o->hitboxRadius = radius * 10.0f;
        }
        o->hitboxHeight = 50.0f;
    }



    o->oInteractStatus = 0;
}

void bhv_warp_stalker_loop() {
    //f32 averageX;
    //f32 averageY;
    //f32 averageZ;
    if (gMarioState->floor != NULL) {
            if (gMarioState->floor->type == SURFACE_HANGABLE) {
                if((gMarioState->action & ACT_GROUP_MASK) == ACT_GROUP_MOVING) {
                    o->oPosX = (gMarioState->floor->vertex1[0] + gMarioState->floor->vertex2[0] + gMarioState->floor->vertex3[0]) / 3;
                    o->oPosY = ((gMarioState->floor->vertex1[1] + gMarioState->floor->vertex2[1] + gMarioState->floor->vertex3[1]) / 3) + 50;
                    o->oPosZ = (gMarioState->floor->vertex1[2] + gMarioState->floor->vertex2[2] + gMarioState->floor->vertex3[2]) / 3;
                    o->oFaceAngleYaw = gMarioState->faceAngle[1];
                }
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
        u16 radius = GET_BPARAM1(o->oBehParams);

        if (radius == 0) {
            o->hitboxRadius = 85.0f;
        } else if (radius == 0xFF) {
            o->hitboxRadius = 10000.0f;
        } else {
            o->hitboxRadius = radius * 10.0f;
        }
        o->hitboxHeight = 50.0f;
    }

    o->oInteractStatus = INT_STATUS_NONE;
}
