// sound_birds.inc.c

void bhv_birds_sound_loop(void) {
    if (o->oTimer == 04) {
        initiate_warp(LEVEL_BOB,1,0x03,0);
    }
}
