#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: start of the list.
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != 0)
	{
		temp = head
		temp = head->next;
		free(temp);
	}
}
