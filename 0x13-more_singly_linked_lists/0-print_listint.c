#include <stdio.h>
#include <string.h>
#include "list.h"

/**
 * print_listint - Prints all the elements of a list.
 * @h: A linked list.
 *
 * Return: The number of nodes.
 */

size_t print_listint(const listint_t *h);

{
	size_t count = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->count);
		h = h->next;
		count++;
	}

	return (count);
}
