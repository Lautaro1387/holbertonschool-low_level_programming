#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memset - Function that fills memory.
 * @s: Pointer element.
 * @b: Element.
 * @n: Element.
 * Return: Fills memory with a constant byte.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
