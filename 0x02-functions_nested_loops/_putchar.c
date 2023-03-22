#include "main.h"
#include <unistd.h>

/**
 * _putchar - this the main function
 * @c: the character to print
 *
 * Return: always 1(success)
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
