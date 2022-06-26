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
int a;
unsigned int c1 = 0, c2 = 0;
char *c3;

while (s1 && s1[c1])
{
c1++;
}
while (s2 && s2[c2])
{
c2++;
}
for (a = 0; a < n; a++)
c3 = malloc(sizeof(char) * (c1 + c2 + 1));
if (c3 == NULL)
return (NULL);
while (n >= c2)
{
s2++;
}
c3[n] = '\0';
return (c3);
}
