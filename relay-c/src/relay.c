#include <avr/io.h>
#include <util/delay.h>

int main(void) {
  // Setup
  // Set D7 to output
  DDRD = DDRD | (1 << DDB7);

  // Loop
  while (1) {
    // Write D7 high
    PORTD = PORTD | (1 << PORTD7);

    // Delay for 1 second
    _delay_ms(1000);

    // Write D7 low
    PORTD = PORTD & ~(1 << PORTD7);

    // Delay for 1 second
    _delay_ms(1000);
  }

  return 0;
}
