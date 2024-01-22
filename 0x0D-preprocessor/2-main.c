#include <stdio.h>
#include "0-object_like_macro.h"
#include "1-pi.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main()
{
	int f;
	f = __FILE__;
	printf("%s\n", f);

	return (0);
}
