#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Single 5x5 board only
 * .--------------------------------------------.
 * | QWERTY |   /    |   *    |   -    |        |
 * |--------+--------+--------+--------+--------|
 * |   7    |   8    |   9    |   +    |        |
 * |--------+--------+--------+--------+--------|
 * |   4    |   5    |   6    |   +    |        |
 * |--------+--------+--------+--------+--------|
 * |   1    |   2    |   3    | ENTER  |        |
 * |--------+--------+--------+--------+--------|
 * |   0    |   0    |   .    | ENTER  |        |
 * '--------------------------------------------'
 */

  LAYOUT_ortho_5x5(
  KC_KP_1, KC_KP_2, KC_KP_3,   KC_KP_4, KC_KP_5,
  KC_KP_1, KC_KP_2, KC_KP_3,   KC_KP_4, KC_KP_5,
  KC_KP_1, KC_KP_2, KC_KP_3,   KC_KP_4, KC_KP_5,
  KC_KP_1, KC_KP_2, KC_KP_3,   KC_KP_4, KC_KP_5,
  KC_KP_1, KC_KP_2, KC_KP_3,   KC_KP_4, KC_KP_5
  ),

};


void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void led_set_user(uint8_t usb_led) {

}
