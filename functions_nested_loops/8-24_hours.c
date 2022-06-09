#include "main.h"
#include <ctype.h>
#include <stdlib.h>
/**
 * jacl_bauer - Prints the sign of a number.
 * Return: Anything.
 */
void jack_bauer(void)
{
	int min1, min2, hors1, hors2;
	for (min1 = '0'; min1 <= '2'; min1++)
	{
	for (hors1 = '0'; hors1 <= '3'; hors1++)
	{
	_putchar(min1);
	_putchar(hors1);
	_putchar(58);
	}
	}
	for (min2 = '0'; min2 <= '5'; min2++)
	{
	for (hors2 = '0'; hors2 <= '9'; hors2++)
	{
	_putchar(min2);
	_putchar(hors2);
	_putchar(10);
	}
	}
}
