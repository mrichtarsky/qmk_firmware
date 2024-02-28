# Set any rules.mk overrides for your specific keymap here.
# See rules at https://docs.qmk.fm/#/config_options?id=the-rulesmk-file
LTO_ENABLE = yes
CONSOLE_ENABLE = yes
COMMAND_ENABLE = no
WEBUSB_ENABLE = no
ORYX_ENABLE = no
TAP_DANCE_ENABLE = yes
SRC = matrix.c
CAPS_WORD_ENABLE = yes

# These settings do not reduze size, apparently default.
MIDI_ENABLE = no
STENO_ENABLE = no
VIRTSER_ENABLE = no
