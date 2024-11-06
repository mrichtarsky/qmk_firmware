#include QMK_KEYBOARD_H
#include "version.h"

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  HSV_39_242_219,
  HSV_41_255_255,
  HSV_234_255_255,
  HSV_152_255_255,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
  ST_MACRO_11,
  ST_MACRO_12,
};


enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
  DANCE_8,
  DANCE_9,
  DANCE_10,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    TG(6),          KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_LEFT_SHIFT,                                  KC_INSERT,      KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           TG(10),
    KC_ESCAPE,      KC_Q,           KC_W,           KC_F,           KC_P,           KC_G,           TD(DANCE_0),                                    LSFT(KC_F10),   KC_J,           KC_L,           KC_U,           KC_Y,           KC_P,           CW_TOGG,
    OSL(8),         KC_A,           KC_R,           KC_S,           KC_T,           KC_D,                                                                           KC_H,           KC_N,           KC_E,           KC_I,           KC_O,           OSL(8),
    MT(MOD_LCTL, KC_SLASH),KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           TD(DANCE_1),                                    KC_TAB,         KC_K,           KC_M,           ST_MACRO_0,     KC_COMMA,       KC_DOT,         TD(DANCE_2),
    KC_LEFT_GUI,    LCTL(LSFT(KC_M)),LALT(LCTL(KC_TAB)),MT(MOD_LALT, KC_UP),LT(6,KC_DOWN),                                                                                                  MT(MOD_RCTL, KC_LEFT),MT(MOD_LALT, KC_RIGHT),KC_TRANSPARENT, LSFT(KC_LEFT_ALT),KC_RIGHT_GUI,
                                                                                                    LCTL(KC_Z),     LCTL(LSFT(KC_Z)),TG(1),          TG(2),
                                                                                                                    LCTL(KC_F2),    TG(5),
                                                                                    LT(5,KC_SPACE), LT(3,KC_DELETE),OSL(7),         LGUI(KC_SPACE), LT(4,KC_BSPC),  LT(5,KC_ENTER)
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    HSV_39_242_219, HSV_41_255_255, HSV_234_255_255,KC_TRANSPARENT, HSV_152_255_255,                                                                                                RGB_SPD,        RGB_SPI,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    RGB_VAD,        RGB_VAI,        KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    TOGGLE_LAYER_COLOR,RGB_SAI,
                                                                                    RGB_SLD,        RGB_MODE_FORWARD,RGB_TOG,        RGB_SAD,        RGB_HUD,        RGB_HUI
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_PAGE_UP,     KC_MS_UP,       KC_PGDN,        KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_MS_BTN2,     KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_BTN1,     KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT,
    TD(DANCE_3),    KC_TRANSPARENT, LCTL(KC_X),     LCTL(KC_C),     LCTL(KC_V),     KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_DOWN,        KC_ENTER,       KC_SPACE,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_4),    KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_MEDIA_PREV_TRACK,KC_TRANSPARENT,
                                                                                                                    KC_AUDIO_MUTE,  KC_MEDIA_PLAY_PAUSE,
                                                                                    KC_WWW_BACK,    KC_WWW_FORWARD, KC_AUDIO_MUTE,  KC_MEDIA_STOP,  LGUI(LSFT(KC_S)),KC_TRANSPARENT
  ),
  [3] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_PLUS,        KC_MINUS,       KC_ASTR,        KC_ASTR,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_EQUAL,       KC_LPRN,        KC_LBRC,        KC_LCBR,        KC_LABK,        KC_PIPE,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_SLASH,       KC_RPRN,        KC_RBRC,        KC_RCBR,        KC_RABK,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_COLN,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BSLS,        KC_SLASH
  ),
  [4] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_1,     ST_MACRO_2,     KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_PIPE,        KC_EXLM,        KC_QUES,        KC_UNDS,        KC_MINUS,       LSFT(KC_3),                                                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_AMPR,        KC_PERC,        KC_DLR,         KC_AT,          ST_MACRO_3,     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_EQUAL,                                                                                                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_COLN,        KC_SCLN,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SLASH
  ),
  [5] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(KC_F4),                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, ST_MACRO_4,     LSFT(KC_PAGE_UP),LSFT(KC_UP),    LSFT(KC_PGDN),  ST_MACRO_5,     TD(DANCE_5),                                    KC_TRANSPARENT, ST_MACRO_6,     KC_PAGE_UP,     KC_UP,          KC_PGDN,        ST_MACRO_7,     KC_TRANSPARENT,
    LALT(KC_UP),    LSFT(KC_HOME),  LSFT(KC_LEFT),  LSFT(KC_DOWN),  LSFT(KC_RIGHT), LSFT(KC_END),                                                                   KC_HOME,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_END,         KC_TRANSPARENT,
    LALT(KC_DOWN),  LCTL(LSFT(KC_HOME)),LCTL(KC_D),     LCTL(LSFT(KC_LEFT)),LCTL(LSFT(KC_RIGHT)),LCTL(LSFT(KC_END)),LCTL(KC_M),                                     KC_TRANSPARENT, LCTL(KC_HOME),  LCTL(KC_LEFT),  LCTL(KC_RIGHT), KC_TRANSPARENT, LCTL(KC_END),   KC_TRANSPARENT,
    KC_TRANSPARENT, LALT(KC_W),     LALT(KC_D),     LCTL(KC_BSPC),  LCTL(KC_DELETE),                                                                                                LALT(KC_B),     LALT(KC_F),     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, LCTL(KC_C),     LCTL(KC_X),     KC_TRANSPARENT, LCTL(KC_V),     KC_TRANSPARENT
  ),
  [6] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, TD(DANCE_6),    LALT(LGUI(LCTL(KC_F))),TD(DANCE_7),    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_A,           KC_B,           KC_C,           KC_D,           KC_TRANSPARENT,
    LGUI(KC_UP),    LALT(LGUI(KC_LEFT)),LALT(LGUI(KC_RIGHT)),LALT(LGUI(KC_BSPC)),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_E,           KC_TRANSPARENT,
    LALT(KC_ESCAPE),KC_SLASH,       KC_ASTR,        KC_MINUS,       KC_PLUS,        KC_EQUAL,                                                                       KC_TRANSPARENT, KC_4,           KC_5,           KC_6,           KC_F,           KC_ENTER,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_DOT,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_8),    KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_0,           KC_TRANSPARENT, KC_TRANSPARENT, KC_COMMA,       KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_F1),    LCTL(LSFT(KC_F1)),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 ST_MACRO_8,     KC_F1,          LCTL(LSFT(KC_E)),LCTL(LSFT(KC_H)),RCTL(KC_P),     KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_SCLN),  LCTL(KC_QUOTE), ST_MACRO_9,     ST_MACRO_10,    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 LCTL(KC_COMMA), KC_TRANSPARENT, LALT(LCTL(KC_A)),LALT(LCTL(KC_C)),KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_EXLM,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, LSFT(KC_Q),     LSFT(KC_W),     LSFT(KC_F),     LSFT(KC_P),     LSFT(KC_G),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LSFT(KC_J),     LSFT(KC_L),     LSFT(KC_U),     LSFT(KC_Y),     LSFT(KC_P),     KC_TRANSPARENT,
    KC_TRANSPARENT, LSFT(KC_A),     LSFT(KC_R),     LSFT(KC_S),     LSFT(KC_T),     LSFT(KC_D),                                                                     LSFT(KC_H),     LSFT(KC_N),     LSFT(KC_E),     LSFT(KC_I),     LSFT(KC_O),     MT(MOD_LSFT, KC_2),
    KC_TRANSPARENT, LSFT(KC_Z),     LSFT(KC_X),     LSFT(KC_C),     LSFT(KC_V),     LSFT(KC_B),     ST_MACRO_11,                                    LSFT(KC_TAB),   LSFT(KC_K),     LSFT(KC_M),     ST_MACRO_12,    MT(MOD_LSFT, KC_SCLN),KC_COLN,        KC_TRANSPARENT,
    KC_TRANSPARENT, LSFT(KC_HOME),  LSFT(KC_PAGE_UP),LSFT(KC_UP),    LSFT(KC_DOWN),                                                                                                  LSFT(KC_LEFT),  LSFT(KC_RIGHT), LSFT(KC_PGDN),  LSFT(KC_END),   KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    LSFT(KC_SPACE), KC_TRANSPARENT, KC_TRANSPARENT, LSFT(KC_TAB),   KC_TRANSPARENT, LSFT(KC_ENTER)
  ),
  [9] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, RALT(RSFT(KC_A)),RALT(RSFT(KC_O)),RALT(RSFT(KC_U)),KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, RALT(KC_S),     RALT(KC_A),     RALT(KC_O),     RALT(KC_U),     KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RALT(RSFT(KC_4)),RALT(KC_5),     KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [10] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT,
    KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_COLN,        KC_RIGHT_SHIFT,
    KC_BSLS,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_QUES,        KC_TRANSPARENT,
    KC_LEFT_CTRL,   KC_LEFT_GUI,    TD(DANCE_9),    KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_RIGHT_ALT,   KC_RIGHT_GUI,   KC_RIGHT_CTRL,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [11] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_F21,         KC_F22,         KC_F23,         KC_F24,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_F16,         KC_F17,         KC_F18,         KC_F19,         KC_F20,
    KC_LEFT_SHIFT,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,
    KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_10),   KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_F11,         KC_F12,         KC_F13,         KC_F14,         KC_F15,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};




extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {74,255,255}, {234,255,255}, {41,255,255} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {41,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {0,0,0}, {41,255,255}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {24,218,204} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,171,230}, {140,218,204}, {74,255,255}, {140,218,204}, {139,171,230}, {47,218,204}, {74,255,255}, {74,255,255}, {74,255,255}, {47,218,204}, {129,218,204}, {88,248,230}, {88,248,230}, {0,0,0}, {129,218,204}, {88,248,230}, {88,248,230}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {39,212,190}, {140,218,204}, {74,255,255}, {140,218,204}, {39,212,190}, {47,218,204}, {74,255,255}, {74,255,255}, {74,255,255}, {47,218,204}, {41,255,255}, {63,218,204}, {63,218,204}, {3,218,204}, {41,255,255}, {3,218,204}, {3,218,204}, {3,218,204}, {3,218,204} },

    [6] = { {0,0,0}, {93,165,246}, {93,165,246}, {93,165,246}, {93,165,246}, {0,0,0}, {129,218,204}, {129,218,204}, {129,218,204}, {93,165,246}, {0,0,0}, {129,218,204}, {129,218,204}, {129,218,204}, {93,165,246}, {0,0,0}, {129,218,204}, {129,218,204}, {129,218,204}, {42,105,247}, {129,218,204}, {0,0,0}, {0,0,0}, {42,105,247}, {0,0,0}, {0,0,0}, {170,218,204}, {170,218,204}, {170,218,204}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {184,249,237}, {93,165,246}, {249,102,247}, {88,248,230}, {249,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [9] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [11] = { {0,0,0}, {46,218,204}, {46,218,204}, {46,218,204}, {46,218,204}, {0,0,0}, {46,218,204}, {46,218,204}, {46,218,204}, {46,218,204}, {0,0,0}, {139,171,230}, {139,171,230}, {139,171,230}, {139,171,230}, {0,0,0}, {139,171,230}, {139,171,230}, {139,171,230}, {139,171,230}, {139,171,230}, {139,171,230}, {139,171,230}, {139,171,230}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 9:
      set_layer_color(9);
      break;
    case 11:
      set_layer_color(11);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_QUOTE) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_GRAVE)) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_GRAVE) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_6)) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_UP)) SS_DELAY(100) SS_LSFT(SS_TAP(X_UP)) SS_DELAY(100) SS_LSFT(SS_TAP(X_UP)) SS_DELAY(100) SS_LSFT(SS_TAP(X_UP)) SS_DELAY(100) SS_LSFT(SS_TAP(X_UP)));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_DOWN)) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOWN)) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOWN)) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOWN)) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOWN)));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_UP) SS_DELAY(100) SS_TAP(X_UP) SS_DELAY(100) SS_TAP(X_UP) SS_DELAY(100) SS_TAP(X_UP) SS_DELAY(100) SS_TAP(X_UP));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_DOWN) SS_DELAY(100) SS_TAP(X_DOWN) SS_DELAY(100) SS_TAP(X_DOWN) SS_DELAY(100) SS_TAP(X_DOWN) SS_DELAY(100) SS_TAP(X_DOWN));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_K)) SS_DELAY(100) SS_LCTL(SS_TAP(X_P)));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_K)) SS_DELAY(100) SS_LCTL(SS_TAP(X_C)));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_K)) SS_DELAY(100) SS_LCTL(SS_TAP(X_U)));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_TAB) SS_TAP(X_RIGHT) ));
    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_QUOTE)) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_39_242_219:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(39,242,219);
      }
      return false;
    case HSV_41_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(41,255,255);
      }
      return false;
    case HSV_234_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(234,255,255);
      }
      return false;
    case HSV_152_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(152,255,255);
      }
      return false;
  }
  return true;
}

