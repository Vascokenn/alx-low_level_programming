#include "main.h"
/**
* _isdigit - chech if is is a digit or not
* @c: character to be checked
* Return: 1 if its a digit and 0 if not
*/
int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	return (0);
}
