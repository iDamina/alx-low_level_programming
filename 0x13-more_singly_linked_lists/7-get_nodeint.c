#include "lists.h"

/**
  * get_nodeint_at_index - returns the node at a certain index in a linked list
  * @head: first node in the linked list
  * @index: index of the node to return
  *
  * Return: pointer to the node we're looking for, or NULL
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int get_node;

	for (get_node = 0; get_node < index; get_node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
