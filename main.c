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


    for (i = 0; i < 5; i++) {
        kool_list_t *element;
	element = malloc(sizeof(kool_list_t));
	element->data = i;
	list_add(&element->list, &my_top_list);
    }

    kool_list_t *nelement;
    list_for_each_entry(nelement, &my_top_list, list)
	printf("data: %d\n", nelement->data);
   
    return 0;
}

