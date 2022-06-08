#include <stdio.h>
/**
 * main - Number
 * Return: finished
 */
int main(void)
{
int n;
int e;
int m;
for (n = 48 ; n < 58 ; n++)
{
for (e = 49; e < 58 ; e++)
{
for (m = 50; m < 58; m++)
{
if (m > e && e > n)
{
putchar (n);
putchar (e);
putchar (m);
if (n != 55 || e != 56)
{
putchar (44);
putchar (32);
}
}
}
}
}
putchar (10);
return (0);
}
