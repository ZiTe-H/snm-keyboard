#ifndef SNM_THUMB_H
#define SNM_THUMB_H

#include "quantum.h"

#define KEYMAP( \
	K00, K01, K02, K03, K04, \
	               K13, K14  \
) { \
	{ K00,   K01,   K02,   K03,   K04 }, \
	{ KC_NO, KC_NO, KC_NO, K13,   K14 }  \
}

#endif
