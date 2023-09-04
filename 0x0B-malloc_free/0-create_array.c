#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - ll
 * @size: ll
 * @c: ll
 * Return: ll
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	int i;
	char *e = (char *) malloc(sizeof(char) * size);

	if (e == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		e[i] = c;
	return (e);
}
