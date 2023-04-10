#include<stdio.h>
/**
 * main - prints the programs name followed by a new line
 * @argc: number of of arguments
 * @argv: array containing the arguments
 *
 * Return: always 0
 **/

int main(int argc, char *argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
