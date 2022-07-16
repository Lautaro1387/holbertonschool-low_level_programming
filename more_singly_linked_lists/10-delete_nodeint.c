#include "lists.h"
/**
 * delete_nodeint_at_index - Function.
 * @head: Pointer element.
 * @index: Element of type int.
 * Return: int.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int num = 0;
	listint_t *nodo, *sig;

	if (head && *head)
	{
		nodo = *head;
		if (index > 0)
		{
			if (nodo->next == NULL)
				return (-1);
			while (nodo)
			{
				if (index - 1 == num)
				{
					sig = nodo->next->next;
					free(nodo->next);
					nodo->next = sig;
					return (1);
				}
				num++;
				nodo = nodo->next;
			}
		}
		else
		{
			*head = nodo->next;
			free(nodo);
			return (1);
		}
		return (1);
	}
	return (-1);
}
