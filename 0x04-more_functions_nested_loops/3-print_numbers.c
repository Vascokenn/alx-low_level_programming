#include "main.h"
/**
* print_numbers - prints 0 to 9
* @c: character to print
* Return: returns 0
*/

int print_numbers(void)
{
	int num = 0;
	while(num <= 9)
	{
		_putchar(num);
		num++;
	}
		_putchar('\n');
}
