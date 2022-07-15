#include "lists.h"
/**
 * pop_listint - Function
 * @head: Pointer element.
 * Return: int.
 */
int pop_listint(listint_t **head)
{
	listint_t *head2;
	int delete;

	if (!*head)
	{
		return (0);
	}
	head2 = *head;
	delete = (*head)->n;
	*head = (*head)->next;
	free(head2);
	return (delete);
}
