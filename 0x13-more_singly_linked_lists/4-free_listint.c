#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *free_listint - frees a linked list
 *@head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head; /*save the current node */
		head = head->next; /* move to the next node */
		free(current); /* free the memory of current node */
	}
}
