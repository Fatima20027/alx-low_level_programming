#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * _strdup - Duplicate a string
  * @str: the string to duplicate
  *
  * Return: the string duplicated
  */

char *_strdup(char *str) 
{	
	char *s;

    	if (str == NULL) {
        	return (NULL);
    }

   	size_t length = strlen(str);
    	s = malloc((length + 1) * sizeof(char)); 
    	if (duplicate == NULL) {
        	return (NULL);
    }
    strcpy(s, str);
    	return (s);
}
