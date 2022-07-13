#include "lists.h"
/**
 * list_len - Function of type size_t
 * @h: Const.
 * Return: size_t.
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
