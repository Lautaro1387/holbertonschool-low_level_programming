#include "lists.h"
/**
 * free_list - Function.
 * @head: Pointer element of type list_t.
 */
void free_list(list_t *head)
{
	list_t *free_list;

	while (head)
	{
		free_list = head;
		free(free_list->str);
		head = free_list->next;
		free(free_list);
	}
	free(head);
}
