#include "lists.h"
/**
 *reverse_listint - reverses a linked list
 * @head: pointer to the first node of a list
 * Return: returns a pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *i = NULL;
	listint_t *n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = i;
		i = *head;
		*head = n;
	}
	*head = i;
	return (*head);
}
