#pragma once

// how long before a tap becomes a hold
#undef TAPPING_TERM
#define TAPPING_TERM 250

// makes tap and hold keys work better for fast typers who don't want
// tapping term set above 500
// #define PERMISSIVE_HOLD

// Mod Tap keys are no longer treated as a special case, and their behavior will match the behavior of other dual-role keys such as Layer Tap
#define IGNORE_MOD_TAP_INTERRUPT

// tap anyway, even after TAPPING_TERM, if there was no other key
// interruption between press and release
#define RETRO_TAPPING
