#include "lists.h"

/**
 *print_list - to print all elements in a singly linked list
 *
 *@h: head of the list which is a pointer
 *
 *Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);

}
