#include "main.h"
#include <stdio.h>

/**
 * swap_int - ll
 * @a: pointer
 * @b: pointer
 * Return: ll
 */

void swap_int(int *a, int *b)
{
	int temb = *a;
		*a = *b;
		*b = temb;
}
