#include "lists.h"

/**
 *list_len - to get the number of elements in a linked list
 *
 *@h: head which is a pointer
 *
 *Return: returns the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
