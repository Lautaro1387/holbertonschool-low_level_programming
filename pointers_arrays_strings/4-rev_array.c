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

	c = n - 1;
	for (b = 0; b < n / 2; b++)
	{
		d = a[b];
		a[b] = a[c];
		a[c--] = d;
	}
}
