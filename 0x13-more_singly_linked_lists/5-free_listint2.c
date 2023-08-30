#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list but sets the head to NULL.
 * @head: Pointer to a pointer to the head of the list
 * Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *current_node;

	while (*head)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
	}

	*head = NULL;
}
