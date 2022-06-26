#ifndef CONTROLLER_CONFIG_H
#define CONTROLLER_CONFIG_H

#define SW_GPIO_SIZE 9               // Number of switches
#define LED_GPIO_SIZE 9              // Number of switch LEDs
#define SW_DEBOUNCE_TIME_US 4000      // Switch debounce delay in us
#define REACTIVE_TIMEOUT_MAX 1000000  // HID to reactive timeout in us

#ifdef PICO_GAME_CONTROLLER_C

// MODIFY KEYBINDS HERE, MAKE SURE LENGTHS MATCH SW_GPIO_SIZE
const uint8_t SW_KEYCODE[] = {HID_KEY_D, HID_KEY_F, HID_KEY_J, HID_KEY_K,
                              HID_KEY_C, HID_KEY_M, HID_KEY_A, HID_KEY_B,
                              HID_KEY_1, HID_KEY_E, HID_KEY_G};
const uint8_t SW_GPIO[] = {
    16, 17, 27, 20, 19, 18, 21, 26, 22,
};
const uint8_t LED_GPIO[] = {
    8, 7, 6, 9, 5, 4, 3, 2, 10
};

#endif

extern bool joy_mode_check;

#endif
