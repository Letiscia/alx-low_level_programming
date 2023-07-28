#include "lists.h"

/**
 * list_len - prints the number of elements in a linked list
 * @h: list
 *
 * Return: Always 0.
 */

size_t list_len(const list_t *h)
{
	size_t mylist = 0;

	while (h != NULL)
	{
		h = h->next;
		mylist++;
	}

	return (mylist);
}
