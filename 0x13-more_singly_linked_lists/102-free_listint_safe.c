#include "lists.h"


 /**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h) {
	listint_t *current = *h, *temp = NULL;
    size_t node_count = 0;

    while (current != NULL) {
        temp = current->next;
        free(current);
        current = temp;
        node_count++;
    }

    *h = NULL; 

    return node_count;



}
