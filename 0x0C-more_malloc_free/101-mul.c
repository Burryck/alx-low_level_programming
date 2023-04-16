#include <stdlib.h>
#include <stdio.h>

/**
 * helper_function: this function checks if a character is digit
 * @c: is the character to check
 *
 * Return: Always 0 (Success)
 */
int helper_function(char c)
{
	return (c >= '0' && c <= '9');
}
/**
 * main - multiplication of two positive numbers
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num, num1, res, len1, *product;
	int j = 0, len2 = 0;
	char *digit1, *digit2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	digit1 = argv[1];
	for (num = 0; digit1[num] != '\0'; num++)
	{
		if (!helper_function(digit1[num]))
		{
			printf("Error\n");
			return (98);
		}
	}
	digit2 = argv[2];
	for (num = 0; digit2[num] != '\0'; num++)
	{
		if (!helper_function(digit2[num]))
		{
			printf("Error\n");
			return (98);
		}
	}
	len1 = num;
	len2 = j;

	product = calloc(len1 + len2, sizeof(int));
	if (product == NULL)
	{
		printf("Error\n");
		return (98);
	}
	for (num = len1 - 1; num >= 0; num--)
	{
		res = 0;
		for (num = len1 - 1, num1 = num + j + 1; j >= 0; j--, num1--)
		{
			product[num1] += (digit1[1] - '0') * (digit2[j] - '0') + res;
			res = product[num1] / 10;
			product[num1] %= 10;
		}
		product[num1] += res;
	}
	num = 0;
	while (product[num] == 0 && num < len1 + len2 - 1)
	{
		num++;
	}
	for (; num < len1 + len2; num++)
	{
		printf("%d", product[num]);
	}
	printf("\n");
	free(product);

	return (0);
}
