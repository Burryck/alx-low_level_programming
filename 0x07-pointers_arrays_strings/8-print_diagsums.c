#include <stdio.h>
#include "main.h"

/**
  * print_diagsums - to diagonally sum up an array of square matrix int.
  * @a: defines a pointer to the arrays
  * @size: defines the size of the square matrix
  * Return: 0. or void
  */
void print_diagsums(int *a, int size)
{
	int array1, array2, sum = 0, sum1 = 0;

	for (array1 = 0; array1 <= (size * size); array1 += size + 1)
		sum += a[array1];
	for (array2 = size - 1; array2 <= (size * size) - size; array2 +=
			size - 1)
		sum1 += a[array2];
	printf("%d, %d\n", array1, array2);
}
