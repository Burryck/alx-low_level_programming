#include "main.h"

/**
  * _memset - fills the first bytes of the memory
  * @s: is a startint point to the memory
  * @b: is the constant value
  * @n: is the memory area to be changed
  * Return: a pointer to the memory address 's'
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

