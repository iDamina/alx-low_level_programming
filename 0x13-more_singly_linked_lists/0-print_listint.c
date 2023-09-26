#include "lists.h"
#include <stdio.h>
/**
 *print_listint - the function to print all the elements
 *@h: the linked list element of type listint_t
 *
 *Return: returns the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0; /* initiate counter to track number of nodes */

	while (h != NULL)
	{
		printf("%d\n", h->n); /* print the value of the current node */
		h = h->next; /* move to the next node */
		counter++; /* increment counter*/
	}
	return (counter); /* returns total number of nodes*/
}
