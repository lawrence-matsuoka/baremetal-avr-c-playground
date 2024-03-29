#include <avr/io.h>
#include <util/delay.h>

int main(void) {

	// Set PORTB5 as an output
	DDRB = DDRB | (1 << DDB5);

	// forever...
	while(1)
	{
		// set PORTB5
		PORTB = PORTB | (1 << PORTB5);
	
		// wait
		_delay_ms(2000);

		// unset PORTB5
		PORTB = PORTB & ~(1 << PORTB5);

		// wait some more
		_delay_ms(1000);
	}
}
