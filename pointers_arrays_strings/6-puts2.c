#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - Function that prints every other character of a string.
 * @str: Character.
 */
void puts2(char *str)
{
	int a, b;

	b = strlen(str);

	for (a = 0; a < b; a += 2)
	{
		_putchar(str[a]);
		if (b % 2 == 0)
		{
		_putchar(str[a]);
		}
	}
	_putchar(10);
}
