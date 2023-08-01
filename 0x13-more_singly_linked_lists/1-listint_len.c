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
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}
