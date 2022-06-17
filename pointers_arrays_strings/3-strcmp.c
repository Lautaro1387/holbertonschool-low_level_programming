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

	for (s1 = 0; s1 != '\0'; s1++)
	{
		if (s1 == s2)
		{
			s1++;
			s2++;
		}
		else if ((s1 == '\0' && s2 != '\0'))
		{
			comp = 1;
		}
	}
