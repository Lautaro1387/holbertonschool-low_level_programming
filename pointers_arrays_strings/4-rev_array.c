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
	int b, d;

	for (b = 0; b < n; b++)
	{
		d = a[b];
	}
	for (b = 0; b < n; b++)
	{
		if (b > n)
		{
		d = a[b];
		a[b] = a[n - b - 1];
		a[n - b - 1] = d;
		}
	}
}
