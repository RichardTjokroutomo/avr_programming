# Target: dependencies
# 	actions

# do all in one go
go: test_one.c my_lib.c
	avr-gcc -g -Os -mmcu=atmega328p -c test_one.c
	avr-gcc -g -Os -mmcu=atmega328p -c my_lib.c
	avr-gcc -g -mmcu=atmega328p -o test_one.bin test_one.o  my_lib.o
	avr-objcopy -O ihex -R .eeprom test_one.bin test_one.hex 
	avrdude -p atmega328p -c usbtiny -U flash:w:C:\Users\Richard\Documents\__self-learning\_hardware\AVR\second_test\test_one.hex:i





# SUB INSTRUCTIONS
# ==============================================================================================================
# run
run: test_one.hex
	avrdude -p atmega328p -c usbtiny -U flash:w:C:\Users\Richard\Documents\__self-learning\_hardware\AVR\second_test\test_one.hex:i

# convert to hex
convert: test_one.bin
	avr-objcopy -O ihex -R .eeprom test_one.bin test_one.hex 

# link
link: test_one.o my_lib.o
	avr-gcc -g -mmcu=atmega328p -o test_one.bin test_one.o  my_lib.o

# compile
test_one.o: test_one.c 
	avr-gcc -g -Os -mmcu=atmega328p -c test_one.c

my_lib.o: my_lib.c
	avr-gcc -g -Os -mmcu=atmega328p -c my_lib.c


