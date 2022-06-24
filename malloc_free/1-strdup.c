#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Function that creates an array of chars.
 * @str: Pointer element.
 * Return: NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *c = malloc(sizeof(a));
	char a = strlen(str);
	int b;

	if (c == NULL)
	{
		return (NULL);
	}
	if (a == NULL)
	{
		return (NULL);
	}
	for (b = 0; str[b] != '\0'; b++)
	{
		c[b] = str[b];
	}
	if (a != 0)
	{
	return (NULL);
	}
	return (c);
}
