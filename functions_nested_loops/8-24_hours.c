#include "main.h"
#include <ctype.h>
#include <stdlib.h>
/**
 * jack_bauer - Prints the sign of a number.
 * Return: Anything.
 */
void jack_bauer(void)
{
	int min1, min2, hors1, hors2;

	for (hors1 = 48; hors1 <= 50; hors1++)
	{
	for (hors2 = 48; hors2 <= 51; hors2++)
	{
	_putchar(hors1);
	_putchar(hors2);
	if (hors2 >= 48)
	{
		_putchar(58);
	}
	for (min1 = 48; min1 <= 53; min1++)
	{
	for (min2 = 48; min2 <= 57; min2++)
	{
	_putchar(min1);
	_putchar(min2);
	_putchar(10);
	}
	}
	}
	}
}
