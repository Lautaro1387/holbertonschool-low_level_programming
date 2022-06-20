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
	int b = 0;

	if (s[a] != '\0')
	{
		return (b);
	}
	else
	{
		b++;
	}
	return (_strlen_recursion(s, a + 1));
}
