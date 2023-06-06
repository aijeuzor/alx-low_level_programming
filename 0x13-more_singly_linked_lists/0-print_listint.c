#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * print_listint - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
	printf("%d\n", h->n);
	h = h->next;
	count++;
	}

	listint_t;
}
