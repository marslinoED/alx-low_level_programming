#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
int main(void)
{
	char alpha = 'a' - 1;

	while (alpha != 'z' && ++alpha)
		putchar (alpha);
	putchar('\n');
}
