#include "main.h"
#include "stdio.h"
/**
 * print_line - a function that prints 10 times the numbers(0 to 14)
 * _putchar only 3 times
 * @n: character where the funct will start
 * Return: 0 - 14 x10 follow by new line
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
