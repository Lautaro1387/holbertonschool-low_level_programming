#include "search_algos.h"
/**
 * binary_search - Function.
 * @array: array.
 * @size: size.
 * @value: value.
 * Return: int.
 */
int binary_search(int *array, size_t size, int value)
{
	int i, j, mod = 0, n = (int)size - 1;

	if (!array)
		return (-1);
	for (i = 0; i < size - 1; i++)
	{
		printf("Searching in array: %d\n", i);
		for (j = i; j < size - 1; j++)
		{
			printf("%d, ", array[j]);
			mod = (i + size - 1) / 2;
			if (array[mod] == value)
				return (mod);
			if (value < array[mod])
				size - 1 = mod - 1;
			else if (value > array[mod])
				i = mod + 1;
		}
		printf("%d\n", array[i]);
	}
	if (array[mod] == value)
		return (mod);
	return (-1);
}
