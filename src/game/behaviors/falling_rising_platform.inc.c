// falling_rising_platform.c.inc
u16 cum;
void bhv_squishable_platform_init(void) {
    cum = (o->oBehParams >> 24) & 0xFF;
    bhv_bitfs_sinking_platform_loop();
}

void bhv_squishable_platform_loop(void) {
    o->header.gfx.scale[1] = (sins(o->oBitfsPlatformTimer) + 1.0f) * 0.3f + 0.4f;
    o->oBitfsPlatformTimer += 0x80;
}

void bhv_bitfs_sinking_platform_loop(void) {
    if (cum) {
        o->oPosY +=
            sins(o->oBitfsPlatformTimer)
            * 0.75f; //! f32 double conversion error accumulates on Wii VC causing the platform to rise up
    }
    else {
        o->oPosY -=
            sins(o->oBitfsPlatformTimer)
            * 0.75f; //! f32 double conversion error accumulates on Wii VC causing the platform to rise up
    }
    o->oBitfsPlatformTimer += 0x100;
}

// TODO: Named incorrectly. fix
void bhv_ddd_moving_pole_loop(void) {
    obj_copy_pos_and_angle(o, o->parentObj);
}

void bhv_bitfs_sinking_cage_platform_loop(void) {
    if (o->oBehParams2ndByte != 0) {
        if (o->oTimer == 0) {
            o->oPosY -= 300.0f;
        }
        o->oPosY += sins(o->oBitfsPlatformTimer) * 7.0f;
    } else {
        o->oPosY -= sins(o->oBitfsPlatformTimer) * 3.0f;
    }

    o->oBitfsPlatformTimer += 0x100;
}
