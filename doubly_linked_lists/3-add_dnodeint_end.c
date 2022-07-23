#include "lists.h"
/**
 * add_dnodeint_end - Function.
 * @head: Pointer element.
 * @n: Element of type int.
 * Return: dlistint_t.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *new_new = *head;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (new_new->next)
		new_new = new_new->next;

	new_new->next = new_node;
	new_node->prev = new_new;

	return (new_node);
}
