#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes allocate
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (ptr);
}
