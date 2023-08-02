#include "lists.h"

/**
  * find_listint_loop - finds the loop in a linked list.
  * @head: begining node of a list.
  *
  * Return: the address of the node where the loop starts.
  */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pt2;
	listint_t *prev;

	pt2 = head;
	prev = head;
	while (head && pt2 && pt2->next)
	{
		head = head->next;
		pt2 = pt2->next->next;

		if (head == pt2)
		{
			head = prev;
			prev =  pt2;
			while (1)
			{
				pt2 = prev;
				while (pt2->next != head && pt2->next != prev)
				{
					pt2 = pt2->next;
				}
				if (pt2->next == head)
					break;

				head = head->next;
			}
			return (pt2->next);
		}
	}
	return (NULL);
}
