#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning..
 * @head: pointer to a pointer to the head of the doubly linked list.
 * @n: value to be stored in the new node.
 *
 * Return: address of the new element, or NULL if it fails.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);

}
