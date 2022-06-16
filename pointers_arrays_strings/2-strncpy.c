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
	int a, b;

	for (a = 0; a < n && dest[a] != 0; a++)
	{
	for (b = 0; b < n && src[b] != 0; b++)
	{
	dest[a] = src[b];
	a++;
	}
	}
	return (dest);
}
