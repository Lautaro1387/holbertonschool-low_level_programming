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
	char a;

	for (a = 0; a[s] != '\0'; a++)
	{
		if (a == a[s])
		{
		a[s] = c;
		return (c);
		}
		else if (a != a[s])
		{
		return (NULL);
		}
	}
	return (c || NULL);
}
