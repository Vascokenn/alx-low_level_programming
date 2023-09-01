#include "main.h"

/**
 * flip_bits - Calculate the number of bits needed to transform on
 * e number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The count of bits to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bitCount = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			bitCount++;
		n >>= 1;
		m >>= 1;
	}

	return (bitCount);
}
