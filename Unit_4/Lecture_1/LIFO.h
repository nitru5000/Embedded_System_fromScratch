#ifndef LIFO_H_
#define LIFO_H_


#include "stdio.h"
#include "stdlib.h"

typedef struct {
    unsigned int *base;
    unsigned int *head;
    unsigned int length;
    unsigned int count;
}LIFO_t;

typedef enum 
{
  LIFO_no_error,
  LIFO_full,
  LIFO_empty,
  LIFO_null,
} LIFO_status;

LIFO_status LIFO_init    (LIFO_t *lifo_controller, unsigned int *buf , unsigned int length);
LIFO_status LIFO_add_item(LIFO_t *lifo_controller, unsigned int items);
LIFO_status LIFO_get_item(LIFO_t *lifo_controller, unsigned int *items);

#endif
