#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - is a funtion that prints a name
 * @name: is what to print
 * @f: points to the print function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
