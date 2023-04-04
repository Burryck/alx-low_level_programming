#include "main.h"

/**
  * print_chessboard - is a function to print an 8 array of char
  * @a: is a pointer to an [8] pieces of chess
  *
  * Return: Always 0. (Success)
  */
void print_chessboard(char (*a)[8])
{
	int sideA, sideB;

	for (sideA = 0; sideA < 8; sideA++)
	{
		for (sideB = 0; sideB < 8; sideB++)
			_putchar(a[sideA][sideB]);
		_putchar('\n');
	}
}
