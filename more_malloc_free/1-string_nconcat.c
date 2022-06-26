#include "main.h"
#include <string.h>
/**
 * *string_nconcat - Function that concatenates two strings.
 * @s1: Pointer element.
 * @s2: Pointer element.
 * @n: Element.
 * Return: s1 + s2.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int b;
int c1, c2, c3, i;
char *a;

c1 = strlen(s1);
c2 = strlen(s2);
c3 = c1 + c2 + 1;

a = malloc(c3);
if (a == NULL)
{
	return (NULL);
}
for (b = 0; b < n; b++)
a[b] = n;
for (i = 0; i < c1; i++)
a[i] = s1[i];

for (i = 0; i < c2; i++)
a[i+c1] = s2[i];
a[i]='\0';
return (a);
}
