#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the first node.
 * Return: number of nodes in the list.
*/

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp = NULL;
	const listint_t *ln = NULL;
	size_t count = 0;
	size_t nw;

	tmp = head;
	while (tmp)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		count++;
		tmp = tmp->next;
		ln = head;
		nw = 0;
		while (nw < count)
		{
			if (tmp == ln)
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				return (count);
			}
			ln = ln->next;
			nw++;
		}
		if (!head)
			exit(98);
	}

	return (count);
}
