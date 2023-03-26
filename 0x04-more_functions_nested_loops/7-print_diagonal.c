#include "main.h"
/**
 * print_diagonal - a function that drwas a diagonal line
 * @n: input number of times '\' should be printed
 * REturn: a diagonal
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
