#include <stdio.h>
#include "function_pointers.h"


/**
 * print_elem - prints an integer
 * @elem: the integer to print
 *
 * Return: Nothing.
 */


void array_iterator(int *array, size_t size, void (*action)(int)) {
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);






}
