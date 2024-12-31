#include "LIFO.h"


LIFO_status LIFO_init    (LIFO_t *lifo_buf, unsigned int *buf , unsigned int length)
{ 
   if( buf == NULL)
    return LIFO_null;

   lifo_buf->base = buf; 
   lifo_buf->head = buf;
   lifo_buf->length = length;
   lifo_buf->count = 0;
   return LIFO_no_error;
}  

LIFO_status LIFO_add_item(LIFO_t *lifo_controller, unsigned int items)
{
   // check if buffer is null (does not exist)
    if ( !lifo_controller->head || !lifo_controller->base)
    return LIFO_null;
    // check if buffer is full
    if (lifo_controller->count == lifo_controller->length)
    return LIFO_full;
    
    *(lifo_controller->head) = items;
    lifo_controller->head++;
    lifo_controller->count++;
    return LIFO_no_error;
}

LIFO_status LIFO_get_item(LIFO_t *lifo_controller, unsigned int *items)
{
    if ( !lifo_controller->head || !lifo_controller->base)
    return LIFO_null;
    // check if buffer is full
    if (lifo_controller->count == lifo_controller->length)
    return LIFO_full;
    
    // pop item from the stack
    lifo_controller->head--;
    *items = *(lifo_controller->head);
    lifo_controller->count--;
    return LIFO_no_error;
}