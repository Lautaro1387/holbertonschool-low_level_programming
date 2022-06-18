#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * cap_string - Function that capitalizes.
 * @a: Pointer element.
 * Return: Capitalizes all words.
 */
char *cap_string(char *a)
{
	int b, c;
	char sep[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (b = 0; b != '\0'; b++)
	{
		if (b[a] >= 97 && b[a] <= 122)
		{
			c = b[a];
			b[a] = sep[13];
			sep[13] = c;
		}
	}
	return (c);
}


