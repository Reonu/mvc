void bhv_majora_platform_loop(void) {
    u8 type = ((o->oBehParams >> 24) & 0xFF);
    s16 speed = ((o->oBehParams >> 8) & 0xFF);
    if (type % 2) speed *= -1;
    
    f32 *platformDirPos = (type < 2 ? &o->oPosX : &o->oPosY);

if ((o->oTimer > 50) && (o->oTimer <= 200)) {
    *platformDirPos += speed;
} else if ((o->oTimer > 250) && (o->oTimer <= 400)) {
    *platformDirPos -= speed;
} else if (o->oTimer > 400) {
    o->oTimer = -1;
}
    
    cur_obj_scale((((o->oBehParams >> 16) & 0xFF) + 1)/4.f);
}