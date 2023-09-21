#include "lists.h"

/**
 *add_node_end - add node to the end of the linked list
 *@str: string to add node to
 *@head: first node of the linked list
 *
 *Return: returns address of the new node or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node;
	list_t *temporary = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	end_node = malloc(sizeof(list_t));
	if (end_node == NULL)
		return (NULL);
	end_node->str = strdup(str);
	end_node->len = len;
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}
	while (temporary->next)
		temporary = temporary->next;

	temporary->next = end_node;
	return (end_node);
}
