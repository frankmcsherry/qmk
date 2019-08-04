#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_steno.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define NO_TH ALGR(KC_T)
#define NO_ETH ALGR(KC_D)

enum custom_keycodes {
  RGB_SLD = SAFE_RANGE, // can always be here
  TOGGLE_LAYER_COLOR,
  EPRM,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT_ergodox(
          KC_ESCAPE,KC_1,KC_2,KC_3,KC_4,KC_5,KC_ESCAPE,
          KC_TAB,KC_QUOTE,KC_COMMA,KC_DOT,KC_P,KC_Y,KC_LALT,
          KC_LCTRL,KC_A,KC_O,KC_E,KC_U,KC_I,
          KC_LSHIFT,KC_SCOLON,KC_Q,KC_J,KC_K,KC_X,KC_LGUI,
          TG(2),KC_GRAVE,KC_SLASH,KC_LBRACKET,KC_RBRACKET,LCTL(KC_LEFT),RCTL(KC_RIGHT),KC_LALT,KC_SPACE,OSM(MOD_LSFT),KC_LGUI,KC_AUDIO_MUTE,KC_6,KC_7,KC_8,KC_9,KC_0,KC_BSLASH,KC_RALT,KC_F,KC_G,KC_C,KC_R,KC_L,KC_EQUAL,KC_D,KC_H,KC_T,KC_N,KC_S,KC_MINUS,KC_RGUI,KC_B,KC_M,KC_W,KC_V,KC_Z,KC_SLASH,KC_LEFT,KC_DOWN,KC_UP,KC_RIGHT,MO(1),KC_TRANSPARENT,KC_TRANSPARENT,KC_RALT,KC_RGUI,KC_BSPACE,KC_ENTER),

  [1] = LAYOUT_ergodox(KC_TRNS,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_TRNS,KC_TRNS,KC_EXLM,KC_AT,KC_LCBR,KC_RCBR,KC_PIPE,KC_TRNS,KC_TRNS,KC_HASH,KC_DLR,KC_LPRN,KC_RPRN,KC_GRAVE,KC_TRNS,KC_PERC,KC_CIRC,KC_LBRACKET,KC_RBRACKET,KC_TILD,KC_TRNS,KC_TRNS,KC_LCBR,KC_COLN,KC_QUES,KC_RCBR,RGB_MOD,RGB_SLD,RGB_TOG,RGB_VAD,RGB_VAI,KC_TRNS,RESET,KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,KC_F11,KC_TRNS,KC_UP,KC_7,KC_8,KC_9,KC_KP_SLASH,KC_F12,KC_DOWN,KC_4,KC_5,KC_6,KC_KP_ASTERISK,KC_TRNS,KC_TRNS,KC_AMPR,KC_1,KC_2,KC_3,KC_KP_MINUS,KC_TRNS,KC_KP_0,KC_KP_DOT,KC_EQUAL,KC_KP_PLUS,KC_TRNS,RGB_SPD,RGB_SPI,KC_TRNS,KC_TRNS,RGB_HUD,RGB_HUI),

//  [2] = LAYOUT_ergodox(KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_MS_BTN1,KC_MS_BTN2,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_MS_UP,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_MS_LEFT,KC_MS_DOWN,KC_MS_RIGHT,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_MS_BTN1,KC_MS_BTN2),

/* Keymap 3: TxBolt (Serial)
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * | BKSPC  |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |   #  |   #  |   #  |   #  |   #  |      |           |      |   #  |   #  |   #  |   #  |   #  |   #    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |   S  |   T  |   P  |   H  |   *  |------|           |------|   *  |   F  |   P  |   L  |   T  |   D    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |   S  |   K  |   W  |   R  |   *  |      |           |      |   *  |   R  |   B  |   G  |   S  |   Z    |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |   A  |   O  |------|       |------|   E  |   U  |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
// // TxBolt over Serial
 [2] = LAYOUT_ergodox(
        KC_BSPC, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   STN_N1,  STN_N2,  STN_N3,  STN_N4,  STN_N5,  KC_NO,
        KC_NO,   STN_S1,  STN_TL,  STN_PL,  STN_HL,  STN_ST1,
        KC_NO,   STN_S2,  STN_KL,  STN_WL,  STN_RL,  STN_ST2, KC_NO,
        KC_TRNS,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                            KC_NO,   KC_NO,
                                                     KC_NO,
                                   STN_A,   STN_O,   KC_NO,
     // right hand
        KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_TRNS,  STN_N6,  STN_N7,  STN_N8,  STN_N9,  STN_NA,  STN_NB,
                  STN_ST3, STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR,
        KC_NO,    STN_ST4, STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR,
                           KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_TRNS,
        KC_NO,
        KC_NO,   STN_E,   STN_U
 ),
};


extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;
bool disable_layer_color = 0;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {
    steno_set_mode(STENO_MODE_BOLT); // or STENO_MODE_GEMINI
};

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {169,120,255}, {0,0,0}, {0,0,0}, {0,0,0}, {169,120,255}, {169,120,255}, {169,120,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        rgb_matrix_set_color( i, rgb.r, rgb.g, rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (g_suspend_state || disable_layer_color) { return; }
  switch (biton32(layer_state)) {
    case 2:
      set_layer_color(2);
      break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case EPRM:
      if (record->event.pressed) {
        eeconfig_init();
      }
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case RGB_TOG:
  if (record->event.pressed) {
    if (rgb_matrix_config.hsv.v) {
      rgb_matrix_sethsv(rgb_matrix_config.hsv.h, rgb_matrix_config.hsv.s, 0);
    } else {
      rgb_matrix_sethsv(rgb_matrix_config.hsv.h, rgb_matrix_config.hsv.s, 255);
    }
  }
  return false;
    case TOGGLE_LAYER_COLOR:
      if (record->event.pressed) {
        disable_layer_color ^= 1;
      }
      return false;
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {

  uint8_t layer = biton32(state);

  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};