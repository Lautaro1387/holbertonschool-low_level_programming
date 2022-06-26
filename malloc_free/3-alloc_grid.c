#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - Function that returns a pointer to a 2 dimensional.
 * @width: Element.
 * @height: Element.
 * Return: Return two dimensional.
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int b;

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}
	a = malloc(height * sizeof(int *));
	if (a == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < height; b++)
	{
		a[b] = malloc(width * sizeof(int));
		if (a[b] == NULL)
		{
			free(a);
			return (NULL);
		}
	}
	return (a);
}
