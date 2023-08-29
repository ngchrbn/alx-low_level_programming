#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer to a pointer to the head of the list
 * Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}

}
