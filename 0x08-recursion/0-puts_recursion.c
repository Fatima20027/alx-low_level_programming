#include "main.h"

/**
  * _puts_recursion - Print a string 
  * @s: the string to print
  *
  * Return: Nothing.
  */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_put_recursion(s + 1);
	}
	else
		_putchar("\n");
}
