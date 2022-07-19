#include  "lists.h"

/**
 * listlen_len - returns the number of elements in a linked listint_t list
 * @h: list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t numb_nodes = 0;

	while (h != NULL)
	{
		numb_nodes += 1;
		h = h->next;
	}
	return (numb_nodes);
}
