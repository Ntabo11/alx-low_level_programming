#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times alpha
 */
void print_alphabet_x10(void)
{
	int tim;
	char la;

	for (tim = 1; tim <= 10; tim++)
	{
		for (la = 'a'; la <= 'z'; la++)
			_putchar(la);
		_putchar('\n');
	}
}
