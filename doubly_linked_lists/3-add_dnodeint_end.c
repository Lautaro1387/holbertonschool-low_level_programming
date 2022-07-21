#include "lists.h"
/**
 * add_dnodeint_end - Function.
 * @head: Pointer element.
 * @n: Element of type int.
 * Return: dlistint_t.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *new_new = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (new_new != NULL)
		{
			if (new_new->next == NULL)
			{
				new_new->n = n;
				new_new->next = new_node;
				new_new->next->prev = new_new;
				new_new = new_node;
			}
			new_new = new_new->next;
		}
	}
	return (*head);
}
