#include "main.h"

/**
  * _strdup - Duplicate a string
  * @str: the string to duplicate
  *
  * Return: the string duplicated
  */

char *_strdup(char *str) 
{	
	int i = 0, size = 0;
	char *s;

    	if (str == NULL) {
        	return (NULL);
    }
   	for (str[size] != '\0'; size++)
    	s = malloc(size * sizeof(*str)+1); 
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
