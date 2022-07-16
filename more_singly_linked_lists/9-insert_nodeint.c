#include "lists.h"
/**
 * insert_nodeint_at_index - Function.
 * @head: Pointer element.
 * @idx: Element of type unsigned int.
 * @n: Element of type int.
 * Return: listint_t.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *new_node;
	unsigned int pos = 0;

	node = *head;
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = (*head);
		*head = new_node;
		return (*head);
	}
	while (pos < idx - 1 && node)
	{
		node = node->next;
		pos++;
	}
	if (pos >= idx)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = node->next;
	node->next = new_node;
	return (new_node);
}
