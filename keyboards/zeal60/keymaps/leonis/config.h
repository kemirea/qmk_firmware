#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

/* enable/disable LEDs based on layout */
#undef USE_SPLIT_BACKSPACE
#define USE_SPLIT_BACKSPACE 0

#undef USE_SPLIT_LEFT_SHIFT
#define USE_SPLIT_LEFT_SHIFT 0

#undef USE_SPLIT_RIGHT_SHIFT
#define USE_SPLIT_RIGHT_SHIFT 0

#undef USE_7U_SPACEBAR
#define USE_7U_SPACEBAR 0

#undef USE_ISO_ENTER
#define USE_ISO_ENTER 0

#undef BACKLIGHT_DISABLE_HHKB_BLOCKER_LEDS
#define BACKLIGHT_DISABLE_HHKB_BLOCKER_LEDS 0

#define RGBLIGHT_ANIMATIONS    // Underglow animations. 
#define RGB_DI_PIN B0          // The pin your RGB strip is wired to
#define RGBLED_NUM 34          // Number of LEDs
#define RGBLIGHT_HUE_STEP 5    // How much each press of rgb_hue changes hue
#define RGBLIGHT_SAT_STEP 10   // How much each press of rgb_sat changes sat
#define RGBLIGHT_VAL_STEP 10   // How much each press of rgb_val changes val

// Enable current limiting for RGB underglow.
#define USB_MAX_POWER_CONSUMPTION 500
#define RGBSTRIP_CURRENT_LIMIT 800        // Strip current limit in mA.
#define RGBSTRIP_MAX_CURRENT_PER_LIGHT 40 // mA per light when at max brightness.

#endif //CONFIG_USER_H 
