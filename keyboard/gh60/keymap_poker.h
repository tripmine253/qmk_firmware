static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * Poker Layer
     */
    /* Layer x000: Poker Default Layer
     * ,-----------------------------------------------------------.
     * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|
     * |-----------------------------------------------------------|
     * |Caps  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return  |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift     |
     * |-----------------------------------------------------------|
     * |Ctrl|Gui |Alt |      Space             |Fn  |Gui |App |Ctrl|
     * `-----------------------------------------------------------'
     */
    KEYMAP_ANSI(
        GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
        CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,  \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT, \
        LCTL,LGUI,LALT,          SPC,                     FN2, RGUI,APP, RCTL),
    /* Layer x001: Poker with Arrow */
    KEYMAP_ANSI(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          UP,   \
        TRNS,TRNS,TRNS,          TRNS,                    FN2, LEFT,DOWN,RGHT),
    /* Layer x010: Poker with Esc */
    KEYMAP_ANSI(
        ESC, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS, \
        TRNS,TRNS,TRNS,          TRNS,                    FN2, TRNS,TRNS,TRNS),
    /* Layer x011: Poker with Arrow and Esc */
    KEYMAP_ANSI(
        ESC, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          UP,   \
        TRNS,TRNS,TRNS,          TRNS,                    FN2, LEFT,DOWN,RGHT),
    /*
     * Poker Momentary Fn Layer
     */
    /* Layer x100: Poker Default + Fn'd */
    KEYMAP_ANSI(
        ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, TRNS, \
        TRNS,FN1, UP,  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,CALC,TRNS,HOME,INS, TRNS, \
        TRNS,LEFT,DOWN,RGHT,TRNS,TRNS,PSCR,SLCK,PAUS,TRNS,FN3, END,      TRNS, \
        TRNS,DEL, TRNS,WHOM,MUTE,VOLU,VOLD,TRNS,PGUP,PGDN,DEL,           TRNS, \
        TRNS,TRNS,TRNS,          FN0,                     FN2, TRNS,TRNS,TRNS),
    /* Layer x101: Poker with Arrow + Fn'd */
    KEYMAP_ANSI(
        ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, TRNS, \
        TRNS,FN1, UP,  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,CALC,TRNS,HOME,INS, TRNS, \
        TRNS,LEFT,DOWN,RGHT,TRNS,TRNS,PSCR,SLCK,PAUS,TRNS,FN3, END,      TRNS, \
        TRNS,DEL, TRNS,WHOM,MUTE,VOLU,VOLD,TRNS,PGUP,PGDN,DEL,           PGUP, \
        TRNS,TRNS,TRNS,          FN0,                     FN2, HOME,PGDN,END),
    /* Layer x110: Poker with Esc + Fn'd */
    KEYMAP_ANSI(
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, TRNS, \
        TRNS,FN1, UP,  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,CALC,TRNS,HOME,INS, TRNS, \
        TRNS,LEFT,DOWN,RGHT,TRNS,TRNS,PSCR,SLCK,PAUS,TRNS,FN3, END,      TRNS, \
        TRNS,DEL, TRNS,WHOM,MUTE,VOLU,VOLD,TRNS,PGUP,PGDN,DEL,           TRNS, \
        TRNS,TRNS,TRNS,          FN0,                     FN2, TRNS,TRNS,TRNS),
    /* Layer x111: Poker with Arrow and Esc + Fn'd */
    KEYMAP_ANSI(
        GRV, F9,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, TRNS, \
        TRNS,FN1, UP,  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,CALC,TRNS,HOME,INS, TRNS, \
        TRNS,LEFT,DOWN,RGHT,TRNS,TRNS,PSCR,SLCK,PAUS,TRNS,FN3, END,      TRNS, \
        TRNS,DEL, TRNS,WHOM,MUTE,VOLU,VOLD,TRNS,PGUP,PGDN,DEL,           PGUP, \
        TRNS,TRNS,TRNS,          FN0,                     FN2, HOME,PGDN,END),
    /* colemak */
    [8] = KEYMAP_ANSI(
        GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
        TAB, Q,   W,   F,   P,   G,   J,   L,   U,   Y,   SCLN,LBRC,RBRC,BSLS, \
        BSPC,A,   R,   S,   T,   D,   H,   N,   E,   I,   O,   QUOT,     ENT,  \
        LSFT,Z,   X,   C,   V,   B,   K,   M,   COMM,DOT, SLSH,          RSFT, \
        LCTL,LGUI,LALT,          SPC,                     FN2, RGUI,APP, RCTL),
    /* dvorak */
    KEYMAP_ANSI(
        GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   LBRC,RBRC,BSPC, \
        TAB, QUOT,COMM,DOT, P,   Y,   F,   G,   C,   R,   L,   SLSH,EQL, BSLS, \
        CAPS,A,   O,   E,   U,   I,   D,   H,   T,   N,   S,   MINS,     ENT,  \
        LSFT,SCLN,Q,   J,   K,   X,   B,   M,   W,   V,   Z,             RSFT, \
        LCTL,LGUI,LALT,          SPC,                     FN2, RGUI,APP, RCTL),
    /* workman */
    KEYMAP_ANSI(
        GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
        TAB, Q,   D,   R,   W,   B,   J,   F,   U,   P,   SCLN,LBRC,RBRC,BSLS, \
        BSPC,A,   S,   H,   T,   G,   Y,   N,   E,   O,   I,   QUOT,     ENT,  \
        LSFT,Z,   X,   M,   C,   V,   K,   L,   COMM,DOT, SLSH,          RSFT, \
        LCTL,LGUI,LALT,          SPC,                     FN2, RGUI,APP, RCTL),
};

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
    /* Poker Layout */
    [0] = ACTION_LAYER_BIT_TOGGLE(1),              // FN0 Poker Arrow toggle(Space)
    [1] = ACTION_LAYER_BIT_TOGGLE(2),              // FN1 Poker Esc toggle(Q)
    [2] = ACTION_LAYER_BIT(4),                     // FN2 Poker Fn
    [3] = ACTION_RMODS_KEY(MOD_BIT(KC_RCTL)|MOD_BIT(KC_RSFT), KC_ESC), // FN3 Task(RControl,RShift+Esc)
};

