#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - Entry P
 * @b: input Amount
 * Return: new mem pointer
 */
void *malloc_checked(unsigned int b)
{
	void *n;
	n = malloc(b);

	if (n == NULL)
		exit(98);
	return (n);
}
