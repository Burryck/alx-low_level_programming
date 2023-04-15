#include "main.h"
#include <stdio.h>

/**
  * main - a program that prints all the args it receives
  * @argc: counts the lines of arguments that is passed through
  * @argv: argument vector
  *
  * Return: Always 0. (Success)
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
