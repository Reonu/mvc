#ifndef PLUGIN_CATCHER_H
#define PLUGIN_CATCHER_H

// Uncomment this setting if you want to block the entire screen to force the user to switch plugins
// Leaving this commented out will simply display the messages instead.
#define BLOCK_CAUGHT_PLUGINS

// Uncomment this setting if you want to catch all of the following graphics plugins:
//   Jabo, Glide64, old LINK's GLideN64 (4.0), Project64 Video
//#define CATCH_ALL_BAD_PLUGINS

// Uncomment this setting if you want to catch Jabo
// #define CATCH_JABO

// Uncomment this setting if you want to catch old (4.0) LINK's GLideN64
#define CATCH_OLD_LINKS_GLIDEN64

// Uncomment this setting if you want to catch Glide64 and Project64 Video
 #define CATCH_GLIDE64_PJ64VIDEO

#define PLUGIN_ERROR_MESSAGE \
    "Your current plugin is not compatible\n" \
    "with this hack. Please use one of these:\n" \
    "- ParaLLEl\n" \
    "- GLideN64 (NOT LINK's GLideN64 4.0 or Glide64)\n" \
    "- Jabo\n" \
    "- LINK's GLideN64 4.1\n" \
    "\n" \
    "On Android, select the ROM, go to Settings, go to\n" \
    "emulation profile, and select GLideN64-Medium\n" \
    "The recommended emulator on Android is M64Plus FZ"

#endif
