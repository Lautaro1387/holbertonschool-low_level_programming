#include "main.h"
/**
 * *malloc_checked - Function that allocates memory using malloc.
 * @b: Element.
 */
void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
}
