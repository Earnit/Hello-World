#include <stdio.h>
#include <malloc.h>
#include "fifo.h"
#include "filo.h"

#include "list.h"

typedef struct kool_list {
	int data;
	struct list_head list;
} kool_list_t;

int main(void) {

    int i = 0;

    LIST_HEAD(my_top_list);
    kool_list_t *element;

    for (i = 0; i < 5; i++) {
	element = malloc(sizeof(kool_list_t));
	element->data = i;
	list_add(&element->list, &my_top_list);
    }

    list_for_each_entry(element, &my_top_list, list)
	printf("data: %d\n", element->data);
   
    return 0;
}

