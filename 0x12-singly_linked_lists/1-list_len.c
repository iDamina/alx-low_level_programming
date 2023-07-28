#include "lists.h"
#include <stdio.h>
/**
  *list_len - to list the length of the elements
  *@h: list which is a pointer
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
