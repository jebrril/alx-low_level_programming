#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: Place holder.
 * @f: Placeholder
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
