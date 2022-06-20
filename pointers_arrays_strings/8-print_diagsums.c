#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Function that prints the sum of the two diagonals.
 * @a: Pointer element.
 * @size: Size element.
 */
void print_diagsums(int *a, int size)
{
	int b, c, d;
	int e = 0;
	int f = 0;

	for (b = 0; b < size; b++)
	{
	d = (b * size) - b;
	e += a[d];
	}
	for (c = 1; c <= size; c++)
	{
	d = (c * size) - c;
	f += a[d];
	}
	printf("%d, %d", e, f);
}
