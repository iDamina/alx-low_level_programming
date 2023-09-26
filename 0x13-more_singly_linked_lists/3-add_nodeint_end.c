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
	listint_t *new_node;
	listint_t *current;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n; /* set value of new node to the int provided */
		new_node->next = NULL; /* make new_node last node so next points to NULL*/
	}
	else
		return (NULL); /* that is if new node is empty */
	if (*head == NULL)
	{
		*head = new_node; /* if list is empty, make new node the head */
	}
	else
	{
		current = *head; /* initialise current to the head */

		/* traversing the list to find the last node */
		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = new_node; /* set the last node's next to the new node */

	}

	return (new_node); /* returns a pointer to the new node */
}
