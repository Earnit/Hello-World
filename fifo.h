#ifndef _FIFO_H
#define _FIFO_H

#if __cplusplus
extern "C" {
#endif

typedef struct {
    unsigned int (* size) (void *);
    unsigned char (* empty) (void *);
/*    front
    back
    push
    pop*/
} Queue;

Queue newQueue(void);

#if __cplusplus
}; // extern "C"
#endif

#endif // _FIFO_H
