void bhv_majora_platform_loop(void) {
    switch ((o->oBehParams >> 24) & 0xFF){
        case 01: {
            if (o->oTimer <= 50) {
                o->oPosX += 50;
                o->oVelX = 50;
            } else if (o->oTimer <= 100) {
                o->oPosX -= 50;
                o->oVelX = -50;
            }
            if (o->oTimer == 101) {
                o->oTimer = -1;
            }
            break;
        }
        case 02: {
            if (o->oTimer <= 50) {
                //do nothing lul
            } else if (o->oTimer <= 200) {
                o->oPosY += 8;
                o->oVelY = 8;
            } else if (o->oTimer <= 250) {
                //do nothing lul
            } else if (o->oTimer <= 400) {
                o->oPosY -= 8;
                o->oVelY = -8;
            }
            if (o->oTimer == 401) {
                o->oTimer = -1;
            }
            break;
        }
        case 03: {
            if (o->oTimer > 20){
                o->oPosX += 10;
                o->oVelX = 0;
            }
        break;

        }
    }
    switch ((o->oBehParams >> 16) & 0xFF) {
        case 00: {
            cur_obj_scale(0.25f);
            break;
        }
        case 01: {
            cur_obj_scale(0.5f);
            break;
        }
        case 03: {
            cur_obj_scale(0.75f);
            break;
        }
        case 04: {
            cur_obj_scale(1.0f);
            break;
        }
    }
}