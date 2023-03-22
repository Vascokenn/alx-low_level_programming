#include "main.h"
/**
 * _islower - checks for lowecase characters
 * @c: character to check
 * Return: 1 if lowecase and 0 if uppercase
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
else
{
return (0);
}
_putchar('\n');
}
}
