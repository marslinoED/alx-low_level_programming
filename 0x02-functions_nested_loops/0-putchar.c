#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: Get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: 0
 */
int main(void)
{
	char c[9] = "_putchar";
	int i = 0;
	while(i<8)
	{
		putchar(c[i]);
		i++;
	}
	putchar("\n");

	return (0);
}
