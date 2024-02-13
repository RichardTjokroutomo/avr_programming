#define PORT_C *((volatile byte*) 0x28)
#define PORT_C_DDR *((volatile byte*) 0x27)

void setup() {
  // put your setup code here, to run once:
  PORT_C_DDR = 48;
}

void loop() {
  // put your main code here, to run repeatedly:
  PORT_C = 48;
  for(long i = 0; i<10000; i++){PORT_C = 48;}
  PORT_C =  0;
  for(long i = 0; i<10000; i++){PORT_C = 0;}
}