uint16_t layer_state_set_user(uint16_t state) {
    uint8_t layer = biton16(state);
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[11];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_HOLD: layer_on(11); break;
        case DOUBLE_TAP: layer_move(2); break;
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_HOLD:
          layer_off(11);
        break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(KC_TAB));
        tap_code16(LALT(KC_TAB));
        tap_code16(LALT(KC_TAB));
    }
    if(state->count > 3) {
        tap_code16(LALT(KC_TAB));
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(LALT(KC_TAB)); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(KC_TAB))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(KC_TAB)); register_code16(LALT(KC_TAB));
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(LALT(KC_TAB)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(KC_TAB))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(KC_TAB)); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DQUO);
        tap_code16(KC_DQUO);
        tap_code16(KC_DQUO);
    }
    if(state->count > 3) {
        tap_code16(KC_DQUO);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_DQUO); break;
        case SINGLE_HOLD: layer_on(9); break;
        case DOUBLE_TAP: register_code16(KC_DQUO); register_code16(KC_DQUO); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DQUO); register_code16(KC_DQUO);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_DQUO); break;
        case SINGLE_HOLD:
          layer_off(9);
        break;
        case DOUBLE_TAP: unregister_code16(KC_DQUO); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DQUO); break;
    }
    dance_state[2].step = 0;
}
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case DOUBLE_TAP: layer_move(0); break;
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
    }
    dance_state[3].step = 0;
}
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case DOUBLE_TAP: layer_move(0); break;
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_J));
        tap_code16(LCTL(KC_J));
        tap_code16(LCTL(KC_J));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_J));
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_J)); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_ALT); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_J)); register_code16(LCTL(KC_J)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_J)); register_code16(LCTL(KC_J));
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_J)); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_ALT); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_J)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_J)); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(tap_dance_state_t *state, void *user_data);
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void on_dance_6(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(LGUI(KC_S))));
        tap_code16(LALT(LCTL(LGUI(KC_S))));
        tap_code16(LALT(LCTL(LGUI(KC_S))));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(LGUI(KC_S))));
    }
}

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(LGUI(KC_S)))); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(LGUI(KC_E)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(LGUI(KC_S)))); register_code16(LALT(LCTL(LGUI(KC_S))));
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(LGUI(KC_S)))); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(LGUI(KC_E)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(LGUI(KC_S)))); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(tap_dance_state_t *state, void *user_data);
void dance_7_finished(tap_dance_state_t *state, void *user_data);
void dance_7_reset(tap_dance_state_t *state, void *user_data);

