#ifndef _FILO_H
#define _FILO_H

#if __cplusplus
extern "C" {
#endif

#include "common.h"

typedef struct {
    U32 capacity;
    U32 (*size) (void *); /* Return size */
    U8 (*empty) (void *); /* Test whether container is empty */
    void* (*top) (void *); /* Access next element */
    void (*push) (void * , void *);  /* Insert element. args: Queue , element */
    void (*pop) (void *); /* Delete next element */
} Stack_t;

#if __cplusplus
}; // extern "C"
#endif

#endif // _FIFO_L
