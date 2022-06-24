#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Function that creates an array of chars.
 * @str: Pointer element.
 * Return: NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char a = strlen(str);
	char *c;
	int b;

	if (str == NULL)
	{
	return (NULL);
	}
	c = malloc(a);
	if (c == NULL)
	{
		return (NULL);
	}
	for (b = 0; str[b]; b++)
	{
		c[b] = str[b];
	}
	str[b] = '\0';
	return (c);
}
