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

	for (a = 0; s[a] != '\0' && s[a] != c; a++)
	{
		a = *s++;
		if (a == c)
		{
		return (s - 1);
		}
		if (a == 0)
		{
		return (NULL);
		}
	}
}
