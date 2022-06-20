#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - Function that searches a string for any.
 * @s: Pointer element.
 * @accept: Pointer element.
 * Return: 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				s[a] = accept[b];
				return (s);
			}
			else if (s[a] == 0)
			{
				return (NULL);
			}
		}
	}
	return (0);
}
