#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Function that concatenates two strings.
 * @s1: Pointer element.
 * @s2: Pointer element.
 * Return: NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int a;
	char *c;

	if (s1 == NULL)
	return (NULL);
	if (s2 == NULL)
	return (NULL);
	c = malloc(sizeof(char) s1 + s2 + 1)
	for (a = 0; s1[a] && s2[a]; a++)
		c[a] = s1[a] + s2[a];
	if (c == NULL)
	{
		return (NULL);
	}
	return (c);
}
