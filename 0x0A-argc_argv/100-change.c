#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - function
 * @argc: offset count
 * @argv: offset value
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int val = 0, i = atoi(argv[1]);

	if (i < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	if (i >= 25)
	{
		val += i / 25;
		i -= i / 25 * 25;
	}
	if (i >= 10)
	{
		val += i / 10;
		i -= i / 10 * 10;
	}
	if (i >= 5)
	{
		val += i / 5;
		i -= i / 5 * 5;
	}
	if (i >= 2)
	{
		val += i / 2;
		i -= i / 2 * 2;
	}
	if (i >= 1)
	{
		val += i / 1;
		i -= i / 1 * 1;
	}
	printf("%d\n", val);
	return (0);
}
