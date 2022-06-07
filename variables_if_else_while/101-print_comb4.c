#include <stdio.h>
/**
 * main - Number
 * Return: finished
 */
int main(void)
{
int n;
int o = 49;
int m;
int p = 50;
int l;
for (n = 48; n <= 57; n++)
{
for (m = o; m <= 57; m++)
{
for (l = p; l <= 57; l++)
{
putchar(n);
putchar(m);
if (n < 56)
{
putchar(44);
putchar(32);
}
}
o++;
}
p++;
}
putchar(10);
return (0);
}
