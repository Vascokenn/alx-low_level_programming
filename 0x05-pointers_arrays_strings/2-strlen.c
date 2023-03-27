#include "main.h"
/**
* _strlen - function that returns the length of a string
* @s: string
* Return: returns length of the string
*/

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[1] != '\0')
	{
		i++;
	}
	return (i);
}
