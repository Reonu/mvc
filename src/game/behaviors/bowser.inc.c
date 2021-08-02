#include "config.h"

// bowser.c.inc
/**
 * Behavior for Bowser and it's actions (Tail, Flame, Body)
 */

// Bowser's Tail

/**
 * Checks whenever the Bowser and his tail should be intangible or not
 * By default it starts tangible
 */
void bowser_tail_anchor_act_default(void) {

}

/**
 * While Bowser get's thrown, wait 30 frames then
 * return to the default tail action check
 */
void bowser_tail_anchor_thrown(void) {

}

/**
 * Makes the tail intangible so Mario can grab it
 */
void bowser_tail_anchor_act_touched_mario(void) {

}

void (*sBowserTailAnchorActions[])(void) = {

};

/**
 * Bowser's tail main loop
 */
void bhv_bowser_tail_anchor_loop(void) {

}

// Bowser's Flame

/**
 * Bowser's Flame spawn main loop
 */
void bhv_bowser_flame_spawn_loop(void) {

}

/**
 * Bowser's Body main loop
 */
void bhv_bowser_body_anchor_loop(void) {

}

/**
 * Bowser's shockwave attack, spawns only in BITS
 */
s32 bowser_spawn_shockwave(void) {

}

/**
 * Misc effects that Bowser plays when he lands with drastic actions
 * Plays step sound, spawns particles and changes camera event
 */
void bowser_bounce_effects(s32 *timer) {

}

/**
 * Makes Bowser look up and walk on an specific animation frame
 * Returns TRUE if the animation is almost over
 */
s32 bowser_set_anim_look_up_and_walk(void) {

}

/**
 * Makes Bowser do a slow gait (or slow walk)
 * Returns TRUE if the animation is almost over
 */
s32 bowser_set_anim_slow_gait(void) {

}

/**
 * Makes Bowser look down and stop on an specific animation frame
 * Returns TRUE if the animation is almost over
 */
s32 bowser_set_anim_look_down_stop_walk(void) {

}


/**
 * Set Bowser an action depending of the CamAct value
 * CamAct changes value on the cutscene itself (cutscene_bowser_arena)
 */
void bowser_init_camera_actions(void) {

}

/**
 * Bowser's idle action that plays when he is initialized
 * or the CamAct gets in idle mode
 */
void bowser_act_wait(void) {

}

/**
 * Bowser's cutscene walk that last a few seconds to introduce itself
 * Do subactions until the animation ends, then go to next subaction
 */
void bowser_act_intro_walk(void) {

}

/**
 * List of actions to debug Bowser
 */
s8 sBowserDebugActions[] = {
    BOWSER_ACT_CHARGE_MARIO,
    BOWSER_ACT_SPIT_FIRE_INTO_SKY,
    BOWSER_ACT_SPIT_FIRE_ONTO_FLOOR,
    BOWSER_ACT_HIT_MINE,
    BOWSER_ACT_BIG_JUMP,
    BOWSER_ACT_WALK_TO_MARIO,
    BOWSER_ACT_BREATH_FIRE,
    BOWSER_ACT_DEAD,
    BOWSER_ACT_DANCE,
    BOWSER_ACT_TELEPORT,
    BOWSER_ACT_QUICK_JUMP,
    BOWSER_ACT_TILT_LAVA_PLATFORM,
    BOWSER_ACT_DANCE,
    BOWSER_ACT_DANCE,
    BOWSER_ACT_DANCE,
    BOWSER_ACT_DANCE,
};

/**
 * Debug function that allows to change Bowser's actions (most of them)
 */
UNUSED static void bowser_debug_actions(void) {

}

/**
 * Set actions (and attacks) for Bowser in "Bowser in the Dark World"
 */
void bowser_bitdw_actions(void) {

}

/**
 * Set actions (and attacks) for Bowser in "Bowser in the Fire Sea"
 */
void bowser_bitfs_actions(void) {

}

/**
 * List of actions (and attacks) for "Bowser in the Sky"
 */
void bowser_bits_action_list(void) {

}

/**
 * Sets big jump action, not much to say
 * Never gets called since oBowserBitsJustJump is always FALSE
 */
void bowser_set_act_big_jump(void) {

}

/**
 * Set actions (and attacks) for Bowser in "Bowser in the Sky"
 */
void bowser_bits_actions(void) {

}

/**
 * Reset Bowser position and speed if he wasn't able to land properly on stage
 */
#if BUGFIX_BOWSER_FALLEN_OFF_STAGE
void bowser_reset_fallen_off_stage(void) {

}
#endif

/**
 * Unused, makes Bowser be in idle and after it returns to default action
 */
void bowser_act_idle(void) {

}

/**
 * Default Bowser act that doesn't last very long
 */
void bowser_act_default(void) {

}

/**
 * Makes Bowser play breath animation and sound effect
 * The actual breath attack is in bhv_bowser_flame_spawn_loop
 * called as a child obj behavior in Bowser
 */
void bowser_act_breath_fire(void) {

}

