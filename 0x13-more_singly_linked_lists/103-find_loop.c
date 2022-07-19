#include "lists.h"

/**
 * find_listint_loop - find loop in linked list
 * @head: pointer to head pointer of linked list
 * Return: address of node where loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *t, *h;

	t = h = head;

	while (t != NULL && h != NULL)
	{
		t = t->next;
		h = h->next->next;

		if (t == h)
		{
			t = head;
			while (t != h)
			{
				t = t->next;
				h = h->next;
			}
			return (t);
		}
	}
	return (NULL);
}
