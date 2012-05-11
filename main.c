#include <stdio.h>
#include "fifo.h"

int main(void) {
    
    Queue my;
    my = newQueue();
    printf("invoke func: %d\n", my.size(&my));
    printf("fifoh:%d\n", my_val);
    return 0;
}

