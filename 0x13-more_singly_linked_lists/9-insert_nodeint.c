#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * If it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 * @head: Pointer to a pointer to the head of the list
 * @idx: index where new node should be added.
 * @n: integer to be added.
 * Return: Address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node, *temp = *head;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (temp != NULL)
	{
		if (i == idx - 1)
		{
			new_node->n = n;
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		temp = temp->next;
		i++;
	}

	return (NULL);
}
