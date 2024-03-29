#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - ...
 * @separator: ...
 * @n: ...
 *   
 * Return: ...
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	if (n > 0)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		       printf("%d", va_arg(args, int));

		if (i != n - 1  && separator != NULL)
		{
				printf("%s", separator);
		}
		va_end(args);
	}

		printf("\n");
}
		
