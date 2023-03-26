#include "main.h"
/**
*_isupper - function that verifies if a character is uppercase or not
*@c: tested being tested
*Return: returns 1 if character is uppercase an 0 if its not
*/

int _isupper(int c)
	{
		if ((c >= 'A') && (c <= 'Z'))
			return (1);
			return (0);
