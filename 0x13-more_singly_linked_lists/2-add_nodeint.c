#include "lists.h"

/**
 * add_nodeint - adds a new node at he begginning of list.
 * @head: head of linked list.
 * @n: value.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new != 0)
	{
		new->n = n;
		new->next = *head;
	}
	else
	{
		return (NULL);
	}
		*head = new;

	return (*head);
}
