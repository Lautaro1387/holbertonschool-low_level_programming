#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * reverse_array - Function that reverses.
 * @a: Pointer element.
 * @n: Element.
 */
void reverse_array(int *a, int n)
{
	int b, c, d;

	for (c = 0; c < n; c++)
	{
	}
	for (b = 0; b < n && b < c; b++)
	{
		d = a[b];
		a[b] = a[c - b - 1];
		a[c - b - 1] = d;
	}
}
