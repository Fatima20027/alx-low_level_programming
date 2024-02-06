#include "lists.h"

/**
 * add_nodeint_end - Add a new node at the end of a listint_t list
 * @head: Pointer to the head of the list
 * @n: Integer to be stored in the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
	*head = new;
	return (new);
	}

	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = new;

	return (new);
}
