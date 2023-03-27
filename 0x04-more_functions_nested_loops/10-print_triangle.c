#include "main.h"
/**
 * print_triangle - a function that prints a triangle
 * @size: Size of the triangle
 * Return: triangle of '#' s
 */
void print_triangle(int size)
{
	if (size <= 0){
		_putchar('\n');
		return;
	}

	int i;
	int j;
	int k;

	for (i = 1; i <= size; i++){
		for (j = 1; j <= size - i; j++)
			_putchar(' ');
		for (k = 1; k <= i; k++)
			_putchar('#');
		_putchar('\n');
	}
}
