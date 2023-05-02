#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * The function sets the head to NULL.
 * This function can free lists with a loop.
 * The list is traversed once.
 * @h: pointer to the first node.
 * Return: size of the list that was freed.
*/

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp = NULL;
	listint_t *ln = NULL;
	size_t count = 0;
	size_t nw;

	tmp = *h;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
		ln = *h;
		nw = 0;
		while (nw < count)
		{
			if (tmp == ln)
			{
				*h = NULL;
				return (count);
			}
			ln = ln->next;
			nw++;
		}
		free(*h);
		*h = tmp;
	}
	*h = NULL;
	return (count);
}
