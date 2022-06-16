#include "main.h"
#include <string.h>
#include <stdio.h>
#include <cstring>
/**
 * _strcpy - Function.
 * @dest: Argument.
 * @src: Argument.
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(*dest, *src);
	return (*dest);
