#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - tow strings are cancatenated at most input
 * nbrs of bytes from the second string.
 * @s1: the strg to be concatenated upon.
 * @s2: the string to be concatenated to s1.
 * @n: the maximum nbr of bytes of s2 to be concatenated to s1.
 * Return: If concatenation fails (NULL)
 * Otherwise - a pointer the newly-allocated space in memory
 * containing the concatenated strg.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	concat = malloc(sizeof(char) * (len1 + n + 1));

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];

	for (j = 0; j < n; j++)
		concat[i + j] = s2[j];
	concat[i + j] = '\0';
	return (concat);
}
