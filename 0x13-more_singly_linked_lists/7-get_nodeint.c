#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: index of the node, starting at 0
 * Return: nth node or NULL if node does not exist.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	current_node = head;

	for (i = 0; i < index; i++)
	{
		if (current_node == NULL)
			return (NULL);
		current_node = current_node->next;
	}

	return (current_node);

}
