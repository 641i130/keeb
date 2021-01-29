#include QMK_KEYBOARD_H
#define _NEXT 1
#define _QWERTY 0

enum custom_keycodes {
  _QWERTY = SAFE_RANGE,
  //QMKBEST = SAFE_RANGE,
  _NEXT = SAFE_RANGE
};
  const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬─────────┐
       KC_NUMLOCK  ,KC_F14  ,KC_F15  ,KC_F16  ,KC_F17    ,
    //├────────┼────────┼────────┼────────┼─────────┤
       KC_KP_7 ,KC_KP_8 ,KC_KP_9 ,KC_KP_SLASH ,KC_F13   ,
    //├────────┼────────┼────────┼────────┼─────────┤
       KC_KP_4 ,KC_KP_5 ,KC_KP_6 ,KC_KP_ASTERISK   ,KC_F    ,
    //├────────┼────────┼────────┼────────┼─────────┤
       KC_KP_1 ,KC_KP_2 ,KC_KP_3 ,KC_KP_PLUS,KC_KP_MINUS    ,
    //├────────┼────────┼────────┼────────┼─────────┤
       KC_KP_0 ,KC_KP_DOT ,KC_KP_ENTER ,MO(_NEXT),KC_SPACE,
    //└────────┴────────┴────────┴──────────────────┘
    ),
    [_NEXT] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬─────────┐
       KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,
    //├────────┼────────┼────────┼────────┼─────────┤
       KC_TAB  ,KC_Q    ,KC_W    ,KC_E    ,KC_R    ,
    //├────────┼────────┼────────┼────────┼─────────┤
       KC_ESC  ,KC_A    ,KC_S    ,KC_D    ,KC_F    ,
    //├────────┼────────┼────────┼────────┼─────────┤
       KC_LSFT ,KC_Z    ,KC_X    ,KC_C    ,KC_V    ,
    //├────────┼────────┼────────┼────────┼─────────┤
       KC_LCTL ,KC_LGUI ,KC_LALT ,MO(_NEXT),KC_SPACE,
    //└────────┴────────┴────────┴──────────────────┘
    )
};

