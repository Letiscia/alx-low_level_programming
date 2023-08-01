#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: start of a list.
 *
 * Return: no return.
 */

void free_listp2(listp_t **head)
{
	listp_t *temp;
	listp_t *cio;

	if (head != NULL)
	{
		cio = *head;
		while ((temp = cio) != NULL)
		{
			cio = cio->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @h: start of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listp_t *hptr, *new, *add;
	listint_t *curr;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (nnodes);
			}
		}

		curr = *h;
		*h = (*h)->next;
		free(curr);
		nnodes++;
	}

	*h = NULL;
	free_listp2(&hptr);
	return (nnodes);
}
