#include "lists.h"

/**
 * print_listint - prints all elements
 * @h: list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t numb_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		numb_nodes += 1;
		h = h->next;
	}
	return (numb_nodes);
}
