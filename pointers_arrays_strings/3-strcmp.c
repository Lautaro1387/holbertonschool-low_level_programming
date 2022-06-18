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
	int comp1;

	for (comp1 = 0; s1[comp1] != '\0'; comp1++)
	{
		s1[comp1] = s2[comp1];
	}
	for (comp1 = 0; s2[comp1] != '\0'; comp1++)
	{
		if (s1[comp1] == s2[comp1])
		{
			comp1++;
		}
		else if ((s1[comp1] == '\0' && s2[comp1] != '\0') || s1[comp1] != s2[comp1])
		{
			comp1 = 1;
		}
		else if (s1[comp1] != '\0' && s2[comp1] == '\0')
		{
			comp1 = 2;
		}
	}
	return (s1);
}
