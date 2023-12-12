#include "main.h"

/**
 * Add the data of the current node to the sum 
 * Move to the next node 
 *
 * Return: sum
 */



int sum_listint(listint_t *head) {

	 int sum = 0;

    while (head != NULL) {
        sum += head->n;   
        head = head->next; 
    }

    return sum;
}