/**
 * Makes Bowser walk towards Mario
 */
void bowser_act_walk_to_mario(void) {
}

/**
 * Makes Bowser teleport while invisible
 */
void bowser_act_teleport(void) {

}

/**
 * Makes Bowser do a fire split into the sky
 */
void bowser_act_spit_fire_into_sky(void) {

}

/**
 * Flips Bowser back on stage if he hits a mine with more than 1 health
 */
void bowser_act_hit_mine(void) {

}

/**
 * Makes Bowser do his jump start animation
 * Returns TRUE on the middle of the jump
 */
s32 bowser_set_anim_jump(void) {

}

/**
 * Reset speed, play jump stop animation and do attacks in BITDW
 * Returns TRUE when Bowser lands
 */
s32 bowser_land(void) {

}

/**
 * Makes Bowser do a second hop speed only in BITS
 */
void bowser_short_second_hop(void) {
    if (o->oBehParams2ndByte == BOWSER_BP_BITS && o->oBowserStatus & BOWSER_STATUS_BIG_JUMP) {
        if (o->oBowserDistToCentre > 1000.0f) {
            o->oForwardVel = 60.0f;
        }
    }
}

/**
 * Makes Bowser do a big jump
 */
void bowser_act_big_jump(void) {
}

/**
 * Fixed values for the quick jump action
 */
s16 sBowserVelYAir[] = { 60 };
s16 sBowserFVelAir[] = { 50 };

/**
 * Makes Bowser do a "quick" jump in BITDW
 */
void bowser_act_quick_jump(void) {

}

/**
 * Makes Bowser moving around if he is on an edge floor
 */
void bowser_act_hit_edge(void) {

}

/**
 * Makes Bowser do a fire split attack
 */
void bowser_act_spit_fire_onto_floor(void) {

}

/**
 * Turns around Bowser from an specific yaw angle
 * Returns TRUE once the timer is bigger than the time set
 */
s32 bowser_turn_on_timer(s32 time, s16 yaw) {

}

/**
 * Makes Bowser turn around after hitting the edge
 */
void bowser_act_turn_from_edge(void) {

}

/**
 * Makes Bowser charge (run) to Mario
 */
void bowser_act_charge_mario(void) {

}

/**
 * Checks if Bowser hits a mine from a distance, returns TRUE if so
 */
s32 bowser_check_hit_mine(void) {

}

/**
 * Bowser's thrown act that gets called after Mario releases him
 */
void bowser_act_thrown(void) {
}

/**
 * Set Bowser invisible and stops him (after falling)
 */
void bowser_set_goal_invisible(void) {
}

/**
 * Makes Bowser jump back on stage after falling
 */
void bowser_act_jump_onto_stage(void) {
}

/**
 * The frames of the Bowser's timer on which to play a "stomp" sound
 */
s8 sBowserDanceStepNoises[] = { 24, 42, 60, -1 };

/**
 * Makes Bowser's dance as a "taunt"
 */
void bowser_act_dance(void) {
}

/**
 * Spawn collectable that Bowser spawns after despawning
 * Spawns a Key in BITDW/BITFS or Grand Star in BITS
 */
void bowser_spawn_collectable(void) {
}

/**
 * Makes Bowser fly back on stage defeated
 */
void bowser_fly_back_dead(void) {
}

/**
 * Plays bounce effects after landing upside down
 */
void bowser_dead_bounce(void) {
}

/**
 * Wait for Mario to get close while Bowser is defeated
 * Returns TRUE if he is close enough
 */
s32 bowser_dead_wait_for_mario(void) {
}

/**
 * Makes Bowser twirl up by changing his scale
 * Returns TRUE once done
 */
s32 bowser_dead_twirl_up(void) {

}

/**
 * Hides Bowser after his death sequence is done
 */
void bowser_dead_hide(void) {

}

/**
 * Dialog values that are set on each stage Bowser's is defeated
 */
s16 sBowserDefeatedDialogText[3] = { DIALOG_119, DIALOG_120, DIALOG_121 };

/**
 * Bowser's dead sequence that plays in BITDW/BITFS
 * Returns TRUE once done
 */
s32 bowser_dead_default_stage_ending(void) {
}

/**
 * Bowser's dead sequence that plays in BITS
 * Returns TRUE once done
 */
s32 bowser_dead_final_stage_ending(void) {
}

/**
 * Bowser's dead action, plays when he has no health left
 * This action is divided in subaction functions
 */
void bowser_act_dead(void) {

}

/**
 * Sets values for the BITFS platform to tilt
 */
void bowser_tilt_platform(struct Object *platform, s16 angSpeed) {
}

/**
 * Struct for the BITFS tilt platform
 */
struct BowserTiltPlatformInfo {
    // Flag value to make sure platform moves smoothly
    //  0 = Don't move
    //  1 = Move angle behind Bowser
    // -1 = Move angle in front of Bowser
	s16	flag;
    // Sets platform's tilt angle speed (pattern: positive then negative)
	s16	angSpeed;
    // Sets how much time the platform can tilt, increases each move
 	s16	time;
};

