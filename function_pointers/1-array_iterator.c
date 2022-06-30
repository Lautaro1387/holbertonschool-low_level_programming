#include "function_pointers.h"
/**
 * array_iterator - Function pointers.
 * @array: Pointer element.
 * @size: Element.
 * @action: Pointer element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (action && array)
	{
		for (a = 0; a < size; a++)
		(*action)(array[a]);
	}
}
