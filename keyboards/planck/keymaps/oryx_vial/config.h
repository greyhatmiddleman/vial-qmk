/* Copyright 2020 ZSA Technology Inc
 * Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define VIAL_KEYBOARD_UID {0x05, 0x80, 0x94, 0x4B, 0x39, 0x22, 0x10, 0x13}
#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
#define VIAL_UNLOCK_COMBO_COLS {0, 1}

#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES

/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#define USB_SUSPEND_WAKEUP_DELAY 0
#define FIRMWARE_VERSION u8"vAxxa/ZlQEV"
#define RGB_MATRIX_STARTUP_SPD 60


#define PLANCK_EZ_LED_LOWER 1
#define PLANCK_EZ_LED_RAISE 2
#define PLANCK_EZ_LED_ADJUST 3