/**
 * Data for the BITFS tilt Platform
 */
struct BowserTiltPlatformInfo sBowsertiltPlatformData[] = {
    {  1,   10,  40 },
    {  0,    0,  74 },
    { -1,  -10, 114 },
    {  1,  -20, 134 },
    { -1,   20, 154 },
    {  1,   40, 164 },
    { -1,  -40, 174 },
    {  1,  -80, 179 },
    { -1,   80, 184 },
    {  1,  160, 186 },
    { -1, -160, 186 },
    {  1,    0,   0 },
};

/**
 * Makes the platform in BITFS tilt from left to right
 */
void bowser_act_tilt_lava_platform(void) {
}

/**
 * Check if Bowser is offstage from a large distance or landed on a lethal floor
 */
s32 bowser_check_fallen_off_stage(void) {
    return FALSE;
}

#ifdef PLATFORM_DISPLACEMENT_2
struct PlatformDisplacementInfo sBowserDisplacementInfo;
#endif

/**
 * Set Bowser's actions
 */
void (*sBowserActions[])(void) = {

};

/**
 * Set Bowser's sound animations
 */
struct SoundState sBowserSoundStates[] = {
};

/**
 * Set whenever Bowser should have rainbow light or not on each stage
 */
s8 sBowserRainbowLight[] = { FALSE, FALSE, TRUE };

/**
 * Set how much health Bowser has on each stage
 */
s8 sBowserHealth[] = { 1, 1, 3 };

/**
 * Update Bowser's actions when he's hands free
 */
void bowser_free_update(void) {

}

/**
 * Update Bowser's actions when he's getting held
 */
void bowser_held_update(void) {
 
}

/**
 * Update Bowser's actions when he's thrown and dropped
 */
void bowser_thrown_dropped_update(void) {
}

/**
 * Bowser's main loop
 */
void bhv_bowser_loop(void) {

}

/**
 * Bowser's initial values and actions
 */
void bhv_bowser_init(void) {

}

Gfx *geo_update_body_rot_from_parent(s32 callContext, UNUSED struct GraphNode *node, Mat4 mtx) {
    Mat4 mtx2;
    struct Object *obj;

    if (callContext == GEO_CONTEXT_RENDER) {
        obj = (struct Object *) gCurGraphNodeObject;
        if (obj->prevObj != NULL) {
            create_transformation_from_matrices(mtx2, mtx, *gCurGraphNodeCamera->matrixPtr);
            obj_update_pos_from_parent_transformation(mtx2, obj->prevObj);
            obj_set_gfx_pos_from_pos(obj->prevObj);
        }
    }
    return NULL;
}

/**
 * Bowser's eyes Geo-Switch-Case IDs, defined from Mario's POV
 */
enum BowserEyesGSCId
{
    /*0x00*/ BOWSER_EYES_OPEN,
    /*0x01*/ BOWSER_EYES_HALF_CLOSED,
    /*0x02*/ BOWSER_EYES_CLOSED,
    /*0x03*/ BOWSER_EYES_LEFT,
    /*0x04*/ BOWSER_EYES_FAR_LEFT,
    /*0x05*/ BOWSER_EYES_RIGHT,
    /*0x06*/ BOWSER_EYES_FAR_RIGHT,
    /*0x07*/ BOWSER_EYES_DERP, // unused
    /*0x08*/ BOWSER_EYES_CROSS, // unused
    /*0x08*/ BOWSER_EYES_RESET // set eyes back to open
};

/**
 * Controls Bowser's eye open stage, including blinking and look directions
 */
void bowser_open_eye_switch(struct Object *obj, struct GraphNodeSwitchCase *switchCase) {
}

/**
 * Geo switch for controlling the state of Bowser's eye direction and open/closed
 * state. Checks whether oBowserEyesShut is TRUE and closes eyes if so and processes
 * direction otherwise.
 */
Gfx *geo_switch_bowser_eyes(s32 callContext, struct GraphNode *node, UNUSED Mat4 *mtx) {
    UNUSED s16 eyeShut;
    UNUSED s32 unused;
    struct Object *obj = (struct Object *) gCurGraphNodeObject;
    struct GraphNodeSwitchCase *switchCase = (struct GraphNodeSwitchCase *) node;
    if (callContext == GEO_CONTEXT_RENDER) {
        if (gCurGraphNodeHeldObject != NULL)
            obj = gCurGraphNodeHeldObject->objNode;
        switch (eyeShut = obj->oBowserEyesShut) {
            case FALSE: // eyes open, handle eye looking direction
                bowser_open_eye_switch(obj, switchCase);
                break;
            case TRUE: // eyes closed, blinking
                switchCase->selectedCase = BOWSER_EYES_CLOSED;
                break;
        }
        obj->oBowserEyesTimer++;
    }
    return NULL;
}

/**
 * Geo switch that sets Bowser's Rainbow coloring (in BITS)
 */
Gfx *geo_bits_bowser_coloring(s32 callContext, struct GraphNode *node, UNUSED s32 context) {
}
