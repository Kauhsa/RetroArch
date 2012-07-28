/*  RetroArch - A frontend for libretro.
 *  Copyright (C) 2010-2012 - Hans-Kristian Arntzen
 *  Copyright (C) 2011-2012 - Daniel De Matteis
 *  Copyright (C) 2012 - Michael Lelli
 * 
 *  RetroArch is free software: you can redistribute it and/or modify it under the terms
 *  of the GNU General Public License as published by the Free Software Found-
 *  ation, either version 3 of the License, or (at your option) any later version.
 *
 *  RetroArch is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 *  without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 *  PURPOSE.  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along with RetroArch.
 *  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _WII_INPUT_H
#define _WII_INPUT_H

enum
{
   WII_GC_A                 = 1ULL << 0,
   WII_GC_B                 = 1ULL << 1,
   WII_GC_X                 = 1ULL << 2,
   WII_GC_Y                 = 1ULL << 3,
   WII_GC_START             = 1ULL << 4,
   WII_GC_Z_TRIGGER         = 1ULL << 5,
   WII_GC_L_TRIGGER         = 1ULL << 6,
   WII_GC_R_TRIGGER         = 1ULL << 7,
   WII_GC_UP                = 1ULL << 8,
   WII_GC_DOWN              = 1ULL << 9,
   WII_GC_LEFT              = 1ULL << 10,
   WII_GC_RIGHT             = 1ULL << 11,
   WII_GC_LSTICK_UP         = 1ULL << 12,
   WII_GC_LSTICK_DOWN       = 1ULL << 13,
   WII_GC_LSTICK_LEFT       = 1ULL << 14,
   WII_GC_LSTICK_RIGHT      = 1ULL << 15,
   WII_GC_RSTICK_UP         = 1ULL << 16,
   WII_GC_RSTICK_DOWN       = 1ULL << 17,
   WII_GC_RSTICK_LEFT       = 1ULL << 18,
   WII_GC_RSTICK_RIGHT      = 1ULL << 19,
   WII_CLASSIC_A            = 1ULL << 20,
   WII_CLASSIC_B            = 1ULL << 21,
   WII_CLASSIC_X            = 1ULL << 22,
   WII_CLASSIC_Y            = 1ULL << 23,
   WII_CLASSIC_PLUS         = 1ULL << 24,
   WII_CLASSIC_MINUS        = 1ULL << 25,
   WII_CLASSIC_HOME         = 1ULL << 26,
   WII_CLASSIC_L_TRIGGER    = 1ULL << 27,
   WII_CLASSIC_R_TRIGGER    = 1ULL << 28,
   WII_CLASSIC_ZL_TRIGGER   = 1ULL << 29,
   WII_CLASSIC_ZR_TRIGGER   = 1ULL << 30,
   WII_CLASSIC_UP           = 1ULL << 31,
   WII_CLASSIC_DOWN         = 1ULL << 32,
   WII_CLASSIC_LEFT         = 1ULL << 33,
   WII_CLASSIC_RIGHT        = 1ULL << 34,
   WII_CLASSIC_LSTICK_UP    = 1ULL << 35,
   WII_CLASSIC_LSTICK_DOWN  = 1ULL << 36,
   WII_CLASSIC_LSTICK_LEFT  = 1ULL << 37,
   WII_CLASSIC_LSTICK_RIGHT = 1ULL << 38,
   WII_CLASSIC_RSTICK_UP    = 1ULL << 39,
   WII_CLASSIC_RSTICK_DOWN  = 1ULL << 40,
   WII_CLASSIC_RSTICK_LEFT  = 1ULL << 41,
   WII_CLASSIC_RSTICK_RIGHT = 1ULL << 42,
   WII_WIIMOTE_A            = 1ULL << 43,
   WII_WIIMOTE_B            = 1ULL << 44,
   WII_WIIMOTE_1            = 1ULL << 45,
   WII_WIIMOTE_2            = 1ULL << 46,
   WII_WIIMOTE_PLUS         = 1ULL << 47,
   WII_WIIMOTE_MINUS        = 1ULL << 48,
   WII_WIIMOTE_HOME         = 1ULL << 49,
   WII_WIIMOTE_UP           = 1ULL << 50,
   WII_WIIMOTE_DOWN         = 1ULL << 51,
   WII_WIIMOTE_LEFT         = 1ULL << 52,
   WII_WIIMOTE_RIGHT        = 1ULL << 53,
   WII_NUNCHUK_Z            = 1ULL << 54,
   WII_NUNCHUK_C            = 1ULL << 55,
   WII_NUNCHUK_UP           = 1ULL << 56,
   WII_NUNCHUK_DOWN         = 1ULL << 57,
   WII_NUNCHUK_LEFT         = 1ULL << 58,
   WII_NUNCHUK_RIGHT        = 1ULL << 59,
};

enum wii_device_id
{
   WII_DEVICE_GC_ID_JOYPAD_A = 0,
   WII_DEVICE_GC_ID_JOYPAD_B,
   WII_DEVICE_GC_ID_JOYPAD_X,
   WII_DEVICE_GC_ID_JOYPAD_Y,
   WII_DEVICE_GC_ID_JOYPAD_UP,
   WII_DEVICE_GC_ID_JOYPAD_DOWN,
   WII_DEVICE_GC_ID_JOYPAD_LEFT,
   WII_DEVICE_GC_ID_JOYPAD_RIGHT,
   WII_DEVICE_GC_ID_JOYPAD_Z_TRIGGER,
   WII_DEVICE_GC_ID_JOYPAD_START,
   WII_DEVICE_GC_ID_JOYPAD_L_TRIGGER,
   WII_DEVICE_GC_ID_JOYPAD_R_TRIGGER,
   WII_DEVICE_GC_ID_LSTICK_LEFT,
   WII_DEVICE_GC_ID_LSTICK_RIGHT,
   WII_DEVICE_GC_ID_LSTICK_UP,
   WII_DEVICE_GC_ID_LSTICK_DOWN,
   WII_DEVICE_GC_ID_LSTICK_LEFT_DPAD,
   WII_DEVICE_GC_ID_LSTICK_RIGHT_DPAD,
   WII_DEVICE_GC_ID_LSTICK_UP_DPAD,
   WII_DEVICE_GC_ID_LSTICK_DOWN_DPAD,
   WII_DEVICE_GC_ID_RSTICK_LEFT,
   WII_DEVICE_GC_ID_RSTICK_RIGHT,
   WII_DEVICE_GC_ID_RSTICK_UP,
   WII_DEVICE_GC_ID_RSTICK_DOWN,
   WII_DEVICE_GC_ID_RSTICK_LEFT_DPAD,
   WII_DEVICE_GC_ID_RSTICK_RIGHT_DPAD,
   WII_DEVICE_GC_ID_RSTICK_UP_DPAD,
   WII_DEVICE_GC_ID_RSTICK_DOWN_DPAD,

#ifdef HW_RVL
   // CLASSIC CONTROLLER
   WII_DEVICE_CLASSIC_ID_JOYPAD_A,
   WII_DEVICE_CLASSIC_ID_JOYPAD_B,
   WII_DEVICE_CLASSIC_ID_JOYPAD_X,
   WII_DEVICE_CLASSIC_ID_JOYPAD_Y,
   WII_DEVICE_CLASSIC_ID_JOYPAD_UP,
   WII_DEVICE_CLASSIC_ID_JOYPAD_DOWN,
   WII_DEVICE_CLASSIC_ID_JOYPAD_LEFT,
   WII_DEVICE_CLASSIC_ID_JOYPAD_RIGHT,
   WII_DEVICE_CLASSIC_ID_JOYPAD_PLUS,
   WII_DEVICE_CLASSIC_ID_JOYPAD_MINUS,
   WII_DEVICE_CLASSIC_ID_JOYPAD_HOME,
   WII_DEVICE_CLASSIC_ID_JOYPAD_L_TRIGGER,
   WII_DEVICE_CLASSIC_ID_JOYPAD_R_TRIGGER,
   WII_DEVICE_CLASSIC_ID_JOYPAD_ZL_TRIGGER,
   WII_DEVICE_CLASSIC_ID_JOYPAD_ZR_TRIGGER,
   WII_DEVICE_CLASSIC_ID_LSTICK_LEFT,
   WII_DEVICE_CLASSIC_ID_LSTICK_RIGHT,
   WII_DEVICE_CLASSIC_ID_LSTICK_UP,
   WII_DEVICE_CLASSIC_ID_LSTICK_DOWN,
   WII_DEVICE_CLASSIC_ID_LSTICK_LEFT_DPAD,
   WII_DEVICE_CLASSIC_ID_LSTICK_RIGHT_DPAD,
   WII_DEVICE_CLASSIC_ID_LSTICK_UP_DPAD,
   WII_DEVICE_CLASSIC_ID_LSTICK_DOWN_DPAD,
   WII_DEVICE_CLASSIC_ID_RSTICK_LEFT,
   WII_DEVICE_CLASSIC_ID_RSTICK_RIGHT,
   WII_DEVICE_CLASSIC_ID_RSTICK_UP,
   WII_DEVICE_CLASSIC_ID_RSTICK_DOWN,
   WII_DEVICE_CLASSIC_ID_RSTICK_LEFT_DPAD,
   WII_DEVICE_CLASSIC_ID_RSTICK_RIGHT_DPAD,
   WII_DEVICE_CLASSIC_ID_RSTICK_UP_DPAD,
   WII_DEVICE_CLASSIC_ID_RSTICK_DOWN_DPAD,

   // WIIMOTE (PLUS OPTIONAL NUNCHUK)
   WII_DEVICE_WIIMOTE_ID_JOYPAD_A,
   WII_DEVICE_WIIMOTE_ID_JOYPAD_B,
   WII_DEVICE_WIIMOTE_ID_JOYPAD_1,
   WII_DEVICE_WIIMOTE_ID_JOYPAD_2,
   WII_DEVICE_WIIMOTE_ID_JOYPAD_UP,
   WII_DEVICE_WIIMOTE_ID_JOYPAD_DOWN,
   WII_DEVICE_WIIMOTE_ID_JOYPAD_LEFT,
   WII_DEVICE_WIIMOTE_ID_JOYPAD_RIGHT,
   WII_DEVICE_WIIMOTE_ID_JOYPAD_PLUS,
   WII_DEVICE_WIIMOTE_ID_JOYPAD_MINUS,
   WII_DEVICE_WIIMOTE_ID_JOYPAD_HOME,
   WII_DEVICE_WIIMOTE_ID_JOYPAD_Z,
   WII_DEVICE_WIIMOTE_ID_JOYPAD_C,
   WII_DEVICE_WIIMOTE_ID_LSTICK_LEFT,
   WII_DEVICE_WIIMOTE_ID_LSTICK_RIGHT,
   WII_DEVICE_WIIMOTE_ID_LSTICK_UP,
   WII_DEVICE_WIIMOTE_ID_LSTICK_DOWN,
   WII_DEVICE_WIIMOTE_ID_LSTICK_LEFT_DPAD,
   WII_DEVICE_WIIMOTE_ID_LSTICK_RIGHT_DPAD,
   WII_DEVICE_WIIMOTE_ID_LSTICK_UP_DPAD,
   WII_DEVICE_WIIMOTE_ID_LSTICK_DOWN_DPAD,
#endif

   RARCH_LAST_PLATFORM_KEY
};

enum
{
   WII_DEVICE_GAMECUBE = 0,
   WII_DEVICE_WIIMOTE,
   WII_DEVICE_NUNCHUK,
   WII_DEVICE_CLASSIC,

   RARCH_DEVICE_LAST
};

#endif