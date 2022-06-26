#include "main.h"
/**
 * *array_range - Function that creates an array of integers.
 * @min: Element.
 * @max: Element.
 * Return: min + max.
 */
int *array_range(int min, int max)
{
	int *a, b, c;

	if (min > max)
	{
		return (NULL);
	}
	a = malloc(sizeof(int) * (max * min));
	if (a == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < min; b++)
	{
		a[b] = min;
	}
	for (c = 0; c < max; c++)
	{
		a[c] = max;
	}
	return (a);
}
