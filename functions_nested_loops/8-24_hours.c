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

	for (hors = 0; hors < 24; hors++)
	{
	for (min = 0; min < 60; min++)
	{
	_putchar((hors % 10) + '0');
	_putchar((hors / 10) + '0');
	_putchar(':');
	_putchar((min % 10) + '0');
	_putchar((min / 10) + '0');
	_putchar(10);
	}
	}
}
