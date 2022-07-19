#include "main.h"
/**
 * clear_bit - Function.
 * @n: Pointer element of type unsigned long int.
 * @index: Element of type unsigned int.
 * Return: int.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(8) * 8)
	{
		return (-1);
	}
	*n &= ~(1 << index); 
	return (1);
}
