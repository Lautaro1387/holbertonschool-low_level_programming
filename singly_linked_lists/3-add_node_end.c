#include "lists.h"
/**
 * add_node - Function.
 * @head: Pointer double element.
 * @str: Const element.
 * Return: list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list;
	list_t *new_new;

	new_list = malloc(sizeof(list_t));

	if (!new_list)
	{
		return (NULL);
	}
	new_list->str = strdup(str);
	if (!new_list->str)
	{
		free(new_list);
		return (NULL);
	}
	new_list->len = strlen(new_list->str);
	new_list->next = NULL;
	if (*head == NULL)
	{
		*head = new_list;
	}
	else
	{
		new_new = *head;
			while (new_new->next)
			new_new = new_new->next;
			new_new->next = new_list;
	}
	return (*head);
}
