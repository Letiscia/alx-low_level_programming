#include "lists.h"
#include <stddef.h>

/**
 * add_node_end - adds a node at the end of the linked list
 * @head: first node.
 * @str: string.
 * Return: pointer to head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	size_t strlen = 0;

	if (str == NULL)
		strlen = 0;

	while (str[strlen])
		strlen++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen;
	new->next = NULL;

	if (temp == NULL)
		*head = new;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
}
