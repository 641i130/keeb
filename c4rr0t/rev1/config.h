#pragma once

#include "config_common.h"
/*
#define QMK_ESC_OUTPUT D1 // usually COL
#define QMK_ESC_INPUT F6 // usually ROW
#define QMK_LED B0
*/
/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0000
#define DEVICE_VER      0x0100
#define MANUFACTURER
#define PRODUCT         c4r3t
#define DESCRIPTION     Made by caret.

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 5
#define MATRIX_COLS 7

// wiring of each half
// LEFT HAND
/*
#define MATRIX_ROW_PINS {F4, F5, F6, F7, B1}
#define MATRIX_COL_PINS {B4, E6, D7, C6, D4, D0, D1}
*/
// RIGHT HAND
#define MATRIX_ROW_PINS {F4, F5, F6, F7, B1}
#define MATRIX_COL_PINS {B4, E6, D7, C6, D4, D0, D1}

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* number of backlight levels */
// #define BACKLIGHT_LEVELS 3

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D0

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* ws2812 RGB LED */
#define RGB_DI_PIN D3

#define RGBLED_NUM 14    // Number of LEDs

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION
