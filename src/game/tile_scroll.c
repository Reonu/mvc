#include <ultra64.h>
#include "game/memory.h"
#include "game/tile_scroll.h"


/*
 * Parameters:
 * dl - Which display list to modify (make sure it's passed by reference).
 *
 * cmd - Location of the gsDPSetTileSize command in the display list.
 *
 * s/t - How much to scroll.
 */

void shift_s(Gfx *dl, u32 cmd, u16 s) {
    SetTileSize *tile = (SetTileSize *)dl;
    tile += cmd;
    tile->s += s;
    tile->u += s;
}

void shift_t(Gfx *dl, u32 cmd, u16 t) {
    SetTileSize *tile = (SetTileSize *)dl;
    tile += cmd;
    tile->t += t;
    tile->v += t;
}

void shift_s_down(Gfx *dl, u32 cmd, u16 s) {
    SetTileSize *tile = (SetTileSize *)dl;
    tile += cmd;
    tile->s -= s;
    tile->u += s;
}

void shift_t_down(Gfx *dl, u32 cmd, u16 t) {
    SetTileSize *tile = (SetTileSize *)dl;
    tile += cmd;
    tile->t -= t;
    tile->v += t;
}
