#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head of linked list.
 *
 * Return: address of the node where the loop starts, or NULL if no loo:
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *i = head;
	listint_t *j = head;

	while (head && j && j->next)
	{
		head = head->next;
		j = j->next->next;

		if (head == j)
		{
			head = i;
			i =  j;
			while (1)
			{

				j = i;
				while (j->next != head && j->next != i)
				{
					j = j->next;
				}
				if (j->next == head)
					break;

				head = head->next;
			}
			return (j->next);
		}
	}
	return (NULL);
}
