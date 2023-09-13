#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - main file
 * @argc: number of lines arguments
 * @argv: array of elements
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int r;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	r = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d/n", r);
	return (0);
}
