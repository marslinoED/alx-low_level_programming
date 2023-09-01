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
int i = 0;
int j = 0;
int val = 0;
for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '0'; j++)
		{
			if  (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return (1);
			}
		}
	}

for (i = 1; i < argc; i++)
        {
		val += atoi(argv[i]);
	}

printf("%d\n", val);
return (0);
}
