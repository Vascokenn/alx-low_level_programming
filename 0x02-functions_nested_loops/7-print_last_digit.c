#include "main.h"
/**
* print_last_digit - prints the last digit of a number
* @n: int used for the argument of the function
* Return: value of the last digit
*/
int print_last_digit(int n)
{
int last;
last = n % 10;
if (last < 0)
last = last * -1;
_putchar(last + '0');
return (last);
}
