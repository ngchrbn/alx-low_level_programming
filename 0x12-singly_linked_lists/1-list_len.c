#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: list of type list_t
 * Return: number of elements
*/

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
