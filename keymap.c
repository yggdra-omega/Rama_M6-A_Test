#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] =	{

	LAYOUT(
		TO(1),	KC_1,	KC_1,	\
		KC_1,	KC_1,	KC_1	\
		),
	
	LAYOUT(
		TO(2),	KC_2,	KC_2,	\
		KC_2,	KC_2,	KC_2	\
		),
	
	LAYOUT(
		TO(3),	KC_3,	KC_3,	\
		KC_3,	KC_3,	KC_3	\
		),
	
	LAYOUT(
		TO(4),	KC_4,	KC_4,	\
		KC_4,	KC_4,	KC_4	\
		),
	
	LAYOUT(
		TO(5),	KC_5,	KC_5,	\
		KC_5,	KC_5,	KC_5	\
		),
	
	LAYOUT(
		TO(0),	KC_6,	KC_6,	\
		KC_6,	KC_6,	KC_6	\
		)
								};
