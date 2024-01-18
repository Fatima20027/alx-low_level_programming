#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: the size to allocate
 *
 * Return: Nothing.  
 **/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit (98);
	return (ptr);
}
