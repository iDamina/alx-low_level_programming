#include "lists.h"
/**
  * sum_listint - calculates sum of all data in a list
  * @head: first node in list
  *
  * Return: the sum
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
