#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncpy - Function that copies a string.
 * @dest: Element.
 * @src: Element.
 * @n: Element.
 * Return: return.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	for ( ; a < n; a++)
	{
	dest[a] = '\0';
	}
	return (dest);
}
