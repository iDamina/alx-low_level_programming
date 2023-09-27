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
	unsigned int i = 0; /* initialise counter to track current node */

	while (head != NULL)
	{
		if (i == index) /* if current index matches the target index */
		{
			return (head); /* return a pointer to current node*/
		}

		head = head->next; /* move to the next node */
		i++; /* increment the index counter */
	}

	return (NULL);
}
