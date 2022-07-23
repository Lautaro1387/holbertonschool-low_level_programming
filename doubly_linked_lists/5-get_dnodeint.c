#include "lists.h"
/**
 * get_dnodeint_at_index - Function.
 * @head: Pointer element.
 * @index: Element of type unsigned int.
 * Return: head.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	return (head ? head : NULL);
}
