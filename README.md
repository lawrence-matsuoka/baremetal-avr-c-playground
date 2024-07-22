# baremetal-c-avr-exploration

A repository to explore how to program an ATmega328P microcontroller development board (Arduino Uno R3) with baremetal AVR C.

## Libraries needed
- avr-gcc
- avrdude
- avr-libc
    -binutils-avr

## Makefile
Create a makefile to run certain commands to compile the code and to flash the microcontroller

### Example Makefile
`
default:
	avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega328p -c -o blink-led.o blink-led.c
	avr-gcc -o blink-led.bin blink-led.o
	avr-objcopy -O ihex -R .eeprom blink-led.bin blink-led.hex
	sudo avrdude -F -V -c arduino -p ATMEGA328P -P /dev/ttyACM0 -b 115200 -U flash:w:blink-led.hex
`

## Compile and run
- Type `make` into the command line
