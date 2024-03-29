#include "lists.h"

/**
 * free_list - Free a list_t list.
 * @head: the first node.
 * Return: void
*/

void free_list(list_t *head)
{
	list_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node->str);
		free(current_node);
	}

}
