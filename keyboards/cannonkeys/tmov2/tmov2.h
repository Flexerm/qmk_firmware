#pragma once

#include "quantum.h"

#define LAYOUT_default( \
    K000, K001,       K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, K014, K015, \
    K100, K101,       K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114,       \
    K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213, K214,       \
    K300,             K303, K304,       K306,       K308,       K310, K311                          \
) { \
    { K000,  K001,  KC_NO,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  K014,  K015  }, \
    { K100,  K101,  KC_NO,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  KC_NO }, \
    { K200,  K201,  K202,   K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  K213,  K214,  KC_NO }, \
    { K300,  KC_NO, KC_NO,  K303,  K304,  KC_NO, K306,  KC_NO, K308,  KC_NO, K310,  K311,  KC_NO, KC_NO, KC_NO, KC_NO }  \
}
