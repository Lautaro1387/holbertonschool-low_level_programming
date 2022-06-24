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
	char *c;
	int b, d = 1;

	if (str == NULL)
	{
	return (NULL);
	}
	c = malloc(sizeof(char) * d + 1);
	if (c == NULL)
	{
		return (NULL);
	}
	for (b = 0; str[b]; b++)
	{
		c[b] = str[b];
	}
	return (c);
}
