#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - prints a string.
 * @s: PRINTS
 */
void print_rev(char *s)
{
	int c = 0;

	for (s + c; *s != 0; c++)
	{
	for (s + c -1; *s != 0; c--)
	{
	_putchar(s + c -1);
	}
	}
	_putchar(10);
}
