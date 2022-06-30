#include "function_pointers.h"
/**
 * int_index - Function.
 * @array: Pointer element.
 * @size: Element.
 * @cmp: Function pointer.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int size2;

	if (cmp && array)
	for (size2 = 0; size2 < size; size2++)
	(*cmp)(array[size2]);
	if(!cmp)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	return (size2);
}
