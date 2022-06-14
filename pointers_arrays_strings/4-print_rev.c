#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - prints a string.
 * @s: PRINTS
 */
void print_rev(char *s)
{
	char c;

	for (c = "0"; *s != 0; c++)
	{
	for (c = "0"; *s != 0; c--)
	{
	_putchar(c);
	}
	}
	_putchar(10);
}
