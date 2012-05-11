#include <stdio.h>
#include "fifo.h"

int main(void) {
    
    Queue my;
    my = newQueue();
    printf("invoke func: %d\n", my.size(&my));
    return 0;
}

