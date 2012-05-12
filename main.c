#include <stdio.h>
#include "fifo.h"
#include "filo.h"

#include "list.h"

typedef struct kool_list {
	int to;
	struct list_head list;
	int  from;	
} kool_list_t;

int main(void) {
    
    kool_list_t mylist;

    LIST_HEAD(mylist_macro);
    struct list_head name = { &(name), &(name) };

    Queue my;
    my = newQueue();
    printf("invoke func: %d\n", my.size(&my));
   
    return 0;
}

