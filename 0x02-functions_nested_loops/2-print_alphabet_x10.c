#include "main.h"

/**
  * main - Entry point
  * Description: 'Prints alphabets in lowercase'
  *
 */
void print_alphabet_10(void)
{
	int a,b;

	for(b = 97; b <=122; b++)
	{
		for(a = 0; a <= 10, a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
