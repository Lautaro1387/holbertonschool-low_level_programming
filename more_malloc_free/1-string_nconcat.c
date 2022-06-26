#include "main.h"
/**
 * *string_nconcat - Function that concatenates two strings.
 * @s1: Pointer element.
 * @s2: Pointer element.
 * @n: Element.
 * Return: s1 + s2.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *a;
unsigned int b = 0, i = 0, c1 = 0, c2 = 0;

while (s1 && s1[c1])
	c1++;
while (s2 && s2[c2])
	c2++;

if (n < c2)
a = malloc(sizeof(char) * (c1 + n + 1));
else
a = malloc(sizeof(char) * (c1 + c2 + 1));

if (!a)
	return (NULL);

while (b < c1)
{
a[b] = s1[b];
b++;
}

while (n < c2 && b < (c1 + n))
a[b++] = s2[i++];

while (n >= c2 && b < (c1 + c2))
a[b++] = s2[i++];

a[b] = '\0';
return (a);
}
