#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: A pointer to the head of the dlistint_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;
	const dlistint_t *current = h;

	for (i = 0; current != NULL; i++)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
	return (i);

}
