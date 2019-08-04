# Set any rules.mk overrides for your specific keymap here.
# See rules at https://docs.qmk.fm/#/config_options?id=the-rulesmk-file
LINK_TIME_OPTIMIZATION_ENABLE = yes
COMMAND_ENABLE = no
SRC = matrix.c
RGBLIGHT_ENABLE = no
RGB_MATRIX_ENABLE = yes

NKRO_ENABLE = yes
VIRTSER_ENABLE = yes
EXTRAKEY_ENABLE = yes
MOUSEKEY_ENABLE = no        # Mouse keys(+4700)
STENO_ENABLE = yes          # Additional protocols for Stenography(+1700), requires VIRTSER
# AUDIO_ENABLE = no           # Audio output on port C6
# MIDI_ENABLE = no            # MIDI controls