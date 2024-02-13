// here, we define PORTC manually, while PORTB uses io libary

#include <avr\io.h>
#include <util\delay.h>
#include "my_lib.h"

#define PORT_C *((volatile unsigned char*) 0x28)  // char is 8 bits, so it replaces byte
#define PORT_C_DDR *((volatile unsigned char*) 0x27)

int main(){
    PORT_C_DDR = 48;  // void setup
    DDRB = 32;

    while(1){  // void loop
        // set the IOs
        PORT_C = 48;
        PORTB = 32;

        // delay
        //delay(10000);  // custom delay
        _delay_ms(250);

        // set the IOs
        PORT_C = 0;
        PORTB = 0;
        
        // delay
        //delay(10000); // custom delay
        _delay_ms(250);
       
    }
}