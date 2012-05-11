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

static void* f_front(void *queue) {
    return 0;
}

static void* f_back(void *queue) {
    return 0;
}

static void f_push(void *queue, void *element) {
}

static void f_pop (void *queue) {
}

Queue newQueue(void) {
    Queue tmp;
    tmp.capacity = 0;
    tmp.size = f_size;
    tmp.empty = f_empty;
    tmp.front = f_front;
    tmp.back = f_back;
    tmp.push = f_push;
    tmp.pop = f_pop;
    return tmp;
}
