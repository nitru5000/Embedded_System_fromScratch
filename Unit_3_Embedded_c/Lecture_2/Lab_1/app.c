#include "uart.h"

unsigned char string_buffer[100]  = "Learn-in-Depth:<abdullah-hassan>" ;


void  main(void)
{
    Uart_Send_String (string_buffer);
	
}