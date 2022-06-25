#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Function that concatenates two strings.
 * @s1: Pointer element.
 * @s2: Pointer element.
 * Return: NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int a;
	char c1 = strlen(s1);
	char c2 = strlen(s2);
	char *c;

	if (s1 == NULL)
	return (NULL);
	if (s2 == NULL)
	return (NULL);
	c = malloc(c1 + c2 + 1);
	for (a = 0; s1[a] && s2[a]; a++)
		c[a] = s1[a] + s2[a];
	if (c == NULL)
	{
		return (NULL);
	}
	c[a] = '\0';
	return (c);
}
