#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - A function that prints numbers
 * @separator: Separator string.
 * @n: N of arguments.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list namba;
	unsigned int i;
	int num;

	va_start(namba, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(namba, int);
		printf("%d", num);

	if (separator != NULL && i < n - 1)
		printf("%s", separator);
	}
	printf("\n");
	va_end(namba);
}
