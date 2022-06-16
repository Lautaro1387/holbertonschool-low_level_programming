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
	int a, b , c;

	for (a = 0; dest[a] != 0; a++)
	{
	for (b = 0; src[b] !=0; b++)
	{
	c = dest[a];
	dest[a] = src[b];
	src[b] = c;
	a++;
	}
	}
	return (c);
}
