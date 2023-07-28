#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked list_t list
 *
 *@h: list
 *
 * Return: Always 0.
 */

size_t list_len(const list_t *h)
{
	size_t mylist = 0;
	if (h != NULL)
	{
		h = h->next;
		mylist++;
	}
	
	return (mylist);

}
