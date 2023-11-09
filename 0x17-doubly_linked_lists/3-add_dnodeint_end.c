#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: the head of the list
 * @n: the value of the new node to be added
 *
 * Return: address of the new node, or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last = *head;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	new_node->prev = last;

	return (new_node);
}
