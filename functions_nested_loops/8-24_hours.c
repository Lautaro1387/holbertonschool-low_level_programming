#include "main.h"
#include <ctype.h>
#include <stdlib.h>
/**
 * jack_bauer - Prints the sign of a number.
 * Return: Anything.
 */
void jack_bauer(void)
{
	int min, hors;

	for (hors = 48; hors <= 51; hors++)
	{
	for (min = 48; min <= 51; min++)
	{
	_putchar(hors);
	_putchar(min);
	_putchar(58);
	_putchar(hors);
	_putchar(min);
	_putchar(10);
	}
	}
}
