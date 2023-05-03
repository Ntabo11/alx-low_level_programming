#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - print all the elements of a linked list
 * @h: linked list of type listint_t to print
 * Return: Nbrs node
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
