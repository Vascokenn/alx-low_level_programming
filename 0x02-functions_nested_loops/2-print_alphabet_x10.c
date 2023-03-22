#include "main.h"
/**
 * print_alphabet_x10 - print lowecase alphabetx10
 * description - print lowecase alphabetx10
 * Return - 0 always
 */
void print_alphabet_x10(void)
{
char alph;
int counter;

for (counter = 1; counter <= 10; counter++)
{
for (alph = 'a'; alph <= 'z'; alph++;)
{_putchar(alph);
}
_putchar('\n');
}
}
