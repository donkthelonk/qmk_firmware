#include "../../m6_a.h"

#define LOCK LGUI(KC_L)
#define SAVE LCTL(KC_S)
#define COPY LCTL(KC_C)
#define PASTE LCTL(KC_V)
#define CALC KC_CALC
#define MUTE KC_MUTE

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Layer 0
 * ,--------------------.
 * | CALC | MUTE |  F5  |
 * |--------------------|
 * | COPY | PASTE| LOCK |
 * `--------------------'
 */
	KEYMAP(
		CALC, MUTE, KC_F5, 
    COPY, PASTE, LOCK )
};
