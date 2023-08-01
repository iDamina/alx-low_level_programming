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
	/* Declaring number of size size_t*/
	size_t number = 0;

	if (h == NULL)
		return (0);

	/*check for the element to print*/
	while (h)
	{
		number++; /*increment number*/
		printf("%d \n", h->n);
		h = h->next;
	}
	return (number);
}
