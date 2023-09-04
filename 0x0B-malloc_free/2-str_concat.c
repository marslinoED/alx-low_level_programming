#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - ll
 * @s1: ll
 * @s2: ll
 * Return: ll
 */

char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0, i;
	char *nc;

	while (!s1[size1])
		size1++;
	while (!s2[size2])
		size2++;

	nc = malloc((sizeof(char) * size1 + 1) + (sizeof(char) * size2 + 1) + 10)
	if (nc == 0)
		return (NULL);
	for (i = 0; i < size1; i++)
		nc[i] = s1[size1];
	size2 += (size1 + 1);
	for (i = (size1 + 1); i < size2; i++)
		nc[i] = s2[i  - size1 - 1];
	return (nc);
}
