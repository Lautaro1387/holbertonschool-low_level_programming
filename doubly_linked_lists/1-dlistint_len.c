#include "lists.h"
/**
 * dlistint_len - Function.
 * @h: Pointer element of type const.
 * Return: size_t.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t number = 0;

	while (h)
	{
	number++;
	h = h->next;
	}
	return (number);
}
