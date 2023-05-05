#include "main.h"

/**
 * get_bit - function to get a bit
 * @index: index.
 * @n: placeholder
 * Return: the value of index, or -1 if it fails
 */
int get_bit(unsigned long int n, unsigned long int index)
{
	unsigned int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}
