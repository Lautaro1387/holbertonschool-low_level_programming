#include "main.h"
/**
 * rev_string - Function that reverses a string.
 */
void rev_string(char *s)
{
	int a, b, c;

	a = strlen(s);

	for (b = a - 1; b != 0; b++)
	{
		_putchar(b[s]);
	}
	_putchar(10);
}
