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
	listint_t *to_add;

	to_add = malloc(sizeof(listint_t));
	if (!to_add)
		return (NULL);
	to_add->n = n;
	to_add->next = *head;
	*head = to_add;

	return (to_add);
}
