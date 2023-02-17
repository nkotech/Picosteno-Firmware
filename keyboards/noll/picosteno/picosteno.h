/* Copyright 2023 Nathan Olivares
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

#include "quantum.h"

/*
 * [ null,  null,  null, "GP4",   null,   null,   "GP26",   null,   null,   null,   null],
["GP0", "GP2", "GP5", "GP7",  "GP9",  "GP16",  "GP14", "GP18", "GP20", "GP22", "GP28"],
["GP1", "GP3", "GP6", "GP8",   null,   null,   "GP15", "GP17", "GP19", "GP21", "GP27"],
[ null,  null,  null, "GP10", "GP11",  "GP12", "GP13", null, null, null, null]
 */

#define LAYOUT( \
	             K02,                                            K0A,       \
           K11,  K12,  K13,  K14,  K15,  K16,  K17,  K18,  K19,  K1A,  K1B, \
	       K21,  K22,  K23,  K24,              K27,  K28,  K29,  K2A,  K2B, \
                             K34,  K35,  K36,  K37                          \
) { \
    {KC_NO, K02,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, K0A,   KC_NO}, \
    {K11,   K12,   K13,   K14, K15,   K16,   K17,   K18,   K19,   K1A,   K1B},   \
    {K21,   K22,   K23,   K24, KC_NO, KC_NO, K27,   K28,   K29,   K2A,   K2B},   \
    {KC_NO, KC_NO, KC_NO, K34, K35,   K36,   K37,   KC_NO, KC_NO, KC_NO, KC_NO}  \
}
