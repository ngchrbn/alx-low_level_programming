#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * The function sets the head to NULL.
 * @head: pointer to the first node in the list.
 * Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
	}

	*head = NULL;
}
