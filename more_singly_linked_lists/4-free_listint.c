#include "lists.h"
/**
 * free_listint - Function.
 * @head: Pointer element.
 */
void free_listint(listint_t *head)
{
	listint_t *free_list;

	while (head)
	{
		free_list = head;
		head = free_list->next;
		free(free_list);
	}
	free(head);
}
