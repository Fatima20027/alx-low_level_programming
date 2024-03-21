#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all nodes
 * @head: pointer to head
 * Return: returns the sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);

}

