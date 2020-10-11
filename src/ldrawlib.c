#include <stdio.h>
#include <time.h>

#include "lprefix.h"

#include "lua.h"

#include "lauxlib.h"
#include "lualib.h"

#include <SDL2/SDL.h>

static int draw_setscreen (lua_State *L) { return 1; }

static int draw_settitle (lua_State *L) { return 1; }

static int draw_showtitle (lua_State *L) { return 1; }

static int draw_clear (lua_State *L) { return 1; }

static int draw_getsize (lua_State *L) { if (L) { } return 1; }

static int draw_getport (lua_State *L) { if (L) { } return 1; }

static int draw_point (lua_State *L) { if (L) { } return 1; }

static int draw_moveto (lua_State *L) { if (L) { } return 1; }

static int draw_lineto (lua_State *L) { if (L) { } return 1; }

static int draw_line (lua_State *L) { if (L) { } return 1; }

static int draw_rect (lua_State *L) { if (L) { } return 1; }

static int draw_fillrect (lua_State *L) { if (L) { } return 1; }

static int draw_circle (lua_State *L) { if (L) { } return 1; }

static int draw_fillcircle (lua_State *L) { if (L) { } return 1; }

static int draw_arc (lua_State *L) { if (L) { } return 1; }

static int draw_fillarc (lua_State *L) { if (L) { } return 1; }

static int draw_ellipse (lua_State *L) { if (L) { } return 1; }

static int draw_fillellipse (lua_State *L) { if (L) { } return 1; }

static int draw_polygon (lua_State *L) { if (L) { } return 1; }

static int draw_fillpolygon (lua_State *L) { if (L) { } return 1; }

static int draw_star (lua_State *L) { if (L) { } return 1; }

static int draw_fillstar (lua_State *L) { if (L) { } return 1; }

static int draw_triangle (lua_State *L) { if (L) { } return 1; }

static int draw_filltriangle (lua_State *L) { if (L) { } return 1; }

static int draw_roundedrect (lua_State *L) { if (L) { } return 1; }

static int draw_fillroundedrect (lua_State *L) { if (L) { } return 1; }

static int draw_string (lua_State *L) { if (L) { } return 1; }

static int draw_stringsize (lua_State *L) { if (L) { } return 1; }

static int draw_stringinrect (lua_State *L) { if (L) { } return 1; }

static int draw_setfont (lua_State *L) { if (L) { } return 1; }

static int draw_setlinestyle (lua_State *L) { if (L) { } return 1; }

static int draw_setantialias (lua_State *L) { if (L) { } return 1; }

static int draw_getantialias (lua_State *L) { if (L) { } return 1; }

static int draw_sleep (lua_State *L) { return 1; }

static int draw_gettime (lua_State *L) { if (L) { } return 1; }

static int draw_beginframe (lua_State *L) { if (L) { } return 1; }

static int draw_endframe (lua_State *L) { return 1; }

static int draw_setrefresh (lua_State *L) { if (L) { } return 1; }

static int draw_disablerefresh (lua_State *L) { if (L) { } return 1; }

static int draw_enablerefresh (lua_State *L) { if (L) { } return 1; }

static int draw_refresh (lua_State *L) { if (L) { } return 1; }

static int draw_waittouch (lua_State *L) { if (L) { } return 1; }

static int draw_tracktouches (lua_State *L) { if (L) { } return 1; }

static int draw_doevents (lua_State *L) { if (L) { } return 1; }

static int draw_clearevents (lua_State *L) { if (L) { } return 1; }

static int draw_clearscreen (lua_State *L) { if (L) { } return 1; }

static int draw_clearrect (lua_State *L) { if (L) { } return 1; }

static int draw_setclearcolor (lua_State *L) { if (L) { } return 1; }

static int draw_setclip (lua_State *L) { if (L) { } return 1; }

static int draw_clearclip (lua_State *L) { if (L) { } return 1; }

static int draw_image (lua_State *L) { if (L) { } return 1; }

static int draw_tiledimage (lua_State *L) { if (L) { } return 1; }

static int draw_transformedimage (lua_State *L) { if (L) { } return 1; }

static int draw_subimage (lua_State *L) { if (L) { } return 1; }

static int draw_cacheimage (lua_State *L) { if (L) { } return 1; }

