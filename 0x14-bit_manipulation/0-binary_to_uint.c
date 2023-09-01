#include "main.h"

/**
 * binary_to_uint - Convert a binary string to an unsigned integer
 * @b: The binary string to be converted
 * Return: The unsigned integer representation of the binary string
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int base = 1, index = 0;

	if (b == NULL)
		return (0);

	while (b[index + 1])
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
		index++;
	}

	while (index >= 0)
	{
		result += ((b[index] - '0') * base);
		base *= 2;
		index--;
	}

	return (result);
}
