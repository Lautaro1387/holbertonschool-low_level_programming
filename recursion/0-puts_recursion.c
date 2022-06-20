#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - Function that prints a string.
 * @s: Pointer element.
 */
void _puts_recursion(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		printf("%d\n", a);
	}
}
