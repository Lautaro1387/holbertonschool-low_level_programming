#include "lists.h"
/**
 * print_dlistint - Function.
 * @h: Pointer element of type const.
 * Return: size_t.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t prints = 0;

	while (h)
	{
		prints++;
		if (h->n)
		{
			printf("%d\n", h->n);
		}
		h = h->next;
	}
	return (prints);
}
