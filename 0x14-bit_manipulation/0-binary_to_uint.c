#include "main.h"

/**
 * binary_to_uint - Convert a binary representation to an
 *                  unsigned integer.
 * @b: The binary string.
 *
 * Return: The unsigned integer value.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int length, base_two;

	if (!b)
		return (0);

	result = 0;

	for (length = 0; b[length] != '\0'; length++)
		;

	for (length--, base_two = 1; length >= 0; length--, base_two *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}

		if (b[length] & 1)
		{
			result += base_two;
		}
	}

	return (result);
}
