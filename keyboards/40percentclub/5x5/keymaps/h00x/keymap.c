
#include QMK_KEYBOARD_H

#define _QW 0
#define LAYER1 1
#define LAYER2 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QW] = LAYOUT_ortho_5x15(
  KC_ESC ,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_AUDIO_MUTE,       KC_AUDIO_VOL_DOWN,   KC_AUDIO_VOL_UP,     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
  KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_EQL,
  KC_CAPS,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_LBRC,             KC_BSLS,             KC_RBRC,             KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    MO(LAYER1),          KC_PGUP,             MO(LAYER1),          KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  KC_GRAVE,  KC_LCTL, KC_LALT, KC_LCMD, KC_SPC,  KC_DEL,  KC_HOME,             KC_PGDOWN,           KC_END,              KC_ENT,  KC_BSPC, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT
  ),

  [LAYER1] = LAYOUT_ortho_5x15(
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______, _______, _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_F12,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),

  [LAYER2] = LAYOUT_ortho_5x15(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
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
