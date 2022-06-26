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
unsigned int b = 0, i = 0;
int c1 = 0, c2 = 0;
char *a;

c1 = strlen(s1);
c2 = strlen(s2);

if (n < c2)
a = malloc(sizeof(char) * (c1 + n + 1));
else
a = malloc(sizeof(char) * (c1 + c2 + 1));

if (a == NULL)
{
	return (NULL);
}

for (; b < c1;)
a[b] = s1[b];
b++;

for (; n < c2 && b < (c1 + n);)
a[b++] = s2[i++];

for (; n >= c2 && b < (c1 + c2);)
a[b++] = s2[i++];

a[b] = '\0';
return (a);
}
