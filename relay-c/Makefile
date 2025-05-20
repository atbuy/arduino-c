default:
	avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega328p -c -r -o bin/relay.o src/relay.c
	avr-gcc -o bin/relay.bin bin/relay.o
	avr-objcopy -O ihex -R .eeprom bin/relay.bin bin/relay.hex
	sudo avrdude -F -V -c arduino -p ATMEGA328P -P /dev/ttyUSB0 -b 115200 -U flash:w:bin/relay.hex
