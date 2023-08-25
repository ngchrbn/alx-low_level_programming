#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: the first node.
 * @str: string to be added.
 * Return: Address of the new element, or NULL if it failed.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node;
	size_t n = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (str[n] != '\0')
		n++;

	new_node->str = strdup(str);
	new_node->len = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;

		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
	}

	return (new_node);
}
