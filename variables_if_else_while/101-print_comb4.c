#include <stdio.h>
/**
 * main - Number
 * Return: finished
 */
int main(void)
{
int n;
int o;
int m;
int a = 0;
int b = 0;
for (n = 48; n <= 58; n++)
{
for (o = 49 + a; o <= 57; o++)
{
for (m = 50 + b; m <= 56; m++)
{
putchar(n);
putchar(o);
putchar(m);
if (n < 55)
{
putchar(44);
putchar(32);
}
}
b++;
}
a++;
}
putchar(10);
return (0);
}
