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
	for (n = 0; n[s] != '\0'; n++)
	{
		n[s] = b;
		b = b[s];
		b[s] = n[s];
	}
	return (s);
}
