#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Print elements of a singly linked list.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	unsigned int sum = 0;

	temp = h;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
