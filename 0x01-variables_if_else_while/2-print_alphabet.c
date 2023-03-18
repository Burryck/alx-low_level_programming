#include <stdio.h>

/**
 * main - writing a program which prints the alphabets in lowercase
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	char lca[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(lca[i]);
	}
	putchar('\n');
	return (0);
}
