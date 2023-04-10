#include "main.h"
#include <stdio.h>

/**
  * main - this program prints its name without recompiling
  * @argc: counts the lines of arguments
  * @argv: argument vector of arrays of
  *
  * Return: Always 0. (Success)
  */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
