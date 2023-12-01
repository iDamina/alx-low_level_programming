#include "hash_tables.h"
/**
  *make_hash_node - creates a new hash node
  *@key: key for new node
  *@value: value for the node
  *
  *Return: the new node, or NULL on failure
  */
hash_node_t *make_hash_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);
	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (!node->value)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}
/**
 * hash_table_set - function that sets a key to a value to the hash table
 * @ht: hash table to add element to
 * @key: key to add the element
 * @value: value to add the element
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *new_value;
	hash_node_t  *hash_node;
	hash_node_t *new_node;

	if (!ht || !ht->array || !ht->size || !key || !strlen(key) || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	new_node = ht->array[index];
	while (new_node != NULL)
	{
		if (strcmp(new_node->key, key) == 0)
		{
			new_value = strdup(value);
			if (!new_value)
				return (0);
			free(new_node->value);
			new_node->value = new_value;
			return (1);
		}
		new_node = new_node->next;
	}
	hash_node = make_hash_node(key, value);
	if (!hash_node)
		return (0);
	hash_node->next = ht->array[index];
	ht->array[index] = hash_node;
	return (1);
}


