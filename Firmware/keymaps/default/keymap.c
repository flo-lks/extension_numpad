// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_flo_4x4(
        KC_P7,   KC_P8,   KC_P9,   KC_PSLS, KC_MUTE,
        KC_P4,   KC_P5,   KC_P6,   KC_PAST,
        KC_P1,   KC_P2,   KC_P3,   KC_PMNS,
        KC_P0,   KC_PDOT, KC_PENT, KC_PPLS
    )
};

static uint16_t mute_timer = 0;
static bool mute_interrupted = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (keycode == KC_MUTE) {
        if (record->event.pressed) {
            mute_timer       = timer_read();
            mute_interrupted = false;
            return false;
        } else {
            uint16_t held_ms = timer_elapsed(mute_timer);

            if (!mute_interrupted && held_ms >= 300) {
                tap_code(KC_NUM_LOCK);
            } else {
                tap_code(KC_MUTE);
            }
            return false;
        }
    }

    if (record->event.pressed) {
        mute_interrupted = true;
    }

    return true;
}

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLD);
        } else {
            tap_code(KC_VOLU);
        }
    }
    return false;
}
