#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * leet - Function that encodes a string into 1337.
 * @a: Encodes a strings.
 * Return: Encodes a strings.
 */
char *leet(char *a)
{
	int e , f;
	char b[] = {4, 3, 0, 7, 1};
	char c[] = {'a', 'e', 'o', 't', 'l'};
	char d[] = {'A', 'E', 'O', 'T', 'L'};

	for (e = 0; a[e] != '\0'; e++)
	{
	for (f = 0; c[f] != '\0'; f++)
	{
		if (a[e] == c[f] || a[e] == b[f])
		{
			c[i] = d[j];
		}
	}
	}
	return (a);
}
