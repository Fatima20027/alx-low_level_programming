#include <stdlib.h>
#include "dog.h"




// Define the struct
typedef struct {
    char name;
    int age;
    char owner;
} dog_t;

// Function to free a dog
void free_dog(dog_t *d) {
    // Check if the pointer is not NULL before freeing
    if (d != NULL) {
        free(d);
    }
}

