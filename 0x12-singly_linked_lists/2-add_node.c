#include "lists.h"

/**
 * add_node - Add a new node at the beginning of a list_t list.
 * @head: the first node.
 * @str: string to be added.
 * Return: address of the new element, or NULL if it failed.
*/

list_t *add_node(list_t **head, const char *str)
{

	list_t *new;
	size_t n = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[n] != '\0')
		n++;

	new->str = strdup(str);
	new->len = n;
	new->next = *head;

	*head = new;

	return (new);
}
