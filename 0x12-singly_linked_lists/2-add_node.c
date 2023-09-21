#include "lists.h"

/**
 *add_node - to add a new node
 *
 *@head: the first node which is a pointer to a pointer
 *@str: the string which is a pointer
 *
 *Return: returns the added node or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *added_node;
	unsigned int len = 0;

	while (str[len])
		len++;
	added_node = malloc(sizeof(list_t));
	if (added_node == NULL)
		return (NULL);
	added_node->str = strdup(str);
	added_node->len = len;
	added_node->next = (*head);
	(*head) = added_node;

	return (*head);
}
