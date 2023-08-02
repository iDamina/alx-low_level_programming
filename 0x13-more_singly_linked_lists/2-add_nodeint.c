#include "lists.h"
#include <stdio.h>

/**
  * add_nodeint - adds a new node at the beginning of the list
  * @head: the pointer to the first node we are adding
  * @n: data
  *
  * Return: pointer to the new node, or NULL if it fails
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
