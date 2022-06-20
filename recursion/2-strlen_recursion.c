#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - Function that returns the length of a string.
 * @s: Pointer element.
 * Return: The length of a string.
 */
int _strlen_recursion(char *s)
{
	int b = 0;
	int a;

	if (*s != '\0')
	{
		b = 1 + _strlen_recursion(s + 1);
	}
	else
	{
		_putchar(10);
	}
	return (b);
}
