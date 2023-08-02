#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node in the list
  * @head: first pointer to the node in the list
  * @idx: index that the new node is added
  * @n: data to insert
  *
  * Return: pointer to the new node, or NULL
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_insert, *copy = *head;
	unsigned int node;

	new_insert = malloc(sizeof(listint_t));
	if (new_insert == NULL)
		return (NULL);

	new_insert->n = n;
	if (idx == 0)
	{
		new_insert->next = copy;
		*head = new_insert;
		return (new_insert);
	}
	for (node = 0; node < (idx - 1); node++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);
		copy = copy->next;
	}
	new_insert->next = copy->next;
	copy->next = new_insert;
	return (new_insert);
}
