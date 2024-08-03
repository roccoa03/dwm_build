static const char norm_fg[] = "#a89984";
static const char norm_bg[] = "#282828";
static const char norm_border[] = "#1d2021";

static const char sel_bg[] = "#282828";
static const char sel_fg[] = "#a89984";
static const char sel_border[] = "#689d6a";

static const char urg_fg[] = "#cc241d";
static const char urg_bg[] = "#282828";
static const char urg_border[] = "#484F56";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win

};
