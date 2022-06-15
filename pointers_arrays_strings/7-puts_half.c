#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - Function that prints half of a string.
 * @str: Character.
 */
void puts_half(char *str)
{
	int a, b;

	b = strlen(str);
	for (a = 0; a < b; a++)
	{
		if (a % 2 == 0)
		{
		_putchar((b - 1) / 2);
		}
	}
	_putchar(10);
}
