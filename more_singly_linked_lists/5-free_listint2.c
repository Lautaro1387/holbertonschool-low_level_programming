#include "lists.h"
/**
 * free_listint2 - Function.
 * @head: Pointer element.
 */
void free_listint2(listint_t **head)
{
	listint_t *free_list;

	if (head)
	{
	while (*head)
	{
		free_list = *head;
		*head = (*head)->next;
		free(free_list);
	}
	free(*head);
	*head = NULL;
	}
}
