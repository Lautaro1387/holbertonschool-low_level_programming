#include "main.h"
/**
 * *_calloc - Function taht allocates memory for an array, using malloc.
 * @nmemb: Element.
 * @size: Element.
 * Return: Void.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *a, b, c;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	a = malloc(nmemb);
	if (a == NULL)
	{
		return (NULL);
	}
	return (a);
}
