#include "list.h"

/**
 * print_listint - Prints all the elements of a list.
 * @h: A linked list.
 *
 * Return: The number of nodes.
 */

size_t print_listint(const listint_t *h)
{
const listint_t *cursor = h;
size_t count = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
}
return (count);
}
