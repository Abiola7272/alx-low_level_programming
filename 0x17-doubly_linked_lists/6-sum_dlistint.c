#include "lists.h"

/**
 * sum_dlistint - This will return the sum of all
 * the data of a doubly linked list
 * @head: The head of the list
 * Return: The sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			add += head->n;
			head = head->next;
		}
	}

	return (add);
}
