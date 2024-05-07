// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H

#define KC_CTSC RCTL_T(KC_SCLN)
#define KC_CTLA LCTL_T(KC_A)
#define KC_LSHZ LSFT_T(KC_Z)
#define KC_RLSH RSFT_T(KC_SLSH)
#define KC_SPM2 LT(2, KC_SPC)
#define KC_BSM1 LT(1, KC_BSPC)
#define KC_GUTA GUI_T(KC_TAB)
#define KC_CLGV CTL_T(KC_GRV)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,            KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,            KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,            KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
                                    MO(2), KC_SPC, KC_LSFT, MO(1)
  ),

  [1] = LAYOUT(
    KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_GRV,          KC_EQL,    KC_7,    KC_8,    KC_9,    KC_0,
    OSM(MOD_RGUI), OSM(MOD_RSFT), OSM(MOD_LCTL), OSM(MOD_LALT), KC_BSLS,         KC_MINS,   KC_4,    KC_5,    KC_6,    KC_LBRC,
    KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,           KC_QUOT,   KC_1,    KC_2,    KC_3,    KC_RBRC,
                                                        MO(3), KC_SPC,   KC_NO, KC_TRNS
  ),

  [2] = LAYOUT(
    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,            KC_NO,    LCTL(KC_D), LCTL(KC_U), KC_NO,     KC_NO,
    KC_RGUI,  MOD_RSFT,  KC_LCTL,  KC_LALT,  KC_NO,            KC_NO,    KC_ESC,     KC_TAB,     KC_BSPC,   KC_NO,
    KC_NO,    KC_NO,    KC_NO,    LCTL(KC_V),    KC_NO,       KC_LEFT, KC_DOWN,    KC_UP,      KC_RIGHT,  KC_NO,
                                       KC_TRNS, KC_NO,     KC_ENT, MO(3)
  ),

  [3] = LAYOUT(
    KC_MUTE,  KC_VOLD, KC_VOLU, KC_TRNS, KC_HOME,         KC_DEL,  KC_F7,  KC_F8,  KC_F9,  KC_F10,
    KC_RGUI,  MOD_RSFT, KC_LCTL, KC_LALT, KC_PGUP,         KC_INS,  KC_F4,  KC_F5,  KC_F6,  KC_F11,
    KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_PGDN,         KC_PSCR, KC_F1,  KC_F2,  KC_F3,  KC_F12,
                                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),
};
