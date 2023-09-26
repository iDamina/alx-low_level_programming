#include "lists.h"
#include <stdio.h>
/**
 * listint_len - returns the number of elements
 * @h: the linked list of type listint_t to check
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0; /* initialise the counter to track number of nodes*/

	while (h != NULL)
	{
		counter++; /*increment the counter */
		h = h->next; /*move to the next node */
	}

	return (counter); /* returns total number of nodes */
}
