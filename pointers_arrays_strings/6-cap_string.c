#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * cap_string - Function that capitalizes all words of a string.
 * @a: Pointer element.
 * Return: Capitalizes all words.
 */
char *cap_string(char *a)
{
	int b;

	for (b = 0; b != '\0'; b++)
	{
		if (b[a] > 65 && b[a] <= 90)
		{
			b[a] = b[a];
		}
	}
	return (a);
}


