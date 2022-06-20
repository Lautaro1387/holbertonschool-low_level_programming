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

	if (*s != '\0')
	{
		b++;
	}
	else
	{
		_strlen_recursion(&s[b] + 1);
	}
	return (b);
}
