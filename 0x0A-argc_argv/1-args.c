#include <stdio.h>

/**
  
main - prints the number of arguments passed into it
@argc: argument count
@argv: argument vector
*
Return: Always zero
*/

int main(int argc , __atribute__((unused)) char *argv[])
{
        printf("%d\n", argc - 1);
        return (0);
}
