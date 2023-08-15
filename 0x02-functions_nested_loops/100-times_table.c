#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints times table
 * @n : times table to use
 * Return:void
 */


void print_times_table(int n)
{
	if (n <= 15 || n >= 0)
	{
		for (int i = 0; i <= n; i++)
		{
			for (int j = 0; j <= n; j++)
			{
				printf("%d", i * j);
				if (j != n)
				{
					printf(" , ");
				}
			}
			printf("\n");
		}
	}
}
