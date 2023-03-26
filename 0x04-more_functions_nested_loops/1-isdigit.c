#include "main.h"
/**
 * _isdigit - write a function that checks for a digit
 * @c: the character to check
 * Return: 0(success)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
