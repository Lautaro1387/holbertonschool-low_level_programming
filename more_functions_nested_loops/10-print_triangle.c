#include "main.h"
/**
 * print_triangle - Function that prints a triangle, followed by a new line.
 * @size: Size of the triangle.
 */
void print_triangle(int size)
{
int a, b;

	if (size > 0)
	{
		for (a = 0; a <= size; a++)
		{
		for (b = a; b <= a; b++)
		{
		_putchar(35);
		}
		}
	else if (size <= 0)
	{
	_putchar(10);
	}
	}
}
