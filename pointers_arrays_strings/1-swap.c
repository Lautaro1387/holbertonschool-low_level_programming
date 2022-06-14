#include "main.h"
#include <stdio.h>
/**
 * swap_int - Function that swaps the values of two integers.
 * @a: int.
 * @b: int.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
