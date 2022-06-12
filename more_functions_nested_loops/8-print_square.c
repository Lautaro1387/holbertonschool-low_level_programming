#include "main.h"
/**
 * print_square - Function that prints a square, followed by a new line.
 * @size: int
 */
void print_square(int size)
{
int a;

if (size > 0)
{
_putchar(35);
_putchar(10);
for (a = 1; a <= size; a++)
{
_putchar(35);
_putchar(10);
}
}
else
{
_putchar(10);
}
}
