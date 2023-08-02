#include "lists.h"

/**
  * get_nodeint_at_index - returns the node at a certain index in a list
  * @head: first node of the linked list
  * @index: where the node returns to
  *
  * Return: pointer to the node we're looking for, or NULL
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int get_node;

	for (get_node = 0; get_node < index && head != NULL; get_node++)
	{
		head = head->next;
	}
	return (head);
}
