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
	int *a;
	int b = 0, c = 0, height = 0, width = 0;

	while (b < width)
	{
	width++;
	}
	while (b < heigth)
	{
	height++;
	}
	a = malloc(width * height * sizeof(int));
	if (a == NULL)
	{
		return (NULL);
	}
	while (c < width && c < height)
	{
		a[c] = width;
		a[c] = heigth;
		c++;
	}
	if ((width[a] == 0 && height[a] == 0) || (width[a] < 0 && height[a] < 0))
	{
		return (NULL);
	}
	return (a*);
}
