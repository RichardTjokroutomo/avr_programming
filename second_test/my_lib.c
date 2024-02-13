#include "my_lib.h"

void delay(volatile long counter){
    while(counter > 0){
        counter--;
    }
}
