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

	/*check for the element to print*/
	while (h)
	{
		if (h == NULL)
		{
			printf("Error\n");
			return (0);
		}
		printf("%d \n", h->n);
		h = h->next;
		number++;
	}
	return (number);
}
