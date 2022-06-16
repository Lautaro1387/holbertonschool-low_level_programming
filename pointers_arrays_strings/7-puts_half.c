#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - Function that prints half of a string.
 * @str: Character.
 */
void puts_half(char *str)
{
	int a, b, c;

	b = strlen(str);
	c = (b - 1) / 2;
	for (a = 0; a < b; a++)
	{
		if (a == 0)
		{
		str[a] = c;
		_putchar(str[a]);
		}
		else if (b == 0)
		{
		_putchar(str[a]);
		}
	}
	_putchar(10);
}
