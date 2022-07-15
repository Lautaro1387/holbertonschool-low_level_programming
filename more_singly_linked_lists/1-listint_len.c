#include "lists.h"
/**
 * listint_len - Function.
 * @h: Pointer element.
 * Return: size_t.
 */
size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
	size++;
	h = h->next;
	}
	return (size);
}
