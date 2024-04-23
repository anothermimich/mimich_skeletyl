// Copyright 2024 Lu (@anothermimich)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
#define USE_I2C         // Use protocol I2C to connect the halves

// Vial

#define VIAL_KEYBOARD_UID {0x7F, 0xA1, 0x8E, 0x0F, 0x0E, 0x74, 0x18, 0x1B}
#define VIAL_UNLOCK_COMBO_ROWS {0, 0} 
#define VIAL_UNLOCK_COMBO_COLS {0, 1} 
#define VIAL_TAP_DANCE_ENTRIES 16

// Firmware size reduction.

#ifndef NO_DEBUG
#define NO_DEBUG
#endif // !NO_DEBUG
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#define NO_PRINT
#endif // !NO_PRINT

/* disable action features */

//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
