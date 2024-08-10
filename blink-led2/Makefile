default:
	avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega328p -c -o blink-led.o blink-led.c
	avr-gcc -o blink-led.bin blink-led.o
	avr-objcopy -O ihex -R .eeprom blink-led.bin blink-led.hex
	sudo avrdude -F -V -c arduino -p ATMEGA328P -P /dev/ttyACM0 -b 115200 -U flash:w:blink-led.hex
