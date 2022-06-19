#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strchr - Function that locates a character in a string.
 * @s: Pointer element.
 * @c: Element.
 * Return: Locates a character in a string.
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; a[s] != '\0' && a[s] != c; a++)
	{
		if (a == c)
		{
		return (s - 1);
		}
		else if (a == 0)
		{
		return (NULL);
		}
	}
	return (0);
}
