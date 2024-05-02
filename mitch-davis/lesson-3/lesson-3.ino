// Pointers and dereferencing pointers
#define somePortB *((volatile byte*) 0x25)  // Memory address 0x25
#define someDirB *((volatile byte*) 0x24)   // Memory address 0x24

void setup() {

  someDirB = 32;
// volatile keyword will override the compiler optimization
// PORTB lives at memory address 0x25
  
}

void loop() {

  // a volatile byte pointer (variable) lives at 0x25;
//volatile byte* bPortRegister = 0x25;
  // Set to 00100000 
//*bPortRegister = 32;

// Condensed form of the above
//*((volatile byte*) 0x25) = 32;

  // Use define at the top to dereference the pointer to the address
  somePortB = 32;

  // Delay with for loop by setting *bPortRegister to 00100000 as long as i < condition
  for (long i = 0; i < 1000000; i++) {
    somePortB = 32;
  }

  // Set *bPortRegister to 00000000 
//  *bPortRegister = 0;

  for (long i = 0; i < 1000000; i++) {
    somePortB = 0;
  }


}
