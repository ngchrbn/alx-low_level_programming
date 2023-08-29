#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: list of type list_t
 * Return: the number of nodes.
*/

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes += 1;
		h = h->next;
	}

	return (nodes);
}
