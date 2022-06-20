#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen_recursion - Function that returns the length of a string.
 * @s: Pointer element.
 * Return: The length of a string.
 */
int _strlen_recursion(char *s)
{
	int a = strlen(s);

	if (*s != '\0')
	{
		_strlen_recursion(s);
		_putchar(s[a]);
	}
	return (1 + _strlen_recursion(s + 1));
}
