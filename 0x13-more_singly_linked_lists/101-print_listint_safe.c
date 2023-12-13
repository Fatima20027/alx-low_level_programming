#include "lists.h"

/**
 *  function that prints a listint_t linked list.
 *  Cycle detected, exit with status 98
 *  Print the last node (if any) without checking for a cycle
 *
 *  Returns: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head){
	const listint_t *slow_ptr = head, *fast_ptr = head;
    size_t node_count = 0;

    while (fast_ptr != NULL && fast_ptr->next != NULL) {
        printf("%d\n", slow_ptr->n);
        node_count++;

        slow_ptr = slow_ptr->next;
        fast_ptr = fast_ptr->next->next;

        if (slow_ptr == fast_ptr) {
            
            fprintf(stderr, "Error: Cycle detected in the linked list\n");
            exit(98);
        }
    }

    
    if (slow_ptr != NULL) {
        printf("%d\n", slow_ptr->n);
        node_count++;
    }

    return node_count;

}
