#include "lists.h"
/**
 * free_dlistint - Function.
 * @head: Pointer element.
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
