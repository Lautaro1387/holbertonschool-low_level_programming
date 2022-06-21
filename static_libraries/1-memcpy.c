#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _memcpy - Function that copies memory area.
 * @dest: Pointer element.
 * @src: Pointer element.
 * @n: Element.
 * Return: Copies memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
