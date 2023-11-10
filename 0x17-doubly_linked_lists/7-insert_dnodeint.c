#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the list
 * @idx: index, starting at 0
 * @n: value of the new node
 *
 * Return: address of the new node, or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr = *h;
	dlistint_t *new_node;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	if (*h == NULL && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		if (*h)
			curr->prev = new_node;
		*h = new_node;
		new_node->prev = NULL;
		new_node->next = curr;
		return (new_node);
	}
	for (i = 1; i < idx; i++)
	{
		curr = curr->next;
		if (!curr)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->prev = curr;
	new_node->next = curr->next;
	if (curr->next)
		curr->next->prev = new_node;
	curr->next = new_node;
	return (new_node);
}
