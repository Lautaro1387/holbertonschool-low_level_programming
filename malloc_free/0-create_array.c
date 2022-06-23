#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Function that creates an array of chars.
 * @size: Element.
 * @c: Element.
 * Return: NULL if size = 0.
 */
char *create_array(unsigned int size, char c)
{
	int a = create_array(argv[c]);

	if (size == 0)
	{
	return (NULL);
	}
	if (size != 0)
	{
	return (a);
	}
	else
	{
	return (NULL);
	}
}
