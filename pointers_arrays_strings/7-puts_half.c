#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - Function that prints half of a string.
 * @str: Character.
 */
void puts_half(char *str)
{
	int a, b, d;

	b = strlen(str);
	a = 0;

	if (b % 2 == 0)
	{
	for (a = b / 2; str[a] != '\0'; a++)
	{
	_putchar(str[a]);
	}
	}
	else if (b % 2)
	{
	for (d = (b - 1) / 2; d < b - 1; d++)
	{
	_putchar(str[d + 1]);
	}
	}
	_putchar(10);
}
