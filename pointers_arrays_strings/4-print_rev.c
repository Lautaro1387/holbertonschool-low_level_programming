#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - prints a string.
 * @s: PRINTS
 */
void print_rev(char *s)
{
	int a, b, c;

	while (s[a] != '\0')
	{
		a++;
	}
	b = a;

	for (c = b - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar(10);
}
