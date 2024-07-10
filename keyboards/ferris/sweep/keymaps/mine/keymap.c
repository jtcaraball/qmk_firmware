// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H

#define QGUI KC_RGUI
#define QSFT KC_RSFT
#define QCTL KC_LCTL
#define QALT KC_LALT

#define PGUI OSM(MOD_RGUI)
#define PSFT OSM(MOD_RSFT)
#define PCTL OSM(MOD_LCTL)
#define PALT OSM(MOD_LALT)

#define NACC KC_NO
#define TRNS KC_TRNS

#define LYR1 MO(1)
#define LYR2 MO(2)
#define LYR3 MO(3)

#define CTLC LCTL(KC_C)
#define CTLV LCTL(KC_V)
#define CTLZ LCTL(KC_Z)
#define CTLR LCTL(KC_R)
#define CTLD LCTL(KC_D)
#define CTLU LCTL(KC_U)

#define ARLF KC_LEFT
#define ARDN KC_DOWN
#define ARUP KC_UP
#define ARRT KC_RIGHT

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,            KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,            KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,            KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
                                    LYR2, KC_SPC, KC_LSFT, LYR1
  ),

  [1] = LAYOUT(
    NACC,    NACC,    NACC,    NACC,    KC_GRV,          KC_EQL,  KC_7,    KC_8,    KC_9,    KC_0,
    QGUI,    QSFT,    QCTL,    QALT,    KC_BSLS,         KC_MINS, KC_4,    KC_5,    KC_6,    KC_LBRC,
    NACC,    NACC,    NACC,    NACC,    NACC,            KC_QUOT, KC_1,    KC_2,    KC_3,    KC_RBRC,
                                    LYR2, KC_SPC,   LYR3, TRNS
  ),

  [2] = LAYOUT(
    NACC,    NACC,    NACC,    CTLR,    NACC,            NACC,    CTLD,    CTLU,    NACC,    NACC,
    PGUI,    PSFT,    PCTL,    PALT,    NACC,            NACC,    KC_ESC,  KC_TAB,  KC_BSPC, NACC,
    CTLZ,    NACC,    CTLC,    CTLV,    NACC,            ARLF,    ARDN,    ARUP,    ARRT,    NACC,
                                     TRNS, LYR3,     KC_ENT, TRNS
  ),

  [3] = LAYOUT(
    KC_MUTE, KC_VOLD, KC_VOLU, NACC,    KC_HOME,         KC_DEL,  KC_F7,   KC_F8,   KC_F9,   KC_F10,
    QGUI,    QSFT,    QCTL,    QALT,    KC_PGUP,         KC_INS,  KC_F4,   KC_F5,   KC_F6,   KC_F11,
    NACC,    NACC,    NACC,    NACC,    KC_PGDN,         KC_PSCR, KC_F1,   KC_F2,   KC_F3,   KC_F12,
                                        TRNS, NACC,  NACC, TRNS
  ),
};
