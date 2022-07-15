#include "lists.h"
/**
 * sum_listint - Function.
 * @head: Pointer element.
 * Return: int.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
	{
		return (0);
	}
	while (head->next)
	{
		sum++;
		sum = head->n;
		head = head->next;
	}
	return (sum);
}
