#include "lists.h"
/**
 * print_list - Function of type size.
 * @h: const.
 * Return: size_t.
 */
size_t print_list(const list_t *h)
{
size_t size = 0;

	while(h != NULL)
	{
		size++;
		if (h->str)
		{
			printf("[%u] %s\n", size->str, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
	}
return (size);
}
