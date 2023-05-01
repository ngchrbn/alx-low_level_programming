#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index "index" of a listint_t.
 * @head: pointer to the first node.
 * @index: index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *temp2;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);

	if (index == 0)
	{
		if (*head == NULL)
			return (-1);
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp != NULL)
	{
		if (i == index - 1)
		{
			temp2 = temp->next;
			temp->next = temp2->next;
			free(temp2);
			return (1);
		}
		temp = temp->next;
		i++;
	}

	return (-1);
}
