#include "main.h"
/**
* print_diagnal - entry point
* Description: prints diagnal
* @n: number of times the character
*/
void print_diagonal(int n)
{
	int row, num_lines;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= n; row++)
		{
			if (row > 1)
			{
			for (num_lines = 1; num <= row - 1; num_lines++)
			{
			_putchar(' ');
			}
		}
		_putchar('\\');
		_putchar('\n');
		}
	}
}
