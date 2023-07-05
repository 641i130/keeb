#include QMK_KEYBOARD_H

enum layer_number {
  _DVORAK = 0,
  _QWERTY,
  _MEDIA,
  _OTHER,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_DVORAK] = LAYOUT(

        KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_TAB, KC_QUOT, KC_COMM, KC_DOT,
        KC_P, KC_Y, KC_ESC, KC_A, KC_O, KC_E, KC_U, KC_I, KC_LSFT, KC_SCLN,
        KC_Q, KC_J, KC_K, KC_X, KC_LCTL, KC_LGUI, KC_LALT, MO(2), MO(3), KC_GRV,
        KC_F5, KC_HOME, KC_SPC, KC_BSPC, KC_END, KC_7, KC_8, KC_9, KC_0,
        KC_LBRC, KC_RBRC, KC_F, KC_G, KC_C, KC_R, KC_L, KC_SLSH, KC_D, KC_H,
        KC_T, KC_N, KC_S, KC_MINS, KC_B, KC_M, KC_W, KC_V, KC_Z, KC_BSLS,
        KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_EQL, KC_DEL, KC_INS, KC_PGUP,
        KC_PGDN, KC_ENT, KC_SPC),

    [_QWERTY] = LAYOUT(
        KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_TAB, KC_Q, KC_W, KC_E, KC_R,
        KC_T, KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_LSFT, KC_Z, KC_X, KC_C,
        KC_V, KC_B, KC_LCTL, KC_LGUI, KC_LALT, MO(2), MO(3), KC_GRV, KC_F5,
        KC_HOME, KC_SPC, KC_BSPC, KC_END, KC_7, KC_8, KC_9, KC_0, KC_MINS,
        KC_EQL, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_H, KC_J, KC_K, KC_L,
        KC_SCLN, KC_QUOT, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_BSLS,
        KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_RBRC, KC_DEL, KC_INS, KC_PGUP,
        KC_PGDN, KC_ENT, KC_SPC),

    [_MEDIA] =
        LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, DB_TOGG, QK_BOOT, KC_NO, KC_NO,
               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MRWD, KC_MPLY,
               KC_MFFD, TO(1), KC_NO, KC_NO, KC_MUTE, KC_VOLD, KC_VOLU, TO(0),
               KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_BRIU, KC_BRID, KC_NO,
               LSA(KC_F), LSA(KC_D), CW_TOGG, KC_PWR, KC_SLEP, KC_WAKE, KC_EXEC,
               KC_HELP, QK_BOOT, KC_CALC, KC_MAIL, KC_MSEL, KC_MYCM, KC_WREF,
               KC_WFAV, KC_WSCH, KC_WHOM, KC_EJCT, KC_NO, KC_NO, KC_NO, KC_WBAK,
               KC_WFWD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),

    [_OTHER] =
        LAYOUT(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9,
               KC_F10, KC_F11, KC_F12, KC_NO, LCTL(KC_T), LCTL(KC_S), KC_NO,
               KC_NO, LCTL(KC_W), KC_NO, LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C),
               LCTL(KC_V), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO,
               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F13, KC_F14, KC_F15,
               KC_F16, KC_F17, KC_F18, KC_F19, KC_F20, KC_F21, KC_F22, KC_F23,
               KC_F24, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
};
