#include QMK_KEYBOARD_H

// ----------------------------
// KEYMAPS
// ----------------------------
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // Layer 0 — base
    [0] = LAYOUT(
        LCTL(KC_C),  LCTL(KC_V),  LCTL(KC_Z),
        LCTL(KC_S),  LCTL(KC_X),  LCTL(KC_F),
        KC_MUTE,     KC_MPLY,     MO(1)
    ),

    // Layer 1 — media
    [1] = LAYOUT(
        KC_MPRV,             KC_MPLY,              KC_MNXT,
        KC_BRID,             KC_BRIU,              SGUI(KC_S),
        LGUI(KC_D),          LCTL(LSFT(KC_ESC)),   _______
    ),
};

// ----------------------------
// ENCODER MAP
// ----------------------------
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(KC_MPRV, KC_MNXT) },
};
#endif
