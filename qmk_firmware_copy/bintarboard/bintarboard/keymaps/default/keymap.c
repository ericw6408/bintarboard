// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
// generated using gpt-3, edited by hand

#include QMK_KEYBOARD_H

enum layers {
    _BASE,
    _FN,
    _TTRS
};

// _BASE is typical layer, _FN is toggled functional layer (extra keys, numpad), TTRS is tetris layer.

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Base layer
    [_BASE] = LAYOUT_60_ansi(
        // Row 0
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        // Row 1
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        // Row 2
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT, KC_TRNS,
        // Row 3
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_TRNS, KC_RSFT, KC_TRNS,
        // Row 4
        KC_LCTL, KC_LGUI, KC_LALT, KC_TRNS,  KC_TRNS, KC_SPC, KC_TRNS,  KC_TRNS, KC_RALT, KC_LGUI, TO(_TTRS), TO(_FN), KC_TRNS, KC_TRNS
    ),

    // Function layer
    [_FN] = LAYOUT_60_ansi(
        // Row 0
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
        // Row 1
        KC_BSPC, KC_PMNS, KC_PPLS, KC_EQL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        // Row 2
        KC_TRNS, KC_1, KC_2, KC_3, KC_4, KC_5, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        // Row 3
        KC_LSFT, KC_6, KC_7, KC_8, KC_9, KC_0, KC_DOT,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        // Row 4
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SPC, KC_TRNS, KC_TRNS, KC_HOME, KC_PGDN, TO(_TTRS),  TG(_FN), KC_TRNS, KC_TRNS
    ),

    [_TTRS] = LAYOUT_60_ansi(

    // Row 0
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_TRNS,  KC_TRNS,  KC_K,  KC_L,
        // Row 1
        KC_TRNS, KC_TRNS, KC_W, KC_0, KC_R, KC_B, KC_I, KC_N, KC_T, KC_A, KC_R, KC_J, KC_TRNS, KC_TRNS,
        // Row 2
        KC_TRNS, KC_A, KC_S, KC_D, KC_TRNS, KC_T, KC_E, KC_T, KC_R, KC_DOT, KC_I, KC_O, KC_ENT, KC_TRNS,
        // Row 3
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SPC, KC_TRNS, KC_TRNS, KC_TRNS,
        // Row 4
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SPC, KC_TRNS, KC_TRNS, KC_HOME, KC_PGDN, TO(_TTRS),  TG(_FN), KC_TRNS, KC_TRNS
    )
};