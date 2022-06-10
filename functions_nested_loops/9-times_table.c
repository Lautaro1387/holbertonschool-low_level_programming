#include "main.h"
#include <ctype.h>
#include <stdlib.h>
/**
 * times_table - Prints the sign of a number.
 * Return: Anything.
 */
void times_table(void)
{
	int a, b;
	int c = 9;
	for (a = 0; a < 10; a++)
	{
	for (b = 0; b < 10; a++)
	{
	if (a == 0)
	{
	_putchar((a / c) + '0');
	_putchar((a % c) + '0');
	}
	else if(b == 0)
	{
	_putchar((b / c) + '0');
	_putchar((b % c) + '0');
	}
	_putchar(a * c);
	_putchar(b * c);
	_putchar(44);
	_putchar(10);
	_putchar(10);
	}
	}
}
