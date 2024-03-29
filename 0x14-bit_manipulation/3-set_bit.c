#include "main.h"

/**
 * set_bit - setting a bit to 1 at a given index.
 * @n: pointer to the number to change.
 * @index: This is the index of the bit to be set to 1 .
 * Return: 1 for success, else, -1 for failure.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = ((1UL << index) | *n);

	return (1);
}
