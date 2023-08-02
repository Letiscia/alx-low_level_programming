#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: start of a list.
 *
 * Return: no return.
 */
void free_listp(listp_t **head)
{
	listp_t *temp;
	listp_t *rep;

	if (head != NULL)
	{
		rep = *head;
		while ((temp = rep) != NULL)
		{
			rep = rep->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list.
 * @head: start of a list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;
	listp_t *ptr, *new, *add;

	ptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = ptr;
		ptr = new;

		add = ptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&ptr);
				return (node);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node++;
	}

	free_listp(&ptr);
	return (node);
}
