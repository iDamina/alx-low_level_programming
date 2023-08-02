#include "lists.h"

/**
  * free_listp2 - frees a linked list
  * @head: head of a list.
  *
  * Return: no return.
  */
void free_listp2(listp_t **head)
{
	listp_t *temp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
  * free_listint_safe - frees a linked list.
  * @h: first member of the list.
  *
  * Return: the size of the list that was freed.
  */
size_t free_listint_safe(listint_t **h)
{
	size_t n_nodes = 0;
	listp_t *hpointr, *new, *add;
	listint_t *curr;

	hpointr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));
		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hpointr;
		hpointr = new;
		add = hpointr;
		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hpointr);
				return (n_nodes);
			}
		}

		curr = *h;
		*h = (*h)->next;
		free(curr);
		n_nodes++;
	}

	*h = NULL;
	free_listp2(&hpointr);
	return (n_nodes);
}