#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print which is a pointer
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t  *container;
	char flag = 0;

	if (!ht || !ht->array)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		container = ht->array[i];
		while (container != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", container->key, container->value);
			flag = 1;
			container = container->next;
		}
	}
	printf("}\n");
}
