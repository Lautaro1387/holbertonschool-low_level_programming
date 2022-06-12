#include "main.h"
/**
 * print_square - Function that prints a square, followed by a new line.
 * @size: int
 */
void print_square(int size)
{
int a, b;

if (size <= 0)
{
	_putchar(10);
}
else if (size > 0)
{
	for (a = 1; a <= size; a++)
	{
	for (b = 1; b <= size; b++)
	{
	_putchar(35);
	}
	}
	_putchar(10);
}
}
