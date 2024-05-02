void setup() {
  // put your setup code here, to run once:
  
  // 32 = 00100000 sets PB5 as output
  // Replaces the pinMode which sets certain pins to either input or output
  DDRB = 32; 
}

void loop() {
  // put your main code here, to run repeatedly:

  // PORTB is the section of the board where the specified pin belongs
  // We want to set the the fifth pin to on, therefore 32 = 00100000
  PORTB = 32;

  // Creates an artificial delay by setting 
  // PORTB = 32 as long as i < the specified condition
  for (long i = 0; i < 2000000; i++) {
    PORTB = 32;
  }
  
  PORTB = 0;
  for (long i = 0; i < 1000000; i++) {
    PORTB = 0;
  }
}
