#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index index of a linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node = *head, *temp;
	unsigned int idx = 0;

	if (head == NULL)
		return (-1);

	if (index == 0)
	{
		if (*head == NULL)
			return (-1);
		*head = current_node->next;
		free(current_node);
		return (1);
	}

	while (current_node != NULL)
	{
		if (idx == index - 1)
		{
			temp = current_node->next;
			current_node->next = temp->next;
			free(temp);
			return (1);
		}
		current_node = current_node->next;
		idx++;
	}

	return (1);
}
