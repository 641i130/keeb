#include QMK_KEYBOARD_H

enum layer_number {
    _DVORAK = 0,
    _QWERTY,
    _MEDIA,
    _OTHER,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_DVORAK] = LAYOUT(KC_1, KC_2, KC_3, KC_4, KC_5, KC_6,                //
                       KC_TAB, KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y,      //
                       KC_ESC, KC_A, KC_O, KC_E, KC_U, KC_I,              //
                       KC_LSFT, KC_SCLN, KC_Q, KC_J, KC_K, KC_X,          //
                       KC_LCTL, KC_LGUI, KC_LALT, MO(_MEDIA), MO(_OTHER), //
                       KC_GRV, KC_F5, KC_SPC, KC_BSPC, KC_HOME, KC_END),  // THUMB CLUSTER

    [_QWERTY] = LAYOUT(KC_1, KC_2, KC_3, KC_4, KC_5, KC_6,                //
                       KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,              //
                       KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G,              //
                       KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_X,             //
                       KC_LCTL, KC_LGUI, KC_LALT, MO(_MEDIA), MO(_OTHER), //
                       KC_GRV, KC_F5, KC_SPC, KC_BSPC, KC_HOME, KC_END),

    [_MEDIA] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,             //
                      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,             //
                      KC_NO, KC_NO, KC_MPRV, KC_MPLY, KC_MNXT, TG(_DVORAK), //
                      KC_NO, KC_NO, KC_MUTE, KC_VOLD, KC_VOLU, TG(_QWERTY), //
                      KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO,           //
                      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),

    [_OTHER] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,             //
                      KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,             //
                      KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,          //
                      C(KC_Z), C(KC_X), C(KC_C), C(KC_V), C(KC_S), C(KC_W), //
                      KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO,           //
                      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
};
