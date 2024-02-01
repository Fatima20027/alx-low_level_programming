#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
  * add_node - Adds a new node at the beginning of a list
  * @head: The original linked list
  * @str: The string to add to the node
  *
  * Return: The address of the new list or NULL if it failed
  */

list_t *add_node(list_t **head, const char *str)
{
	if (str == NULL)
		return (NULL);

	list_t  *newNode = malloc(sizeof(struct node));

	if (newNode == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = *head;
	*head = newNode;
	return (newNone);
}
