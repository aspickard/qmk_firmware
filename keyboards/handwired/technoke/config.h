/*
Copyright 2022 Technoke LLC

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0x0000
#define DEVICE_VER 0x0001
#define MANUFACTURER Technoke LLC
#define PRODUCT technokey

#define MATRIX_ROWS 6
#define MATRIX_COLS 21

#define MATRIX_ROW_PINS { A15, A8, A7, A6, A10, A9 }
#define MATRIX_COL_PINS { A2, A1, A0, B8, B13, B14, B15, B9, B10, B11, B12, A14, A13, B7, B6, B5, B4, B3, B2, B1, B0}

#define UNUSED_PINS

#define DIODE_DIRECTION COL2ROW

#define RGB_DI_PIN A4
#ifdef RGB_DI_PIN
#define RGBLED_NUM 30
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_DEFAULT_MODE (RGBLIGHT_EFFECT_RAINBOW_MOOD + 8)
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#define RGBLIGHT_LIMIT_VAL 180
#define RGBLIGHT_SLEEP
#endif

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
