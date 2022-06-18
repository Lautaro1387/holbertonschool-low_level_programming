#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * string_toupper - Function that changes all lowercase letters.
 * @s: Pointer element.
 * Return: return letters lowercase.
 */
char *string_toupper(char *s)
{
	int a;

	for (a = 0; a[s] != '\0'; a++)
	{
		if (a[s] >= 97 && a[s] <= 122)
		{
			a[s] = a[s] - 32;
		}
	}
	return (s);
}
