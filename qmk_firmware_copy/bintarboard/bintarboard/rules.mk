# MCU
MCU = STM32F072

# Bootloader
BOOTLOADER = stm32-dfu

# Enable NKRO (JSON already sets it, but ensures compilation support)
NKRO_ENABLE = yes

# Optional features (disable unused to save space)
EXTRAKEY_ENABLE = yes   # Media/System keys
MOUSEKEY_ENABLE = no
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
BACKLIGHT_ENABLE = no

# Debounce (its in here again)
DEBOUNCE = 5