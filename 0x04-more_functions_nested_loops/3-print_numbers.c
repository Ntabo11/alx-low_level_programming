#include "main.h"
/**
 * print_numbers - a funct that print the Nbrs(0 to 9)
 *
 * Return: 0-9 followed by newline
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
