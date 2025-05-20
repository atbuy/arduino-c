#include <avr/io.h>
#include <util/delay.h>

int main() {
  // Setup PORTB5 as an output
  DDRB = DDRB | (1 << DDB5);

  // Loop
  while (1) {
    // Set PORTB5 to high
    PORTB = PORTB | (1 << PORTB5);

    // Wait for a second
    _delay_ms(1000);

    // Set PORTB5 to low
    PORTB = PORTB & ~(1 << PORTB5);

    // Wait for another second
    _delay_ms(1000);
  }
}



