#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_array - Function that prints n elements.
 * @a: element.
 * @n: element.
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		if (!(b == n - 1))
		{
		printf("%d, ", a[b]);
		}
		else if (b == n - 1)
		{
		printf("%d", a[b]);
		}
	}
	putchar(10);
}
