#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - Print elements of a singly linked list.
 * @head: Pointer to a list.
 * @n: ll
 * Return: Integer.
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
