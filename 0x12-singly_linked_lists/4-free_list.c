#include "lists.h"

/**
 * free_list - free list links
 *
 * @head: first node of the list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *current_list;

	while ((current_list = head) != NULL)
	{
		head = head->next;
		free(current_list->str);
		free(current_list);
	}
}
