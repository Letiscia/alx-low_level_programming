#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: start of the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pr = NULL;
	listint_t *n = NULL;

	while (*head)
	{
		n = (*head)->n;
		(*head)->n = pr;
		pr = *head;
		*head = n;
	}

	*head = pr;

	return (*head);
}

