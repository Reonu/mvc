void bhv_majora_platform_loop(void) {
    u8 type = ((o->oBehParams >> 24) & 0xFF);
    s16 speed = ((o->oBehParams >> 8) & 0xFF);
    if (type & 1) speed = - speed;
    
    f32 *platformDirPos;
    if (type < 2) {
        platformDirPos = &o->oPosX;
    } else if (type < 4) {
        platformDirPos = &o->oPosY;
    } else {
        platformDirPos = &o->oPosZ;
    }

if ((o->oTimer > 35) && (o->oTimer <= 110)) {
    *platformDirPos += speed;
} else if ((o->oTimer > 135) && (o->oTimer <= 210)) {
    *platformDirPos -= speed;
} else if (o->oTimer > 210) {
    o->oTimer = -1;
}
    
    cur_obj_scale((((o->oBehParams >> 16) & 0xFF) + 1)/4.f);
}