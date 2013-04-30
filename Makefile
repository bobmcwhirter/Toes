##
## Requires https://github.com/sudar/Arduino-Makefile
## 
## Install it (git clone) under $HOME
##

BOARD_TAG    = uno
ARDUINO_PORT = /dev/cu.usb*
ARDUINO_LIBS = 

include $(HOME)/Arduino-Makefile/arduino-mk/Arduino.mk
