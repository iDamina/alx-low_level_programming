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
	listint_t *temp_loc = *head;

	add_node = malloc(sizeof(listint_t));
	if (add_node != NULL)
	{
		add_node->n = n;
		add_node->next = NULL;
	}
	else
		return (NULL);
	if (temp_loc != NULL)
	{
		while (temp_loc->next != NULL)
			temp_loc = temp_loc->next;
		temp_loc->next = add_node;
	}
	else
		*head = add_node;

	return (add_node);
}
