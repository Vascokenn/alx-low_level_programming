#include "main.h"
/**
* _isalpha -  checks for alphabetic character
* @l: character to check
* Return: 1 if c is a letter and 0 otherwise or its something else
*/
int _isalpha(int l)
{
if ((l >= 'a' && l <= 'Z') || (l >= 'A' && l <= 'Z'))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
