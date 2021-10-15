/* Copyright 2021 greyhatmiddleman
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

#include "12keys.h"

void testfn(void) {
    SEND_STRING("testing");
}


// using the pro micro led indicators
bool led_update_keyboard(led_t led_state) {
    writePinHigh(B0);
    writePinHigh(D5);
    return true;
}
