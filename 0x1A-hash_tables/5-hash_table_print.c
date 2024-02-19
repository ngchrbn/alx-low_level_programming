#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: hash table to be printed
 * key/value pair should be printed in the order
 * they appear in the array of hash table
 * if ht is NULL, don't print anything
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned int i;
	char flag = 0; /* 0 while no data has been printed yet */

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			flag = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
