#include "main.h"
#include <stdio.h>

/**
 * print_array - ll
 * @a: ll
 * @n: ll
 * Return: ll
 */

void print_array(int *a, int n)
{
int i = 0;
while (n != (i - 1))
{
	printf ("%d, ", a[i]);
	i++;
}
printf("%d\n", a[i]);

}
