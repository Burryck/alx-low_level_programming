#include "main.h"

/**
  *  printing: 10 x alphabet
  *
  *
  *Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int a, b;

	for (b = 97; b <= 122; b++)
	{
		for (a = 0; a <= 10, a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
