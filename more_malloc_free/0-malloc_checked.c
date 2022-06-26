#include "main.h"
/**
 * *malloc_checked - Function that allocates memory using malloc.
 * @b: Element.
 */
void *malloc_checked(unsigned int b)
{
	int *a, c;

	a = malloc(sizeof(a) * c);
	if (a == NULL)
	{
		exit(98);
	}
	for (b = 0; b < c; b++)
	{
	a[b] = b;
	}
}
