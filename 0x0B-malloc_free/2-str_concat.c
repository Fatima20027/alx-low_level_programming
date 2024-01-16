#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
  * str_concat - Concatenates two strings of any size
  * @s1: the first string to concatenate
  * @s2: the second string to concatenate
  *
  * Return: the two strings concatenated
  */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, k, l;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i]; i++);
       	for (j = 0; s2[j]; j++);

	l = i + j;
	s = malloc((sizeof(char) * l) + 1);

	if (s == NULL)
		return (NULL);
	j = 0;
	
	while (k < l)
	{
		if (k <= i)
			s[k] = s1[k];
		if (k >= i)
		{
			s[k] = s2[j];
			j++;
		}
		k++;
	}
	s[k] = '\0';
	return (s);
}	
