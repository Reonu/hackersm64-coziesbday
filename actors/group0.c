#include <ultra64.h>
#include "sm64.h"
#include "surface_terrains.h"
#include "geo_commands.h"

#include "make_const_nonconst.h"

// Note: This bin does not use bin IDs, unlike the other segmented bins.
#include "mario/model.inc.c"

#include "bubble/model.inc.c"

#include "walk_smoke/model.inc.c"

#include "burn_smoke/model.inc.c"

#include "small_water_splash/model.inc.c"

#include "water_wave/model.inc.c"

#include "sparkle/model.inc.c"

#include "water_splash/model.inc.c"

#include "white_particle_small/model.inc.c"

#include "sparkle_animation/model.inc.c"

#ifdef S2DEX_TEXT_ENGINE
#include "src/s2d_engine/config.h"
#include FONT_C_FILE
#endif
#include "lantern/model.inc.c"

#include "treasure_chest/model.inc.c"
#include "lantern2/model.inc.c"
#include "blue_mushroom/model.inc.c"
#include "toad2/model.inc.c"
#include "toad2/anims/data.inc.c"
#include "toad2/anims/table.inc.c"
#include "surfboard/model.inc.c"
#include "blue_mushroom_alt/model.inc.c"

#include "bully/model.inc.c"
#include "bully/anims/data.inc.c"
#include "bully/anims/table.inc.c"

#include "snowman/model.inc.c"
#include "snowman/anims/data.inc.c"
#include "snowman/anims/table.inc.c"
#include "koopa_with_shell_custom/model.inc.c"

#include "koopa/model.inc.c"
#include "koopa/anims/data.inc.c"
#include "koopa/anims/table.inc.c"

#include "bomb/model.inc.c"
#include "floating_cloud/model.inc.c"
#include "floating_cloud/collision.inc.c"
#include "island/model.inc.c"
#include "floating_box/model.inc.c"
#include "floating_box/collision.inc.c"

#include "actors/reonus_pfp/textures.inc.c"
#include "reonus_pfp/model.inc.c"
#include "puzzle_yellow/model.inc.c"
#include "puzzle_green/model.inc.c"
#include "puzzle_red/model.inc.c"
#include "puzzle_blue/model.inc.c"
#include "doge/model.inc.c"