#include "main.h"
/**
 * print_triangle - Function that prints a triangle, followed by a new line.
 * @size: Size of the triangle.
 */
void print_triangle(int size)
{
int a, b, c, x;
x = 1;
if (size <= 0)
{
_putchar(10);
}
else if (size > 0)
{
for (a = 1; a <= size; a++)
{
for (b = 1; b <= (size - x); b++)
{
_putchar(' ');
}
for (c = 1; c <= a; c++)
{
_putchar(35);
}
x = x + 1;
_putchar(10);
}
}
}
