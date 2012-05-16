#include <stdio.h>
#include <malloc.h>
#include "fifo.h"
#include "filo.h"

#include "list.h"

typedef struct kool_list {
	int data;
	struct list_head list;
} kool_list_t;

void list_basic_print(kool_list_t *list);
void list_basic_print_simple(kool_list_t *list);
void list_basic_add(kool_list_t *list);  


/**
 * MAIN func, create list & print it
 */
int main(void) {
    kool_list_t my_list;
    INIT_LIST_HEAD(&(my_list.list));

    list_basic_add(&my_list);
    list_basic_print(&my_list);
    list_basic_print_simple(&my_list);
   
    return 0;
}

/**
 * Add elements to list
 */
void list_basic_add(kool_list_t *list) {
    int i;
    kool_list_t *element;

    for (i = 0; i < 5; i++) {
	element = malloc(sizeof(kool_list_t));
	element->data = i;
	list_add_tail(&element->list, &list->list);
    }
}

/**
 * Print elements from list
 */
void list_basic_print(kool_list_t *list) {
    kool_list_t *element;

    list_for_each_entry(element, &list->list, list)
    printf("data: %d\n", element->data);
}

/**
 * Try to use another for each
 */ 
void list_basic_print_simple(kool_list_t *list) {
    struct list_head *pos;
    kool_list_t *element;
    
    list_for_each(pos, &list->list) {
        element = list_entry(pos, kool_list_t, list); 
        printf("determ data: %d\n", element->data);
    }
}
