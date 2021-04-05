void bhv_majora_platform_loop(void) {
    u8 type = ((o->oBehParams >> 24) & 0xFF);
    s16 speed = ((o->oBehParams >> 8) & 0xFF);
    if (type % 2) speed *= -1;
    
    f32 *platformDirPos = (type < 2 ? &o->oPosX : &o->oPosY);
    f32 *platformDirVel = (type < 2 ? &o->oVelX : &o->oVelY);

    if (o->oTimer <= 50) {
        *platformDirVel = 0;
    } else if (o->oTimer <= 200) {
        *platformDirPos += speed;
        *platformDirVel = speed;
    } else if (o->oTimer <= 250) {
        *platformDirVel = 0;
    } else if (o->oTimer <= 400) {
        *platformDirPos -= speed;
        *platformDirVel = -speed;
    } else {
        o->oTimer = -1;
    }
    
    cur_obj_scale((((o->oBehParams >> 16) & 0xFF) + 1)/4.f);
}