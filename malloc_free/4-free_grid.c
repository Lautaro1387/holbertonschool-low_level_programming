#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - Function that frees a 2 dimensional.
 * @grid: Pointer element.
 * @height: Element.
 */
void free_grid(int **grid, int height)
{
	int b;

	grid = malloc(sizeof(int));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < height; b++)
	{
		gird = malloc(sizeof(int) * height);
		free(grid[b]);
	}
	return (grid);
}
