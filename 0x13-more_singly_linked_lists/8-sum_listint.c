#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: start of the linked list
 *
 * Return: sum
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
