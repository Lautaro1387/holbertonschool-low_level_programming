#include "main.h"
/**
 * get_bit - Function.
 * @n: Element of type unsigned long int.
 * @index: Element of tpye unsigned int.
 * Return: int.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 2))
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