static int draw_removeimage (lua_State *L) { if (L) { } return 1; }

static int draw_imagesave (lua_State *L) { if (L) { } return 1; }

static int draw_startaccelerometers (lua_State *L) { if (L) { } return 1; }

static int draw_stopaccelerometers (lua_State *L) { if (L) { } return 1; }

static int draw_accelerometers (lua_State *L) { if (L) { } return 1; }

static int draw_startgyro (lua_State *L) { if (L) { } return 1; }

static int draw_stopgyro (lua_State *L) { if (L) { } return 1; }

static int draw_gyro (lua_State *L) { if (L) { } return 1; }

static int draw_touchbegan (lua_State *L) { if (L) { } return 1; }

static int draw_touchended (lua_State *L) { if (L) { } return 1; }

static int draw_touchmoved (lua_State *L) { if (L) { } return 1; }

static const luaL_Reg drawlib[] = {
    {"setscreen", draw_setscreen},
    {"settitle", draw_settitle},
    {"showtitle", draw_showtitle},
    {"clear", draw_clear},
    {"getsize", draw_getsize},
    {"getport", draw_getport},
    {"point", draw_point},
    {"moveto", draw_moveto},
    {"lineto", draw_lineto},
    {"line", draw_line},
    {"rect", draw_rect},
    {"fillrect", draw_fillrect},
    {"circle", draw_circle},
    {"fillcircle", draw_fillcircle},
    {"arc", draw_arc},
    {"fillarc", draw_fillarc},
    {"ellipse", draw_ellipse},
    {"fillellipse", draw_fillellipse},
    {"polygon", draw_polygon},
    {"fillpolygon", draw_fillpolygon},
    {"star", draw_star},
    {"fillstar", draw_fillstar},
    {"triangle", draw_triangle},
    {"filltriangle", draw_filltriangle},
    {"roundedrect", draw_roundedrect},
    {"fillroundedrect", draw_fillroundedrect},
    {"string", draw_string},
    {"stringsize", draw_stringsize},
    {"stringinrect", draw_stringinrect},
    {"setfont", draw_setfont},
    {"setlinestyle", draw_setlinestyle},
    {"setantialias", draw_setantialias},
    {"getantialias", draw_getantialias},
    {"sleep", draw_sleep},
    {"gettime", draw_gettime},
    {"beginframe", draw_beginframe},
    {"endframe", draw_endframe},
    {"setrefresh", draw_setrefresh},
    {"disablerefresh", draw_disablerefresh},
    {"enablerefresh", draw_enablerefresh},
    {"refresh", draw_refresh},
    {"waittouch", draw_waittouch},
    {"doevents", draw_doevents},
    {"clearevents", draw_clearevents},
    {"clearscreen", draw_clearscreen},
    {"clearrect", draw_clearrect},
    {"setclearcolor", draw_setclearcolor},
    {"setclip", draw_setclip},
    {"clearclip", draw_clearclip},
    {"image", draw_image},
    {"tiledimage", draw_tiledimage},
    {"transformedimage", draw_transformedimage},
    {"subimage", draw_subimage},
    {"cacheimage", draw_cacheimage},
    {"removeimage", draw_removeimage},
    {"imagesave", draw_imagesave},
    {"startaccelerometers", draw_startaccelerometers},
    {"stopaccelerometers", draw_stopaccelerometers},
    {"accelerometers", draw_accelerometers},
    {"startgyro", draw_startgyro},
    {"stopgyro", draw_stopgyro},
    {"gyro", draw_gyro},
    {"touchbegan", draw_touchbegan},
    {"touchmoved", draw_touchmoved},
    {"touchended", draw_touchended},
    /* placeholders */
    {"white", NULL},
    {"black", NULL},
    {"red", NULL},
    {"green", NULL},
    {"blue", NULL},
    {"cyan", NULL},
    {"magenta", NULL},
    {"orange", NULL},
    {"purple", NULL},
    {"yellow", NULL},
    {"brown", NULL},
    {"gray", NULL},
    {"darkgray", NULL},
    {"lightgray", NULL},
    {NULL, NULL}
};

/*
** Open draw library
*/
LUAMOD_API int luaopen_draw (lua_State *L) {
    luaL_newlib(L, drawlib);
    
    return 1;
}
