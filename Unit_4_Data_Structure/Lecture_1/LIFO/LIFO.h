#ifndef _LIFO_H_
#define _LIFO_H_



typedef struct
{
    unsigned int *base;
    unsigned int *head;
    unsigned int count;
    unsigned int length;
} LIFO_t;

typedef enum 
{
    LIFO_no_error,
    LIFO_full,
    LIFO_empty,
    LIFO_null
}LIFO_STATUS;

LIFO_STATUS Lifo_Init(LIFO_t *lifo_controller, unsigned int* buffer, unsigned int length);
LIFO_STATUS Lifo_Push(LIFO_t *lifo_controller, unsigned int data);
LIFO_STATUS Lifo_Pop(LIFO_t *lifo_controller, unsigned int* data);

#endif