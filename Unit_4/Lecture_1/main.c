#include "LIFO.h"


unsigned int buff_1[5];

void main(void) 
{
    unsigned int item ,temp = 0;
    // Objects of struct LIFO
    LIFO_t uart_lifo , i2c_lifo;
    
    LIFO_init( &uart_lifo, buff_1 , 5);
    //dynamic allocation
  //  unsigned int *buff_2 = (unsigned int*)malloc(5 * sizeof(int));
  //  LIFO_init( &i2c_lifo , buff_2 , 5);
 /*
    for (item = 0; item <5 ; item++)
        {
            
            if (LIFO_add_item(&uart_lifo, item) == LIFO_no_error)
            printf("uart_lifo add : %d\n", item);
        }

    for (item = 0; item <5 ; item++)
        {
           if (LIFO_get_item(&uart_lifo, &temp) == LIFO_no_error) 
            printf("uart_lifo get : %d\n",temp);
        }
        */
}