#include "main.h"

/**
 * binary_to_uint -converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return:converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	if (!b)
		return (0);

	int i, size, n;
	unsigned int decimal;

	size = 0;
	n = 1;
	decimal = 0;
	while (b[size] != '\0')
	{
		if (b[size] != '1' && b[size] != '0')
			return (0);
		size++;
	}
	size--;
	while (size != -1)
	{
		if (b[size] == '1')
			decimal += n;
		n = n * 2;
		size--;
	}
	return (decimal);
}
