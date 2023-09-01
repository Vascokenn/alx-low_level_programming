#include "main.h"

/**
 * get_endianness - Determine the endianness of the system
 *
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	unsigned int testValue = 1;
	char *byteRepresentation = (char *)&testValue;

	return ((int)*byteRepresentation);
}
