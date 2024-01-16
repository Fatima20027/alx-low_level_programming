#include <stdlib.h>
#include "main.h"

/**
  * _strdup - Duplicate a string
  * @str: the string to duplicate
  *
  * Return: string 
  */

char *_strdup(char *str) 
{	
	int i 
	char *s;

    	if (str == NULL) 
	{
        	return (NULL);
	}
   	for (size = 0; str[size] != '\0'; size++)
    	s = malloc(size * sizeof(char)+1); 
    	if (s == NULL) 
	{
        	return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			s[i] = str[i];
	}
    	return (s);
}
