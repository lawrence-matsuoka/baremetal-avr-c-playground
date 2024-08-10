#define PORTB *((volatile int *)0x25)
#define DDRB *((volatile int *)0x24)

int main(void) {

  // Set PORTB5 as an output
  //	DDRB = DDRB | (1 << DDB5);
  PORTB = 32;
  // forever...
  while (1) {
    // set PORTB5
    //		PORTB = PORTB | (1 << PORTB5);
    for (long i = 0; i < 200; i++) {
      PORTB = 32;
    }

    // unset PORTB5
    //		PORTB = PORTB & ~(1 << PORTB5);
    for (long i = 0; i < 1000000; i++) {
      PORTB = 0;
    }
  }
}
