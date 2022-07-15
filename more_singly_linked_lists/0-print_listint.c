#include "lists.h"
/**
 * print_listint - Function.
 * @h: Pointer element.
 * Return: size_t.
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size++;
		if (h != NULL)
		{
			printf("%d\n", h->n);
		}
	h = h->next;
	}
	return (size);
}
