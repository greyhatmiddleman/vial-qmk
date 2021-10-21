MOUSEKEY_ENABLE     = yes     # Mouse keys
RGBLIGHT_ENABLE     = no    # Enable WS2812 RGB underlight.
VIA_ENABLE          = yes         # Enable VIA
VIAL_ENABLE         = yes         # Enable VIAL
OLED_DRIVER_ENABLE  = no
EXTRAKEY_ENABLE     = yes
LTO_ENABLE          = yes
QMK_SETTINGS        = yes
COMBO_ENABLE        = no


PIMORONI_TRACKBALL_ENABLE = yes
ifeq ($(strip $(PIMORONI_TRACKBALL_ENABLE)), yes)
    POINTING_DEVICE_ENABLE = yes
    SRC += drivers/sensors/pimoroni_trackball.c
    QUANTUM_LIB_SRC += i2c_master.c
endif


