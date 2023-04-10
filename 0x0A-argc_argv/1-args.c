#include "main.h"
#include <stdio.h>

/**
  * main - Prints the number of args passed through into it
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always 0. (Success)
  */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
