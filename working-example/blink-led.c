#define DDRB (*(volatile unsigned char *)0x24)
#define PORTB (*(volatile unsigned char *)0x25)

int main(void) {

  // Set PORTB5 as an output
  DDRB |= (1 << 5);

  // Infinite loop
  while (1) {
    // set LED on for the duration of the for loop
    for (long i = 0; i < 2000000; i++) {

      // Set PORTB5 to HIGH
      PORTB |= (1 << 5);
    }
    // set LED off for the duration of the for loop
    for (long i = 0; i < 1000000; i++) {

      // Set PORTB5 to LOW
      PORTB &= ~(1 << 5);
    }
  }
}
