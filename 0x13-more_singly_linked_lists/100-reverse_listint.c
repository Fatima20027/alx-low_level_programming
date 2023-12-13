#include "lists.h"

/**
 * Function to reverse a listint_t linked list
 * update the head to the new first node 
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head) {


	 listint_t *prev = NULL, *current = *head;

    while (current != NULL) {
        listint_t *next_node = current->next;
        current->next = prev;
        prev = current;
        current = next_node;
    }

    *head = prev; 

    return *head;
}
