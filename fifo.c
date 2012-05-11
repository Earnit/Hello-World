#include "fifo.h"

#define this ((Queue *)queue)

static U32 f_size(void *queue) {
    return this->capacity;
}

static U8 f_empty(void *queue) {
    if (this->capacity) {
        return 1;
    } else {
        return 0;
    }
}

Queue newQueue(void) {
    Queue tmp;
    tmp.capacity = 0;
    tmp.size = f_size;
    tmp.empty = f_empty;
    return tmp;
}
