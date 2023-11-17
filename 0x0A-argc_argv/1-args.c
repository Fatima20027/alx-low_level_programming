#include "main.h"
#include <stdio.h>

/**
  * main - prints the number of arguments passed into it
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */

int main(int argc , chat *argv[])
{ 
	(void) argc;
	printf("%s\n", argc - 1);

}
