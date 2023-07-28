#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
  *print_list - to print list
  *@h: name of the list which is a pointer
  *Return: the number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		counter++;
	}
	return (counter);
}
