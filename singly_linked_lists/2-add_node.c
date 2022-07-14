#include "lists.h"
/**
 * add_node - Function.
 * @head: Pointer double element.
 * @str: Const element.
 * Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_list;

	new_list = malloc(sizeof(list_t));
	if (new_list == NULL)
	{
		return (NULL);
	}
	new_list->str = strdup(str);
	if (new_list->str == NULL)
	{
		free(new_list);
		return (NULL);
	}
	new_list->len = strlen(new_list->str);
	new_list->next = *head;
	*head = new_list;
	new_list = NULL;
	free(new_list);
	return (*head);
}
