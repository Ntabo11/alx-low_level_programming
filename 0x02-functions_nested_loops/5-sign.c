#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: the number of the sign to be printed
 * Return: 1 if the statement is > 0
 * 0 of number is zeoro
 * -1 if number is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
		_pucthar(48);
		return (0);
}
