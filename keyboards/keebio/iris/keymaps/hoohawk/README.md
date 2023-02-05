_Steps_:

-   Use the QMK configurator to update the keymap:
    https://config.qmk.fm/#/keebio/iris/rev7/LAYOUT
-   After compile, download the keymap in JSON
-   `qmk json2c <json_file>` to convert the keymap json file into c file. Then add the keymaps array to the `keymap.c` file for firmware complie.
-   from the root folder of `qmk_firmware`, compile the firmware: `qmk compile -kb keebio/iris/rev7 -km hoohawk`
-   then use the qmk toolbox to flash the firmware

_Note_:

-   `MT` did not work well (anti-aliasing, fast typing), so did not use it on the home row, as in Miryoku layout. need to revisit.
