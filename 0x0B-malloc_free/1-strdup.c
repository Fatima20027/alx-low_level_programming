#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
  * _strdup - Duplicate a string
  * @str: the string to duplicate
  *
  * Return: the string duplicated
  */

char *_strdup(char *str) 
{	int i = 0, size = 0;
	char *s;
    	if (str == NULL) {
        	return (NULL);
    }
   	size_t length = strlen(str);
    	s = malloc((length + 1) * sizeof(char)); 
    	if (s == NULL) 
	{
        	return (NULL);
    }
    strcpy(s, str);
    	return (str);
}
