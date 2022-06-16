#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - Function that concatenates two strings.
 * @dest: Element.
 * @char: Element.
 * @n: Element.
 * Return: return.
 */
char *_strncat(char *dest, char *src, int n)
{
	for (a = 0; dest[a] != 0; a++)
	{
	}
	for (b = 0; b < n && src[b] != 0; b++)
	{
	dest[a] = src[b];
        a++;
	}
	return (dest); 
}
