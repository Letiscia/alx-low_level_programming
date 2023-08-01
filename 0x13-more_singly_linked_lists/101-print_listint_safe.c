#include "lists.h"

/**
 * print_listint_safe - prints a linked list with a loop safely.
 * @head: start of the linked list
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = NULL;
	const listint_t *i = NULL;
	size_t count = 0;
	size_t new;

	temp = head;
	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		count++;
		temp = temp->next;
		i = head;
		new = 0;
		while (new < count)
		{
			if (temp == i)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (count);
			}
			i = i->next;
			new++;
		}
		if (!head)
			exit(98);
	}
	return (count);
}
