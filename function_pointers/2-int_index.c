#include "function_pointers.h"
/**
 * int_index - Function.
 * @array: Pointer element.
 * @size: Element.
 * @cmp: Function pointer.
 * Return: size2.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int size2, x;

        if (size <= 0)
        {
                return (-1);
        }
	if (cmp && array)
	{
	for (size2 = 0; size2 < size; size2++)
		x = cmp(array[size2]);
	if (x != 0)
	{
		return (size2);
	}
	}
	return (-1);
}
