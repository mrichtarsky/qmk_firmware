/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#undef ORYX_CONFIGURATOR

#undef TAPPING_TERM
#define TAPPING_TERM 200

#define ONESHOT_TAP_TOGGLE 3

#define USB_SUSPEND_WAKEUP_DELAY 0
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED 10

#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX 45

#define CAPS_LOCK_STATUS
#define LAYER_STATE_16BIT

#define RGB_MATRIX_STARTUP_SPD 60
