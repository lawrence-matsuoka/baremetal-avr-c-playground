default:
	avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega328p -c -o lesson-3.o lesson-3.c
	avr-gcc -o lesson-3.bin lesson-3.o
	avr-objcopy -O ihex -R .eeprom lesson-3.bin lesson-3.hex
	sudo avrdude -F -V -c stk500v1 -p atmega328p -P /dev/ttyACM0 -b 19200 -U flash:w:lesson-3.hex
