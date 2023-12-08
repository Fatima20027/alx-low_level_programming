#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**Define the structure for a node in the linked list
 * Define the linked list structure
 * Function to return the number of elements in the linked list
 * Return the total count
 */

size_t list_len(const list_t *h) {
	struct Node {
    int data;
    struct Node* next;
};

typedef struct Node list_t;


size_t list_len(const list_t *h) {
    size_t count = 0;

    while (h != NULL) {
        count++;       // Increment count for each node
        h = h->next;    // Move to the next node
    }


    return count;


}


