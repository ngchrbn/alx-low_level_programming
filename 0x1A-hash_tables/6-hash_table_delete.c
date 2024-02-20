#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: hash table to be deleted
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current_node, *next_node;
	unsigned int i;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];
		while (current_node != NULL)
		{
			next_node = current_node->next;
			free(current_node->key);
			free(current_node->value);
			free(current_node);
			current_node = next_node;
		}
	}

	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
