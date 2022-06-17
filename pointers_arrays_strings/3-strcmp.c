#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcmp - Function that compares two strings.
 * @s1: First element.
 * @s2: Second element.
 * Return: s1.
 */
int _strcmp(char *s1, char *s2)
{
	int comp = 0;

	for (comp = 0; s1[comp] != '\0'; comp++)
	{
		if (comp == s1) || (comp == s2)
		{
			s1++;
			s2++;
		}
		else if ((comp == '\0' && comp != '\0'))
		{
			comp = 1;
		}
	}
}
