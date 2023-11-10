#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at the index
 * @head: head of the list
 * @index: index, starting at 0
 *
 * Return: 1 if successful, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	for (i = 0; i < index; i++)
	{
		current = current->next;
		if (current == NULL)
			return (-1);
	}

	if (index == 0)
	{
		if (current->next)
			current->next->prev = NULL;
		*head = current->next;
	}
	else
	{
		if (current->next)
			current->next->prev = current->prev;
		if (current->prev)
			current->prev->next = current->next;
	}

	free(current);
	return (1);
}
