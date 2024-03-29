#include QMK_KEYBOARD_H

enum layer_number {
  _MAIN = 0,
  _FIRST,
  _SECOND,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_MAIN] = LAYOUT(KC_ESC,KC_MYCM,KC_PGDN,TG(_FIRST),TG(_SECOND),KC_1,KC_2,KC_3,KC_4,KC_5,KC_F5,KC_F6,KC_F7,KC_F8,KC_SPC,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_BTN1,KC_BTN2,KC_BTN3,KC_BTN4,KC_BTN5),
    [_FIRST] = LAYOUT(KC_1,KC_2,KC_3,KC_TRNS,TG(_MAIN),KC_F13,KC_F14,KC_F15,KC_F16,KC_F17,KC_F17,KC_F18,KC_F19,KC_F20,KC_F21,KC_F22,KC_F23,KC_F24,KC_SPC,KC_ENT,KC_BTN1,KC_BTN2,KC_BTN3,KC_BTN4,KC_BTN5),
    [_SECOND] = LAYOUT(KC_MPRV,KC_MNXT,KC_MSTP,KC_MPLY,TG(_MAIN),KC_MYCM,KC_WREF,KC_1,KC_2,KC_3,KC_Q,KC_W,KC_E,KC_R,KC_T,KC_A,KC_S,KC_D,KC_F,KC_G,KC_Z,KC_X,KC_C,KC_SPC,KC_ENT),
};
