#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char b;
	int c;
	long int d;
	long long int e;
	float f;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(e));
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
