#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all elements of a listint_t list
 * @h: a pointer to the head of the lsit
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	count = 0;
	do {
		if (h == NULL)
			;
		else
		{
			printf("%d\n", h->n);
			count++;
			h = h->next;
		}
	} while (h != NULL);
	return (count);
}
