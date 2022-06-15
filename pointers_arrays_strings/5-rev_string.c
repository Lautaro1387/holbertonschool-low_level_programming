#include "main.h"
/**
 * rev_string - Function that reverses a string.
 */
void rev_string(char *s)
{
	int a, b;

	a = strlen(s);

	for (b = a - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar(10);
}
