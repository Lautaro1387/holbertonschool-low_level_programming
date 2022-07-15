#include "lists.h"
/**
 * free_listint2 - Function.
 * @head: Pointer element.
 */
void free_listint2(listint_t **head)
{
	listint_t *free_list;

	while (*head)
	{
		free_list = *head;
		*head = free_list->next;
		free(free_list);
	}
	if (head == NULL)
	{
		return;
	}
	*head = NULL;
}
