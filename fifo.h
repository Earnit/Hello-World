#ifndef _FIFO_H
#define _FIFO_H

#if __cplusplus
extern "C" {
#endif

#include "common.h"

static unsigned int my_val = 34;

typedef struct {
    U32 capacity;
    U32 (* size) (void *); /* Return size */
    U8 (* empty) (void *); /* Test whether container is empty */
    void* (* front) (void *); /* Access next element */
    void* (* back) (void *); /* Access last element */
    void (* push) (void* , void *);  /* Insert element. args: Queue , element */
    void (* pop) (void *); /* Delete next element */
} Queue;

Queue newQueue(void);

#if __cplusplus
}; // extern "C"
#endif

#endif // _FIFO_H
