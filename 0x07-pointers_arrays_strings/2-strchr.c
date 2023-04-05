#include <stdio.h>
#include "main.h"

/**
  * _strchr - searches for a char in a string
  * @s: this is a start of pointer for the search
  * @c: the char to locate in the string
  *
  * Return: Always 0 (Success)
  */
char *_strchr(char *s, char c)
{
	int i;
	
	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
