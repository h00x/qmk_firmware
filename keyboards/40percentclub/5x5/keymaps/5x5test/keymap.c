#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  LAYOUT_ortho_5x15(
  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,
  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,
  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,
  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,
  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5
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
