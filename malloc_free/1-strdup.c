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
	char *a = malloc(sizeof(*str));
	unsigned char c = 0;
	unsigned int b;

	if (a == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	for (b = 0; str[b] != '\0'; b++)
	{
		str[b] = c;
		c = *a;
		*a = str[b];
	}
	if (a != 0)
	{
	return (NULL);
	}
	return (a);
}
