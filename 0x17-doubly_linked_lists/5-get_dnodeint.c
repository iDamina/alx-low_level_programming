#include "lists.h"

/**
 * get_dnodeint_at_index - return the node of a specific linked list
 * @head: the head of the list
 * @index: the index of the node, starting from 0
 *
 * Return: the specific node, or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (!head)
			return (NULL);
	}

	return (head);
}
