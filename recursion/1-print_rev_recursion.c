#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - Function that prints a string in reverse.
 * @s: Pointer element.
 */
void _print_rev_recursion(char *s)
{
	int a = 0;

	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(s[a]);
	}
}
