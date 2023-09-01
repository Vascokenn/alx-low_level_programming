#include "main.h"

/**
 * get_bit - Retrieve the value of a bit at a specified index
 * @n: The input as an unsigned long integer
 * @index: The index of the bit to retrieve
 *
 * Return: The value (0 or 1) of the bit at the given index, or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}

	return (-1);
}
