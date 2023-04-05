#include "main.h"

/**
  * _pow_recursion - calculates x raised to the power of y
  * @x: is the base value for the  multiplication
  * @y: is the number times x multiplies itself
  *
  * Return: the value multiplied y times
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
