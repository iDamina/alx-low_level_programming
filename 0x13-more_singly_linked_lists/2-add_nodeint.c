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
	listint_t *new_node; /* creates a new node pointer */

	new_node = malloc(sizeof(listint_t)); /*allocates memory for the new node */

	if (new_node == NULL)
		return (NULL); /* returns NULL if memory allocation fails */

	new_node->n = n; /* sets value of the new node to the integer provided*/
	new_node->next = *head; /* makes new node point to the current head */
	*head = new_node; /*update the head pointer to the new node */

	return (*head); /* return a pointer to the newly added node */
}
