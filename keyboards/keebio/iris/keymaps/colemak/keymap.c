#include "quantum.h"

//const key_override_t home_override = ko_make_one_mod(MOD_MASK_SHIFT, KC_PGUP, KC_HOME);
const key_override_t home_override = {
    .trigger_mods = MOD_MASK_SHIFT,
    .layers       = ~0,
    .trigger      = KC_PGUP,
    .replacement  = KC_HOME,
    .options      = ko_option_one_mod
};
const key_override_t end_override = {
    .trigger_mods = MOD_MASK_SHIFT,
    .layers       = ~0,
    .trigger      = KC_PGDN,
    .replacement  = KC_END,
    .options      = ko_option_one_mod
};

// This globally defines all key overrides to be used
const key_override_t *key_overrides[] = {
	&home_override,
    &end_override
};

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case 0:
            rgb_matrix_sethsv_noeeprom(HSV_RED); // base layer white
            rgb_matrix_set_speed(22);
            rgb_matrix_mode_noeeprom(RGB_MATRIX_CYCLE_UP_DOWN);
            break;
        case 1:
            rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
            break;
        case 2:
            rgb_matrix_sethsv_noeeprom(91, 249, 255);
            rgb_matrix_set_speed(188);
            rgb_matrix_mode_noeeprom(RGB_MATRIX_GRADIENT_UP_DOWN);
            break;
        case 3:
            rgb_matrix_sethsv_noeeprom(91, 249, 255);
            rgb_matrix_set_speed(188);
            rgb_matrix_mode_noeeprom(RGB_MATRIX_GRADIENT_LEFT_RIGHT);
            break;

        default:
            rgb_matrix_sethsv_noeeprom(HSV_TURQUOISE);
            rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
            break;
    }
    return state;
}

void eeconfig_init_user(void) {
    rgb_matrix_sethsv_noeeprom(HSV_RED); // base layer white
    rgb_matrix_set_speed(22);
    rgb_matrix_mode_noeeprom(RGB_MATRIX_CYCLE_UP_DOWN);
}

