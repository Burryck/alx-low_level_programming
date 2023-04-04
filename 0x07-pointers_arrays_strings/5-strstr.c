#include "main.h"
#include <stdio.h>

/**
  * _strstr - locating a substring
  * @haystack: an input string
  * @needle: an input for a substring
  *
  * Return: to the beginning of a located string or NULL in not found
  */
char *_strstr(char *haystack, char *needle)
{ 
	for (; *haystack != '\0'; haystack++)
	{	
		char *hs = haystack;
		char *nd = needle;

		while (*hs == *nd && *nd != '\0')
		{
			hs++;
			nd++;
		}
		if (*nd == '\0')
			return (haystack);
	}
	return (NULL);
}
