#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0xFEED
#define PRODUCT_ID   0x0000
#define DEVICE_VER   0x0001
#define MANUFACTURER harrisonmolloy
#define PRODUCT      proto60

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

#define MATRIX_ROW_PINS { F0, F1, F4, F6, F5 }
#define MATRIX_COL_PINS { F7, D4, D5, D3, D2, D1, D0, C7, C6, B6, B5, B4, D7, D6 }

#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
