/*
 * Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

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
#define CTLX LCTL(KC_X)
#define CTLR LCTL(KC_R)
#define CTLD LCTL(KC_D)
#define CTLU LCTL(KC_U)

#define ARLF KC_LEFT
#define ARDN KC_DOWN
#define ARUP KC_UP
#define ARRT KC_RIGHT

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT_split_3x5_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          LYR3, LYR2  ,  KC_SPC,        KC_LSFT, LYR1 , LYR3
                                      //`--------------------------'  `--------------------------'

  ),

  [1] = LAYOUT_split_3x5_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
    NACC,    NACC,    NACC,    NACC,    KC_GRV,          KC_EQL,  KC_7,    KC_8,    KC_9,    KC_0,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    QGUI,    QSFT,    QCTL,    QALT,    KC_BSLS,         KC_MINS, KC_4,    KC_5,    KC_6,    KC_LBRC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    NACC,    NACC,    NACC,    NACC,    NACC,            KC_QUOT, KC_1,    KC_2,    KC_3,    KC_RBRC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                               KC_CAPS, LYR2,  KC_SPC,     TRNS, TRNS, TRNS
                                      //`--------------------------'  `--------------------------'
  ),

  [2] = LAYOUT_split_3x5_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
    NACC,    NACC,    NACC,    CTLR,    NACC,            NACC,    CTLD,    CTLU,    NACC,    NACC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    PGUI,    PSFT,    PCTL,    PALT,    NACC,            NACC,    KC_ESC,  KC_TAB,  KC_BSPC, NACC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    CTLZ,    CTLX,    CTLC,    CTLV,    NACC,            ARLF,    ARDN,    ARUP,    ARRT,    NACC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          TRNS,  TRNS,  TRNS,     KC_ENT, TRNS, TRNS
                                      //`--------------------------'  `--------------------------'
  ),

  [3] = LAYOUT_split_3x5_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
    KC_MUTE, KC_VOLD, KC_VOLU, NACC,    KC_HOME,         KC_DEL,  KC_F7,   KC_F8,   KC_F9,   KC_F10,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    QGUI,    QSFT,    QCTL,    QALT,    KC_PGUP,         KC_INS,  KC_F4,   KC_F5,   KC_F6,   KC_F11,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    NACC,    NACC,    NACC,    NACC,    KC_PGDN,         KC_PSCR, KC_F1,   KC_F2,   KC_F3,   KC_F12,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          TRNS,  TRNS, TRNS,     TRNS, TRNS, TRNS
                                      //`--------------------------'  `--------------------------'
  )
};
