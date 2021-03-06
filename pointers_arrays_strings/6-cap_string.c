#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * cap_string - Function that capitalizes.
 * @a: Pointer.
 * Return: Capitalizes all words.
 */
char *cap_string(char *a)
{
	int b, c;
	char sep[13] = {' ', '\t', '\n', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}'};

	for (b = 0; b[a] != '\0'; b++)
	{
		if (b == 0 && b[a] >= 97 && b[a] <= 122)
		{
			a[b] -= 32;
		}
		for (c = 0; c < 13; c++)
		{
			if (a[b] == sep[c])
			{
				if (a[b + 1] >= 97 && a[b + 1] <= 122)
				{
					a[b + 1] -= 32;
				}
			}
		}
	}
	return (a);
}


