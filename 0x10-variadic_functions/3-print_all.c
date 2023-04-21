#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - A function that prints anything.
 * @format: a list of types of arguments passed
 * to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, aux;
	char *s;

	va_start(args, format);
	while (format != NULL && format[i])
	{
		if (i != 0 && aux == 1)
			printf(", ");
		switch (format[i])
		{
			case 'c':
			printf("%c", va_arg(args, int));
			aux = 1;
			break;
			case 'i':
			printf("%d", va_arg(args, int));
			aux = 1;
			break;
			case 'f':
			printf("%f", va_arg(args, double));
			aux = 1;
			break;
			case 's':
			s = va_arg(args, char *);
			aux = 1;
			if (s == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
			default:
			aux = 0;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
