default:
	avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega328p -C -r -o bin/led.o src/led.c
	avr-gcc -o bin/led.bin bin/led.o
	avr-objcopy -O ihex -R .eeprom bin/led.bin bin/led.hex
	sudo avrdude -F -V -c arduino -p ATMEGA328P -P /dev/ttyUSB0 -b 115200 -U flash:w:bin/led.hex
