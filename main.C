/*
* APPLICATION LAYER


*/
#include "../HAL/LED/LED_Interface.h"
#include "../MCAL/GPIO/GPIO_Interface.h"

void delay(void)
{
    unsigned int i;
    for(i = 0; i < 50000; i++);
}

void main()
{
    LED_Init(GPIO_PORTB, GPIO_PIN0);

    while(1)
    {
        LED_On(GPIO_PORTB, GPIO_PIN0);
        delay();

        LED_Off(GPIO_PORTB, GPIO_PIN0);
        delay();
    }
}