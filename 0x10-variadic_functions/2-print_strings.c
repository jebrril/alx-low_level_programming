#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - A function that prints strings
 * @separator: The string separator
 * @n: The number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list namba;
	unsigned int i;
	char *str;

	va_start(namba, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(namba, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
		printf("\n");
		va_end(namba);
}
