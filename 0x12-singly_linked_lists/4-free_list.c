#include "lists.h"

/**
 *free_list - to free list
 *@head: head as a list to free
 */
void free_list(list_t *head)
{
	list_t *temporary;

	while (head)
	{
		temporary = head->next;
		free(head->str);
		free(head);
		head = temporary;
	}
}
