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
int a = 1;
int b = 1;
for (n = 48; n <= 57; n++)
{
for (o = 49 + a; o <= 58; o++)
{
for (m = 50 + b; m <= 59; m++)
{
putchar(n);
putchar(m);
putchar(l);
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
