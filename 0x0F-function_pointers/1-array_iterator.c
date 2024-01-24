#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - execute function
 * @size : size of the array
 * @action : a pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;
	if (array != NULL && action != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
