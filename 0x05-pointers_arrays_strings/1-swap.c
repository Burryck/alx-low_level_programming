#include "main.h"

/**
  *swap_int - is used to swap the integer
  *@a: value of a
  *@b: value of b
  * Return: Always 0.
  */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
