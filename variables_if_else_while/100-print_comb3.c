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
for (n = 48; n <= 57; n++)
{
for (m = o; m <= 57; m++)
{
putchar(n);
putchar(m);
if (n < 57)
{
putchar(44);
putchar(32);
}
}
}
putchar(10);
return (0);
}
