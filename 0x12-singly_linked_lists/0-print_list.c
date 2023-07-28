#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
  *print_list - to print list
  *@h: name of the list which is a pointer
  *Return: the number of nodes
  */
size_t print_list(const list_t *h)
{
	int counter;

	counter = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		printf("[%d] %s\n", h->len, h->str);

		counter++;
		h = h->next;
	}
	return (counter);
}
