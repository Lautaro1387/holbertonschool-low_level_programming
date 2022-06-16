#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_array - Function that prints n elements.
 * @a, @b: elements.
 */
void print_array(int *a, int n)
{
	int b;
	b = strlen(a);
	strlen(a) = n;

	printf("%d", a[n]);
	_putchar(10);
}
