#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: list of type list_t
 * if str(of list_t) is NULL, print [0] (nil)
 * Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		n++;
		h = h->next;
	}

	return (n);
}
