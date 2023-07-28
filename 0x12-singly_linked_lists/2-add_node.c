#include "lists.h"

/**
 * add_node - adds a node at the beginning of list.
 * @head: start of the linked list.
 * @str: string.
 * Return: pointer to the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);


	for (i = 0; str[i]; i++)
		;
	new->str = strdup(str);
	new->len = i;
	new->next = (*head);
	*head = new;

	return (*head);
}
