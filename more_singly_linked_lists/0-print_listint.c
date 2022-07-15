#include "lists.h"
/**
 * print_listint - Function.
 * @h: Pointer element.
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;
	while (h != NULL)
	{
		size++;
		if (h->n != NULL)
		{
			printf("%d", h->n);
		}
		h = h->next;
	}
	return (size);
}
