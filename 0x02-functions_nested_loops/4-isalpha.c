#include "main.h"
/**
* _isalpha -  checks for alphabetic character
* @c: character to check
* Return: 1 if c is a letter and 0 otherwise or its something else
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
