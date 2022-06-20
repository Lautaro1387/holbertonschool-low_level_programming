#include "main.h"
#include <stdio.h>
/**
 * _strstr - Function that locates a substring.
 * @haystack: Pointer element.
 * @needle: Pointer element.
 * Return: Pointer to the beginning.
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[a] == needle[b])
			{
			return (needle[b]);
			}
		}
	}
	return (NULL);
}
