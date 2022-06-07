#include <stdio.h>
/**
 * main - Number
 * Return: finished
 */
int main(void)
{
int n;
for (n = 48; n <= 57; n++)
{
putchar(n);
if (n < 57)
{
putchar(',');
putchar(' ');
}
else if (n > 0)
{
putchar(n);
}
}
putchar('\n');
return (0);
}
