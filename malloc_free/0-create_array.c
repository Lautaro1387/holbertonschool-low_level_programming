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
	char *string = malloc(sizeof(char));

	if (size == 0)
	{
	return (NULL);
	}
	if (size != 0)
	{
	string[size] = c;
	return (string);
	}
	else
	{
	return (NULL);
	}
}
