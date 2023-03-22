#include "main.h"
/**
* _isalpha -  checks for alphabetic character
* @c: character to check
* Return: 1 if c is a letter and 0 otherwise or its something else
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'Z') || (c >= 'A' && c <= 'Z'))
{
return (0);
}
else
{
return (1);
}
_putchar('\n');
}
