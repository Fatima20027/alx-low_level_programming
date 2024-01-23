#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
  * print_dog - Prints all the data of a dog
  * @d: A dog structure
  *
  * Return: Nothing
  */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{

		printf("name: %s\n", (d->name) ? d->name : "(nil)");
                printf("age: %d\n", (d->age) ? d->age : 0);
                printf("owner: %s\n", (d->owner) ? d->owner : "(nil)")
	}
}	
