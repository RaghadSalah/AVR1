#include <avr/io.h>
#include <util/delay.h>

int main(void)
{  
DDRA = 0xff;
while(1)
 {
DDRA |= (1<<LED_PIN);
PORTA |= (1<<LED_PIN);
_delay_ms(10000);
PORTA &= ~(1<<LED_PIN);
_delay_ms(1000);
}
}