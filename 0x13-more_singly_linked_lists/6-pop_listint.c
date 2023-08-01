#include "lists.h"
/**
 * pop_listint - a function that deletes head of the node
 * @head : head of the linked list.
 *
 * Return: head node's data (n) or 0 - if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;

	if (temp == 0)
		return (0);

	*head = temp->next;
	n = temp->n;
	free(temp);

	return (n);
}
