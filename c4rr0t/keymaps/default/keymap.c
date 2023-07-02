#include QMK_KEYBOARD_H
#define _QWERTY 0
#define _NEXT 1
/*
enum unicode_names {
    ZeroWidth,
   // IRONY,
   SNEK
};

const uint32_t PROGMEM unicode_map[] = {
    [ZeroWidth]  = 0x200B,  // Zero width spacer
    //[IRONY] = 0x2E2E,  // ⸮
    [SNEK]  = 0x1F40D, // 🐍
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case QMKBEST:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("YEET");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    }
    return true;
};*/

// LEFT

  const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT( //Its actually DVORAK
    //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
       KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,KC_6    ,KC_GRAVE,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_TAB  ,KC_QUOTE  ,KC_COMMA    ,KC_DOT    ,KC_P    ,KC_Y    ,KC_F5,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_ESC  ,KC_A    ,KC_O    ,KC_E    ,KC_U    ,KC_I    ,KC_HOME,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LSFT ,KC_SCOLON    ,KC_Q    ,KC_J    ,KC_K,KC_X,KC_END,
    //├────────┼────────┼────────┼────────┼────────┴────────┼────────┤
       KC_LCTL ,KC_LGUI ,KC_LALT ,MO(_NEXT),KC_SPACE,KC_SPACE,KC_BSPC
    //└────────┴────────┴────────┴───────────────────────────────────┘
    ),/*
    [_QWERTY] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
       KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,KC_6    ,KC_GRAVE,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_TAB  ,KC_Q    ,KC_W    ,KC_E    ,KC_R    ,KC_T    ,KC_F5,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_ESC  ,KC_A    ,KC_S    ,KC_D    ,KC_F    ,KC_G    ,KC_HOME,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LSFT ,KC_Z    ,KC_X    ,KC_C    ,KC_V    ,KC_B    ,KC_END  ,
    //├────────┼────────┼────────┼────────┼────────┴────────┼────────┤
       KC_LCTL ,KC_LGUI ,KC_LALT ,MO(_NEXT),KC_SPACE,KC_SPACE,KC_BSPC
    //└────────┴────────┴────────┴───────────────────────────────────┘
    ),*/
    [_NEXT] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
       KC_F1    ,KC_F2    ,KC_F3    ,KC_F4    ,KC_F6    ,KC_F7    ,KC_F8,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────
       KC_F9  ,KC_F10    ,KC_F11,KC_F12    ,KC_F9   ,KC_F10    ,KC_F11,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_F12 ,KC_A    ,KC_MEDIA_PREV_TRACK    ,KC_MEDIA_PLAY_PAUSE    ,KC_MEDIA_NEXT_TRACK    ,KC_RSFT,KC_RCTL,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LOCKING_SCROLL ,KC_SCOLON    ,KC__MUTE,KC__VOLDOWN,KC__VOLUP,KC_B    ,KC_END  ,
    //├────────┼────────┼────────┼────────┼────────┴────────┼────────┤
       KC_LCTL ,KC_LGUI ,KC_LALT ,MO(_NEXT),KC_SPACE,A(S(KC_F)),A(S(KC_D))
    //└────────┴────────┴────────┴───────────────────────────────────┘
    )
};
/*
//Right!
  const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
       KC_DEL,KC_7    ,KC_8    ,KC_9    ,KC_0    ,KC_MINUS,KC_EQUAL,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_PGUP  ,KC_Y    ,KC_U    ,KC_I    ,KC_O    ,KC_P    ,KC_LBRACKET,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_PGDOWN  ,KC_H    ,KC_J    ,KC_K    ,KC_L    ,KC_SCOLON,KC_QUOTE,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_INSERT ,KC_N    ,KC_M    ,KC_COMMA,KC_DOT  ,KC_SLASH,KC_BSLASH,
    //├────────┼────────┼────────┼────────┼────────┴────────┼────────┤
       KC_ENTER ,KC_SPACE ,KC_LEFT,KC_DOWN,KC_UP,KC_RIGHT,KC_RBRACKET
    //└────────┴────────┴────────┴───────────────────────────────────┘
   ),
   
   [_QWERTY] = LAYOUT( //ITS ACTUALLY DVORAK
    //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
       KC_DEL,KC_7    ,KC_8    ,KC_9    ,KC_0    ,KC_LBRACKET,KC_RBRACKET,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤/
       KC_PGUP  ,KC_F    ,KC_G    ,KC_C    ,KC_R    ,KC_L    ,KC_SLASH,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_PGDOWN  ,KC_D    ,KC_H    ,KC_T    ,KC_N    ,KC_S,KC_MINUS,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_INSERT ,KC_B    ,KC_M    ,KC_W,KC_V  ,KC_Z  ,KC_BSLASH,
    //├────────┼────────┼────────┼────────┼────────┴────────┼────────┤
       KC_ENTER ,KC_SPACE ,KC_LEFT,KC_DOWN,KC_UP,KC_RIGHT,KC_EQUAL
    //└────────┴────────┴────────┴───────────────────────────────────┘
   )
};*/