void on_dance_7(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(LGUI(KC_G))));
        tap_code16(LALT(LCTL(LGUI(KC_G))));
        tap_code16(LALT(LCTL(LGUI(KC_G))));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(LGUI(KC_G))));
    }
}

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(LGUI(KC_G)))); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(LGUI(KC_R)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(LGUI(KC_G)))); register_code16(LALT(LCTL(LGUI(KC_G))));
    }
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(LGUI(KC_G)))); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(LGUI(KC_R)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(LGUI(KC_G)))); break;
    }
    dance_state[7].step = 0;
}
void dance_8_finished(tap_dance_state_t *state, void *user_data);
void dance_8_reset(tap_dance_state_t *state, void *user_data);

void dance_8_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case DOUBLE_TAP: layer_move(0); break;
    }
}

void dance_8_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
    }
    dance_state[8].step = 0;
}
void on_dance_9(tap_dance_state_t *state, void *user_data);
void dance_9_finished(tap_dance_state_t *state, void *user_data);
void dance_9_reset(tap_dance_state_t *state, void *user_data);

void on_dance_9(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LEFT_ALT);
        tap_code16(KC_LEFT_ALT);
        tap_code16(KC_LEFT_ALT);
    }
    if(state->count > 3) {
        tap_code16(KC_LEFT_ALT);
    }
}

void dance_9_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[9].step = dance_step(state);
    switch (dance_state[9].step) {
        case SINGLE_TAP: register_code16(KC_LEFT_ALT); break;
        case DOUBLE_TAP: layer_move(0); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LEFT_ALT); register_code16(KC_LEFT_ALT);
    }
}

void dance_9_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[9].step) {
        case SINGLE_TAP: unregister_code16(KC_LEFT_ALT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LEFT_ALT); break;
    }
    dance_state[9].step = 0;
}
void dance_10_finished(tap_dance_state_t *state, void *user_data);
void dance_10_reset(tap_dance_state_t *state, void *user_data);

void dance_10_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[10].step = dance_step(state);
    switch (dance_state[10].step) {
        case DOUBLE_TAP: layer_move(0); break;
    }
}

void dance_10_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[10].step) {
    }
    dance_state[10].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
        [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_8_finished, dance_8_reset),
        [DANCE_9] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_9, dance_9_finished, dance_9_reset),
        [DANCE_10] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_10_finished, dance_10_reset),
};
