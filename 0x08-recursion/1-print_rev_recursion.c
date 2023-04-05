#include "main.h"

/**
  * _print_rev_recursion - calls itself and print a string in reverse
  *
  * @s: points to the string char to print in reverse
  *
  * Return: void or NULL
  */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
