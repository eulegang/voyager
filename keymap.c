#include QMK_KEYBOARD_H

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL

/* custom key combos */

#define MO_G LT(LT_SYM, KC_G)
#define MO_S MT(MOD_LALT, KC_S)
#define MO_D MT(MOD_LGUI, KC_D)
#define MO_F MT(MOD_LCTL, KC_F)
#define MO_A MT(MOD_LSFT, KC_A)
#define MO_E MT(MOD_LSFT, KC_E)

#define MO_H LT(LT_SYM, KC_H)
#define MO_J MT(MOD_RCTL, KC_J)
#define MO_K MT(MOD_RGUI, KC_K)
#define MO_L MT(MOD_RALT, KC_L)
#define MO_SCLN MT(MOD_RSFT, KC_SCLN)
#define MO_I MT(MOD_RSFT, KC_I)

#define MO_R LT(LT_NAV, KC_R)
#define MO_U LT(LT_NAV, KC_U)

#define MO_QUOTE  MT(MOD_RSFT, KC_QUOTE)
#define MO_ESC    LT(MOD_LSFT, KC_ESCAPE)

#define MO_SPACE    LT(1, KC_SPACE)
#define MO_ENTER    LT(1, KC_ENTER)
#define US_MOD      TD(TD_TG_MOD)

enum Layer {
  LT_BASE,
  LT_BASE_NO_MOD,
  LT_SYM,
  LT_NAV,
};

enum TD_KEYS {
  TD_TG_MOD,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [LT_BASE] = LAYOUT_voyager(
    KC_EQUAL,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
    KC_TAB,         KC_Q,           KC_W,           MO_E,           MO_R,           KC_T,                                           KC_Y,           MO_U,           MO_I,           KC_O,           KC_P,           KC_BSLS,
    MO_ESC,         MO_A,           MO_S,           MO_D,           MO_F,           MO_G,                                           MO_H,           MO_J,           MO_K,           MO_L,           MO_SCLN,        MO_QUOTE,
    KC_LSFT,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSFT,
                                                                                    KC_BSPC,  KC_SPACE,                 KC_ENTER,   KC_ESCAPE
  ),

  [LT_BASE_NO_MOD] = LAYOUT_voyager(
    KC_TRNS,        KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,
    KC_ESC,         KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,
    KC_LSFT,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSFT,
                                                                                    KC_BSPC,  KC_SPACE,                 KC_ENTER,   KC_ESCAPE
  ),


  [LT_SYM] = LAYOUT_voyager(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    KC_GRAVE,       KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_EXLM,                                        KC_MINUS,       KC_7,           KC_8,           KC_9,           KC_SLASH,       KC_F12,
    KC_TRANSPARENT, KC_CIRC,        KC_AMPR,        KC_LPRN,        KC_RPRN,        KC_GRV,                                         KC_PLUS,        KC_4,           KC_5,           KC_6,           KC_ASTR,        KC_TRNS,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRNS,        KC_LBRC,        KC_RBRC,        KC_TILD,                                        KC_DOT,         KC_1,           KC_2,           KC_3,           KC_EQUAL,       KC_ENTER,
                                                                                    KC_TRNS,    KC_TRNS,                KC_TRNS,    KC_0
  ),

  [LT_NAV] = LAYOUT_voyager(
    KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,                                        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,
    KC_TRNS,        KC_LALT,        KC_LGUI,        KC_LCTL,        KC_TRNS,        KC_TRNS,                                        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,
    KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,                                        KC_LEFT,        KC_DOWN,        KC_UP  ,        KC_RGHT,        KC_TRNS,        KC_TRNS,
    KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,                                        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,
                                                                                    KC_TRNS,    KC_TRNS,                KC_TRNS,    KC_0
  ),
};


tap_dance_action_t tap_dance_actions[] = {
  [TD_TG_MOD] = ACTION_TAP_DANCE_LAYER_TOGGLE(KC_NO, LT_BASE_NO_MOD),
};
