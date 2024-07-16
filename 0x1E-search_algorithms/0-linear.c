#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in @array
 * @value: Value to search for
 *
 * Return: Index of @value in @array, or -1 if not found or array is NULL
 */

int linear_search(int *array, size_t size, int value)
{

	size_t i;



	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);


}

