#include "lists.h"

size_t listint_len(const listint_t *h)
{
	int len =0;

    while(head != NULL){

        head = head->next;

        len++;

    }

    return len;
}
