#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node by a given
 *                           index of a linked list
 * @head : start of the list
 * @index: index of the node to be deleted
 * 
 * Return: 1 - if it succeeds,
 *        -1 - if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *new = *head;
	unsigned int node;

	if (new == 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(new);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (new->next == 0)
		return (-1);
		new = new->next;
	}

	temp = new->next;
	new->next = temp->next;
	free(temp);

	return (1);
}
