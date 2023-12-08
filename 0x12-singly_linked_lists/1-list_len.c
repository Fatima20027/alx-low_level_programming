#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/** list_len - Show the number of elements of a list
  * @h: A linked list
  *
  * Return: ...
  */


size_t list_len(const list_t *h) {
    size_t count = 0; // Initialize count to 0

    // Traverse the list
    while (h != NULL) {
        count++;       // Increment count for each node
        h = h->next;    // Move to the next node
    }

    return count; // Return the total count
}



