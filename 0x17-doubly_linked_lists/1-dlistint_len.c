#include "lists.h"

/**
 * dlistint_len - gives the lenght of elements in a linked list
 * @h: The list
 *
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}

	return (node_count);
}
