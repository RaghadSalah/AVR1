#include <avr/io.h>
#include <util/delay.h>

int main(void)
{ DDRA = 0xff;
while(1)
{  for(int i =0; i<8 ;i++)
    {  PORTA |= (1<<i);
       _delay_ms(400);
    }
   for(int i =0; i<8 ;i++)
    {  PORTA &= ~(1<<i);
       _delay_ms(400);
    }

}

}