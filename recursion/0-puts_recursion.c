#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - Function that prints a string.
 * @s: Pointer element.
 */
void _puts_recursion(char *s)
{
	int a;

	_putchar(s[a]);
	_puts_recursion(s);
	_putchar(10);
}
