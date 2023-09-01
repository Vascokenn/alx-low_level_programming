#include "main.h"

/**
 * set_bit - Set the value of a bit to 1 at a specified index.
 * @n: Pointer to an unsigned long integer.
 * @index: The index of the bit to be set.
 *
 * Return: 1 if the operation was successful, -1 if it failed.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bitmask;

	if (index > 63)
		return (-1);

	bitmask = 1 << index;
	*n = (*n | bitmask);

	return (1);
}
