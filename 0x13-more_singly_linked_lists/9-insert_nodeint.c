#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * If it is not possible to add the new node at index idx,
 * do not add the new node and return NULL.
 * @head: pointer to the first node.
 * @idx: index of the list where the new node should be added.
 * @n: integer to be added to the new node.
 * Return: the address of the new node, or NULL if it failed.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}

	while (temp != NULL)
	{
		if (i == idx - 1)
		{
			new->n = n;
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		temp = temp->next;
		i++;
	}

	return (NULL);
}
