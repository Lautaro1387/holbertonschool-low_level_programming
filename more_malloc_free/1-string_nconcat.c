#include "main.h"
/**
 * *string_nconcat - Function that concatenates two strings.
 * @*s1: Pointer element.
 * @*s2: Pointer element.
 * @n: Element.
 * Return: s1 + s2.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int c1 = 0, c2 = 0, *c3;

	while (s1 && s1[c1])
	{
		s1++;
	}
	while (s2 && s2[c2])
	{
		s2++;
	}
	if (n >= s2)
	{
		s2[c2];
	}
	else
	{
		return (NUL);
	}
	c3 = malloc(sizeof(int) * c1 + c2 + 1);
	if (c3 == NULL)
	{
		return (NULL);
	}
}
