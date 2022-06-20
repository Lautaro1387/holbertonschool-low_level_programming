#include "main.h"
#include <stdio.h>
/**
 * _strspn - Function that gets the length of a prefix substring.
 * @s: Pointer element.
 * @accept: Pointer element.
 * Return: Gets the length of a prefix substring.
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		accept[a] = s[a];
	}
	return (s[accept]);
}
