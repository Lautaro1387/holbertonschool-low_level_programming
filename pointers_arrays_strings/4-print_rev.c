#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - prints a string.
 * @s: PRINTS
 */
void print_rev(char *s)
{
	char c = *s;

	c = strrev(s);
	printf("%s\n", c);
}
