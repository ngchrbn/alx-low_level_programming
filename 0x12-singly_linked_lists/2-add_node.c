#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * str needs to be duplicated
 * @head: pointer to the head of the list_t list.
 * @str: string to be added to the list_t list.
 * Return: the address of the new element, or NULL if it failed.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t i = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
