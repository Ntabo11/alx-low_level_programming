#include "main.h"
/**
 * _print_rev_recursion - input point
 * @s: input
 * Return: Always 0(success)
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);
	else
		return;
	_putchar(*s);
}
