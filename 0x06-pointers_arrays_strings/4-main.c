#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints the contents of an integer array to stdout.
 *
  * @a: The integer array to print.
  * @n: the number of elements in the array.
  *
 * Description: This function prints the contents of the input array
  * Return: 0.
  */
void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}

/**
  * main - check the code
  *
  * Return: Always 0.
  */
int main(void)
{
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

	print_array(a, sizeof(a) / sizeof(int));
	reverse_array(a, sizeof(a) / sizeof(int));
	print_array(a, sizeof(a) / sizeof(int));
	return (0);

}
