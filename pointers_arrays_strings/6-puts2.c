#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - Function that prints every other character of a string.
 * @str: Character.
 */
void puts2(char *str)
{
	int a, b, c;

	b = strlen(str);
	for (a = 0; a * 2; a++)
	{
		c = str[a];
		str[a] = str[b / 2];
		str[b / 2] = c;
	}
}
