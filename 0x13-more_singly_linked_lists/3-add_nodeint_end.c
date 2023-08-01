#include "lists.h"

/**
  * add_nodeint_end - adds node to the end of a list
  * @head: pointer to the first node in the list
  * @n: data to insert in the new node
  *
  * Return: pointer to the new node, or NULL if it fails
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_node;
	listint_t *temp = *head;

	add_node = malloc(sizeof(listint_t));
	if (!add_node)
		return (NULL);

	add_node->n = n;
	add_node->next = NULL;

	if (*head == NULL)
	{
		*head = add_node;
		return (add_node);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = add_node;

	return (add_node);
}
