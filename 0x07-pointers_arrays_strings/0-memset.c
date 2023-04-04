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
	int i = 0;

	while (n > 1)
	{
		n++;
		s[i] = b;
		n--;
	}
	return (s);
}

