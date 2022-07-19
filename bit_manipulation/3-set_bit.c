#include "main.h"
/**
 * set_bit - Function.
 * @n: Pointer element of type unsigned long int.
 * @index: Element of type unsigned int.
 * Return: int.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(*n)) - 1)
	{

		return (-1);
	}
		*n = *n | (1 << index);
	return (1);
}
