#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * @head: pointer to the head of a list
 * Return: sum of all the data (n)
 *         Otherwise - 0 if the list is empty
 */

int s_listint(listint_t *head)
{
	int s = 0;

	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}

	return (s);
}
