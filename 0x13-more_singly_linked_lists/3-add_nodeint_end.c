#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: start of the list.
 * @n: value.
 *
 * Return: address of the new element or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == 0)
		return (NULL);

	new->n = n;
	new->next = 0;

	temp = *head;

	if (temp == 0)
	{
		*head = new;
	}

	else
	{
		while (temp->next != 0)
		temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
