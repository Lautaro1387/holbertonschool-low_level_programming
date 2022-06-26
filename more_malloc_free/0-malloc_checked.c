#include "main.h"
/**
 * *malloc_checked - Function that allocates memory using malloc.
 * @b: Element.
 */
void *malloc_checked(unsigned int b)
{
	int *a, c;

	a = malloc(sizeof(*a) * b);
	if (a == NULL)
	{
		exit(98);
	}
	for (c = 0; c < b; c++)
	{
	a[c] = c;
	}
}
