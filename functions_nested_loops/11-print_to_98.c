#include "main.h"
#include <ctype.h>
#include <stdlib.h>
/**
 * print_to_98 - Prints the sign of a number.
 * @n: Check.
 * Return: number 98.
 */
void print_to_98(int n)
{
	int a = 48;

for (n = a; n <= 98; n++)
{
_putchar(n);
_putchar(',');
_putchar(32);
}
}
