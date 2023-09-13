#include "function_pointers.h"

/**
 * int_index - ll
 * @array: ll
 * @size: ll
 * @cmp: ll
 * Return: ll
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (array && size && cmp)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
