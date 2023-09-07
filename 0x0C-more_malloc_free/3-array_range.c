#include "main.h"
#include <stdio.h>
#include <Stdlib.h>

/**
 * _memset - copy char
 * @s: string
 * @b: input
 * @n: bytes
 * Return: string
 */

int *_memset(int *s, int min, int max, unsigned int n)
{
	unsigned int i, j = 0;

	for (i = min; i <= max; i++)
	{
		s[j] = i;
		j++;
	}
	return (s);
}

/**
 * array_range - ll
 * @min: ll
 * @max: ll
 * Return: ll
 */

int *array_range(int min, int max)
{
	int size, *arr;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	arr = (int *) malloc(sizeof(int) * size);
	return (_memset(arr, min, max, size));
}
